---
manifest_schema_version: "1.1"
source_pdf: "ADC_User_Manual.pdf"
source_pdf_sha256: "292dd45707818e6fe14eb79b4c22e5f40542e128712d93fb302d99f1d9d43d0c"
source_pdf_size_bytes: 2302548
pdf_page_count: 87
generated_at: "2026-06-19T07:48:34Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.4.1"
source_document_id: null
source_document_revision: "Rev.0.5"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: ADC_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables, figures and screenshot blocks are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `ADC_User_Manual.pdf`
- `source_pdf_sha256`: `292dd45707818e6fe14eb79b4c22e5f40542e128712d93fb302d99f1d9d43d0c`
- `source_pdf_size_bytes`: `2302548`
- `pdf_page_count`: `87`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.5`
- `visible_cover_title`: `FC7xxx ADC User Manual`
- `visible_cover_revision`: `Rev. 0.5`
- `revision_history_latest_row`: `0.5 / 2024/01/17 / Updated for MCAL V0.5.0 release`
- `generated_at`: `2026-06-19T07:48:34Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.4.1`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `61`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index semantic sequence diagrams and generated image-block anchors for Tresos screenshots; do not OCR every screenshot pixel into source text`

## 2. Global Summary

- `topic`: FC7xxx AUTOSAR MCAL ADC driver user manual for software design, APIs and Tresos configuration.
- `module_scope`: AUTOSAR ADC requirement tracing, rejected requirements, source/header file structure, macro definitions, enums, typedefs, structures, public APIs, low-level hardware functions, API sequence diagrams, EB tresos/ECUC configuration containers and configuration guide steps.
- `key_chapters`: Chapter 2 Software Design; Chapter 3 Tresos Configuration Items; Chapter 4 Configuration Guides.
- `key_terms`: AUTOSAR_SWS_ADCDriver, SWS_Adc, Adc_Init, Adc_SetupResultBuffer, Adc_StartGroupConversion, Adc_ReadGroup, Adc_GetGroupStatus, AdcConfigSet, AdcHwUnit, AdcChannel, AdcGroup, AdcGeneral, Ptimer, DMA, DET, DEM.
- `summary`: This 87-page manual describes the FC7xxx ADC MCAL driver, including supported and rejected AUTOSAR behavior, generated macros and version IDs, ADC data types and configuration structures, public and internal function descriptions, conversion/trigger sequence diagrams, and detailed Tresos configuration items for hardware units, channels, groups, general switches and DEM events.
- `retrieval_note`: For API or configuration questions, first search the Term/API/Config index for the symbol, then use physical_page and section_path to verify exact declarations, property ranges or screenshots in the source PDF.

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: `Cover`
- `path`: `Cover`
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["FC7xxx ADC User Manual", "Rev.0.5"]
- `anchor`: `FC7xxx ADC User Manual`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Revision History", "MCAL V0.5.0", "2024/01/17"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["Table of Contents", "Chapter 1", "Chapter 4"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `ADC Introduction`
- `path`: `Chapter 1 ADC Introduction`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Requirement Tracing", "Hardware Summary", "AUTOSAR_SWS_ADCDriver"]
- `anchor`: `Chapter 1 ADC Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Requirement Tracing`
- `path`: `Chapter 1 ADC Introduction / 1.1 Requirement Tracing`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["AUTOSAR Classic Platform Release R20-11", "AUTOSAR_SWS_ADCDriver"]
- `anchor`: `Requirement Tracing`

### SEC-001-002
- `source_number`: `1.2`
- `title`: `Hardware Summary`
- `path`: `Chapter 1 ADC Introduction / 1.2 Hardware Summary`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["ADC group", "ADC channel", "4 ADC instances", "32 logical ADC channels", "Ptimer"]
- `anchor`: `Hardware Summary`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Software Design`
- `path`: `Chapter 2 Software Design`
- `physical_page_start`: `6`
- `physical_page_end`: `50`
- `printed_page_start`: `6`
- `printed_page_end`: `50`
- `keywords`: ["Rejected Requirements", "File Structure", "Macros", "Enums", "Typedefs", "Structures", "API Functions", "Hardware Functions", "Sequence Diagram"]
- `anchor`: `Chapter 2 Software Design`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Rejected Requirements`
- `path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `physical_page_start`: `6`
- `physical_page_end`: `12`
- `printed_page_start`: `6`
- `printed_page_end`: `12`
- `keywords`: ["SWS_Adc", "Rejected Requirement", "Type II", "power state", "hardware priority", "ECUC partition"]
- `anchor`: `Rejected Requirements`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `File Structure`
- `path`: `Chapter 2 Software Design / 2.2 File Structure`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Adc.c", "Adc.h", "Det.h", "SchM_Adc.h", "Adc_Reg.h"]
- `anchor`: `2.2 File Structure`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Macros`
- `path`: `Chapter 2 Software Design / 2.3 Macros`
- `physical_page_start`: `12`
- `physical_page_end`: `20`
- `printed_page_start`: `12`
- `printed_page_end`: `20`
- `keywords`: ["ADC_E_*", "service ID", "ADC_UNIT", "ADC_PRIORITY", "ADC_DMA_SUPPORT"]
- `anchor`: `2.3 Macros`

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: `Macros in Adc.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Adc.h`
- `physical_page_start`: `12`
- `physical_page_end`: `15`
- `printed_page_start`: `12`
- `printed_page_end`: `15`
- `keywords`: ["ADC_E_UNINIT", "ADC_INIT_ID", "ADC_SETUPRESULTBUFFER_ID"]
- `anchor`: `Macros in Adc.h`

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: `Macros in Adc_types.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Adc_types.h`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["ADC_BITS_RESOLUTION_12", "ADC_CLOCK_DIVIDE_BY_1"]
- `anchor`: `Macros in Adc_types.h`

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: `Macros in Adc_version.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Adc_version.h`
- `physical_page_start`: `15`
- `physical_page_end`: `16`
- `printed_page_start`: `15`
- `printed_page_end`: `16`
- `keywords`: ["ADC_AR_RELEASE_MAJOR_VERSION", "ADC_SW_PATCH_VERSION", "ADC_VENDOR_ID"]
- `anchor`: `Macros in Adc_version.h`

### SEC-002-003-004
- `source_number`: `2.3.4`
- `title`: `Macros in Adc_Cfg.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Adc_Cfg.h`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ADC_CFG_*", "ADC_CFGSET_GROUP_x_CHANNELS"]
- `anchor`: `Macros in Adc_Cfg.h`

### SEC-002-003-005
- `source_number`: `2.3.5`
- `title`: `Macros in Adc_CfgDefines.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.5 Macros in Adc_CfgDefines.h`
- `physical_page_start`: `16`
- `physical_page_end`: `20`
- `printed_page_start`: `16`
- `printed_page_end`: `20`
- `keywords`: ["ADC_MULTICORE_SUPPORT", "ADC_HW_TRIGGER_API", "ADC_PRIORITY_IMPLEMENTATION", "ADC_MAX_HW_UNITS"]
- `anchor`: `Macros in Adc_CfgDefines.h`

### SEC-002-004
- `source_number`: `2.4`
- `title`: `Enums`
- `path`: `Chapter 2 Software Design / 2.4 Enums`
- `physical_page_start`: `20`
- `physical_page_end`: `26`
- `printed_page_start`: `20`
- `printed_page_end`: `26`
- `keywords`: ["Adc_GroupConversionStateType", "Adc_StatusType", "Adc_TriggerSourceType", "Ptimer_ClockPreDividerType"]
- `anchor`: `2.4 Enums`

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: `Enumerations in Adc_Types.h`
- `path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Adc_Types.h`
- `physical_page_start`: `20`
- `physical_page_end`: `23`
- `printed_page_start`: `20`
- `printed_page_end`: `23`
- `keywords`: ["Adc_GroupAccessModeType", "Adc_StatusType", "Adc_ChannelRangeSelectType"]
- `anchor`: `Enumerations in Adc_Types.h`

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: `Enumerations in Adc_Hw_Types.h`
- `path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Adc_Hw_Types.h`
- `physical_page_start`: `23`
- `physical_page_end`: `25`
- `printed_page_start`: `23`
- `printed_page_end`: `25`
- `keywords`: ["Adc_AlignType", "Adc_TrigModeType", "Adc_SeqModeType", "Adc_AverageType"]
- `anchor`: `Enumerations in Adc_Hw_Types.h`

### SEC-002-004-003
- `source_number`: `2.4.3`
- `title`: `Enumerations in Adc_Ptimer_Hw_Types.h`
- `path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Adc_Ptimer_Hw_Types.h`
- `physical_page_start`: `25`
- `physical_page_end`: `26`
- `printed_page_start`: `25`
- `printed_page_end`: `26`
- `keywords`: ["Ptimer_LoadValueModeType", "Ptimer_ClockPreDividerType", "Ptimer_TrgSrcType"]
- `anchor`: `Enumerations in Adc_Ptimer_Hw_Types.h`

### SEC-002-005
- `source_number`: `2.5`
- `title`: `Typedefs`
- `path`: `Chapter 2 Software Design / 2.5 Typedefs`
- `physical_page_start`: `26`
- `physical_page_end`: `28`
- `printed_page_start`: `26`
- `printed_page_end`: `28`
- `keywords`: ["Adc_NotifyType", "Adc_ChannelType", "Adc_GroupType", "Adc_ValueGroupType"]
- `anchor`: `2.5 Typedefs`

### SEC-002-006
- `source_number`: `2.6`
- `title`: `Structures`
- `path`: `Chapter 2 Software Design / 2.6 Structures`
- `physical_page_start`: `28`
- `physical_page_end`: `32`
- `printed_page_start`: `28`
- `printed_page_end`: `32`
- `keywords`: ["Adc_ConfigType", "Adc_HwUnitConfigurationType", "Adc_GroupConfigurationType", "Adc_ChannelConfigurationType"]
- `anchor`: `2.6 Structures`

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: `Adc_ConfigType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Adc_ConfigType`
- `physical_page_start`: `28`
- `physical_page_end`: `29`
- `printed_page_start`: `28`
- `printed_page_end`: `29`
- `keywords`: ["pAdc", "pGroups", "pChannels", "GroupIndex"]
- `anchor`: `Adc_ConfigType`

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: `Adc_HwUnitConfigurationType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Adc_HwUnitConfigurationType`
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["AdcHardwareUnitId", "u32AdcCfg1Register", "PreDiv", "Res"]
- `anchor`: `Adc_HwUnitConfigurationType`

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: `Adc_GroupConfigurationType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.3 Adc_GroupConfigurationType`
- `physical_page_start`: `29`
- `physical_page_end`: `30`
- `printed_page_start`: `29`
- `printed_page_end`: `30`
- `keywords`: ["eTriggerSource", "u8DmaChannel", "Notification", "NumSamples"]
- `anchor`: `Adc_GroupConfigurationType`

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: `Adc_ChannelConfigurationType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.4 Adc_ChannelConfigurationType`
- `physical_page_start`: `30`
- `physical_page_end`: `31`
- `printed_page_start`: `30`
- `printed_page_end`: `31`
- `keywords`: ["SampleTimeOpt", "ChannelHighLimit", "ChannelLowLimit"]
- `anchor`: `Adc_ChannelConfigurationType`

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: `Adc_UnitStatusType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Adc_UnitStatusType`
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["SwNormalQueueIndex", "ADC_QUEUE_MAX_DEPTH_MAX", "HwNormalQueue"]
- `anchor`: `Adc_UnitStatusType`

### SEC-002-006-006
- `source_number`: `2.6.6`
- `title`: `Adc_GroupStatusType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.6 Adc_GroupStatusType`
- `physical_page_start`: `31`
- `physical_page_end`: `32`
- `printed_page_start`: `31`
- `printed_page_end`: `32`
- `keywords`: ["CurrentChannel"]
- `anchor`: `Adc_GroupStatusType`

### SEC-002-007
- `source_number`: `2.7`
- `title`: `API Functions`
- `path`: `Chapter 2 Software Design / 2.7 API Functions`
- `physical_page_start`: `32`
- `physical_page_end`: `35`
- `printed_page_start`: `32`
- `printed_page_end`: `35`
- `keywords`: ["Adc_Init", "Adc_SetupResultBuffer", "Adc_ReadGroup", "Adc_GetGroupStatus"]
- `anchor`: `2.7 API Functions`

### SEC-002-008
- `source_number`: `2.8`
- `title`: `Hardware Functions`
- `path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `physical_page_start`: `35`
- `physical_page_end`: `42`
- `printed_page_start`: `35`
- `printed_page_end`: `42`
- `keywords`: ["Adc_HL_Init", "Adc_LL_StartNormalConversion", "Adc_Ptimer_StartSoftwareConversion"]
- `anchor`: `2.8 Hardware Functions`

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: `Functions in Adc_Hw.h`
- `path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Adc_Hw.h`
- `physical_page_start`: `35`
- `physical_page_end`: `37`
- `printed_page_start`: `35`
- `printed_page_end`: `37`
- `keywords`: ["Adc_HL_Init", "Adc_HL_EnableHardwareTrigger", "Adc_HL_ReadGroup"]
- `anchor`: `Functions in Adc_Hw.h`

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: `Functions in Adc_Lld.h`
- `path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Adc_Lld.h`
- `physical_page_start`: `37`
- `physical_page_end`: `41`
- `printed_page_start`: `37`
- `printed_page_end`: `41`
- `keywords`: ["Adc_LL_StartHwTrigConversion", "Adc_LL_StartNormalConversion", "Adc_LL_ReConfigureDma"]
- `anchor`: `Functions in Adc_Lld.h`

### SEC-002-008-003
- `source_number`: `2.8.3`
- `title`: `Functions in Adc_Ptimer_Hw.h`
- `path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Adc_Ptimer_Hw.h`
- `physical_page_start`: `41`
- `physical_page_end`: `42`
- `printed_page_start`: `41`
- `printed_page_end`: `42`
- `keywords`: ["Adc_Ptimer_InitUnitHardware", "Adc_Ptimer_StartSoftwareConversion", "Adc_Ptimer_SetPtimerMode"]
- `anchor`: `Functions in Adc_Ptimer_Hw.h`

### SEC-002-009
- `source_number`: `2.9`
- `title`: `API Sequence Diagram`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `physical_page_start`: `42`
- `physical_page_end`: `50`
- `printed_page_start`: `42`
- `printed_page_end`: `50`
- `keywords`: ["sequence diagram", "Adc_StartGroupConversion", "notification", "queue", "priority"]
- `anchor`: `2.9 API Sequence Diagram`

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: `Initialization of the ADC Driver`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the ADC Driver`
- `physical_page_start`: `42`
- `physical_page_end`: `43`
- `printed_page_start`: `42`
- `printed_page_end`: `43`
- `keywords`: ["Adc_Init", "EcuM"]
- `anchor`: `Initialization of the ADC Driver`

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: `De-Initialization of the ADC Driver`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-Initialization of the ADC Driver`
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["Adc_DeInit", "undefined activities"]
- `anchor`: `De-Initialization of the ADC Driver`

### SEC-002-009-003
- `source_number`: `2.9.3`
- `title`: `Software Triggered One-Shot Conversion without Notification`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Software Triggered One-Shot Conversion without Notification`
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["Adc_OneShotUsage", "ADC_BUSY", "ADC_STREAM_COMPLETED"]
- `anchor`: `Software Triggered One-Shot Conversion without Notification`

### SEC-002-009-004
- `source_number`: `2.9.4`
- `title`: `Software Triggered Continuous Conversion with Notification`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Software Triggered Continuous Conversion with Notification`
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["continuous", "notification", "Adc_EnableGroupNotification"]
- `anchor`: `Software Triggered Continuous Conversion`

### SEC-002-009-005
- `source_number`: `2.9.5`
- `title`: `Hardware Triggered One-Shot Conversion with Notification`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Hardware Triggered One-Shot Conversion with Notification`
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["hardware trigger", "Adc_EnableHardwareTrigger", "Notification"]
- `anchor`: `Hardware Triggered One-Shot Conversion`

### SEC-002-009-006
- `source_number`: `2.9.6`
- `title`: `HW Trigger - One-Shot Conversion - Linear Streaming`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.6 HW Trigger - One-Shot Conversion - Linear Streaming`
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["linear streaming", "streaming buffer", "hardware trigger"]
- `anchor`: `HW Trigger - One-Shot Conversion - Linear Streaming`

### SEC-002-009-007
- `source_number`: `2.9.7`
- `title`: `No Priority Mechanism - No Queuing`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.7 No Priority Mechanism - No Queuing`
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["ADC_PRIORITY_NONE", "queuing OFF", "Det"]
- `anchor`: `No Priority Mechanism`

### SEC-002-009-008
- `source_number`: `2.9.8`
- `title`: `No Priority Mechanism - SW Queuing`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.8 No Priority Mechanism - SW Queuing`
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["SW queue", "ADC_PRIORITY_NONE", "Group2"]
- `anchor`: `No Priority Mechanism - SW Queuing`

### SEC-002-009-009
- `source_number`: `2.9.9`
- `title`: `HW_SW Priority Mechanism - SW Queuing`
- `path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.9 HW_SW Priority Mechanism - SW Queuing`
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["HW_SW", "SW Queuing", "priority"]
- `anchor`: `HW_SW Priority Mechanism`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Tresos Configuration Items`
- `path`: `Chapter 3 Tresos Configuration Items`
- `physical_page_start`: `51`
- `physical_page_end`: `83`
- `printed_page_start`: `51`
- `printed_page_end`: `83`
- `keywords`: ["Tresos", "containers", "variables", "AdcConfigSet", "AdcGeneral"]
- `anchor`: `Chapter 3 Tresos Configuration Items`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Container Inclusion Relation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `physical_page_start`: `51`
- `physical_page_end`: `54`
- `printed_page_start`: `51`
- `printed_page_end`: `54`
- `keywords`: ["container inclusion", "AdcConfigSet", "AdcGeneral", "AutosarExt"]
- `anchor`: `Container Inclusion Relation`

### SEC-003-002
- `source_number`: `3.2`
- `title`: `Containers and Variables`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables`
- `physical_page_start`: `55`
- `physical_page_end`: `83`
- `printed_page_start`: `55`
- `printed_page_end`: `83`
- `keywords`: ["AdcHwUnit", "AdcChannel", "AdcGroup", "AdcGeneral", "AdcDemEventParameterRefs"]
- `anchor`: `Containers and Variables`

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: `IMPLEMENTATION_CONFIG_VARIANT`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT"]
- `anchor`: `IMPLEMENTATION_CONFIG_VARIANT`

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: `AdcConfigSet`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 AdcConfigSet`
- `physical_page_start`: `55`
- `physical_page_end`: `72`
- `printed_page_start`: `55`
- `printed_page_end`: `72`
- `keywords`: ["AdcHwUnit", "AdcChannel", "AdcGroup", "Ptimer", "DMA", "hardware average"]
- `anchor`: `AdcConfigSet`

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: `AdcGeneral`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 AdcGeneral`
- `physical_page_start`: `72`
- `physical_page_end`: `79`
- `printed_page_start`: `72`
- `printed_page_end`: `79`
- `keywords`: ["API switches", "AdcPriorityImplementation", "AdcTimeout", "low power", "interrupt"]
- `anchor`: `AdcGeneral`

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: `AdcPublishedInformation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 AdcPublishedInformation`
- `physical_page_start`: `79`
- `physical_page_end`: `79`
- `printed_page_start`: `79`
- `printed_page_end`: `79`
- `keywords`: ["AdcChannelValueSigned", "AdcMaxChannelResolution"]
- `anchor`: `AdcPublishedInformation`

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: `CommonPublishedInformation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `physical_page_start`: `80`
- `physical_page_end`: `81`
- `printed_page_start`: `80`
- `printed_page_end`: `81`
- `keywords`: ["ArReleaseMajorVersion", "ModuleId", "VendorId", "SwPatchVersion"]
- `anchor`: `CommonPublishedInformation`

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: `AutosarExt`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 AutosarExt`
- `physical_page_start`: `81`
- `physical_page_end`: `83`
- `printed_page_start`: `81`
- `printed_page_end`: `83`
- `keywords`: ["AdcMulticoreSupport", "AdcEnableDmaTrasferMode", "AdcEnableUserModeSupport"]
- `anchor`: `AutosarExt`

### SEC-003-002-007
- `source_number`: `3.2.7`
- `title`: `AdcDemEventParameterRefs`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 AdcDemEventParameterRefs`
- `physical_page_start`: `83`
- `physical_page_end`: `83`
- `printed_page_start`: `83`
- `printed_page_end`: `83`
- `keywords`: ["ADC_E_TIMEOUT", "DemEventParameterRefs"]
- `anchor`: `AdcDemEventParameterRefs`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Configuration Guides`
- `path`: `Chapter 4 Configuration Guides`
- `physical_page_start`: `84`
- `physical_page_end`: `87`
- `printed_page_start`: `84`
- `printed_page_end`: `87`
- `keywords`: ["Configuration Item Constraint", "ADC Usage Common Steps", "PortPin", "AdcHwUnit", "AdcGroup"]
- `anchor`: `Chapter 4 Configuration Guides`

### SEC-004-001
- `source_number`: `4.1`
- `title`: `Configuration Item Constraint`
- `path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `physical_page_start`: `84`
- `physical_page_end`: `84`
- `printed_page_start`: `84`
- `printed_page_end`: `84`
- `keywords`: ["priority mechanism", "queue", "clock reference", "30MHz", "channel delays"]
- `anchor`: `Configuration Item Constraint`

### SEC-004-002
- `source_number`: `4.2`
- `title`: `ADC Usage Common Steps`
- `path`: `Chapter 4 Configuration Guides / 4.2 ADC Usage Common Steps`
- `physical_page_start`: `84`
- `physical_page_end`: `87`
- `printed_page_start`: `84`
- `printed_page_end`: `87`
- `keywords`: ["MCU clocks", "PortPin", "AdcHwUnit", "channels", "groups", "channel delays"]
- `anchor`: `ADC Usage Common Steps`

## 4. Page Locator Map

Each `PAGE-*` item maps one 1-based PDF physical page to its auxiliary printed page label and current inferred section path.

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["ADC", "FC7xxx"]
- `anchors`: ["Rev. 0.5"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["ADC", "MCAL", "FC7xxx", "Revision", "History", "Changes", "Initial", "release"]
- `anchors`: ["Revision History", "Revision", "Date", "Changes"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["diagram", "table_like", "toc"]
- `keywords`: ["Adc_types", "Adc_version", "Adc_Cfg", "Adc_CfgDefines", "Adc_Types", "Adc_Hw_Types", "Adc_Ptimer_Hw_Types", "Adc_ConfigType"]
- `anchors`: ["Table of Contents", "Chapter 1 ADC Introduction............................................................................................................................................. 5", "1.1", "Requirement Tracing ....................................................................................................................................... 5"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Table of Contents`
- `content_types`: ["text"]
- `keywords`: ["AdcConfigSet", "AdcGeneral", "AdcInterrupt", "AdcPublishedInformation", "AdcDemEventParameterRefs", "ADC", "HW_SW", "IMPLEMENTATION_CONFIG_VARIANT"]
- `anchors`: ["2.9.5", "Hardware Triggered One-Shot Conversion with Notification ................................................................. 46", "2.9.6", "HW Trigger - One-Shot Conversion - Linear Streaming ........................................................................... 47"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 1 ADC Introduction`
- `content_types`: ["text"]
- `keywords`: ["ADC", "AUTOSAR", "MCU", "FC7300", "FC7xxx", "Introduction", "Requirement", "Tracing"]
- `anchors`: ["Chapter 1 ADC Introduction", "1.1", "Requirement Tracing", "The design of this module follows the specifications of the ADC driver specified in AUTOSAR Classic Platform Release R20-11."]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["table_like"]
- `keywords`: ["SWS_Adc_00341", "SWS_Adc_00339", "SWS_Adc_00337", "SWS_Adc_00462", "SWS_Adc_00463", "SWS_Adc_00464", "SWS_Adc_00465", "ADC_PRIORITY_HW"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "Rejected Requirement 1 SWS_Adc_00341"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["table_like"]
- `keywords`: ["SWS_Adc_00466", "SWS_Adc_00467", "SWS_Adc_00469", "SWS_Adc_00470", "SWS_Adc_00471", "SWS_Adc_00472", "SWS_Adc_00473", "Adc_PreparePowertState"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_00466", "After preparation for a power state is achieved by API Adc_PreparePowertState then the API", "Adc_SetPowerState shall be used to achieve the requested power state of the ADC module.", "Rejection Reason"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["SWS_Adc_00517", "SWS_Adc_00527", "SWS_Adc_91000", "ADC_SERVICE_ACCEPTED", "ADC_NOT_INIT", "ADC_SEQUENCE_ERROR", "ADC_HW_FAILURE", "ADC_POWER_STATE_NOT_SUPP"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_00517", "Name: Adc_GroupDefType", "Type: implementation_specific", "Description: Type for assignment of channels to a channel group (this is not an API type)"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["SWS_Adc_00358", "SWS_Adc_00146", "SWS_Adc_00283", "SWS_Adc_91001", "SWS_Adc_00273", "ADC_IDLE", "Adc_SetupResultBuffer", "Adc_DeInit"]
- `anchors`: ["group. The initialization with Adc_SetupResultBuffer is required after reset, before a group", "conversion can be started.", "Rejection Reason", "This function is implemented synchronous instead of asynchronous because the Adc module"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["SWS_Adc_00120", "SWS_Adc_91002", "SWS_Adc_00121", "SWS_Adc_91003", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_GroupType", "Adc_EnableGroupNotification"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_00120", "The ADC module’s environment shall only call the function Adc_EnableHardwareTrigger for", "groups configured in hardware trigger mode (see AdcGroupTriggSrc).", "Rejection Reason"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["SWS_Adc_91004", "SWS_Adc_00305", "SWS_Adc_00219", "SWS_Adc_CONSTR_00001", "SWS_Adc_CONSTR_00003", "Adc_DisableGroupNotification", "Adc_GroupType", "Adc_GetGroupStatus"]
- `anchors`: ["Rejection Reason", "This function is implemented synchronous instead of asynchronous because the Adc module", "is impleted as Type II instead of Type IV.", "Rejected Requirement 3 SWS_Adc_91004"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["SWS_Adc_CONSTR_00002", "SWS_Adc_CONSTR_00004", "ADC_E_UNINIT", "ADC_E_BUSY", "ADC_E_IDLE", "ADC_E_ALREADY_INITIALIZED", "Adc_MemMap", "Adc_Hw"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_CONSTR_00002", "The ECUC partitions referenced by AdcGroupEcucPartitionRef shall be a subset of the ECUC", "partitions referenced by AdcEcucPartitionRef.", "Rejection Reason"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_E_PARAM_CONFIG", "ADC_E_PARAM_POINTER", "ADC_E_PARAM_GROUP", "ADC_E_WRONG_CONV_MODE", "ADC_E_WRONG_TRIGG_SRC", "ADC_E_NOTIF_CAPABILITY", "ADC_E_BUFFER_UNINIT", "ADC_E_NOT_DISENGAGED"]
- `anchors`: ["•", "#define ADC_E_PARAM_CONFIG ((uint8)0x0EU)", "The ADC module is not properly configured.", "•"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_INIT_ID", "ADC_DEINIT_ID", "ADC_STARTGROUPCONVERSION_ID", "ADC_STOPGROUPCONVERSION_ID", "ADC_VALUEREADGROUP_ID", "ADC_ENABLEHARDWARETRIGGER_ID", "ADC_DISABLEHARDWARETRIGGER_ID", "ADC_ENABLEGROUPNOTIFICATION_ID"]
- `anchors`: ["•", "#define ADC_INIT_ID 0x00U", "API service ID for Adc_Init function.", "•"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_SETPOWERSTATE_ID", "ADC_GETCURRENTPOWERSTATE_ID", "ADC_GETTARGETPOWERSTATE_ID", "ADC_PREPAREPOWERSTATE_ID", "ADC_BITS_RESOLUTION_8", "ADC_BITS_RESOLUTION_10", "ADC_BITS_RESOLUTION_12", "ADC_CLOCK_DIVIDE_BY_1"]
- `anchors`: ["•", "#define ADC_SETPOWERSTATE_ID 0x10U", "API service ID for Adc_SetPowerState function.", "•"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_SW_MINOR_VERSION", "ADC_SW_PATCH_VERSION", "ADC_VENDOR_ID", "ADC_MODULE_ID", "ADC_CFG_AR_RELEASE_MAJOR_VERSION", "ADC_CFG_AR_RELEASE_MINOR_VERSION", "ADC_CFG_AR_RELEASE_REVISION_VERSION", "ADC_CFG_SW_MAJOR_VERSION"]
- `anchors`: ["•", "#define ADC_SW_MINOR_VERSION 5", "•", "#define ADC_SW_PATCH_VERSION 0"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_UNIT_3", "ADC_MAX_PARTITIONS", "ADC_NUM_SC_REGISTER", "ADC_NUM_SC_REGISTER_USED", "ADC_PTIMER_NUM_DELAY_REGISTER", "ADC_HW_TRIGGER_API", "ADC_ENABLE_LIMIT_CHECK", "ADC_GRP_NOTIF_CAPABILITY"]
- `anchors`: ["•", "#define ADC_UNIT_3 3U", "ADC unit 3 available.", "•"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_RESULT_ALIGNMENT", "ADC_ALIGN_RIGHT", "ADC_RESULT_U8", "ADC_RESULT_U16", "ADC_RESULT_U32", "ADC_RESULT_TYPE", "ADC_TIMEOUT_COUNTER", "ADC_DMA_TRANSFER_TIMEOUT"]
- `anchors`: ["•", "#define ADC_RESULT_ALIGNMENT (ADC_ALIGN_RIGHT)", "Result Alignment.", "•"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_UNIT_3_ISR_USED", "ADC_QUEUE_MAX_DEPTH_MAX", "ADC_MAX_GROUPS", "ADC_HW_QUEUE", "ADC_DEV_ERROR_DETECT", "ADC_VERSION_INFO_API", "ADC_DEINIT_API", "ADC_ENABLE_START_STOP_GROUP_API"]
- `anchors`: ["#define ADC_UNIT_3_ISR_USED", "IRQ definition.", "•", "#define ADC_QUEUE_MAX_DEPTH_MAX 3U"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.4 Enums`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["ADC_ID_CHANNEL_U8", "ADC_QUEUE_INDEX_TYPE_MAXIMUM", "ADC_ENABLE_USER_MODE_SUPPORT", "ADC_NOT_YET_CONVERTED", "ADC_ALREADY_CONVERTED", "ADC_ACCESS_MODE_SINGLE", "ADC_ACCESS_MODE_STREAMING", "Adc_QueueIndexType"]
- `anchors`: ["•", "#define AdcHwUnit_0 (0)", "Symbolic names of ADC Hardware units.", "•"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["ADC_CONV_MODE_ONESHOT", "ADC_CONV_MODE_CONTINUOUS", "ADC_GROUP_REPL_ABORT_RESTART", "ADC_GROUP_REPL_SUSPEND_RESUME", "ADC_STREAM_BUFFER_LINEAR", "ADC_STREAM_BUFFER_CIRCULAR", "ADC_TRANSFER_TYPE_INTERRUPT", "ADC_TRANSFER_TYPE_DMA"]
- `anchors`: ["1U", "2.4.1.3", "Adc_GroupConvModeType", "Enumeration"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_BUSY", "ADC_COMPLETED", "ADC_STREAM_COMPLETED", "ADC_NOTIFICATION_DISABLED", "ADC_NOTIFICATION_ENABLED", "ADC_HW_TRIG_RISING_EDGE", "ADC_HW_TRIG_FALLING_EDGE", "ADC_HW_TRIG_BOTH_EDGES"]
- `anchors`: ["ADC_BUSY = 1U", "Group is in BUSY state.", "ADC_COMPLETED = 2U", "Group is in COMPLETED state."]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_RANGE_ALWAYS", "ADC_RANGE_NOT_UNDER_LOW", "ADC_RANGE_NOT_BETWEEN", "ADC_RANGE_NOT_OVER_HIGH", "ADC_RESULT_ALIGN_RIGHT", "ADC_RESULT_ALIGN_LEFT", "ADC_TRIGMODE_SW", "ADC_TRIGMODE_RISING_EDGE"]
- `anchors`: ["ADC_RANGE_ALWAYS = 3U", "Complete range - independent from channel limit settings", "ADC_RANGE_NOT_UNDER_LOW = 4U", "Range above low limit"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_SEQMODE_DISCONTINUOUS_0", "ADC_SEQMODE_DISCONTINUOUS_1", "ADC_OVERRUN_MODE_PRESERVE", "ADC_OVERRUN_MODE_OVERWRITE", "ADC_REF_INTERNAL", "ADC_REF_EXTERNAL", "ADC_AVERAGE_4", "ADC_AVERAGE_8"]
- `anchors`: ["ADC_SEQMODE_DISCONTINUOUS_0 =", "2U", "ADC discontinuous 0 mode.", "ADC_SEQMODE_DISCONTINUOUS_1 ="]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_PRETRIGGER_SEL_PTIMER", "ADC_PRETRIGGER_SEL_SW", "ADC_TRIGGER_SEL_PTIMER", "ADC_TRIGGER_SEL_TRGSEL", "ADC_SW_PRETRIGGER_DISABLED", "ADC_SW_PRETRIGGER_0", "ADC_SW_PRETRIGGER_1", "ADC_SW_PRETRIGGER_2"]
- `anchors`: ["ADC_PRETRIGGER_SEL_PTIMER", "=", "0x00U", "Ptimer pretrigger selected."]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs`
- `content_types`: ["code_api", "table_like"]
- `keywords`: ["Adc_Types", "Adc_NotifyType", "Ptimer_ClockPreDividerType", "Ptimer_ClockPreDivMultiplyFactorType", "Ptimer_TrgSrcType", "ADC", "PTIMER_PRE_DIVIDE_BY_1", "PTIMER_PRE_DIVIDE_BY_2"]
- `anchors`: ["2.4.3.2", "Ptimer_ClockPreDividerType", "Enumeration", "Ptimer_ClockPreDividerType"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_ChannelIndexType", "Adc_HwUnitType", "Adc_ClockSourceType", "Adc_VoltageSourceType", "Adc_QueueIndexType", "Adc_ChannelType", "Adc_GroupType", "Adc_ResolutionType"]
- `anchors`: ["•", "typedef uint16 Adc_ChannelIndexType", "Number of channels.", "•"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_SamplingTimeType", "Adc_SampleTimeOptType", "Adc_StreamNumSampleType", "Adc_HwTriggerTimerType", "Adc_ConfigType", "Adc_HwUnitConfigurationType", "Adc_GroupConfigurationType", "Adc_ChannelConfigurationType"]
- `anchors`: ["•", "typedef uint8 Adc_SamplingTimeType", "Sampling time.", "•"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `content_types`: ["text"]
- `keywords`: ["Adc_HwUnitConfigurationType", "Adc_HwUnitType", "Adc_PrescaleType", "Adc_ResolutionType", "Adc_NotifyType", "Adc_GroupConfigurationType", "Adc_GroupType", "Adc_GroupAccessModeType"]
- `anchors`: ["•", "uint8 CoreId", "CoreId of the configuration.", "2.6.2"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `content_types`: ["text"]
- `keywords`: ["Adc_TriggerSourceType", "Adc_HwTriggerSignalType", "Adc_TransferType", "Adc_NotifyType", "Adc_StreamBufferModeType", "Adc_StreamNumSampleType", "Adc_GroupDefType", "Adc_ChannelIndexType"]
- `anchors`: ["•", "const Adc_TriggerSourceType eTriggerSource", "HW/SW trigger.", "•"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `content_types`: ["code_api"]
- `keywords`: ["ADC_QUEUE_MAX_DEPTH_MAX", "ADC_HW_QUEUE", "Adc_SampleTimeOptType", "Adc_ChannelRangeSelectType", "Adc_ValueGroupType", "Adc_UnitStatusType", "Adc_QueueIndexType", "Adc_GroupType"]
- `anchors`: ["•", "const Adc_SampleTimeOptType SampleTimeOpt", "Sample time option of the ADC channel.", "•"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.7 API Functions`
- `content_types`: ["code_api", "image"]
- `keywords`: ["Adc_ChannelIndexType", "Adc_Init", "Adc_ConfigType", "Adc_SetupResultBuffer", "Adc_GroupType", "Adc_ValueGroupType", "Adc_DeInit", "Adc_StartGroupConversion"]
- `anchors`: ["•", "Adc_ChannelIndexType CurrentChannel", "Current channel in use.", "2.7"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_StopGroupConversion", "Adc_GroupType", "Adc_ReadGroup", "Adc_ValueGroupType", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "ADC", "FC7xxx"]
- `anchors`: ["Parameter", "Group", "Numeric ID of requested ADC channel group.", "2.7.1.5"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_EnableGroupNotification", "Adc_GroupType", "Adc_DisableGroupNotification", "Adc_StatusType", "Adc_GetGroupStatus", "Adc_StreamNumSampleType", "Adc_GetStreamLastPointer", "Adc_ValueGroupType"]
- `anchors`: ["2.7.1.9", "void Adc_EnableGroupNotification ( Adc_GroupType Group )", "void Adc_EnableGroupNotification ( Adc_GroupType Group )", "Enables the notification mechanism for the requested ADC channel group."]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_Hw", "Adc_HL_Init", "Adc_ConfigType", "Adc_Init", "Adc_HL_DeInit", "Adc_DeInit", "Adc_HL_StartConversion", "Adc_HwUnitType"]
- `anchors`: ["Parameter", "versioninfo", "Pointer to where to store the version information of this module.", "2.8"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_StopGroupConversion", "Adc_HL_EnableHardwareTrigger", "Adc_HwUnitType", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_HL_DisableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_HL_UpdateGroupStatusWithoutInterrupt"]
- `anchors`: ["Unit", "The hardware Unit.", "Group", "The group ID."]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_HL_ReadGroup", "Adc_GroupType", "Adc_ValueGroupType", "Adc_ReadGroup", "Adc_HL_EndPartialConversion", "Adc_HwUnitType", "Adc_ISR_EndGroupConversion", "Adc_Lld"]
- `anchors`: ["2.8.1.8", "Std_ReturnType Adc_HL_ReadGroup (const Adc_GroupType Group, const uint8 CoreId, Adc_ValueGroupType *", "pDataPtr)", "Std_ReturnType"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_HL_DeInit", "Adc_LL_StartHwTrigConversion", "Adc_HwUnitType", "Adc_GroupType", "Adc_HL_UpdateStatusGetData", "Adc_LL_EnableHardwareTrigger", "Adc_HL_EnableHardwareTrigger", "Adc_LL_DisableHardwareTrigger"]
- `anchors`: ["CoreId", "The core ID of the caller.", "Referenced By", "Adc_HL_DeInit()"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_LL_StartNormalConversion", "Adc_HwUnitType", "Adc_HL_StartConversion", "Adc_HL_StopConversion", "Adc_HL_UpdateSwQueue", "Adc_LL_ConfigurePartialConversion", "Adc_GroupType", "Adc_TriggerSourceType"]
- `anchors`: ["2.8.2.6", "void Adc_LL_StartNormalConversion (const Adc_HwUnitType Unit, const uint8 CoreId)", "void Adc_LL_StartNormalConversion (const Adc_HwUnitType Unit, const uint8 CoreId)", "This function starts the conversion on the specified hardware Unit. This function should be called with the"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_HL_StartConversion", "Adc_HL_StopConversion", "Adc_HL_EndPartialConversion", "Adc_LL_RestartContinuousConversion", "Adc_HwUnitType", "Adc_GroupType", "Adc_HL_UpdateSwQueue", "Adc_LL_CheckConversionSequenceStatus"]
- `anchors`: ["Unit", "The hardware Unit.", "Std_ReturnType E_OK or E_NOT_OK.", "Referenced By"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `keywords`: ["Adc_LL_ReConfigureDma", "Adc_HwUnitType", "Adc_GroupType", "Adc_Ptimer_ChannelSeqErr", "Adc_Ptimer_Hw", "Adc_Ptimer_InitUnitHardware", "Adc_LL_InitUnitHardware", "Adc_Ptimer_DeInitUnitHardware"]
- `anchors`: ["2.8.2.13", "void Adc_LL_ReConfigureDma (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)", "void Adc_LL_ReConfigureDma (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8", "CoreId)"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram`
- `content_types`: ["code_api", "diagram"]
- `keywords`: ["Adc_LL_ConfigurePartialConversion", "Adc_Ptimer_StartSoftwareConversion", "Adc_HwUnitType", "Adc_LL_RestartContinuousConversion", "Adc_Ptimer_SetPtimerMode", "Adc_LL_StartNormalConversion", "Adc_Ptimer_StopConversion", "Adc_LL_StopConversionCheckTimeout"]
- `anchors`: ["Referenced By", "Adc_LL_ConfigurePartialConversion()", "2.8.3.4", "void Adc_Ptimer_StartSoftwareConversion (Adc_HwUnitType Unit)"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["Adc_Init", "Adc_ConfigType", "Adc_Deinit", "Adc_DeInit", "ADC", "FC7xxx", "Initialization", "Driver"]
- `anchors`: ["2.9.2", "De-Initialization of the ADC Driver", "It's the responsibility of the HW design that this state doesn't lead to undefined activities in the μc.", "sd Adc_Init()"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["code_api", "diagram", "image"]
- `keywords`: ["ADC_BUSY", "ADC_STREAM_COMPLETED", "Adc_OneShotUsage", "Adc_GetGroupStatus", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_StatusType", "Adc_ReadGroup"]
- `anchors`: ["2.9.3", "Software Triggered One-Shot Conversion without Notification", "sd Adc_OneShotUsage", "«module»"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["Adc_SW_triggered_continuous_with_notifications", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_Notification_Group_1", "Adc_ReadGroup", "Adc_ValueGroupType", "Adc_StopGroupConversion"]
- `anchors`: ["2.9.4", "Software Triggered Continuous Conversion with Notification", "sd Adc_SW_triggered_continuous_with_notifications", "Adc User"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["Adc_HW_triggered_continuous_with_notification", "Adc_EnableGroupNotification", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_Notification_Group_1", "Adc_ReadGroup", "Adc_ValueGroupType", "Adc_DisableGroupNotification"]
- `anchors`: ["2.9.5", "Hardware Triggered One-Shot Conversion with Notification", "sd Adc_HW_triggered_continuous_with_notification", "«Peripheral»"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["ADC_COMPLETED", "ADC_STREAM_COMPLETED", "Adc_HW_triggered_oneshot_linear_streaming", "Adc_EnableGroupNotification", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_Notification_Group_1", "Adc_GetGroupStatus"]
- `anchors`: ["2.9.6", "HW Trigger - One-Shot Conversion - Linear Streaming", "sd Adc_HW_triggered_oneshot_linear_streaming", "Adc User"]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["ADC_E_BUSY", "Adc_prio_mechanism_NONE_queuing_OFF", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_Notification_Group_1", "ADC"]
- `anchors`: ["2.9.7", "No Priority Mechanism - No Queuing", "sd Adc_prio_mechanism_NONE_queuing_OFF", "Adc User"]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["Adc_SW_queue_prio_mechanism_NONE_queuing_ON", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_Notification_Group_1", "Adc_Notification_Group_2", "ADC", "FC7xxx", "Priority"]
- `anchors`: ["2.9.8", "No Priority Mechanism - SW Queuing", "sd Adc_SW_queue_prio_mechanism_NONE_queuing_ON", "Adc User"]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `keywords`: ["Adc_SW_queue_prio_mechanism_HW_SW", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_Notification_Group_1", "Adc_Notification_Group_2", "ADC", "HW_SW"]
- `anchors`: ["2.9.9", "HW_SW Priority Mechanism - SW Queuing", "sd Adc_SW_queue_prio_mechanism_HW_SW", "Adc User"]

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["text"]
- `keywords`: ["AdcConfigSet", "AdcGeneral", "AdcInterrupt", "AdcPublishedInformation", "AdcDemEventParameterRefs", "ADC", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The ADC module has the following 8 containers:"]

### PAGE-0052
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["text"]
- `keywords`: ["AdcConfigSet", "AdcHwUnit", "AdcSampleTimeOptions", "AdcPtimerSettings", "AdcHardwareAverageSettings", "AdcChannel", "AdcGroup", "AdcHwUnitId"]
- `anchors`: ["3.1.2", "AdcConfigSet", "AdcConfigSet", "AdcHwUnit"]

### PAGE-0053
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["text"]
- `keywords`: ["AdcGeneral", "AdcInterrupt", "AdcPowerStateConfig", "AdcDeInitApi", "AdcDevErrorDetect", "AdcEnableLimitCheck", "AdcEnableQueuing", "AdcEnableStartStopGroupApi"]
- `anchors`: ["3.1.3", "AdcGeneral", "3.1.4", "AdcInterrupt"]

### PAGE-0054
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_E_TIMEOUT", "AdcPublishedInformation", "AdcDemEventParameterRefs", "AdcChannelValueSigned", "AdcGroupFirstChannelFixed", "AdcMaxChannelResolution", "AdcMulticoreSupport", "AdcIsrPartitionMappingCheck"]
- `anchors`: ["3.1.5", "AdcPublishedInformation", "3.1.6", "AutosarExt"]

### PAGE-0055
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcConfigSet", "AdcHwUnit", "AdcHwUnitId", "ADC", "IMPLEMENTATION_CONFIG_VARIANT", "AUTOSAR", "ADC0", "ADC1"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0056
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcLogicalUnitId", "AdcClockSource", "AdcClockRef", "AdcVoltageReferenceSelection", "AdcPrescale", "ADC", "MCU", "INTERNAL_REF"]
- `anchors`: ["3.2.2.1.2", "AdcLogicalUnitId", "Variable", "AdcLogicalUnitId"]

### PAGE-0057
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcDmaChannel", "AdcAlign", "AdcResolution", "AdcStartupCounter", "ADC", "LEFT_ALIGN", "RIGHT_ALIGN", "BITS_8"]
- `anchors`: ["•", "2 - Clock divided by 2.", "•", "4 - Clock divided by 4."]

### PAGE-0058
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcPreTriggerSelect", "AdcTriggerSelect", "AdcSampleTimeOptions", "AdcSampleTimeOption0", "ADC", "QCLK", "PTIMER_PRE_TRIGGER", "SOFTWARE_PRE_TRIGGER"]
- `anchors`: ["counting QCLK cycles until the internal counter reaches this value. So user should set these bits before ADC", "enable.", "Properties", "Type"]

### PAGE-0059
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcSampleTimeOption1", "AdcSampleTimeOption2", "AdcSampleTimeOption3", "AdcPtimerSettings", "ADC", "FC7xxx", "Configuration", "hardware"]
- `anchors`: ["Configuration for the ADC hardware sample time option 0.", "Properties", "Type", "Variable: Integer"]

### PAGE-0060
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcPtimerPrescalerDividerSelect", "AdcPtimerMultiplicationFactorSelect", "ADC", "DIVIDE_BY_1", "DIVIDE_BY_2", "DIVIDE_BY_4", "DIVIDE_BY_8", "DIVIDE_BY_16"]
- `anchors`: ["Type", "Identifiable", "3.2.2.1.14.1", "AdcPtimerPrescalerDividerSelect"]

### PAGE-0061
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcPtimerChannelSequenceErrorEnable", "AdcPtimerErrorNotification", "AdcHardwareAverageSettings", "AdcHardwareAverageEnable", "AdcHardwareAverageSelect", "ADC", "NULL_PTR", "SAMPLES_4"]
- `anchors`: ["3.2.2.1.14.3", "AdcPtimerChannelSequenceErrorEnable", "Variable", "AdcPtimerChannelSequenceErrorEnable"]

### PAGE-0062
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcChannel", "AdcLogicalChannelId", "AdcChannelName", "AdcChannelId", "ADC", "SAMPLES_4", "SAMPLES_8", "SAMPLES_16"]
- `anchors`: ["Properties", "Type", "Variable: Enumeration", "Range"]

### PAGE-0063
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_RANGE_ALWAYS", "ADC_RANGE_BETWEEN", "ADC_RANGE_NOT_BETWEEN", "ADC_RANGE_NOT_OVER_HIGH", "ADC_RANGE_NOT_UNDER_LOW", "ADC_RANGE_OVER_HIGH", "ADC_RANGE_UNDER_LOW", "AdcChannelLimitCheck"]
- `anchors`: ["Properties", "Type", "Variable: Integer", "Range"]

### PAGE-0064
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcChannelConvTime", "AdcChannelRefVoltsrcHigh", "AdcChannelRefVoltsrcLow", "AdcChannelResolution", "ADC", "UPPER_REF_VOLT_0", "LOWER_REF_VOLT_0", "FC7xxx"]
- `anchors`: ["Type", "Variable: Integer", "Range", "<=65535, >=0"]

### PAGE-0065
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcResolution", "AdcHwUnit", "AdcChannelSampTimeOption", "AdcChannelSampTime", "AdcSampleTimeOptions", "AdcGroup", "AdcGroupAccessMode", "ADC"]
- `anchors`: ["Type", "Variable: Integer", "Range", "Reference to AdcResolution field in AdcHwUnit Config"]

### PAGE-0066
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_ACCESS_MODE_SINGLE", "ADC_ACCESS_MODE_STREAMING", "ADC_CONV_MODE_CONTINUOUS", "ADC_CONV_MODE_ONESHOT", "ADC_PRIORITY_NONE", "AdcGroupConversionMode", "AdcGroupId", "AdcGroup"]
- `anchors`: ["Type of access mode to group conversion results.", "Properties", "Type", "Variable: Enumeration"]

### PAGE-0067
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_GROUP_REPL_ABORT_RESTART", "ADC_GROUP_REPL_SUSPEND_RESUME", "ADC_TRIGG_SRC_HW", "ADC_TRIGG_SRC_SW", "ADC_HW_TRIG_RISING_EDGE", "ADC_HW_TRIG_BOTH_EDGES", "ADC_HW_TRIG_FALLING_EDGE", "AdcGroupTriggSrc"]
- `anchors`: ["Replacement mechanism used on ADC group level, if a group conversion is interrupted by a group which", "has a higher priority. It's fixed to Abort/Restart", "Properties", "Type"]

### PAGE-0068
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_DMA", "ADC_INTERRUPT", "ADC_POLLING", "ADC_STREAM_BUFFER_CIRCULAR", "ADC_STREAM_BUFFER_LINEAR", "AdcTransferType", "AdcNotification", "AdcStreamingBufferMode"]
- `anchors`: ["3.2.2.1.17.9", "AdcTransferType", "Variable", "AdcTransferType"]

### PAGE-0069
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcGroupInBacktoBackMode", "AdcDelayNextPtimer", "AdcGroupUsesChannelDelays", "AdcChannelDelay", "ADC", "BTB", "FC7xxx", "Enable"]
- `anchors`: ["Enable/ Disable the channel conversions occuring in Back to Back mode. The Ptimer hardware unit is used", "to initiate individual channel conversions that are required for each group conversion, with one Ptimer", "pretrigger controlling the timing of each ADC channel conversion. When AdcGroupInBacktoBackMode is", "enabled, the Ptimer pretriggers will be configured to work in back to back mode: PTIMER_CTRL_CHn[BTB]"]

### PAGE-0070
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_CFG2", "ADC_SMPR", "AdcDelayNextPtimer", "AdcPtimerPeriodContinuousMode", "AdcGroupDefinition", "AdcChannels", "AdcGroups", "AdcChannel"]
- `anchors`: ["channels to avoid Ptimer internal errors.", "Properties", "Type", "Variable: Boolean"]

### PAGE-0071
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcChannel", "AdcGroupEcucPartitionRef", "AdcEcucPartitionRef", "AdcChannelDelay", "AdcGroupHardwareAverageSettings", "ADC", "ECUC", "FC7xxx"]
- `anchors`: ["Properties", "List", "Type", "Variable: Reference"]

### PAGE-0072
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_CFG2", "AdcGroupHardwareAverageEnable", "AdcGroupHardwareAverageSelect", "AdcHwUnitEcucPartitionRef", "AdcEcucPartitionRef", "AdcGeneral", "ADC", "AVG_EN"]
- `anchors`: ["Type", "Identifiable", "3.2.2.1.17.20.1", "AdcGroupHardwareAverageEnable"]

### PAGE-0073
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_PRIORITY_HW_SW", "Adc_DeInit", "AdcDeInitApi", "AdcDevErrorDetect", "AdcEnableLimitCheck", "AdcEnableQueuing", "AdcPriorityImplementation", "AdcEnableStartStopGroupApi"]
- `anchors`: ["Properties", "Container", "Type", "Identifiable"]

### PAGE-0074
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["Adc_StartGroupConversion", "Adc_StopGroupConversion", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_ReadGroup", "Adc_GetVersionInfo", "AdcGrpNotifCapability", "AdcHwTriggerApi"]
- `anchors`: ["Adds / removes the services Adc_StartGroupConversion() and Adc_StopGroupConversion from the", "code.true:", "Adc_StartGroupConversion()", "and"]

### PAGE-0075
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_PRIORITY_HW", "ADC_PRIORITY_HW_SW", "ADC_PRIORITY_NONE", "ADC_ALIGN_LEFT", "ADC_ALIGN_RIGHT", "Adc_GetVersionInfo", "AdcPriorityImplementation", "AdcPriorityHw"]
- `anchors`: ["false: Adc_GetVersionInfo() can not be used.", "Properties", "Type", "Variable: Boolean"]

### PAGE-0076
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["Adc_SetPowerState", "Adc_GetCurrentPowerState", "Adc_GetTargetPowerState", "Adc_PreparePowerState", "Adc_Main_PowerTransitionManager", "AdcDmaTimeout", "AdcPriorityQueueMaxDepth", "AdcLowPowerStatesSupport"]
- `anchors`: ["Default", "3.2.3.13", "AdcDmaTimeout", "Variable"]

### PAGE-0077
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcPowerStateConfig", "AdcPowerState", "AdcLowPowerStatesSupport", "AdcPowerStateReadyCbkRef", "AdcEcucPartitionRef", "ADC", "CDD", "NULL_PTR"]
- `anchors`: ["3.2.3.17", "AdcPowerStateConfig", "Container", "AdcPowerStateConfig"]

### PAGE-0078
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcKernelEcucPartitionRef", "AdcEcucPartitionRef", "AdcInterrupt", "AdcInterruptSource", "ADC", "REFERENCE", "ECUC", "ADC0_COCO"]
- `anchors`: ["Properties", "List", "Type", "Variable: REFERENCE"]

### PAGE-0079
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `content_types`: ["image", "table_like"]
- `keywords`: ["AdcInterruptEnable", "AdcPublishedInformation", "AdcChannelValueSigned", "AdcGroupFirstChannelFixed", "AdcMaxChannelResolution", "ADC", "FC7xxx", "Variable"]
- `anchors`: ["3.2.3.20.2", "AdcInterruptEnable", "Variable", "AdcInterruptEnable"]

### PAGE-0080
- `physical_page`: `80`
- `printed_page`: `80`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC", "AUTOSAR", "FC7xxx", "Value", "CommonPublishedInformation", "Container", "Common", "container"]
- `anchors`: ["3.2.5", "CommonPublishedInformation", "Container", "CommonPublishedInformation"]

### PAGE-0081
- `physical_page`: `81`
- `printed_page`: `81`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC", "AUTOSAR", "API", "FC7xxx", "SwMajorVersion", "Variable", "Major", "version"]
- `anchors`: ["3.2.5.5", "SwMajorVersion", "Variable", "SwMajorVersion"]

### PAGE-0082
- `physical_page`: `82`
- `printed_page`: `82`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `content_types`: ["image", "table_like"]
- `keywords`: ["Adc_Init", "AdcMulticoreSupport", "AdcIsrPartitionMappingCheck", "AdcDisableDemReportErrorStatus", "AdcHardwareAverageOnce", "AdcEnableDmaTrasferMode", "ADC", "ISR"]
- `anchors`: ["Properties", "3.2.6.1", "AdcMulticoreSupport", "Variable"]

### PAGE-0083
- `physical_page`: `83`
- `printed_page`: `83`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `content_types`: ["image", "table_like"]
- `keywords`: ["ADC_E_TIMEOUT", "AdcEnableUserModeSupport", "AdcDemEventParameterRefs", "ADC", "DMA", "API", "AUTOSAR", "FC7xxx"]
- `anchors`: ["parameter is disabled then DMA handling code will be removed at pre-compile time and DMA transfer", "cannot be configured for any ADC unit in any variant. If this parameter is enabled then the DMA", "configuration code will not be removed. This is an Implementation Specific Parameter.", "Properties"]

### PAGE-0084
- `physical_page`: `84`
- `printed_page`: `84`
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `keywords`: ["ADC_PRIORITY_NONE", "AdcGroupDefinition", "ADC", "MCU", "FC7xxx", "Configuration", "Guides", "Constraint"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1)"]

### PAGE-0085
- `physical_page`: `85`
- `printed_page`: `85`
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `keywords`: ["AdcHwUnit", "ADC", "FC7xxx", "hardware", "units", "configuration", "configure", "general"]
- `anchors`: ["5)", "Add the hardware units to be used in AdcHwUnit configuration.", "6)", "For each ADC hardware unit, configure the general settings for the unit."]

### PAGE-0086
- `physical_page`: `86`
- `printed_page`: `86`
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `keywords`: ["ADC", "FC7xxx", "channel", "configure", "parameters", "AutoSAR", "channels", "accessed"]
- `anchors`: ["8)", "For each channel, configure the channel parameters.", "9)", "In AutoSAR, ADC channels are accessed by groups, so the user should divide channels into groups."]

### PAGE-0087
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `keywords`: ["ADC", "FC7xxx", "Assign", "channels", "group", "channel", "delays", "shall"]
- `anchors`: ["11) Assign channels to the group.", "12) If channel delays are used for the group, the user shall also assign channel delays for the group."]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx ADC User Manual and revision 0.5.
- `keywords`: ["ADC", "FC7xxx"]
- `anchors`: ["Rev. 0.5"]
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history table: rev.0.1 initial release, rev.0.4 MCAL V0.4.0 update, rev.0.5 MCAL V0.5.0 update.
- `keywords`: ["ADC", "MCAL", "FC7xxx", "Revision", "History", "Changes", "Initial", "release", "Updated"]
- `anchors`: ["Revision History", "Revision", "Date"]
- `quality_flags`: []

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["diagram", "table_like", "toc"]
- `summary`: Table of contents part 1: ADC introduction, software design, macros, enums, typedefs, structures, APIs, hardware functions and sequence diagrams.
- `keywords`: ["Adc_types", "Adc_version", "Adc_Cfg", "Adc_CfgDefines", "Adc_Types", "Adc_Hw_Types", "Adc_Ptimer_Hw_Types", "Adc_ConfigType", "Adc_HwUnitConfigurationType", "Adc_GroupConfigurationType"]
- `anchors`: ["Table of Contents", "Chapter 1 ADC Introduction............................................................................................................................................. 5", "1.1"]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Table of Contents`
- `content_types`: ["text"]
- `summary`: Table of contents part 2: sequence diagrams, Tresos configuration item containers/variables and configuration guides.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "AdcInterrupt", "AdcPublishedInformation", "AdcDemEventParameterRefs", "ADC", "HW_SW", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx", "Hardware"]
- `anchors`: ["2.9.5", "Hardware Triggered One-Shot Conversion with Notification ................................................................. 46", "2.9.6"]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 1 ADC Introduction`
- `content_types`: ["text"]
- `summary`: ADC introduction: AUTOSAR Classic R20-11 requirement tracing and hardware summary of ADC groups, channels, instances, external/internal channels and Ptimer channel delays.
- `keywords`: ["ADC", "AUTOSAR", "MCU", "FC7300", "FC7xxx", "Introduction", "Requirement", "Tracing", "design", "module"]
- `anchors`: ["Chapter 1 ADC Introduction", "1.1", "Requirement Tracing"]
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_00341", "SWS_Adc_00339", "SWS_Adc_00337", "SWS_Adc_00462", "SWS_Adc_00463", "SWS_Adc_00464", "SWS_Adc_00465", "ADC_PRIORITY_HW", "Adc_PreparePowerState", "Adc_SetPowerState"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements"]
- `quality_flags`: []

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_00466", "SWS_Adc_00467", "SWS_Adc_00469", "SWS_Adc_00470", "SWS_Adc_00471", "SWS_Adc_00472", "SWS_Adc_00473", "Adc_PreparePowertState", "Adc_SetPowerState", "Adc_PreparePowerState"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_00466", "After preparation for a power state is achieved by API Adc_PreparePowertState then the API", "Adc_SetPowerState shall be used to achieve the requested power state of the ADC module."]
- `quality_flags`: []

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_00517", "SWS_Adc_00527", "SWS_Adc_91000", "ADC_SERVICE_ACCEPTED", "ADC_NOT_INIT", "ADC_SEQUENCE_ERROR", "ADC_HW_FAILURE", "ADC_POWER_STATE_NOT_SUPP", "ADC_TRANS_NOT_POSSIBLE", "Adc_GroupDefType"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_00517", "Name: Adc_GroupDefType", "Type: implementation_specific"]
- `quality_flags`: []

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_00358", "SWS_Adc_00146", "SWS_Adc_00283", "SWS_Adc_91001", "SWS_Adc_00273", "ADC_IDLE", "Adc_SetupResultBuffer", "Adc_DeInit", "Adc_StartGroupConversion", "Adc_StopGroupConversion"]
- `anchors`: ["group. The initialization with Adc_SetupResultBuffer is required after reset, before a group", "conversion can be started.", "Rejection Reason"]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_00120", "SWS_Adc_91002", "SWS_Adc_00121", "SWS_Adc_91003", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_GroupType", "Adc_EnableGroupNotification", "AdcGroupTriggSrc", "ADC"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_00120", "The ADC module’s environment shall only call the function Adc_EnableHardwareTrigger for", "groups configured in hardware trigger mode (see AdcGroupTriggSrc)."]
- `quality_flags`: []

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["code_api", "table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_91004", "SWS_Adc_00305", "SWS_Adc_00219", "SWS_Adc_CONSTR_00001", "SWS_Adc_CONSTR_00003", "Adc_DisableGroupNotification", "Adc_GroupType", "Adc_GetGroupStatus", "AdcKernelEcucPartitionRef", "AdcEcucPartitionRef"]
- `anchors`: ["Rejection Reason", "This function is implemented synchronous instead of asynchronous because the Adc module", "is impleted as Type II instead of Type IV."]
- `quality_flags`: []

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros`
- `content_types`: ["code_api", "table_like"]
- `summary`: Rejected AUTOSAR ADC requirements and rejection reasons, mainly hardware priority mechanism, low-power state APIs, asynchronous behavior and ECUC partition constraints.
- `keywords`: ["SWS_Adc_CONSTR_00002", "SWS_Adc_CONSTR_00004", "ADC_E_UNINIT", "ADC_E_BUSY", "ADC_E_IDLE", "ADC_E_ALREADY_INITIALIZED", "Adc_MemMap", "Adc_Hw", "Adc_Version", "Adc_Cfg"]
- `anchors`: ["Rejected Requirement 3 SWS_Adc_CONSTR_00002", "The ECUC partitions referenced by AdcGroupEcucPartitionRef shall be a subset of the ECUC", "partitions referenced by AdcEcucPartitionRef."]
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_E_PARAM_CONFIG", "ADC_E_PARAM_POINTER", "ADC_E_PARAM_GROUP", "ADC_E_WRONG_CONV_MODE", "ADC_E_WRONG_TRIGG_SRC", "ADC_E_NOTIF_CAPABILITY", "ADC_E_BUFFER_UNINIT", "ADC_E_NOT_DISENGAGED", "ADC_E_POWER_STATE_NOT_SUPPORTED", "ADC_E_TRANSITION_NOT_POSSIBLE"]
- `anchors`: ["•", "#define ADC_E_PARAM_CONFIG ((uint8)0x0EU)", "The ADC module is not properly configured."]
- `quality_flags`: []

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_INIT_ID", "ADC_DEINIT_ID", "ADC_STARTGROUPCONVERSION_ID", "ADC_STOPGROUPCONVERSION_ID", "ADC_VALUEREADGROUP_ID", "ADC_ENABLEHARDWARETRIGGER_ID", "ADC_DISABLEHARDWARETRIGGER_ID", "ADC_ENABLEGROUPNOTIFICATION_ID", "ADC_DISABLEGROUPNOTIFICATION_ID", "ADC_GETGROUPSTATUS_ID"]
- `anchors`: ["•", "#define ADC_INIT_ID 0x00U", "API service ID for Adc_Init function."]
- `quality_flags`: []

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_SETPOWERSTATE_ID", "ADC_GETCURRENTPOWERSTATE_ID", "ADC_GETTARGETPOWERSTATE_ID", "ADC_PREPAREPOWERSTATE_ID", "ADC_BITS_RESOLUTION_8", "ADC_BITS_RESOLUTION_10", "ADC_BITS_RESOLUTION_12", "ADC_CLOCK_DIVIDE_BY_1", "ADC_CLOCK_DIVIDE_BY_2", "ADC_CLOCK_DIVIDE_BY_4"]
- `anchors`: ["•", "#define ADC_SETPOWERSTATE_ID 0x10U", "API service ID for Adc_SetPowerState function."]
- `quality_flags`: []

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_SW_MINOR_VERSION", "ADC_SW_PATCH_VERSION", "ADC_VENDOR_ID", "ADC_MODULE_ID", "ADC_CFG_AR_RELEASE_MAJOR_VERSION", "ADC_CFG_AR_RELEASE_MINOR_VERSION", "ADC_CFG_AR_RELEASE_REVISION_VERSION", "ADC_CFG_SW_MAJOR_VERSION", "ADC_CFG_SW_MINOR_VERSION", "ADC_CFG_SW_PATCH_VERSION"]
- `anchors`: ["•", "#define ADC_SW_MINOR_VERSION 5", "•"]
- `quality_flags`: []

### SEG-0017
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_UNIT_3", "ADC_MAX_PARTITIONS", "ADC_NUM_SC_REGISTER", "ADC_NUM_SC_REGISTER_USED", "ADC_PTIMER_NUM_DELAY_REGISTER", "ADC_HW_TRIGGER_API", "ADC_ENABLE_LIMIT_CHECK", "ADC_GRP_NOTIF_CAPABILITY", "ADC_PRIORITY_NONE", "ADC_PRIORITY_HW"]
- `anchors`: ["•", "#define ADC_UNIT_3 3U", "ADC unit 3 available."]
- `quality_flags`: []

### SEG-0018
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_RESULT_ALIGNMENT", "ADC_ALIGN_RIGHT", "ADC_RESULT_U8", "ADC_RESULT_U16", "ADC_RESULT_U32", "ADC_RESULT_TYPE", "ADC_TIMEOUT_COUNTER", "ADC_DMA_TRANSFER_TIMEOUT", "ADC_DMA_SUPPORT", "ADC_MAX_HW_UNITS"]
- `anchors`: ["•", "#define ADC_RESULT_ALIGNMENT (ADC_ALIGN_RIGHT)", "Result Alignment."]
- `quality_flags`: []

### SEG-0019
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros`
- `content_types`: ["code_api"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_UNIT_3_ISR_USED", "ADC_QUEUE_MAX_DEPTH_MAX", "ADC_MAX_GROUPS", "ADC_HW_QUEUE", "ADC_DEV_ERROR_DETECT", "ADC_VERSION_INFO_API", "ADC_DEINIT_API", "ADC_ENABLE_START_STOP_GROUP_API", "ADC_READ_GROUP_API", "ADC_CONTINUOUS_NO_INTERRUPT_SUPPORT"]
- `anchors`: ["#define ADC_UNIT_3_ISR_USED", "IRQ definition.", "•"]
- `quality_flags`: []

### SEG-0020
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.4 Enums`
- `content_types`: ["code_api", "table_like"]
- `summary`: Macro definitions, error codes, service IDs, version constants, generated configuration switches, unit/channel/group symbols and feature flags.
- `keywords`: ["ADC_ID_CHANNEL_U8", "ADC_QUEUE_INDEX_TYPE_MAXIMUM", "ADC_ENABLE_USER_MODE_SUPPORT", "ADC_NOT_YET_CONVERTED", "ADC_ALREADY_CONVERTED", "ADC_ACCESS_MODE_SINGLE", "ADC_ACCESS_MODE_STREAMING", "Adc_QueueIndexType", "Adc_Types", "Adc_GroupConversionStateType"]
- `anchors`: ["•", "#define AdcHwUnit_0 (0)", "Symbolic names of ADC Hardware units."]
- `quality_flags`: []

### SEG-0021
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["code_api", "table_like"]
- `summary`: Enumeration definitions for ADC group conversion/access/replacement, status, trigger, range, alignment, trigger mode, sequence mode, overrun, reference, averaging and Ptimer options.
- `keywords`: ["ADC_CONV_MODE_ONESHOT", "ADC_CONV_MODE_CONTINUOUS", "ADC_GROUP_REPL_ABORT_RESTART", "ADC_GROUP_REPL_SUSPEND_RESUME", "ADC_STREAM_BUFFER_LINEAR", "ADC_STREAM_BUFFER_CIRCULAR", "ADC_TRANSFER_TYPE_INTERRUPT", "ADC_TRANSFER_TYPE_DMA", "ADC_TRANSFER_TYPE_POLLING", "ADC_IDLE"]
- `anchors`: ["1U", "2.4.1.3", "Adc_GroupConvModeType"]
- `quality_flags`: []

### SEG-0022
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `summary`: Enumeration definitions for ADC group conversion/access/replacement, status, trigger, range, alignment, trigger mode, sequence mode, overrun, reference, averaging and Ptimer options.
- `keywords`: ["ADC_BUSY", "ADC_COMPLETED", "ADC_STREAM_COMPLETED", "ADC_NOTIFICATION_DISABLED", "ADC_NOTIFICATION_ENABLED", "ADC_HW_TRIG_RISING_EDGE", "ADC_HW_TRIG_FALLING_EDGE", "ADC_HW_TRIG_BOTH_EDGES", "ADC_TRIGG_SRC_SW", "ADC_TRIGG_SRC_HW"]
- `anchors`: ["ADC_BUSY = 1U", "Group is in BUSY state.", "ADC_COMPLETED = 2U"]
- `quality_flags`: []

### SEG-0023
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `summary`: Enumeration definitions for ADC group conversion/access/replacement, status, trigger, range, alignment, trigger mode, sequence mode, overrun, reference, averaging and Ptimer options.
- `keywords`: ["ADC_RANGE_ALWAYS", "ADC_RANGE_NOT_UNDER_LOW", "ADC_RANGE_NOT_BETWEEN", "ADC_RANGE_NOT_OVER_HIGH", "ADC_RESULT_ALIGN_RIGHT", "ADC_RESULT_ALIGN_LEFT", "ADC_TRIGMODE_SW", "ADC_TRIGMODE_RISING_EDGE", "ADC_TRIGMODE_FALLING_EDGE", "ADC_TRIGMODE_BOTH_EDGE"]
- `anchors`: ["ADC_RANGE_ALWAYS = 3U", "Complete range - independent from channel limit settings", "ADC_RANGE_NOT_UNDER_LOW = 4U"]
- `quality_flags`: []

### SEG-0024
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `summary`: Enumeration definitions for ADC group conversion/access/replacement, status, trigger, range, alignment, trigger mode, sequence mode, overrun, reference, averaging and Ptimer options.
- `keywords`: ["ADC_SEQMODE_DISCONTINUOUS_0", "ADC_SEQMODE_DISCONTINUOUS_1", "ADC_OVERRUN_MODE_PRESERVE", "ADC_OVERRUN_MODE_OVERWRITE", "ADC_REF_INTERNAL", "ADC_REF_EXTERNAL", "ADC_AVERAGE_4", "ADC_AVERAGE_8", "ADC_AVERAGE_16", "ADC_AVERAGE_32"]
- `anchors`: ["ADC_SEQMODE_DISCONTINUOUS_0 =", "2U", "ADC discontinuous 0 mode."]
- `quality_flags`: []

### SEG-0025
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `content_types`: ["table_like"]
- `summary`: Enumeration definitions for ADC group conversion/access/replacement, status, trigger, range, alignment, trigger mode, sequence mode, overrun, reference, averaging and Ptimer options.
- `keywords`: ["ADC_PRETRIGGER_SEL_PTIMER", "ADC_PRETRIGGER_SEL_SW", "ADC_TRIGGER_SEL_PTIMER", "ADC_TRIGGER_SEL_TRGSEL", "ADC_SW_PRETRIGGER_DISABLED", "ADC_SW_PRETRIGGER_0", "ADC_SW_PRETRIGGER_1", "ADC_SW_PRETRIGGER_2", "ADC_SW_PRETRIGGER_3", "ADC_CMP_CHANNEL_ALL"]
- `anchors`: ["ADC_PRETRIGGER_SEL_PTIMER", "=", "0x00U"]
- `quality_flags`: []

### SEG-0026
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs`
- `content_types`: ["code_api", "table_like"]
- `summary`: Enumeration definitions for ADC group conversion/access/replacement, status, trigger, range, alignment, trigger mode, sequence mode, overrun, reference, averaging and Ptimer options.
- `keywords`: ["Adc_Types", "Adc_NotifyType", "Ptimer_ClockPreDividerType", "Ptimer_ClockPreDivMultiplyFactorType", "Ptimer_TrgSrcType", "ADC", "PTIMER_PRE_DIVIDE_BY_1", "PTIMER_PRE_DIVIDE_BY_2", "PTIMER_PRE_DIVIDE_BY_4", "PTIMER_PRE_DIVIDE_BY_8"]
- `anchors`: ["2.4.3.2", "Ptimer_ClockPreDividerType", "Enumeration"]
- `quality_flags`: []

### SEG-0027
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs`
- `content_types`: ["code_api"]
- `summary`: Typedefs for ADC notification callbacks, channel/index/unit/group/result/clock/prescale/conversion/sampling types and Ptimer reload type.
- `keywords`: ["Adc_ChannelIndexType", "Adc_HwUnitType", "Adc_ClockSourceType", "Adc_VoltageSourceType", "Adc_QueueIndexType", "Adc_ChannelType", "Adc_GroupType", "Adc_ResolutionType", "Adc_GroupPriorityType", "Adc_GroupDefType"]
- `anchors`: ["•", "typedef uint16 Adc_ChannelIndexType", "Number of channels."]
- `quality_flags`: []

### SEG-0028
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures`
- `content_types`: ["code_api"]
- `summary`: Typedefs for ADC notification callbacks, channel/index/unit/group/result/clock/prescale/conversion/sampling types and Ptimer reload type.
- `keywords`: ["Adc_SamplingTimeType", "Adc_SampleTimeOptType", "Adc_StreamNumSampleType", "Adc_HwTriggerTimerType", "Adc_ConfigType", "Adc_HwUnitConfigurationType", "Adc_GroupConfigurationType", "Adc_ChannelConfigurationType", "Adc_GroupType", "Adc_HwUnitType"]
- `anchors`: ["•", "typedef uint8 Adc_SamplingTimeType", "Sampling time."]
- `quality_flags`: []

### SEG-0029
- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `content_types`: ["text"]
- `summary`: ADC configuration structures and data fields for hardware unit, group, channel, unit status and group status.
- `keywords`: ["Adc_HwUnitConfigurationType", "Adc_HwUnitType", "Adc_PrescaleType", "Adc_ResolutionType", "Adc_NotifyType", "Adc_GroupConfigurationType", "Adc_GroupType", "Adc_GroupAccessModeType", "Adc_GroupConvModeType", "Adc_GroupPriorityType"]
- `anchors`: ["•", "uint8 CoreId", "CoreId of the configuration."]
- `quality_flags`: []

### SEG-0030
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `content_types`: ["text"]
- `summary`: ADC configuration structures and data fields for hardware unit, group, channel, unit status and group status.
- `keywords`: ["Adc_TriggerSourceType", "Adc_HwTriggerSignalType", "Adc_TransferType", "Adc_NotifyType", "Adc_StreamBufferModeType", "Adc_StreamNumSampleType", "Adc_GroupDefType", "Adc_ChannelIndexType", "Adc_AverageType", "Adc_ChannelConfigurationType"]
- `anchors`: ["•", "const Adc_TriggerSourceType eTriggerSource", "HW/SW trigger."]
- `quality_flags`: []

### SEG-0031
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `content_types`: ["code_api"]
- `summary`: ADC configuration structures and data fields for hardware unit, group, channel, unit status and group status.
- `keywords`: ["ADC_QUEUE_MAX_DEPTH_MAX", "ADC_HW_QUEUE", "Adc_SampleTimeOptType", "Adc_ChannelRangeSelectType", "Adc_ValueGroupType", "Adc_UnitStatusType", "Adc_QueueIndexType", "Adc_GroupType", "Adc_GroupStatusType", "Adc_StatusType"]
- `anchors`: ["•", "const Adc_SampleTimeOptType SampleTimeOpt", "Sample time option of the ADC channel."]
- `quality_flags`: []

### SEG-0032
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.7 API Functions`
- `content_types`: ["code_api", "image"]
- `summary`: ADC public API functions in Adc.h, including initialization, setup result buffer, de-initialization, conversion control, read/status, notifications and version info.
- `keywords`: ["Adc_ChannelIndexType", "Adc_Init", "Adc_ConfigType", "Adc_SetupResultBuffer", "Adc_GroupType", "Adc_ValueGroupType", "Adc_DeInit", "Adc_StartGroupConversion", "ADC", "API"]
- `anchors`: ["•", "Adc_ChannelIndexType CurrentChannel", "Current channel in use."]
- `quality_flags`: []

### SEG-0033
- `physical_pages`: [33]
- `printed_pages`: ["33"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `content_types`: ["code_api"]
- `summary`: ADC public API functions in Adc.h, including initialization, setup result buffer, de-initialization, conversion control, read/status, notifications and version info.
- `keywords`: ["Adc_StopGroupConversion", "Adc_GroupType", "Adc_ReadGroup", "Adc_ValueGroupType", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "ADC", "FC7xxx", "Parameters", "Parameter"]
- `anchors`: ["Parameter", "Group", "Numeric ID of requested ADC channel group."]
- `quality_flags`: []

### SEG-0034
- `physical_pages`: [34]
- `printed_pages`: ["34"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `content_types`: ["code_api"]
- `summary`: ADC public API functions in Adc.h, including initialization, setup result buffer, de-initialization, conversion control, read/status, notifications and version info.
- `keywords`: ["Adc_EnableGroupNotification", "Adc_GroupType", "Adc_DisableGroupNotification", "Adc_StatusType", "Adc_GetGroupStatus", "Adc_StreamNumSampleType", "Adc_GetStreamLastPointer", "Adc_ValueGroupType", "Adc_GetVersionInfo", "ADC"]
- `anchors`: ["2.7.1.9", "void Adc_EnableGroupNotification ( Adc_GroupType Group )", "void Adc_EnableGroupNotification ( Adc_GroupType Group )"]
- `quality_flags`: []

### SEG-0035
- `physical_pages`: [35]
- `printed_pages`: ["35"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: ADC public API functions in Adc.h, including initialization, setup result buffer, de-initialization, conversion control, read/status, notifications and version info.
- `keywords`: ["Adc_Hw", "Adc_HL_Init", "Adc_ConfigType", "Adc_Init", "Adc_HL_DeInit", "Adc_DeInit", "Adc_HL_StartConversion", "Adc_HwUnitType", "Adc_GroupType", "Adc_StartGroupConversion"]
- `anchors`: ["Parameter", "versioninfo", "Pointer to where to store the version information of this module."]
- `quality_flags`: []

### SEG-0036
- `physical_pages`: [36]
- `printed_pages`: ["36"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_StopGroupConversion", "Adc_HL_EnableHardwareTrigger", "Adc_HwUnitType", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_HL_DisableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_HL_UpdateGroupStatusWithoutInterrupt", "Adc_GetGroupStatus", "ADC"]
- `anchors`: ["Unit", "The hardware Unit.", "Group"]
- `quality_flags`: []

### SEG-0037
- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_HL_ReadGroup", "Adc_GroupType", "Adc_ValueGroupType", "Adc_ReadGroup", "Adc_HL_EndPartialConversion", "Adc_HwUnitType", "Adc_ISR_EndGroupConversion", "Adc_Lld", "Adc_LL_InitUnitHardware", "Adc_HwUnitConfigurationType"]
- `anchors`: ["2.8.1.8", "Std_ReturnType Adc_HL_ReadGroup (const Adc_GroupType Group, const uint8 CoreId, Adc_ValueGroupType *", "pDataPtr)"]
- `quality_flags`: []

### SEG-0038
- `physical_pages`: [38]
- `printed_pages`: ["38"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_HL_DeInit", "Adc_LL_StartHwTrigConversion", "Adc_HwUnitType", "Adc_GroupType", "Adc_HL_UpdateStatusGetData", "Adc_LL_EnableHardwareTrigger", "Adc_HL_EnableHardwareTrigger", "Adc_LL_DisableHardwareTrigger", "Adc_HL_DisableHardwareTrigger", "ADC"]
- `anchors`: ["CoreId", "The core ID of the caller.", "Referenced By"]
- `quality_flags`: []

### SEG-0039
- `physical_pages`: [39]
- `printed_pages`: ["39"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_LL_StartNormalConversion", "Adc_HwUnitType", "Adc_HL_StartConversion", "Adc_HL_StopConversion", "Adc_HL_UpdateSwQueue", "Adc_LL_ConfigurePartialConversion", "Adc_GroupType", "Adc_TriggerSourceType", "Adc_HL_EndPartialConversion", "Adc_LL_StartHwTrigConversion"]
- `anchors`: ["2.8.2.6", "void Adc_LL_StartNormalConversion (const Adc_HwUnitType Unit, const uint8 CoreId)", "void Adc_LL_StartNormalConversion (const Adc_HwUnitType Unit, const uint8 CoreId)"]
- `quality_flags`: []

### SEG-0040
- `physical_pages`: [40]
- `printed_pages`: ["40"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_HL_StartConversion", "Adc_HL_StopConversion", "Adc_HL_EndPartialConversion", "Adc_LL_RestartContinuousConversion", "Adc_HwUnitType", "Adc_GroupType", "Adc_HL_UpdateSwQueue", "Adc_LL_CheckConversionSequenceStatus", "Adc_HL_UpdateGroupStatusWithoutInterrupt", "Adc_ISR_EndGroupConversion"]
- `anchors`: ["Unit", "The hardware Unit.", "Std_ReturnType E_OK or E_NOT_OK."]
- `quality_flags`: []

### SEG-0041
- `physical_pages`: [41]
- `printed_pages`: ["41"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `content_types`: ["code_api"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_LL_ReConfigureDma", "Adc_HwUnitType", "Adc_GroupType", "Adc_Ptimer_ChannelSeqErr", "Adc_Ptimer_Hw", "Adc_Ptimer_InitUnitHardware", "Adc_LL_InitUnitHardware", "Adc_Ptimer_DeInitUnitHardware", "Adc_LL_DeInitUnitHardware", "Adc_Ptimer_ConfigurePartialConversion"]
- `anchors`: ["2.8.2.13", "void Adc_LL_ReConfigureDma (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)", "void Adc_LL_ReConfigureDma (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8"]
- `quality_flags`: []

### SEG-0042
- `physical_pages`: [42]
- `printed_pages`: ["42"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram`
- `content_types`: ["code_api", "diagram"]
- `summary`: Internal hardware-layer functions in Adc_Hw.h, Adc_Lld.h and Adc_Ptimer_Hw.h, including start/stop conversion, hardware trigger, status update, partial conversion and Ptimer control.
- `keywords`: ["Adc_LL_ConfigurePartialConversion", "Adc_Ptimer_StartSoftwareConversion", "Adc_HwUnitType", "Adc_LL_RestartContinuousConversion", "Adc_Ptimer_SetPtimerMode", "Adc_LL_StartNormalConversion", "Adc_Ptimer_StopConversion", "Adc_LL_StopConversionCheckTimeout", "ADC", "API"]
- `anchors`: ["Referenced By", "Adc_LL_ConfigurePartialConversion()", "2.8.3.4"]
- `quality_flags`: []

### SEG-0043
- `physical_pages`: [43]
- `printed_pages`: ["43"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["Adc_Init", "Adc_ConfigType", "Adc_Deinit", "Adc_DeInit", "ADC", "FC7xxx", "Initialization", "Driver", "responsibility", "design"]
- `anchors`: ["2.9.2", "De-Initialization of the ADC Driver", "It's the responsibility of the HW design that this state doesn't lead to undefined activities in the μc."]
- `quality_flags`: []

### SEG-0044
- `physical_pages`: [44]
- `printed_pages`: ["44"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["code_api", "diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["ADC_BUSY", "ADC_STREAM_COMPLETED", "Adc_OneShotUsage", "Adc_GetGroupStatus", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_StatusType", "Adc_ReadGroup", "Adc_ValueGroupType", "ADC"]
- `anchors`: ["2.9.3", "Software Triggered One-Shot Conversion without Notification", "sd Adc_OneShotUsage"]
- `quality_flags`: []

### SEG-0045
- `physical_pages`: [45]
- `printed_pages`: ["45"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["Adc_SW_triggered_continuous_with_notifications", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_Notification_Group_1", "Adc_ReadGroup", "Adc_ValueGroupType", "Adc_StopGroupConversion", "ADC", "FC7xxx"]
- `anchors`: ["2.9.4", "Software Triggered Continuous Conversion with Notification", "sd Adc_SW_triggered_continuous_with_notifications"]
- `quality_flags`: []

### SEG-0046
- `physical_pages`: [46]
- `printed_pages`: ["46"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["Adc_HW_triggered_continuous_with_notification", "Adc_EnableGroupNotification", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_Notification_Group_1", "Adc_ReadGroup", "Adc_ValueGroupType", "Adc_DisableGroupNotification", "Adc_DisableHardwareTrigger", "ADC"]
- `anchors`: ["2.9.5", "Hardware Triggered One-Shot Conversion with Notification", "sd Adc_HW_triggered_continuous_with_notification"]
- `quality_flags`: []

### SEG-0047
- `physical_pages`: [47]
- `printed_pages`: ["47"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["ADC_COMPLETED", "ADC_STREAM_COMPLETED", "Adc_HW_triggered_oneshot_linear_streaming", "Adc_EnableGroupNotification", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_Notification_Group_1", "Adc_GetGroupStatus", "Adc_DisableGroupNotification", "ADC"]
- `anchors`: ["2.9.6", "HW Trigger - One-Shot Conversion - Linear Streaming", "sd Adc_HW_triggered_oneshot_linear_streaming"]
- `quality_flags`: []

### SEG-0048
- `physical_pages`: [48]
- `printed_pages`: ["48"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["ADC_E_BUSY", "Adc_prio_mechanism_NONE_queuing_OFF", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_EnableHardwareTrigger", "Adc_Notification_Group_1", "ADC", "FC7xxx", "Priority"]
- `anchors`: ["2.9.7", "No Priority Mechanism - No Queuing", "sd Adc_prio_mechanism_NONE_queuing_OFF"]
- `quality_flags`: []

### SEG-0049
- `physical_pages`: [49]
- `printed_pages`: ["49"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["Adc_SW_queue_prio_mechanism_NONE_queuing_ON", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_Notification_Group_1", "Adc_Notification_Group_2", "ADC", "FC7xxx", "Priority", "Mechanism", "Queuing"]
- `anchors`: ["2.9.8", "No Priority Mechanism - SW Queuing", "sd Adc_SW_queue_prio_mechanism_NONE_queuing_ON"]
- `quality_flags`: []

### SEG-0050
- `physical_pages`: [50]
- `printed_pages`: ["50"]
- `section_path`: `Chapter 2 Software Design / 2.9 API Sequence Diagram`
- `content_types`: ["diagram", "image"]
- `summary`: API sequence diagrams for initialization/de-initialization, software/hardware triggered conversions, notification, streaming and queue/priority behavior.
- `keywords`: ["Adc_SW_queue_prio_mechanism_HW_SW", "Adc_EnableGroupNotification", "Adc_StartGroupConversion", "Adc_GroupType", "Adc_Notification_Group_1", "Adc_Notification_Group_2", "ADC", "HW_SW", "FC7xxx", "Priority"]
- `anchors`: ["2.9.9", "HW_SW Priority Mechanism - SW Queuing", "sd Adc_SW_queue_prio_mechanism_HW_SW"]
- `quality_flags`: []

### SEG-0051
- `physical_pages`: [51]
- `printed_pages`: ["51"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["text"]
- `summary`: Tresos container inclusion relation: ADC module containers such as IMPLEMENTATION_CONFIG_VARIANT, AdcConfigSet, AdcGeneral, AdcInterrupt, published information, AutosarExt and Dem references.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "AdcInterrupt", "AdcPublishedInformation", "AdcDemEventParameterRefs", "ADC", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx", "Tresos", "Configuration"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation"]
- `quality_flags`: []

### SEG-0052
- `physical_pages`: [52]
- `printed_pages`: ["52"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["text"]
- `summary`: Tresos container inclusion relation: ADC module containers such as IMPLEMENTATION_CONFIG_VARIANT, AdcConfigSet, AdcGeneral, AdcInterrupt, published information, AutosarExt and Dem references.
- `keywords`: ["AdcConfigSet", "AdcHwUnit", "AdcSampleTimeOptions", "AdcPtimerSettings", "AdcHardwareAverageSettings", "AdcChannel", "AdcGroup", "AdcHwUnitId", "AdcLogicalUnitId", "AdcClockSource"]
- `anchors`: ["3.1.2", "AdcConfigSet", "AdcConfigSet"]
- `quality_flags`: []

### SEG-0053
- `physical_pages`: [53]
- `printed_pages`: ["53"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["text"]
- `summary`: Tresos container inclusion relation: ADC module containers such as IMPLEMENTATION_CONFIG_VARIANT, AdcConfigSet, AdcGeneral, AdcInterrupt, published information, AutosarExt and Dem references.
- `keywords`: ["AdcGeneral", "AdcInterrupt", "AdcPowerStateConfig", "AdcDeInitApi", "AdcDevErrorDetect", "AdcEnableLimitCheck", "AdcEnableQueuing", "AdcEnableStartStopGroupApi", "AdcGrpNotifCapability", "AdcHwTriggerApi"]
- `anchors`: ["3.1.3", "AdcGeneral", "3.1.4"]
- `quality_flags`: []

### SEG-0054
- `physical_pages`: [54]
- `printed_pages`: ["54"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `content_types`: ["table_like"]
- `summary`: Tresos container inclusion relation: ADC module containers such as IMPLEMENTATION_CONFIG_VARIANT, AdcConfigSet, AdcGeneral, AdcInterrupt, published information, AutosarExt and Dem references.
- `keywords`: ["ADC_E_TIMEOUT", "AdcPublishedInformation", "AdcDemEventParameterRefs", "AdcChannelValueSigned", "AdcGroupFirstChannelFixed", "AdcMaxChannelResolution", "AdcMulticoreSupport", "AdcIsrPartitionMappingCheck", "AdcDisableDemReportErrorStatus", "AdcHardwareAverageOnce"]
- `anchors`: ["3.1.5", "AdcPublishedInformation", "3.1.6"]
- `quality_flags`: []

### SEG-0055
- `physical_pages`: [55]
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcConfigSet", "AdcHwUnit", "AdcHwUnitId", "ADC", "IMPLEMENTATION_CONFIG_VARIANT", "AUTOSAR", "ADC0", "ADC1", "ADC2", "ADC3"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1"]
- `quality_flags`: []

### SEG-0056
- `physical_pages`: [56]
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcLogicalUnitId", "AdcClockSource", "AdcClockRef", "AdcVoltageReferenceSelection", "AdcPrescale", "ADC", "MCU", "INTERNAL_REF", "EXTERNAL_REF", "FC7xxx"]
- `anchors`: ["3.2.2.1.2", "AdcLogicalUnitId", "Variable"]
- `quality_flags`: []

### SEG-0057
- `physical_pages`: [57]
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcDmaChannel", "AdcAlign", "AdcResolution", "AdcStartupCounter", "ADC", "LEFT_ALIGN", "RIGHT_ALIGN", "BITS_8", "BITS_10", "BITS_12"]
- `anchors`: ["•", "2 - Clock divided by 2.", "•"]
- `quality_flags`: []

### SEG-0058
- `physical_pages`: [58]
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcPreTriggerSelect", "AdcTriggerSelect", "AdcSampleTimeOptions", "AdcSampleTimeOption0", "ADC", "QCLK", "PTIMER_PRE_TRIGGER", "SOFTWARE_PRE_TRIGGER", "PTIMER_PRETRIGGER", "PTIMER_TRIGGER"]
- `anchors`: ["counting QCLK cycles until the internal counter reaches this value. So user should set these bits before ADC", "enable.", "Properties"]
- `quality_flags`: []

### SEG-0059
- `physical_pages`: [59]
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcSampleTimeOption1", "AdcSampleTimeOption2", "AdcSampleTimeOption3", "AdcPtimerSettings", "ADC", "FC7xxx", "Configuration", "hardware", "sample", "option"]
- `anchors`: ["Configuration for the ADC hardware sample time option 0.", "Properties", "Type"]
- `quality_flags`: []

### SEG-0060
- `physical_pages`: [60]
- `printed_pages`: ["60"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcPtimerPrescalerDividerSelect", "AdcPtimerMultiplicationFactorSelect", "ADC", "DIVIDE_BY_1", "DIVIDE_BY_2", "DIVIDE_BY_4", "DIVIDE_BY_8", "DIVIDE_BY_16", "DIVIDE_BY_32", "DIVIDE_BY_64"]
- `anchors`: ["Type", "Identifiable", "3.2.2.1.14.1"]
- `quality_flags`: []

### SEG-0061
- `physical_pages`: [61]
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcPtimerChannelSequenceErrorEnable", "AdcPtimerErrorNotification", "AdcHardwareAverageSettings", "AdcHardwareAverageEnable", "AdcHardwareAverageSelect", "ADC", "NULL_PTR", "SAMPLES_4", "SAMPLES_8", "SAMPLES_16"]
- `anchors`: ["3.2.2.1.14.3", "AdcPtimerChannelSequenceErrorEnable", "Variable"]
- `quality_flags`: []

### SEG-0062
- `physical_pages`: [62]
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcChannel", "AdcLogicalChannelId", "AdcChannelName", "AdcChannelId", "ADC", "SAMPLES_4", "SAMPLES_8", "SAMPLES_16", "SAMPLES_32", "MCU"]
- `anchors`: ["Properties", "Type", "Variable: Enumeration"]
- `quality_flags`: []

### SEG-0063
- `physical_pages`: [63]
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["ADC_RANGE_ALWAYS", "ADC_RANGE_BETWEEN", "ADC_RANGE_NOT_BETWEEN", "ADC_RANGE_NOT_OVER_HIGH", "ADC_RANGE_NOT_UNDER_LOW", "ADC_RANGE_OVER_HIGH", "ADC_RANGE_UNDER_LOW", "AdcChannelLimitCheck", "AdcChannelRangeSelect", "AdcChannelLowLimit"]
- `anchors`: ["Properties", "Type", "Variable: Integer"]
- `quality_flags`: []

### SEG-0064
- `physical_pages`: [64]
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcChannelConvTime", "AdcChannelRefVoltsrcHigh", "AdcChannelRefVoltsrcLow", "AdcChannelResolution", "ADC", "UPPER_REF_VOLT_0", "LOWER_REF_VOLT_0", "FC7xxx", "Variable", "Integer"]
- `anchors`: ["Type", "Variable: Integer", "Range"]
- `quality_flags`: []

### SEG-0065
- `physical_pages`: [65]
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcResolution", "AdcHwUnit", "AdcChannelSampTimeOption", "AdcChannelSampTime", "AdcSampleTimeOptions", "AdcGroup", "AdcGroupAccessMode", "ADC", "SAMPLE_TIME_OPTION_0", "SAMPLE_TIME_OPTION_1"]
- `anchors`: ["Type", "Variable: Integer", "Range"]
- `quality_flags`: []

### SEG-0066
- `physical_pages`: [66]
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["ADC_ACCESS_MODE_SINGLE", "ADC_ACCESS_MODE_STREAMING", "ADC_CONV_MODE_CONTINUOUS", "ADC_CONV_MODE_ONESHOT", "ADC_PRIORITY_NONE", "AdcGroupConversionMode", "AdcGroupId", "AdcGroup", "AdcGroupPriority", "AdcGeneral"]
- `anchors`: ["Type of access mode to group conversion results.", "Properties", "Type"]
- `quality_flags`: []

### SEG-0067
- `physical_pages`: [67]
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["ADC_GROUP_REPL_ABORT_RESTART", "ADC_GROUP_REPL_SUSPEND_RESUME", "ADC_TRIGG_SRC_HW", "ADC_TRIGG_SRC_SW", "ADC_HW_TRIG_RISING_EDGE", "ADC_HW_TRIG_BOTH_EDGES", "ADC_HW_TRIG_FALLING_EDGE", "AdcGroupTriggSrc", "AdcHwTrigSignal", "AdcHwTrigTimer"]
- `anchors`: ["Replacement mechanism used on ADC group level, if a group conversion is interrupted by a group which", "has a higher priority. It's fixed to Abort/Restart", "Properties"]
- `quality_flags`: []

### SEG-0068
- `physical_pages`: [68]
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["ADC_DMA", "ADC_INTERRUPT", "ADC_POLLING", "ADC_STREAM_BUFFER_CIRCULAR", "ADC_STREAM_BUFFER_LINEAR", "AdcTransferType", "AdcNotification", "AdcStreamingBufferMode", "AdcStreamingNumSamples", "AdcGroupInBacktoBackMode"]
- `anchors`: ["3.2.2.1.17.9", "AdcTransferType", "Variable"]
- `quality_flags`: []

### SEG-0069
- `physical_pages`: [69]
- `printed_pages`: ["69"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcGroupInBacktoBackMode", "AdcDelayNextPtimer", "AdcGroupUsesChannelDelays", "AdcChannelDelay", "ADC", "BTB", "FC7xxx", "Enable", "Disable", "channel"]
- `anchors`: ["Enable/ Disable the channel conversions occuring in Back to Back mode. The Ptimer hardware unit is used", "to initiate individual channel conversions that are required for each group conversion, with one Ptimer", "pretrigger controlling the timing of each ADC channel conversion. When AdcGroupInBacktoBackMode is"]
- `quality_flags`: []

### SEG-0070
- `physical_pages`: [70]
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["ADC_CFG2", "ADC_SMPR", "AdcDelayNextPtimer", "AdcPtimerPeriodContinuousMode", "AdcGroupDefinition", "AdcChannels", "AdcGroups", "AdcChannel", "ADC", "MCU"]
- `anchors`: ["channels to avoid Ptimer internal errors.", "Properties", "Type"]
- `quality_flags`: []

### SEG-0071
- `physical_pages`: [71]
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["AdcChannel", "AdcGroupEcucPartitionRef", "AdcEcucPartitionRef", "AdcChannelDelay", "AdcGroupHardwareAverageSettings", "ADC", "ECUC", "FC7xxx", "Screenshot", "Properties"]
- `anchors`: ["Properties", "List", "Type"]
- `quality_flags`: []

### SEG-0072
- `physical_pages`: [72]
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcConfigSet container variables and screenshots: hardware units, clocks, voltage reference, prescaler, DMA, alignment, resolution, trigger/pretrigger, sample time, Ptimer, averaging, channels and groups.
- `keywords`: ["ADC_CFG2", "AdcGroupHardwareAverageEnable", "AdcGroupHardwareAverageSelect", "AdcHwUnitEcucPartitionRef", "AdcEcucPartitionRef", "AdcGeneral", "ADC", "AVG_EN", "SAMPLES_4", "SAMPLES_8"]
- `anchors`: ["Type", "Identifiable", "3.2.2.1.17.20.1"]
- `quality_flags`: []

### SEG-0073
- `physical_pages`: [73]
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["ADC_PRIORITY_HW_SW", "Adc_DeInit", "AdcDeInitApi", "AdcDevErrorDetect", "AdcEnableLimitCheck", "AdcEnableQueuing", "AdcPriorityImplementation", "AdcEnableStartStopGroupApi", "ADC", "OFF"]
- `anchors`: ["Properties", "Container", "Type"]
- `quality_flags`: []

### SEG-0074
- `physical_pages`: [74]
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["Adc_StartGroupConversion", "Adc_StopGroupConversion", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_ReadGroup", "Adc_GetVersionInfo", "AdcGrpNotifCapability", "AdcHwTriggerApi", "AdcReadGroupApi", "AdcVersionInfoApi"]
- `anchors`: ["Adds / removes the services Adc_StartGroupConversion() and Adc_StopGroupConversion from the", "code.true:", "Adc_StartGroupConversion()"]
- `quality_flags`: []

### SEG-0075
- `physical_pages`: [75]
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["ADC_PRIORITY_HW", "ADC_PRIORITY_HW_SW", "ADC_PRIORITY_NONE", "ADC_ALIGN_LEFT", "ADC_ALIGN_RIGHT", "Adc_GetVersionInfo", "AdcPriorityImplementation", "AdcPriorityHw", "AdcPriorityHwSw", "AdcResultAlignment"]
- `anchors`: ["false: Adc_GetVersionInfo() can not be used.", "Properties", "Type"]
- `quality_flags`: []

### SEG-0076
- `physical_pages`: [76]
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["Adc_SetPowerState", "Adc_GetCurrentPowerState", "Adc_GetTargetPowerState", "Adc_PreparePowerState", "Adc_Main_PowerTransitionManager", "AdcDmaTimeout", "AdcPriorityQueueMaxDepth", "AdcLowPowerStatesSupport", "AdcPowerStateAsynchTransitionMode", "ADC"]
- `anchors`: ["Default", "3.2.3.13", "AdcDmaTimeout"]
- `quality_flags`: []

### SEG-0077
- `physical_pages`: [77]
- `printed_pages`: ["77"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["AdcPowerStateConfig", "AdcPowerState", "AdcLowPowerStatesSupport", "AdcPowerStateReadyCbkRef", "AdcEcucPartitionRef", "ADC", "CDD", "NULL_PTR", "ECUC", "API"]
- `anchors`: ["3.2.3.17", "AdcPowerStateConfig", "Container"]
- `quality_flags`: []

### SEG-0078
- `physical_pages`: [78]
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["AdcKernelEcucPartitionRef", "AdcEcucPartitionRef", "AdcInterrupt", "AdcInterruptSource", "ADC", "REFERENCE", "ECUC", "ADC0_COCO", "ADC1_COCO", "FC7xxx"]
- `anchors`: ["Properties", "List", "Type"]
- `quality_flags`: []

### SEG-0079
- `physical_pages`: [79]
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `content_types`: ["image", "table_like"]
- `summary`: AdcGeneral and AdcPublishedInformation variables: API enable switches, queueing, trigger API, priority, result alignment, timeouts, low-power state and interrupt options.
- `keywords`: ["AdcInterruptEnable", "AdcPublishedInformation", "AdcChannelValueSigned", "AdcGroupFirstChannelFixed", "AdcMaxChannelResolution", "ADC", "FC7xxx", "Variable", "removes", "interrupt"]
- `anchors`: ["3.2.3.20.2", "AdcInterruptEnable", "Variable"]
- `quality_flags`: []

### SEG-0080
- `physical_pages`: [80]
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `content_types`: ["image", "table_like"]
- `summary`: CommonPublishedInformation, AutosarExt and DemEventParameterRefs variables: AUTOSAR/SW versions, vendor/module ID, multicore, ISR partition mapping, DEM reporting, DMA support and ADC_E_TIMEOUT.
- `keywords`: ["ADC", "AUTOSAR", "FC7xxx", "Value", "CommonPublishedInformation", "Container", "Common", "container", "aggregated", "modules"]
- `anchors`: ["3.2.5", "CommonPublishedInformation", "Container"]
- `quality_flags`: []

### SEG-0081
- `physical_pages`: [81]
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `content_types`: ["image", "table_like"]
- `summary`: CommonPublishedInformation, AutosarExt and DemEventParameterRefs variables: AUTOSAR/SW versions, vendor/module ID, multicore, ISR partition mapping, DEM reporting, DMA support and ADC_E_TIMEOUT.
- `keywords`: ["ADC", "AUTOSAR", "API", "FC7xxx", "SwMajorVersion", "Variable", "Major", "version", "number", "vendor"]
- `anchors`: ["3.2.5.5", "SwMajorVersion", "Variable"]
- `quality_flags`: []

### SEG-0082
- `physical_pages`: [82]
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `content_types`: ["image", "table_like"]
- `summary`: CommonPublishedInformation, AutosarExt and DemEventParameterRefs variables: AUTOSAR/SW versions, vendor/module ID, multicore, ISR partition mapping, DEM reporting, DMA support and ADC_E_TIMEOUT.
- `keywords`: ["Adc_Init", "AdcMulticoreSupport", "AdcIsrPartitionMappingCheck", "AdcDisableDemReportErrorStatus", "AdcHardwareAverageOnce", "AdcEnableDmaTrasferMode", "ADC", "ISR", "DMA", "FC7xxx"]
- `anchors`: ["Properties", "3.2.6.1", "AdcMulticoreSupport"]
- `quality_flags`: []

### SEG-0083
- `physical_pages`: [83]
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `content_types`: ["image", "table_like"]
- `summary`: CommonPublishedInformation, AutosarExt and DemEventParameterRefs variables: AUTOSAR/SW versions, vendor/module ID, multicore, ISR partition mapping, DEM reporting, DMA support and ADC_E_TIMEOUT.
- `keywords`: ["ADC_E_TIMEOUT", "AdcEnableUserModeSupport", "AdcDemEventParameterRefs", "ADC", "DMA", "API", "AUTOSAR", "FC7xxx", "parameter", "disabled"]
- `anchors`: ["parameter is disabled then DMA handling code will be removed at pre-compile time and DMA transfer", "cannot be configured for any ADC unit in any variant. If this parameter is enabled then the DMA", "configuration code will not be removed. This is an Implementation Specific Parameter."]
- `quality_flags`: []

### SEG-0084
- `physical_pages`: [84]
- `printed_pages`: ["84"]
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `summary`: Configuration guide constraints and common ADC usage steps with screenshots for clocks, PortPin mode, hardware units, channels, groups and channel delays.
- `keywords`: ["ADC_PRIORITY_NONE", "AdcGroupDefinition", "ADC", "MCU", "FC7xxx", "Configuration", "Guides", "Constraint", "priority", "mechanism"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint"]
- `quality_flags`: []

### SEG-0085
- `physical_pages`: [85]
- `printed_pages`: ["85"]
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `summary`: Configuration guide constraints and common ADC usage steps with screenshots for clocks, PortPin mode, hardware units, channels, groups and channel delays.
- `keywords`: ["AdcHwUnit", "ADC", "FC7xxx", "hardware", "units", "configuration", "configure", "general", "settings", "channels"]
- `anchors`: ["5)", "Add the hardware units to be used in AdcHwUnit configuration.", "6)"]
- `quality_flags`: []

### SEG-0086
- `physical_pages`: [86]
- `printed_pages`: ["86"]
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `summary`: Configuration guide constraints and common ADC usage steps with screenshots for clocks, PortPin mode, hardware units, channels, groups and channel delays.
- `keywords`: ["ADC", "FC7xxx", "channel", "configure", "parameters", "AutoSAR", "channels", "accessed", "groups", "should"]
- `anchors`: ["8)", "For each channel, configure the channel parameters.", "9)"]
- `quality_flags`: []

### SEG-0087
- `physical_pages`: [87]
- `printed_pages`: ["87"]
- `section_path`: `Chapter 4 Configuration Guides`
- `content_types`: ["image"]
- `summary`: Configuration guide constraints and common ADC usage steps with screenshots for clocks, PortPin mode, hardware units, channels, groups and channel delays.
- `keywords`: ["ADC", "FC7xxx", "Assign", "channels", "group", "channel", "delays", "shall", "assign"]
- `anchors`: ["11) Assign channels to the group.", "12) If channel delays are used for the group, the user shall also assign channel delays for the group."]
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
- `summary`: Revision history from 0.1 to 0.5; latest rev.0.5 updates for MCAL V0.5.0 release.
- `anchor`: `Revision Date Changes`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.96`
- `quality_flags`: []

### TBL-0003-0004
- `caption`: `Table of Contents`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0003-0004`
- `physical_pages`: [3, 4]
- `primary_page`: `3`
- `printed_pages`: ["3", "4"]
- `section_path`: `Table of Contents`
- `bbox`: `null`
- `key_fields`: ["Chapter/section", "Title", "Printed page"]
- `summary`: TOC spans pages 3-4, listing chapters and subsections through configuration guides.
- `anchor`: `Table of Contents`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.95`
- `quality_flags`: ["toc_table_like", "table_spans_multiple_pages"]

### TBL-0006-REQ-SWS-ADC-00337
- `caption`: `Rejected Requirement panel: SWS_Adc_00337`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00337`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00337 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00337`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0006-REQ-SWS-ADC-00339
- `caption`: `Rejected Requirement panel: SWS_Adc_00339`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00339`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00339 and the document's rejection reason.
- `anchor`: `Rejected Requirement 2 SWS_Adc_00339`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0006-REQ-SWS-ADC-00341
- `caption`: `Rejected Requirement panel: SWS_Adc_00341`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00341`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00341 and the document's rejection reason.
- `anchor`: `Rejected Requirement 1 SWS_Adc_00341`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0006-REQ-SWS-ADC-00462
- `caption`: `Rejected Requirement panel: SWS_Adc_00462`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00462`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00462 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00462`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0006-REQ-SWS-ADC-00463
- `caption`: `Rejected Requirement panel: SWS_Adc_00463`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00463`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00463 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00463`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0006-REQ-SWS-ADC-00464
- `caption`: `Rejected Requirement panel: SWS_Adc_00464`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00464`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00464 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00464`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0006-REQ-SWS-ADC-00465
- `caption`: `Rejected Requirement panel: SWS_Adc_00465`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-REQ-SWS-ADC-00465`
- `physical_pages`: [6]
- `primary_page`: `6`
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00465 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00465`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00466
- `caption`: `Rejected Requirement panel: SWS_Adc_00466`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00466`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00466 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00466`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00467
- `caption`: `Rejected Requirement panel: SWS_Adc_00467`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00467`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00467 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00467`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00469
- `caption`: `Rejected Requirement panel: SWS_Adc_00469`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00469`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00469 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00469`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00470
- `caption`: `Rejected Requirement panel: SWS_Adc_00470`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00470`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00470 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00470`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00471
- `caption`: `Rejected Requirement panel: SWS_Adc_00471`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00471`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00471 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00471`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00472
- `caption`: `Rejected Requirement panel: SWS_Adc_00472`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00472`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00472 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00472`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0007-REQ-SWS-ADC-00473
- `caption`: `Rejected Requirement panel: SWS_Adc_00473`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-REQ-SWS-ADC-00473`
- `physical_pages`: [7]
- `primary_page`: `7`
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00473 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00473`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0008-REQ-SWS-ADC-00517
- `caption`: `Rejected Requirement panel: SWS_Adc_00517`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0008-REQ-SWS-ADC-00517`
- `physical_pages`: [8]
- `primary_page`: `8`
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00517 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00517`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0008-REQ-SWS-ADC-00527
- `caption`: `Rejected Requirement panel: SWS_Adc_00527`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0008-REQ-SWS-ADC-00527`
- `physical_pages`: [8]
- `primary_page`: `8`
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00527 and the document's rejection reason.
- `anchor`: `Rejected Requirement 4 SWS_Adc_00527`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0008-REQ-SWS-ADC-91000
- `caption`: `Rejected Requirement panel: SWS_Adc_91000`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0008-REQ-SWS-ADC-91000`
- `physical_pages`: [8]
- `primary_page`: `8`
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_91000 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_91000`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0009-REQ-SWS-ADC-00146
- `caption`: `Rejected Requirement panel: SWS_Adc_00146`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-REQ-SWS-ADC-00146`
- `physical_pages`: [9]
- `primary_page`: `9`
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00146 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00146`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0009-REQ-SWS-ADC-00273
- `caption`: `Rejected Requirement panel: SWS_Adc_00273`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-REQ-SWS-ADC-00273`
- `physical_pages`: [9]
- `primary_page`: `9`
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00273 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00273`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0009-REQ-SWS-ADC-00283
- `caption`: `Rejected Requirement panel: SWS_Adc_00283`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-REQ-SWS-ADC-00283`
- `physical_pages`: [9]
- `primary_page`: `9`
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00283 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00283`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0009-REQ-SWS-ADC-00358
- `caption`: `Rejected Requirement panel: SWS_Adc_00358`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-REQ-SWS-ADC-00358`
- `physical_pages`: [9]
- `primary_page`: `9`
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00358 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00358`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0009-REQ-SWS-ADC-91001
- `caption`: `Rejected Requirement panel: SWS_Adc_91001`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-REQ-SWS-ADC-91001`
- `physical_pages`: [9]
- `primary_page`: `9`
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_91001 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_91001`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0010-REQ-SWS-ADC-00120
- `caption`: `Rejected Requirement panel: SWS_Adc_00120`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0010-REQ-SWS-ADC-00120`
- `physical_pages`: [10]
- `primary_page`: `10`
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00120 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00120`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0010-REQ-SWS-ADC-00121
- `caption`: `Rejected Requirement panel: SWS_Adc_00121`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0010-REQ-SWS-ADC-00121`
- `physical_pages`: [10]
- `primary_page`: `10`
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00121 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00121`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0010-REQ-SWS-ADC-91002
- `caption`: `Rejected Requirement panel: SWS_Adc_91002`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0010-REQ-SWS-ADC-91002`
- `physical_pages`: [10]
- `primary_page`: `10`
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_91002 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_91002`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0010-REQ-SWS-ADC-91003
- `caption`: `Rejected Requirement panel: SWS_Adc_91003`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0010-REQ-SWS-ADC-91003`
- `physical_pages`: [10]
- `primary_page`: `10`
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_91003 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_91003`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0011-REQ-SWS-ADC-00219
- `caption`: `Rejected Requirement panel: SWS_Adc_00219`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-REQ-SWS-ADC-00219`
- `physical_pages`: [11]
- `primary_page`: `11`
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00219 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00219`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0011-REQ-SWS-ADC-00305
- `caption`: `Rejected Requirement panel: SWS_Adc_00305`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-REQ-SWS-ADC-00305`
- `physical_pages`: [11]
- `primary_page`: `11`
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_00305 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_00305`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0011-REQ-SWS-ADC-91004
- `caption`: `Rejected Requirement panel: SWS_Adc_91004`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-REQ-SWS-ADC-91004`
- `physical_pages`: [11]
- `primary_page`: `11`
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_91004 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_91004`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0011-REQ-SWS-ADC-CONSTR-00001
- `caption`: `Rejected Requirement panel: SWS_Adc_CONSTR_00001`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-REQ-SWS-ADC-CONSTR-00001`
- `physical_pages`: [11]
- `primary_page`: `11`
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_CONSTR_00001 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_CONSTR_00001`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0011-REQ-SWS-ADC-CONSTR-00003
- `caption`: `Rejected Requirement panel: SWS_Adc_CONSTR_00003`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-REQ-SWS-ADC-CONSTR-00003`
- `physical_pages`: [11]
- `primary_page`: `11`
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_CONSTR_00003 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_CONSTR_00003`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0012-FILE-STRUCTURE
- `caption`: `File Structure diagram/table`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-FILE-STRUCTURE`
- `physical_pages`: [12]
- `primary_page`: `12`
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.2 File Structure`
- `bbox`: `null`
- `key_fields`: ["File name", "Dependency relation"]
- `summary`: Shows source/header file dependencies such as Adc.c, Adc.h, Adc_Hw.h, Det.h, SchM_Adc.h, Std_Types.h and Mcal.h.
- `anchor`: `2.2 File Structure`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.76`
- `quality_flags`: ["diagram_indexed_as_table_like_dependency_map"]

### TBL-0012-REQ-SWS-ADC-CONSTR-00002
- `caption`: `Rejected Requirement panel: SWS_Adc_CONSTR_00002`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-REQ-SWS-ADC-CONSTR-00002`
- `physical_pages`: [12]
- `primary_page`: `12`
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_CONSTR_00002 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_CONSTR_00002`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0012-REQ-SWS-ADC-CONSTR-00004
- `caption`: `Rejected Requirement panel: SWS_Adc_CONSTR_00004`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-REQ-SWS-ADC-CONSTR-00004`
- `physical_pages`: [12]
- `primary_page`: `12`
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Panel records rejected AUTOSAR ADC requirement SWS_Adc_CONSTR_00004 and the document's rejection reason.
- `anchor`: `Rejected Requirement 3 SWS_Adc_CONSTR_00004`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.92`
- `quality_flags`: ["table_like_panel", "source_has_repeated_rejected_requirement_numbering"]

### TBL-0020-ENUM-2-4-1-1-ADC-GROUPCONVERSIONSTATETYPE
- `caption`: `Enumeration values: Adc_GroupConversionStateType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-ENUM-2-4-1-1-ADC-GROUPCONVERSIONSTATETYPE`
- `physical_pages`: [20]
- `primary_page`: `20`
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_GroupConversionStateType.
- `anchor`: `Enumeration Adc_GroupConversionStateType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0020-ENUM-2-4-1-2-ADC-GROUPACCESSMODETYPE
- `caption`: `Enumeration values: Adc_GroupAccessModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-ENUM-2-4-1-2-ADC-GROUPACCESSMODETYPE`
- `physical_pages`: [20]
- `primary_page`: `20`
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_GroupAccessModeType.
- `anchor`: `Enumeration Adc_GroupAccessModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0021-ENUM-2-4-1-3-ADC-GROUPCONVMODETYPE
- `caption`: `Enumeration values: Adc_GroupConvModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-ENUM-2-4-1-3-ADC-GROUPCONVMODETYPE`
- `physical_pages`: [21]
- `primary_page`: `21`
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_GroupConvModeType.
- `anchor`: `Enumeration Adc_GroupConvModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0021-ENUM-2-4-1-4-ADC-GROUPREPLACEMENTTYPE
- `caption`: `Enumeration values: Adc_GroupReplacementType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-ENUM-2-4-1-4-ADC-GROUPREPLACEMENTTYPE`
- `physical_pages`: [21]
- `primary_page`: `21`
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_GroupReplacementType.
- `anchor`: `Enumeration Adc_GroupReplacementType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0021-ENUM-2-4-1-5-ADC-STREAMBUFFERMODETYPE
- `caption`: `Enumeration values: Adc_StreamBufferModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-ENUM-2-4-1-5-ADC-STREAMBUFFERMODETYPE`
- `physical_pages`: [21]
- `primary_page`: `21`
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_StreamBufferModeType.
- `anchor`: `Enumeration Adc_StreamBufferModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0021-ENUM-2-4-1-6-ADC-TRANSFERTYPE
- `caption`: `Enumeration values: Adc_TransferType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-ENUM-2-4-1-6-ADC-TRANSFERTYPE`
- `physical_pages`: [21]
- `primary_page`: `21`
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_TransferType.
- `anchor`: `Enumeration Adc_TransferType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0021-ENUM-2-4-1-7-ADC-STATUSTYPE
- `caption`: `Enumeration values: Adc_StatusType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-ENUM-2-4-1-7-ADC-STATUSTYPE`
- `physical_pages`: [21]
- `primary_page`: `21`
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_StatusType.
- `anchor`: `Enumeration Adc_StatusType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0022-ENUM-2-4-1-10-ADC-TRIGGERSOURCETYPE
- `caption`: `Enumeration values: Adc_TriggerSourceType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-ENUM-2-4-1-10-ADC-TRIGGERSOURCETYPE`
- `physical_pages`: [22]
- `primary_page`: `22`
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_TriggerSourceType.
- `anchor`: `Enumeration Adc_TriggerSourceType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0022-ENUM-2-4-1-11-ADC-HWTRIGGERINGTYPE
- `caption`: `Enumeration values: Adc_HwTriggeringType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-ENUM-2-4-1-11-ADC-HWTRIGGERINGTYPE`
- `physical_pages`: [22]
- `primary_page`: `22`
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_HwTriggeringType.
- `anchor`: `Enumeration Adc_HwTriggeringType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0022-ENUM-2-4-1-12-ADC-CHANNELRANGESELECTTYPE
- `caption`: `Enumeration values: Adc_ChannelRangeSelectType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-ENUM-2-4-1-12-ADC-CHANNELRANGESELECTTYPE`
- `physical_pages`: [22]
- `primary_page`: `22`
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_ChannelRangeSelectType.
- `anchor`: `Enumeration Adc_ChannelRangeSelectType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0022-ENUM-2-4-1-8-ADC-NOTIFICATIONTYPE
- `caption`: `Enumeration values: Adc_NotificationType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-ENUM-2-4-1-8-ADC-NOTIFICATIONTYPE`
- `physical_pages`: [22]
- `primary_page`: `22`
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_NotificationType.
- `anchor`: `Enumeration Adc_NotificationType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0022-ENUM-2-4-1-9-ADC-HWTRIGGERSIGNALTYPE
- `caption`: `Enumeration values: Adc_HwTriggerSignalType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-ENUM-2-4-1-9-ADC-HWTRIGGERSIGNALTYPE`
- `physical_pages`: [22]
- `primary_page`: `22`
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_HwTriggerSignalType.
- `anchor`: `Enumeration Adc_HwTriggerSignalType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0023-ENUM-2-4-2-1-ADC-ALIGNTYPE
- `caption`: `Enumeration values: Adc_AlignType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-ENUM-2-4-2-1-ADC-ALIGNTYPE`
- `physical_pages`: [23]
- `primary_page`: `23`
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_AlignType.
- `anchor`: `Enumeration Adc_AlignType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0023-ENUM-2-4-2-2-ADC-TRIGMODETYPE
- `caption`: `Enumeration values: Adc_TrigModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-ENUM-2-4-2-2-ADC-TRIGMODETYPE`
- `physical_pages`: [23]
- `primary_page`: `23`
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_TrigModeType.
- `anchor`: `Enumeration Adc_TrigModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0023-ENUM-2-4-2-3-ADC-SEQMODETYPE
- `caption`: `Enumeration values: Adc_SeqModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-ENUM-2-4-2-3-ADC-SEQMODETYPE`
- `physical_pages`: [23]
- `primary_page`: `23`
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_SeqModeType.
- `anchor`: `Enumeration Adc_SeqModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0023-ENUM-2-4-2-4-ADC-SEQMODETYPE
- `caption`: `Enumeration values: Adc_SeqModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-ENUM-2-4-2-4-ADC-SEQMODETYPE`
- `physical_pages`: [23]
- `primary_page`: `23`
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_SeqModeType.
- `anchor`: `Enumeration Adc_SeqModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0024-ENUM-2-4-2-5-ADC-OVRMODETYPE
- `caption`: `Enumeration values: Adc_OvrModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-ENUM-2-4-2-5-ADC-OVRMODETYPE`
- `physical_pages`: [24]
- `primary_page`: `24`
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_OvrModeType.
- `anchor`: `Enumeration Adc_OvrModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0024-ENUM-2-4-2-6-ADC-REFTYPE
- `caption`: `Enumeration values: Adc_RefType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-ENUM-2-4-2-6-ADC-REFTYPE`
- `physical_pages`: [24]
- `primary_page`: `24`
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_RefType.
- `anchor`: `Enumeration Adc_RefType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0024-ENUM-2-4-2-7-ADC-AVERAGETYPE
- `caption`: `Enumeration values: Adc_AverageType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-ENUM-2-4-2-7-ADC-AVERAGETYPE`
- `physical_pages`: [24]
- `primary_page`: `24`
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_AverageType.
- `anchor`: `Enumeration Adc_AverageType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0024-ENUM-2-4-2-8-ADC-TRIGSRCTYPE
- `caption`: `Enumeration values: Adc_TrigSrcType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-ENUM-2-4-2-8-ADC-TRIGSRCTYPE`
- `physical_pages`: [24]
- `primary_page`: `24`
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_TrigSrcType.
- `anchor`: `Enumeration Adc_TrigSrcType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0024-ENUM-2-4-2-9-ADC-PRETRIGGERSELTYPE
- `caption`: `Enumeration values: Adc_PreTriggerSelType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-ENUM-2-4-2-9-ADC-PRETRIGGERSELTYPE`
- `physical_pages`: [24]
- `primary_page`: `24`
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_PreTriggerSelType.
- `anchor`: `Enumeration Adc_PreTriggerSelType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0025-ENUM-2-4-2-10-ADC-TRIGGERSELTYPE
- `caption`: `Enumeration values: Adc_TriggerSelType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-ENUM-2-4-2-10-ADC-TRIGGERSELTYPE`
- `physical_pages`: [25]
- `primary_page`: `25`
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_TriggerSelType.
- `anchor`: `Enumeration Adc_TriggerSelType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0025-ENUM-2-4-2-11-ADC-SWPRETRIGGERTYPE
- `caption`: `Enumeration values: Adc_SwPreTriggerType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-ENUM-2-4-2-11-ADC-SWPRETRIGGERTYPE`
- `physical_pages`: [25]
- `primary_page`: `25`
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_SwPreTriggerType.
- `anchor`: `Enumeration Adc_SwPreTriggerType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0025-ENUM-2-4-2-12-ADC-CMPCHANNELTYPE
- `caption`: `Enumeration values: Adc_CmpChannelType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-ENUM-2-4-2-12-ADC-CMPCHANNELTYPE`
- `physical_pages`: [25]
- `primary_page`: `25`
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Adc_CmpChannelType.
- `anchor`: `Enumeration Adc_CmpChannelType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0025-ENUM-2-4-3-1-PTIMER-LOADVALUEMODETYPE
- `caption`: `Enumeration values: Ptimer_LoadValueModeType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-ENUM-2-4-3-1-PTIMER-LOADVALUEMODETYPE`
- `physical_pages`: [25]
- `primary_page`: `25`
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Ptimer_LoadValueModeType.
- `anchor`: `Enumeration Ptimer_LoadValueModeType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0026-0028-TYPEDEFS
- `caption`: `Typedefs in Adc_Types.h`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-0028-TYPEDEFS`
- `physical_pages`: [26, 27, 28]
- `primary_page`: `26`
- `printed_pages`: ["26", "27", "28"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs`
- `bbox`: `null`
- `key_fields`: ["typedef", "Description"]
- `summary`: Lists ADC typedefs such as Adc_NotifyType, Adc_ChannelType, Adc_GroupType and Adc_ValueGroupType.
- `anchor`: `Typedefs in Adc_Types.h`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.84`
- `quality_flags`: ["list_as_table_like_index", "table_spans_multiple_pages"]

### TBL-0026-ENUM-2-4-3-2-PTIMER-CLOCKPREDIVIDERTYPE
- `caption`: `Enumeration values: Ptimer_ClockPreDividerType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-ENUM-2-4-3-2-PTIMER-CLOCKPREDIVIDERTYPE`
- `physical_pages`: [26]
- `primary_page`: `26`
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Ptimer_ClockPreDividerType.
- `anchor`: `Enumeration Ptimer_ClockPreDividerType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0026-ENUM-2-4-3-3-PTIMER-CLOCKPREDIVMULTIPLYFACTORTYPE
- `caption`: `Enumeration values: Ptimer_ClockPreDivMultiplyFactorType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-ENUM-2-4-3-3-PTIMER-CLOCKPREDIVMULTIPLYFACTORTYPE`
- `physical_pages`: [26]
- `primary_page`: `26`
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Ptimer_ClockPreDivMultiplyFactorType.
- `anchor`: `Enumeration Ptimer_ClockPreDivMultiplyFactorType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0026-ENUM-2-4-3-4-PTIMER-TRGSRCTYPE
- `caption`: `Enumeration values: Ptimer_TrgSrcType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-ENUM-2-4-3-4-PTIMER-TRGSRCTYPE`
- `physical_pages`: [26]
- `primary_page`: `26`
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs`
- `bbox`: `null`
- `key_fields`: ["Value", "Description"]
- `summary`: Value/description table for enumeration Ptimer_TrgSrcType.
- `anchor`: `Enumeration Ptimer_TrgSrcType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.88`
- `quality_flags`: ["enum_value_table_like"]

### TBL-0028-STRUCT-ADCCONFIGTYPE
- `caption`: `Adc_ConfigType data fields`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-STRUCT-ADCCONFIGTYPE`
- `physical_pages`: [28, 29]
- `primary_page`: `28`
- `printed_pages`: ["28", "29"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `bbox`: `null`
- `key_fields`: ["Data Fields", "Description"]
- `summary`: Configuration root structure fields such as pAdc, pGroups, pChannels and GroupIndex.
- `anchor`: `Adc_ConfigType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["data_fields_table_like"]

### TBL-0029-0030-STRUCT-ADCGROUPCONFIGURATIONTYPE
- `caption`: `Adc_GroupConfigurationType data fields`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0029-0030-STRUCT-ADCGROUPCONFIGURATIONTYPE`
- `physical_pages`: [29, 30]
- `primary_page`: `29`
- `printed_pages`: ["29", "30"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `bbox`: `null`
- `key_fields`: ["Data Fields", "Description"]
- `summary`: ADC group configuration fields such as trigger source/edge, DMA channel, notification, buffer mode, samples and assignment.
- `anchor`: `Adc_GroupConfigurationType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["data_fields_table_like"]

### TBL-0029-STRUCT-ADCHWUNITCONFIGURATIONTYPE
- `caption`: `Adc_HwUnitConfigurationType data fields`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0029-STRUCT-ADCHWUNITCONFIGURATIONTYPE`
- `physical_pages`: [29]
- `primary_page`: `29`
- `printed_pages`: ["29"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `bbox`: `null`
- `key_fields`: ["Data Fields", "Description"]
- `summary`: ADC hardware unit configuration fields such as AdcHardwareUnitId, CFG registers, prescale and resolution.
- `anchor`: `Adc_HwUnitConfigurationType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["data_fields_table_like"]

### TBL-0030-0031-STRUCT-ADCCHANNELCONFIGURATIONTYPE
- `caption`: `Adc_ChannelConfigurationType data fields`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0030-0031-STRUCT-ADCCHANNELCONFIGURATIONTYPE`
- `physical_pages`: [30, 31]
- `primary_page`: `30`
- `printed_pages`: ["30", "31"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `bbox`: `null`
- `key_fields`: ["Data Fields", "Description"]
- `summary`: ADC channel settings such as sample time, limit check, range and high/low limits.
- `anchor`: `Adc_ChannelConfigurationType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["data_fields_table_like"]

### TBL-0031-0032-STRUCT-ADCGROUPSTATUSTYPE
- `caption`: `Adc_GroupStatusType data fields`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0031-0032-STRUCT-ADCGROUPSTATUSTYPE`
- `physical_pages`: [31, 32]
- `primary_page`: `31`
- `printed_pages`: ["31", "32"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `bbox`: `null`
- `key_fields`: ["Data Fields", "Description"]
- `summary`: Group status fields such as CurrentChannel.
- `anchor`: `Adc_GroupStatusType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["data_fields_table_like"]

### TBL-0031-STRUCT-ADCUNITSTATUSTYPE
- `caption`: `Adc_UnitStatusType data fields`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0031-STRUCT-ADCUNITSTATUSTYPE`
- `physical_pages`: [31]
- `primary_page`: `31`
- `printed_pages`: ["31"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures`
- `bbox`: `null`
- `key_fields`: ["Data Fields", "Description"]
- `summary`: Unit status fields and software/hardware normal queues.
- `anchor`: `Adc_UnitStatusType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["data_fields_table_like"]

### TBL-0032-API-ADC-DEINIT
- `caption`: `Function description panel: Adc_DeInit`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0032-API-ADC-DEINIT`
- `physical_pages`: [32]
- `primary_page`: `32`
- `printed_pages`: ["32"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_DeInit`.
- `anchor`: `void Adc_DeInit(void)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0032-API-ADC-INIT
- `caption`: `Function description panel: Adc_Init`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0032-API-ADC-INIT`
- `physical_pages`: [32]
- `primary_page`: `32`
- `printed_pages`: ["32"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_Init`.
- `anchor`: `void Adc_Init(const Adc_ConfigType *ConfigPtr)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0032-API-ADC-SETUPRESULTBUFFER
- `caption`: `Function description panel: Adc_SetupResultBuffer`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0032-API-ADC-SETUPRESULTBUFFER`
- `physical_pages`: [32]
- `primary_page`: `32`
- `printed_pages`: ["32"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_SetupResultBuffer`.
- `anchor`: `Std_ReturnType Adc_SetupResultBuffer(Adc_GroupType Group,Adc_ValueGroupType *DataBufferPtr)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0032-API-ADC-STARTGROUPCONVERSION
- `caption`: `Function description panel: Adc_StartGroupConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0032-API-ADC-STARTGROUPCONVERSION`
- `physical_pages`: [32]
- `primary_page`: `32`
- `printed_pages`: ["32"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_StartGroupConversion`.
- `anchor`: `void Adc_StartGroupConversion( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0033-API-ADC-DISABLEHARDWARETRIGGER
- `caption`: `Function description panel: Adc_DisableHardwareTrigger`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0033-API-ADC-DISABLEHARDWARETRIGGER`
- `physical_pages`: [33]
- `primary_page`: `33`
- `printed_pages`: ["33"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_DisableHardwareTrigger`.
- `anchor`: `void Adc_DisableHardwareTrigger ( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0033-API-ADC-ENABLEHARDWARETRIGGER
- `caption`: `Function description panel: Adc_EnableHardwareTrigger`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0033-API-ADC-ENABLEHARDWARETRIGGER`
- `physical_pages`: [33]
- `primary_page`: `33`
- `printed_pages`: ["33"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_EnableHardwareTrigger`.
- `anchor`: `void Adc_EnableHardwareTrigger ( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0033-API-ADC-READGROUP
- `caption`: `Function description panel: Adc_ReadGroup`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0033-API-ADC-READGROUP`
- `physical_pages`: [33]
- `primary_page`: `33`
- `printed_pages`: ["33"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_ReadGroup`.
- `anchor`: `Std_ReturnType Adc_ReadGroup(Adc_GroupType Group,Adc_ValueGroupType *DataBufferPtr)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0033-API-ADC-STOPGROUPCONVERSION
- `caption`: `Function description panel: Adc_StopGroupConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0033-API-ADC-STOPGROUPCONVERSION`
- `physical_pages`: [33]
- `primary_page`: `33`
- `printed_pages`: ["33"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_StopGroupConversion`.
- `anchor`: `void Adc_StopGroupConversion ( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0034-API-ADC-DISABLEGROUPNOTIFICATION
- `caption`: `Function description panel: Adc_DisableGroupNotification`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0034-API-ADC-DISABLEGROUPNOTIFICATION`
- `physical_pages`: [34]
- `primary_page`: `34`
- `printed_pages`: ["34"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_DisableGroupNotification`.
- `anchor`: `void Adc_DisableGroupNotification ( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0034-API-ADC-ENABLEGROUPNOTIFICATION
- `caption`: `Function description panel: Adc_EnableGroupNotification`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0034-API-ADC-ENABLEGROUPNOTIFICATION`
- `physical_pages`: [34]
- `primary_page`: `34`
- `printed_pages`: ["34"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_EnableGroupNotification`.
- `anchor`: `void Adc_EnableGroupNotification ( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0034-API-ADC-GETGROUPSTATUS
- `caption`: `Function description panel: Adc_GetGroupStatus`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0034-API-ADC-GETGROUPSTATUS`
- `physical_pages`: [34]
- `primary_page`: `34`
- `printed_pages`: ["34"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_GetGroupStatus`.
- `anchor`: `Adc_StatusType Adc_GetGroupStatus ( Adc_GroupType Group )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0034-API-ADC-GETVERSIONINFO
- `caption`: `Function description panel: Adc_GetVersionInfo`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0034-API-ADC-GETVERSIONINFO`
- `physical_pages`: [34]
- `primary_page`: `34`
- `printed_pages`: ["34"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_GetVersionInfo`.
- `anchor`: `void Adc_GetVersionInfo ( Std_VersionInfoType * versioninfo )`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0035-API-ADC-HL-DEINIT
- `caption`: `Function description panel: Adc_HL_DeInit`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0035-API-ADC-HL-DEINIT`
- `physical_pages`: [35]
- `primary_page`: `35`
- `printed_pages`: ["35"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_HL_DeInit`.
- `anchor`: `void Adc_HL_DeInit (const uint8 CoreId)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0035-API-ADC-HL-INIT
- `caption`: `Function description panel: Adc_HL_Init`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0035-API-ADC-HL-INIT`
- `physical_pages`: [35]
- `primary_page`: `35`
- `printed_pages`: ["35"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_HL_Init`.
- `anchor`: `void Adc_HL_Init (const Adc_ConfigType * pCfgPtr)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0035-API-ADC-HL-STARTCONVERSION
- `caption`: `Function description panel: Adc_HL_StartConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0035-API-ADC-HL-STARTCONVERSION`
- `physical_pages`: [35]
- `primary_page`: `35`
- `printed_pages`: ["35"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_HL_StartConversion`.
- `anchor`: `void Adc_HL_StartConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0035-API-ADC-HL-STOPCONVERSION
- `caption`: `Function description panel: Adc_HL_StopConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0035-API-ADC-HL-STOPCONVERSION`
- `physical_pages`: [35]
- `primary_page`: `35`
- `printed_pages`: ["35"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_HL_StopConversion`.
- `anchor`: `void Adc_HL_StopConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0036-API-ADC-HL-UPDATEGROUPSTATUSWITHOUTINTERRUPT
- `caption`: `Function description panel: Adc_HL_UpdateGroupStatusWithoutInterrupt`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0036-API-ADC-HL-UPDATEGROUPSTATUSWITHOUTINTERRUPT`
- `physical_pages`: [36]
- `primary_page`: `36`
- `printed_pages`: ["36"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_HL_UpdateGroupStatusWithoutInterrupt`.
- `anchor`: `void Adc_HL_UpdateGroupStatusWithoutInterrupt (const Adc_GroupType Group, const uint8 CoreId)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0037-API-ADC-LL-INITUNITHARDWARE
- `caption`: `Function description panel: Adc_LL_InitUnitHardware`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0037-API-ADC-LL-INITUNITHARDWARE`
- `physical_pages`: [37]
- `primary_page`: `37`
- `printed_pages`: ["37"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_LL_InitUnitHardware`.
- `anchor`: `void Adc_LL_InitUnitHardware (const Adc_HwUnitType Unit, const Adc_HwUnitConfigurationType * pConfigPtr)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0039-API-ADC-LL-STARTNORMALCONVERSION
- `caption`: `Function description panel: Adc_LL_StartNormalConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0039-API-ADC-LL-STARTNORMALCONVERSION`
- `physical_pages`: [39]
- `primary_page`: `39`
- `printed_pages`: ["39"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_LL_StartNormalConversion`.
- `anchor`: `void Adc_LL_StartNormalConversion (const Adc_HwUnitType Unit, const uint8 CoreId)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0039-API-ADC-LL-STOPCURRENTCONVERSION
- `caption`: `Function description panel: Adc_LL_StopCurrentConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0039-API-ADC-LL-STOPCURRENTCONVERSION`
- `physical_pages`: [39]
- `primary_page`: `39`
- `printed_pages`: ["39"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_LL_StopCurrentConversion`.
- `anchor`: `void Adc_LL_StopCurrentConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0039-API-ADC-LL-WAITCONVERSIONSTOPPED
- `caption`: `Function description panel: Adc_LL_WaitConversionStopped`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0039-API-ADC-LL-WAITCONVERSIONSTOPPED`
- `physical_pages`: [39]
- `primary_page`: `39`
- `printed_pages`: ["39"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_LL_WaitConversionStopped`.
- `anchor`: `Std_ReturnType Adc_LL_WaitConversionStopped (const Adc_HwUnitType Unit)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0041-API-ADC-LL-RECONFIGUREDMA
- `caption`: `Function description panel: Adc_LL_ReConfigureDma`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0041-API-ADC-LL-RECONFIGUREDMA`
- `physical_pages`: [41]
- `primary_page`: `41`
- `printed_pages`: ["41"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_LL_ReConfigureDma`.
- `anchor`: `void Adc_LL_ReConfigureDma (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0041-API-ADC-PTIMER-DEINITUNITHARDWARE
- `caption`: `Function description panel: Adc_Ptimer_DeInitUnitHardware`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0041-API-ADC-PTIMER-DEINITUNITHARDWARE`
- `physical_pages`: [41]
- `primary_page`: `41`
- `printed_pages`: ["41"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_Ptimer_DeInitUnitHardware`.
- `anchor`: `void Adc_Ptimer_DeInitUnitHardware (Adc_HwUnitType Unit)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0041-API-ADC-PTIMER-INITUNITHARDWARE
- `caption`: `Function description panel: Adc_Ptimer_InitUnitHardware`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0041-API-ADC-PTIMER-INITUNITHARDWARE`
- `physical_pages`: [41]
- `primary_page`: `41`
- `printed_pages`: ["41"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_Ptimer_InitUnitHardware`.
- `anchor`: `void Adc_Ptimer_InitUnitHardware (Adc_HwUnitType Unit, uint32 u32PtimerClockConfig)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0042-API-ADC-PTIMER-SETPTIMERMODE
- `caption`: `Function description panel: Adc_Ptimer_SetPtimerMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0042-API-ADC-PTIMER-SETPTIMERMODE`
- `physical_pages`: [42]
- `primary_page`: `42`
- `printed_pages`: ["42"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_Ptimer_SetPtimerMode`.
- `anchor`: `void Adc_Ptimer_SetPtimerMode (Adc_HwUnitType Unit, boolean bContinuous)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0042-API-ADC-PTIMER-STARTSOFTWARECONVERSION
- `caption`: `Function description panel: Adc_Ptimer_StartSoftwareConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0042-API-ADC-PTIMER-STARTSOFTWARECONVERSION`
- `physical_pages`: [42]
- `primary_page`: `42`
- `printed_pages`: ["42"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_Ptimer_StartSoftwareConversion`.
- `anchor`: `void Adc_Ptimer_StartSoftwareConversion (Adc_HwUnitType Unit)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0042-API-ADC-PTIMER-STOPCONVERSION
- `caption`: `Function description panel: Adc_Ptimer_StopConversion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0042-API-ADC-PTIMER-STOPCONVERSION`
- `physical_pages`: [42]
- `primary_page`: `42`
- `printed_pages`: ["42"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram`
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function description block for `Adc_Ptimer_StopConversion`.
- `anchor`: `void Adc_Ptimer_StopConversion (Adc_HwUnitType Unit)`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["api_description_table_like"]

### TBL-0055-CFGPROP-3-2-1-IMPLEMENTATION-CONFIG-VARIANT
- `caption`: `Tresos configuration property panel: 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0055-CFGPROP-3-2-1-IMPLEMENTATION-CONFIG-VARIANT`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `IMPLEMENTATION_CONFIG_VARIANT`.
- `anchor`: `3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0055-CFGPROP-3-2-2-1-1-ADCHWUNITID
- `caption`: `Tresos configuration property panel: 3.2.2.1.1 AdcHwUnitId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0055-CFGPROP-3-2-2-1-1-ADCHWUNITID`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHwUnitId`.
- `anchor`: `3.2.2.1.1 AdcHwUnitId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0055-CFGPROP-3-2-2-1-ADCHWUNIT
- `caption`: `Tresos configuration property panel: 3.2.2.1 AdcHwUnit`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0055-CFGPROP-3-2-2-1-ADCHWUNIT`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHwUnit`.
- `anchor`: `3.2.2.1 AdcHwUnit`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0055-CFGPROP-3-2-2-ADCCONFIGSET
- `caption`: `Tresos configuration property panel: 3.2.2 AdcConfigSet`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0055-CFGPROP-3-2-2-ADCCONFIGSET`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcConfigSet`.
- `anchor`: `3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0055-CFGPROP-3-2-CONTAINERS-AND-VARIABLES
- `caption`: `Tresos configuration property panel: 3.2 Containers and Variables`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0055-CFGPROP-3-2-CONTAINERS-AND-VARIABLES`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `Containers and Variables`.
- `anchor`: `3.2 Containers and Variables`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0056-CFGPROP-3-2-2-1-2-ADCLOGICALUNITID
- `caption`: `Tresos configuration property panel: 3.2.2.1.2 AdcLogicalUnitId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0056-CFGPROP-3-2-2-1-2-ADCLOGICALUNITID`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcLogicalUnitId`.
- `anchor`: `3.2.2.1.2 AdcLogicalUnitId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0056-CFGPROP-3-2-2-1-3-ADCCLOCKSOURCE
- `caption`: `Tresos configuration property panel: 3.2.2.1.3 AdcClockSource`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0056-CFGPROP-3-2-2-1-3-ADCCLOCKSOURCE`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcClockSource`.
- `anchor`: `3.2.2.1.3 AdcClockSource`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0056-CFGPROP-3-2-2-1-4-ADCCLOCKREF
- `caption`: `Tresos configuration property panel: 3.2.2.1.4 AdcClockRef`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0056-CFGPROP-3-2-2-1-4-ADCCLOCKREF`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcClockRef`.
- `anchor`: `3.2.2.1.4 AdcClockRef`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0056-CFGPROP-3-2-2-1-5-ADCVOLTAGEREFERENCESELECTION
- `caption`: `Tresos configuration property panel: 3.2.2.1.5 AdcVoltageReferenceSelection`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0056-CFGPROP-3-2-2-1-5-ADCVOLTAGEREFERENCESELECTION`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcVoltageReferenceSelection`.
- `anchor`: `3.2.2.1.5 AdcVoltageReferenceSelection`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0056-CFGPROP-3-2-2-1-6-ADCPRESCALE
- `caption`: `Tresos configuration property panel: 3.2.2.1.6 AdcPrescale`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0056-CFGPROP-3-2-2-1-6-ADCPRESCALE`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPrescale`.
- `anchor`: `3.2.2.1.6 AdcPrescale`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0057-CFGPROP-3-2-2-1-10-ADCSTARTUPCOUNTER
- `caption`: `Tresos configuration property panel: 3.2.2.1.10 AdcStartupCounter`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0057-CFGPROP-3-2-2-1-10-ADCSTARTUPCOUNTER`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcStartupCounter`.
- `anchor`: `3.2.2.1.10 AdcStartupCounter`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0057-CFGPROP-3-2-2-1-8-ADCALIGN
- `caption`: `Tresos configuration property panel: 3.2.2.1.8 AdcAlign`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0057-CFGPROP-3-2-2-1-8-ADCALIGN`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcAlign`.
- `anchor`: `3.2.2.1.8 AdcAlign`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0057-CFGPROP-3-2-2-1-9-ADCRESOLUTION
- `caption`: `Tresos configuration property panel: 3.2.2.1.9 AdcResolution`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0057-CFGPROP-3-2-2-1-9-ADCRESOLUTION`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcResolution`.
- `anchor`: `3.2.2.1.9 AdcResolution`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0058-CFGPROP-3-2-2-1-11-ADCPRETRIGGERSELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.11 AdcPreTriggerSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0058-CFGPROP-3-2-2-1-11-ADCPRETRIGGERSELECT`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPreTriggerSelect`.
- `anchor`: `3.2.2.1.11 AdcPreTriggerSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0058-CFGPROP-3-2-2-1-12-ADCTRIGGERSELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.12 AdcTriggerSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0058-CFGPROP-3-2-2-1-12-ADCTRIGGERSELECT`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcTriggerSelect`.
- `anchor`: `3.2.2.1.12 AdcTriggerSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0058-CFGPROP-3-2-2-1-13-1-ADCSAMPLETIMEOPTION0
- `caption`: `Tresos configuration property panel: 3.2.2.1.13.1 AdcSampleTimeOption0`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0058-CFGPROP-3-2-2-1-13-1-ADCSAMPLETIMEOPTION0`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcSampleTimeOption0`.
- `anchor`: `3.2.2.1.13.1 AdcSampleTimeOption0`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0058-CFGPROP-3-2-2-1-13-ADCSAMPLETIMEOPTIONS
- `caption`: `Tresos configuration property panel: 3.2.2.1.13 AdcSampleTimeOptions`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0058-CFGPROP-3-2-2-1-13-ADCSAMPLETIMEOPTIONS`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcSampleTimeOptions`.
- `anchor`: `3.2.2.1.13 AdcSampleTimeOptions`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0059-CFGPROP-3-2-2-1-13-2-ADCSAMPLETIMEOPTION1
- `caption`: `Tresos configuration property panel: 3.2.2.1.13.2 AdcSampleTimeOption1`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0059-CFGPROP-3-2-2-1-13-2-ADCSAMPLETIMEOPTION1`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcSampleTimeOption1`.
- `anchor`: `3.2.2.1.13.2 AdcSampleTimeOption1`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0059-CFGPROP-3-2-2-1-13-3-ADCSAMPLETIMEOPTION2
- `caption`: `Tresos configuration property panel: 3.2.2.1.13.3 AdcSampleTimeOption2`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0059-CFGPROP-3-2-2-1-13-3-ADCSAMPLETIMEOPTION2`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcSampleTimeOption2`.
- `anchor`: `3.2.2.1.13.3 AdcSampleTimeOption2`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0059-CFGPROP-3-2-2-1-13-4-ADCSAMPLETIMEOPTION3
- `caption`: `Tresos configuration property panel: 3.2.2.1.13.4 AdcSampleTimeOption3`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0059-CFGPROP-3-2-2-1-13-4-ADCSAMPLETIMEOPTION3`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcSampleTimeOption3`.
- `anchor`: `3.2.2.1.13.4 AdcSampleTimeOption3`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0059-CFGPROP-3-2-2-1-14-ADCPTIMERSETTINGS
- `caption`: `Tresos configuration property panel: 3.2.2.1.14 AdcPtimerSettings`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0059-CFGPROP-3-2-2-1-14-ADCPTIMERSETTINGS`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPtimerSettings`.
- `anchor`: `3.2.2.1.14 AdcPtimerSettings`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0060-CFGPROP-3-2-2-1-14-1-ADCPTIMERPRESCALERDIVIDERSELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.14.1 AdcPtimerPrescalerDividerSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0060-CFGPROP-3-2-2-1-14-1-ADCPTIMERPRESCALERDIVIDERSELECT`
- `physical_pages`: [60]
- `primary_page`: `60`
- `printed_pages`: ["60"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPtimerPrescalerDividerSelect`.
- `anchor`: `3.2.2.1.14.1 AdcPtimerPrescalerDividerSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0060-CFGPROP-3-2-2-1-14-2-ADCPTIMERMULTIPLICATIONFACTORSELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.14.2 AdcPtimerMultiplicationFactorSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0060-CFGPROP-3-2-2-1-14-2-ADCPTIMERMULTIPLICATIONFACTORSELECT`
- `physical_pages`: [60]
- `primary_page`: `60`
- `printed_pages`: ["60"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPtimerMultiplicationFactorSelect`.
- `anchor`: `3.2.2.1.14.2 AdcPtimerMultiplicationFactorSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0061-CFGPROP-3-2-2-1-14-3-ADCPTIMERCHANNELSEQUENCEERRORENABLE
- `caption`: `Tresos configuration property panel: 3.2.2.1.14.3 AdcPtimerChannelSequenceErrorEnable`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0061-CFGPROP-3-2-2-1-14-3-ADCPTIMERCHANNELSEQUENCEERRORENABLE`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPtimerChannelSequenceErrorEnable`.
- `anchor`: `3.2.2.1.14.3 AdcPtimerChannelSequenceErrorEnable`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0061-CFGPROP-3-2-2-1-14-4-ADCPTIMERERRORNOTIFICATION
- `caption`: `Tresos configuration property panel: 3.2.2.1.14.4 AdcPtimerErrorNotification`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0061-CFGPROP-3-2-2-1-14-4-ADCPTIMERERRORNOTIFICATION`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPtimerErrorNotification`.
- `anchor`: `3.2.2.1.14.4 AdcPtimerErrorNotification`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0061-CFGPROP-3-2-2-1-15-1-ADCHARDWAREAVERAGEENABLE
- `caption`: `Tresos configuration property panel: 3.2.2.1.15.1 AdcHardwareAverageEnable`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0061-CFGPROP-3-2-2-1-15-1-ADCHARDWAREAVERAGEENABLE`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHardwareAverageEnable`.
- `anchor`: `3.2.2.1.15.1 AdcHardwareAverageEnable`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0061-CFGPROP-3-2-2-1-15-2-ADCHARDWAREAVERAGESELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.15.2 AdcHardwareAverageSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0061-CFGPROP-3-2-2-1-15-2-ADCHARDWAREAVERAGESELECT`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHardwareAverageSelect`.
- `anchor`: `3.2.2.1.15.2 AdcHardwareAverageSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0061-CFGPROP-3-2-2-1-15-ADCHARDWAREAVERAGESETTINGS
- `caption`: `Tresos configuration property panel: 3.2.2.1.15 AdcHardwareAverageSettings`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0061-CFGPROP-3-2-2-1-15-ADCHARDWAREAVERAGESETTINGS`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHardwareAverageSettings`.
- `anchor`: `3.2.2.1.15 AdcHardwareAverageSettings`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0062-CFGPROP-3-2-2-1-16-1-ADCLOGICALCHANNELID
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.1 AdcLogicalChannelId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0062-CFGPROP-3-2-2-1-16-1-ADCLOGICALCHANNELID`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcLogicalChannelId`.
- `anchor`: `3.2.2.1.16.1 AdcLogicalChannelId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0062-CFGPROP-3-2-2-1-16-2-ADCCHANNELNAME
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.2 AdcChannelName`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0062-CFGPROP-3-2-2-1-16-2-ADCCHANNELNAME`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelName`.
- `anchor`: `3.2.2.1.16.2 AdcChannelName`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0062-CFGPROP-3-2-2-1-16-3-ADCCHANNELID
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.3 AdcChannelId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0062-CFGPROP-3-2-2-1-16-3-ADCCHANNELID`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelId`.
- `anchor`: `3.2.2.1.16.3 AdcChannelId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0062-CFGPROP-3-2-2-1-16-ADCCHANNEL
- `caption`: `Tresos configuration property panel: 3.2.2.1.16 AdcChannel`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0062-CFGPROP-3-2-2-1-16-ADCCHANNEL`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannel`.
- `anchor`: `3.2.2.1.16 AdcChannel`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0063-CFGPROP-3-2-2-1-16-4-ADCCHANNELLIMITCHECK
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.4 AdcChannelLimitCheck`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0063-CFGPROP-3-2-2-1-16-4-ADCCHANNELLIMITCHECK`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelLimitCheck`.
- `anchor`: `3.2.2.1.16.4 AdcChannelLimitCheck`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0063-CFGPROP-3-2-2-1-16-5-ADCCHANNELRANGESELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.5 AdcChannelRangeSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0063-CFGPROP-3-2-2-1-16-5-ADCCHANNELRANGESELECT`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelRangeSelect`.
- `anchor`: `3.2.2.1.16.5 AdcChannelRangeSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0063-CFGPROP-3-2-2-1-16-6-ADCCHANNELHIGHLIMIT
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.6 AdcChannelHighLimit`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0063-CFGPROP-3-2-2-1-16-6-ADCCHANNELHIGHLIMIT`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelHighLimit`.
- `anchor`: `3.2.2.1.16.6 AdcChannelHighLimit`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0063-CFGPROP-3-2-2-1-16-7-ADCCHANNELLOWLIMIT
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.7 AdcChannelLowLimit`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0063-CFGPROP-3-2-2-1-16-7-ADCCHANNELLOWLIMIT`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelLowLimit`.
- `anchor`: `3.2.2.1.16.7 AdcChannelLowLimit`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0064-CFGPROP-3-2-2-1-16-10-ADCCHANNELREFVOLTSRCLOW
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.10 AdcChannelRefVoltsrcLow`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0064-CFGPROP-3-2-2-1-16-10-ADCCHANNELREFVOLTSRCLOW`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelRefVoltsrcLow`.
- `anchor`: `3.2.2.1.16.10 AdcChannelRefVoltsrcLow`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0064-CFGPROP-3-2-2-1-16-11-ADCCHANNELRESOLUTION
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.11 AdcChannelResolution`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0064-CFGPROP-3-2-2-1-16-11-ADCCHANNELRESOLUTION`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelResolution`.
- `anchor`: `3.2.2.1.16.11 AdcChannelResolution`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0064-CFGPROP-3-2-2-1-16-8-ADCCHANNELCONVTIME
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.8 AdcChannelConvTime`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0064-CFGPROP-3-2-2-1-16-8-ADCCHANNELCONVTIME`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelConvTime`.
- `anchor`: `3.2.2.1.16.8 AdcChannelConvTime`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0064-CFGPROP-3-2-2-1-16-9-ADCCHANNELREFVOLTSRCHIGH
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.9 AdcChannelRefVoltsrcHigh`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0064-CFGPROP-3-2-2-1-16-9-ADCCHANNELREFVOLTSRCHIGH`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelRefVoltsrcHigh`.
- `anchor`: `3.2.2.1.16.9 AdcChannelRefVoltsrcHigh`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0065-CFGPROP-3-2-2-1-16-12-ADCCHANNELSAMPTIMEOPTION
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.12 AdcChannelSampTimeOption`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0065-CFGPROP-3-2-2-1-16-12-ADCCHANNELSAMPTIMEOPTION`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelSampTimeOption`.
- `anchor`: `3.2.2.1.16.12 AdcChannelSampTimeOption`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0065-CFGPROP-3-2-2-1-16-13-ADCCHANNELSAMPTIME
- `caption`: `Tresos configuration property panel: 3.2.2.1.16.13 AdcChannelSampTime`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0065-CFGPROP-3-2-2-1-16-13-ADCCHANNELSAMPTIME`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelSampTime`.
- `anchor`: `3.2.2.1.16.13 AdcChannelSampTime`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0065-CFGPROP-3-2-2-1-17-1-ADCGROUPACCESSMODE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.1 AdcGroupAccessMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0065-CFGPROP-3-2-2-1-17-1-ADCGROUPACCESSMODE`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupAccessMode`.
- `anchor`: `3.2.2.1.17.1 AdcGroupAccessMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0065-CFGPROP-3-2-2-1-17-ADCGROUP
- `caption`: `Tresos configuration property panel: 3.2.2.1.17 AdcGroup`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0065-CFGPROP-3-2-2-1-17-ADCGROUP`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroup`.
- `anchor`: `3.2.2.1.17 AdcGroup`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0066-CFGPROP-3-2-2-1-17-2-ADCGROUPCONVERSIONMODE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.2 AdcGroupConversionMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0066-CFGPROP-3-2-2-1-17-2-ADCGROUPCONVERSIONMODE`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupConversionMode`.
- `anchor`: `3.2.2.1.17.2 AdcGroupConversionMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0066-CFGPROP-3-2-2-1-17-3-ADCGROUPID
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.3 AdcGroupId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0066-CFGPROP-3-2-2-1-17-3-ADCGROUPID`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupId`.
- `anchor`: `3.2.2.1.17.3 AdcGroupId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0066-CFGPROP-3-2-2-1-17-4-ADCGROUPPRIORITY
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.4 AdcGroupPriority`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0066-CFGPROP-3-2-2-1-17-4-ADCGROUPPRIORITY`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupPriority`.
- `anchor`: `3.2.2.1.17.4 AdcGroupPriority`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0066-CFGPROP-3-2-2-1-17-5-ADCGROUPREPLACEMENT
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.5 AdcGroupReplacement`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0066-CFGPROP-3-2-2-1-17-5-ADCGROUPREPLACEMENT`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupReplacement`.
- `anchor`: `3.2.2.1.17.5 AdcGroupReplacement`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0067-CFGPROP-3-2-2-1-17-6-ADCGROUPTRIGGSRC
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.6 AdcGroupTriggSrc`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0067-CFGPROP-3-2-2-1-17-6-ADCGROUPTRIGGSRC`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupTriggSrc`.
- `anchor`: `3.2.2.1.17.6 AdcGroupTriggSrc`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0067-CFGPROP-3-2-2-1-17-7-ADCHWTRIGSIGNAL
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.7 AdcHwTrigSignal`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0067-CFGPROP-3-2-2-1-17-7-ADCHWTRIGSIGNAL`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHwTrigSignal`.
- `anchor`: `3.2.2.1.17.7 AdcHwTrigSignal`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0067-CFGPROP-3-2-2-1-17-8-ADCHWTRIGTIMER
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.8 AdcHwTrigTimer`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0067-CFGPROP-3-2-2-1-17-8-ADCHWTRIGTIMER`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHwTrigTimer`.
- `anchor`: `3.2.2.1.17.8 AdcHwTrigTimer`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0068-CFGPROP-3-2-2-1-17-10-ADCNOTIFICATION
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.10 AdcNotification`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0068-CFGPROP-3-2-2-1-17-10-ADCNOTIFICATION`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcNotification`.
- `anchor`: `3.2.2.1.17.10 AdcNotification`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0068-CFGPROP-3-2-2-1-17-11-ADCSTREAMINGBUFFERMODE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.11 AdcStreamingBufferMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0068-CFGPROP-3-2-2-1-17-11-ADCSTREAMINGBUFFERMODE`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcStreamingBufferMode`.
- `anchor`: `3.2.2.1.17.11 AdcStreamingBufferMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0068-CFGPROP-3-2-2-1-17-12-ADCSTREAMINGNUMSAMPLES
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.12 AdcStreamingNumSamples`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0068-CFGPROP-3-2-2-1-17-12-ADCSTREAMINGNUMSAMPLES`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcStreamingNumSamples`.
- `anchor`: `3.2.2.1.17.12 AdcStreamingNumSamples`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0068-CFGPROP-3-2-2-1-17-13-ADCGROUPINBACKTOBACKMODE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.13 AdcGroupInBacktoBackMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0068-CFGPROP-3-2-2-1-17-13-ADCGROUPINBACKTOBACKMODE`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupInBacktoBackMode`.
- `anchor`: `3.2.2.1.17.13 AdcGroupInBacktoBackMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0068-CFGPROP-3-2-2-1-17-9-ADCTRANSFERTYPE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.9 AdcTransferType`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0068-CFGPROP-3-2-2-1-17-9-ADCTRANSFERTYPE`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcTransferType`.
- `anchor`: `3.2.2.1.17.9 AdcTransferType`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0069-CFGPROP-3-2-2-1-17-14-ADCGROUPUSESCHANNELDELAYS
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.14 AdcGroupUsesChannelDelays`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0069-CFGPROP-3-2-2-1-17-14-ADCGROUPUSESCHANNELDELAYS`
- `physical_pages`: [69]
- `primary_page`: `69`
- `printed_pages`: ["69"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupUsesChannelDelays`.
- `anchor`: `3.2.2.1.17.14 AdcGroupUsesChannelDelays`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0070-CFGPROP-3-2-2-1-17-15-ADCDELAYNEXTPTIMER
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.15 AdcDelayNextPtimer`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0070-CFGPROP-3-2-2-1-17-15-ADCDELAYNEXTPTIMER`
- `physical_pages`: [70]
- `primary_page`: `70`
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcDelayNextPtimer`.
- `anchor`: `3.2.2.1.17.15 AdcDelayNextPtimer`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0070-CFGPROP-3-2-2-1-17-16-ADCPTIMERPERIODCONTINUOUSMODE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.16 AdcPtimerPeriodContinuousMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0070-CFGPROP-3-2-2-1-17-16-ADCPTIMERPERIODCONTINUOUSMODE`
- `physical_pages`: [70]
- `primary_page`: `70`
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPtimerPeriodContinuousMode`.
- `anchor`: `3.2.2.1.17.16 AdcPtimerPeriodContinuousMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0070-CFGPROP-3-2-2-1-17-17-ADCGROUPDEFINITION
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.17 AdcGroupDefinition`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0070-CFGPROP-3-2-2-1-17-17-ADCGROUPDEFINITION`
- `physical_pages`: [70]
- `primary_page`: `70`
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupDefinition`.
- `anchor`: `3.2.2.1.17.17 AdcGroupDefinition`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0071-CFGPROP-3-2-2-1-17-18-ADCGROUPECUCPARTITIONREF
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.18 AdcGroupEcucPartitionRef`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0071-CFGPROP-3-2-2-1-17-18-ADCGROUPECUCPARTITIONREF`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupEcucPartitionRef`.
- `anchor`: `3.2.2.1.17.18 AdcGroupEcucPartitionRef`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0071-CFGPROP-3-2-2-1-17-19-ADCCHANNELDELAY
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.19 AdcChannelDelay`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0071-CFGPROP-3-2-2-1-17-19-ADCCHANNELDELAY`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelDelay`.
- `anchor`: `3.2.2.1.17.19 AdcChannelDelay`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0071-CFGPROP-3-2-2-1-17-20-ADCGROUPHARDWAREAVERAGESETTINGS
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.20 AdcGroupHardwareAverageSettings`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0071-CFGPROP-3-2-2-1-17-20-ADCGROUPHARDWAREAVERAGESETTINGS`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupHardwareAverageSettings`.
- `anchor`: `3.2.2.1.17.20 AdcGroupHardwareAverageSettings`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0072-CFGPROP-3-2-2-1-17-20-1-ADCGROUPHARDWAREAVERAGEENABLE
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.20.1 AdcGroupHardwareAverageEnable`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0072-CFGPROP-3-2-2-1-17-20-1-ADCGROUPHARDWAREAVERAGEENABLE`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupHardwareAverageEnable`.
- `anchor`: `3.2.2.1.17.20.1 AdcGroupHardwareAverageEnable`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0072-CFGPROP-3-2-2-1-17-20-2-ADCGROUPHARDWAREAVERAGESELECT
- `caption`: `Tresos configuration property panel: 3.2.2.1.17.20.2 AdcGroupHardwareAverageSelect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0072-CFGPROP-3-2-2-1-17-20-2-ADCGROUPHARDWAREAVERAGESELECT`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupHardwareAverageSelect`.
- `anchor`: `3.2.2.1.17.20.2 AdcGroupHardwareAverageSelect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0072-CFGPROP-3-2-2-1-18-ADCHWUNITECUCPARTITIONREF
- `caption`: `Tresos configuration property panel: 3.2.2.1.18 AdcHwUnitEcucPartitionRef`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0072-CFGPROP-3-2-2-1-18-ADCHWUNITECUCPARTITIONREF`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHwUnitEcucPartitionRef`.
- `anchor`: `3.2.2.1.18 AdcHwUnitEcucPartitionRef`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0072-CFGPROP-3-2-3-ADCGENERAL
- `caption`: `Tresos configuration property panel: 3.2.3 AdcGeneral`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0072-CFGPROP-3-2-3-ADCGENERAL`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGeneral`.
- `anchor`: `3.2.3 AdcGeneral`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0073-CFGPROP-3-2-3-1-ADCDEINITAPI
- `caption`: `Tresos configuration property panel: 3.2.3.1 AdcDeInitApi`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0073-CFGPROP-3-2-3-1-ADCDEINITAPI`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcDeInitApi`.
- `anchor`: `3.2.3.1 AdcDeInitApi`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0073-CFGPROP-3-2-3-2-ADCDEVERRORDETECT
- `caption`: `Tresos configuration property panel: 3.2.3.2 AdcDevErrorDetect`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0073-CFGPROP-3-2-3-2-ADCDEVERRORDETECT`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcDevErrorDetect`.
- `anchor`: `3.2.3.2 AdcDevErrorDetect`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0073-CFGPROP-3-2-3-3-ADCENABLELIMITCHECK
- `caption`: `Tresos configuration property panel: 3.2.3.3 AdcEnableLimitCheck`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0073-CFGPROP-3-2-3-3-ADCENABLELIMITCHECK`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcEnableLimitCheck`.
- `anchor`: `3.2.3.3 AdcEnableLimitCheck`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0073-CFGPROP-3-2-3-4-ADCENABLEQUEUING
- `caption`: `Tresos configuration property panel: 3.2.3.4 AdcEnableQueuing`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0073-CFGPROP-3-2-3-4-ADCENABLEQUEUING`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcEnableQueuing`.
- `anchor`: `3.2.3.4 AdcEnableQueuing`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0073-CFGPROP-3-2-3-5-ADCENABLESTARTSTOPGROUPAPI
- `caption`: `Tresos configuration property panel: 3.2.3.5 AdcEnableStartStopGroupApi`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0073-CFGPROP-3-2-3-5-ADCENABLESTARTSTOPGROUPAPI`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcEnableStartStopGroupApi`.
- `anchor`: `3.2.3.5 AdcEnableStartStopGroupApi`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0074-CFGPROP-3-2-3-6-ADCGRPNOTIFCAPABILITY
- `caption`: `Tresos configuration property panel: 3.2.3.6 AdcGrpNotifCapability`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0074-CFGPROP-3-2-3-6-ADCGRPNOTIFCAPABILITY`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGrpNotifCapability`.
- `anchor`: `3.2.3.6 AdcGrpNotifCapability`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0074-CFGPROP-3-2-3-7-ADCHWTRIGGERAPI
- `caption`: `Tresos configuration property panel: 3.2.3.7 AdcHwTriggerApi`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0074-CFGPROP-3-2-3-7-ADCHWTRIGGERAPI`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHwTriggerApi`.
- `anchor`: `3.2.3.7 AdcHwTriggerApi`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0074-CFGPROP-3-2-3-8-ADCREADGROUPAPI
- `caption`: `Tresos configuration property panel: 3.2.3.8 AdcReadGroupApi`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0074-CFGPROP-3-2-3-8-ADCREADGROUPAPI`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcReadGroupApi`.
- `anchor`: `3.2.3.8 AdcReadGroupApi`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0074-CFGPROP-3-2-3-9-ADCVERSIONINFOAPI
- `caption`: `Tresos configuration property panel: 3.2.3.9 AdcVersionInfoApi`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0074-CFGPROP-3-2-3-9-ADCVERSIONINFOAPI`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcVersionInfoApi`.
- `anchor`: `3.2.3.9 AdcVersionInfoApi`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0075-CFGPROP-3-2-3-10-ADCPRIORITYIMPLEMENTATION
- `caption`: `Tresos configuration property panel: 3.2.3.10 AdcPriorityImplementation`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0075-CFGPROP-3-2-3-10-ADCPRIORITYIMPLEMENTATION`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPriorityImplementation`.
- `anchor`: `3.2.3.10 AdcPriorityImplementation`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0075-CFGPROP-3-2-3-11-ADCRESULTALIGNMENT
- `caption`: `Tresos configuration property panel: 3.2.3.11 AdcResultAlignment`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0075-CFGPROP-3-2-3-11-ADCRESULTALIGNMENT`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcResultAlignment`.
- `anchor`: `3.2.3.11 AdcResultAlignment`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0075-CFGPROP-3-2-3-12-ADCTIMEOUT
- `caption`: `Tresos configuration property panel: 3.2.3.12 AdcTimeout`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0075-CFGPROP-3-2-3-12-ADCTIMEOUT`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcTimeout`.
- `anchor`: `3.2.3.12 AdcTimeout`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0076-CFGPROP-3-2-3-13-ADCDMATIMEOUT
- `caption`: `Tresos configuration property panel: 3.2.3.13 AdcDmaTimeout`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0076-CFGPROP-3-2-3-13-ADCDMATIMEOUT`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcDmaTimeout`.
- `anchor`: `3.2.3.13 AdcDmaTimeout`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0076-CFGPROP-3-2-3-14-ADCPRIORITYQUEUEMAXDEPTH
- `caption`: `Tresos configuration property panel: 3.2.3.14 AdcPriorityQueueMaxDepth`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0076-CFGPROP-3-2-3-14-ADCPRIORITYQUEUEMAXDEPTH`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPriorityQueueMaxDepth`.
- `anchor`: `3.2.3.14 AdcPriorityQueueMaxDepth`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0076-CFGPROP-3-2-3-15-ADCLOWPOWERSTATESSUPPORT
- `caption`: `Tresos configuration property panel: 3.2.3.15 AdcLowPowerStatesSupport`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0076-CFGPROP-3-2-3-15-ADCLOWPOWERSTATESSUPPORT`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcLowPowerStatesSupport`.
- `anchor`: `3.2.3.15 AdcLowPowerStatesSupport`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0076-CFGPROP-3-2-3-16-ADCPOWERSTATEASYNCHTRANSITIONMODE
- `caption`: `Tresos configuration property panel: 3.2.3.16 AdcPowerStateAsynchTransitionMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0076-CFGPROP-3-2-3-16-ADCPOWERSTATEASYNCHTRANSITIONMODE`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPowerStateAsynchTransitionMode`.
- `anchor`: `3.2.3.16 AdcPowerStateAsynchTransitionMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0077-CFGPROP-3-2-3-17-1-ADCPOWERSTATE
- `caption`: `Tresos configuration property panel: 3.2.3.17.1 AdcPowerState`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0077-CFGPROP-3-2-3-17-1-ADCPOWERSTATE`
- `physical_pages`: [77]
- `primary_page`: `77`
- `printed_pages`: ["77"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPowerState`.
- `anchor`: `3.2.3.17.1 AdcPowerState`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0077-CFGPROP-3-2-3-17-2-ADCPOWERSTATEREADYCBKREF
- `caption`: `Tresos configuration property panel: 3.2.3.17.2 AdcPowerStateReadyCbkRef`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0077-CFGPROP-3-2-3-17-2-ADCPOWERSTATEREADYCBKREF`
- `physical_pages`: [77]
- `primary_page`: `77`
- `printed_pages`: ["77"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPowerStateReadyCbkRef`.
- `anchor`: `3.2.3.17.2 AdcPowerStateReadyCbkRef`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0077-CFGPROP-3-2-3-17-ADCPOWERSTATECONFIG
- `caption`: `Tresos configuration property panel: 3.2.3.17 AdcPowerStateConfig`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0077-CFGPROP-3-2-3-17-ADCPOWERSTATECONFIG`
- `physical_pages`: [77]
- `primary_page`: `77`
- `printed_pages`: ["77"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPowerStateConfig`.
- `anchor`: `3.2.3.17 AdcPowerStateConfig`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0077-CFGPROP-3-2-3-18-ADCECUCPARTITIONREF
- `caption`: `Tresos configuration property panel: 3.2.3.18 AdcEcucPartitionRef`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0077-CFGPROP-3-2-3-18-ADCECUCPARTITIONREF`
- `physical_pages`: [77]
- `primary_page`: `77`
- `printed_pages`: ["77"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcEcucPartitionRef`.
- `anchor`: `3.2.3.18 AdcEcucPartitionRef`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0078-CFGPROP-3-2-3-19-ADCKERNELECUCPARTITIONREF
- `caption`: `Tresos configuration property panel: 3.2.3.19 AdcKernelEcucPartitionRef`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0078-CFGPROP-3-2-3-19-ADCKERNELECUCPARTITIONREF`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcKernelEcucPartitionRef`.
- `anchor`: `3.2.3.19 AdcKernelEcucPartitionRef`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0078-CFGPROP-3-2-3-20-1-ADCINTERRUPTSOURCE
- `caption`: `Tresos configuration property panel: 3.2.3.20.1 AdcInterruptSource`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0078-CFGPROP-3-2-3-20-1-ADCINTERRUPTSOURCE`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcInterruptSource`.
- `anchor`: `3.2.3.20.1 AdcInterruptSource`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0078-CFGPROP-3-2-3-20-ADCINTERRUPT
- `caption`: `Tresos configuration property panel: 3.2.3.20 AdcInterrupt`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0078-CFGPROP-3-2-3-20-ADCINTERRUPT`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcInterrupt`.
- `anchor`: `3.2.3.20 AdcInterrupt`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0079-CFGPROP-3-2-3-20-2-ADCINTERRUPTENABLE
- `caption`: `Tresos configuration property panel: 3.2.3.20.2 AdcInterruptEnable`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0079-CFGPROP-3-2-3-20-2-ADCINTERRUPTENABLE`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcInterruptEnable`.
- `anchor`: `3.2.3.20.2 AdcInterruptEnable`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0079-CFGPROP-3-2-4-1-ADCCHANNELVALUESIGNED
- `caption`: `Tresos configuration property panel: 3.2.4.1 AdcChannelValueSigned`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0079-CFGPROP-3-2-4-1-ADCCHANNELVALUESIGNED`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcChannelValueSigned`.
- `anchor`: `3.2.4.1 AdcChannelValueSigned`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0079-CFGPROP-3-2-4-2-ADCGROUPFIRSTCHANNELFIXED
- `caption`: `Tresos configuration property panel: 3.2.4.2 AdcGroupFirstChannelFixed`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0079-CFGPROP-3-2-4-2-ADCGROUPFIRSTCHANNELFIXED`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcGroupFirstChannelFixed`.
- `anchor`: `3.2.4.2 AdcGroupFirstChannelFixed`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0079-CFGPROP-3-2-4-3-ADCMAXCHANNELRESOLUTION
- `caption`: `Tresos configuration property panel: 3.2.4.3 AdcMaxChannelResolution`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0079-CFGPROP-3-2-4-3-ADCMAXCHANNELRESOLUTION`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcMaxChannelResolution`.
- `anchor`: `3.2.4.3 AdcMaxChannelResolution`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0079-CFGPROP-3-2-4-ADCPUBLISHEDINFORMATION
- `caption`: `Tresos configuration property panel: 3.2.4 AdcPublishedInformation`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0079-CFGPROP-3-2-4-ADCPUBLISHEDINFORMATION`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcPublishedInformation`.
- `anchor`: `3.2.4 AdcPublishedInformation`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0080-CFGPROP-3-2-5-1-ARRELEASEMAJORVERSION
- `caption`: `Tresos configuration property panel: 3.2.5.1 ArReleaseMajorVersion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0080-CFGPROP-3-2-5-1-ARRELEASEMAJORVERSION`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `ArReleaseMajorVersion`.
- `anchor`: `3.2.5.1 ArReleaseMajorVersion`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0080-CFGPROP-3-2-5-2-ARRELEASEMINORVERSION
- `caption`: `Tresos configuration property panel: 3.2.5.2 ArReleaseMinorVersion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0080-CFGPROP-3-2-5-2-ARRELEASEMINORVERSION`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `ArReleaseMinorVersion`.
- `anchor`: `3.2.5.2 ArReleaseMinorVersion`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0080-CFGPROP-3-2-5-3-ARRELEASEREVISIONVERSION
- `caption`: `Tresos configuration property panel: 3.2.5.3 ArReleaseRevisionVersion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0080-CFGPROP-3-2-5-3-ARRELEASEREVISIONVERSION`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `ArReleaseRevisionVersion`.
- `anchor`: `3.2.5.3 ArReleaseRevisionVersion`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0080-CFGPROP-3-2-5-4-MODULEID
- `caption`: `Tresos configuration property panel: 3.2.5.4 ModuleId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0080-CFGPROP-3-2-5-4-MODULEID`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `ModuleId`.
- `anchor`: `3.2.5.4 ModuleId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0080-CFGPROP-3-2-5-COMMONPUBLISHEDINFORMATION
- `caption`: `Tresos configuration property panel: 3.2.5 CommonPublishedInformation`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0080-CFGPROP-3-2-5-COMMONPUBLISHEDINFORMATION`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `CommonPublishedInformation`.
- `anchor`: `3.2.5 CommonPublishedInformation`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0081-CFGPROP-3-2-5-5-SWMAJORVERSION
- `caption`: `Tresos configuration property panel: 3.2.5.5 SwMajorVersion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0081-CFGPROP-3-2-5-5-SWMAJORVERSION`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `SwMajorVersion`.
- `anchor`: `3.2.5.5 SwMajorVersion`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0081-CFGPROP-3-2-5-6-SWMINORVERSION
- `caption`: `Tresos configuration property panel: 3.2.5.6 SwMinorVersion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0081-CFGPROP-3-2-5-6-SWMINORVERSION`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `SwMinorVersion`.
- `anchor`: `3.2.5.6 SwMinorVersion`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0081-CFGPROP-3-2-5-7-SWPATCHVERSION
- `caption`: `Tresos configuration property panel: 3.2.5.7 SwPatchVersion`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0081-CFGPROP-3-2-5-7-SWPATCHVERSION`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `SwPatchVersion`.
- `anchor`: `3.2.5.7 SwPatchVersion`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0081-CFGPROP-3-2-5-8-VENDORID
- `caption`: `Tresos configuration property panel: 3.2.5.8 VendorId`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0081-CFGPROP-3-2-5-8-VENDORID`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `VendorId`.
- `anchor`: `3.2.5.8 VendorId`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0081-CFGPROP-3-2-6-AUTOSAREXT
- `caption`: `Tresos configuration property panel: 3.2.6 AutosarExt`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0081-CFGPROP-3-2-6-AUTOSAREXT`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AutosarExt`.
- `anchor`: `3.2.6 AutosarExt`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0082-CFGPROP-3-2-6-1-ADCMULTICORESUPPORT
- `caption`: `Tresos configuration property panel: 3.2.6.1 AdcMulticoreSupport`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0082-CFGPROP-3-2-6-1-ADCMULTICORESUPPORT`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcMulticoreSupport`.
- `anchor`: `3.2.6.1 AdcMulticoreSupport`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0082-CFGPROP-3-2-6-2-ADCISRPARTITIONMAPPINGCHECK
- `caption`: `Tresos configuration property panel: 3.2.6.2 AdcIsrPartitionMappingCheck`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0082-CFGPROP-3-2-6-2-ADCISRPARTITIONMAPPINGCHECK`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcIsrPartitionMappingCheck`.
- `anchor`: `3.2.6.2 AdcIsrPartitionMappingCheck`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0082-CFGPROP-3-2-6-3-ADCDISABLEDEMREPORTERRORSTATUS
- `caption`: `Tresos configuration property panel: 3.2.6.3 AdcDisableDemReportErrorStatus`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0082-CFGPROP-3-2-6-3-ADCDISABLEDEMREPORTERRORSTATUS`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcDisableDemReportErrorStatus`.
- `anchor`: `3.2.6.3 AdcDisableDemReportErrorStatus`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0082-CFGPROP-3-2-6-4-ADCHARDWAREAVERAGEONCE
- `caption`: `Tresos configuration property panel: 3.2.6.4 AdcHardwareAverageOnce`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0082-CFGPROP-3-2-6-4-ADCHARDWAREAVERAGEONCE`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcHardwareAverageOnce`.
- `anchor`: `3.2.6.4 AdcHardwareAverageOnce`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0082-CFGPROP-3-2-6-5-ADCENABLEDMATRASFERMODE
- `caption`: `Tresos configuration property panel: 3.2.6.5 AdcEnableDmaTrasferMode`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0082-CFGPROP-3-2-6-5-ADCENABLEDMATRASFERMODE`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcEnableDmaTrasferMode`.
- `anchor`: `3.2.6.5 AdcEnableDmaTrasferMode`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0083-CFGPROP-3-2-6-6-ADCENABLEUSERMODESUPPORT
- `caption`: `Tresos configuration property panel: 3.2.6.6 AdcEnableUserModeSupport`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0083-CFGPROP-3-2-6-6-ADCENABLEUSERMODESUPPORT`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcEnableUserModeSupport`.
- `anchor`: `3.2.6.6 AdcEnableUserModeSupport`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0083-CFGPROP-3-2-7-1-ADC-E-TIMEOUT
- `caption`: `Tresos configuration property panel: 3.2.7.1 ADC_E_TIMEOUT`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0083-CFGPROP-3-2-7-1-ADC-E-TIMEOUT`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `ADC_E_TIMEOUT`.
- `anchor`: `3.2.7.1 ADC_E_TIMEOUT`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0083-CFGPROP-3-2-7-ADCDEMEVENTPARAMETERREFS
- `caption`: `Tresos configuration property panel: 3.2.7 AdcDemEventParameterRefs`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0083-CFGPROP-3-2-7-ADCDEMEVENTPARAMETERREFS`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `null`
- `key_fields`: ["Property", "Value/List", "Type", "Range", "Default", "Min", "Max"]
- `summary`: Navigation index for Tresos ADC configuration container/variable `AdcDemEventParameterRefs`.
- `anchor`: `3.2.7 AdcDemEventParameterRefs`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.80`
- `quality_flags`: ["generated_config_property_index", "screenshot_or_property_block_may_not_reconstruct_full_grid"]

### TBL-0084-0087-USAGE-STEPS
- `caption`: `ADC Usage Common Steps`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0084-0087-USAGE-STEPS`
- `physical_pages`: [84, 85, 86, 87]
- `primary_page`: `84`
- `printed_pages`: ["84", "85", "86", "87"]
- `section_path`: `Chapter 4 Configuration Guides / 4.2 ADC Usage Common Steps`
- `bbox`: `null`
- `key_fields`: ["Step", "Description", "Screenshot"]
- `summary`: Common setup steps for MCU/Ptimer clocks, PortPin modes, hardware units, channels, groups and channel delays.
- `anchor`: `ADC Usage Common Steps`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["steps_with_screenshots", "spans_multiple_pages"]

### TBL-0084-CONFIG-CONSTRAINTS
- `caption`: `Configuration Item Constraint list`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0084-CONFIG-CONSTRAINTS`
- `physical_pages`: [84]
- `primary_page`: `84`
- `printed_pages`: ["84"]
- `section_path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `bbox`: `null`
- `key_fields`: ["Constraint number", "Constraint text"]
- `summary`: Lists ADC configuration constraints for priority/queueing, clock reference <=30MHz, back-to-back mode and channel delays.
- `anchor`: `Configuration Item Constraint`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["numbered_list_as_table_like_index"]

## 7. Figure / Image Index

### FIG-0012-001
- `source_figure_number`: `null`
- `caption`: `File structure dependency diagram`
- `physical_pages`: [12]
- `primary_page`: `12`
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.2 File Structure`
- `bbox`: `null`
- `image_type`: `diagram`
- `semantic_description`: Shows Adc.c, Adc.h, Adc_Hw.h, Adc_Cfg.h, Det.h, SchM_Adc.h, Std_Types.h, Mcal.h and related headers as a dependency structure.
- `keywords`: ["file structure", "dependency", "Adc.c", "Adc.h"]
- `anchor`: `2.2 File Structure`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.86`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0042-001
- `source_figure_number`: `null`
- `caption`: `Initialization of the ADC Driver sequence diagram`
- `physical_pages`: [42, 43]
- `primary_page`: `42`
- `printed_pages`: ["42", "43"]
- `section_path`: `Chapter 2 Software Design / 2.9.1 Initialization of the ADC Driver`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Sequence diagram for EcuM calling Adc_Init(const Adc_ConfigType*) and ADC driver initialization.
- `keywords`: ["Adc_Init", "EcuM", "sequence diagram"]
- `anchor`: `Initialization of the ADC Driver`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.82`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0043-001
- `source_figure_number`: `null`
- `caption`: `De-Initialization of the ADC Driver sequence diagram`
- `physical_pages`: [43]
- `primary_page`: `43`
- `printed_pages`: ["43"]
- `section_path`: `Chapter 2 Software Design / 2.9.2 De-Initialization of the ADC Driver`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Sequence diagram showing Adc_DeInit interaction with the ADC module.
- `keywords`: ["Adc_DeInit", "EcuM"]
- `anchor`: `De-Initialization of the ADC Driver`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.82`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0044-001
- `source_figure_number`: `null`
- `caption`: `Software Triggered One-Shot Conversion without Notification`
- `physical_pages`: [44]
- `primary_page`: `44`
- `printed_pages`: ["44"]
- `section_path`: `Chapter 2 Software Design / 2.9.3 Software Triggered One-Shot Conversion without Notification`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows Adc_StartGroupConversion, polling with Adc_GetGroupStatus and reading group results after conversion completion.
- `keywords`: ["Adc_StartGroupConversion", "Adc_GetGroupStatus", "Adc_ReadGroup"]
- `anchor`: `sd Adc_OneShotUsage`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0045-001
- `source_figure_number`: `null`
- `caption`: `Software Triggered Continuous Conversion with Notification`
- `physical_pages`: [45]
- `primary_page`: `45`
- `printed_pages`: ["45"]
- `section_path`: `Chapter 2 Software Design / 2.9.4 Software Triggered Continuous Conversion with Notification`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows continuous conversion with group notification and repeated ADC conversion unit activity.
- `keywords`: ["continuous", "notification", "Adc_EnableGroupNotification"]
- `anchor`: `sd Adc_SW_triggered_continuous_with_notifications`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0046-001
- `source_figure_number`: `null`
- `caption`: `Hardware Triggered One-Shot Conversion with Notification`
- `physical_pages`: [46]
- `primary_page`: `46`
- `printed_pages`: ["46"]
- `section_path`: `Chapter 2 Software Design / 2.9.5 Hardware Triggered One-Shot Conversion with Notification`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows hardware trigger source, Adc_EnableHardwareTrigger, notification enabled/disabled paths and conversion completion.
- `keywords`: ["hardware trigger", "notification", "Adc_EnableHardwareTrigger"]
- `anchor`: `sd Adc_HW_triggered_continuous_with_notification`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0047-001
- `source_figure_number`: `null`
- `caption`: `HW Trigger - One-Shot Conversion - Linear Streaming`
- `physical_pages`: [47]
- `primary_page`: `47`
- `printed_pages`: ["47"]
- `section_path`: `Chapter 2 Software Design / 2.9.6 HW Trigger - One-Shot Conversion - Linear Streaming`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows linear streaming buffer behavior, automatic hardware-trigger disable and notification behavior.
- `keywords`: ["linear streaming", "streaming buffer", "hardware trigger"]
- `anchor`: `sd Adc_HW_triggered_oneshot_linear_streaming`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0048-001
- `source_figure_number`: `null`
- `caption`: `No Priority Mechanism - No Queuing`
- `physical_pages`: [48]
- `primary_page`: `48`
- `printed_pages`: ["48"]
- `section_path`: `Chapter 2 Software Design / 2.9.7 No Priority Mechanism - No Queuing`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows behavior when ADC priority is none and queuing is off, including DET involvement for conflicting requests.
- `keywords`: ["ADC_PRIORITY_NONE", "queuing off", "Det"]
- `anchor`: `sd Adc_prio_mechanism_NONE_queuing_OFF`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0049-001
- `source_figure_number`: `null`
- `caption`: `No Priority Mechanism - SW Queuing`
- `physical_pages`: [49]
- `primary_page`: `49`
- `printed_pages`: ["49"]
- `section_path`: `Chapter 2 Software Design / 2.9.8 No Priority Mechanism - SW Queuing`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows software queueing behavior without priority mechanism.
- `keywords`: ["SW queuing", "ADC_PRIORITY_NONE", "Group1", "Group2"]
- `anchor`: `sd Adc_SW_queue_prio_mechanism_NONE_queuing_ON`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0050-001
- `source_figure_number`: `null`
- `caption`: `HW_SW Priority Mechanism - SW Queuing`
- `physical_pages`: [50]
- `primary_page`: `50`
- `printed_pages`: ["50"]
- `section_path`: `Chapter 2 Software Design / 2.9.9 HW_SW Priority Mechanism - SW Queuing`
- `bbox`: `null`
- `image_type`: `sequence_diagram`
- `semantic_description`: Shows mixed hardware/software priority mechanism with software queueing and group conversion flow.
- `keywords`: ["HW_SW", "priority", "SW queue"]
- `anchor`: `sd Adc_SW_queue_prio_mechanism_HW_SW`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.84`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0051-001
- `source_figure_number`: `null`
- `caption`: `ADC container inclusion overview`
- `physical_pages`: [51]
- `primary_page`: `51`
- `printed_pages`: ["51"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `bbox`: `null`
- `image_type`: `container_tree`
- `semantic_description`: Shows the eight ADC containers under Adc: IMPLEMENTATION_CONFIG_VARIANT, AdcConfigSet, AdcGeneral, AdcInterrupt, AdcPublishedInformation, CommonPublishedInformation, AutosarExt and AdcDemEventParameterRefs.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "AutosarExt", "container"]
- `anchor`: `The ADC module has the following 8 containers`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.86`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0052-0054
- `source_figure_number`: `null`
- `caption`: `ADC container inclusion relation screenshots`
- `physical_pages`: [52, 53, 54]
- `primary_page`: `52`
- `printed_pages`: ["52", "53", "54"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `bbox`: `null`
- `image_type`: `container_tree`
- `semantic_description`: Container inclusion diagrams for AdcConfigSet, AdcGeneral, AdcInterrupt, AdcPublishedInformation, AutosarExt and AdcDemEventParameterRefs.
- `keywords`: ["AdcConfigSet", "AdcHwUnit", "AdcChannel", "AdcGroup", "AdcGeneral"]
- `anchor`: `And the content of each container is as follows`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.82`
- `quality_flags`: ["generated_vector_or_text_diagram_anchor"]

### FIG-0055-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 55`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 118.7, 395.4, 138.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0055-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 55`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 338.4, 373.1, 382.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0055-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 55`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 493.3, 559.3, 537.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0055-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 55`
- `physical_pages`: [55]
- `primary_page`: `55`
- `printed_pages`: ["55"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 666.8, 509.0, 682.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0056-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 56`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 89.6, 508.7, 105.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0056-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 56`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 268.5, 508.9, 284.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0056-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 56`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 400.6, 559.3, 412.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0056-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 56`
- `physical_pages`: [56]
- `primary_page`: `56`
- `printed_pages`: ["56"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 591.5, 508.6, 608.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0057-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 57`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 88.7, 449.5, 110.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0057-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 57`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 241.2, 549.6, 256.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0057-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 57`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 421.6, 508.6, 434.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0057-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 57`
- `physical_pages`: [57]
- `primary_page`: `57`
- `printed_pages`: ["57"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.3, 631.8, 507.7, 647.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0058-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 58`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 75.2, 508.9, 88.6]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0058-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 58`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 285.0, 508.7, 302.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0058-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 58`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 482.8, 508.0, 498.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0058-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 58`
- `physical_pages`: [58]
- `primary_page`: `58`
- `printed_pages`: ["58"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.3, 644.8, 333.9, 681.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0059-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 59`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 55.3, 509.1, 71.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0059-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 59`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 221.5, 508.7, 237.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0059-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 59`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 387.7, 508.9, 405.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0059-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 59`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 555.2, 508.9, 572.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0059-005
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 5 on page 59`
- `physical_pages`: [59]
- `primary_page`: `59`
- `printed_pages`: ["59"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 718.7, 338.4, 752.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0060-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 60`
- `physical_pages`: [60]
- `primary_page`: `60`
- `printed_pages`: ["60"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 405.1, 508.4, 424.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0060-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 60`
- `physical_pages`: [60]
- `primary_page`: `60`
- `printed_pages`: ["60"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 658.8, 508.7, 678.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0061-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 61`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 108.1, 366.9, 122.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0061-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 61`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 272.1, 508.7, 290.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0061-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 61`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 418.6, 338.7, 454.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0061-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 61`
- `physical_pages`: [61]
- `primary_page`: `61`
- `printed_pages`: ["61"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 570.5, 309.8, 585.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0062-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 62`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 37.4, 413.9, 57.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0062-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 62`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 203.2, 547.5, 245.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0062-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 62`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.3, 377.9, 559.3, 394.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0062-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 62`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.3, 561.3, 559.3, 578.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0062-005
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 5 on page 62`
- `physical_pages`: [62]
- `primary_page`: `62`
- `printed_pages`: ["62"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 761.6, 559.3, 778.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0063-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 63`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 187.9, 509.1, 203.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0063-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 63`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 354.0, 537.0, 369.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0063-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 63`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 570.0, 536.8, 586.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0063-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 63`
- `physical_pages`: [63]
- `primary_page`: `63`
- `printed_pages`: ["63"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 738.0, 536.4, 752.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0064-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 64`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 203.0, 551.5, 219.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0064-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 64`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 387.4, 552.8, 403.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0064-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 64`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 570.0, 552.6, 586.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0064-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 64`
- `physical_pages`: [64]
- `primary_page`: `64`
- `printed_pages`: ["64"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 737.4, 546.7, 753.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0065-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 65`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 204.8, 547.2, 219.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0065-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 65`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 420.5, 547.3, 436.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0065-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 65`
- `physical_pages`: [65]
- `primary_page`: `65`
- `printed_pages`: ["65"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 616.4, 550.8, 660.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0066-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 66`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 56.1, 546.8, 71.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0066-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 66`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 240.4, 546.5, 255.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0066-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 66`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 439.5, 546.2, 456.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0066-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 66`
- `physical_pages`: [66]
- `primary_page`: `66`
- `printed_pages`: ["66"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 622.5, 546.4, 639.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0067-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 67`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 72.1, 546.3, 88.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0067-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 67`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 290.3, 546.8, 306.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0067-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 67`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 472.4, 546.6, 489.6]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0067-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 67`
- `physical_pages`: [67]
- `primary_page`: `67`
- `printed_pages`: ["67"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 674.9, 546.5, 689.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0068-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 68`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 107.4, 549.6, 123.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0068-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 68`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 292.4, 546.2, 306.6]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0068-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 68`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 455.9, 547.0, 471.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0068-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 68`
- `physical_pages`: [68]
- `primary_page`: `68`
- `printed_pages`: ["68"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 639.3, 547.0, 655.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0069-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 69`
- `physical_pages`: [69]
- `primary_page`: `69`
- `printed_pages`: ["69"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 427.5, 547.3, 445.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0070-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 70`
- `physical_pages`: [70]
- `primary_page`: `70`
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 54.8, 311.3, 73.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0070-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 70`
- `physical_pages`: [70]
- `primary_page`: `70`
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 376.2, 546.4, 391.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0070-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 70`
- `physical_pages`: [70]
- `primary_page`: `70`
- `printed_pages`: ["70"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 557.9, 559.3, 575.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0071-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 71`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 37.4, 547.1, 87.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0071-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 71`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 270.9, 549.6, 314.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0071-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 71`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 531.7, 547.2, 582.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0071-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 71`
- `physical_pages`: [71]
- `primary_page`: `71`
- `printed_pages`: ["71"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `bbox`: `[112.2, 732.2, 338.5, 766.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0072-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 72`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 132.0, 297.5, 147.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0072-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 72`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 361.7, 297.4, 376.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0072-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 72`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 556.1, 549.6, 601.6]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0072-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 72`
- `physical_pages`: [72]
- `primary_page`: `72`
- `printed_pages`: ["72"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 750.0, 338.6, 786.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcConfigSet", "AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0073-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 73`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 181.8, 508.1, 197.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0073-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 73`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 345.1, 338.8, 360.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0073-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 73`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 490.3, 508.0, 505.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0073-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 73`
- `physical_pages`: [73]
- `primary_page`: `73`
- `printed_pages`: ["73"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 653.3, 338.7, 667.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0074-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 74`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 88.7, 508.0, 106.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0074-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 74`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 287.1, 339.0, 302.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0074-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 74`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 483.3, 508.4, 498.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0074-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 74`
- `physical_pages`: [74]
- `primary_page`: `74`
- `printed_pages`: ["74"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 626.6, 335.4, 643.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0075-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 75`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.3, 55.0, 508.4, 71.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0075-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 75`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 353.8, 546.6, 369.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0075-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 75`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 515.6, 544.2, 532.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0075-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 75`
- `physical_pages`: [75]
- `primary_page`: `75`
- `printed_pages`: ["75"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 714.3, 547.3, 728.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0076-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 76`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 165.9, 546.1, 180.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0076-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 76`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 327.5, 547.0, 343.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0076-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 76`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 541.5, 448.6, 557.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0076-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 76`
- `physical_pages`: [76]
- `primary_page`: `76`
- `printed_pages`: ["76"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 703.6, 306.8, 721.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0077-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 77`
- `physical_pages`: [77]
- `primary_page`: `77`
- `printed_pages`: ["77"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 129.1, 452.1, 204.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0078-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 78`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 37.4, 549.6, 86.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0078-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 78`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 271.2, 549.6, 283.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0078-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 78`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 462.8, 451.9, 549.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0078-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 78`
- `physical_pages`: [78]
- `primary_page`: `78`
- `printed_pages`: ["78"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `bbox`: `[112.2, 660.7, 367.2, 677.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0079-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 79`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `[112.2, 92.3, 261.5, 106.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "AdcPublishedInformation", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0079-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 79`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `[112.2, 254.0, 338.8, 290.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "AdcPublishedInformation", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0079-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 79`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `[112.2, 403.5, 423.7, 418.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "AdcPublishedInformation", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0079-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 79`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `[112.2, 564.0, 423.7, 580.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "AdcPublishedInformation", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0079-005
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 5 on page 79`
- `physical_pages`: [79]
- `primary_page`: `79`
- `printed_pages`: ["79"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `bbox`: `[112.2, 709.0, 423.9, 725.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcGeneral", "AdcPublishedInformation", "Tresos", "Configuration", "Items"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral / 3.2.4 AdcPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0080-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 80`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `[112.2, 149.8, 338.7, 187.6]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0080-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 80`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `[112.2, 281.1, 400.9, 297.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0080-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 80`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `[112.2, 425.8, 400.3, 444.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0080-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 80`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `[112.2, 572.2, 393.5, 589.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0080-005
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 5 on page 80`
- `physical_pages`: [80]
- `primary_page`: `80`
- `printed_pages`: ["80"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `bbox`: `[112.2, 720.2, 396.8, 735.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0081-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 81`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 129.1, 399.1, 148.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0081-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 81`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 293.6, 400.8, 311.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0081-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 81`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 458.5, 391.5, 472.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0081-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 81`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 602.0, 394.7, 617.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0081-005
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 5 on page 81`
- `physical_pages`: [81]
- `primary_page`: `81`
- `printed_pages`: ["81"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 749.4, 338.5, 784.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "CommonPublishedInformation", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.5 CommonPublishedInformation / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0082-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 82`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 147.0, 310.5, 166.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0082-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 82`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 311.5, 316.2, 330.6]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0082-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 82`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 459.5, 310.5, 475.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0082-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 82`
- `physical_pages`: [82]
- `primary_page`: `82`
- `printed_pages`: ["82"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `bbox`: `[112.2, 639.3, 310.6, 654.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0083-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 83`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `[112.2, 91.8, 309.9, 105.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcDemEventParameterRefs", "Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0083-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 83`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `[112.2, 267.6, 309.9, 284.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcDemEventParameterRefs", "Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0083-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 83`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `[112.2, 466.3, 338.2, 502.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcDemEventParameterRefs", "Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0083-004
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 4 on page 83`
- `physical_pages`: [83]
- `primary_page`: `83`
- `printed_pages`: ["83"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `bbox`: `[112.2, 601.0, 546.3, 612.7]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["AdcDemEventParameterRefs", "Tresos", "Configuration", "Items", "AutosarExt"]
- `anchor`: `Chapter 3 Tresos Configuration Items / 3.2.6 AutosarExt / 3.2.7 AdcDemEventParameterRefs`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0084-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 84`
- `physical_pages`: [84]
- `primary_page`: `84`
- `printed_pages`: ["84"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 319.9, 533.9, 360.5]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0084-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 84`
- `physical_pages`: [84]
- `primary_page`: `84`
- `printed_pages`: ["84"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 406.4, 419.1, 440.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0084-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 84`
- `physical_pages`: [84]
- `primary_page`: `84`
- `printed_pages`: ["84"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 503.0, 559.0, 706.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0085-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 85`
- `physical_pages`: [85]
- `primary_page`: `85`
- `printed_pages`: ["85"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 36.9, 348.2, 103.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0085-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 85`
- `physical_pages`: [85]
- `primary_page`: `85`
- `printed_pages`: ["85"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 148.9, 558.7, 186.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0085-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 85`
- `physical_pages`: [85]
- `primary_page`: `85`
- `printed_pages`: ["85"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 232.0, 580.3, 729.1]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0086-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 86`
- `physical_pages`: [86]
- `primary_page`: `86`
- `printed_pages`: ["86"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 36.9, 562.1, 158.8]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0086-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 86`
- `physical_pages`: [86]
- `primary_page`: `86`
- `printed_pages`: ["86"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 187.7, 507.2, 462.9]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0086-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 86`
- `physical_pages`: [86]
- `primary_page`: `86`
- `printed_pages`: ["86"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 508.8, 542.5, 554.4]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0087-001
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 1 on page 87`
- `physical_pages`: [87]
- `primary_page`: `87`
- `printed_pages`: ["87"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 36.9, 580.3, 436.2]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0087-002
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 2 on page 87`
- `physical_pages`: [87]
- `primary_page`: `87`
- `printed_pages`: ["87"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 499.1, 330.0, 562.3]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

### FIG-0087-003
- `source_figure_number`: `null`
- `caption`: `Tresos configuration screenshot block 3 on page 87`
- `physical_pages`: [87]
- `primary_page`: `87`
- `printed_pages`: ["87"]
- `section_path`: `Chapter 4 Configuration Guides`
- `bbox`: `[57.0, 608.2, 193.7, 666.0]`
- `image_type`: `screenshot`
- `semantic_description`: Embedded screenshot/diagram block associated with `Chapter 4 Configuration Guides`; use as visual anchor for the nearby configuration item or usage step.
- `keywords`: ["Configuration", "Guides"]
- `anchor`: `Chapter 4 Configuration Guides`
- `extraction_method`: `text-layer caption/heading + image block bbox where available`
- `confidence`: `0.72`
- `quality_flags`: ["generated_from_image_block", "visual_verification_required"]

## 8. Term / API / Config / Requirement Index

### REQ-SWS-ADC-00120
- `name`: `SWS_Adc_00120`
- `type`: `requirement`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p10: Rejected Requirement 3 SWS_Adc_00120"]
- `aliases`: ["SWS Adc_00120", "SWS-Adc-00120"]

### REQ-SWS-ADC-00121
- `name`: `SWS_Adc_00121`
- `type`: `requirement`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p10: Rejected Requirement 3 SWS_Adc_00121"]
- `aliases`: ["SWS Adc_00121", "SWS-Adc-00121"]

### REQ-SWS-ADC-00146
- `name`: `SWS_Adc_00146`
- `type`: `requirement`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p9: Rejected Requirement 3 SWS_Adc_00146"]
- `aliases`: ["SWS Adc_00146", "SWS-Adc-00146"]

### REQ-SWS-ADC-00219
- `name`: `SWS_Adc_00219`
- `type`: `requirement`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p11: Rejected Requirement 3 SWS_Adc_00219"]
- `aliases`: ["SWS Adc_00219", "SWS-Adc-00219"]

### REQ-SWS-ADC-00273
- `name`: `SWS_Adc_00273`
- `type`: `requirement`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p9: Rejected Requirement 3 SWS_Adc_00273"]
- `aliases`: ["SWS Adc_00273", "SWS-Adc-00273"]

### REQ-SWS-ADC-00283
- `name`: `SWS_Adc_00283`
- `type`: `requirement`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p9: Rejected Requirement 3 SWS_Adc_00283"]
- `aliases`: ["SWS Adc_00283", "SWS-Adc-00283"]

### REQ-SWS-ADC-00305
- `name`: `SWS_Adc_00305`
- `type`: `requirement`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p11: Rejected Requirement 3 SWS_Adc_00305"]
- `aliases`: ["SWS Adc_00305", "SWS-Adc-00305"]

### REQ-SWS-ADC-00337
- `name`: `SWS_Adc_00337`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 3 SWS_Adc_00337"]
- `aliases`: ["SWS Adc_00337", "SWS-Adc-00337"]

### REQ-SWS-ADC-00339
- `name`: `SWS_Adc_00339`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 2 SWS_Adc_00339"]
- `aliases`: ["SWS Adc_00339", "SWS-Adc-00339"]

### REQ-SWS-ADC-00341
- `name`: `SWS_Adc_00341`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 1 SWS_Adc_00341"]
- `aliases`: ["SWS Adc_00341", "SWS-Adc-00341"]

### REQ-SWS-ADC-00358
- `name`: `SWS_Adc_00358`
- `type`: `requirement`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p9: Rejected Requirement 3 SWS_Adc_00358"]
- `aliases`: ["SWS Adc_00358", "SWS-Adc-00358"]

### REQ-SWS-ADC-00462
- `name`: `SWS_Adc_00462`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 3 SWS_Adc_00462"]
- `aliases`: ["SWS Adc_00462", "SWS-Adc-00462"]

### REQ-SWS-ADC-00463
- `name`: `SWS_Adc_00463`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 3 SWS_Adc_00463"]
- `aliases`: ["SWS Adc_00463", "SWS-Adc-00463"]

### REQ-SWS-ADC-00464
- `name`: `SWS_Adc_00464`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 3 SWS_Adc_00464"]
- `aliases`: ["SWS Adc_00464", "SWS-Adc-00464"]

### REQ-SWS-ADC-00465
- `name`: `SWS_Adc_00465`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p6: Rejected Requirement 3 SWS_Adc_00465"]
- `aliases`: ["SWS Adc_00465", "SWS-Adc-00465"]

### REQ-SWS-ADC-00466
- `name`: `SWS_Adc_00466`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00466"]
- `aliases`: ["SWS Adc_00466", "SWS-Adc-00466"]

### REQ-SWS-ADC-00467
- `name`: `SWS_Adc_00467`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00467"]
- `aliases`: ["SWS Adc_00467", "SWS-Adc-00467"]

### REQ-SWS-ADC-00469
- `name`: `SWS_Adc_00469`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00469"]
- `aliases`: ["SWS Adc_00469", "SWS-Adc-00469"]

### REQ-SWS-ADC-00470
- `name`: `SWS_Adc_00470`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00470"]
- `aliases`: ["SWS Adc_00470", "SWS-Adc-00470"]

### REQ-SWS-ADC-00471
- `name`: `SWS_Adc_00471`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00471"]
- `aliases`: ["SWS Adc_00471", "SWS-Adc-00471"]

### REQ-SWS-ADC-00472
- `name`: `SWS_Adc_00472`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00472"]
- `aliases`: ["SWS Adc_00472", "SWS-Adc-00472"]

### REQ-SWS-ADC-00473
- `name`: `SWS_Adc_00473`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p7: Rejected Requirement 3 SWS_Adc_00473"]
- `aliases`: ["SWS Adc_00473", "SWS-Adc-00473"]

### REQ-SWS-ADC-00517
- `name`: `SWS_Adc_00517`
- `type`: `requirement`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p8: Rejected Requirement 3 SWS_Adc_00517"]
- `aliases`: ["SWS Adc_00517", "SWS-Adc-00517"]

### REQ-SWS-ADC-00527
- `name`: `SWS_Adc_00527`
- `type`: `requirement`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p8: Rejected Requirement 4 SWS_Adc_00527"]
- `aliases`: ["SWS Adc_00527", "SWS-Adc-00527"]

### REQ-SWS-ADC-91000
- `name`: `SWS_Adc_91000`
- `type`: `requirement`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p8: Rejected Requirement 3 SWS_Adc_91000"]
- `aliases`: ["SWS Adc_91000", "SWS-Adc-91000"]

### REQ-SWS-ADC-91001
- `name`: `SWS_Adc_91001`
- `type`: `requirement`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p9: Rejected Requirement 3 SWS_Adc_91001"]
- `aliases`: ["SWS Adc_91001", "SWS-Adc-91001"]

### REQ-SWS-ADC-91002
- `name`: `SWS_Adc_91002`
- `type`: `requirement`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p10: Rejected Requirement 3 SWS_Adc_91002"]
- `aliases`: ["SWS Adc_91002", "SWS-Adc-91002"]

### REQ-SWS-ADC-91003
- `name`: `SWS_Adc_91003`
- `type`: `requirement`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p10: Rejected Requirement 3 SWS_Adc_91003"]
- `aliases`: ["SWS Adc_91003", "SWS-Adc-91003"]

### REQ-SWS-ADC-91004
- `name`: `SWS_Adc_91004`
- `type`: `requirement`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p11: Rejected Requirement 3 SWS_Adc_91004"]
- `aliases`: ["SWS Adc_91004", "SWS-Adc-91004"]

### REQ-SWS-ADC-CONSTR-00001
- `name`: `SWS_Adc_CONSTR_00001`
- `type`: `requirement`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p11: Rejected Requirement 3 SWS_Adc_CONSTR_00001"]
- `aliases`: ["SWS Adc_CONSTR_00001", "SWS-Adc-CONSTR-00001"]

### REQ-SWS-ADC-CONSTR-00002
- `name`: `SWS_Adc_CONSTR_00002`
- `type`: `requirement`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p12: Rejected Requirement 3 SWS_Adc_CONSTR_00002"]
- `aliases`: ["SWS Adc_CONSTR_00002", "SWS-Adc-CONSTR-00002"]

### REQ-SWS-ADC-CONSTR-00003
- `name`: `SWS_Adc_CONSTR_00003`
- `type`: `requirement`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p11: Rejected Requirement 3 SWS_Adc_CONSTR_00003"]
- `aliases`: ["SWS Adc_CONSTR_00003", "SWS-Adc-CONSTR-00003"]

### REQ-SWS-ADC-CONSTR-00004
- `name`: `SWS_Adc_CONSTR_00004`
- `type`: `requirement`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: AUTOSAR ADC requirement ID referenced by the source document, usually in rejected requirements.
- `anchors`: ["p12: Rejected Requirement 3 SWS_Adc_CONSTR_00004"]
- `aliases`: ["SWS Adc_CONSTR_00004", "SWS-Adc-CONSTR-00004"]

### API-ADC-ALIGNTYPE
- `name`: `Adc_AlignType`
- `type`: `api_or_function`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p23: Adc_AlignType"]
- `aliases`: ["Adc AlignType", "Adc_AlignType()"]

### API-ADC-AVERAGETYPE
- `name`: `Adc_AverageType`
- `type`: `api_or_function`
- `primary_page`: `24`
- `physical_pages`: [24, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p24: Adc_AverageType"]
- `aliases`: ["Adc AverageType", "Adc_AverageType()"]

### API-ADC-CFG
- `name`: `Adc_Cfg`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 16]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Macros in Adc_Cfg.h ................................................................................................................................... 16"]
- `aliases`: ["Adc Cfg", "Adc_Cfg()"]

### API-ADC-CFGDEFINES
- `name`: `Adc_CfgDefines`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 16]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Macros in Adc_CfgDefines.h ...................................................................................................................... 16"]
- `aliases`: ["Adc CfgDefines", "Adc_CfgDefines()"]

### API-ADC-CHANNELCONFIGURATIONTYPE
- `name`: `Adc_ChannelConfigurationType`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 28, 30]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Adc_ChannelConfigurationType ............................................................................................................... 30"]
- `aliases`: ["Adc ChannelConfigurationType", "Adc_ChannelConfigurationType()"]

### API-ADC-CHANNELINDEXTYPE
- `name`: `Adc_ChannelIndexType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27, 30, 32]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint16 Adc_ChannelIndexType"]
- `aliases`: ["Adc ChannelIndexType", "Adc_ChannelIndexType()"]

### API-ADC-CHANNELRANGESELECTTYPE
- `name`: `Adc_ChannelRangeSelectType`
- `type`: `api_or_function`
- `primary_page`: `22`
- `physical_pages`: [22, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p22: Adc_ChannelRangeSelectType"]
- `aliases`: ["Adc ChannelRangeSelectType", "Adc_ChannelRangeSelectType()"]

### API-ADC-CHANNELTYPE
- `name`: `Adc_ChannelType`
- `type`: `api_or_function`
- `primary_page`: `8`
- `physical_pages`: [8, 27, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p8: Adc_ChannelType."]
- `aliases`: ["Adc ChannelType", "Adc_ChannelType()"]

### API-ADC-CLOCKSOURCETYPE
- `name`: `Adc_ClockSourceType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint8 Adc_ClockSourceType"]
- `aliases`: ["Adc ClockSourceType", "Adc_ClockSourceType()"]

### API-ADC-CMPCHANNELTYPE
- `name`: `Adc_CmpChannelType`
- `type`: `api_or_function`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p25: Adc_CmpChannelType"]
- `aliases`: ["Adc CmpChannelType", "Adc_CmpChannelType()"]

### API-ADC-CONFIGTYPE
- `name`: `Adc_ConfigType`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 28, 32, 35, 43]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Adc_ConfigType ......................................................................................................................................... 28"]
- `aliases`: ["Adc ConfigType", "Adc_ConfigType()"]

### API-ADC-CONVERSIONTIMETYPE
- `name`: `Adc_ConversionTimeType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint16 Adc_ConversionTimeType"]
- `aliases`: ["Adc ConversionTimeType", "Adc_ConversionTimeType()"]

### API-ADC-DEINIT
- `name`: `Adc_DeInit`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 14, 19, 32, 35, 43, 73]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: The ADC module’s environment shall not call the function Adc_DeInit while any group is not"]
- `aliases`: ["Adc DeInit", "Adc_DeInit()"]

### API-ADC-DEINIT-P0043
- `name`: `Adc_Deinit`
- `type`: `api_or_function`
- `primary_page`: `43`
- `physical_pages`: [43]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p43: sd Adc_Deinit()"]
- `aliases`: ["Adc Deinit", "Adc_Deinit()"]

### API-ADC-DISABLEGROUPNOTIFICATION
- `name`: `Adc_DisableGroupNotification`
- `type`: `api_or_function`
- `primary_page`: `11`
- `physical_pages`: [11, 14, 34, 46, 47]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p11: Service name: Adc_DisableGroupNotification"]
- `aliases`: ["Adc DisableGroupNotification", "Adc_DisableGroupNotification()"]

### API-ADC-DISABLEHARDWARETRIGGER
- `name`: `Adc_DisableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10, 14, 17, 33, 36, 46, 74]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Service name: Adc_DisableHardwareTrigger"]
- `aliases`: ["Adc DisableHardwareTrigger", "Adc_DisableHardwareTrigger()"]

### API-ADC-ENABLEGROUPNOTIFICATION
- `name`: `Adc_EnableGroupNotification`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10, 14, 34, 45, 46, 47, 48, 49, 50]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Service name: Adc_EnableGroupNotification"]
- `aliases`: ["Adc EnableGroupNotification", "Adc_EnableGroupNotification()"]

### API-ADC-ENABLEHARDWARETRIGGER
- `name`: `Adc_EnableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 10, 13, 14, 17, 33, 36, 46, 47, 48, 74]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Service name: Adc_EnableHardwareTrigger"]
- `aliases`: ["Adc EnableHardwareTrigger", "Adc_EnableHardwareTrigger()"]

### API-ADC-GETCURRENTPOWERSTATE
- `name`: `Adc_GetCurrentPowerState`
- `type`: `api_or_function`
- `primary_page`: `6`
- `physical_pages`: [6, 15, 76]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p6: Adc_GetCurrentPowerState,"]
- `aliases`: ["Adc GetCurrentPowerState", "Adc_GetCurrentPowerState()"]

### API-ADC-GETGROUPSTATUS
- `name`: `Adc_GetGroupStatus`
- `type`: `api_or_function`
- `primary_page`: `11`
- `physical_pages`: [11, 14, 34, 36, 44, 47]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p11: read by checking the return value of Adc_GetGroupStatus."]
- `aliases`: ["Adc GetGroupStatus", "Adc_GetGroupStatus()"]

### API-ADC-GETSTREAMLASTPOINTER
- `name`: `Adc_GetStreamLastPointer`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14, 34]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: API service ID for Adc_GetStreamLastPointer function."]
- `aliases`: ["Adc GetStreamLastPointer", "Adc_GetStreamLastPointer()"]

### API-ADC-GETTARGETPOWERSTATE
- `name`: `Adc_GetTargetPowerState`
- `type`: `api_or_function`
- `primary_page`: `6`
- `physical_pages`: [6, 15, 76]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p6: Adc_GetTargetPowerState shall be generated and shall be used to manage and get"]
- `aliases`: ["Adc GetTargetPowerState", "Adc_GetTargetPowerState()"]

### API-ADC-GETVERSIONINFO
- `name`: `Adc_GetVersionInfo`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14, 19, 34, 74, 75]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: API service ID for Adc_GetVersionInfo function."]
- `aliases`: ["Adc GetVersionInfo", "Adc_GetVersionInfo()"]

### API-ADC-GROUPACCESSMODETYPE
- `name`: `Adc_GroupAccessModeType`
- `type`: `api_or_function`
- `primary_page`: `20`
- `physical_pages`: [20, 29]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p20: Adc_GroupAccessModeType"]
- `aliases`: ["Adc GroupAccessModeType", "Adc_GroupAccessModeType()"]

### API-ADC-GROUPCONFIGURATIONTYPE
- `name`: `Adc_GroupConfigurationType`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 28, 29, 41]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Adc_GroupConfigurationType .................................................................................................................. 29"]
- `aliases`: ["Adc GroupConfigurationType", "Adc_GroupConfigurationType()"]

### API-ADC-GROUPCONVERSIONSTATETYPE
- `name`: `Adc_GroupConversionStateType`
- `type`: `api_or_function`
- `primary_page`: `20`
- `physical_pages`: [20, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p20: Adc_GroupConversionStateType"]
- `aliases`: ["Adc GroupConversionStateType", "Adc_GroupConversionStateType()"]

### API-ADC-GROUPCONVMODETYPE
- `name`: `Adc_GroupConvModeType`
- `type`: `api_or_function`
- `primary_page`: `21`
- `physical_pages`: [21, 29]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p21: Adc_GroupConvModeType"]
- `aliases`: ["Adc GroupConvModeType", "Adc_GroupConvModeType()"]

### API-ADC-GROUPDEFTYPE
- `name`: `Adc_GroupDefType`
- `type`: `api_or_function`
- `primary_page`: `8`
- `physical_pages`: [8, 27, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p8: Name: Adc_GroupDefType"]
- `aliases`: ["Adc GroupDefType", "Adc_GroupDefType()"]

### API-ADC-GROUPPRIORITYTYPE
- `name`: `Adc_GroupPriorityType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27, 29]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint8 Adc_GroupPriorityType"]
- `aliases`: ["Adc GroupPriorityType", "Adc_GroupPriorityType()"]

### API-ADC-GROUPREPLACEMENTTYPE
- `name`: `Adc_GroupReplacementType`
- `type`: `api_or_function`
- `primary_page`: `21`
- `physical_pages`: [21, 29]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p21: Adc_GroupReplacementType"]
- `aliases`: ["Adc GroupReplacementType", "Adc_GroupReplacementType()"]

### API-ADC-GROUPSTATUSTYPE
- `name`: `Adc_GroupStatusType`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 31]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Adc_GroupStatusType ............................................................................................................................... 31"]
- `aliases`: ["Adc GroupStatusType", "Adc_GroupStatusType()"]

### API-ADC-GROUPTYPE
- `name`: `Adc_GroupType`
- `type`: `api_or_function`
- `primary_page`: `8`
- `physical_pages`: [8, 9, 10, 11, 27, 28, 29, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 44, 45, 46, 47, 48, 50]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p8: Adc_GroupType Group,"]
- `aliases`: ["Adc GroupType", "Adc_GroupType()"]

### API-ADC-HL-DEINIT
- `name`: `Adc_HL_DeInit`
- `type`: `api_or_function`
- `primary_page`: `35`
- `physical_pages`: [35, 38]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p35: void Adc_HL_DeInit (const uint8 CoreId)"]
- `aliases`: ["Adc HL DeInit", "Adc_HL_DeInit()"]

### API-ADC-HL-DISABLEHARDWARETRIGGER
- `name`: `Adc_HL_DisableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `36`
- `physical_pages`: [36, 38]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p36: void Adc_HL_DisableHardwareTrigger (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8"]
- `aliases`: ["Adc HL DisableHardwareTrigger", "Adc_HL_DisableHardwareTrigger()"]

### API-ADC-HL-ENABLEHARDWARETRIGGER
- `name`: `Adc_HL_EnableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `36`
- `physical_pages`: [36, 38]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p36: void Adc_HL_EnableHardwareTrigger (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8"]
- `aliases`: ["Adc HL EnableHardwareTrigger", "Adc_HL_EnableHardwareTrigger()"]

### API-ADC-HL-ENDPARTIALCONVERSION
- `name`: `Adc_HL_EndPartialConversion`
- `type`: `api_or_function`
- `primary_page`: `37`
- `physical_pages`: [37, 39, 40]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p37: void Adc_HL_EndPartialConversion(const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8"]
- `aliases`: ["Adc HL EndPartialConversion", "Adc_HL_EndPartialConversion()"]

### API-ADC-HL-INIT
- `name`: `Adc_HL_Init`
- `type`: `api_or_function`
- `primary_page`: `35`
- `physical_pages`: [35, 37]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p35: void Adc_HL_Init (const Adc_ConfigType * pCfgPtr)"]
- `aliases`: ["Adc HL Init", "Adc_HL_Init()"]

### API-ADC-HL-READGROUP
- `name`: `Adc_HL_ReadGroup`
- `type`: `api_or_function`
- `primary_page`: `37`
- `physical_pages`: [37]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p37: Std_ReturnType Adc_HL_ReadGroup (const Adc_GroupType Group, const uint8 CoreId, Adc_ValueGroupType *"]
- `aliases`: ["Adc HL ReadGroup", "Adc_HL_ReadGroup()"]

### API-ADC-HL-STARTCONVERSION
- `name`: `Adc_HL_StartConversion`
- `type`: `api_or_function`
- `primary_page`: `35`
- `physical_pages`: [35, 39, 40]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p35: void Adc_HL_StartConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)"]
- `aliases`: ["Adc HL StartConversion", "Adc_HL_StartConversion()"]

### API-ADC-HL-STOPCONVERSION
- `name`: `Adc_HL_StopConversion`
- `type`: `api_or_function`
- `primary_page`: `35`
- `physical_pages`: [35, 39, 40]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p35: void Adc_HL_StopConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)"]
- `aliases`: ["Adc HL StopConversion", "Adc_HL_StopConversion()"]

### API-ADC-HL-UPDATEGROUPSTATUSWITHOUTINTERRUPT
- `name`: `Adc_HL_UpdateGroupStatusWithoutInterrupt`
- `type`: `api_or_function`
- `primary_page`: `36`
- `physical_pages`: [36, 40]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p36: void Adc_HL_UpdateGroupStatusWithoutInterrupt (const Adc_GroupType Group, const uint8 CoreId)"]
- `aliases`: ["Adc HL UpdateGroupStatusWithoutInterrupt", "Adc_HL_UpdateGroupStatusWithoutInterrupt()"]

### API-ADC-HL-UPDATESTATUSGETDATA
- `name`: `Adc_HL_UpdateStatusGetData`
- `type`: `api_or_function`
- `primary_page`: `38`
- `physical_pages`: [38]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p38: Adc_HL_UpdateStatusGetData(), Adc_LL_EnableHardwareTrigger()"]
- `aliases`: ["Adc HL UpdateStatusGetData", "Adc_HL_UpdateStatusGetData()"]

### API-ADC-HL-UPDATESWQUEUE
- `name`: `Adc_HL_UpdateSwQueue`
- `type`: `api_or_function`
- `primary_page`: `39`
- `physical_pages`: [39, 40]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p39: Adc_HL_StartConversion(), Adc_HL_StopConversion(), Adc_HL_UpdateSwQueue()"]
- `aliases`: ["Adc HL UpdateSwQueue", "Adc_HL_UpdateSwQueue()"]

### API-ADC-HW
- `name`: `Adc_Hw`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 35]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Enumerations in Adc_Hw_Types.h ........................................................................................................... 23"]
- `aliases`: ["Adc Hw", "Adc_Hw()"]

### API-ADC-HW-TRIGGERED-CONTINUOUS-WITH-NOTIFICATION
- `name`: `Adc_HW_triggered_continuous_with_notification`
- `type`: `api_or_function`
- `primary_page`: `46`
- `physical_pages`: [46]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p46: sd Adc_HW_triggered_continuous_with_notification"]
- `aliases`: ["Adc HW triggered continuous with notification", "Adc_HW_triggered_continuous_with_notification()"]

### API-ADC-HW-TRIGGERED-ONESHOT-LINEAR-STREAMING
- `name`: `Adc_HW_triggered_oneshot_linear_streaming`
- `type`: `api_or_function`
- `primary_page`: `47`
- `physical_pages`: [47]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p47: sd Adc_HW_triggered_oneshot_linear_streaming"]
- `aliases`: ["Adc HW triggered oneshot linear streaming", "Adc_HW_triggered_oneshot_linear_streaming()"]

### API-ADC-HW-TYPES
- `name`: `Adc_Hw_Types`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 23]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Enumerations in Adc_Hw_Types.h ........................................................................................................... 23"]
- `aliases`: ["Adc Hw Types", "Adc_Hw_Types()"]

### API-ADC-HWTRIGGERINGTYPE
- `name`: `Adc_HwTriggeringType`
- `type`: `api_or_function`
- `primary_page`: `22`
- `physical_pages`: [22, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p22: Adc_HwTriggeringType"]
- `aliases`: ["Adc HwTriggeringType", "Adc_HwTriggeringType()"]

### API-ADC-HWTRIGGERSIGNALTYPE
- `name`: `Adc_HwTriggerSignalType`
- `type`: `api_or_function`
- `primary_page`: `22`
- `physical_pages`: [22, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p22: Adc_HwTriggerSignalType"]
- `aliases`: ["Adc HwTriggerSignalType", "Adc_HwTriggerSignalType()"]

### API-ADC-HWTRIGGERTIMERTYPE
- `name`: `Adc_HwTriggerTimerType`
- `type`: `api_or_function`
- `primary_page`: `28`
- `physical_pages`: [28]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p28: typedef uint16 Adc_HwTriggerTimerType"]
- `aliases`: ["Adc HwTriggerTimerType", "Adc_HwTriggerTimerType()"]

### API-ADC-HWUNITCONFIGURATIONTYPE
- `name`: `Adc_HwUnitConfigurationType`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 28, 29, 37]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Adc_HwUnitConfigurationType ................................................................................................................ 29"]
- `aliases`: ["Adc HwUnitConfigurationType", "Adc_HwUnitConfigurationType()"]

### API-ADC-HWUNITTYPE
- `name`: `Adc_HwUnitType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27, 28, 29, 35, 36, 37, 38, 39, 40, 41, 42]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint8 Adc_HwUnitType"]
- `aliases`: ["Adc HwUnitType", "Adc_HwUnitType()"]

### API-ADC-INIT
- `name`: `Adc_Init`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14, 32, 35, 43, 82]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: API service ID for Adc_Init function."]
- `aliases`: ["Adc Init", "Adc_Init()"]

### API-ADC-ISR-ENDGROUPCONVERSION
- `name`: `Adc_ISR_EndGroupConversion`
- `type`: `api_or_function`
- `primary_page`: `37`
- `physical_pages`: [37, 40]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p37: Adc_ISR_EndGroupConversion()"]
- `aliases`: ["Adc ISR EndGroupConversion", "Adc_ISR_EndGroupConversion()"]

### API-ADC-LL-CHECKCONVERSIONSEQUENCESTATUS
- `name`: `Adc_LL_CheckConversionSequenceStatus`
- `type`: `api_or_function`
- `primary_page`: `40`
- `physical_pages`: [40]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p40: Std_ReturnType Adc_LL_CheckConversionSequenceStatus (const Adc_HwUnitType Unit, const Adc_GroupType"]
- `aliases`: ["Adc LL CheckConversionSequenceStatus", "Adc_LL_CheckConversionSequenceStatus()"]

### API-ADC-LL-CONFIGUREPARTIALCONVERSION
- `name`: `Adc_LL_ConfigurePartialConversion`
- `type`: `api_or_function`
- `primary_page`: `39`
- `physical_pages`: [39, 42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p39: void Adc_LL_ConfigurePartialConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group, const"]
- `aliases`: ["Adc LL ConfigurePartialConversion", "Adc_LL_ConfigurePartialConversion()"]

### API-ADC-LL-DEINITUNITHARDWARE
- `name`: `Adc_LL_DeInitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `37`
- `physical_pages`: [37, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p37: Adc_LL_DeInitUnitHardware (const Adc_HwUnitType Unit, const uint8 CoreId)"]
- `aliases`: ["Adc LL DeInitUnitHardware", "Adc_LL_DeInitUnitHardware()"]

### API-ADC-LL-DISABLEHARDWARETRIGGER
- `name`: `Adc_LL_DisableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `38`
- `physical_pages`: [38]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p38: void Adc_LL_DisableHardwareTrigger (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8"]
- `aliases`: ["Adc LL DisableHardwareTrigger", "Adc_LL_DisableHardwareTrigger()"]

### API-ADC-LL-ENABLEHARDWARETRIGGER
- `name`: `Adc_LL_EnableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `38`
- `physical_pages`: [38]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p38: Adc_HL_UpdateStatusGetData(), Adc_LL_EnableHardwareTrigger()"]
- `aliases`: ["Adc LL EnableHardwareTrigger", "Adc_LL_EnableHardwareTrigger()"]

### API-ADC-LL-GETCONVERSIONSEQUENCERESULTS
- `name`: `Adc_LL_GetConversionSequenceResults`
- `type`: `api_or_function`
- `primary_page`: `40`
- `physical_pages`: [40]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p40: Std_ReturnType Adc_LL_GetConversionSequenceResults (const Adc_HwUnitType Unit, const Adc_GroupType"]
- `aliases`: ["Adc LL GetConversionSequenceResults", "Adc_LL_GetConversionSequenceResults()"]

### API-ADC-LL-INITUNITHARDWARE
- `name`: `Adc_LL_InitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `37`
- `physical_pages`: [37, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p37: void Adc_LL_InitUnitHardware (const Adc_HwUnitType Unit, const Adc_HwUnitConfigurationType * pConfigPtr)"]
- `aliases`: ["Adc LL InitUnitHardware", "Adc_LL_InitUnitHardware()"]

### API-ADC-LL-RECONFIGUREDMA
- `name`: `Adc_LL_ReConfigureDma`
- `type`: `api_or_function`
- `primary_page`: `41`
- `physical_pages`: [41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p41: void Adc_LL_ReConfigureDma (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8 CoreId)"]
- `aliases`: ["Adc LL ReConfigureDma", "Adc_LL_ReConfigureDma()"]

### API-ADC-LL-RESTARTCONTINUOUSCONVERSION
- `name`: `Adc_LL_RestartContinuousConversion`
- `type`: `api_or_function`
- `primary_page`: `39`
- `physical_pages`: [39, 40, 42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p39: Adc_LL_RestartContinuousConversion()"]
- `aliases`: ["Adc LL RestartContinuousConversion", "Adc_LL_RestartContinuousConversion()"]

### API-ADC-LL-STARTHWTRIGCONVERSION
- `name`: `Adc_LL_StartHwTrigConversion`
- `type`: `api_or_function`
- `primary_page`: `38`
- `physical_pages`: [38, 39]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p38: void Adc_LL_StartHwTrigConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group, const uint8"]
- `aliases`: ["Adc LL StartHwTrigConversion", "Adc_LL_StartHwTrigConversion()"]

### API-ADC-LL-STARTNORMALCONVERSION
- `name`: `Adc_LL_StartNormalConversion`
- `type`: `api_or_function`
- `primary_page`: `39`
- `physical_pages`: [39, 42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p39: void Adc_LL_StartNormalConversion (const Adc_HwUnitType Unit, const uint8 CoreId)"]
- `aliases`: ["Adc LL StartNormalConversion", "Adc_LL_StartNormalConversion()"]

### API-ADC-LL-STOPCONVERSIONCHECKTIMEOUT
- `name`: `Adc_LL_StopConversionCheckTimeout`
- `type`: `api_or_function`
- `primary_page`: `42`
- `physical_pages`: [42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p42: Adc_LL_StopConversionCheckTimeout()"]
- `aliases`: ["Adc LL StopConversionCheckTimeout", "Adc_LL_StopConversionCheckTimeout()"]

### API-ADC-LL-STOPCURRENTCONVERSION
- `name`: `Adc_LL_StopCurrentConversion`
- `type`: `api_or_function`
- `primary_page`: `39`
- `physical_pages`: [39]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p39: void Adc_LL_StopCurrentConversion (const Adc_HwUnitType Unit, const Adc_GroupType Group)"]
- `aliases`: ["Adc LL StopCurrentConversion", "Adc_LL_StopCurrentConversion()"]

### API-ADC-LL-WAITCONVERSIONSTOPPED
- `name`: `Adc_LL_WaitConversionStopped`
- `type`: `api_or_function`
- `primary_page`: `39`
- `physical_pages`: [39]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p39: Std_ReturnType Adc_LL_WaitConversionStopped (const Adc_HwUnitType Unit)"]
- `aliases`: ["Adc LL WaitConversionStopped", "Adc_LL_WaitConversionStopped()"]

### API-ADC-LLD
- `name`: `Adc_Lld`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 37]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Functions in Adc_Lld.h .............................................................................................................................. 37"]
- `aliases`: ["Adc Lld", "Adc_Lld()"]

### API-ADC-MAIN-POWERTRANSITIONMANAGER
- `name`: `Adc_Main_PowerTransitionManager`
- `type`: `api_or_function`
- `primary_page`: `76`
- `physical_pages`: [76]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p76: Adc_Main_PowerTransitionManager), indicating if the HW offers low power state management. This"]
- `aliases`: ["Adc Main PowerTransitionManager", "Adc_Main_PowerTransitionManager()"]

### API-ADC-MEMMAP
- `name`: `Adc_MemMap`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_MemMap.h"]
- `aliases`: ["Adc MemMap", "Adc_MemMap()"]

### API-ADC-NOTIFICATION-GROUP-1
- `name`: `Adc_Notification_Group_1`
- `type`: `api_or_function`
- `primary_page`: `45`
- `physical_pages`: [45, 46, 47, 48, 49, 50]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p45: Adc_Notification_Group_1()"]
- `aliases`: ["Adc Notification Group 1", "Adc_Notification_Group_1()"]

### API-ADC-NOTIFICATION-GROUP-2
- `name`: `Adc_Notification_Group_2`
- `type`: `api_or_function`
- `primary_page`: `49`
- `physical_pages`: [49, 50]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p49: Adc_Notification_Group_2()"]
- `aliases`: ["Adc Notification Group 2", "Adc_Notification_Group_2()"]

### API-ADC-NOTIFICATIONTYPE
- `name`: `Adc_NotificationType`
- `type`: `api_or_function`
- `primary_page`: `22`
- `physical_pages`: [22, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p22: Adc_NotificationType"]
- `aliases`: ["Adc NotificationType", "Adc_NotificationType()"]

### API-ADC-NOTIFYTYPE
- `name`: `Adc_NotifyType`
- `type`: `api_or_function`
- `primary_page`: `26`
- `physical_pages`: [26, 29, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p26: typedef void (*Adc_NotifyType)(void)"]
- `aliases`: ["Adc NotifyType", "Adc_NotifyType()"]

### API-ADC-ONESHOTUSAGE
- `name`: `Adc_OneShotUsage`
- `type`: `api_or_function`
- `primary_page`: `44`
- `physical_pages`: [44]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p44: sd Adc_OneShotUsage"]
- `aliases`: ["Adc OneShotUsage", "Adc_OneShotUsage()"]

### API-ADC-OVRMODETYPE
- `name`: `Adc_OvrModeType`
- `type`: `api_or_function`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p24: Adc_OvrModeType"]
- `aliases`: ["Adc OvrModeType", "Adc_OvrModeType()"]

### API-ADC-POWERSTATEREQUESTRESULTTYPE
- `name`: `Adc_PowerStateRequestResultType`
- `type`: `api_or_function`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p8: Name: Adc_PowerStateRequestResultType"]
- `aliases`: ["Adc PowerStateRequestResultType", "Adc_PowerStateRequestResultType()"]

### API-ADC-PREPAREPOWERSTATE
- `name`: `Adc_PreparePowerState`
- `type`: `api_or_function`
- `primary_page`: `6`
- `physical_pages`: [6, 7, 15, 76]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p6: Adc_PreparePowerState,"]
- `aliases`: ["Adc PreparePowerState", "Adc_PreparePowerState()"]

### API-ADC-PREPAREPOWERTSTATE
- `name`: `Adc_PreparePowertState`
- `type`: `api_or_function`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p7: After preparation for a power state is achieved by API Adc_PreparePowertState then the API"]
- `aliases`: ["Adc PreparePowertState", "Adc_PreparePowertState()"]

### API-ADC-PRESCALETYPE
- `name`: `Adc_PrescaleType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27, 29]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint8 Adc_PrescaleType"]
- `aliases`: ["Adc PrescaleType", "Adc_PrescaleType()"]

### API-ADC-PRETRIGGERSELTYPE
- `name`: `Adc_PreTriggerSelType`
- `type`: `api_or_function`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p24: Adc_PreTriggerSelType"]
- `aliases`: ["Adc PreTriggerSelType", "Adc_PreTriggerSelType()"]

### API-ADC-PTIMER-CHANNELSEQERR
- `name`: `Adc_Ptimer_ChannelSeqErr`
- `type`: `api_or_function`
- `primary_page`: `41`
- `physical_pages`: [41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p41: Adc_Ptimer_ChannelSeqErr()"]
- `aliases`: ["Adc Ptimer ChannelSeqErr", "Adc_Ptimer_ChannelSeqErr()"]

### API-ADC-PTIMER-CONFIGUREPARTIALCONVERSION
- `name`: `Adc_Ptimer_ConfigurePartialConversion`
- `type`: `api_or_function`
- `primary_page`: `41`
- `physical_pages`: [41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p41: void Adc_Ptimer_ConfigurePartialConversion (Adc_HwUnitType Unit, const Adc_GroupConfigurationType"]
- `aliases`: ["Adc Ptimer ConfigurePartialConversion", "Adc_Ptimer_ConfigurePartialConversion()"]

### API-ADC-PTIMER-DEINITUNITHARDWARE
- `name`: `Adc_Ptimer_DeInitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `41`
- `physical_pages`: [41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p41: void Adc_Ptimer_DeInitUnitHardware (Adc_HwUnitType Unit)"]
- `aliases`: ["Adc Ptimer DeInitUnitHardware", "Adc_Ptimer_DeInitUnitHardware()"]

### API-ADC-PTIMER-HW
- `name`: `Adc_Ptimer_Hw`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 41]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Enumerations in Adc_Ptimer_Hw_Types.h ............................................................................................. 25"]
- `aliases`: ["Adc Ptimer Hw", "Adc_Ptimer_Hw()"]

### API-ADC-PTIMER-HW-TYPES
- `name`: `Adc_Ptimer_Hw_Types`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 25]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Enumerations in Adc_Ptimer_Hw_Types.h ............................................................................................. 25"]
- `aliases`: ["Adc Ptimer Hw Types", "Adc_Ptimer_Hw_Types()"]

### API-ADC-PTIMER-INITUNITHARDWARE
- `name`: `Adc_Ptimer_InitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `41`
- `physical_pages`: [41]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p41: void Adc_Ptimer_InitUnitHardware (Adc_HwUnitType Unit, uint32 u32PtimerClockConfig)"]
- `aliases`: ["Adc Ptimer InitUnitHardware", "Adc_Ptimer_InitUnitHardware()"]

### API-ADC-PTIMER-SETPTIMERMODE
- `name`: `Adc_Ptimer_SetPtimerMode`
- `type`: `api_or_function`
- `primary_page`: `42`
- `physical_pages`: [42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p42: void Adc_Ptimer_SetPtimerMode (Adc_HwUnitType Unit, boolean bContinuous)"]
- `aliases`: ["Adc Ptimer SetPtimerMode", "Adc_Ptimer_SetPtimerMode()"]

### API-ADC-PTIMER-STARTSOFTWARECONVERSION
- `name`: `Adc_Ptimer_StartSoftwareConversion`
- `type`: `api_or_function`
- `primary_page`: `42`
- `physical_pages`: [42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p42: void Adc_Ptimer_StartSoftwareConversion (Adc_HwUnitType Unit)"]
- `aliases`: ["Adc Ptimer StartSoftwareConversion", "Adc_Ptimer_StartSoftwareConversion()"]

### API-ADC-PTIMER-STOPCONVERSION
- `name`: `Adc_Ptimer_StopConversion`
- `type`: `api_or_function`
- `primary_page`: `42`
- `physical_pages`: [42]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p42: void Adc_Ptimer_StopConversion (Adc_HwUnitType Unit)"]
- `aliases`: ["Adc Ptimer StopConversion", "Adc_Ptimer_StopConversion()"]

### API-ADC-QUEUEINDEXTYPE
- `name`: `Adc_QueueIndexType`
- `type`: `api_or_function`
- `primary_page`: `20`
- `physical_pages`: [20, 27, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p20: Maximum boundary for the Adc_QueueIndexType."]
- `aliases`: ["Adc QueueIndexType", "Adc_QueueIndexType()"]

### API-ADC-READGROUP
- `name`: `Adc_ReadGroup`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14, 19, 33, 37, 44, 45, 46, 74]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: API service ID for Adc_ReadGroup function."]
- `aliases`: ["Adc ReadGroup", "Adc_ReadGroup()"]

### API-ADC-REFTYPE
- `name`: `Adc_RefType`
- `type`: `api_or_function`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p24: Adc_RefType"]
- `aliases`: ["Adc RefType", "Adc_RefType()"]

### API-ADC-REG
- `name`: `Adc_Reg`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_Reg.h"]
- `aliases`: ["Adc Reg", "Adc_Reg()"]

### API-ADC-RESOLUTIONTYPE
- `name`: `Adc_ResolutionType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27, 29, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint8 Adc_ResolutionType"]
- `aliases`: ["Adc ResolutionType", "Adc_ResolutionType()"]

### API-ADC-SAMPLETIMEOPTTYPE
- `name`: `Adc_SampleTimeOptType`
- `type`: `api_or_function`
- `primary_page`: `28`
- `physical_pages`: [28, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p28: typedef uint8 Adc_SampleTimeOptType"]
- `aliases`: ["Adc SampleTimeOptType", "Adc_SampleTimeOptType()"]

### API-ADC-SAMPLINGTIMETYPE
- `name`: `Adc_SamplingTimeType`
- `type`: `api_or_function`
- `primary_page`: `28`
- `physical_pages`: [28]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p28: typedef uint8 Adc_SamplingTimeType"]
- `aliases`: ["Adc SamplingTimeType", "Adc_SamplingTimeType()"]

### API-ADC-SEQMODETYPE
- `name`: `Adc_SeqModeType`
- `type`: `api_or_function`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p23: Adc_SeqModeType"]
- `aliases`: ["Adc SeqModeType", "Adc_SeqModeType()"]

### API-ADC-SETPOWERSTATE
- `name`: `Adc_SetPowerState`
- `type`: `api_or_function`
- `primary_page`: `6`
- `physical_pages`: [6, 7, 15, 76]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p6: Adc_SetPowerState,"]
- `aliases`: ["Adc SetPowerState", "Adc_SetPowerState()"]

### API-ADC-SETUPRESULTBUFFER
- `name`: `Adc_SetupResultBuffer`
- `type`: `api_or_function`
- `primary_page`: `8`
- `physical_pages`: [8, 9, 14, 32]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p8: Service name: Adc_SetupResultBuffer"]
- `aliases`: ["Adc SetupResultBuffer", "Adc_SetupResultBuffer()"]

### API-ADC-STARTGROUPCONVERSION
- `name`: `Adc_StartGroupConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 13, 14, 19, 32, 35, 44, 45, 48, 49, 50, 74]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: The ADC module’s environment shall only call Adc_StartGroupConversion for groups"]
- `aliases`: ["Adc StartGroupConversion", "Adc_StartGroupConversion()"]

### API-ADC-STATUSTYPE
- `name`: `Adc_StatusType`
- `type`: `api_or_function`
- `primary_page`: `21`
- `physical_pages`: [21, 31, 34, 44]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p21: Adc_StatusType"]
- `aliases`: ["Adc StatusType", "Adc_StatusType()"]

### API-ADC-STOPGROUPCONVERSION
- `name`: `Adc_StopGroupConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 14, 19, 33, 36, 45, 74]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: The ADC module’s environment shall only call the function Adc_StopGroupConversion for"]
- `aliases`: ["Adc StopGroupConversion", "Adc_StopGroupConversion()"]

### API-ADC-STREAMBUFFERMODETYPE
- `name`: `Adc_StreamBufferModeType`
- `type`: `api_or_function`
- `primary_page`: `21`
- `physical_pages`: [21, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p21: Adc_StreamBufferModeType"]
- `aliases`: ["Adc StreamBufferModeType", "Adc_StreamBufferModeType()"]

### API-ADC-STREAMNUMSAMPLETYPE
- `name`: `Adc_StreamNumSampleType`
- `type`: `api_or_function`
- `primary_page`: `28`
- `physical_pages`: [28, 30, 31, 34]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p28: typedef uint16 Adc_StreamNumSampleType"]
- `aliases`: ["Adc StreamNumSampleType", "Adc_StreamNumSampleType()"]

### API-ADC-SW-QUEUE-PRIO-MECHANISM-HW-SW
- `name`: `Adc_SW_queue_prio_mechanism_HW_SW`
- `type`: `api_or_function`
- `primary_page`: `50`
- `physical_pages`: [50]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p50: sd Adc_SW_queue_prio_mechanism_HW_SW"]
- `aliases`: ["Adc SW queue prio mechanism HW SW", "Adc_SW_queue_prio_mechanism_HW_SW()"]

### API-ADC-SW-QUEUE-PRIO-MECHANISM-NONE-QUEUING-ON
- `name`: `Adc_SW_queue_prio_mechanism_NONE_queuing_ON`
- `type`: `api_or_function`
- `primary_page`: `49`
- `physical_pages`: [49]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p49: sd Adc_SW_queue_prio_mechanism_NONE_queuing_ON"]
- `aliases`: ["Adc SW queue prio mechanism NONE queuing ON", "Adc_SW_queue_prio_mechanism_NONE_queuing_ON()"]

### API-ADC-SW-TRIGGERED-CONTINUOUS-WITH-NOTIFICATIONS
- `name`: `Adc_SW_triggered_continuous_with_notifications`
- `type`: `api_or_function`
- `primary_page`: `45`
- `physical_pages`: [45]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p45: sd Adc_SW_triggered_continuous_with_notifications"]
- `aliases`: ["Adc SW triggered continuous with notifications", "Adc_SW_triggered_continuous_with_notifications()"]

### API-ADC-SWPRETRIGGERTYPE
- `name`: `Adc_SwPreTriggerType`
- `type`: `api_or_function`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p25: Adc_SwPreTriggerType"]
- `aliases`: ["Adc SwPreTriggerType", "Adc_SwPreTriggerType()"]

### API-ADC-TRANSFERTYPE
- `name`: `Adc_TransferType`
- `type`: `api_or_function`
- `primary_page`: `21`
- `physical_pages`: [21, 30]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p21: Adc_TransferType"]
- `aliases`: ["Adc TransferType", "Adc_TransferType()"]

### API-ADC-TRIGGERSELTYPE
- `name`: `Adc_TriggerSelType`
- `type`: `api_or_function`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p25: Adc_TriggerSelType"]
- `aliases`: ["Adc TriggerSelType", "Adc_TriggerSelType()"]

### API-ADC-TRIGGERSOURCETYPE
- `name`: `Adc_TriggerSourceType`
- `type`: `api_or_function`
- `primary_page`: `22`
- `physical_pages`: [22, 30, 39]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p22: Adc_TriggerSourceType"]
- `aliases`: ["Adc TriggerSourceType", "Adc_TriggerSourceType()"]

### API-ADC-TRIGMODETYPE
- `name`: `Adc_TrigModeType`
- `type`: `api_or_function`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p23: Adc_TrigModeType"]
- `aliases`: ["Adc TrigModeType", "Adc_TrigModeType()"]

### API-ADC-TRIGSRCTYPE
- `name`: `Adc_TrigSrcType`
- `type`: `api_or_function`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p24: Adc_TrigSrcType"]
- `aliases`: ["Adc TrigSrcType", "Adc_TrigSrcType()"]

### API-ADC-TYPES
- `name`: `Adc_Types`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 20, 26]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Enumerations in Adc_Types.h .................................................................................................................. 20"]
- `aliases`: ["Adc Types", "Adc_Types()"]

### API-ADC-UNITSTATUSTYPE
- `name`: `Adc_UnitStatusType`
- `type`: `api_or_function`
- `primary_page`: `3`
- `physical_pages`: [3, 31]
- `section_paths`: ["Table of Contents"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p3: Adc_UnitStatusType .................................................................................................................................. 31"]
- `aliases`: ["Adc UnitStatusType", "Adc_UnitStatusType()"]

### API-ADC-VALUEGROUPTYPE
- `name`: `Adc_ValueGroupType`
- `type`: `api_or_function`
- `primary_page`: `8`
- `physical_pages`: [8, 27, 31, 32, 33, 34, 37, 40, 44, 45, 46]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p8: Adc_ValueGroupType* DataBufferPtr"]
- `aliases`: ["Adc ValueGroupType", "Adc_ValueGroupType()"]

### API-ADC-VERSION
- `name`: `Adc_Version`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_Version.h"]
- `aliases`: ["Adc Version", "Adc_Version()"]

### API-ADC-VOLTAGESOURCETYPE
- `name`: `Adc_VoltageSourceType`
- `type`: `api_or_function`
- `primary_page`: `27`
- `physical_pages`: [27]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p27: typedef uint16 Adc_VoltageSourceType"]
- `aliases`: ["Adc VoltageSourceType", "Adc_VoltageSourceType()"]

### CFG-ADC-C
- `name`: `Adc.c`
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p12: Adc.c"]
- `aliases`: ["ADC .c"]

### CFG-ADC-H
- `name`: `Adc.h`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 32]
- `section_paths`: ["Table of Contents"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p3: Macros in Adc.h .......................................................................................................................................... 12"]
- `aliases`: ["ADC .h"]

### CFG-ADCALIGN
- `name`: `AdcAlign`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 57]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcAlign"]
- `aliases`: ["ADC Align"]

### CFG-ADCCHANNEL
- `name`: `AdcChannel`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 62, 70, 71]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannel"]
- `aliases`: ["ADC Channel"]

### CFG-ADCCHANNELCONVTIME
- `name`: `AdcChannelConvTime`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 64]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelConvTime"]
- `aliases`: ["ADC ChannelConvTime"]

### CFG-ADCCHANNELDELAY
- `name`: `AdcChannelDelay`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 69, 71]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelDelay"]
- `aliases`: ["ADC ChannelDelay"]

### CFG-ADCCHANNELHIGHLIMIT
- `name`: `AdcChannelHighLimit`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 63]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelHighLimit"]
- `aliases`: ["ADC ChannelHighLimit"]

### CFG-ADCCHANNELID
- `name`: `AdcChannelId`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 62]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelId"]
- `aliases`: ["ADC ChannelId"]

### CFG-ADCCHANNELLIMITCHECK
- `name`: `AdcChannelLimitCheck`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 63]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelLimitCheck"]
- `aliases`: ["ADC ChannelLimitCheck"]

### CFG-ADCCHANNELLOWLIMIT
- `name`: `AdcChannelLowLimit`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 63]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelLowLimit"]
- `aliases`: ["ADC ChannelLowLimit"]

### CFG-ADCCHANNELNAME
- `name`: `AdcChannelName`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 62]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelName"]
- `aliases`: ["ADC ChannelName"]

### CFG-ADCCHANNELRANGESELECT
- `name`: `AdcChannelRangeSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 63]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelRangeSelect"]
- `aliases`: ["ADC ChannelRangeSelect"]

### CFG-ADCCHANNELREFVOLTSRCHIGH
- `name`: `AdcChannelRefVoltsrcHigh`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 64]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelRefVoltsrcHigh"]
- `aliases`: ["ADC ChannelRefVoltsrcHigh"]

### CFG-ADCCHANNELREFVOLTSRCLOW
- `name`: `AdcChannelRefVoltsrcLow`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 64]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelRefVoltsrcLow"]
- `aliases`: ["ADC ChannelRefVoltsrcLow"]

### CFG-ADCCHANNELRESOLUTION
- `name`: `AdcChannelResolution`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 64]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelResolution"]
- `aliases`: ["ADC ChannelResolution"]

### CFG-ADCCHANNELS
- `name`: `AdcChannels`
- `type`: `config`
- `primary_page`: `70`
- `physical_pages`: [70]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p70: Assignment of AdcChannels to a AdcGroups. For each AdcChannel that should belong to the group, a"]
- `aliases`: ["ADC Channels"]

### CFG-ADCCHANNELSAMPTIME
- `name`: `AdcChannelSampTime`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 65]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelSampTimeOption"]
- `aliases`: ["ADC ChannelSampTime"]

### CFG-ADCCHANNELSAMPTIMEOPTION
- `name`: `AdcChannelSampTimeOption`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 65]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcChannelSampTimeOption"]
- `aliases`: ["ADC ChannelSampTimeOption"]

### CFG-ADCCHANNELVALUESIGNED
- `name`: `AdcChannelValueSigned`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 79]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcChannelValueSigned"]
- `aliases`: ["ADC ChannelValueSigned"]

### CFG-ADCCLOCKREF
- `name`: `AdcClockRef`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 56]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcClockRef"]
- `aliases`: ["ADC ClockRef"]

### CFG-ADCCLOCKSOURCE
- `name`: `AdcClockSource`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 56]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcClockSource"]
- `aliases`: ["ADC ClockSource"]

### CFG-ADCCONF-ADCGROUP-ADCGROUP-0
- `name`: `AdcConf_AdcGroup_AdcGroup_0`
- `type`: `config`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p20: #define AdcConf_AdcGroup_AdcGroup_0 0"]
- `aliases`: ["ADC Conf_AdcGroup_AdcGroup_0"]

### CFG-ADCCONFIGSET
- `name`: `AdcConfigSet`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: [4, 51, 52, 55]
- `section_paths`: ["Table of Contents"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p4: AdcConfigSet .............................................................................................................................................. 52"]
- `aliases`: ["ADC ConfigSet"]

### CFG-ADCCONTINUOUSWITHOUTINTERRUPT
- `name`: `AdcContinuousWithoutInterrupt`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcContinuousWithoutInterrupt"]
- `aliases`: ["ADC ContinuousWithoutInterrupt"]

### CFG-ADCDEINITAPI
- `name`: `AdcDeInitApi`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 73]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcDeInitApi"]
- `aliases`: ["ADC DeInitApi"]

### CFG-ADCDELAYNEXTPTIMER
- `name`: `AdcDelayNextPtimer`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 69, 70]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcDelayNextPtimer"]
- `aliases`: ["ADC DelayNextPtimer"]

### CFG-ADCDEMEVENTPARAMETERREFS
- `name`: `AdcDemEventParameterRefs`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: [4, 51, 54, 83]
- `section_paths`: ["Table of Contents"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p4: AdcDemEventParameterRefs .................................................................................................................... 54"]
- `aliases`: ["ADC DemEventParameterRefs"]

### CFG-ADCDEVERRORDETECT
- `name`: `AdcDevErrorDetect`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 73]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcDevErrorDetect"]
- `aliases`: ["ADC DevErrorDetect"]

### CFG-ADCDISABLEDEMREPORTERRORSTATUS
- `name`: `AdcDisableDemReportErrorStatus`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 82]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcDisableDemReportErrorStatus"]
- `aliases`: ["ADC DisableDemReportErrorStatus"]

### CFG-ADCDMACHANNEL
- `name`: `AdcDmaChannel`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 57]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcDmaChannel"]
- `aliases`: ["ADC DmaChannel"]

### CFG-ADCDMATIMEOUT
- `name`: `AdcDmaTimeout`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 76]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcDmaTimeout"]
- `aliases`: ["ADC DmaTimeout"]

### CFG-ADCECUCPARTITIONREF
- `name`: `AdcEcucPartitionRef`
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: [11, 12, 71, 72, 77, 78]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p11: partitions referenced by AdcEcucPartitionRef."]
- `aliases`: ["ADC EcucPartitionRef"]

### CFG-ADCENABLEDMATRASFERMODE
- `name`: `AdcEnableDmaTrasferMode`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 82]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcEnableDmaTrasferMode"]
- `aliases`: ["ADC EnableDmaTrasferMode"]

### CFG-ADCENABLELIMITCHECK
- `name`: `AdcEnableLimitCheck`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 73]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcEnableLimitCheck"]
- `aliases`: ["ADC EnableLimitCheck"]

### CFG-ADCENABLEQUEUING
- `name`: `AdcEnableQueuing`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 73]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcEnableQueuing"]
- `aliases`: ["ADC EnableQueuing"]

### CFG-ADCENABLESTARTSTOPGROUPAPI
- `name`: `AdcEnableStartStopGroupApi`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 73]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcEnableStartStopGroupApi"]
- `aliases`: ["ADC EnableStartStopGroupApi"]

### CFG-ADCENABLEUSERMODESUPPORT
- `name`: `AdcEnableUserModeSupport`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 83]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcEnableUserModeSupport"]
- `aliases`: ["ADC EnableUserModeSupport"]

### CFG-ADCGENERAL
- `name`: `AdcGeneral`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: [4, 51, 53, 66, 72]
- `section_paths`: ["Table of Contents"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p4: AdcGeneral ................................................................................................................................................. 53"]
- `aliases`: ["ADC General"]

### CFG-ADCGROUP
- `name`: `AdcGroup`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 65, 66]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroup"]
- `aliases`: ["ADC Group"]

### CFG-ADCGROUPACCESSMODE
- `name`: `AdcGroupAccessMode`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 65]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupAccessMode"]
- `aliases`: ["ADC GroupAccessMode"]

### CFG-ADCGROUPCONVERSIONMODE
- `name`: `AdcGroupConversionMode`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 66]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupConversionMode"]
- `aliases`: ["ADC GroupConversionMode"]

### CFG-ADCGROUPDEFINITION
- `name`: `AdcGroupDefinition`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 70, 84]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupDefinition"]
- `aliases`: ["ADC GroupDefinition"]

### CFG-ADCGROUPECUCPARTITIONREF
- `name`: `AdcGroupEcucPartitionRef`
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: [12, 52, 53, 71]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p12: The ECUC partitions referenced by AdcGroupEcucPartitionRef shall be a subset of the ECUC"]
- `aliases`: ["ADC GroupEcucPartitionRef"]

### CFG-ADCGROUPFIRSTCHANNELFIXED
- `name`: `AdcGroupFirstChannelFixed`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 79]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcGroupFirstChannelFixed"]
- `aliases`: ["ADC GroupFirstChannelFixed"]

### CFG-ADCGROUPHARDWAREAVERAGEENABLE
- `name`: `AdcGroupHardwareAverageEnable`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 72]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupHardwareAverageEnable"]
- `aliases`: ["ADC GroupHardwareAverageEnable"]

### CFG-ADCGROUPHARDWAREAVERAGESELECT
- `name`: `AdcGroupHardwareAverageSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 72]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupHardwareAverageSelect"]
- `aliases`: ["ADC GroupHardwareAverageSelect"]

### CFG-ADCGROUPHARDWAREAVERAGESETTINGS
- `name`: `AdcGroupHardwareAverageSettings`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 71]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupHardwareAverageSettings"]
- `aliases`: ["ADC GroupHardwareAverageSettings"]

### CFG-ADCGROUPID
- `name`: `AdcGroupId`
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: [29, 52, 66]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p29: const Adc_GroupType AdcGroupId"]
- `aliases`: ["ADC GroupId"]

### CFG-ADCGROUPINBACKTOBACKMODE
- `name`: `AdcGroupInBacktoBackMode`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 68, 69]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupInBacktoBackMode"]
- `aliases`: ["ADC GroupInBacktoBackMode"]

### CFG-ADCGROUPPRIORITY
- `name`: `AdcGroupPriority`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 66]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupPriority"]
- `aliases`: ["ADC GroupPriority"]

### CFG-ADCGROUPREPLACEMENT
- `name`: `AdcGroupReplacement`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 66]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupReplacement"]
- `aliases`: ["ADC GroupReplacement"]

### CFG-ADCGROUPS
- `name`: `AdcGroups`
- `type`: `config`
- `primary_page`: `70`
- `physical_pages`: [70]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p70: Assignment of AdcChannels to a AdcGroups. For each AdcChannel that should belong to the group, a"]
- `aliases`: ["ADC Groups"]

### CFG-ADCGROUPTRIGGSRC
- `name`: `AdcGroupTriggSrc`
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: [10, 52, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p10: groups configured in hardware trigger mode (see AdcGroupTriggSrc)."]
- `aliases`: ["ADC GroupTriggSrc"]

### CFG-ADCGROUPUSESCHANNELDELAYS
- `name`: `AdcGroupUsesChannelDelays`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 69]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcGroupUsesChannelDelays"]
- `aliases`: ["ADC GroupUsesChannelDelays"]

### CFG-ADCGRPNOTIFCAPABILITY
- `name`: `AdcGrpNotifCapability`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 74]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcGrpNotifCapability"]
- `aliases`: ["ADC GrpNotifCapability"]

### CFG-ADCHARDWAREAVERAGEENABLE
- `name`: `AdcHardwareAverageEnable`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 61]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHardwareAverageEnable"]
- `aliases`: ["ADC HardwareAverageEnable"]

### CFG-ADCHARDWAREAVERAGEONCE
- `name`: `AdcHardwareAverageOnce`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 82]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcHardwareAverageOnce"]
- `aliases`: ["ADC HardwareAverageOnce"]

### CFG-ADCHARDWAREAVERAGESELECT
- `name`: `AdcHardwareAverageSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 61]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHardwareAverageSelect"]
- `aliases`: ["ADC HardwareAverageSelect"]

### CFG-ADCHARDWAREAVERAGESETTINGS
- `name`: `AdcHardwareAverageSettings`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 61]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHardwareAverageSettings"]
- `aliases`: ["ADC HardwareAverageSettings"]

### CFG-ADCHARDWAREUNITID
- `name`: `AdcHardwareUnitId`
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: [29]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p29: const Adc_HwUnitType AdcHardwareUnitId"]
- `aliases`: ["ADC HardwareUnitId"]

### CFG-ADCHWTRIGGERAPI
- `name`: `AdcHwTriggerApi`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 74]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcHwTriggerApi"]
- `aliases`: ["ADC HwTriggerApi"]

### CFG-ADCHWTRIGSIGNAL
- `name`: `AdcHwTrigSignal`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 67]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHwTrigSignal"]
- `aliases`: ["ADC HwTrigSignal"]

### CFG-ADCHWTRIGTIMER
- `name`: `AdcHwTrigTimer`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 67]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHwTrigTimer"]
- `aliases`: ["ADC HwTrigTimer"]

### CFG-ADCHWUNIT
- `name`: `AdcHwUnit`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 55, 65, 85]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHwUnit"]
- `aliases`: ["ADC HwUnit"]

### CFG-ADCHWUNITECUCPARTITIONREF
- `name`: `AdcHwUnitEcucPartitionRef`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 72]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHwUnitEcucPartitionRef"]
- `aliases`: ["ADC HwUnitEcucPartitionRef"]

### CFG-ADCHWUNITID
- `name`: `AdcHwUnitId`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 55]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcHwUnitId"]
- `aliases`: ["ADC HwUnitId"]

### CFG-ADCINTERRUPT
- `name`: `AdcInterrupt`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: [4, 51, 53, 78]
- `section_paths`: ["Table of Contents"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p4: AdcInterrupt ............................................................................................................................................... 53"]
- `aliases`: ["ADC Interrupt"]

### CFG-ADCINTERRUPTENABLE
- `name`: `AdcInterruptEnable`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 79]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcInterruptEnable"]
- `aliases`: ["ADC InterruptEnable"]

### CFG-ADCINTERRUPTSOURCE
- `name`: `AdcInterruptSource`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 78]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcInterruptSource"]
- `aliases`: ["ADC InterruptSource"]

### CFG-ADCISRPARTITIONMAPPINGCHECK
- `name`: `AdcIsrPartitionMappingCheck`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 82]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcIsrPartitionMappingCheck"]
- `aliases`: ["ADC IsrPartitionMappingCheck"]

### CFG-ADCKERNELECUCPARTITIONREF
- `name`: `AdcKernelEcucPartitionRef`
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: [11, 53, 78]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p11: The ECUC partitions referenced by AdcKernelEcucPartitionRef shall be a subset of the ECUC"]
- `aliases`: ["ADC KernelEcucPartitionRef"]

### CFG-ADCLOGICALCHANNELID
- `name`: `AdcLogicalChannelId`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 62]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcLogicalChannelId"]
- `aliases`: ["ADC LogicalChannelId"]

### CFG-ADCLOGICALUNITID
- `name`: `AdcLogicalUnitId`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 56]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcLogicalUnitId"]
- `aliases`: ["ADC LogicalUnitId"]

### CFG-ADCLOWPOWERSTATESSUPPORT
- `name`: `AdcLowPowerStatesSupport`
- `type`: `config`
- `primary_page`: `6`
- `physical_pages`: [6, 7, 53, 76, 77]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p6: configuration parameter AdcLowPowerStatesSupport is set to TRUE."]
- `aliases`: ["ADC LowPowerStatesSupport"]

### CFG-ADCMAXCHANNELRESOLUTION
- `name`: `AdcMaxChannelResolution`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 79]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcMaxChannelResolution"]
- `aliases`: ["ADC MaxChannelResolution"]

### CFG-ADCMULTICORESUPPORT
- `name`: `AdcMulticoreSupport`
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: [54, 82]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p54: AdcMulticoreSupport"]
- `aliases`: ["ADC MulticoreSupport"]

### CFG-ADCNOTIFICATION
- `name`: `AdcNotification`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcNotification"]
- `aliases`: ["ADC Notification"]

### CFG-ADCPOWERSTATE
- `name`: `AdcPowerState`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 77]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcPowerStateConfig"]
- `aliases`: ["ADC PowerState"]

### CFG-ADCPOWERSTATEASYNCHTRANSITIONMODE
- `name`: `AdcPowerStateAsynchTransitionMode`
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: [7, 53, 76]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p7: AdcPowerStateAsynchTransitionMode."]
- `aliases`: ["ADC PowerStateAsynchTransitionMode"]

### CFG-ADCPOWERSTATECONFIG
- `name`: `AdcPowerStateConfig`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 77]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcPowerStateConfig"]
- `aliases`: ["ADC PowerStateConfig"]

### CFG-ADCPOWERSTATEREADYCBKREF
- `name`: `AdcPowerStateReadyCbkRef`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 77]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcPowerStateReadyCbkRef"]
- `aliases`: ["ADC PowerStateReadyCbkRef"]

### CFG-ADCPRESCALE
- `name`: `AdcPrescale`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 56]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPrescale"]
- `aliases`: ["ADC Prescale"]

### CFG-ADCPRETRIGGERSELECT
- `name`: `AdcPreTriggerSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 58]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPreTriggerSelect"]
- `aliases`: ["ADC PreTriggerSelect"]

### CFG-ADCPRIORITYHW
- `name`: `AdcPriorityHw`
- `type`: `config`
- `primary_page`: `75`
- `physical_pages`: [75]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p75: hardware prioritization mechanism (AdcPriorityHw) uses the ADC hardware features for prioritization of"]
- `aliases`: ["ADC PriorityHw"]

### CFG-ADCPRIORITYHWSW
- `name`: `AdcPriorityHwSw`
- `type`: `config`
- `primary_page`: `75`
- `physical_pages`: [75]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.3 AdcGeneral"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p75: The mixed hardware and software prioritization mechanism (AdcPriorityHwSw) uses the ADC hardware"]
- `aliases`: ["ADC PriorityHwSw"]

### CFG-ADCPRIORITYIMPLEMENTATION
- `name`: `AdcPriorityImplementation`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 66, 73, 75]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcPriorityImplementation"]
- `aliases`: ["ADC PriorityImplementation"]

### CFG-ADCPRIORITYQUEUEMAXDEPTH
- `name`: `AdcPriorityQueueMaxDepth`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 76]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcPriorityQueueMaxDepth"]
- `aliases`: ["ADC PriorityQueueMaxDepth"]

### CFG-ADCPTIMERCHANNELSEQUENCEERRORENABLE
- `name`: `AdcPtimerChannelSequenceErrorEnable`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 61]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPtimerChannelSequenceErrorEnable"]
- `aliases`: ["ADC PtimerChannelSequenceErrorEnable"]

### CFG-ADCPTIMERERRORNOTIFICATION
- `name`: `AdcPtimerErrorNotification`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 61]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPtimerErrorNotification"]
- `aliases`: ["ADC PtimerErrorNotification"]

### CFG-ADCPTIMERMULTIPLICATIONFACTORSELECT
- `name`: `AdcPtimerMultiplicationFactorSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 60]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPtimerMultiplicationFactorSelect"]
- `aliases`: ["ADC PtimerMultiplicationFactorSelect"]

### CFG-ADCPTIMERPERIODCONTINUOUSMODE
- `name`: `AdcPtimerPeriodContinuousMode`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 70]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPtimerPeriodContinuousMode"]
- `aliases`: ["ADC PtimerPeriodContinuousMode"]

### CFG-ADCPTIMERPRESCALERDIVIDERSELECT
- `name`: `AdcPtimerPrescalerDividerSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 60]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPtimerPrescalerDividerSelect"]
- `aliases`: ["ADC PtimerPrescalerDividerSelect"]

### CFG-ADCPTIMERSETTINGS
- `name`: `AdcPtimerSettings`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 59]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcPtimerSettings"]
- `aliases`: ["ADC PtimerSettings"]

### CFG-ADCPUBLISHEDINFORMATION
- `name`: `AdcPublishedInformation`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: [4, 51, 54, 79]
- `section_paths`: ["Table of Contents"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p4: AdcPublishedInformation ......................................................................................................................... 54"]
- `aliases`: ["ADC PublishedInformation"]

### CFG-ADCREADGROUPAPI
- `name`: `AdcReadGroupApi`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 74]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcReadGroupApi"]
- `aliases`: ["ADC ReadGroupApi"]

### CFG-ADCRESOLUTION
- `name`: `AdcResolution`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 57, 65]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcResolution"]
- `aliases`: ["ADC Resolution"]

### CFG-ADCRESULTALIGNMENT
- `name`: `AdcResultAlignment`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 75]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcResultAlignment"]
- `aliases`: ["ADC ResultAlignment"]

### CFG-ADCSAMPLETIMEOPTION0
- `name`: `AdcSampleTimeOption0`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 58]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcSampleTimeOption0"]
- `aliases`: ["ADC SampleTimeOption0"]

### CFG-ADCSAMPLETIMEOPTION1
- `name`: `AdcSampleTimeOption1`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 59]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcSampleTimeOption1"]
- `aliases`: ["ADC SampleTimeOption1"]

### CFG-ADCSAMPLETIMEOPTION2
- `name`: `AdcSampleTimeOption2`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 59]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcSampleTimeOption2"]
- `aliases`: ["ADC SampleTimeOption2"]

### CFG-ADCSAMPLETIMEOPTION3
- `name`: `AdcSampleTimeOption3`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 59]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcSampleTimeOption3"]
- `aliases`: ["ADC SampleTimeOption3"]

### CFG-ADCSAMPLETIMEOPTIONS
- `name`: `AdcSampleTimeOptions`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 58, 65]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcSampleTimeOptions"]
- `aliases`: ["ADC SampleTimeOptions"]

### CFG-ADCSTARTUPCOUNTER
- `name`: `AdcStartupCounter`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 57]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcStartupCounter"]
- `aliases`: ["ADC StartupCounter"]

### CFG-ADCSTREAMINGBUFFERMODE
- `name`: `AdcStreamingBufferMode`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcStreamingBufferMode"]
- `aliases`: ["ADC StreamingBufferMode"]

### CFG-ADCSTREAMINGNUMSAMPLES
- `name`: `AdcStreamingNumSamples`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcStreamingNumSamples"]
- `aliases`: ["ADC StreamingNumSamples"]

### CFG-ADCTIMEOUT
- `name`: `AdcTimeout`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 75]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcTimeout"]
- `aliases`: ["ADC Timeout"]

### CFG-ADCTRANSFERTYPE
- `name`: `AdcTransferType`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcTransferType"]
- `aliases`: ["ADC TransferType"]

### CFG-ADCTRIGGERSELECT
- `name`: `AdcTriggerSelect`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 58]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcTriggerSelect"]
- `aliases`: ["ADC TriggerSelect"]

### CFG-ADCVERSIONINFOAPI
- `name`: `AdcVersionInfoApi`
- `type`: `config`
- `primary_page`: `53`
- `physical_pages`: [53, 74]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p53: AdcVersionInfoApi"]
- `aliases`: ["ADC VersionInfoApi"]

### CFG-ADCVOLTAGEREFERENCESELECTION
- `name`: `AdcVoltageReferenceSelection`
- `type`: `config`
- `primary_page`: `52`
- `physical_pages`: [52, 56]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p52: AdcVoltageReferenceSelection"]
- `aliases`: ["ADC VoltageReferenceSelection"]

### TYPE-ADCGROUPTYPE
- `name`: `AdcGroupType`
- `type`: `type`
- `primary_page`: `28`
- `physical_pages`: [28]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.6 Structures"]
- `brief`: C type, typedef, enumeration or structure type in the ADC driver documentation.
- `anchors`: ["p28: AdcGroupType *GroupIndex"]
- `aliases`: []

### TYPE-PTIMER-CLOCKPREDIVIDERTYPE
- `name`: `Ptimer_ClockPreDividerType`
- `type`: `type`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: C type, typedef, enumeration or structure type in the ADC driver documentation.
- `anchors`: ["p26: Ptimer_ClockPreDividerType"]
- `aliases`: []

### TYPE-PTIMER-CLOCKPREDIVMULTIPLYFACTORTYPE
- `name`: `Ptimer_ClockPreDivMultiplyFactorType`
- `type`: `type`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: C type, typedef, enumeration or structure type in the ADC driver documentation.
- `anchors`: ["p26: Ptimer_ClockPreDivMultiplyFactorType"]
- `aliases`: []

### TYPE-PTIMER-LOADVALUEMODETYPE
- `name`: `Ptimer_LoadValueModeType`
- `type`: `type`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: C type, typedef, enumeration or structure type in the ADC driver documentation.
- `anchors`: ["p25: Ptimer_LoadValueModeType"]
- `aliases`: []

### TYPE-PTIMER-TRGSRCTYPE
- `name`: `Ptimer_TrgSrcType`
- `type`: `type`
- `primary_page`: `26`
- `physical_pages`: [26, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: C type, typedef, enumeration or structure type in the ADC driver documentation.
- `anchors`: ["p26: Ptimer_TrgSrcType"]
- `aliases`: []

### ERR-ADC-E-ALREADY-INITIALIZED
- `name`: `ADC_E_ALREADY_INITIALIZED`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: #define ADC_E_ALREADY_INITIALIZED ((uint8)0x0DU)"]
- `aliases`: ["ADC error ALREADY_INITIALIZED", "adc_e_already_initialized"]

### ERR-ADC-E-BUFFER-UNINIT
- `name`: `ADC_E_BUFFER_UNINIT`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_BUFFER_UNINIT ((uint8)0x19U)"]
- `aliases`: ["ADC error BUFFER_UNINIT", "adc_e_buffer_uninit"]

### ERR-ADC-E-BUSY
- `name`: `ADC_E_BUSY`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 48]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: #define ADC_E_BUSY ((uint8)0x0BU)"]
- `aliases`: ["ADC error BUSY", "adc_e_busy"]

### ERR-ADC-E-IDLE
- `name`: `ADC_E_IDLE`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: #define ADC_E_IDLE ((uint8)0x0CU)"]
- `aliases`: ["ADC error IDLE", "adc_e_idle"]

### ERR-ADC-E-NOT-DISENGAGED
- `name`: `ADC_E_NOT_DISENGAGED`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_NOT_DISENGAGED ((uint8)0x1AU)"]
- `aliases`: ["ADC error NOT_DISENGAGED", "adc_e_not_disengaged"]

### ERR-ADC-E-NOTIF-CAPABILITY
- `name`: `ADC_E_NOTIF_CAPABILITY`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_NOTIF_CAPABILITY ((uint8)0x18U)"]
- `aliases`: ["ADC error NOTIF_CAPABILITY", "adc_e_notif_capability"]

### ERR-ADC-E-PARAM-CONFIG
- `name`: `ADC_E_PARAM_CONFIG`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_PARAM_CONFIG ((uint8)0x0EU)"]
- `aliases`: ["ADC error PARAM_CONFIG", "adc_e_param_config"]

### ERR-ADC-E-PARAM-GROUP
- `name`: `ADC_E_PARAM_GROUP`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_PARAM_GROUP ((uint8)0x15U)"]
- `aliases`: ["ADC error PARAM_GROUP", "adc_e_param_group"]

### ERR-ADC-E-PARAM-POINTER
- `name`: `ADC_E_PARAM_POINTER`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_PARAM_POINTER ((uint8)0x14U)"]
- `aliases`: ["ADC error PARAM_POINTER", "adc_e_param_pointer"]

### ERR-ADC-E-PARAM-UNIT
- `name`: `ADC_E_PARAM_UNIT`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_PARAM_UNIT ((uint8)0x27U)"]
- `aliases`: ["ADC error PARAM_UNIT", "adc_e_param_unit"]

### ERR-ADC-E-PERIPHERAL-NOT-PREPARED
- `name`: `ADC_E_PERIPHERAL_NOT_PREPARED`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_PERIPHERAL_NOT_PREPARED ((uint8)0x1DU)"]
- `aliases`: ["ADC error PERIPHERAL_NOT_PREPARED", "adc_e_peripheral_not_prepared"]

### ERR-ADC-E-POWER-STATE-NOT-SUPPORTED
- `name`: `ADC_E_POWER_STATE_NOT_SUPPORTED`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_POWER_STATE_NOT_SUPPORTED ((uint8)0x1BU)"]
- `aliases`: ["ADC error POWER_STATE_NOT_SUPPORTED", "adc_e_power_state_not_supported"]

### ERR-ADC-E-QUEUE-FULL
- `name`: `ADC_E_QUEUE_FULL`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_QUEUE_FULL ((uint8)0x20U)"]
- `aliases`: ["ADC error QUEUE_FULL", "adc_e_queue_full"]

### ERR-ADC-E-TIMEOUT
- `name`: `ADC_E_TIMEOUT`
- `type`: `error_code`
- `primary_page`: `54`
- `physical_pages`: [54, 83]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p54: ADC_E_TIMEOUT"]
- `aliases`: ["ADC error TIMEOUT", "adc_e_timeout"]

### ERR-ADC-E-TRANSITION-NOT-POSSIBLE
- `name`: `ADC_E_TRANSITION_NOT_POSSIBLE`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_TRANSITION_NOT_POSSIBLE ((uint8)0x1CU)"]
- `aliases`: ["ADC error TRANSITION_NOT_POSSIBLE", "adc_e_transition_not_possible"]

### ERR-ADC-E-UNINIT
- `name`: `ADC_E_UNINIT`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: #define ADC_E_UNINIT ((uint8)0x0AU)"]
- `aliases`: ["ADC error UNINIT", "adc_e_uninit"]

### ERR-ADC-E-WRONG-CONV-MODE
- `name`: `ADC_E_WRONG_CONV_MODE`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_WRONG_CONV_MODE ((uint8)0x16U)"]
- `aliases`: ["ADC error WRONG_CONV_MODE", "adc_e_wrong_conv_mode"]

### ERR-ADC-E-WRONG-TRIGG-SRC
- `name`: `ADC_E_WRONG_TRIGG_SRC`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p13: #define ADC_E_WRONG_TRIGG_SRC ((uint8)0x17U)"]
- `aliases`: ["ADC error WRONG_TRIGG_SRC", "adc_e_wrong_trigg_src"]

### MACRO-ADC-CFG-VENDOR-ID
- `name`: `ADC_CFG_VENDOR_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p16: #define ADC_CFG_VENDOR_ID 174"]
- `aliases`: []

### MACRO-ADC-DEINIT-API
- `name`: `ADC_DEINIT_API`
- `type`: `service_or_feature_macro`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p19: #define ADC_DEINIT_API (STD_ON)/(STD_OFF)"]
- `aliases`: []

### MACRO-ADC-DEINIT-ID
- `name`: `ADC_DEINIT_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_DEINIT_ID 0x01U"]
- `aliases`: []

### MACRO-ADC-DISABLEGROUPNOTIFICATION-ID
- `name`: `ADC_DISABLEGROUPNOTIFICATION_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_DISABLEGROUPNOTIFICATION_ID 0x08U"]
- `aliases`: []

### MACRO-ADC-DISABLEHARDWARETRIGGER-ID
- `name`: `ADC_DISABLEHARDWARETRIGGER_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_DISABLEHARDWARETRIGGER_ID 0x06U"]
- `aliases`: []

### MACRO-ADC-ENABLE-START-STOP-GROUP-API
- `name`: `ADC_ENABLE_START_STOP_GROUP_API`
- `type`: `service_or_feature_macro`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p19: #define ADC_ENABLE_START_STOP_GROUP_API (STD_ON)/(STD_OFF)"]
- `aliases`: []

### MACRO-ADC-ENABLEGROUPNOTIFICATION-ID
- `name`: `ADC_ENABLEGROUPNOTIFICATION_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_ENABLEGROUPNOTIFICATION_ID 0x07U"]
- `aliases`: []

### MACRO-ADC-ENABLEHARDWARETRIGGER-ID
- `name`: `ADC_ENABLEHARDWARETRIGGER_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_ENABLEHARDWARETRIGGER_ID 0x05U"]
- `aliases`: []

### MACRO-ADC-GETCURRENTPOWERSTATE-ID
- `name`: `ADC_GETCURRENTPOWERSTATE_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p15: #define ADC_GETCURRENTPOWERSTATE_ID 0x11U"]
- `aliases`: []

### MACRO-ADC-GETGROUPSTATUS-ID
- `name`: `ADC_GETGROUPSTATUS_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_GETGROUPSTATUS_ID 0x09U"]
- `aliases`: []

### MACRO-ADC-GETSTREAMLASTPOINTER-ID
- `name`: `ADC_GETSTREAMLASTPOINTER_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_GETSTREAMLASTPOINTER_ID 0x0BU"]
- `aliases`: []

### MACRO-ADC-GETTARGETPOWERSTATE-ID
- `name`: `ADC_GETTARGETPOWERSTATE_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p15: #define ADC_GETTARGETPOWERSTATE_ID 0x12U"]
- `aliases`: []

### MACRO-ADC-GETVERSIONINFO-ID
- `name`: `ADC_GETVERSIONINFO_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_GETVERSIONINFO_ID 0x0AU"]
- `aliases`: []

### MACRO-ADC-HW-TRIGGER-API
- `name`: `ADC_HW_TRIGGER_API`
- `type`: `service_or_feature_macro`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p17: #define ADC_HW_TRIGGER_API (STD_ON)/ (STD_OFF)"]
- `aliases`: []

### MACRO-ADC-INIT-ID
- `name`: `ADC_INIT_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_INIT_ID 0x00U"]
- `aliases`: []

### MACRO-ADC-MODULE-ID
- `name`: `ADC_MODULE_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p16: #define ADC_MODULE_ID 123"]
- `aliases`: []

### MACRO-ADC-PREPAREPOWERSTATE-ID
- `name`: `ADC_PREPAREPOWERSTATE_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p15: #define ADC_PREPAREPOWERSTATE_ID 0x13U"]
- `aliases`: []

### MACRO-ADC-READ-GROUP-API
- `name`: `ADC_READ_GROUP_API`
- `type`: `service_or_feature_macro`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p19: #define ADC_READ_GROUP_API (STD_ON)/(STD_OFF)"]
- `aliases`: []

### MACRO-ADC-SETPOWERSTATE-ID
- `name`: `ADC_SETPOWERSTATE_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p15: #define ADC_SETPOWERSTATE_ID 0x10U"]
- `aliases`: []

### MACRO-ADC-SETUPRESULTBUFFER-ID
- `name`: `ADC_SETUPRESULTBUFFER_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_SETUPRESULTBUFFER_ID 0x0CU"]
- `aliases`: []

### MACRO-ADC-STARTGROUPCONVERSION-ID
- `name`: `ADC_STARTGROUPCONVERSION_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_STARTGROUPCONVERSION_ID 0x02U"]
- `aliases`: []

### MACRO-ADC-STOPGROUPCONVERSION-ID
- `name`: `ADC_STOPGROUPCONVERSION_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_STOPGROUPCONVERSION_ID 0x03U"]
- `aliases`: []

### MACRO-ADC-VALUEREADGROUP-ID
- `name`: `ADC_VALUEREADGROUP_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p14: #define ADC_VALUEREADGROUP_ID 0x04U"]
- `aliases`: []

### MACRO-ADC-VENDOR-ID
- `name`: `ADC_VENDOR_ID`
- `type`: `service_or_feature_macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p16: #define ADC_VENDOR_ID 174"]
- `aliases`: []

### MACRO-ADC-VERSION-INFO-API
- `name`: `ADC_VERSION_INFO_API`
- `type`: `service_or_feature_macro`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC service ID, API enable switch or generated feature macro.
- `anchors`: ["p19: #define ADC_VERSION_INFO_API (STD_ON)/(STD_OFF)"]
- `aliases`: []

### SYM-ADC-ACCESS-MODE-SINGLE
- `name`: `ADC_ACCESS_MODE_SINGLE`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20, 66]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: ADC_ACCESS_MODE_SINGLE = 0U"]
- `aliases`: []

### SYM-ADC-ACCESS-MODE-STREAMING
- `name`: `ADC_ACCESS_MODE_STREAMING`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20, 66]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: ADC_ACCESS_MODE_STREAMING"]
- `aliases`: []

### SYM-ADC-ALIGN-LEFT
- `name`: `ADC_ALIGN_LEFT`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17, 75]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_ALIGN_LEFT 1U"]
- `aliases`: []

### SYM-ADC-ALIGN-RIGHT
- `name`: `ADC_ALIGN_RIGHT`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17, 18, 75]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_ALIGN_RIGHT 0U"]
- `aliases`: []

### SYM-ADC-ALREADY-CONVERTED
- `name`: `ADC_ALREADY_CONVERTED`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: ADC_ALREADY_CONVERTED = 1U"]
- `aliases`: []

### SYM-ADC-AR-RELEASE-MAJOR-VERSION
- `name`: `ADC_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_AR_RELEASE_MAJOR_VERSION 4"]
- `aliases`: []

### SYM-ADC-AR-RELEASE-MINOR-VERSION
- `name`: `ADC_AR_RELEASE_MINOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_AR_RELEASE_MINOR_VERSION 6"]
- `aliases`: []

### SYM-ADC-AR-RELEASE-REVISION-VERSION
- `name`: `ADC_AR_RELEASE_REVISION_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_AR_RELEASE_REVISION_VERSION 0"]
- `aliases`: []

### SYM-ADC-AVERAGE-16
- `name`: `ADC_AVERAGE_16`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_AVERAGE_16 = 2U"]
- `aliases`: []

### SYM-ADC-AVERAGE-32
- `name`: `ADC_AVERAGE_32`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_AVERAGE_32 = 3U"]
- `aliases`: []

### SYM-ADC-AVERAGE-4
- `name`: `ADC_AVERAGE_4`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_AVERAGE_4 = 0U"]
- `aliases`: []

### SYM-ADC-AVERAGE-8
- `name`: `ADC_AVERAGE_8`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_AVERAGE_8 = 1U"]
- `aliases`: []

### SYM-ADC-BITS-RESOLUTION-10
- `name`: `ADC_BITS_RESOLUTION_10`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_BITS_RESOLUTION_10 1U"]
- `aliases`: []

### SYM-ADC-BITS-RESOLUTION-12
- `name`: `ADC_BITS_RESOLUTION_12`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_BITS_RESOLUTION_12 0U"]
- `aliases`: []

### SYM-ADC-BITS-RESOLUTION-8
- `name`: `ADC_BITS_RESOLUTION_8`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_BITS_RESOLUTION_8 2U"]
- `aliases`: []

### SYM-ADC-BUSY
- `name`: `ADC_BUSY`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 44]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_BUSY = 1U"]
- `aliases`: []

### SYM-ADC-CFG2
- `name`: `ADC_CFG2`
- `type`: `macro_or_enum_value`
- `primary_page`: `70`
- `physical_pages`: [70, 72]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p70: ratio selected. The clock source is configured in MCU, and the divide ratio is specified by ADC_CFG2[DIV]"]
- `aliases`: []

### SYM-ADC-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: `ADC_CFG_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_CFG_AR_RELEASE_MAJOR_VERSION 4"]
- `aliases`: []

### SYM-ADC-CFG-AR-RELEASE-MINOR-VERSION
- `name`: `ADC_CFG_AR_RELEASE_MINOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_CFG_AR_RELEASE_MINOR_VERSION 6"]
- `aliases`: []

### SYM-ADC-CFG-AR-RELEASE-REVISION-VERSION
- `name`: `ADC_CFG_AR_RELEASE_REVISION_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_CFG_AR_RELEASE_REVISION_VERSION 0"]
- `aliases`: []

### SYM-ADC-CFG-SW-MAJOR-VERSION
- `name`: `ADC_CFG_SW_MAJOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_CFG_SW_MAJOR_VERSION 0"]
- `aliases`: []

### SYM-ADC-CFG-SW-MINOR-VERSION
- `name`: `ADC_CFG_SW_MINOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_CFG_SW_MINOR_VERSION 5"]
- `aliases`: []

### SYM-ADC-CFG-SW-PATCH-VERSION
- `name`: `ADC_CFG_SW_PATCH_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_CFG_SW_PATCH_VERSION 0"]
- `aliases`: []

### SYM-ADC-CLOCK-DIVIDE-BY-1
- `name`: `ADC_CLOCK_DIVIDE_BY_1`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_CLOCK_DIVIDE_BY_1 0U"]
- `aliases`: []

### SYM-ADC-CLOCK-DIVIDE-BY-2
- `name`: `ADC_CLOCK_DIVIDE_BY_2`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_CLOCK_DIVIDE_BY_2 1U"]
- `aliases`: []

### SYM-ADC-CLOCK-DIVIDE-BY-4
- `name`: `ADC_CLOCK_DIVIDE_BY_4`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_CLOCK_DIVIDE_BY_4 2U"]
- `aliases`: []

### SYM-ADC-CLOCK-DIVIDE-BY-8
- `name`: `ADC_CLOCK_DIVIDE_BY_8`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_CLOCK_DIVIDE_BY_8 3U"]
- `aliases`: []

### SYM-ADC-CMP-CHANNEL-ALL
- `name`: `ADC_CMP_CHANNEL_ALL`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_CMP_CHANNEL_ALL = 0U"]
- `aliases`: []

### SYM-ADC-CMP-CHANNEL-SINGLE
- `name`: `ADC_CMP_CHANNEL_SINGLE`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_CMP_CHANNEL_SINGLE = 1U"]
- `aliases`: []

### SYM-ADC-COMPLETED
- `name`: `ADC_COMPLETED`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 47]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_COMPLETED = 2U"]
- `aliases`: []

### SYM-ADC-CONTINUOUS-NO-INTERRUPT-SUPPORT
- `name`: `ADC_CONTINUOUS_NO_INTERRUPT_SUPPORT`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_CONTINUOUS_NO_INTERRUPT_SUPPORT (STD_ON)/(STD_OFF)"]
- `aliases`: []

### SYM-ADC-CONV-MODE-CONTINUOUS
- `name`: `ADC_CONV_MODE_CONTINUOUS`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21, 66]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_CONV_MODE_CONTINUOUS"]
- `aliases`: []

### SYM-ADC-CONV-MODE-ONESHOT
- `name`: `ADC_CONV_MODE_ONESHOT`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21, 66]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_CONV_MODE_ONESHOT = 0U"]
- `aliases`: []

### SYM-ADC-DEV-ERROR-DETECT
- `name`: `ADC_DEV_ERROR_DETECT`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_DEV_ERROR_DETECT (STD_ON)"]
- `aliases`: []

### SYM-ADC-DISABLE-DEM-REPORT-ERROR-STATUS
- `name`: `ADC_DISABLE_DEM_REPORT_ERROR_STATUS`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_DISABLE_DEM_REPORT_ERROR_STATUS (STD_ON)"]
- `aliases`: []

### SYM-ADC-DMA
- `name`: `ADC_DMA`
- `type`: `macro_or_enum_value`
- `primary_page`: `68`
- `physical_pages`: [68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p68: ADC_DMA, ADC_INTERRUPT, ADC_POLLING"]
- `aliases`: []

### SYM-ADC-DMA-SUPPORT
- `name`: `ADC_DMA_SUPPORT`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_DMA_SUPPORT (STD_OFF)"]
- `aliases`: []

### SYM-ADC-DMA-TRANSFER-TIMEOUT
- `name`: `ADC_DMA_TRANSFER_TIMEOUT`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_DMA_TRANSFER_TIMEOUT (0x0000ffffUL)"]
- `aliases`: []

### SYM-ADC-ENABLE-LIMIT-CHECK
- `name`: `ADC_ENABLE_LIMIT_CHECK`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_ENABLE_LIMIT_CHECK (STD_ON)/ (STD_OFF)"]
- `aliases`: []

### SYM-ADC-ENABLE-QUEUING
- `name`: `ADC_ENABLE_QUEUING`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_ENABLE_QUEUING (STD_ON)/(STD_OFF)"]
- `aliases`: []

### SYM-ADC-ENABLE-USER-MODE-SUPPORT
- `name`: `ADC_ENABLE_USER_MODE_SUPPORT`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: #define ADC_ENABLE_USER_MODE_SUPPORT (STD_OFF)"]
- `aliases`: []

### SYM-ADC-GROUP-REPL-ABORT-RESTART
- `name`: `ADC_GROUP_REPL_ABORT_RESTART`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_GROUP_REPL_ABORT_RESTART ="]
- `aliases`: []

### SYM-ADC-GROUP-REPL-SUSPEND-RESUME
- `name`: `ADC_GROUP_REPL_SUSPEND_RESUME`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_GROUP_REPL_SUSPEND_RESUME"]
- `aliases`: []

### SYM-ADC-GRP-NOTIF-CAPABILITY
- `name`: `ADC_GRP_NOTIF_CAPABILITY`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_GRP_NOTIF_CAPABILITY (STD_ON)/ (STD_OFF)"]
- `aliases`: []

### SYM-ADC-HW-FAILURE
- `name`: `ADC_HW_FAILURE`
- `type`: `macro_or_enum_value`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p8: ADC_HW_FAILURE The HW module has a failure which prevents it to enter the required"]
- `aliases`: []

### SYM-ADC-HW-QUEUE
- `name`: `ADC_HW_QUEUE`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_HW_QUEUE (1U)"]
- `aliases`: []

### SYM-ADC-HW-TRIG-BOTH-EDGES
- `name`: `ADC_HW_TRIG_BOTH_EDGES`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_HW_TRIG_BOTH_EDGES = 2U"]
- `aliases`: []

### SYM-ADC-HW-TRIG-FALLING-EDGE
- `name`: `ADC_HW_TRIG_FALLING_EDGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_HW_TRIG_FALLING_EDGE = 1U"]
- `aliases`: []

### SYM-ADC-HW-TRIG-RISING-EDGE
- `name`: `ADC_HW_TRIG_RISING_EDGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_HW_TRIG_RISING_EDGE = 0U"]
- `aliases`: []

### SYM-ADC-HWTRIGGER-DISABLED
- `name`: `ADC_HWTRIGGER_DISABLED`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_HWTRIGGER_DISABLED = 0U"]
- `aliases`: []

### SYM-ADC-HWTRIGGER-ENABLED
- `name`: `ADC_HWTRIGGER_ENABLED`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_HWTRIGGER_ENABLED = 1U"]
- `aliases`: []

### SYM-ADC-ID-CHANNEL-U8
- `name`: `ADC_ID_CHANNEL_U8`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: #define ADC_ID_CHANNEL_U8(Id) (Id)"]
- `aliases`: []

### SYM-ADC-IDLE
- `name`: `ADC_IDLE`
- `type`: `macro_or_enum_value`
- `primary_page`: `9`
- `physical_pages`: [9, 21]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p9: in state ADC_IDLE."]
- `aliases`: []

### SYM-ADC-INTERRUPT
- `name`: `ADC_INTERRUPT`
- `type`: `macro_or_enum_value`
- `primary_page`: `68`
- `physical_pages`: [68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p68: ADC_DMA, ADC_INTERRUPT, ADC_POLLING"]
- `aliases`: []

### SYM-ADC-MAX-GROUPS
- `name`: `ADC_MAX_GROUPS`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_MAX_GROUPS 1U"]
- `aliases`: []

### SYM-ADC-MAX-HW-UNITS
- `name`: `ADC_MAX_HW_UNITS`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_MAX_HW_UNITS 4U"]
- `aliases`: []

### SYM-ADC-MAX-PARTITIONS
- `name`: `ADC_MAX_PARTITIONS`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_MAX_PARTITIONS 3U"]
- `aliases`: []

### SYM-ADC-MULTICORE-SUPPORT
- `name`: `ADC_MULTICORE_SUPPORT`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_MULTICORE_SUPPORT (STD_ON)/ (STD_OFF)"]
- `aliases`: []

### SYM-ADC-NOT-INIT
- `name`: `ADC_NOT_INIT`
- `type`: `macro_or_enum_value`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p8: ADC_NOT_INIT ADC Module not initialized."]
- `aliases`: []

### SYM-ADC-NOT-YET-CONVERTED
- `name`: `ADC_NOT_YET_CONVERTED`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: ADC_NOT_YET_CONVERTED = 0U"]
- `aliases`: []

### SYM-ADC-NOTIFICATION-DISABLED
- `name`: `ADC_NOTIFICATION_DISABLED`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_NOTIFICATION_DISABLED = 0U"]
- `aliases`: []

### SYM-ADC-NOTIFICATION-ENABLED
- `name`: `ADC_NOTIFICATION_ENABLED`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_NOTIFICATION_ENABLED = 1U"]
- `aliases`: []

### SYM-ADC-NUM-SC-REGISTER
- `name`: `ADC_NUM_SC_REGISTER`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_NUM_SC_REGISTER 32U"]
- `aliases`: []

### SYM-ADC-NUM-SC-REGISTER-USED
- `name`: `ADC_NUM_SC_REGISTER_USED`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_NUM_SC_REGISTER_USED 32U"]
- `aliases`: []

### SYM-ADC-OVERRUN-MODE-OVERWRITE
- `name`: `ADC_OVERRUN_MODE_OVERWRITE`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_OVERRUN_MODE_OVERWRITE ="]
- `aliases`: []

### SYM-ADC-OVERRUN-MODE-PRESERVE
- `name`: `ADC_OVERRUN_MODE_PRESERVE`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_OVERRUN_MODE_PRESERVE="]
- `aliases`: []

### SYM-ADC-POLLING
- `name`: `ADC_POLLING`
- `type`: `macro_or_enum_value`
- `primary_page`: `68`
- `physical_pages`: [68]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p68: ADC_DMA, ADC_INTERRUPT, ADC_POLLING"]
- `aliases`: []

### SYM-ADC-POWER-STATE-NOT-SUPP
- `name`: `ADC_POWER_STATE_NOT_SUPP`
- `type`: `macro_or_enum_value`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p8: ADC_POWER_STATE_NOT_SUPP ADC Module does not support the requested power state."]
- `aliases`: []

### SYM-ADC-PRESCALER-CONF-FEATURE
- `name`: `ADC_PRESCALER_CONF_FEATURE`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_PRESCALER_CONF_FEATURE (STD_ON)/(STD_OFF)"]
- `aliases`: []

### SYM-ADC-PRETRIGGER-SEL-PTIMER
- `name`: `ADC_PRETRIGGER_SEL_PTIMER`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_PRETRIGGER_SEL_PTIMER"]
- `aliases`: []

### SYM-ADC-PRETRIGGER-SEL-SW
- `name`: `ADC_PRETRIGGER_SEL_SW`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_PRETRIGGER_SEL_SW = 0x02U"]
- `aliases`: []

### SYM-ADC-PRIORITY-HW
- `name`: `ADC_PRIORITY_HW`
- `type`: `macro_or_enum_value`
- `primary_page`: `6`
- `physical_pages`: [6, 17, 75]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p6: static configuration option ADC_PRIORITY_HW to enable the priority mechanism using only"]
- `aliases`: []

### SYM-ADC-PRIORITY-HW-SW
- `name`: `ADC_PRIORITY_HW_SW`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17, 73, 75]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_PRIORITY_HW_SW 2U"]
- `aliases`: []

### SYM-ADC-PRIORITY-IMPLEMENTATION
- `name`: `ADC_PRIORITY_IMPLEMENTATION`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_PRIORITY_IMPLEMENTATION (ADC_PRIORITY_NONE)/ (ADC_PRIORITY_HW_SW)"]
- `aliases`: []

### SYM-ADC-PRIORITY-NONE
- `name`: `ADC_PRIORITY_NONE`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17, 66, 75, 84]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_PRIORITY_NONE 0U"]
- `aliases`: []

### SYM-ADC-PTIMER-CHANNELS-U8
- `name`: `ADC_PTIMER_CHANNELS_U8`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_PTIMER_CHANNELS_U8 4U"]
- `aliases`: []

### SYM-ADC-PTIMER-NUM-DELAY-REGISTER
- `name`: `ADC_PTIMER_NUM_DELAY_REGISTER`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_PTIMER_NUM_DELAY_REGISTER 8U"]
- `aliases`: []

### SYM-ADC-PTIMER-NUM-MODULES
- `name`: `ADC_PTIMER_NUM_MODULES`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_PTIMER_NUM_MODULES 2U"]
- `aliases`: []

### SYM-ADC-QUEUE-INDEX-TYPE-MAXIMUM
- `name`: `ADC_QUEUE_INDEX_TYPE_MAXIMUM`
- `type`: `macro_or_enum_value`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p20: #define ADC_QUEUE_INDEX_TYPE_MAXIMUM 65535U"]
- `aliases`: []

### SYM-ADC-QUEUE-MAX-DEPTH-MAX
- `name`: `ADC_QUEUE_MAX_DEPTH_MAX`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19, 31]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_QUEUE_MAX_DEPTH_MAX 3U"]
- `aliases`: []

### SYM-ADC-RANGE-ALWAYS
- `name`: `ADC_RANGE_ALWAYS`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_RANGE_ALWAYS = 3U"]
- `aliases`: []

### SYM-ADC-RANGE-BETWEEN
- `name`: `ADC_RANGE_BETWEEN`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_RANGE_BETWEEN = 1U"]
- `aliases`: []

### SYM-ADC-RANGE-NOT-BETWEEN
- `name`: `ADC_RANGE_NOT_BETWEEN`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_RANGE_NOT_BETWEEN = 5U"]
- `aliases`: []

### SYM-ADC-RANGE-NOT-OVER-HIGH
- `name`: `ADC_RANGE_NOT_OVER_HIGH`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_RANGE_NOT_OVER_HIGH = 6U"]
- `aliases`: []

### SYM-ADC-RANGE-NOT-UNDER-LOW
- `name`: `ADC_RANGE_NOT_UNDER_LOW`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_RANGE_NOT_UNDER_LOW = 4U"]
- `aliases`: []

### SYM-ADC-RANGE-OVER-HIGH
- `name`: `ADC_RANGE_OVER_HIGH`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_RANGE_OVER_HIGH = 2U"]
- `aliases`: []

### SYM-ADC-RANGE-UNDER-LOW
- `name`: `ADC_RANGE_UNDER_LOW`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 63]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_RANGE_UNDER_LOW = 0U"]
- `aliases`: []

### SYM-ADC-REF-EXTERNAL
- `name`: `ADC_REF_EXTERNAL`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_REF_EXTERNAL = 1U"]
- `aliases`: []

### SYM-ADC-REF-INTERNAL
- `name`: `ADC_REF_INTERNAL`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_REF_INTERNAL = 0U"]
- `aliases`: []

### SYM-ADC-RESULT-ALIGN-LEFT
- `name`: `ADC_RESULT_ALIGN_LEFT`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_RESULT_ALIGN_LEFT = 1U"]
- `aliases`: []

### SYM-ADC-RESULT-ALIGN-RIGHT
- `name`: `ADC_RESULT_ALIGN_RIGHT`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_RESULT_ALIGN_RIGHT = 0U"]
- `aliases`: []

### SYM-ADC-RESULT-ALIGNMENT
- `name`: `ADC_RESULT_ALIGNMENT`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_RESULT_ALIGNMENT (ADC_ALIGN_RIGHT)"]
- `aliases`: []

### SYM-ADC-RESULT-TYPE
- `name`: `ADC_RESULT_TYPE`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_RESULT_TYPE (ADC_RESULT_U16)"]
- `aliases`: []

### SYM-ADC-RESULT-U16
- `name`: `ADC_RESULT_U16`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_RESULT_U16 1U"]
- `aliases`: []

### SYM-ADC-RESULT-U32
- `name`: `ADC_RESULT_U32`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_RESULT_U32 2U"]
- `aliases`: []

### SYM-ADC-RESULT-U8
- `name`: `ADC_RESULT_U8`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_RESULT_U8 0U"]
- `aliases`: []

### SYM-ADC-SEQMODE-CONTINUOUS
- `name`: `ADC_SEQMODE_CONTINUOUS`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_SEQMODE_CONTINUOUS = 1U"]
- `aliases`: []

### SYM-ADC-SEQMODE-DISCONTINUOUS-0
- `name`: `ADC_SEQMODE_DISCONTINUOUS_0`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_SEQMODE_DISCONTINUOUS_0 ="]
- `aliases`: []

### SYM-ADC-SEQMODE-DISCONTINUOUS-1
- `name`: `ADC_SEQMODE_DISCONTINUOUS_1`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_SEQMODE_DISCONTINUOUS_1 ="]
- `aliases`: []

### SYM-ADC-SEQMODE-SINGLE
- `name`: `ADC_SEQMODE_SINGLE`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_SEQMODE_SINGLE = 0U"]
- `aliases`: []

### SYM-ADC-SEQUENCE-ERROR
- `name`: `ADC_SEQUENCE_ERROR`
- `type`: `macro_or_enum_value`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p8: ADC_SEQUENCE_ERROR Wrong API call sequence."]
- `aliases`: []

### SYM-ADC-SERVICE-ACCEPTED
- `name`: `ADC_SERVICE_ACCEPTED`
- `type`: `macro_or_enum_value`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p8: ADC_SERVICE_ACCEPTED Power state change executed."]
- `aliases`: []

### SYM-ADC-SET-ADC-HARDWARE-AVERAGE-ONCE
- `name`: `ADC_SET_ADC_HARDWARE_AVERAGE_ONCE`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_SET_ADC_HARDWARE_AVERAGE_ONCE (STD_ON)/(STD_OFF)"]
- `aliases`: []

### SYM-ADC-SMPR
- `name`: `ADC_SMPR`
- `type`: `macro_or_enum_value`
- `primary_page`: `70`
- `physical_pages`: [70]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p70: applied: ADC TOTAL CONVERSION TIME = Sample Phase Time (set by ADC_SMPR[SMP_OPTn]+1) + Hold"]
- `aliases`: []

### SYM-ADC-STREAM-BUFFER-CIRCULAR
- `name`: `ADC_STREAM_BUFFER_CIRCULAR`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21, 68]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_STREAM_BUFFER_CIRCULAR"]
- `aliases`: []

### SYM-ADC-STREAM-BUFFER-LINEAR
- `name`: `ADC_STREAM_BUFFER_LINEAR`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21, 68]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_STREAM_BUFFER_LINEAR = 0U"]
- `aliases`: []

### SYM-ADC-STREAM-COMPLETED
- `name`: `ADC_STREAM_COMPLETED`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 44, 47]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_STREAM_COMPLETED = 3U"]
- `aliases`: []

### SYM-ADC-SW-MAJOR-VERSION
- `name`: `ADC_SW_MAJOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p15: #define ADC_SW_MAJOR_VERSION 0"]
- `aliases`: []

### SYM-ADC-SW-MINOR-VERSION
- `name`: `ADC_SW_MINOR_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_SW_MINOR_VERSION 5"]
- `aliases`: []

### SYM-ADC-SW-PATCH-VERSION
- `name`: `ADC_SW_PATCH_VERSION`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_SW_PATCH_VERSION 0"]
- `aliases`: []

### SYM-ADC-SW-PRETRIGGER-0
- `name`: `ADC_SW_PRETRIGGER_0`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_SW_PRETRIGGER_0 = 0x04U"]
- `aliases`: []

### SYM-ADC-SW-PRETRIGGER-1
- `name`: `ADC_SW_PRETRIGGER_1`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_SW_PRETRIGGER_1 = 0x05U"]
- `aliases`: []

### SYM-ADC-SW-PRETRIGGER-2
- `name`: `ADC_SW_PRETRIGGER_2`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_SW_PRETRIGGER_2 = 0x06U"]
- `aliases`: []

### SYM-ADC-SW-PRETRIGGER-3
- `name`: `ADC_SW_PRETRIGGER_3`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_SW_PRETRIGGER_3 = 0x07U"]
- `aliases`: []

### SYM-ADC-SW-PRETRIGGER-DISABLED
- `name`: `ADC_SW_PRETRIGGER_DISABLED`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_SW_PRETRIGGER_DISABLED"]
- `aliases`: []

### SYM-ADC-TIMEOUT-COUNTER
- `name`: `ADC_TIMEOUT_COUNTER`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_TIMEOUT_COUNTER (0x0000ffffUL)"]
- `aliases`: []

### SYM-ADC-TRANS-NOT-POSSIBLE
- `name`: `ADC_TRANS_NOT_POSSIBLE`
- `type`: `macro_or_enum_value`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p8: ADC_TRANS_NOT_POSSIBLE ADC Module cannot transition directly from the current power"]
- `aliases`: []

### SYM-ADC-TRANSFER-TYPE-DMA
- `name`: `ADC_TRANSFER_TYPE_DMA`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_TRANSFER_TYPE_DMA = 1U"]
- `aliases`: []

### SYM-ADC-TRANSFER-TYPE-INTERRUPT
- `name`: `ADC_TRANSFER_TYPE_INTERRUPT`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_TRANSFER_TYPE_INTERRUPT ="]
- `aliases`: []

### SYM-ADC-TRANSFER-TYPE-POLLING
- `name`: `ADC_TRANSFER_TYPE_POLLING`
- `type`: `macro_or_enum_value`
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p21: ADC_TRANSFER_TYPE_POLLING = 2U"]
- `aliases`: []

### SYM-ADC-TRIGG-SRC-HW
- `name`: `ADC_TRIGG_SRC_HW`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_TRIGG_SRC_HW = 1U"]
- `aliases`: []

### SYM-ADC-TRIGG-SRC-SW
- `name`: `ADC_TRIGG_SRC_SW`
- `type`: `macro_or_enum_value`
- `primary_page`: `22`
- `physical_pages`: [22, 67]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p22: ADC_TRIGG_SRC_SW = 0U"]
- `aliases`: []

### SYM-ADC-TRIGGER-SEL-PTIMER
- `name`: `ADC_TRIGGER_SEL_PTIMER`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_TRIGGER_SEL_PTIMER = 0x00U"]
- `aliases`: []

### SYM-ADC-TRIGGER-SEL-TRGSEL
- `name`: `ADC_TRIGGER_SEL_TRGSEL`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: ADC_TRIGGER_SEL_TRGSEL = 0x01U"]
- `aliases`: []

### SYM-ADC-TRIGMODE-BOTH-EDGE
- `name`: `ADC_TRIGMODE_BOTH_EDGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_TRIGMODE_BOTH_EDGE = 3U"]
- `aliases`: []

### SYM-ADC-TRIGMODE-FALLING-EDGE
- `name`: `ADC_TRIGMODE_FALLING_EDGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_TRIGMODE_FALLING_EDGE = 2U"]
- `aliases`: []

### SYM-ADC-TRIGMODE-HIGH-VOLTAGE
- `name`: `ADC_TRIGMODE_HIGH_VOLTAGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_TRIGMODE_HIGH_VOLTAGE = 4U"]
- `aliases`: []

### SYM-ADC-TRIGMODE-LOW-VOLTAGE
- `name`: `ADC_TRIGMODE_LOW_VOLTAGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_TRIGMODE_LOW_VOLTAGE = 5U"]
- `aliases`: []

### SYM-ADC-TRIGMODE-RISING-EDGE
- `name`: `ADC_TRIGMODE_RISING_EDGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_TRIGMODE_RISING_EDGE = 1U"]
- `aliases`: []

### SYM-ADC-TRIGMODE-SW
- `name`: `ADC_TRIGMODE_SW`
- `type`: `macro_or_enum_value`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p23: ADC_TRIGMODE_SW = 0U"]
- `aliases`: []

### SYM-ADC-TRIGSRC-SMISC
- `name`: `ADC_TRIGSRC_SMISC`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_TRIGSRC_SMISC = 0U"]
- `aliases`: []

### SYM-ADC-TRIGSRC-TRGSEL
- `name`: `ADC_TRIGSRC_TRGSEL`
- `type`: `macro_or_enum_value`
- `primary_page`: `24`
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p24: ADC_TRIGSRC_TRGSEL = 2U"]
- `aliases`: []

### SYM-ADC-UNIT-0
- `name`: `ADC_UNIT_0`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_UNIT_0 0U"]
- `aliases`: []

### SYM-ADC-UNIT-0-ISR-USED
- `name`: `ADC_UNIT_0_ISR_USED`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_UNIT_0_ISR_USED"]
- `aliases`: []

### SYM-ADC-UNIT-1
- `name`: `ADC_UNIT_1`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_UNIT_1 1U"]
- `aliases`: []

### SYM-ADC-UNIT-1-ISR-USED
- `name`: `ADC_UNIT_1_ISR_USED`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_UNIT_1_ISR_USED"]
- `aliases`: []

### SYM-ADC-UNIT-2
- `name`: `ADC_UNIT_2`
- `type`: `macro_or_enum_value`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p16: #define ADC_UNIT_2 2U"]
- `aliases`: []

### SYM-ADC-UNIT-2-ISR-USED
- `name`: `ADC_UNIT_2_ISR_USED`
- `type`: `macro_or_enum_value`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p18: #define ADC_UNIT_2_ISR_USED"]
- `aliases`: []

### SYM-ADC-UNIT-3
- `name`: `ADC_UNIT_3`
- `type`: `macro_or_enum_value`
- `primary_page`: `17`
- `physical_pages`: [17]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p17: #define ADC_UNIT_3 3U"]
- `aliases`: []

### SYM-ADC-UNIT-3-ISR-USED
- `name`: `ADC_UNIT_3_ISR_USED`
- `type`: `macro_or_enum_value`
- `primary_page`: `19`
- `physical_pages`: [19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p19: #define ADC_UNIT_3_ISR_USED"]
- `aliases`: []

### SYM-PTIMER-LOAD-VAL-AT-MODULO-CO
- `name`: `PTIMER_LOAD_VAL_AT_MODULO_CO`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: PTIMER_LOAD_VAL_AT_MODULO_CO"]
- `aliases`: []

### SYM-PTIMER-LOAD-VAL-AT-NEXT-TRIGGE
- `name`: `PTIMER_LOAD_VAL_AT_NEXT_TRIGGE`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: PTIMER_LOAD_VAL_AT_NEXT_TRIGGE"]
- `aliases`: []

### SYM-PTIMER-LOAD-VAL-IMMEDIATEL
- `name`: `PTIMER_LOAD_VAL_IMMEDIATEL`
- `type`: `macro_or_enum_value`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p25: PTIMER_LOAD_VAL_IMMEDIATEL = 0U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-1
- `name`: `PTIMER_PRE_DIVIDE_BY_1`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_1 = 0U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-128
- `name`: `PTIMER_PRE_DIVIDE_BY_128`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_128 = 7U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-16
- `name`: `PTIMER_PRE_DIVIDE_BY_16`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_16 = 4U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-2
- `name`: `PTIMER_PRE_DIVIDE_BY_2`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_2 = 1U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-32
- `name`: `PTIMER_PRE_DIVIDE_BY_32`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_32 = 5U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-4
- `name`: `PTIMER_PRE_DIVIDE_BY_4`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_4 = 2U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-64
- `name`: `PTIMER_PRE_DIVIDE_BY_64`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_64 = 6U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDE-BY-8
- `name`: `PTIMER_PRE_DIVIDE_BY_8`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDE_BY_8 = 3U"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDER-MULTIPLY-BY-1
- `name`: `PTIMER_PRE_DIVIDER_MULTIPLY_BY_1`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDER_MULTIPLY_BY_1"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDER-MULTIPLY-BY-2
- `name`: `PTIMER_PRE_DIVIDER_MULTIPLY_BY_2`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDER_MULTIPLY_BY_2"]
- `aliases`: []

### SYM-PTIMER-PRE-DIVIDER-MULTIPLY-BY-4
- `name`: `PTIMER_PRE_DIVIDER_MULTIPLY_BY_4`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_PRE_DIVIDER_MULTIPLY_BY_4"]
- `aliases`: []

### SYM-PTIMER-PRE-TRIGGER
- `name`: `PTIMER_PRE_TRIGGER`
- `type`: `macro_or_enum_value`
- `primary_page`: `58`
- `physical_pages`: [58]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p58: PTIMER_PRE_TRIGGER, SOFTWARE_PRE_TRIGGER"]
- `aliases`: []

### SYM-PTIMER-PRETRIGGER
- `name`: `PTIMER_PRETRIGGER`
- `type`: `macro_or_enum_value`
- `primary_page`: `58`
- `physical_pages`: [58]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p58: PTIMER_PRETRIGGER"]
- `aliases`: []

### SYM-PTIMER-STATUS-CTRL
- `name`: `PTIMER_STATUS_CTRL`
- `type`: `macro_or_enum_value`
- `primary_page`: `29`
- `physical_pages`: [29]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p29: Settings for PRESCALER and MULT fields of PTIMER_STATUS_CTRL register."]
- `aliases`: []

### SYM-PTIMER-TRGSRC-SW
- `name`: `PTIMER_TRGSRC_SW`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_TRGSRC_SW = 0x0FU"]
- `aliases`: []

### SYM-PTIMER-TRGSRC-TRGSEL
- `name`: `PTIMER_TRGSRC_TRGSEL`
- `type`: `macro_or_enum_value`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.5 Typedefs"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p26: PTIMER_TRGSRC_TRGSEL = 0x00U"]
- `aliases`: []

### SYM-PTIMER-TRIGGER
- `name`: `PTIMER_TRIGGER`
- `type`: `macro_or_enum_value`
- `primary_page`: `58`
- `physical_pages`: [58]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2.2 AdcConfigSet"]
- `brief`: ADC macro, enum value, constant or generated configuration value.
- `anchors`: ["p58: PTIMER_TRIGGER, TRGSEL_TRIGGER"]
- `aliases`: []

### FILE-ADC-CFG-H
- `name`: `Adc_Cfg.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 16]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Macros in Adc_Cfg.h ................................................................................................................................... 16"]
- `aliases`: ["Adc Cfg.h", "Adc_Cfg.h()"]

### FILE-ADC-CFGDEFINES-H
- `name`: `Adc_CfgDefines.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 16]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Macros in Adc_CfgDefines.h ...................................................................................................................... 16"]
- `aliases`: ["Adc CfgDefines.h", "Adc_CfgDefines.h()"]

### FILE-ADC-HW-H
- `name`: `Adc_Hw.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 35]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Functions in Adc_Hw.h .............................................................................................................................. 35"]
- `aliases`: ["Adc Hw.h", "Adc_Hw.h()"]

### FILE-ADC-HW-TYPES-H
- `name`: `Adc_Hw_Types.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 23]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Enumerations in Adc_Hw_Types.h ........................................................................................................... 23"]
- `aliases`: ["Adc Hw Types.h", "Adc_Hw_Types.h()"]

### FILE-ADC-LLD-H
- `name`: `Adc_Lld.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 37]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Functions in Adc_Lld.h .............................................................................................................................. 37"]
- `aliases`: ["Adc Lld.h", "Adc_Lld.h()"]

### FILE-ADC-MEMMAP-H
- `name`: `Adc_MemMap.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Adc_MemMap.h"]
- `aliases`: ["Adc MemMap.h", "Adc_MemMap.h()"]

### FILE-ADC-PTIMER-HW-H
- `name`: `Adc_Ptimer_Hw.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 41]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Functions in Adc_Ptimer_Hw.h................................................................................................................. 41"]
- `aliases`: ["Adc Ptimer Hw.h", "Adc_Ptimer_Hw.h()"]

### FILE-ADC-PTIMER-HW-TYPES-H
- `name`: `Adc_Ptimer_Hw_Types.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 25]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Enumerations in Adc_Ptimer_Hw_Types.h ............................................................................................. 25"]
- `aliases`: ["Adc Ptimer Hw Types.h", "Adc_Ptimer_Hw_Types.h()"]

### FILE-ADC-REG-H
- `name`: `Adc_Reg.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Adc_Reg.h"]
- `aliases`: ["Adc Reg.h", "Adc_Reg.h()"]

### FILE-ADC-TYPES-H
- `name`: `Adc_types.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 15]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Macros in Adc_types.h ............................................................................................................................... 15"]
- `aliases`: ["Adc types.h", "Adc_types.h()"]

### FILE-ADC-TYPES-H-P0003
- `name`: `Adc_Types.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 12, 20, 26]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Enumerations in Adc_Types.h .................................................................................................................. 20"]
- `aliases`: ["Adc Types.h", "Adc_Types.h()"]

### FILE-ADC-VERSION-H
- `name`: `Adc_version.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 15]
- `section_paths`: ["Table of Contents"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p3: Macros in Adc_version.h ............................................................................................................................ 15"]
- `aliases`: ["Adc version.h", "Adc_version.h()"]

### FILE-ADC-VERSION-H-P0012
- `name`: `Adc_Version.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Adc_Version.h"]
- `aliases`: ["Adc Version.h", "Adc_Version.h()"]

### FILE-CDD-DMA-H
- `name`: `CDD_Dma.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: CDD_Dma.h"]
- `aliases`: []

### FILE-COMPILERDEFINITION-H
- `name`: `CompilerDefinition.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: CompilerDefinition.h"]
- `aliases`: []

### FILE-DET-H
- `name`: `Det.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Det.h"]
- `aliases`: []

### FILE-MCAL-H
- `name`: `Mcal.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Mcal.h"]
- `aliases`: []

### FILE-OS-MEMMAP-H
- `name`: `Os_MemMap.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Os_MemMap.h"]
- `aliases`: []

### FILE-SCHM-ADC-H
- `name`: `SchM_Adc.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: SchM_Adc.h"]
- `aliases`: []

### FILE-STD-TYPES-H
- `name`: `Std_Types.h`
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements / 2.2 File Structure / 2.3 Macros"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p12: Std_Types.h"]
- `aliases`: []

### TERM-ADC
- `name`: `ADC`
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5]
- `section_paths`: ["Cover"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p1: FC7xxx ADC User Manual"]
- `aliases`: ["Analog-to-Digital Converter", "ADC module", "ADC driver", "模数转换器", "ADC模块"]

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 6, 11]
- `section_paths`: ["Chapter 1 ADC Introduction"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p5: The design of this module follows the specifications of the ADC driver specified in AUTOSAR Classic Platform Release R20-11."]
- `aliases`: ["AUTOSAR Classic", "AUTOSAR_SWS_ADCDriver", "R20-11"]

### TERM-DEM
- `name`: `DEM`
- `type`: `term`
- `primary_page`: `18`
- `physical_pages`: [18, 83]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p18: #define ADC_DISABLE_DEM_REPORT_ERROR_STATUS (STD_ON)"]
- `aliases`: []

### TERM-DET
- `name`: `DET`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6, 11, 12, 48]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p6: DET"]
- `aliases`: []

### TERM-DMA
- `name`: `DMA`
- `type`: `term`
- `primary_page`: `17`
- `physical_pages`: [17, 18, 31, 68, 76, 83]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p17: #define ADC_DMA_TRANSFER_TIMEOUT (0x0000ffffUL)"]
- `aliases`: []

### TERM-MCAL
- `name`: `MCAL`
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: [2, 5]
- `section_paths`: ["Revision History"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p2: Updated for MCAL V0.4.0 release"]
- `aliases`: []

### TERM-PTIMER
- `name`: `Ptimer`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 25, 26, 55, 59, 70, 84]
- `section_paths`: ["Chapter 1 ADC Introduction"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p5: to an MCU pin. The ADC driver also includes configurations of channel delays, which is supported by the Ptimer module."]
- `aliases`: ["PTIMER", "programmable timer", "pre-trigger timer", "Ptimer module"]

### TERM-TRGSEL
- `name`: `TRGSEL`
- `type`: `term`
- `primary_page`: `24`
- `physical_pages`: [24, 26, 58]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p24: Trigger source from PTIMER/TRGSEL with SMISC."]
- `aliases`: []

### SYM-ADC-PRIO-MECHANISM-NONE-QUEUING-OFF
- `name`: `Adc_prio_mechanism_NONE_queuing_OFF`
- `type`: `symbol`
- `primary_page`: `48`
- `physical_pages`: [48]
- `section_paths`: ["Chapter 2 Software Design / 2.9 API Sequence Diagram"]
- `brief`: Technical symbol detected in the source text.
- `anchors`: ["p48: sd Adc_prio_mechanism_NONE_queuing_OFF"]
- `aliases`: ["Adc prio mechanism NONE queuing OFF", "Adc_prio_mechanism_NONE_queuing_OFF()"]

### SYM-ADC-TYPES
- `name`: `Adc_types`
- `type`: `symbol`
- `primary_page`: `3`
- `physical_pages`: [3, 15]
- `section_paths`: ["Table of Contents"]
- `brief`: Technical symbol detected in the source text.
- `anchors`: ["p3: Macros in Adc_types.h ............................................................................................................................... 15"]
- `aliases`: ["Adc types", "Adc_types()"]

### SYM-ADC-VERSION
- `name`: `Adc_version`
- `type`: `symbol`
- `primary_page`: `3`
- `physical_pages`: [3, 15]
- `section_paths`: ["Table of Contents"]
- `brief`: Technical symbol detected in the source text.
- `anchors`: ["p3: Macros in Adc_version.h ............................................................................................................................ 15"]
- `aliases`: ["Adc version", "Adc_version()"]

### SYM-EB-TRESOS
- `name`: `EB tresos`
- `type`: `symbol`
- `primary_page`: `51`
- `physical_pages`: [51, 55, 84]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"]
- `brief`: Technical symbol detected in the source text.
- `anchors`: ["p51: EB tresos"]
- `aliases`: ["Tresos", "EB tresos Studio", "EB插件", "配置工具"]

## 9. Search Aliases

### ALIAS-ADC
- `canonical`: `ADC`
- `aliases`: ["Analog-to-Digital Converter", "ADC module", "ADC driver", "模数转换器", "ADC模块"]
- `related_ids`: ["TERM-ADC"]

### ALIAS-AUTOSAR-SWS-ADC
- `canonical`: `AUTOSAR_SWS_ADCDriver`
- `aliases`: ["AUTOSAR ADC SWS", "SWS_Adc", "AUTOSAR Classic R20-11 ADC", "ADC规范"]
- `related_ids`: ["TERM-AUTOSAR"]

### ALIAS-REJECTED-REQUIREMENTS
- `canonical`: `Rejected Requirements`
- `aliases`: ["rejected SWS", "unsupported AUTOSAR requirements", "rejection reason", "未实现需求"]
- `related_ids`: ["SEC-002-001"]

### ALIAS-POWER-STATE
- `canonical`: `ADC low power state`
- `aliases`: ["AdcLowPowerStatesSupport", "Adc_SetPowerState", "Adc_PreparePowerState", "power state change", "低功耗状态"]
- `related_ids`: ["CFG-ADCLOWPOWERSTATESSUPPORT"]

### ALIAS-HW-TRIGGER
- `canonical`: `ADC hardware trigger`
- `aliases`: ["Adc_EnableHardwareTrigger", "AdcDisableHardwareTrigger", "AdcGroupTriggSrc", "HW trigger", "硬件触发"]
- `related_ids`: ["API-ADC-ENABLEHARDWARETRIGGER"]

### ALIAS-SW-TRIGGER
- `canonical`: `ADC software trigger`
- `aliases`: ["Adc_StartGroupConversion", "Adc_StopGroupConversion", "software triggered conversion", "软件触发"]
- `related_ids`: ["API-ADC-STARTGROUPCONVERSION"]

### ALIAS-QUEUE
- `canonical`: `ADC queue`
- `aliases`: ["AdcEnableQueuing", "AdcPriorityQueueMaxDepth", "ADC_QUEUE_MAX_DEPTH_MAX", "SW queue", "队列"]
- `related_ids`: ["CFG-ADCENABLEQUEUING"]

### ALIAS-PTIMER
- `canonical`: `Ptimer`
- `aliases`: ["PTIMER", "pre-trigger timer", "AdcPtimerSettings", "AdcDelayNextPtimer", "Ptimer clock divider"]
- `related_ids`: ["TERM-PTIMER"]

### ALIAS-TRESOS
- `canonical`: `EB tresos`
- `aliases`: ["Tresos", "Tresos configuration", "ECUC configuration", "配置工具", "EB插件"]
- `related_ids`: ["TERM-EB-TRESOS"]

### ALIAS-DET
- `canonical`: `DET`
- `aliases`: ["Development Error Tracer", "ADC_E_*", "development error", "开发错误"]
- `related_ids`: ["TERM-DET"]

### ALIAS-DEM
- `canonical`: `DEM`
- `aliases`: ["Diagnostic Event Manager", "AdcDemEventParameterRefs", "ADC_E_TIMEOUT", "诊断事件"]
- `related_ids`: ["TERM-DEM"]

### ALIAS-NOTIFICATION
- `canonical`: `ADC notification`
- `aliases`: ["Adc_EnableGroupNotification", "Adc_DisableGroupNotification", "AdcNotification", "Adc_NotifyType", "通知回调"]
- `related_ids`: ["API-ADC-ENABLEGROUPNOTIFICATION"]

### ALIAS-DMA
- `canonical`: `ADC DMA`
- `aliases`: ["AdcDmaChannel", "AdcEnableDmaTrasferMode", "ADC_DMA_SUPPORT", "DMA transfer", "DMA传输"]
- `related_ids`: ["TERM-DMA"]

### ALIAS-SEQUENCE-DIAGRAM
- `canonical`: `API Sequence Diagram`
- `aliases`: ["call flow", "UML sequence", "Adc_OneShotUsage", "conversion sequence", "时序图"]
- `related_ids`: ["SEC-002-009"]


## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between ADC_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `ADC_User_Manual.pdf`
- `source_pdf_sha256`: `292dd45707818e6fe14eb79b4c22e5f40542e128712d93fb302d99f1d9d43d0c`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `652`
- `technical_missing_terms_added`: `58`
- `pages_with_added_terms`: `86`
- `supplemented_missing_token_count`: `652`
- `supplemented_missing_technical_token_count`: `58`
- `supplemented_physical_pages_count`: `86`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
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
  - "2.5.1"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "3.1.1"
  - "3.1.7"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "There"
  - "assigned"
  - "combination"
  - "initialize"
  - "input"
  - "instance"
  - "interfaces"
  - "refer"
  - "responsible"
  - "series"
  - "several"
  - "works"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "ADCDriver"
  - "Confidential"
  - "Flagchip"
  - "Our"
  - "Proprietary"
  - "allow"
  - "case"
  - "changes"
  - "corresponding"
  - "gather"
  - "informations"
  - "levels"
  - "respectively"
  - "states"
  - "target"
  - "transitions"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "FALSE"
  - "Flagchip"
  - "Initiliazation"
  - "Our"
  - "Proprietary"
  - "action"
  - "background"
  - "callback"
  - "case"
  - "concluded"
  - "considered"
  - "continue"
  - "depending"
  - "entry"
  - "keep"
  - "means"
  - "notified"
  - "order"
  - "powerstate"
  - "process"
  - "relative"
  - "respective"
  - "returns"
  - "second"
  - "setting"
  - "soon"
  - "stored"
  - "synchronuous"
  - "target"
  - "track"
  - "transitions"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "0x0c"
  - "Async"
  - "Asynchronous"
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "None"
  - "Our"
  - "Proprietary"
  - "Reentrancy"
  - "Reentrant"
  - "Return"
  - "Sync"
  - "Syntax"
  - "address"
  - "all"
  - "application"
  - "array"
  - "busy"
  - "correctly"
  - "ensure"
  - "failed"
  - "hex"
  - "hold"
  - "implemention"
  - "inout"
  - "occured"
  - "operation"
  - "out"
  - "peripheral"
  - "pointer"
  - "points"
  - "specific"
  - "still"
  - "stored"
  - "transitions"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Async"
  - "Asynchronous"
  - "Confidential"
  - "Flagchip"
  - "None"
  - "Proprietary"
  - "Reentrancy"
  - "Reentrant"
  - "Return"
  - "SWC"
  - "Sync"
  - "Syntax"
  - "applies"
  - "concurrent"
  - "different"
  - "guarantee"
  - "happening"
  - "hex"
  - "inout"
  - "out"
  - "place"
  - "restrictions"
  - "same"
  - "take"
  - "triggers"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Async"
  - "Asynchronous"
  - "Confidential"
  - "Disables"
  - "Flagchip"
  - "None"
  - "Proprietary"
  - "Reentrancy"
  - "Reentrant"
  - "Return"
  - "SWC"
  - "Sync"
  - "Syntax"
  - "applies"
  - "hex"
  - "inout"
  - "out"
  - "restrictions"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Async"
  - "Asynchronous"
  - "Confidential"
  - "Disables"
  - "Flagchip"
  - "None"
  - "Proprietary"
  - "Reentrancy"
  - "Reentrant"
  - "Return"
  - "SWC"
  - "Sync"
  - "Syntax"
  - "applies"
  - "assumed"
  - "been"
  - "begins"
  - "case"
  - "consistency"
  - "consistent"
  - "guarantee"
  - "have"
  - "hex"
  - "inout"
  - "more"
  - "multiplicity"
  - "out"
  - "restrictions"
  - "returned"
  - "successfully"
  - "thus"
  - "well"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Adc_Vers"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "already"
  - "busy"
  - "greater"
  - "have"
  - "idle"
  - "ion"
  - "more"
  - "multiplicity"
  - "operation"
  - "running"
  - "several"
  - "than"
  - "thus"
  - "well"
  - "zero"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Mode"
  - "NULL"
  - "Proprietary"
  - "Requested"
  - "Unsupported"
  - "another"
  - "capability"
  - "initializing"
  - "invalid"
  - "more"
  - "pointer"
  - "prepared"
  - "reached"
  - "request"
  - "target"
  - "wrong"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Prescaler"
  - "Proprietary"
  - "Resolutions"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Multicore"
  - "Proprietary"
  - "disables"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "SC1n"
  - "delay"
  - "disables"
  - "implementation"
  - "isn"
  - "runtime"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "ADCDig"
  - "Confidential"
  - "Define"
  - "Flagchip"
  - "Proprietary"
  - "Remove"
  - "Switch"
  - "aborted"
  - "bit"
  - "down"
  - "entered"
  - "finishes"
  - "idle"
  - "maximum"
  - "till"
  - "timeout"
  - "transferring"
  - "wait"
  - "width"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Remove"
  - "across"
  - "all"
  - "configset"
  - "depth"
  - "detection"
  - "optimization"
  - "performance"
  - "remove"
  - "setting"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "AdcChannel_0"
  - "AdcChannel_1"
  - "AdcGroup_0"
  - "Confidential"
  - "Flagchip"
  - "Mode"
  - "Proprietary"
  - "Single"
  - "Support"
  - "TPS_ECUC_02108"
  - "Used"
  - "Values"
  - "all"
  - "already"
  - "been"
  - "compliant"
  - "converted"
  - "differentiate"
  - "interface"
  - "received"
  - "supervisor"
  - "yet"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Circular"
  - "Confidential"
  - "Flagchip"
  - "Indicates"
  - "Proprietary"
  - "Suspend"
  - "Used"
  - "Values"
  - "interface"
  - "received"
  - "restart"
  - "resuming"
  - "shot"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Falling"
  - "Flagchip"
  - "Indicates"
  - "Proprietary"
  - "Rising"
  - "STREAM_COMPLETED"
  - "Used"
  - "Values"
  - "below"
  - "between"
  - "included"
  - "interface"
  - "received"
  - "rising"
  - "select"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "0x0"
  - "Confidential"
  - "Flagchip"
  - "GPT_PREDEF_TIMER_100US_32BIT"
  - "GPT_PREDEF_TIMER_1US_16BIT"
  - "GPT_PREDEF_TIMER_1US_24BIT"
  - "GPT_PREDEF_TIMER_1US_32BIT"
  - "Proprietary"
  - "Select"
  - "Values"
  - "aligned"
  - "below"
  - "bit"
  - "edges"
  - "falling"
  - "included"
  - "left"
  - "predef"
  - "right"
  - "rising"
  - "single"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Old"
  - "Proprietary"
  - "Select"
  - "Values"
  - "instance"
  - "overwritten"
  - "preserved"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Compare"
  - "Confidential"
  - "Flagchip"
  - "Loaded"
  - "Proprietary"
  - "Select"
  - "UNTER"
  - "UNTER_OR_NEXT_TRIGGER"
  - "Values"
  - "all"
  - "count"
  - "detecting"
  - "hits"
  - "immediately"
  - "input"
  - "load"
  - "max"
  - "operation"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "2.5.1"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Select"
  - "TrgSel"
  - "Values"
  - "factor"
  - "multiplication"
  - "pointer"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Definition"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "factor"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "GroupCount"
  - "HwUnitCount"
  - "Proprietary"
  - "Total"
  - "containing"
  - "embedded"
  - "initializing"
  - "map"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Access"
  - "CFG1"
  - "Confidential"
  - "Flagchip"
  - "INT_ENABLE"
  - "OneShot"
  - "Optional"
  - "Proprietary"
  - "Single"
  - "belongs"
  - "eAccessMode"
  - "eMode"
  - "eReplecementMode"
  - "factor"
  - "pPtimerNofitication"
  - "specific"
  - "u32AdcCfg2Register"
  - "u32AdcIntEnRegister"
  - "u32AdcPtimerClockSettings"
  - "u32AdcSmprRegister"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Assigned"
  - "AssignedChannelCount"
  - "Buffer"
  - "ChId"
  - "Confidential"
  - "Disables"
  - "Flagchip"
  - "Mode"
  - "Proprietary"
  - "Whether"
  - "bEnableHwAvg"
  - "bUseContinuousPeriod"
  - "delay"
  - "eBufferMode"
  - "eTransferType"
  - "eTriggerEdge"
  - "method"
  - "next"
  - "pAssignment"
  - "pDelay"
  - "period"
  - "u16PtimerDelay"
  - "u16PtimerPeriod"
  - "u32AvgSelect"
  - "u8AdcGroupBackToBack"
  - "u8AdcGroupChannelDelays"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "ADC_SCn"
  - "Confidential"
  - "Filled"
  - "Flagchip"
  - "High"
  - "HwNormalQueueIndex"
  - "Low"
  - "Proprietary"
  - "Queue"
  - "Queued"
  - "ResultIndex"
  - "SwNormalQueue"
  - "Used"
  - "bAdcChannelLimitcheck"
  - "being"
  - "converted"
  - "currently"
  - "depth"
  - "disables"
  - "eAlreadyConverted"
  - "eChannelRange"
  - "eConversion"
  - "eHwTriggering"
  - "eNotification"
  - "executing"
  - "filled"
  - "pResultsBuffer"
  - "previously"
  - "selection"
  - "slots"
  - "u8ScUsed"
  - "volatile"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "Proprietary"
  - "Standard"
  - "Starts"
  - "Units"
  - "Variant"
  - "address"
  - "all"
  - "comparable"
  - "pDataBufferPtr"
  - "passed"
  - "point"
  - "pointer"
  - "requires"
  - "specific"
  - "their"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Disables"
  - "Flagchip"
  - "Proprietary"
  - "Reads"
  - "Standard"
  - "Stops"
  - "address"
  - "addressed"
  - "all"
  - "ascending"
  - "completed"
  - "contrast"
  - "last"
  - "order"
  - "pDataBufferPtr"
  - "pointer"
  - "round"
  - "starting"
  - "storage"
  - "stored"
  - "stores"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Disables"
  - "Flagchip"
  - "Proprietary"
  - "PtrToSamplePtr"
  - "Reads"
  - "With"
  - "account"
  - "all"
  - "completed"
  - "last"
  - "per"
  - "pointer"
  - "pointing"
  - "position"
  - "round"
  - "stored"
  - "take"
  - "valid"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "deinitializes"
  - "ensures"
  - "initializes"
  - "pointer"
  - "starting"
  - "stopping"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "disabling"
  - "enabling"
  - "responsible"
  - "updating"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "Proprietary"
  - "about"
  - "care"
  - "deinitializes"
  - "end"
  - "ends"
  - "filled"
  - "injected"
  - "per"
  - "reads"
  - "takes"
  - "transitions"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "disables"
  - "enables"
  - "more"
  - "other"
  - "performs"
  - "platforms"
  - "starting"
  - "there"
  - "triggers"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "allowed"
  - "configures"
  - "converted"
  - "critical"
  - "eTrigger"
  - "exceeds"
  - "interruptions"
  - "max"
  - "maximum"
  - "other"
  - "parts"
  - "protected"
  - "regions"
  - "remaining"
  - "running"
  - "separated"
  - "standby"
  - "stops"
  - "u8NumChannel"
  - "waits"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Whether"
  - "case"
  - "checks"
  - "completed"
  - "filled"
  - "gets"
  - "pointer"
  - "restarts"
  - "whether"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Dma"
  - "Flagchip"
  - "Proprietary"
  - "configures"
  - "converted"
  - "deinitializes"
  - "eTrigger"
  - "initializes"
  - "last"
  - "multiplication"
  - "occured"
  - "pGroupPtr"
  - "pointer"
  - "reconfigures"
  - "u16CurrentChannel"
  - "u8NumChannel"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "ECU"
  - "Flagchip"
  - "Proprietary"
  - "State"
  - "Whether"
  - "changes"
  - "converts"
  - "disables"
  - "flag"
  - "make"
  - "responsible"
  - "via"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "cons"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Adc_StartGroupConvers"
  - "Adc_Status"
  - "Confidential"
  - "Convers"
  - "Flagchip"
  - "Proprietary"
  - "completed"
  - "convers"
  - "ion"
  - "loop"
  - "tart"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Adc_SW_triggered_continuous_w"
  - "Adc_StartGroupConvers"
  - "Adc_StopGroupConvers"
  - "Confidential"
  - "Convers"
  - "Flagchip"
  - "Proprietary"
  - "Std_ReturnTypeAdc_ReadGroup"
  - "completed"
  - "convers"
  - "ion"
  - "ith_notifications"
  - "ongoing"
  - "tart"
  - "top"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Adc_Dis"
  - "Adc_HW_triggered_continuous_w"
  - "Confidential"
  - "Convers"
  - "Disabled"
  - "Enabled"
  - "Flagchip"
  - "Proprietary"
  - "able"
  - "ableGroupNotification"
  - "ableHardwareTrigger"
  - "completed"
  - "convers"
  - "dis"
  - "ent"
  - "ion"
  - "ith_notification"
  - "loop"
  - "ource"
  - "sta"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Adc_Dis"
  - "Confidential"
  - "Convers"
  - "Flagchip"
  - "Proprietary"
  - "able"
  - "ableGroupNotification"
  - "abled"
  - "automatically"
  - "completed"
  - "completely"
  - "convers"
  - "dis"
  - "filled"
  - "firs"
  - "ion"
  - "res"
  - "round"
  - "till"
  - "treaming"
  - "ults"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "Adc_StartGroupConvers"
  - "Confidential"
  - "Convers"
  - "Det_ReportError"
  - "Flagchip"
  - "Group3"
  - "Group_x"
  - "Proprietary"
  - "completed"
  - "convers"
  - "ion"
  - "ongoing"
  - "tart"

### TEXTSUP-PAGE-0049
- `physical_page`: `49`
- `additional_text_terms`:
  - "Adc_StartGroupConvers"
  - "Confidential"
  - "Convers"
  - "Flagchip"
  - "Group_x"
  - "Proprietary"
  - "completed"
  - "convers"
  - "ion"
  - "ongoing"
  - "reques"
  - "tart"
  - "tore"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "Adc_StartGroupConvers"
  - "Confidential"
  - "Convers"
  - "Flagchip"
  - "Proprietary"
  - "abort"
  - "completed"
  - "convers"
  - "ion"
  - "ongoing"
  - "pend"
  - "reques"
  - "res"
  - "tart"
  - "tion"
  - "tore"
  - "ume"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "3.1.1"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0052
- `physical_page`: `52`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0053
- `physical_page`: `53`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0054
- `physical_page`: `54`
- `additional_text_terms`:
  - "3.1.7"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0055
- `physical_page`: `55`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Label"
  - "Proprietary"
  - "Variant"
  - "VariantPostBuild"
  - "VariantPreCompile"
  - "accessing"
  - "allows"
  - "contains"
  - "depending"
  - "grouping"
  - "sub"
  - "symbolic"

### TEXTSUP-PAGE-0056
- `physical_page`: `56`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Logical"
  - "McuClockReferencePoint"
  - "Optional"
  - "Proprietary"
  - "Ref"
  - "Refer"
  - "Selects"
  - "Specifies"
  - "chapter"
  - "chip"
  - "details"
  - "different"
  - "factor"
  - "implemention"
  - "input"
  - "modification"
  - "node"
  - "provided"
  - "select"
  - "sources"
  - "specific"
  - "statically"

### TEXTSUP-PAGE-0057
- `physical_page`: `57`
- `additional_text_terms`:
  - "Confidential"
  - "Dma"
  - "DmaChannelConfig"
  - "Flagchip"
  - "Proprietary"
  - "Used"
  - "accurately"
  - "bit"
  - "calculated"
  - "converting"
  - "instance"
  - "left"
  - "needs"
  - "node"
  - "right"
  - "select"
  - "stabilization"

### TEXTSUP-PAGE-0058
- `physical_page`: `58`
- `additional_text_terms`:
  - "Calculated"
  - "Confidential"
  - "Currently"
  - "Flagchip"
  - "Proprietary"
  - "Selects"
  - "TrgSel"
  - "around"
  - "make"

### TEXTSUP-PAGE-0059
- `physical_page`: `59`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0060
- `physical_page`: `60`
- `additional_text_terms`:
  - "Confidential"
  - "Counting"
  - "DIVIDE_BY_128"
  - "DIVIDE_MULTIPLY_"
  - "DIVIDE_MULTIPLY_1"
  - "DIVIDE_MULTIPLY_10"
  - "DIVIDE_MULTIPLY_20"
  - "DIVIDE_MULTIPLY_40"
  - "Determines"
  - "Flagchip"
  - "Multiplication"
  - "Proprietary"
  - "Selects"
  - "factor"
  - "four"
  - "multiplication"
  - "peripheral"
  - "times"
  - "twice"

### TEXTSUP-PAGE-0061
- `physical_page`: `61`
- `additional_text_terms`:
  - "Callback"
  - "Confidential"
  - "Determines"
  - "False"
  - "Flagchip"
  - "FunctionName"
  - "Proprietary"
  - "Selects"
  - "averaged"
  - "create"
  - "generates"
  - "how"
  - "many"
  - "occurred"
  - "pointer"

### TEXTSUP-PAGE-0062
- `physical_page`: `62`
- `additional_text_terms`:
  - "ADC0_SE0"
  - "Confidential"
  - "Flagchip"
  - "Note"
  - "Proprietary"
  - "appropriate"
  - "button"
  - "calculate"
  - "capability"
  - "contains"
  - "defines"
  - "depending"
  - "depends"
  - "package"
  - "sync"
  - "you"

### TEXTSUP-PAGE-0063
- `physical_page`: `63`
- `additional_text_terms`:
  - "Confidential"
  - "False"
  - "Flagchip"
  - "High"
  - "Low"
  - "Proprietary"
  - "account"
  - "active"
  - "boarders"
  - "case"
  - "defined"
  - "defines"
  - "disables"
  - "taken"

### TEXTSUP-PAGE-0064
- `physical_page`: `64`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Lower"
  - "Proprietary"
  - "Upper"
  - "analogue"
  - "converted"
  - "digital"
  - "during"
  - "implementation"
  - "representation"

### TEXTSUP-PAGE-0065
- `physical_page`: `65`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Option"
  - "Proprietary"
  - "SAMPLE_TIME_OPTION_2"
  - "SAMPLE_TIME_OPTION_3"
  - "contains"
  - "determined"
  - "determines"
  - "during"
  - "sampled"
  - "select"
  - "times"
  - "updated"

### TEXTSUP-PAGE-0066
- `physical_page`: `66`
- `additional_text_terms`:
  - "Confidential"
  - "ECUC_Adc_00317"
  - "Flagchip"
  - "Proprietary"
  - "accessing"
  - "allows"
  - "assigned"
  - "defined"
  - "derived"
  - "ignored"
  - "shortName"
  - "symbolic"

### TEXTSUP-PAGE-0067
- `physical_page`: `67`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Note"
  - "Only"
  - "Proprietary"
  - "Reload"
  - "TrgSel"
  - "case"
  - "connected"
  - "embedded"
  - "event"
  - "implementation"
  - "possible"
  - "react"
  - "select"
  - "signal"
  - "sources"

### TEXTSUP-PAGE-0068
- `physical_page`: `68`
- `additional_text_terms`:
  - "Callback"
  - "Confidential"
  - "Configure"
  - "Flagchip"
  - "FuctionName"
  - "Note"
  - "Proprietary"
  - "Select"
  - "acquired"
  - "around"
  - "assumes"
  - "circular"
  - "completed"
  - "end"
  - "per"
  - "pointer"
  - "processed"
  - "reached"
  - "run"
  - "same"
  - "since"
  - "single"
  - "soon"
  - "stops"
  - "stream"
  - "whenever"
  - "wraps"

### TEXTSUP-PAGE-0069
- `physical_page`: `69`
- `additional_text_terms`:
  - "Confidential"
  - "False"
  - "Flagchip"
  - "However"
  - "PTIMER_DLYx_CHn"
  - "Proprietary"
  - "Within"
  - "accurate"
  - "added"
  - "all"
  - "bac"
  - "between"
  - "causing"
  - "close"
  - "coherence"
  - "complete"
  - "convert"
  - "converted"
  - "could"
  - "defined"
  - "delay"
  - "ensured"
  - "ensures"
  - "except"
  - "happen"
  - "have"
  - "immediately"
  - "implicitly"
  - "instance"
  - "involved"
  - "larger"
  - "last"
  - "least"
  - "multiplied"
  - "needs"
  - "next"
  - "occur"
  - "once"
  - "ones"
  - "otherwise"
  - "per"
  - "possible"
  - "processing"
  - "quickly"
  - "received"
  - "rest"
  - "same"
  - "second"
  - "sequences"
  - "split"
  - "sub"
  - "than"
  - "them"
  - "too"
  - "unless"
  - "via"
  - "why"

### TEXTSUP-PAGE-0070
- `physical_page`: `70`
- `additional_text_terms`:
  - "Compare"
  - "Confidential"
  - "Cycle"
  - "Cycles"
  - "FC4150F512K"
  - "False"
  - "First"
  - "Flagchip"
  - "Mode"
  - "Proprietary"
  - "Single"
  - "added"
  - "adder"
  - "all"
  - "between"
  - "big"
  - "bit"
  - "bus"
  - "calculate"
  - "causing"
  - "chosen"
  - "complete"
  - "convert"
  - "convertion"
  - "defined"
  - "delay"
  - "determined"
  - "enough"
  - "ensure"
  - "formula"
  - "greater"
  - "have"
  - "large"
  - "maximum"
  - "more"
  - "needs"
  - "period"
  - "request"
  - "restarts"
  - "risking"
  - "same"
  - "setting"
  - "than"
  - "thus"
  - "together"
  - "total"

### TEXTSUP-PAGE-0071
- `physical_page`: `71`
- `additional_text_terms`:
  - "Confidential"
  - "Delay"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Selects"
  - "Since"
  - "accommodate"
  - "between"
  - "big"
  - "considered"
  - "converted"
  - "delay"
  - "difference"
  - "different"
  - "enough"
  - "ensure"
  - "implemetion"
  - "increasing"
  - "mapped"
  - "multi"
  - "multiple"
  - "rest"
  - "supports"
  - "zero"

### TEXTSUP-PAGE-0072
- `physical_page`: `72`
- `additional_text_terms`:
  - "Confidential"
  - "Determines"
  - "EDITABLE"
  - "False"
  - "Flagchip"
  - "Maps"
  - "Multicore"
  - "Proprietary"
  - "Support"
  - "activated"
  - "averaged"
  - "create"
  - "functionality"
  - "how"
  - "many"
  - "mapped"
  - "node"
  - "zero"

### TEXTSUP-PAGE-0073
- `physical_page`: `73`
- `additional_text_terms`:
  - "Confidential"
  - "Determines"
  - "Disabled"
  - "Enabled"
  - "False"
  - "Flagchip"
  - "Note"
  - "Proprietary"
  - "Queue"
  - "Switches"
  - "True"
  - "active"
  - "case"
  - "detection"

### TEXTSUP-PAGE-0074
- `physical_page`: `74`
- `additional_text_terms`:
  - "Confidential"
  - "Determines"
  - "Disabled"
  - "Enabled"
  - "False"
  - "Flagchip"
  - "Proprietary"
  - "True"
  - "runtime"

### TEXTSUP-PAGE-0075
- `physical_page`: `75`
- `additional_text_terms`:
  - "ADC_E_TIMEOUTproduction"
  - "Confidential"
  - "Convertion"
  - "Determines"
  - "Flagchip"
  - "Proprietary"
  - "Status"
  - "True"
  - "Two"
  - "applies"
  - "calibration"
  - "completed"
  - "functionality"
  - "isn"
  - "left"
  - "levels"
  - "platform"
  - "priorities"
  - "raw"
  - "reported"
  - "rest"
  - "right"
  - "selection"
  - "signals"
  - "skipped"
  - "than"
  - "till"
  - "timeout"
  - "typically"
  - "updated"
  - "wait"
  - "whether"

### TEXTSUP-PAGE-0076
- `physical_page`: `76`
- `additional_text_terms`:
  - "ADCDriver"
  - "ADC_E_TIMEOUTproduction"
  - "Confidential"
  - "Dma"
  - "False"
  - "Flagchip"
  - "Proprietary"
  - "Status"
  - "all"
  - "busy"
  - "depth"
  - "disables"
  - "dma"
  - "ensure"
  - "finish"
  - "functionality"
  - "incoming"
  - "occurs"
  - "platform"
  - "reported"
  - "rest"
  - "setting"
  - "skipped"
  - "there"
  - "till"
  - "timeout"
  - "transfering"
  - "updated"
  - "wait"

### TEXTSUP-PAGE-0077
- `physical_page`: `77`
- `additional_text_terms`:
  - "ADCDriver"
  - "Confidential"
  - "Flagchip"
  - "FunctionName"
  - "IoHwAbs"
  - "Maps"
  - "Proprietary"
  - "callback"
  - "component"
  - "contains"
  - "corresponding"
  - "defined"
  - "defines"
  - "different"
  - "instance"
  - "least"
  - "make"
  - "multiple"
  - "operate"
  - "reached"
  - "specific"
  - "supplier"
  - "zero"

### TEXTSUP-PAGE-0078
- `physical_page`: `78`
- `additional_text_terms`:
  - "Confidential"
  - "EcuC"
  - "EcucPartition"
  - "EcucPartitionCollection"
  - "End"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Selects"
  - "Since"
  - "These"
  - "Watchdong"
  - "certain"
  - "implemetion"
  - "interrupts"
  - "kernel"
  - "mapped"
  - "multi"
  - "optimizing"
  - "removing"
  - "size"
  - "supports"
  - "there"
  - "whether"
  - "zero"

### TEXTSUP-PAGE-0079
- `physical_page`: `79`
- `additional_text_terms`:
  - "Additional"
  - "Boolean_Label"
  - "Confidential"
  - "Flagchip"
  - "Information"
  - "Note"
  - "Proprietary"
  - "accuracy"
  - "apply"
  - "class"
  - "covered"
  - "determined"
  - "have"
  - "interpreted"
  - "language"
  - "routine"
  - "rules"
  - "setting"
  - "sign"
  - "signed"
  - "since"
  - "specify"
  - "they"
  - "whether"

### TEXTSUP-PAGE-0080
- `physical_page`: `80`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Integer_Label"
  - "Minor"
  - "Proprietary"
  - "about"
  - "all"
  - "appropriate"
  - "contains"
  - "implementation"
  - "specification"

### TEXTSUP-PAGE-0081
- `physical_page`: `81`
- `additional_text_terms`:
  - "Autosar"
  - "Confidential"
  - "Extension"
  - "Flagchip"
  - "Integer_Label"
  - "Minor"
  - "Patch"
  - "Proprietary"
  - "Vendor"
  - "according"
  - "dedicated"
  - "implementation"
  - "numbering"
  - "specific"

### TEXTSUP-PAGE-0082
- `physical_page`: `82`
- `additional_text_terms`:
  - "Confidential"
  - "EcucPartition"
  - "Enabled"
  - "False"
  - "Flagchip"
  - "Proprietary"
  - "according"
  - "all"
  - "allowed"
  - "checked"
  - "converted"
  - "defined"
  - "done"
  - "enables"
  - "globally"
  - "least"
  - "needs"
  - "once"
  - "possibility"
  - "routed"
  - "setting"

### TEXTSUP-PAGE-0083
- `physical_page`: `83`
- `additional_text_terms`:
  - "Confidential"
  - "DemEventId"
  - "DemEventParameter"
  - "EventId"
  - "False"
  - "Flagchip"
  - "Mode"
  - "Note"
  - "Proprietary"
  - "Serr_NotifyErrorEvent"
  - "adapt"
  - "appropriate"
  - "case"
  - "corresponding"
  - "elements"
  - "extended"
  - "implementation"
  - "invoked"
  - "measures"
  - "need"
  - "occurs"
  - "provided"
  - "run"
  - "special"
  - "specific"
  - "specification"
  - "standardized"
  - "supervisor"
  - "taken"

### TEXTSUP-PAGE-0084
- `physical_page`: `84`
- `additional_text_terms`:
  - "Before"
  - "Confidential"
  - "Configure"
  - "Flagchip"
  - "Proprietary"
  - "You"
  - "add"
  - "added"
  - "configuring"
  - "delay"
  - "depth"
  - "ensure"
  - "exceed"
  - "frequency"
  - "interrupts"
  - "least"
  - "more"
  - "next"
  - "non"
  - "peripheral"
  - "select"
  - "than"
  - "you"
  - "zero"

### TEXTSUP-PAGE-0085
- `physical_page`: `85`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0086
- `physical_page`: `86`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0087
- `physical_page`: `87`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-GLOBAL-001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87]
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

### WARN-0006-0012
- `severity`: `medium`
- `category`: `rejected_requirement_tables`
- `physical_pages`: [6, 7, 8, 9, 10, 11, 12]
- `affected_ids`: ["TBL-*-REQ-*", "REQ-SWS-ADC-*"]
- `message`: Rejected Requirement panels are table-like blocks; Manifest indexes each requirement ID and page, but does not copy full descriptions.
- `recommended_action`: Verify full requirement/rejection text on pages 6-12.

### WARN-0042-0050
- `severity`: `medium`
- `category`: `vector_diagram`
- `physical_pages`: [42, 43, 44, 45, 46, 47, 48, 49, 50]
- `affected_ids`: ["FIG-0042-001", "FIG-0050-001"]
- `message`: API sequence diagrams are mostly vector/text objects with small raster icons; Manifest uses section headings and visible sequence diagram labels as anchors.
- `recommended_action`: Render source pages 42-50 for exact visual call ordering.

### WARN-0055-0087
- `severity`: `medium`
- `category`: `screenshot_index`
- `physical_pages`: [55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87]
- `affected_ids`: ["FIG-0055-*", "TBL-*-CFGPROP-*"]
- `message`: Tresos configuration screenshots are indexed with image-block bboxes where available, but screenshot content is not OCR-reconstructed into full cell grids.
- `recommended_action`: Use Manifest to locate item; verify screenshot and property table against PDF.

### WARN-GLOBAL-004
- `severity`: `low`
- `category`: `source_typo`
- `physical_pages`: [83]
- `affected_ids`: ["CFG-ADCENABLEDMATRASFERMODE"]
- `message`: Source text uses `AdcEnableDmaTrasferMode` spelling; Manifest preserves this source spelling and provides aliases for DMA transfer mode.
- `recommended_action`: Search both `Trasfer` and `Transfer` variants if needed.

## 11. Self Check Report

### SELF-CHECK-SUMMARY
- `source_pdf`: `ADC_User_Manual.pdf`
- `source_pdf_sha256`: `292dd45707818e6fe14eb79b4c22e5f40542e128712d93fb302d99f1d9d43d0c`
- `pdf_page_count`: `87`
- `indexed_physical_pages_count`: `87`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `page_coverage_status`: `pass`
- `physical_page_numbering`: `1-based PDF physical page numbers only`
- `printed_page_policy`: `printed_page is auxiliary and equal to visible footer number when present; page 1 uses cover`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `61`
- `ocr_status`: `not_run_text_layer_available`
- `sha256_recorded`: `true`
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `652`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `manifest_staleness_check`: `compare local PDF SHA256 to source_pdf_sha256 before use`
- `table_confidence_present`: `true`
- `figure_confidence_present`: `true`
- `stable_id_policy`: `DOC/SEC/PAGE/SEG/TBL/FIG/REQ/API/CFG/TERM IDs generated deterministically from page numbers and source names`
- `overall_status`: `pass_with_warnings`

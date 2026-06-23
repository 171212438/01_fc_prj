---
manifest_schema_version: "1.1"
source_pdf: "ICU_User_Manual.pdf"
source_pdf_sha256: "7d2f833f34dad1b5f10d8abe0e1628f83e338f014b3d27b82facc6efc1427827"
source_pdf_size_bytes: 6714391
pdf_page_count: 122
generated_at: "2026-06-19T13:04:05Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: ICU_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `ICU_User_Manual.pdf`
- `source_pdf_sha256`: `7d2f833f34dad1b5f10d8abe0e1628f83e338f014b3d27b82facc6efc1427827`
- `source_pdf_size_bytes`: `6714391`
- `pdf_page_count`: `122`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx ICU User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T13:04:05Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `71`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL ICU module - User Manual"
- `module_scope`: "ICU driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 ICU Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["ICU", "Input Capture Unit", "AUTOSAR_SWS_ICUDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Icu", "Ftu", "FTU", "Aontimer", "AONTIMER"]
- `summary`: "This 122-page user manual indexes ICU content across source physical pages 1-122, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
- `retrieval_note`: "Use Page Locator Map or Page Segment Index to locate a physical page, then verify exact identifiers, tables, screenshots and wording in the source PDF."

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `None`
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["ICU", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx ICU User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["ICU", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["ICU", "Icu", "Channel", "FC7xxx", "Icu_Types", "Notification", "Inquire", "Icu_Version"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "ICU Introduction"
- `path`: "Chapter 1 ICU Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Port", "Cmp", "edge", "provides"]
- `anchor`: "Chapter 1 ICU Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 ICU Introduction / 1.1 Requirements"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Port", "Cmp", "edge", "provides"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 ICU Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Port", "Cmp", "edge", "provides"]
- `anchor`: "1.2"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `84`
- `printed_page_start`: `6`
- `printed_page_end`: `84`
- `keywords`: ["const", "void", "ICU", "channel", "Diagram", "Returns", "Channel", "define"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["ICU", "Icu", "Icu_Irq", "Rejected", "Requirement", "Icu_Cbk", "FC7xxx", "SWS_Icu_00006"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["ICU", "FC7xxx", "Structure"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `8`
- `physical_page_end`: `14`
- `printed_page_start`: `8`
- `printed_page_end`: `14`
- `keywords`: ["define", "STD_ON", "ICU", "Icu", "can", "STD_OFF", "Ftu", "FTU"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in Icu.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `physical_page_start`: `8`
- `physical_page_end`: `10`
- `printed_page_start`: `8`
- `printed_page_end`: `10`
- `keywords`: ["define", "ICU", "Icu", "invalid", "FC7xxx", "called", "Icu_SetMode", "Icu_StopTimestamp"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in Icu_Version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Icu_Version.h"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["ICU", "define", "Definition", "FC7xxx", "ICU_INSTANCE_ID", "ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK", "BIT0", "bit"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in Icu_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `physical_page_start`: `11`
- `physical_page_end`: `14`
- `printed_page_start`: `11`
- `printed_page_end`: `14`
- `keywords`: ["define", "STD_ON", "ICU", "can", "Icu", "STD_OFF", "Ftu", "FTU"]
- `anchor`: "2.3.3"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `15`
- `physical_page_end`: `16`
- `printed_page_start`: `15`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "Enumeration", "channel", "Values", "STD_ON"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enumerations in Icu_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h"
- `physical_page_start`: `15`
- `physical_page_end`: `16`
- `printed_page_start`: `15`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "Enumeration", "channel", "Values", "STD_ON"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Icu_ModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.1 Icu_ModeType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "STD_ON", "Icu_ModeType", "Enumeration", "Values"]
- `anchor`: "2.4.1.1"

### SEC-002-004-001-002
- `source_number`: `2.4.1.2`
- `title`: "Icu_InputStateType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.2 Icu_InputStateType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "STD_ON", "Icu_ModeType", "Enumeration", "Values"]
- `anchor`: "2.4.1.2"

### SEC-002-004-001-003
- `source_number`: `2.4.1.3`
- `title`: "Icu_InputLevelType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.3 Icu_InputLevelType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "STD_ON", "Icu_ModeType", "Enumeration", "Values"]
- `anchor`: "2.4.1.3"

### SEC-002-004-001-004
- `source_number`: `2.4.1.4`
- `title`: "Icu_ActivationType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.4 Icu_ActivationType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "STD_ON", "Icu_ModeType", "Enumeration", "Values"]
- `anchor`: "2.4.1.4"

### SEC-002-004-001-005
- `source_number`: `2.4.1.5`
- `title`: "Icu_MeasurementModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.5 Icu_MeasurementModeType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration", "Definition", "Mode", "Icu_SignalMeasurementPropertyType"]
- `anchor`: "2.4.1.5"

### SEC-002-004-001-006
- `source_number`: `2.4.1.6`
- `title`: "Icu_SignalMeasurementPropertyType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.6 Icu_SignalMeasurementPropertyType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration", "Definition", "Mode", "Icu_SignalMeasurementPropertyType"]
- `anchor`: "2.4.1.6"

### SEC-002-004-001-007
- `source_number`: `2.4.1.7`
- `title`: "Icu_TimestampBufferType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.7 Icu_TimestampBufferType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration", "Definition", "Mode", "Icu_SignalMeasurementPropertyType"]
- `anchor`: "2.4.1.7"

### SEC-002-004-001-008
- `source_number`: `2.4.1.8`
- `title`: "Icu__TimestampDmaChannelState"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.8 Icu__TimestampDmaChannelState"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration", "Definition", "Mode", "Icu_SignalMeasurementPropertyType"]
- `anchor`: "2.4.1.8"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `17`
- `physical_page_end`: `20`
- `printed_page_start`: `17`
- `printed_page_end`: `20`
- `keywords`: ["ICU", "const", "FTU", "PORT", "AONTIMER", "Ftu", "Port", "Aontimer"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Icu_AontimerHwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Icu_AontimerHwConfigType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["ICU", "Aontimer", "typedef", "Icu_AontimerModuleConfigType", "Icu_AontimerHwConfigType", "const", "FC7xxx", "ICU_DMA_CHANNEL_STATE_IDLE"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Icu_AontimerModuleConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Icu_AontimerModuleConfigType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["ICU", "Aontimer", "typedef", "Icu_AontimerModuleConfigType", "Icu_AontimerHwConfigType", "const", "FC7xxx", "ICU_DMA_CHANNEL_STATE_IDLE"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Icu_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Icu_ConfigType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["ICU", "Icu", "Ftu", "channel", "const", "Icu_ChannelConfigType", "Icu_ConfigType", "FC7xxx"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Icu_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Icu_ChannelConfigType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["ICU", "Icu", "Ftu", "channel", "const", "Icu_ChannelConfigType", "Icu_ConfigType", "FC7xxx"]
- `anchor`: "2.6.4"

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: "Icu_DutyCycleType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu", "Icu_Ftu_HwConfigType", "channel", "Icu_DutyCycleType"]
- `anchor`: "2.6.5"

### SEC-002-006-006
- `source_number`: `2.6.6`
- `title`: "Icu_HwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 Icu_HwConfigType"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu", "Icu_Ftu_HwConfigType", "channel", "Icu_DutyCycleType"]
- `anchor`: "2.6.6"

### SEC-002-006-007
- `source_number`: `2.6.7`
- `title`: "Icu_Ftu_HwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.7 Icu_Ftu_HwConfigType"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu", "Icu_Ftu_HwConfigType", "channel", "Icu_DutyCycleType"]
- `anchor`: "2.6.7"

### SEC-002-006-008
- `source_number`: `2.6.8`
- `title`: "Icu_FtuModuleConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType"]
- `anchor`: "2.6.8"

### SEC-002-006-009
- `source_number`: `2.6.9`
- `title`: "Icu_Port_HwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.9 Icu_Port_HwConfigType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType"]
- `anchor`: "2.6.9"

### SEC-002-006-010
- `source_number`: `2.6.10`
- `title`: "Icu_PortModuleConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.10 Icu_PortModuleConfigType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType"]
- `anchor`: "2.6.10"

### SEC-002-006-011
- `source_number`: `2.6.11`
- `title`: "Icu_CmpHwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.11 Icu_CmpHwConfigType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType"]
- `anchor`: "2.6.11"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `21`
- `physical_page_end`: `31`
- `printed_page_start`: `21`
- `printed_page_end`: `31`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "void", "channel", "Returns", "Diagram", "Icu"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Icu.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h"
- `physical_page_start`: `21`
- `physical_page_end`: `31`
- `printed_page_start`: `21`
- `printed_page_end`: `31`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "void", "channel", "Returns", "Diagram", "Icu"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `physical_page_start`: `21`
- `physical_page_end`: `22`
- `printed_page_start`: `21`
- `printed_page_end`: `22`
- `keywords`: ["ICU", "Icu", "FC7xxx", "Icu_Init", "Icu_ConfigType", "ConfigPtr", "void", "const"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Icu_DeInit ( void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.2 void Icu_DeInit ( void)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["ICU", "void", "Icu_DeInit", "Icu_SetMode", "Icu_ModeType", "FC7xxx", "ConfigPtr", "Returns"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "void Icu_SetMode ( Icu_ModeType Mode )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.3 void Icu_SetMode ( Icu_ModeType Mode )"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["ICU", "void", "Icu_DeInit", "Icu_SetMode", "Icu_ModeType", "FC7xxx", "ConfigPtr", "Returns"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup", "Icu_EnableWakeup", "FC7xxx", "Diagram"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "void Icu_EnableWakeup ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.5 void Icu_EnableWakeup ( Icu_ChannelType Channel )"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup", "Icu_EnableWakeup", "FC7xxx", "Diagram"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel", "WakeupSource", "Icu_CheckWakeup", "EcuM_WakeupSourceType"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "void Icu_SetActivationCondition ( Icu_ChannelType Channel, Icu_ActivationType Activation )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.7 void Icu_SetActivationCondition ( Icu_ChannelType Channel, Icu_ActivationType Activation )"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel", "WakeupSource", "Icu_CheckWakeup", "EcuM_WakeupSourceType"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "void Icu_DisableNotification ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.8 void Icu_DisableNotification ( Icu_ChannelType Channel )"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel", "WakeupSource", "Icu_CheckWakeup", "EcuM_WakeupSourceType"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState", "Returns", "Icu_EnableNotification", "Icu_InputStateType"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "Icu_InputStateType Icu_GetInputState ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.10 Icu_InputStateType Icu_GetInputState ( Icu_ChannelType Channel )"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState", "Returns", "Icu_EnableNotification", "Icu_InputStateType"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr", "BufferSize", "void", "Icu_StartTimestamp"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "void Icu_StopTimestamp ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.12 void Icu_StopTimestamp ( Icu_ChannelType Channel )"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr", "BufferSize", "void", "Icu_StartTimestamp"]
- `anchor`: "2.7.1.12"

### SEC-002-007-001-013
- `source_number`: `2.7.1.13`
- `title`: "Icu_IndexType Icu_GetTimestampIndex ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.13 Icu_IndexType Icu_GetTimestampIndex ( Icu_ChannelType Channel )"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr", "BufferSize", "void", "Icu_StartTimestamp"]
- `anchor`: "2.7.1.13"

### SEC-002-007-001-014
- `source_number`: `2.7.1.14`
- `title`: "void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount", "channel", "Icu_EnableEdgeCount", "Icu_EnableEdgeDetection"]
- `anchor`: "2.7.1.14"

### SEC-002-007-001-015
- `source_number`: `2.7.1.15`
- `title`: "void Icu_EnableEdgeCount ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.15 void Icu_EnableEdgeCount ( Icu_ChannelType Channel )"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount", "channel", "Icu_EnableEdgeCount", "Icu_EnableEdgeDetection"]
- `anchor`: "2.7.1.15"

### SEC-002-007-001-016
- `source_number`: `2.7.1.16`
- `title`: "void Icu_EnableEdgeDetection ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.16 void Icu_EnableEdgeDetection ( Icu_ChannelType Channel )"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount", "channel", "Icu_EnableEdgeCount", "Icu_EnableEdgeDetection"]
- `anchor`: "2.7.1.16"

### SEC-002-007-001-017
- `source_number`: `2.7.1.17`
- `title`: "void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "void", "Icu_DisableEdgeDetection", "Icu_DisableEdgeCount", "FC7xxx"]
- `anchor`: "2.7.1.17"

### SEC-002-007-001-018
- `source_number`: `2.7.1.18`
- `title`: "void Icu_DisableEdgeCount ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.18 void Icu_DisableEdgeCount ( Icu_ChannelType Channel )"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "void", "Icu_DisableEdgeDetection", "Icu_DisableEdgeCount", "FC7xxx"]
- `anchor`: "2.7.1.18"

### SEC-002-007-001-019
- `source_number`: `2.7.1.19`
- `title`: "Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers", "Icu_StartSignalMeasurement", "FC7xxx", "Diagram"]
- `anchor`: "2.7.1.19"

### SEC-002-007-001-020
- `source_number`: `2.7.1.20`
- `title`: "void Icu_StartSignalMeasurement ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.20 void Icu_StartSignalMeasurement ( Icu_ChannelType Channel )"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers", "Icu_StartSignalMeasurement", "FC7xxx", "Diagram"]
- `anchor`: "2.7.1.20"

### SEC-002-007-001-021
- `source_number`: `2.7.1.21`
- `title`: "void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "2.7.1.21"

### SEC-002-007-001-022
- `source_number`: `2.7.1.22`
- `title`: "Icu_ValueType Icu_GetTimeElapsed ( Icu_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.22 Icu_ValueType Icu_GetTimeElapsed ( Icu_ChannelType Channel )"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "2.7.1.22"

### SEC-002-007-001-023
- `source_number`: `2.7.1.23`
- `title`: "void Icu_GetDutyCycleValues ( Icu_ChannelType Channel, Icu_DutyCycleType * DutyCycleValues )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.23 void Icu_GetDutyCycleValues ( Icu_ChannelType Channel, Icu_DutyCycleType * DutyCycleValues )"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "2.7.1.23"

### SEC-002-007-001-024
- `source_number`: `2.7.1.24`
- `title`: "Icu_InputLevelType"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.24 Icu_InputLevelType"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "2.7.1.24"

### SEC-002-007-001-025
- `source_number`: `2.7.1.25`
- `title`: "void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo"]
- `anchor`: "2.7.1.25"

### SEC-002-007-001-026
- `source_number`: `2.7.1.26`
- `title`: "void Icu_StartGlobalTime(const uint32 u32Group)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.26 void Icu_StartGlobalTime(const uint32 u32Group)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo"]
- `anchor`: "2.7.1.26"

### SEC-002-007-001-027
- `source_number`: `2.7.1.27`
- `title`: "void Icu_StopGlobalTime(const uint32 u32Group)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.27 void Icu_StopGlobalTime(const uint32 u32Group)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo"]
- `anchor`: "2.7.1.27"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `32`
- `physical_page_end`: `64`
- `printed_page_start`: `32`
- `printed_page_end`: `64`
- `keywords`: ["const", "void", "channel", "Diagram", "Returns", "ICU", "Referenced", "eHwType"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in Icu_Hw.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h"
- `physical_page_start`: `32`
- `physical_page_end`: `45`
- `printed_page_start`: `32`
- `printed_page_end`: `45`
- `keywords`: ["eHwType", "void", "u32ChannelOfHw", "channel", "ICU", "Icu_HwType", "Diagram", "Returns"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `physical_page_start`: `32`
- `physical_page_end`: `33`
- `printed_page_start`: `32`
- `printed_page_end`: `33`
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "pHwConfig"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["ICU", "void", "u32ChannelOfHw", "pHwConfig", "Icu_HW_ChannelDeInit", "Icu_HwType", "eHwType", "Icu_HW_ModulesDeInit"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.3 void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["ICU", "void", "u32ChannelOfHw", "pHwConfig", "Icu_HW_ChannelDeInit", "Icu_HwType", "eHwType", "Icu_HW_ModulesDeInit"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["ICU", "eHwType", "Icu_HW_ChannelInit", "Icu_HwType", "u32ChannelOfHw", "Icu_ActivationType", "eActivationEdge", "FC7xxx"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["ICU", "u32ChannelOfHw", "eHwType", "void", "Icu_HwType", "eActivationEdge", "Icu_HW_SetSleepMode", "Icu_HW_SetNormalMode"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.6 void"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["ICU", "u32ChannelOfHw", "eHwType", "void", "Icu_HwType", "eActivationEdge", "Icu_HW_SetSleepMode", "Icu_HW_SetNormalMode"]
- `anchor`: "2.8.1.6"

### SEC-002-008-001-007
- `source_number`: `2.8.1.7`
- `title`: "void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "eActivationEdge", "channel", "void", "Icu_HW_SetActivationCondition", "Icu_HwType"]
- `anchor`: "2.8.1.7"

### SEC-002-008-001-008
- `source_number`: `2.8.1.8`
- `title`: "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["ICU", "Icu_InputStateType", "Icu_HW_GetInputState", "Icu_HwType", "eHwType", "u32ChannelOfHw", "FC7xxx", "returns"]
- `anchor`: "2.8.1.8"

### SEC-002-008-001-009
- `source_number`: `2.8.1.9`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.9 void"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_StartTimestamp", "Icu_HwType", "Icu_ActivationType", "eActivationEdge", "FC7xxx"]
- `anchor`: "2.8.1.9"

### SEC-002-008-001-010
- `source_number`: `2.8.1.10`
- `title`: "void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "pEdgeNum", "void", "Icu_HW_StopTimeStamp"]
- `anchor`: "2.8.1.10"

### SEC-002-008-001-011
- `source_number`: `2.8.1.11`
- `title`: "boolean Icu_HW_GetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_EdgeNumberType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.11 boolean Icu_HW_GetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_EdgeNumberType"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "pEdgeNum", "void", "Icu_HW_StopTimeStamp"]
- `anchor`: "2.8.1.11"

### SEC-002-008-001-012
- `source_number`: `2.8.1.12`
- `title`: "void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "void", "edge", "numbers"]
- `anchor`: "2.8.1.12"

### SEC-002-008-001-013
- `source_number`: `2.8.1.13`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.13 void"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "void", "edge", "numbers"]
- `anchor`: "2.8.1.13"

### SEC-002-008-001-014
- `source_number`: `2.8.1.14`
- `title`: "void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "eActivationEdge", "channel", "Icu_HW_DisableEdgeCount"]
- `anchor`: "2.8.1.14"

### SEC-002-008-001-015
- `source_number`: `2.8.1.15`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.15 void"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "eActivationEdge", "channel", "Icu_HW_DisableEdgeCount"]
- `anchor`: "2.8.1.15"

### SEC-002-008-001-016
- `source_number`: `2.8.1.16`
- `title`: "void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_DisableEdgeDetection", "Icu_HwType", "FC7xxx", "channel", "eActivationEdge"]
- `anchor`: "2.8.1.16"

### SEC-002-008-001-017
- `source_number`: `2.8.1.17`
- `title`: "void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "channel", "Icu_HW_StartSignalMeasurement", "Icu_HW_StopSignalMeasurement"]
- `anchor`: "2.8.1.17"

### SEC-002-008-001-018
- `source_number`: `2.8.1.18`
- `title`: "void Icu_HW_StopSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.18 void Icu_HW_StopSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "channel", "Icu_HW_StartSignalMeasurement", "Icu_HW_StopSignalMeasurement"]
- `anchor`: "2.8.1.18"

### SEC-002-008-001-019
- `source_number`: `2.8.1.19`
- `title`: "boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "2.8.1.19"

### SEC-002-008-001-020
- `source_number`: `2.8.1.20`
- `title`: "Icu_ValueType Icu_HW_GetOverflowValue (Icu_HwType eHwType)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.20 Icu_ValueType Icu_HW_GetOverflowValue (Icu_HwType eHwType)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "2.8.1.20"

### SEC-002-008-001-021
- `source_number`: `2.8.1.21`
- `title`: "Icu_HW_ConfigGTB( const uint32 u32Group,boolean benable)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.21 Icu_HW_ConfigGTB( const uint32 u32Group,boolean benable)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "2.8.1.21"

### SEC-002-008-001-022
- `source_number`: `2.8.1.22`
- `title`: "void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel", "void", "Icu_HwChannelType", "eInputLevel"]
- `anchor`: "2.8.1.22"

### SEC-002-008-001-023
- `source_number`: `2.8.1.23`
- `title`: "void Icu_OverflowCallback"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.23 void Icu_OverflowCallback"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel", "void", "Icu_HwChannelType", "eInputLevel"]
- `anchor`: "2.8.1.23"

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: "Functions in Icu_Ftu.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h"
- `physical_page_start`: `46`
- `physical_page_end`: `51`
- `printed_page_start`: `46`
- `printed_page_end`: `51`
- `keywords`: ["FTU", "const", "eFtuInstance", "ICU", "channel", "u8Channel", "void", "Icu_FtuInstanceType"]
- `anchor`: "2.8.2"

### SEC-002-008-002-001
- `source_number`: `2.8.2.1`
- `title`: "void Icu_Ftu_Init ( const Icu_FtuModuleConfigType * pConfig )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.1 void Icu_Ftu_Init ( const Icu_FtuModuleConfigType * pConfig )"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel", "void", "Icu_HwChannelType", "eInputLevel"]
- `anchor`: "2.8.2.1"

### SEC-002-008-002-002
- `source_number`: `2.8.2.2`
- `title`: "void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "ICU", "const", "Icu_Ftu_ChannelInit", "Icu_FtuInstanceType", "eFtuInstance", "Icu_FtuInputCaptureType", "eActivationEdge"]
- `anchor`: "2.8.2.2"

### SEC-002-008-002-003
- `source_number`: `2.8.2.3`
- `title`: "void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["FTU", "ICU", "eFtuInstance", "const", "Icu_FtuInstanceType", "void", "Icu_Ftu_DeInit", "Icu_Ftu_SetSleepMode"]
- `anchor`: "2.8.2.3"

### SEC-002-008-002-004
- `source_number`: `2.8.2.4`
- `title`: "void Icu_Ftu_SetSleepMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.4 void Icu_Ftu_SetSleepMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel)"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["FTU", "ICU", "eFtuInstance", "const", "Icu_FtuInstanceType", "void", "Icu_Ftu_DeInit", "Icu_Ftu_SetSleepMode"]
- `anchor`: "2.8.2.4"

### SEC-002-008-002-005
- `source_number`: `2.8.2.5`
- `title`: "void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel", "eActivationEdge", "channel", "Icu_FtuInstanceType"]
- `anchor`: "2.8.2.5"

### SEC-002-008-002-006
- `source_number`: `2.8.2.6`
- `title`: "void Icu_Ftu_SetActivationCondition ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.6 void Icu_Ftu_SetActivationCondition ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel", "eActivationEdge", "channel", "Icu_FtuInstanceType"]
- `anchor`: "2.8.2.6"

### SEC-002-008-002-007
- `source_number`: `2.8.2.7`
- `title`: "boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType", "u8Channel", "channel", "eActivationEdge"]
- `anchor`: "2.8.2.7"

### SEC-002-008-002-008
- `source_number`: `2.8.2.8`
- `title`: "void Icu_Ftu_StartChannel ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.8 void Icu_Ftu_StartChannel ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType", "u8Channel", "channel", "eActivationEdge"]
- `anchor`: "2.8.2.8"

### SEC-002-008-002-009
- `source_number`: `2.8.2.9`
- `title`: "void Icu_Ftu_StopChannel ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.9 void Icu_Ftu_StopChannel ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType", "u8Channel", "channel", "eActivationEdge"]
- `anchor`: "2.8.2.9"

### SEC-002-008-002-010
- `source_number`: `2.8.2.10`
- `title`: "Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "2.8.2.10"

### SEC-002-008-002-011
- `source_number`: `2.8.2.11`
- `title`: "void Icu_Ftu_EnableOverflow(const Icu_FtuInstanceType eFtuInstance, const uint8"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.11 void Icu_Ftu_EnableOverflow(const Icu_FtuInstanceType eFtuInstance, const uint8"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "2.8.2.11"

### SEC-002-008-002-012
- `source_number`: `2.8.2.12`
- `title`: "void Icu_Ftu_DisableOverflow(const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.12 void Icu_Ftu_DisableOverflow(const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel)"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "2.8.2.12"

### SEC-002-008-002-013
- `source_number`: `2.8.2.13`
- `title`: "void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance", "const", "void", "Icu_PortInstanceType"]
- `anchor`: "2.8.2.13"

### SEC-002-008-003
- `source_number`: `2.8.3`
- `title`: "Functions in Icu_Port.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h"
- `physical_page_start`: `52`
- `physical_page_end`: `53`
- `printed_page_start`: `52`
- `printed_page_end`: `53`
- `keywords`: ["ICU", "const", "Port", "FTU", "Ftu", "ePortInstance", "void", "Icu_PortInstanceType"]
- `anchor`: "2.8.3"

### SEC-002-008-003-001
- `source_number`: `2.8.3.1`
- `title`: "void Icu_Port_Init(const Icu_PortInstanceType ePortInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.1 void Icu_Port_Init(const Icu_PortInstanceType ePortInstance)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance", "const", "void", "Icu_PortInstanceType"]
- `anchor`: "2.8.3.1"

### SEC-002-008-003-002
- `source_number`: `2.8.3.2`
- `title`: "void Icu_Port_DeInit(const Icu_PortInstanceType ePortInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.2 void Icu_Port_DeInit(const Icu_PortInstanceType ePortInstance)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance", "const", "void", "Icu_PortInstanceType"]
- `anchor`: "2.8.3.2"

### SEC-002-008-003-003
- `source_number`: `2.8.3.3`
- `title`: "void Icu_Port_ChannelInit ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.3 void Icu_Port_ChannelInit ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance", "const", "void", "Icu_PortInstanceType"]
- `anchor`: "2.8.3.3"

### SEC-002-008-003-004
- `source_number`: `2.8.3.4`
- `title`: "void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType"]
- `anchor`: "2.8.3.4"

### SEC-002-008-003-005
- `source_number`: `2.8.3.5`
- `title`: "void Icu_Port_ChannelStop (const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.5 void Icu_Port_ChannelStop (const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType"]
- `anchor`: "2.8.3.5"

### SEC-002-008-003-006
- `source_number`: `2.8.3.6`
- `title`: "void Icu_Port_SetActivationCondition(const Icu_PortInstanceType eFtuInstance, const uint8 u8Channel, const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.6 void Icu_Port_SetActivationCondition(const Icu_PortInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType"]
- `anchor`: "2.8.3.6"

### SEC-002-008-003-007
- `source_number`: `2.8.3.7`
- `title`: "boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance", "Icu_PortInstanceType", "u8Channel", "boolean"]
- `anchor`: "2.8.3.7"

### SEC-002-008-003-008
- `source_number`: `2.8.3.8`
- `title`: "boolean Icu_Port_GetInputLevel (const Icu_PortInstanceType ePortInstance,const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.8 boolean Icu_Port_GetInputLevel (const Icu_PortInstanceType ePortInstance,const uint8 u8Channel)"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance", "Icu_PortInstanceType", "u8Channel", "boolean"]
- `anchor`: "2.8.3.8"

### SEC-002-008-004
- `source_number`: `2.8.4`
- `title`: "Functions in Icu_Aontimer.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h"
- `physical_page_start`: `54`
- `physical_page_end`: `58`
- `printed_page_start`: `54`
- `printed_page_end`: `58`
- `keywords`: ["AONTIMER", "const", "eInstance", "ICU", "Port", "Icu_AontimerInstanceType", "Aontimer", "void"]
- `anchor`: "2.8.4"

### SEC-002-008-004-001
- `source_number`: `2.8.4.1`
- `title`: "void Icu_Aontimer_Init(const Icu_AontimerModuleConfigType *pConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.1 void Icu_Aontimer_Init(const Icu_AontimerModuleConfigType *pConfig)"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance", "Icu_PortInstanceType", "u8Channel", "boolean"]
- `anchor`: "2.8.4.1"

### SEC-002-008-004-002
- `source_number`: `2.8.4.2`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void"
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "Icu_Aontimer_SetActivationCondition", "Icu_AontimerPulsePolarityType", "Icu_Aontimer_GetInputState"]
- `anchor`: "2.8.4.2"

### SEC-002-008-004-003
- `source_number`: `2.8.4.3`
- `title`: "boolean Icu_Aontimer_GetInputState(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.3 boolean Icu_Aontimer_GetInputState(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "Icu_Aontimer_SetActivationCondition", "Icu_AontimerPulsePolarityType", "Icu_Aontimer_GetInputState"]
- `anchor`: "2.8.4.3"

### SEC-002-008-004-004
- `source_number`: `2.8.4.4`
- `title`: "void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit"]
- `anchor`: "2.8.4.4"

### SEC-002-008-004-005
- `source_number`: `2.8.4.5`
- `title`: "Icu_EdgeNumberType Icu_Aontimer_GetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.5 Icu_EdgeNumberType Icu_Aontimer_GetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit"]
- `anchor`: "2.8.4.5"

### SEC-002-008-004-006
- `source_number`: `2.8.4.6`
- `title`: "void Icu_Aontimer_ResetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.6 void Icu_Aontimer_ResetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit"]
- `anchor`: "2.8.4.6"

### SEC-002-008-004-007
- `source_number`: `2.8.4.7`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType", "void", "Icu_Aontimer_EnableEdgeCount", "Icu_AontimerPulsePolarityType"]
- `anchor`: "2.8.4.7"

### SEC-002-008-004-008
- `source_number`: `2.8.4.8`
- `title`: "void Icu_Aontimer_DisableEdgeCount(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.8 void Icu_Aontimer_DisableEdgeCount(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType", "void", "Icu_Aontimer_EnableEdgeCount", "Icu_AontimerPulsePolarityType"]
- `anchor`: "2.8.4.8"

### SEC-002-008-004-009
- `source_number`: `2.8.4.9`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "void", "Icu_AontimerPulsePolarityType", "ePolarity"]
- `anchor`: "2.8.4.9"

### SEC-002-008-004-010
- `source_number`: `2.8.4.10`
- `title`: "void Icu_Aontimer_DisableEdgeDetection(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.10 void Icu_Aontimer_DisableEdgeDetection(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "void", "Icu_AontimerPulsePolarityType", "ePolarity"]
- `anchor`: "2.8.4.10"

### SEC-002-008-004-011
- `source_number`: `2.8.4.11`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.11 void"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "void", "Icu_AontimerPulsePolarityType", "ePolarity"]
- `anchor`: "2.8.4.11"

### SEC-002-008-004-012
- `source_number`: `2.8.4.12`
- `title`: "void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["AONTIMER", "ICU", "Cmp", "eInstance", "void", "Icu_Aontimer_SetSleepMode", "const", "Icu_AontimerInstanceType"]
- `anchor`: "2.8.4.12"

### SEC-002-008-005
- `source_number`: `2.8.5`
- `title`: "Functions in Icu_Cmp.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h"
- `physical_page_start`: `59`
- `physical_page_end`: `64`
- `printed_page_start`: `59`
- `printed_page_end`: `64`
- `keywords`: ["Cmp", "const", "ICU", "eCmpInstance", "AONTIMER", "void", "Icu_CmpInstanceType", "ePolarity"]
- `anchor`: "2.8.5"

### SEC-002-008-005-001
- `source_number`: `2.8.5.1`
- `title`: "void Icu_Cmp_Init(const Icu_CmpmoduleConfigType *pConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.1 void Icu_Cmp_Init(const Icu_CmpmoduleConfigType *pConfig)"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["AONTIMER", "ICU", "Cmp", "eInstance", "void", "Icu_Aontimer_SetSleepMode", "const", "Icu_AontimerInstanceType"]
- `anchor`: "2.8.5.1"

### SEC-002-008-005-002
- `source_number`: `2.8.5.2`
- `title`: "void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["ICU", "Cmp", "Icu_Cmp_DeInit", "Icu_CmpInstanceType", "eCmpInstance", "FC7xxx", "void", "Icu_HW_ModulesInit"]
- `anchor`: "2.8.5.2"

### SEC-002-008-005-003
- `source_number`: `2.8.5.3`
- `title`: "boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_Cmp_GetInputState", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "FC7xxx"]
- `anchor`: "2.8.5.3"

### SEC-002-008-005-004
- `source_number`: `2.8.5.4`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "ePolarity", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "void"]
- `anchor`: "2.8.5.4"

### SEC-002-008-005-005
- `source_number`: `2.8.5.5`
- `title`: "void Icu_Cmp_EnableEdgeDetection(const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.5 void Icu_Cmp_EnableEdgeDetection(const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "ePolarity", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "void"]
- `anchor`: "2.8.5.5"

### SEC-002-008-005-006
- `source_number`: `2.8.5.6`
- `title`: "void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "void", "const", "Icu_CmpInstanceType", "ePolarity", "Icu_ChannelType"]
- `anchor`: "2.8.5.6"

### SEC-002-008-005-007
- `source_number`: `2.8.5.7`
- `title`: "void Icu_Cmp_SetNormalMode (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.7 void Icu_Cmp_SetNormalMode (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "void", "const", "Icu_CmpInstanceType", "ePolarity", "Icu_ChannelType"]
- `anchor`: "2.8.5.7"

### SEC-002-008-005-008
- `source_number`: `2.8.5.8`
- `title`: "void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType", "eHwType", "u32ChannelOfHw", "Icu_HW_SetNormalMode"]
- `anchor`: "2.8.5.8"

### SEC-002-008-005-009
- `source_number`: `2.8.5.9`
- `title`: "boolean Icu_Cmp_GetInputLevel (const Icu_CmpInstanceType eCmpInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.9 boolean Icu_Cmp_GetInputLevel (const Icu_CmpInstanceType eCmpInstance)"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType", "eHwType", "u32ChannelOfHw", "Icu_HW_SetNormalMode"]
- `anchor`: "2.8.5.9"

### SEC-002-008-005-010
- `source_number`: `2.8.5.10`
- `title`: "void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType", "void", "Icu_Cmp_EnableEdgeCount", "ICU_CmpOutPolarityType"]
- `anchor`: "2.8.5.10"

### SEC-002-008-005-011
- `source_number`: `2.8.5.11`
- `title`: "void Icu_Cmp_DisableEdgeCount (const Icu_CmpInstanceType eCmpInstance)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.11 void Icu_Cmp_DisableEdgeCount (const Icu_CmpInstanceType eCmpInstance)"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType", "void", "Icu_Cmp_EnableEdgeCount", "ICU_CmpOutPolarityType"]
- `anchor`: "2.8.5.11"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `physical_page_start`: `65`
- `physical_page_end`: `84`
- `printed_page_start`: `65`
- `printed_page_end`: `84`
- `keywords`: ["ICU", "Cmp", "FC7xxx", "eCmpInstance", "Channel", "const", "Icu_CmpInstanceType", "SLEEP"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Initialization"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType", "void", "Icu_Cmp_EnableEdgeCount", "ICU_CmpOutPolarityType"]
- `anchor`: "2.9.1"

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: "De-initialization"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["ICU", "All", "disabled", "FC7xxx", "ICU_MODE_NORMAL", "configured", "according", "referenced"]
- `anchor`: "2.9.2"

### SEC-002-009-003
- `source_number`: `2.9.3`
- `title`: "Setting Mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode"
- `physical_page_start`: `67`
- `physical_page_end`: `70`
- `printed_page_start`: `67`
- `printed_page_end`: `70`
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Mode", "Enabled", "Notifications", "Disabled", "Reporting"]
- `anchor`: "2.9.3"

### SEC-002-009-003-001
- `source_number`: `2.9.3.1`
- `title`: "Enabled Notifications in SLEEP mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.1 Enabled Notifications in SLEEP mode"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Setting", "Mode", "Enabled", "Notifications", "mode"]
- `anchor`: "2.9.3.1"

### SEC-002-009-003-002
- `source_number`: `2.9.3.2`
- `title`: "Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Disabled", "Reporting", "Sources", "Mode"]
- `anchor`: "2.9.3.2"

### SEC-002-009-003-003
- `source_number`: `2.9.3.3`
- `title`: "Disabled Edge Notification in SLEEP Mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.3 Disabled Edge Notification in SLEEP Mode"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Disabled", "Edge", "Notification", "Mode"]
- `anchor`: "2.9.3.3"

### SEC-002-009-003-004
- `source_number`: `2.9.3.4`
- `title`: "Un-Enabled Reporting of Notifications in SLEEP Mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Enabled", "Reporting", "Notifications", "Mode"]
- `anchor`: "2.9.3.4"

### SEC-002-009-004
- `source_number`: `2.9.4`
- `title`: "Disabling of Wakeup-Capabilities"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Disabling of Wakeup-Capabilities"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["ICU", "FC7xxx", "Disabling", "Capabilities"]
- `anchor`: "2.9.4"

### SEC-002-009-005
- `source_number`: `2.9.5`
- `title`: "Enabling of Wakeup-Capabilities"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Enabling of Wakeup-Capabilities"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["ICU", "FC7xxx", "Enabling", "Capabilities"]
- `anchor`: "2.9.5"

### SEC-002-009-006
- `source_number`: `2.9.6`
- `title`: "Setting up the Activation Condition for a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.6 Setting up the Activation Condition for a Channel"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["ICU", "FC7xxx", "Setting", "Activation", "Condition", "Channel"]
- `anchor`: "2.9.6"

### SEC-002-009-007
- `source_number`: `2.9.7`
- `title`: "Disabling of the Notification for a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.7 Disabling of the Notification for a Channel"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["ICU", "FC7xxx", "Disabling", "Notification", "Channel"]
- `anchor`: "2.9.7"

### SEC-002-009-008
- `source_number`: `2.9.8`
- `title`: "Enabling of the Edge-Notification for a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.8 Enabling of the Edge-Notification for a Channel"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["ICU", "FC7xxx", "Enabling", "Edge", "Notification", "Channel"]
- `anchor`: "2.9.8"

### SEC-002-009-009
- `source_number`: `2.9.9`
- `title`: "Re-enabling of the Notification for a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.9 Re-enabling of the Notification for a Channel"
- `physical_page_start`: `76`
- `physical_page_end`: `76`
- `printed_page_start`: `76`
- `printed_page_end`: `76`
- `keywords`: ["ICU", "FC7xxx", "enabling", "Notification", "Channel"]
- `anchor`: "2.9.9"

### SEC-002-009-010
- `source_number`: `2.9.10`
- `title`: "Polling of the Channel Status"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.10 Polling of the Channel Status"
- `physical_page_start`: `77`
- `physical_page_end`: `77`
- `printed_page_start`: `77`
- `printed_page_end`: `77`
- `keywords`: ["ICU", "FC7xxx", "Polling", "Channel", "Status"]
- `anchor`: "2.9.10"

### SEC-002-009-011
- `source_number`: `2.9.11`
- `title`: "Overview of the Timestamping Functionality of the ICU Driver"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.11 Overview of the Timestamping Functionality of the ICU Driver"
- `physical_page_start`: `78`
- `physical_page_end`: `78`
- `printed_page_start`: `78`
- `printed_page_end`: `78`
- `keywords`: ["ICU", "FC7xxx", "Overview", "Timestamping", "Functionality"]
- `anchor`: "2.9.11"

### SEC-002-009-012
- `source_number`: `2.9.12`
- `title`: "Inquire the Number of Counted Edges"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.12 Inquire the Number of Counted Edges"
- `physical_page_start`: `79`
- `physical_page_end`: `79`
- `printed_page_start`: `79`
- `printed_page_end`: `79`
- `keywords`: ["ICU", "FC7xxx", "Inquire", "Number", "Counted", "Edges"]
- `anchor`: "2.9.12"

### SEC-002-009-013
- `source_number`: `2.9.13`
- `title`: "Inquire the Elapsed Level-Time of a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.13 Inquire the Elapsed Level-Time of a Channel"
- `physical_page_start`: `80`
- `physical_page_end`: `80`
- `printed_page_start`: `80`
- `printed_page_end`: `80`
- `keywords`: ["ICU", "FC7xxx", "Inquire", "Elapsed", "Level", "Time", "Channel"]
- `anchor`: "2.9.13"

### SEC-002-009-014
- `source_number`: `2.9.14`
- `title`: "Inquire the Elapsed Period Time of a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.14 Inquire the Elapsed Period Time of a Channel"
- `physical_page_start`: `81`
- `physical_page_end`: `81`
- `printed_page_start`: `81`
- `printed_page_end`: `81`
- `keywords`: ["ICU", "FC7xxx", "Icu_GetDutyCycleValues", "Inquire", "Elapsed", "Time", "Channel", "behavior"]
- `anchor`: "2.9.14"

### SEC-002-009-015
- `source_number`: `2.9.15`
- `title`: "Inquire the Elapsed High Time of a Channel"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.15 Inquire the Elapsed High Time of a Channel"
- `physical_page_start`: `81`
- `physical_page_end`: `82`
- `printed_page_start`: `81`
- `printed_page_end`: `82`
- `keywords`: ["ICU", "FC7xxx", "Icu_GetDutyCycleValues", "Inquire", "Elapsed", "Time", "Channel", "behavior"]
- `anchor`: "2.9.15"

### SEC-002-009-016
- `source_number`: `2.9.16`
- `title`: "Measure the Values Needed for Calculation of Duty Cycles"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.16 Measure the Values Needed for Calculation of Duty Cycles"
- `physical_page_start`: `83`
- `physical_page_end`: `83`
- `printed_page_start`: `83`
- `printed_page_end`: `83`
- `keywords`: ["ICU", "FC7xxx", "Measure", "Values", "Needed", "Calculation", "Duty", "Cycles"]
- `anchor`: "2.9.16"

### SEC-002-009-017
- `source_number`: `2.9.17`
- `title`: "Cooperative Usage of Notification and Polling Mechanism"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.17 Cooperative Usage of Notification and Polling Mechanism"
- `physical_page_start`: `84`
- `physical_page_end`: `84`
- `printed_page_start`: `84`
- `printed_page_end`: `84`
- `keywords`: ["ICU", "FC7xxx", "Cooperative", "Usage", "Notification", "Polling", "Mechanism"]
- `anchor`: "2.9.17"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `85`
- `physical_page_end`: `114`
- `printed_page_start`: `85`
- `printed_page_end`: `114`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue", "ICU", "Icu"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `85`
- `physical_page_end`: `85`
- `printed_page_start`: `85`
- `printed_page_end`: `85`
- `keywords`: ["ICU", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `86`
- `physical_page_end`: `114`
- `printed_page_start`: `86`
- `printed_page_end`: `114`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue", "ICU", "Icu"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `86`
- `physical_page_end`: `86`
- `printed_page_start`: `86`
- `printed_page_end`: `86`
- `keywords`: ["ICU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "IcuConfigSet", "FC7xxx", "VariantPreCompile", "Variable", "Screenshot"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "IcuConfigSet"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet"
- `physical_page_start`: `86`
- `physical_page_end`: `86`
- `printed_page_start`: `86`
- `printed_page_end`: `86`
- `keywords`: ["ICU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "IcuConfigSet", "FC7xxx", "VariantPreCompile", "Variable", "Screenshot"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "IcuMaxChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `physical_page_start`: `87`
- `physical_page_end`: `87`
- `printed_page_start`: `87`
- `printed_page_end`: `87`
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "3.2.2.1"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "IcuChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel"
- `physical_page_start`: `87`
- `physical_page_end`: `91`
- `printed_page_start`: `87`
- `printed_page_end`: `91`
- `keywords`: ["ICU", "Variable", "AONTIMER", "Icu", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "IcuChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.1 IcuChannel"
- `physical_page_start`: `87`
- `physical_page_end`: `87`
- `printed_page_start`: `87`
- `printed_page_end`: `87`
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-002
- `source_number`: `3.2.3.2`
- `title`: "IcuChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.2 IcuChannelId"
- `physical_page_start`: `87`
- `physical_page_end`: `87`
- `printed_page_start`: `87`
- `printed_page_end`: `87`
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "3.2.3.2"

### SEC-003-002-003-003
- `source_number`: `3.2.3.3`
- `title`: "IcuHwModule"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `physical_page_start`: `88`
- `physical_page_end`: `88`
- `printed_page_start`: `88`
- `printed_page_end`: `88`
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "3.2.3.3"

### SEC-003-002-003-004
- `source_number`: `3.2.3.4`
- `title`: "IcuChOfModule"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.4 IcuChOfModule"
- `physical_page_start`: `88`
- `physical_page_end`: `88`
- `printed_page_start`: `88`
- `printed_page_end`: `88`
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "3.2.3.4"

### SEC-003-002-003-005
- `source_number`: `3.2.3.5`
- `title`: "IcuDefaultStartEdge"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.5 IcuDefaultStartEdge"
- `physical_page_start`: `88`
- `physical_page_end`: `88`
- `printed_page_start`: `88`
- `printed_page_end`: `88`
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "3.2.3.5"

### SEC-003-002-003-006
- `source_number`: `3.2.3.6`
- `title`: "IcuMeasurementMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.6 IcuMeasurementMode"
- `physical_page_start`: `88`
- `physical_page_end`: `88`
- `printed_page_start`: `88`
- `printed_page_end`: `88`
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "3.2.3.6"

### SEC-003-002-003-007
- `source_number`: `3.2.3.7`
- `title`: "IcuOverflowNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `physical_page_start`: `89`
- `physical_page_end`: `89`
- `printed_page_start`: `89`
- `printed_page_end`: `89`
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "3.2.3.7"

### SEC-003-002-003-008
- `source_number`: `3.2.3.8`
- `title`: "IcuWakeupCapability"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.8 IcuWakeupCapability"
- `physical_page_start`: `89`
- `physical_page_end`: `89`
- `printed_page_start`: `89`
- `printed_page_end`: `89`
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "3.2.3.8"

### SEC-003-002-003-009
- `source_number`: `3.2.3.9`
- `title`: "IcuSignalEdgeDetection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.9 IcuSignalEdgeDetection"
- `physical_page_start`: `89`
- `physical_page_end`: `89`
- `printed_page_start`: `89`
- `printed_page_end`: `89`
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "3.2.3.9"

### SEC-003-002-003-010
- `source_number`: `3.2.3.10`
- `title`: "IcuSignalNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.10 IcuSignalNotification"
- `physical_page_start`: `89`
- `physical_page_end`: `89`
- `printed_page_start`: `89`
- `printed_page_end`: `89`
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "3.2.3.10"

### SEC-003-002-003-011
- `source_number`: `3.2.3.11`
- `title`: "IcuSignalMeasurement"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `physical_page_start`: `90`
- `physical_page_end`: `90`
- `printed_page_start`: `90`
- `printed_page_end`: `90`
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "3.2.3.11"

### SEC-003-002-003-012
- `source_number`: `3.2.3.12`
- `title`: "IcuSignalMeasurementProperty"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.12 IcuSignalMeasurementProperty"
- `physical_page_start`: `90`
- `physical_page_end`: `90`
- `printed_page_start`: `90`
- `printed_page_end`: `90`
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "3.2.3.12"

### SEC-003-002-003-013
- `source_number`: `3.2.3.13`
- `title`: "IcuTimestampMeasurement"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.13 IcuTimestampMeasurement"
- `physical_page_start`: `90`
- `physical_page_end`: `90`
- `printed_page_start`: `90`
- `printed_page_end`: `90`
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "3.2.3.13"

### SEC-003-002-003-014
- `source_number`: `3.2.3.14`
- `title`: "IcuTimestampMeasurementProperty"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.14 IcuTimestampMeasurementProperty"
- `physical_page_start`: `90`
- `physical_page_end`: `90`
- `printed_page_start`: `90`
- `printed_page_end`: `90`
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "3.2.3.14"

### SEC-003-002-003-015
- `source_number`: `3.2.3.15`
- `title`: "IcuTimestampNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `physical_page_start`: `91`
- `physical_page_end`: `91`
- `printed_page_start`: `91`
- `printed_page_end`: `91`
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "3.2.3.15"

### SEC-003-002-003-016
- `source_number`: `3.2.3.16`
- `title`: "IcuTimeStampDmaSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.16 IcuTimeStampDmaSupport"
- `physical_page_start`: `91`
- `physical_page_end`: `91`
- `printed_page_start`: `91`
- `printed_page_end`: `91`
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "3.2.3.16"

### SEC-003-002-003-017
- `source_number`: `3.2.3.17`
- `title`: "IcuTimeStampdmaref"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.17 IcuTimeStampdmaref"
- `physical_page_start`: `91`
- `physical_page_end`: `91`
- `printed_page_start`: `91`
- `printed_page_end`: `91`
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "3.2.3.17"

### SEC-003-002-003-018
- `source_number`: `3.2.3.18`
- `title`: "IcuWakeup"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.18 IcuWakeup"
- `physical_page_start`: `91`
- `physical_page_end`: `91`
- `printed_page_start`: `91`
- `printed_page_end`: `91`
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "3.2.3.18"

### SEC-003-002-003-019
- `source_number`: `3.2.3.19`
- `title`: "IcuChannelWakeupInfo"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo"
- `physical_page_start`: `92`
- `physical_page_end`: `92`
- `printed_page_start`: `92`
- `printed_page_end`: `92`
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC"]
- `anchor`: "3.2.3.19"

### SEC-003-002-003-020
- `source_number`: `3.2.3.20`
- `title`: "IcuChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.20 IcuChannelEcucPartitionRef"
- `physical_page_start`: `92`
- `physical_page_end`: `92`
- `printed_page_start`: `92`
- `printed_page_end`: `92`
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC"]
- `anchor`: "3.2.3.20"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "IcuFtu"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu"
- `physical_page_start`: `92`
- `physical_page_end`: `95`
- `printed_page_start`: `92`
- `printed_page_end`: `95`
- `keywords`: ["ICU", "Variable", "FTU", "Icu", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "IcuFtuModule"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.1 IcuFtuModule"
- `physical_page_start`: `92`
- `physical_page_end`: `92`
- `printed_page_start`: `92`
- `printed_page_end`: `92`
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "IcuFtuClockSource"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `physical_page_start`: `93`
- `physical_page_end`: `93`
- `printed_page_start`: `93`
- `printed_page_end`: `93`
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.2"

### SEC-003-002-004-003
- `source_number`: `3.2.4.3`
- `title`: "IcuFtuPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.3 IcuFtuPrescaler"
- `physical_page_start`: `93`
- `physical_page_end`: `93`
- `printed_page_start`: `93`
- `printed_page_end`: `93`
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.3"

### SEC-003-002-004-004
- `source_number`: `3.2.4.4`
- `title`: "IcuFtuPeriod"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.4 IcuFtuPeriod"
- `physical_page_start`: `93`
- `physical_page_end`: `93`
- `printed_page_start`: `93`
- `printed_page_end`: `93`
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.4"

### SEC-003-002-004-005
- `source_number`: `3.2.4.5`
- `title`: "IcuFtuFilterPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `physical_page_start`: `94`
- `physical_page_end`: `94`
- `printed_page_start`: `94`
- `printed_page_end`: `94`
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "3.2.4.5"

### SEC-003-002-004-006
- `source_number`: `3.2.4.6`
- `title`: "IcuFtuCh0Filter"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.6 IcuFtuCh0Filter"
- `physical_page_start`: `94`
- `physical_page_end`: `94`
- `printed_page_start`: `94`
- `printed_page_end`: `94`
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "3.2.4.6"

### SEC-003-002-004-007
- `source_number`: `3.2.4.7`
- `title`: "IcuFtuCh1Filter"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.7 IcuFtuCh1Filter"
- `physical_page_start`: `94`
- `physical_page_end`: `94`
- `printed_page_start`: `94`
- `printed_page_end`: `94`
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "3.2.4.7"

### SEC-003-002-004-008
- `source_number`: `3.2.4.8`
- `title`: "IcuFtuCh2Filter"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.8 IcuFtuCh2Filter"
- `physical_page_start`: `94`
- `physical_page_end`: `94`
- `printed_page_start`: `94`
- `printed_page_end`: `94`
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "3.2.4.8"

### SEC-003-002-004-009
- `source_number`: `3.2.4.9`
- `title`: "IcuFtuCh3Filter"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `physical_page_start`: `95`
- `physical_page_end`: `95`
- `printed_page_start`: `95`
- `printed_page_end`: `95`
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "3.2.4.9"

### SEC-003-002-004-010
- `source_number`: `3.2.4.10`
- `title`: "IcuFtuGtb"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.10 IcuFtuGtb"
- `physical_page_start`: `95`
- `physical_page_end`: `95`
- `printed_page_start`: `95`
- `printed_page_end`: `95`
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "3.2.4.10"

### SEC-003-002-004-011
- `source_number`: `3.2.4.11`
- `title`: "IcuFtuGtbRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.11 IcuFtuGtbRef"
- `physical_page_start`: `95`
- `physical_page_end`: `95`
- `printed_page_start`: `95`
- `printed_page_end`: `95`
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "3.2.4.11"

### SEC-003-002-004-012
- `source_number`: `3.2.4.12`
- `title`: "IcuFtuPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.12 IcuFtuPartitionRef"
- `physical_page_start`: `95`
- `physical_page_end`: `95`
- `printed_page_start`: `95`
- `printed_page_end`: `95`
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "3.2.4.12"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "IcuPort"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort"
- `physical_page_start`: `96`
- `physical_page_end`: `96`
- `printed_page_start`: `96`
- `printed_page_end`: `96`
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "IcuPortModule"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `physical_page_start`: `96`
- `physical_page_end`: `96`
- `printed_page_start`: `96`
- `printed_page_end`: `96`
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "3.2.5.1"

### SEC-003-002-005-002
- `source_number`: `3.2.5.2`
- `title`: "IcuPortPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.2 IcuPortPartitionRef"
- `physical_page_start`: `96`
- `physical_page_end`: `96`
- `printed_page_start`: `96`
- `printed_page_end`: `96`
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "3.2.5.2"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "IcuAontmr"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr"
- `physical_page_start`: `96`
- `physical_page_end`: `97`
- `printed_page_start`: `96`
- `printed_page_end`: `97`
- `keywords`: ["ICU", "AONTIMER", "Port", "Icu", "Variable", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "IcuAontmrModule"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `physical_page_start`: `97`
- `physical_page_end`: `97`
- `printed_page_start`: `97`
- `printed_page_end`: `97`
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "IcuAontmrChannelClkSrc"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.2 IcuAontmrChannelClkSrc"
- `physical_page_start`: `97`
- `physical_page_end`: `97`
- `printed_page_start`: `97`
- `printed_page_end`: `97`
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "PrescalerEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.3 PrescalerEnable"
- `physical_page_start`: `97`
- `physical_page_end`: `97`
- `printed_page_start`: `97`
- `printed_page_end`: `97`
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "IcuAontmrPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.4 IcuAontmrPrescaler"
- `physical_page_start`: `97`
- `physical_page_end`: `97`
- `printed_page_start`: `97`
- `printed_page_end`: `97`
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "IcuAontmrPinSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect"
- `physical_page_start`: `98`
- `physical_page_end`: `98`
- `printed_page_start`: `98`
- `printed_page_end`: `98`
- `keywords`: ["ICU", "Icu", "Aontimer", "SymbolicNameValue", "IcuAontmrPinSelect", "IcuAontmrPartitionRef", "IcuCmp", "FC7xxx"]
- `anchor`: "3.2.6.5"

### SEC-003-002-006-006
- `source_number`: `3.2.6.6`
- `title`: "IcuAontmrPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.6 IcuAontmrPartitionRef"
- `physical_page_start`: `98`
- `physical_page_end`: `98`
- `printed_page_start`: `98`
- `printed_page_end`: `98`
- `keywords`: ["ICU", "Icu", "Aontimer", "SymbolicNameValue", "IcuAontmrPinSelect", "IcuAontmrPartitionRef", "IcuCmp", "FC7xxx"]
- `anchor`: "3.2.6.6"

### SEC-003-002-007
- `source_number`: `3.2.7`
- `title`: "IcuCmp"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp"
- `physical_page_start`: `98`
- `physical_page_end`: `105`
- `printed_page_start`: `98`
- `printed_page_end`: `105`
- `keywords`: ["Variable", "ICU", "SymbolicNameValue", "Screenshot", "Properties", "Property", "Origin", "CMP"]
- `anchor`: "3.2.7"

### SEC-003-002-007-001
- `source_number`: `3.2.7.1`
- `title`: "Icu Cmp Hardware Module"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `physical_page_start`: `99`
- `physical_page_end`: `99`
- `printed_page_start`: `99`
- `printed_page_end`: `99`
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.1"

### SEC-003-002-007-002
- `source_number`: `3.2.7.2`
- `title`: "IcuCmpFunctionMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.2 IcuCmpFunctionMode"
- `physical_page_start`: `99`
- `physical_page_end`: `99`
- `printed_page_start`: `99`
- `printed_page_end`: `99`
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.2"

### SEC-003-002-007-003
- `source_number`: `3.2.7.3`
- `title`: "IcuCmpPositiveInputSrc"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.3 IcuCmpPositiveInputSrc"
- `physical_page_start`: `99`
- `physical_page_end`: `99`
- `printed_page_start`: `99`
- `printed_page_end`: `99`
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.3"

### SEC-003-002-007-004
- `source_number`: `3.2.7.4`
- `title`: "IcuCmpNegativeInputSrc"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `physical_page_start`: `100`
- `physical_page_end`: `100`
- `printed_page_start`: `100`
- `printed_page_end`: `100`
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc"]
- `anchor`: "3.2.7.4"

### SEC-003-002-007-005
- `source_number`: `3.2.7.5`
- `title`: "IcuCmpPositiveInputMuxSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.5 IcuCmpPositiveInputMuxSelect"
- `physical_page_start`: `100`
- `physical_page_end`: `100`
- `printed_page_start`: `100`
- `printed_page_end`: `100`
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc"]
- `anchor`: "3.2.7.5"

### SEC-003-002-007-006
- `source_number`: `3.2.7.6`
- `title`: "IcuCmpNegativeInputMuxSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.6 IcuCmpNegativeInputMuxSelect"
- `physical_page_start`: `100`
- `physical_page_end`: `100`
- `printed_page_start`: `100`
- `printed_page_end`: `100`
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc"]
- `anchor`: "3.2.7.6"

### SEC-003-002-007-007
- `source_number`: `3.2.7.7`
- `title`: "IcuCmpFilterPeriod"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `physical_page_start`: `101`
- `physical_page_end`: `101`
- `printed_page_start`: `101`
- `printed_page_end`: `101`
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.7"

### SEC-003-002-007-008
- `source_number`: `3.2.7.8`
- `title`: "IcuCmpFilterCnt"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.8 IcuCmpFilterCnt"
- `physical_page_start`: `101`
- `physical_page_end`: `101`
- `printed_page_start`: `101`
- `printed_page_end`: `101`
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.8"

### SEC-003-002-007-009
- `source_number`: `3.2.7.9`
- `title`: "IcuCmpHystCtrlType"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.9 IcuCmpHystCtrlType"
- `physical_page_start`: `101`
- `physical_page_end`: `101`
- `printed_page_start`: `101`
- `printed_page_end`: `101`
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.9"

### SEC-003-002-007-010
- `source_number`: `3.2.7.10`
- `title`: "IcuCmpStopModeEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.10 IcuCmpStopModeEnable"
- `physical_page_start`: `101`
- `physical_page_end`: `101`
- `printed_page_start`: `101`
- `printed_page_end`: `101`
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.10"

### SEC-003-002-007-011
- `source_number`: `3.2.7.11`
- `title`: "IcuInvCmpOut"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut"
- `physical_page_start`: `102`
- `physical_page_end`: `102`
- `printed_page_start`: `102`
- `printed_page_end`: `102`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.11"

### SEC-003-002-007-012
- `source_number`: `3.2.7.12`
- `title`: "IcuCmpHighSpeedMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.12 IcuCmpHighSpeedMode"
- `physical_page_start`: `102`
- `physical_page_end`: `102`
- `printed_page_start`: `102`
- `printed_page_end`: `102`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.12"

### SEC-003-002-007-013
- `source_number`: `3.2.7.13`
- `title`: "IcuCmpOutPinConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.13 IcuCmpOutPinConfig"
- `physical_page_start`: `102`
- `physical_page_end`: `102`
- `printed_page_start`: `102`
- `printed_page_end`: `102`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.13"

### SEC-003-002-007-014
- `source_number`: `3.2.7.14`
- `title`: "IcuCmpOutPinConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.14 IcuCmpOutPinConfig"
- `physical_page_start`: `102`
- `physical_page_end`: `102`
- `printed_page_start`: `102`
- `printed_page_end`: `102`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.14"

### SEC-003-002-007-015
- `source_number`: `3.2.7.15`
- `title`: "IcuCmpOutPinEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.15 IcuCmpOutPinEnable"
- `physical_page_start`: `103`
- `physical_page_end`: `103`
- `printed_page_start`: `103`
- `printed_page_end`: `103`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.15"

### SEC-003-002-007-016
- `source_number`: `3.2.7.16`
- `title`: "IcuCmpDacReference"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.16 IcuCmpDacReference"
- `physical_page_start`: `103`
- `physical_page_end`: `103`
- `printed_page_start`: `103`
- `printed_page_end`: `103`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.16"

### SEC-003-002-007-017
- `source_number`: `3.2.7.17`
- `title`: "cuCmpWindowConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.17 cuCmpWindowConfig"
- `physical_page_start`: `103`
- `physical_page_end`: `103`
- `printed_page_start`: `103`
- `printed_page_end`: `103`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.17"

### SEC-003-002-007-018
- `source_number`: `3.2.7.18`
- `title`: "IcuCmpWinOutUserDef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.18 IcuCmpWinOutUserDef"
- `physical_page_start`: `103`
- `physical_page_end`: `103`
- `printed_page_start`: `103`
- `printed_page_end`: `103`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.18"

### SEC-003-002-007-019
- `source_number`: `3.2.7.19`
- `title`: "IcuCmpOutWinUserDefLevel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `physical_page_start`: `104`
- `physical_page_end`: `104`
- `printed_page_start`: `104`
- `printed_page_end`: `104`
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot"]
- `anchor`: "3.2.7.19"

### SEC-003-002-007-020
- `source_number`: `3.2.7.20`
- `title`: "IcuCmpoClseWindowEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.20 IcuCmpoClseWindowEnable"
- `physical_page_start`: `104`
- `physical_page_end`: `104`
- `printed_page_start`: `104`
- `printed_page_end`: `104`
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot"]
- `anchor`: "3.2.7.20"

### SEC-003-002-007-021
- `source_number`: `3.2.7.21`
- `title`: "IcuCmpOCloseWinEvent"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.21 IcuCmpOCloseWinEvent"
- `physical_page_start`: `104`
- `physical_page_end`: `104`
- `printed_page_start`: `104`
- `printed_page_end`: `104`
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot"]
- `anchor`: "3.2.7.21"

### SEC-003-002-007-022
- `source_number`: `3.2.7.22`
- `title`: "IcuCmpInvSampleEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.22 IcuCmpInvSampleEnable"
- `physical_page_start`: `104`
- `physical_page_end`: `104`
- `printed_page_start`: `104`
- `printed_page_end`: `104`
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot"]
- `anchor`: "3.2.7.22"

### SEC-003-002-007-023
- `source_number`: `3.2.7.23`
- `title`: "IcuCmpPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.23 IcuCmpPartitionRef"
- `physical_page_start`: `104`
- `physical_page_end`: `105`
- `printed_page_start`: `104`
- `printed_page_end`: `105`
- `keywords`: ["ICU", "CMP", "Icu", "Cmp", "Variable", "SymbolicNameValue", "Screenshot", "Properties"]
- `anchor`: "3.2.7.23"

### SEC-003-002-008
- `source_number`: `3.2.8`
- `title`: "IcuGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral"
- `physical_page_start`: `106`
- `physical_page_end`: `107`
- `printed_page_start`: `106`
- `printed_page_end`: `107`
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.8"

### SEC-003-002-008-001
- `source_number`: `3.2.8.1`
- `title`: "IcuDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.1 IcuDevErrorDetect"
- `physical_page_start`: `106`
- `physical_page_end`: `106`
- `printed_page_start`: `106`
- `printed_page_end`: `106`
- `keywords`: ["ICU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "SymbolicNameValue", "IcuGeneral"]
- `anchor`: "3.2.8.1"

### SEC-003-002-008-002
- `source_number`: `3.2.8.2`
- `title`: "IcuReportWakeupSource"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.2 IcuReportWakeupSource"
- `physical_page_start`: `106`
- `physical_page_end`: `106`
- `printed_page_start`: `106`
- `printed_page_end`: `106`
- `keywords`: ["ICU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "SymbolicNameValue", "IcuGeneral"]
- `anchor`: "3.2.8.2"

### SEC-003-002-008-003
- `source_number`: `3.2.8.3`
- `title`: "IcuOverflowTimeStatistics"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.3 IcuOverflowTimeStatistics"
- `physical_page_start`: `106`
- `physical_page_end`: `106`
- `printed_page_start`: `106`
- `printed_page_end`: `106`
- `keywords`: ["ICU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "SymbolicNameValue", "IcuGeneral"]
- `anchor`: "3.2.8.3"

### SEC-003-002-008-004
- `source_number`: `3.2.8.4`
- `title`: "IcuMultiCoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.4 IcuMultiCoreSupport"
- `physical_page_start`: `106`
- `physical_page_end`: `106`
- `printed_page_start`: `106`
- `printed_page_end`: `106`
- `keywords`: ["ICU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "SymbolicNameValue", "IcuGeneral"]
- `anchor`: "3.2.8.4"

### SEC-003-002-008-005
- `source_number`: `3.2.8.5`
- `title`: "IcuFtuGtbSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.5 IcuFtuGtbSupport"
- `physical_page_start`: `107`
- `physical_page_end`: `107`
- `printed_page_start`: `107`
- `printed_page_end`: `107`
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin"]
- `anchor`: "3.2.8.5"

### SEC-003-002-008-006
- `source_number`: `3.2.8.6`
- `title`: "IcuTsDmaSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.6 IcuTsDmaSupport"
- `physical_page_start`: `107`
- `physical_page_end`: `107`
- `printed_page_start`: `107`
- `printed_page_end`: `107`
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin"]
- `anchor`: "3.2.8.6"

### SEC-003-002-008-007
- `source_number`: `3.2.8.7`
- `title`: "IcuKernelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.7 IcuKernelEcucPartitionRef"
- `physical_page_start`: `107`
- `physical_page_end`: `107`
- `printed_page_start`: `107`
- `printed_page_end`: `107`
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin"]
- `anchor`: "3.2.8.7"

### SEC-003-002-008-008
- `source_number`: `3.2.8.8`
- `title`: "IcuEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.8 IcuEcucPartitionRef"
- `physical_page_start`: `107`
- `physical_page_end`: `107`
- `printed_page_start`: `107`
- `printed_page_end`: `107`
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin"]
- `anchor`: "3.2.8.8"

### SEC-003-002-008-009
- `source_number`: `3.2.8.9`
- `title`: "IcuFtuGtbGroup"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.9 IcuFtuGtbGroup"
- `physical_page_start`: `108`
- `physical_page_end`: `108`
- `printed_page_start`: `108`
- `printed_page_end`: `108`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "IcuFtuGtbGroup", "Screenshot", "Properties", "Property", "IcuOptionalApis"]
- `anchor`: "3.2.8.9"

### SEC-003-002-009
- `source_number`: `3.2.9`
- `title`: "IcuOptionalApis"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis"
- `physical_page_start`: `108`
- `physical_page_end`: `110`
- `printed_page_start`: `108`
- `printed_page_end`: `110`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "3.2.9"

### SEC-003-002-009-001
- `source_number`: `3.2.9.1`
- `title`: "IcuDeInitApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.1 IcuDeInitApi"
- `physical_page_start`: `108`
- `physical_page_end`: `108`
- `printed_page_start`: `108`
- `printed_page_end`: `108`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "IcuFtuGtbGroup", "Screenshot", "Properties", "Property", "IcuOptionalApis"]
- `anchor`: "3.2.9.1"

### SEC-003-002-009-002
- `source_number`: `3.2.9.2`
- `title`: "IcuDisableWakeupApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.2 IcuDisableWakeupApi"
- `physical_page_start`: `108`
- `physical_page_end`: `108`
- `printed_page_start`: `108`
- `printed_page_end`: `108`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "IcuFtuGtbGroup", "Screenshot", "Properties", "Property", "IcuOptionalApis"]
- `anchor`: "3.2.9.2"

### SEC-003-002-009-003
- `source_number`: `3.2.9.3`
- `title`: "IcuEdgeCountApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.3 IcuEdgeCountApi"
- `physical_page_start`: `109`
- `physical_page_end`: `109`
- `printed_page_start`: `109`
- `printed_page_end`: `109`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Adds", "removes", "code"]
- `anchor`: "3.2.9.3"

### SEC-003-002-009-004
- `source_number`: `3.2.9.4`
- `title`: "IcuEnableWakeupApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.4 IcuEnableWakeupApi"
- `physical_page_start`: `109`
- `physical_page_end`: `109`
- `printed_page_start`: `109`
- `printed_page_end`: `109`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Adds", "removes", "code"]
- `anchor`: "3.2.9.4"

### SEC-003-002-009-005
- `source_number`: `3.2.9.5`
- `title`: "IcuGetDutyCycleValuesApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.5 IcuGetDutyCycleValuesApi"
- `physical_page_start`: `109`
- `physical_page_end`: `109`
- `printed_page_start`: `109`
- `printed_page_end`: `109`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Adds", "removes", "code"]
- `anchor`: "3.2.9.5"

### SEC-003-002-009-006
- `source_number`: `3.2.9.6`
- `title`: "IcuGetInputStateApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.6 IcuGetInputStateApi"
- `physical_page_start`: `109`
- `physical_page_end`: `109`
- `printed_page_start`: `109`
- `printed_page_end`: `109`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Adds", "removes", "code"]
- `anchor`: "3.2.9.6"

### SEC-003-002-009-007
- `source_number`: `3.2.9.7`
- `title`: "IcuGetTimeElapsedApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.7 IcuGetTimeElapsedApi"
- `physical_page_start`: `109`
- `physical_page_end`: `109`
- `printed_page_start`: `109`
- `printed_page_end`: `109`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Adds", "removes", "code"]
- `anchor`: "3.2.9.7"

### SEC-003-002-009-008
- `source_number`: `3.2.9.8`
- `title`: "IcuGetVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.8 IcuGetVersionInfoApi"
- `physical_page_start`: `110`
- `physical_page_end`: `110`
- `printed_page_start`: `110`
- `printed_page_end`: `110`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.9.8"

### SEC-003-002-009-009
- `source_number`: `3.2.9.9`
- `title`: "IcuSetModeApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.9 IcuSetModeApi"
- `physical_page_start`: `110`
- `physical_page_end`: `110`
- `printed_page_start`: `110`
- `printed_page_end`: `110`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.9.9"

### SEC-003-002-009-010
- `source_number`: `3.2.9.10`
- `title`: "IcuSignalMeasurementApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.10 IcuSignalMeasurementApi"
- `physical_page_start`: `110`
- `physical_page_end`: `110`
- `printed_page_start`: `110`
- `printed_page_end`: `110`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.9.10"

### SEC-003-002-009-011
- `source_number`: `3.2.9.11`
- `title`: "IcuTimestampApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.11 IcuTimestampApi"
- `physical_page_start`: `110`
- `physical_page_end`: `110`
- `printed_page_start`: `110`
- `printed_page_end`: `110`
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.9.11"

### SEC-003-002-009-012
- `source_number`: `3.2.9.12`
- `title`: "IcuWakeupFunctionalityApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.12 IcuWakeupFunctionalityApi"
- `physical_page_start`: `111`
- `physical_page_end`: `111`
- `printed_page_start`: `111`
- `printed_page_end`: `111`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "AUTOSAR_ECUC", "BOOLEAN", "Origin", "IcuWakeupFunctionalityApi", "Screenshot"]
- `anchor`: "3.2.9.12"

### SEC-003-002-009-013
- `source_number`: `3.2.9.13`
- `title`: "IcuEdgeDetectApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.13 IcuEdgeDetectApi"
- `physical_page_start`: `111`
- `physical_page_end`: `111`
- `printed_page_start`: `111`
- `printed_page_end`: `111`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "AUTOSAR_ECUC", "BOOLEAN", "Origin", "IcuWakeupFunctionalityApi", "Screenshot"]
- `anchor`: "3.2.9.13"

### SEC-003-002-010
- `source_number`: `3.2.10`
- `title`: "IcuNonAUTOSAR"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR"
- `physical_page_start`: `111`
- `physical_page_end`: `111`
- `printed_page_start`: `111`
- `printed_page_end`: `111`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "AUTOSAR_ECUC", "BOOLEAN", "Origin", "IcuWakeupFunctionalityApi", "Screenshot"]
- `anchor`: "3.2.10"

### SEC-003-002-010-001
- `source_number`: `3.2.10.1`
- `title`: "IcuGetInputLevelApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.1 IcuGetInputLevelApi"
- `physical_page_start`: `111`
- `physical_page_end`: `111`
- `printed_page_start`: `111`
- `printed_page_end`: `111`
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "AUTOSAR_ECUC", "BOOLEAN", "Origin", "IcuWakeupFunctionalityApi", "Screenshot"]
- `anchor`: "3.2.10.1"

### SEC-003-002-010-002
- `source_number`: `3.2.10.2`
- `title`: "IcuOverflowNotificationApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi"
- `physical_page_start`: `112`
- `physical_page_end`: `112`
- `printed_page_start`: `112`
- `printed_page_end`: `112`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "3.2.10.2"

### SEC-003-002-011
- `source_number`: `3.2.11`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation"
- `physical_page_start`: `112`
- `physical_page_end`: `114`
- `printed_page_start`: `112`
- `printed_page_end`: `114`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "INTEGER_LABEL", "Origin"]
- `anchor`: "3.2.11"

### SEC-003-002-011-001
- `source_number`: `3.2.11.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.1 ArReleaseMajorVersion"
- `physical_page_start`: `112`
- `physical_page_end`: `112`
- `printed_page_start`: `112`
- `printed_page_end`: `112`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "3.2.11.1"

### SEC-003-002-011-002
- `source_number`: `3.2.11.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.2 ArReleaseMinorVersion"
- `physical_page_start`: `112`
- `physical_page_end`: `112`
- `printed_page_start`: `112`
- `printed_page_end`: `112`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "3.2.11.2"

### SEC-003-002-011-003
- `source_number`: `3.2.11.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.3 ArReleaseRevisionVersion"
- `physical_page_start`: `112`
- `physical_page_end`: `112`
- `printed_page_start`: `112`
- `printed_page_end`: `112`
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "3.2.11.3"

### SEC-003-002-011-004
- `source_number`: `3.2.11.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion"
- `physical_page_start`: `113`
- `physical_page_end`: `113`
- `printed_page_start`: `113`
- `printed_page_end`: `113`
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number"]
- `anchor`: "3.2.11.4"

### SEC-003-002-011-005
- `source_number`: `3.2.11.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.5 SwMinorVersion"
- `physical_page_start`: `113`
- `physical_page_end`: `113`
- `printed_page_start`: `113`
- `printed_page_end`: `113`
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number"]
- `anchor`: "3.2.11.5"

### SEC-003-002-011-006
- `source_number`: `3.2.11.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.6 SwPatchVersion"
- `physical_page_start`: `113`
- `physical_page_end`: `113`
- `printed_page_start`: `113`
- `printed_page_end`: `113`
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number"]
- `anchor`: "3.2.11.6"

### SEC-003-002-011-007
- `source_number`: `3.2.11.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.7 ModuleId"
- `physical_page_start`: `114`
- `physical_page_end`: `114`
- `printed_page_start`: `114`
- `printed_page_end`: `114`
- `keywords`: ["ICU", "ModuleId", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "VendorId", "FC7xxx", "AUTOSAR"]
- `anchor`: "3.2.11.7"

### SEC-003-002-011-008
- `source_number`: `3.2.11.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.8 VendorId"
- `physical_page_start`: `114`
- `physical_page_end`: `114`
- `printed_page_start`: `114`
- `printed_page_end`: `114`
- `keywords`: ["ICU", "ModuleId", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "VendorId", "FC7xxx", "AUTOSAR"]
- `anchor`: "3.2.11.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `115`
- `physical_page_end`: `122`
- `printed_page_start`: `115`
- `printed_page_end`: `122`
- `keywords`: ["ICU", "FTU", "AONTIMER", "CMP", "Port", "Cmp", "Icu", "FC7xxx"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `115`
- `physical_page_end`: `115`
- `printed_page_start`: `115`
- `printed_page_end`: `115`
- `keywords`: ["ICU", "FTU", "channel", "FC7xxx", "ICU_MODE_SIGNAL_MEASUREMENT", "ICU_MODE_TIMESTAMP", "IcuFtu", "Only"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "ICU Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `physical_page_start`: `115`
- `physical_page_end`: `122`
- `printed_page_start`: `115`
- `printed_page_end`: `122`
- `keywords`: ["ICU", "FTU", "AONTIMER", "CMP", "Port", "Cmp", "Icu", "FC7xxx"]
- `anchor`: "4.2"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["physical_page 1"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `anchors`: ["Revision History", "Revision", "Date", "Changes"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "table", "image"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 ICU Introduction.........................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["2.8.5", "Functions in Icu_Cmp.h ............................................................................…", "2.9", "API Sequence Diagram ..............................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 ICU Introduction / 1.1 Requirements"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 1 ICU Introduction", "1.1", "Requirements", "The design of this module follows the specifications of the ICU driver specified in AUTOSAR Classic…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "Rejected Requirement 1 SWS_Icu_00006"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["2.2", "File Structure"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.3", "Macros", "2.3.1", "Macros in Icu.h"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define ICU_E_PARAM_NOTIFY_INTERVAL ((uint8)0x18)", "API Icu_StartTimeStamp is called and the parameter NotifyInterval is invalid (e.g. NotifyInterval <…", "#define ICU_E_PARAM_VINFO ((uint8)0x19)", "The pointer to notification function is null."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define ICU_STOPTIMESTAMP_ID ((uint8)0x0A)", "API service ID for Icu_StopTimestamp function.", "#define ICU_GETTIMESTAMPINDEX_ID ((uint8)0x0B)", "API service ID for Icu_GetTimestampIndex function."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Icu_Version.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define ICU_INSTANCE_ID ((uint8)0U)", "Instance ID of this ICU driver.", "#define ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK ((uint32)(BIT0))", "Definition of bit mask to isolate the time stamp buffer type bitfield."]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define ICU_CFG_SW_MINOR_VERSION 6", "#define ICU_CFG_SW_PATCH_VERSION 0", "#define ICU_MAX_CHANNEL ((Icu_ChannelType)XU)", "Maximum number of ICU channels configured."]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["STD_OFF: Icu_DisableWakeup () can not be used.", "#define ICU_ENABLE_WAKEUP_API (STD_ON)", "Adds or removes the service Icu_EnableWakeup() from the code.", "STD_ON: Icu_EnableWakeup () can be used."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define ICU_EDGE_DETECT_API (STD_ON)", "Adds or removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection()from the code.", "STD_ON: The services listed above can be used.", "STD_OFF: The services listed above cannot be used."]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.1 Icu_ModeType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define ICU_PORT_ISR_USED (STD_ON)", "ICU PORT driver interrupt used.", "#define ICU_AONTMER_ISR_USED (STD_ON)", "ICU AONTIMER driver interrupt used."]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.5 Icu_MeasurementModeType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["ICU_RISING_EDGE = 0", "An appropriate action shall be executed when a rising edge", "occurs on the ICU input signal.", "ICU_FALLING_EDGE = 1"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Icu_AontimerHwConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Values", "Value", "Description", "ICU_DMA_CHANNEL_STATE_IDLE = 0"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Icu_ConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["const Icu_AontimerPrescalerEnableTYpe ePrescalerEnable", "const Icu_AontimerGlitchFilterType eGlitchFilter", "const Icu_AontimerPulseClkSrcType ePinSelect", "2.6.3"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Enable the dma mode of the channel.", "uint8 u8DmachannelRef", "Ref to the dma channel index.", "uint32 u32WakeupSource"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["2.6.8", "Icu_FtuModuleConfigType", "Structure", "Icu_FtuModuleConfigType"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.7", "API Functions", "2.7.1", "Functions in Icu.h"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `content_types`: ["text", "image"]
- `anchors`: ["Diagram"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.2 void Icu_DeInit ( void)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Parameters", "Parameter", "Parameters", "ConfigPtr"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "Channel"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "Disable the notification of a channel.", "Diagram", "Parameters"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7.1.11", "void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, ui…", "NotifyInterva)", "Function"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7.1.14", "void Icu_ResetEdgeCount ( Icu_ChannelType Channel )", "Function", "void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Channel", "ICU channel.", "Returns", "N/A"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Referenced By", "void Icu_Init()", "2.8.1.2", "void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["u32ChannelOfHw", "Channel index of module.", "eActivationEdge", "Activation edge of the channel."]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.8.1.8", "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)", "Function", "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.9 void"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "eHwType"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Returns", "TRUE The channel supports getting edge numbers from hardware.", "FALSE The channel does not support getting edge numbers from hardware.", "Referenced By"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["eActivationEdge", "Activation edge of the channel.", "Returns", "N/A"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Parameters", "Parameter", "Description", "u32Group"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["eActivationEdge", "Activation edge of the channel.", "Returns", "N/A"]

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "Stop a FTU channel.", "Diagram", "Parameters"]

### PAGE-0052
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.8.2.13", "void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)", "Function", "void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"]

### PAGE-0053
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["2.8.3.4", "void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const", "Icu_PortIntConfigType eIntConfig)", "Function"]

### PAGE-0054
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["2.8.3.7", "boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)", "Function", "boolean"]

### PAGE-0055
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0056
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0057
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0058
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.8.4.9", "void", "Icu_Aontimer_EnableEdgeDetection(const", "Icu_AontimerInstanceType"]

### PAGE-0059
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0060
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0061
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0062
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0063
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0064
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0065
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.8.5.10", "void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType", "ePolarity)", "Function"]

### PAGE-0066
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Module operates in ICU_MODE_NORMAL.", "Used HW is configured according to referenced configuration structure.", "a) All notifications are disabled.", "b) All used interrupts are disabled."]

### PAGE-0067
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.1 Enabled Notifications in SLEEP mode"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3", "Setting Mode", "2.9.3.1", "Enabled Notifications in SLEEP mode"]

### PAGE-0068
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3.2", "Disabled Reporting of Wakeup Sources in SLEEP Mode"]

### PAGE-0069
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.3 Disabled Edge Notification in SLEEP Mode"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3.3", "Disabled Edge Notification in SLEEP Mode"]

### PAGE-0070
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3.4", "Un-Enabled Reporting of Notifications in SLEEP Mode"]

### PAGE-0071
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Disabling of Wakeup-Capabilities"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.4", "Disabling of Wakeup-Capabilities"]

### PAGE-0072
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Enabling of Wakeup-Capabilities"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.5", "Enabling of Wakeup-Capabilities"]

### PAGE-0073
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.6 Setting up the Activation Condition for a Channel"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.6", "Setting up the Activation Condition for a Channel"]

### PAGE-0074
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.7 Disabling of the Notification for a Channel"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.7", "Disabling of the Notification for a Channel"]

### PAGE-0075
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.8 Enabling of the Edge-Notification for a Channel"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.8", "Enabling of the Edge-Notification for a Channel"]

### PAGE-0076
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.9 Re-enabling of the Notification for a Channel"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.9", "Re-enabling of the Notification for a Channel"]

### PAGE-0077
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.10 Polling of the Channel Status"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.10", "Polling of the Channel Status"]

### PAGE-0078
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.11 Overview of the Timestamping Functionality of the ICU Driver"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.11", "Overview of the Timestamping Functionality of the ICU Driver"]

### PAGE-0079
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.12 Inquire the Number of Counted Edges"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.12", "Inquire the Number of Counted Edges"]

### PAGE-0080
- `physical_page`: `80`
- `printed_page`: `80`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.13 Inquire the Elapsed Level-Time of a Channel"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.13", "Inquire the Elapsed Level-Time of a Channel"]

### PAGE-0081
- `physical_page`: `81`
- `printed_page`: `81`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.14 Inquire the Elapsed Period Time of a Channel"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.9.14", "Inquire the Elapsed Period Time of a Channel", "2.9.15", "Inquire the Elapsed High Time of a Channel"]

### PAGE-0082
- `physical_page`: `82`
- `printed_page`: `82`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.15 Inquire the Elapsed High Time of a Channel"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 82"]

### PAGE-0083
- `physical_page`: `83`
- `printed_page`: `83`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.16 Measure the Values Needed for Calculation of Duty Cycles"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.16", "Measure the Values Needed for Calculation of Duty Cycles"]

### PAGE-0084
- `physical_page`: `84`
- `printed_page`: `84`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.17 Cooperative Usage of Notification and Polling Mechanism"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.17", "Cooperative Usage of Notification and Polling Mechanism"]

### PAGE-0085
- `physical_page`: `85`
- `printed_page`: `85`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The container inclusion relation is shown as below:"]

### PAGE-0086
- `physical_page`: `86`
- `printed_page`: `86`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0087
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0088
- `physical_page`: `88`
- `printed_page`: `88`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0089
- `physical_page`: `89`
- `printed_page`: `89`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0090
- `physical_page`: `90`
- `printed_page`: `90`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Origin", "AUTOSAR_ECUC", "SymbolicNameValue", "false"]

### PAGE-0091
- `physical_page`: `91`
- `printed_page`: `91`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["3.2.3.15", "IcuTimestampNotification", "Variable", "IcuTimestampNotification"]

### PAGE-0092
- `physical_page`: `92`
- `printed_page`: `92`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["3.2.3.19", "IcuChannelWakeupInfo", "Variable", "IcuChannelWakeupInfo"]

### PAGE-0093
- `physical_page`: `93`
- `printed_page`: `93`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0094
- `physical_page`: `94`
- `printed_page`: `94`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["3.2.4.5", "IcuFtuFilterPrescaler", "Variable", "IcuFtuFilterPrescaler"]

### PAGE-0095
- `physical_page`: `95`
- `printed_page`: `95`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["SymbolicNameValue", "false", "Range", "0~15"]

### PAGE-0096
- `physical_page`: `96`
- `printed_page`: `96`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["3.2.5", "IcuPort", "Container", "IcuPort"]

### PAGE-0097
- `physical_page`: `97`
- `printed_page`: `97`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Type", "Map", "MIN", "3.2.6.1"]

### PAGE-0098
- `physical_page`: `98`
- `printed_page`: `98`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["SymbolicNameValue", "false", "Range", "ICU_AONTIMER_GLITCH_FILTER_2,"]

### PAGE-0099
- `physical_page`: `99`
- `printed_page`: `99`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0100
- `physical_page`: `100`
- `printed_page`: `100`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Origin", "FLAGCHIP", "SymbolicNameValue", "false"]

### PAGE-0101
- `physical_page`: `101`
- `printed_page`: `101`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["3.2.7.7", "IcuCmpFilterPeriod", "Variable", "IcuCmpFilterPeriod"]

### PAGE-0102
- `physical_page`: `102`
- `printed_page`: `102`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["3.2.7.11", "IcuInvCmpOut", "Variable", "IcuInvCmpOut"]

### PAGE-0103
- `physical_page`: `103`
- `printed_page`: `103`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.15 IcuCmpOutPinEnable"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["3.2.7.15", "IcuCmpOutPinEnable", "Variable", "IcuCmpOutPinEnable"]

### PAGE-0104
- `physical_page`: `104`
- `printed_page`: `104`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["3.2.7.19", "IcuCmpOutWinUserDefLevel", "Variable", "IcuCmpOutWinUserDefLevel"]

### PAGE-0105
- `physical_page`: `105`
- `printed_page`: `105`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.23 IcuCmpPartitionRef"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0106
- `physical_page`: `106`
- `printed_page`: `106`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.1 IcuDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2.8", "IcuGeneral", "Container", "IcuGeneral"]

### PAGE-0107
- `physical_page`: `107`
- `printed_page`: `107`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.5 IcuFtuGtbSupport"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Type", "Variable: BOOLEAN", "Origin", "FLAGCHIP"]

### PAGE-0108
- `physical_page`: `108`
- `printed_page`: `108`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.9 IcuFtuGtbGroup"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["SymbolicNameValue", "false", "Range", "ASPathDataOfSchema:/AUTOSAR/EcucDefs/EcuC/EcucPartitionCollectio"]

### PAGE-0109
- `physical_page`: `109`
- `printed_page`: `109`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.3 IcuEdgeCountApi"
- `content_types`: ["text", "api"]
- `anchors`: ["3.2.9.3", "IcuEdgeCountApi", "Variable", "IcuEdgeCountApi"]

### PAGE-0110
- `physical_page`: `110`
- `printed_page`: `110`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.8 IcuGetVersionInfoApi"
- `content_types`: ["text", "api"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0111
- `physical_page`: `111`
- `printed_page`: `111`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.12 IcuWakeupFunctionalityApi"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Origin", "AUTOSAR_ECUC", "SymbolicNameValue", "false"]

### PAGE-0112
- `physical_page`: `112`
- `printed_page`: `112`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["3.2.10.2", "IcuOverflowNotificationApi", "Variable", "IcuOverflowNotificationApi"]

### PAGE-0113
- `physical_page`: `113`
- `printed_page`: `113`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "Revision version number of AUTOSAR specification on which the appropriate implementation is based o…", "Screenshot", "Properties"]

### PAGE-0114
- `physical_page`: `114`
- `printed_page`: `114`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.7 ModuleId"
- `content_types`: ["text"]
- `anchors`: ["3.2.11.7", "ModuleId", "Variable", "ModuleId"]

### PAGE-0115
- `physical_page`: `115`
- `printed_page`: `115`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1)"]

### PAGE-0116
- `physical_page`: `116`
- `printed_page`: `116`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["If Port is used.", "a)", "Add an object in the IcuPort tab.", "b)"]

### PAGE-0117
- `physical_page`: `117`
- `printed_page`: `117`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["If AONTIMER is used", "a)", "Add an object in the IcuAontmr tab.", "b)"]

### PAGE-0118
- `physical_page`: `118`
- `printed_page`: `118`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["If CMP is used.", "a)", "Add an object in the Cmp tab.", "b)"]

### PAGE-0119
- `physical_page`: `119`
- `printed_page`: `119`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["b)", "Configure each option of the ICU channel."]

### PAGE-0120
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["c)", "Wakeup-capabilty:Enable IcuWakeupCapability and select a wakeup source which is configured in EcuM", "module.", "d)"]

### PAGE-0121
- `physical_page`: `121`
- `printed_page`: `121`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["c)", "Enable or disable the development error detection, wakeup source reporting, overflow time statistic…", "d)", "Enabling or disable the settings of this section will configure the driver in a mode not compliant…"]

### PAGE-0122
- `physical_page`: `122`
- `printed_page`: `122`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["a)", "Channel.", "b) HW unit.", "c)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx ICU User Manual"
- `keywords`: ["ICU", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx ICU User Manual; Revision History; 0.1"
- `keywords`: ["ICU", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "table", "image"]
- `summary`: "Table of Contents: FC7xxx ICU User Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["ICU", "Icu", "Icu_Types", "FC7xxx", "Icu_Version", "Icu_Cfg", "Icu_AontimerHwConfigType", "Icu_AontimerModuleConfigType", "Icu_ConfigType", "Icu_ChannelConfigType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 ICU Introduction.................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx ICU User Manual; 2.8.5; Functions in Icu_Cmp.h ............................................................................................................................. 59"
- `keywords`: ["ICU", "Channel", "Notification", "Inquire", "FC7xxx", "Icu_Cmp", "Elapsed", "Time", "IMPLEMENTATION_CONFIG_VARIANT", "IcuConfigSet"]
- `anchors`:
  - `p4`: "2.8.5"
  - `p4`: "Functions in Icu_Cmp.h ....................................................................................................................…"
  - `p4`: "2.9"
  - `p4`: "API Sequence Diagram ......................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 ICU Introduction / 1.1 Requirements"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 ICU Introduction / 1.1 Requirements: FC7xxx ICU User Manual; Chapter 1 ICU Introduction; 1.1"
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Port", "Cmp", "edge", "provides", "channels", "signal"]
- `anchors`:
  - `p5`: "Chapter 1 ICU Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirements"
  - `p5`: "The design of this module follows the specifications of the ICU driver specified in AUTOSAR Classic Platform Release 4.3.1. For"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx ICU User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["ICU", "Icu", "Icu_Irq", "Rejected", "Requirement", "Icu_Cbk", "FC7xxx", "SWS_Icu_00006", "Icu_Init", "ConfigPtr"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "Rejected Requirements"
  - `p6`: "Rejected Requirement 1 SWS_Icu_00006"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.2 File Structure: FC7xxx ICU User Manual; 2.2; File Structure"
- `keywords`: ["ICU", "FC7xxx", "Structure"]
- `anchors`:
  - `p7`: "2.2"
  - `p7`: "File Structure"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h: FC7xxx ICU User Manual; 2.3; Macros"
- `keywords`: ["ICU", "Icu", "define", "invalid", "called", "Icu_SetMode", "FC7xxx", "ICU_E_PARAM_POINTER", "ICU_E_PARAM_CHANNEL", "channel"]
- `anchors`:
  - `p8`: "2.3"
  - `p8`: "Macros"
  - `p8`: "2.3.1"
  - `p8`: "Macros in Icu.h"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h: FC7xxx ICU User Manual; #define ICU_E_PARAM_NOTIFY_INTERVAL ((uint8)0x18); API Icu_StartTimeStamp is called and the parameter NotifyInterval is invalid (e.g. NotifyInterval < 1)."
- `keywords`: ["ICU", "Icu", "define", "NotifyInterval", "FC7xxx", "ICU_E_PARAM_NOTIFY_INTERVAL", "Icu_StartTimeStamp", "ICU_E_PARAM_VINFO", "ICU_E_PARAM_PARTITION", "ICU_E_PARAM_DMACHANNEL_BUSY"]
- `anchors`:
  - `p9`: "#define ICU_E_PARAM_NOTIFY_INTERVAL ((uint8)0x18)"
  - `p9`: "API Icu_StartTimeStamp is called and the parameter NotifyInterval is invalid (e.g. NotifyInterval < 1)."
  - `p9`: "#define ICU_E_PARAM_VINFO ((uint8)0x19)"
  - `p9`: "The pointer to notification function is null."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h: FC7xxx ICU User Manual; #define ICU_STOPTIMESTAMP_ID ((uint8)0x0A); API service ID for Icu_StopTimestamp function."
- `keywords`: ["ICU", "define", "Icu_EnableEdgeDetection", "FC7xxx", "ICU_STOPTIMESTAMP_ID", "Icu_StopTimestamp", "ICU_GETTIMESTAMPINDEX_ID", "Icu_GetTimestampIndex", "ICU_ENABLEEDGECOUNT_ID", "Icu_EnableEdgeCount"]
- `anchors`:
  - `p10`: "#define ICU_STOPTIMESTAMP_ID ((uint8)0x0A)"
  - `p10`: "API service ID for Icu_StopTimestamp function."
  - `p10`: "#define ICU_GETTIMESTAMPINDEX_ID ((uint8)0x0B)"
  - `p10`: "API service ID for Icu_GetTimestampIndex function."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Icu_Version.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Icu_Version.h: FC7xxx ICU User Manual; #define ICU_INSTANCE_ID ((uint8)0U); Instance ID of this ICU driver."
- `keywords`: ["ICU", "define", "Definition", "FC7xxx", "ICU_INSTANCE_ID", "ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK", "BIT0", "bit", "isolate", "bitfield"]
- `anchors`:
  - `p11`: "#define ICU_INSTANCE_ID ((uint8)0U)"
  - `p11`: "Instance ID of this ICU driver."
  - `p11`: "#define ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK ((uint32)(BIT0))"
  - `p11`: "Definition of bit mask to isolate the time stamp buffer type bitfield."

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h: FC7xxx ICU User Manual; #define ICU_CFG_SW_MINOR_VERSION 6; #define ICU_CFG_SW_PATCH_VERSION 0"
- `keywords`: ["ICU", "STD_ON", "define", "STD_OFF", "can", "Icu_GetVersionInfo", "Icu_DeInit", "Icu_SetMode", "Adds", "removes"]
- `anchors`:
  - `p12`: "#define ICU_CFG_SW_MINOR_VERSION 6"
  - `p12`: "#define ICU_CFG_SW_PATCH_VERSION 0"
  - `p12`: "#define ICU_MAX_CHANNEL ((Icu_ChannelType)XU)"
  - `p12`: "Maximum number of ICU channels configured."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h: FC7xxx ICU User Manual; STD_OFF: Icu_DisableWakeup () can not be used.; #define ICU_ENABLE_WAKEUP_API (STD_ON)"
- `keywords`: ["ICU", "STD_ON", "can", "STD_OFF", "services", "define", "Adds", "removes", "code", "listed"]
- `anchors`:
  - `p13`: "STD_OFF: Icu_DisableWakeup () can not be used."
  - `p13`: "#define ICU_ENABLE_WAKEUP_API (STD_ON)"
  - `p13`: "Adds or removes the service Icu_EnableWakeup() from the code."
  - `p13`: "STD_ON: Icu_EnableWakeup () can be used."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h: FC7xxx ICU User Manual; #define ICU_EDGE_DETECT_API (STD_ON); Adds or removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection()from the code."
- `keywords`: ["Icu", "ICU", "Ftu", "FTU", "STD_ON", "STD_OFF", "define", "feature", "Icu_GetInputLevel", "number"]
- `anchors`:
  - `p14`: "#define ICU_EDGE_DETECT_API (STD_ON)"
  - `p14`: "Adds or removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection()from the code."
  - `p14`: "STD_ON: The services listed above can be used."
  - `p14`: "STD_OFF: The services listed above cannot be used."

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.1 Icu_ModeType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.1 Icu_ModeType: FC7xxx ICU User Manual; #define ICU_PORT_ISR_USED (STD_ON); ICU PORT driver interrupt used."
- `keywords`: ["ICU", "PORT", "AONTIMER", "CMP", "STD_ON", "Icu_ModeType", "Enumeration", "Values", "Icu_InputStateType", "Icu_InputLevelType"]
- `anchors`:
  - `p15`: "#define ICU_PORT_ISR_USED (STD_ON)"
  - `p15`: "ICU PORT driver interrupt used."
  - `p15`: "#define ICU_AONTMER_ISR_USED (STD_ON)"
  - `p15`: "ICU AONTIMER driver interrupt used."

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.5 Icu_MeasurementModeType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.5 Icu_MeasurementModeType: FC7xxx ICU User Manual; ICU_RISING_EDGE = 0; An appropriate action shall be executed when a rising edge"
- `keywords`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration", "Definition", "Mode", "Icu_SignalMeasurementPropertyType", "configured", "Time"]
- `anchors`:
  - `p16`: "ICU_RISING_EDGE = 0"
  - `p16`: "An appropriate action shall be executed when a rising edge"
  - `p16`: "occurs on the ICU input signal."
  - `p16`: "ICU_FALLING_EDGE = 1"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Icu_AontimerHwConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Icu_AontimerHwConfigType: FC7xxx ICU User Manual; Values; Value"
- `keywords`: ["ICU", "Aontimer", "typedef", "Icu_AontimerModuleConfigType", "Icu_AontimerHwConfigType", "const", "FC7xxx", "ICU_DMA_CHANNEL_STATE_IDLE", "channel", "ICU_DMA_CHANNEL_STATE_ACTIVE"]
- `anchors`:
  - `p17`: "Values"
  - `p17`: "Value"
  - `p17`: "Description"
  - `p17`: "ICU_DMA_CHANNEL_STATE_IDLE = 0"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Icu_ConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Icu_ConfigType: FC7xxx ICU User Manual; const Icu_AontimerPrescalerEnableTYpe ePrescalerEnable; const Icu_AontimerGlitchFilterType eGlitchFilter"
- `keywords`: ["ICU", "Icu", "Ftu", "channel", "const", "Icu_ChannelConfigType", "Icu_ConfigType", "FC7xxx", "Icu_AontimerPrescalerEnableTYpe", "ePrescalerEnable"]
- `anchors`:
  - `p18`: "const Icu_AontimerPrescalerEnableTYpe ePrescalerEnable"
  - `p18`: "const Icu_AontimerGlitchFilterType eGlitchFilter"
  - `p18`: "const Icu_AontimerPulseClkSrcType ePinSelect"
  - `p18`: "2.6.3"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType: FC7xxx ICU User Manual; Enable the dma mode of the channel.; uint8 u8DmachannelRef"
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu", "Icu_Ftu_HwConfigType", "channel", "Icu_DutyCycleType", "Icu_ValueType", "Icu_HwConfigType"]
- `anchors`:
  - `p19`: "Enable the dma mode of the channel."
  - `p19`: "uint8 u8DmachannelRef"
  - `p19`: "Ref to the dma channel index."
  - `p19`: "uint32 u32WakeupSource"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType: FC7xxx ICU User Manual; 2.6.8; Icu_FtuModuleConfigType"
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType", "Structure", "Diagram"]
- `anchors`:
  - `p20`: "2.6.8"
  - `p20`: "Icu_FtuModuleConfigType"
  - `p20`: "Structure"
  - `p20`: "Icu_FtuModuleConfigType"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr ): FC7xxx ICU User Manual; 2.7; API Functions"
- `keywords`: ["ICU", "Icu", "Icu_Init", "Icu_ConfigType", "ConfigPtr", "FC7xxx", "void", "const", "Initialize"]
- `anchors`:
  - `p21`: "2.7"
  - `p21`: "API Functions"
  - `p21`: "2.7.1"
  - `p21`: "Functions in Icu.h"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr ): FC7xxx ICU User Manual; Diagram"
- `keywords`: ["ICU", "FC7xxx", "Diagram"]
- `anchors`:
  - `p22`: "Diagram"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.2 void Icu_DeInit ( void)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.2 void Icu_DeInit ( void): FC7xxx ICU User Manual; Parameters; Parameter"
- `keywords`: ["ICU", "void", "Icu_DeInit", "Icu_SetMode", "Icu_ModeType", "FC7xxx", "ConfigPtr", "Returns", "Mode", "Pointer"]
- `anchors`:
  - `p23`: "Parameters"
  - `p23`: "Parameter"
  - `p23`: "Parameters"
  - `p23`: "ConfigPtr"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel ): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup", "Icu_EnableWakeup", "FC7xxx", "Diagram", "ICU_MODE_NORMAL", "ICU_MODE_SLEEP"]
- `anchors`:
  - `p24`: "Diagram"
  - `p24`: "Parameters"
  - `p24`: "Parameter"
  - `p24`: "Description"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource ): FC7xxx ICU User Manual; Parameters; Parameter"
- `keywords`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel", "WakeupSource", "Icu_CheckWakeup", "EcuM_WakeupSourceType", "Icu_SetActivationCondition", "Icu_ActivationType"]
- `anchors`:
  - `p25`: "Parameters"
  - `p25`: "Parameter"
  - `p25`: "Description"
  - `p25`: "Channel"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel ): FC7xxx ICU User Manual; Description; Disable the notification of a channel."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState", "Returns", "Icu_EnableNotification", "Icu_InputStateType", "FC7xxx", "Diagram"]
- `anchors`:
  - `p26`: "Description"
  - `p26`: "Disable the notification of a channel."
  - `p26`: "Diagram"
  - `p26`: "Parameters"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16: FC7xxx ICU User Manual; 2.7.1.11; void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize,…"
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr", "BufferSize", "void", "Icu_StartTimestamp", "Icu_ValueType", "NotifyInterval"]
- `anchors`:
  - `p27`: "2.7.1.11"
  - `p27`: "void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
  - `p27`: "NotifyInterva)"
  - `p27`: "Function"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel ): FC7xxx ICU User Manual; 2.7.1.14; void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount", "channel", "Icu_EnableEdgeCount", "Icu_EnableEdgeDetection", "FC7xxx", "edges"]
- `anchors`:
  - `p28`: "2.7.1.14"
  - `p28`: "void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
  - `p28`: "Function"
  - `p28`: "void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel ): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "void", "Icu_DisableEdgeDetection", "Icu_DisableEdgeCount", "FC7xxx", "Diagram", "Returns"]
- `anchors`:
  - `p29`: "Diagram"
  - `p29`: "Parameters"
  - `p29`: "Parameter"
  - `p29`: "Description"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel ): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers", "Icu_StartSignalMeasurement", "FC7xxx", "Diagram", "channel", "Returns"]
- `anchors`:
  - `p30`: "Diagram"
  - `p30`: "Parameters"
  - `p30`: "Parameter"
  - `p30`: "Description"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel ): FC7xxx ICU User Manual; Channel; ICU channel."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement", "given", "Icu_ValueType"]
- `anchors`:
  - `p31`: "Channel"
  - `p31`: "ICU channel."
  - `p31`: "Returns"
  - `p31`: "N/A"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo ): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo", "Std_VersionInfoType", "Icu_StartGlobalTime"]
- `anchors`:
  - `p32`: "Diagram"
  - `p32`: "Parameters"
  - `p32`: "Parameter"
  - `p32`: "Description"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig ): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "FC7xxx", "pHwConfig", "Diagram", "Pointer", "structure", "Returns"]
- `anchors`:
  - `p33`: "Diagram"
  - `p33`: "Parameters"
  - `p33`: "Parameter"
  - `p33`: "Description"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; Referenced By; void Icu_Init()"
- `keywords`: ["ICU", "void", "u32ChannelOfHw", "pHwConfig", "Icu_HW_ChannelDeInit", "Icu_HwType", "eHwType", "Icu_HW_ModulesDeInit", "Icu_HwConfigType", "FC7xxx"]
- `anchors`:
  - `p34`: "Referenced By"
  - `p34`: "void Icu_Init()"
  - `p34`: "2.8.1.2"
  - `p34`: "void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "eHwType", "Icu_HW_ChannelInit", "Icu_HwType", "u32ChannelOfHw", "Icu_ActivationType", "eActivationEdge", "FC7xxx", "pHwConfig", "void"]
- `anchors`:
  - `p35`: "Diagram"
  - `p35`: "Parameters"
  - `p35`: "Parameter"
  - `p35`: "Description"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; u32ChannelOfHw; Channel index of module."
- `keywords`: ["ICU", "u32ChannelOfHw", "eHwType", "void", "Icu_HwType", "eActivationEdge", "Icu_HW_SetSleepMode", "Icu_HW_SetNormalMode", "Icu_ActivationType", "FC7xxx"]
- `anchors`:
  - `p36`: "u32ChannelOfHw"
  - `p36`: "Channel index of module."
  - `p36`: "eActivationEdge"
  - `p36`: "Activation edge of the channel."

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "eActivationEdge", "channel", "void", "Icu_HW_SetActivationCondition", "Icu_HwType", "Icu_ActivationType", "FC7xxx"]
- `anchors`:
  - `p37`: "Diagram"
  - `p37`: "Parameters"
  - `p37`: "Parameter"
  - `p37`: "Description"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; 2.8.1.8; Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `keywords`: ["ICU", "Icu_InputStateType", "Icu_HW_GetInputState", "Icu_HwType", "eHwType", "u32ChannelOfHw", "FC7xxx", "returns", "state", "channel"]
- `anchors`:
  - `p38`: "2.8.1.8"
  - `p38`: "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p38`: "Function"
  - `p38`: "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.9 void"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.9 void: FC7xxx ICU User Manual; Parameters; Parameter"
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_StartTimestamp", "Icu_HwType", "Icu_ActivationType", "eActivationEdge", "FC7xxx", "channel", "ICU_ACTIVE"]
- `anchors`:
  - `p39`: "Parameters"
  - `p39`: "Parameter"
  - `p39`: "Description"
  - `p39`: "eHwType"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "pEdgeNum", "void", "Icu_HW_StopTimeStamp", "Icu_HW_GetEdgeNumbers", "Icu_EdgeNumberType"]
- `anchors`:
  - `p40`: "Diagram"
  - `p40`: "Parameters"
  - `p40`: "Parameter"
  - `p40`: "Description"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; Returns; TRUE The channel supports getting edge numbers from hardware."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "void", "edge", "numbers", "Icu_HW_ResetEdgeNumbers", "Icu_HW_EnableEdgeCount"]
- `anchors`:
  - `p41`: "Returns"
  - `p41`: "TRUE The channel supports getting edge numbers from hardware."
  - `p41`: "FALSE The channel does not support getting edge numbers from hardware."
  - `p41`: "Referenced By"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; eActivationEdge; Activation edge of the channel."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "eActivationEdge", "channel", "Icu_HW_DisableEdgeCount", "Icu_HW_EnableEdgeDetection", "Icu_ActivationType"]
- `anchors`:
  - `p42`: "eActivationEdge"
  - `p42`: "Activation edge of the channel."
  - `p42`: "Returns"
  - `p42`: "N/A"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_DisableEdgeDetection", "Icu_HwType", "FC7xxx", "channel", "eActivationEdge", "void", "Icu_EnableEdgeDetection"]
- `anchors`:
  - `p43`: "Diagram"
  - `p43`: "Parameters"
  - `p43`: "Parameter"
  - `p43`: "Description"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "channel", "Icu_HW_StartSignalMeasurement", "Icu_HW_StopSignalMeasurement", "FC7xxx", "Icu_DisableEdgeDetection"]
- `anchors`:
  - `p44`: "Diagram"
  - `p44`: "Parameters"
  - `p44`: "Parameter"
  - `p44`: "Description"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean", "Icu_HW_GetInputLevel", "Icu_InputLevelType"]
- `anchors`:
  - `p45`: "Diagram"
  - `p45`: "Parameters"
  - `p45`: "Parameter"
  - `p45`: "Description"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType: FC7xxx ICU User Manual; Parameters; Parameter"
- `keywords`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel", "void", "Icu_HwChannelType", "eInputLevel", "count", "Icu_HW_FtuOverflowIntrProcess"]
- `anchors`:
  - `p46`: "Parameters"
  - `p46`: "Parameter"
  - `p46`: "Description"
  - `p46`: "u32Group"

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["FTU", "ICU", "const", "Icu_Ftu_ChannelInit", "Icu_FtuInstanceType", "eFtuInstance", "Icu_FtuInputCaptureType", "eActivationEdge", "FC7xxx", "Icu_HW_ModulesInit"]
- `anchors`:
  - `p47`: "Diagram"
  - `p47`: "Parameters"
  - `p47`: "Parameter"
  - `p47`: "Description"

### SEG-0048
- `physical_pages`: `48`
- `printed_pages`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance ): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["FTU", "ICU", "eFtuInstance", "const", "Icu_FtuInstanceType", "void", "Icu_Ftu_DeInit", "Icu_Ftu_SetSleepMode", "FC7xxx", "u8Channel"]
- `anchors`:
  - `p48`: "Diagram"
  - `p48`: "Parameters"
  - `p48`: "Parameter"
  - `p48`: "Description"

### SEG-0049
- `physical_pages`: `49`
- `printed_pages`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel", "eActivationEdge", "channel", "Icu_FtuInstanceType", "Icu_FtuInputCaptureType", "void"]
- `anchors`:
  - `p49`: "Diagram"
  - `p49`: "Parameters"
  - `p49`: "Parameter"
  - `p49`: "Description"

### SEG-0050
- `physical_pages`: `50`
- `printed_pages`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel ): FC7xxx ICU User Manual; eActivationEdge; Activation edge of the channel."
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType", "u8Channel", "channel", "eActivationEdge", "Icu_Ftu_GetInputState", "void"]
- `anchors`:
  - `p50`: "eActivationEdge"
  - `p50`: "Activation edge of the channel."
  - `p50`: "Returns"
  - `p50`: "N/A"

### SEG-0051
- `physical_pages`: `51`
- `printed_pages`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance): FC7xxx ICU User Manual; Description; Stop a FTU channel."
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel", "instance", "Diagram"]
- `anchors`:
  - `p51`: "Description"
  - `p51`: "Stop a FTU channel."
  - `p51`: "Diagram"
  - `p51`: "Parameters"

### SEG-0052
- `physical_pages`: `52`
- `printed_pages`: `52`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable): FC7xxx ICU User Manual; 2.8.2.13; void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `keywords`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance", "const", "void", "Icu_PortInstanceType", "Icu_Ftu_ConfigGTB", "GTB"]
- `anchors`:
  - `p52`: "2.8.2.13"
  - `p52`: "void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
  - `p52`: "Function"
  - `p52`: "void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"

### SEG-0053
- `physical_pages`: `53`
- `printed_pages`: `53`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const: FC7xxx ICU User Manual; 2.8.3.4; void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel…"
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType", "eIntConfig", "Pin"]
- `anchors`:
  - `p53`: "2.8.3.4"
  - `p53`: "void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
  - `p53`: "Icu_PortIntConfigType eIntConfig)"
  - `p53`: "Function"

### SEG-0054
- `physical_pages`: `54`
- `printed_pages`: `54`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel): FC7xxx ICU User Manual; 2.8.3.7; boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `keywords`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance", "Icu_PortInstanceType", "u8Channel", "boolean", "Icu_Port_GetInputState", "channel"]
- `anchors`:
  - `p54`: "2.8.3.7"
  - `p54`: "boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
  - `p54`: "Function"
  - `p54`: "boolean"

### SEG-0055
- `physical_pages`: `55`
- `printed_pages`: `55`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "Icu_Aontimer_SetActivationCondition", "Icu_AontimerPulsePolarityType", "Icu_Aontimer_GetInputState", "FC7xxx", "Icu_HW_ModulesInit"]
- `anchors`:
  - `p55`: "Diagram"
  - `p55`: "Parameters"
  - `p55`: "Parameter"
  - `p55`: "Description"

### SEG-0056
- `physical_pages`: `56`
- `printed_pages`: `56`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit", "Icu_EdgeNumberType", "Icu_Aontimer_GetEdgeNumbers"]
- `anchors`:
  - `p56`: "Diagram"
  - `p56`: "Parameters"
  - `p56`: "Parameter"
  - `p56`: "Description"

### SEG-0057
- `physical_pages`: `57`
- `printed_pages`: `57`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType", "void", "Icu_Aontimer_EnableEdgeCount", "Icu_AontimerPulsePolarityType", "Icu_Aontimer_DisableEdgeCount", "FC7xxx"]
- `anchors`:
  - `p57`: "Diagram"
  - `p57`: "Parameters"
  - `p57`: "Parameter"
  - `p57`: "Description"

### SEG-0058
- `physical_pages`: `58`
- `printed_pages`: `58`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void: FC7xxx ICU User Manual; 2.8.4.9; void"
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "void", "Icu_AontimerPulsePolarityType", "ePolarity", "Icu_Aontimer_EnableEdgeDetection", "Icu_Aontimer_DisableEdgeDetection"]
- `anchors`:
  - `p58`: "2.8.4.9"
  - `p58`: "void"
  - `p58`: "Icu_Aontimer_EnableEdgeDetection(const"
  - `p58`: "Icu_AontimerInstanceType"

### SEG-0059
- `physical_pages`: `59`
- `printed_pages`: `59`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["AONTIMER", "ICU", "Cmp", "eInstance", "void", "Icu_Aontimer_SetSleepMode", "const", "Icu_AontimerInstanceType", "Icu_Cmp_Init", "Icu_CmpmoduleConfigType"]
- `anchors`:
  - `p59`: "Diagram"
  - `p59`: "Parameters"
  - `p59`: "Parameter"
  - `p59`: "Description"

### SEG-0060
- `physical_pages`: `60`
- `printed_pages`: `60`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Cmp", "Icu_Cmp_DeInit", "Icu_CmpInstanceType", "eCmpInstance", "FC7xxx", "void", "Icu_HW_ModulesInit", "const", "Icu_HwConfigType"]
- `anchors`:
  - `p60`: "Diagram"
  - `p60`: "Parameters"
  - `p60`: "Parameter"
  - `p60`: "Description"

### SEG-0061
- `physical_pages`: `61`
- `printed_pages`: `61`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_Cmp_GetInputState", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "FC7xxx", "Icu_HW_ModulesDeInit", "Icu_HwConfigType"]
- `anchors`:
  - `p61`: "Diagram"
  - `p61`: "Parameters"
  - `p61`: "Parameter"
  - `p61`: "Description"

### SEG-0062
- `physical_pages`: `62`
- `printed_pages`: `62`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void: FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "ePolarity", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "void", "Icu_HwType", "eHwType"]
- `anchors`:
  - `p62`: "Diagram"
  - `p62`: "Parameters"
  - `p62`: "Parameter"
  - `p62`: "Description"

### SEG-0063
- `physical_pages`: `63`
- `printed_pages`: `63`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "void", "const", "Icu_CmpInstanceType", "ePolarity", "Icu_ChannelType", "Icu_Cmp_DisableEdgeDetection", "Icu_Cmp_SetNormalMode"]
- `anchors`:
  - `p63`: "Diagram"
  - `p63`: "Parameters"
  - `p63`: "Parameter"
  - `p63`: "Description"

### SEG-0064
- `physical_pages`: `64`
- `printed_pages`: `64`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance): FC7xxx ICU User Manual; Diagram; Parameters"
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType", "eHwType", "u32ChannelOfHw", "Icu_HW_SetNormalMode", "Icu_ActivationType", "eActivationEdge"]
- `anchors`:
  - `p64`: "Diagram"
  - `p64`: "Parameters"
  - `p64`: "Parameter"
  - `p64`: "Description"

### SEG-0065
- `physical_pages`: `65`
- `printed_pages`: `65`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType: FC7xxx ICU User Manual; 2.8.5.10; void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolari…"
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType", "void", "Icu_Cmp_EnableEdgeCount", "ICU_CmpOutPolarityType", "Icu_HwType", "eHwType"]
- `anchors`:
  - `p65`: "2.8.5.10"
  - `p65`: "void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
  - `p65`: "ePolarity)"
  - `p65`: "Function"

### SEG-0066
- `physical_pages`: `66`
- `printed_pages`: `66`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization: FC7xxx ICU User Manual; Module operates in ICU_MODE_NORMAL.; Used HW is configured according to referenced configuration structure."
- `keywords`: ["ICU", "All", "disabled", "FC7xxx", "ICU_MODE_NORMAL", "configured", "according", "referenced", "structure", "notifications"]
- `anchors`:
  - `p66`: "Module operates in ICU_MODE_NORMAL."
  - `p66`: "Used HW is configured according to referenced configuration structure."
  - `p66`: "a) All notifications are disabled."
  - `p66`: "b) All used interrupts are disabled."

### SEG-0067
- `physical_pages`: `67`
- `printed_pages`: `67`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.1 Enabled Notifications in SLEEP mode"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.1 Enabled Notifications in SLEEP mode: FC7xxx ICU User Manual; 2.9.3; Setting Mode"
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Setting", "Mode", "Enabled", "Notifications", "mode"]
- `anchors`:
  - `p67`: "2.9.3"
  - `p67`: "Setting Mode"
  - `p67`: "2.9.3.1"
  - `p67`: "Enabled Notifications in SLEEP mode"

### SEG-0068
- `physical_pages`: `68`
- `printed_pages`: `68`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode: FC7xxx ICU User Manual; 2.9.3.2; Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Disabled", "Reporting", "Sources", "Mode"]
- `anchors`:
  - `p68`: "2.9.3.2"
  - `p68`: "Disabled Reporting of Wakeup Sources in SLEEP Mode"

### SEG-0069
- `physical_pages`: `69`
- `printed_pages`: `69`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.3 Disabled Edge Notification in SLEEP Mode"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.3 Disabled Edge Notification in SLEEP Mode: FC7xxx ICU User Manual; 2.9.3.3; Disabled Edge Notification in SLEEP Mode"
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Disabled", "Edge", "Notification", "Mode"]
- `anchors`:
  - `p69`: "2.9.3.3"
  - `p69`: "Disabled Edge Notification in SLEEP Mode"

### SEG-0070
- `physical_pages`: `70`
- `printed_pages`: `70`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode: FC7xxx ICU User Manual; 2.9.3.4; Un-Enabled Reporting of Notifications in SLEEP Mode"
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Enabled", "Reporting", "Notifications", "Mode"]
- `anchors`:
  - `p70`: "2.9.3.4"
  - `p70`: "Un-Enabled Reporting of Notifications in SLEEP Mode"

### SEG-0071
- `physical_pages`: `71`
- `printed_pages`: `71`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Disabling of Wakeup-Capabilities"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Disabling of Wakeup-Capabilities: FC7xxx ICU User Manual; 2.9.4; Disabling of Wakeup-Capabilities"
- `keywords`: ["ICU", "FC7xxx", "Disabling", "Capabilities"]
- `anchors`:
  - `p71`: "2.9.4"
  - `p71`: "Disabling of Wakeup-Capabilities"

### SEG-0072
- `physical_pages`: `72`
- `printed_pages`: `72`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Enabling of Wakeup-Capabilities"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Enabling of Wakeup-Capabilities: FC7xxx ICU User Manual; 2.9.5; Enabling of Wakeup-Capabilities"
- `keywords`: ["ICU", "FC7xxx", "Enabling", "Capabilities"]
- `anchors`:
  - `p72`: "2.9.5"
  - `p72`: "Enabling of Wakeup-Capabilities"

### SEG-0073
- `physical_pages`: `73`
- `printed_pages`: `73`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.6 Setting up the Activation Condition for a Channel"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.6 Setting up the Activation Condition for a Channel: FC7xxx ICU User Manual; 2.9.6; Setting up the Activation Condition for a Channel"
- `keywords`: ["ICU", "FC7xxx", "Setting", "Activation", "Condition", "Channel"]
- `anchors`:
  - `p73`: "2.9.6"
  - `p73`: "Setting up the Activation Condition for a Channel"

### SEG-0074
- `physical_pages`: `74`
- `printed_pages`: `74`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.7 Disabling of the Notification for a Channel"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.7 Disabling of the Notification for a Channel: FC7xxx ICU User Manual; 2.9.7; Disabling of the Notification for a Channel"
- `keywords`: ["ICU", "FC7xxx", "Disabling", "Notification", "Channel"]
- `anchors`:
  - `p74`: "2.9.7"
  - `p74`: "Disabling of the Notification for a Channel"

### SEG-0075
- `physical_pages`: `75`
- `printed_pages`: `75`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.8 Enabling of the Edge-Notification for a Channel"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.8 Enabling of the Edge-Notification for a Channel: FC7xxx ICU User Manual; 2.9.8; Enabling of the Edge-Notification for a Channel"
- `keywords`: ["ICU", "FC7xxx", "Enabling", "Edge", "Notification", "Channel"]
- `anchors`:
  - `p75`: "2.9.8"
  - `p75`: "Enabling of the Edge-Notification for a Channel"

### SEG-0076
- `physical_pages`: `76`
- `printed_pages`: `76`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.9 Re-enabling of the Notification for a Channel"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.9 Re-enabling of the Notification for a Channel: FC7xxx ICU User Manual; 2.9.9; Re-enabling of the Notification for a Channel"
- `keywords`: ["ICU", "FC7xxx", "enabling", "Notification", "Channel"]
- `anchors`:
  - `p76`: "2.9.9"
  - `p76`: "Re-enabling of the Notification for a Channel"

### SEG-0077
- `physical_pages`: `77`
- `printed_pages`: `77`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.10 Polling of the Channel Status"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.10 Polling of the Channel Status: FC7xxx ICU User Manual; 2.9.10; Polling of the Channel Status"
- `keywords`: ["ICU", "FC7xxx", "Polling", "Channel", "Status"]
- `anchors`:
  - `p77`: "2.9.10"
  - `p77`: "Polling of the Channel Status"

### SEG-0078
- `physical_pages`: `78`
- `printed_pages`: `78`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.11 Overview of the Timestamping Functionality of the ICU Driver"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.11 Overview of the Timestamping Functionality of the ICU Driver: FC7xxx ICU User Manual; 2.9.11; Overview of the Timestamping Functionality of the ICU Driver"
- `keywords`: ["ICU", "FC7xxx", "Overview", "Timestamping", "Functionality"]
- `anchors`:
  - `p78`: "2.9.11"
  - `p78`: "Overview of the Timestamping Functionality of the ICU Driver"

### SEG-0079
- `physical_pages`: `79`
- `printed_pages`: `79`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.12 Inquire the Number of Counted Edges"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.12 Inquire the Number of Counted Edges: FC7xxx ICU User Manual; 2.9.12; Inquire the Number of Counted Edges"
- `keywords`: ["ICU", "FC7xxx", "Inquire", "Number", "Counted", "Edges"]
- `anchors`:
  - `p79`: "2.9.12"
  - `p79`: "Inquire the Number of Counted Edges"

### SEG-0080
- `physical_pages`: `80`
- `printed_pages`: `80`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.13 Inquire the Elapsed Level-Time of a Channel"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.13 Inquire the Elapsed Level-Time of a Channel: FC7xxx ICU User Manual; 2.9.13; Inquire the Elapsed Level-Time of a Channel"
- `keywords`: ["ICU", "FC7xxx", "Inquire", "Elapsed", "Level", "Time", "Channel"]
- `anchors`:
  - `p80`: "2.9.13"
  - `p80`: "Inquire the Elapsed Level-Time of a Channel"

### SEG-0081
- `physical_pages`: `81`
- `printed_pages`: `81`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.14 Inquire the Elapsed Period Time of a Channel"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.14 Inquire the Elapsed Period Time of a Channel: FC7xxx ICU User Manual; 2.9.14; Inquire the Elapsed Period Time of a Channel"
- `keywords`: ["ICU", "FC7xxx", "Icu_GetDutyCycleValues", "Inquire", "Elapsed", "Time", "Channel", "behavior", "Period", "High"]
- `anchors`:
  - `p81`: "2.9.14"
  - `p81`: "Inquire the Elapsed Period Time of a Channel"
  - `p81`: "2.9.15"
  - `p81`: "Inquire the Elapsed High Time of a Channel"

### SEG-0082
- `physical_pages`: `82`
- `printed_pages`: `82`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.15 Inquire the Elapsed High Time of a Channel"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.15 Inquire the Elapsed High Time of a Channel: FC7xxx ICU User Manual"
- `keywords`: ["ICU", "FC7xxx"]
- `anchors`:
  - `p82`: "no body anchor extracted"

### SEG-0083
- `physical_pages`: `83`
- `printed_pages`: `83`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.16 Measure the Values Needed for Calculation of Duty Cycles"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.16 Measure the Values Needed for Calculation of Duty Cycles: FC7xxx ICU User Manual; 2.9.16; Measure the Values Needed for Calculation of Duty Cycles"
- `keywords`: ["ICU", "FC7xxx", "Measure", "Values", "Needed", "Calculation", "Duty", "Cycles"]
- `anchors`:
  - `p83`: "2.9.16"
  - `p83`: "Measure the Values Needed for Calculation of Duty Cycles"

### SEG-0084
- `physical_pages`: `84`
- `printed_pages`: `84`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.17 Cooperative Usage of Notification and Polling Mechanism"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.17 Cooperative Usage of Notification and Polling Mechanism: FC7xxx ICU User Manual; 2.9.17; Cooperative Usage of Notification and Polling Mechanism"
- `keywords`: ["ICU", "FC7xxx", "Cooperative", "Usage", "Notification", "Polling", "Mechanism"]
- `anchors`:
  - `p84`: "2.9.17"
  - `p84`: "Cooperative Usage of Notification and Polling Mechanism"

### SEG-0085
- `physical_pages`: `85`
- `printed_pages`: `85`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation: FC7xxx ICU User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["ICU", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown", "below"]
- `anchors`:
  - `p85`: "Chapter 3 Tresos Configuration Items"
  - `p85`: "3.1"
  - `p85`: "Container Inclusion Relation"
  - `p85`: "The container inclusion relation is shown as below:"

### SEG-0086
- `physical_pages`: `86`
- `printed_pages`: `86`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT: FC7xxx ICU User Manual; 3.2; Containers and Variables"
- `keywords`: ["ICU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "IcuConfigSet", "FC7xxx", "VariantPreCompile", "Variable", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p86`: "3.2"
  - `p86`: "Containers and Variables"
  - `p86`: "3.2.1"
  - `p86`: "IMPLEMENTATION_CONFIG_VARIANT"

### SEG-0087
- `physical_pages`: `87`
- `printed_pages`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel: FC7xxx ICU User Manual; Screenshot; Properties"
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx", "Variable", "INTEGER"]
- `anchors`:
  - `p87`: "Screenshot"
  - `p87`: "Properties"
  - `p87`: "Property"
  - `p87`: "Value"

### SEG-0088
- `physical_pages`: `88`
- `printed_pages`: `88`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule: FC7xxx ICU User Manual; Properties; Property"
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property", "Origin", "AUTOSAR_ECUC"]
- `anchors`:
  - `p88`: "Properties"
  - `p88`: "Property"
  - `p88`: "Value"
  - `p88`: "Type"

### SEG-0089
- `physical_pages`: `89`
- `printed_pages`: `89`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification: FC7xxx ICU User Manual; Properties; Property"
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC", "IcuOverflowNotification", "Screenshot"]
- `anchors`:
  - `p89`: "Properties"
  - `p89`: "Property"
  - `p89`: "Value"
  - `p89`: "Type"

### SEG-0090
- `physical_pages`: `90`
- `printed_pages`: `90`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement: FC7xxx ICU User Manual; Origin; AUTOSAR_ECUC"
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties", "Property", "IcuSignalMeasurementProperty"]
- `anchors`:
  - `p90`: "Origin"
  - `p90`: "AUTOSAR_ECUC"
  - `p90`: "SymbolicNameValue"
  - `p90`: "false"

### SEG-0091
- `physical_pages`: `91`
- `printed_pages`: `91`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification: FC7xxx ICU User Manual; 3.2.3.15; IcuTimestampNotification"
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME", "SymbolicNameValue", "IcuTimeStampDmaSupport"]
- `anchors`:
  - `p91`: "3.2.3.15"
  - `p91`: "IcuTimestampNotification"
  - `p91`: "Variable"
  - `p91`: "IcuTimestampNotification"

### SEG-0092
- `physical_pages`: `92`
- `printed_pages`: `92`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo: FC7xxx ICU User Manual; 3.2.3.19; IcuChannelWakeupInfo"
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC", "ASPathDataOfSchema", "AUTOSAR"]
- `anchors`:
  - `p92`: "3.2.3.19"
  - `p92`: "IcuChannelWakeupInfo"
  - `p92`: "Variable"
  - `p92`: "IcuChannelWakeupInfo"

### SEG-0093
- `physical_pages`: `93`
- `printed_pages`: `93`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource: FC7xxx ICU User Manual; Screenshot; Properties"
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property", "Origin", "FTU_0"]
- `anchors`:
  - `p93`: "Screenshot"
  - `p93`: "Properties"
  - `p93`: "Property"
  - `p93`: "Value"

### SEG-0094
- `physical_pages`: `94`
- `printed_pages`: `94`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler: FC7xxx ICU User Manual; 3.2.4.5; IcuFtuFilterPrescaler"
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel", "Screenshot", "Properties"]
- `anchors`:
  - `p94`: "3.2.4.5"
  - `p94`: "IcuFtuFilterPrescaler"
  - `p94`: "Variable"
  - `p94`: "IcuFtuFilterPrescaler"

### SEG-0095
- `physical_pages`: `95`
- `printed_pages`: `95`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter: FC7xxx ICU User Manual; SymbolicNameValue; false"
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties", "Property", "Origin"]
- `anchors`:
  - `p95`: "SymbolicNameValue"
  - `p95`: "false"
  - `p95`: "Range"
  - `p95`: "0~15"

### SEG-0096
- `physical_pages`: `96`
- `printed_pages`: `96`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule: FC7xxx ICU User Manual; 3.2.5; IcuPort"
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule", "IcuPortPartitionRef", "IcuAontmr"]
- `anchors`:
  - `p96`: "3.2.5"
  - `p96`: "IcuPort"
  - `p96`: "Container"
  - `p96`: "IcuPort"

### SEG-0097
- `physical_pages`: `97`
- `printed_pages`: `97`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule: FC7xxx ICU User Manual; Type; Map"
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties", "Property", "Origin"]
- `anchors`:
  - `p97`: "Type"
  - `p97`: "Map"
  - `p97`: "MIN"
  - `p97`: "3.2.6.1"

### SEG-0098
- `physical_pages`: `98`
- `printed_pages`: `98`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect: FC7xxx ICU User Manual; SymbolicNameValue; false"
- `keywords`: ["ICU", "Icu", "Aontimer", "SymbolicNameValue", "IcuAontmrPinSelect", "IcuAontmrPartitionRef", "IcuCmp", "FC7xxx", "ICU_AONTIMER_GLITCH_FILTER_2", "ICU_AONTIMER_GLITCH_FILTER_4"]
- `anchors`:
  - `p98`: "SymbolicNameValue"
  - `p98`: "false"
  - `p98`: "Range"
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_2,"

### SEG-0099
- `physical_pages`: `99`
- `printed_pages`: `99`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module: FC7xxx ICU User Manual; Screenshot; Properties"
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property", "SymbolicNameValue", "IcuCmpFunctionMode"]
- `anchors`:
  - `p99`: "Screenshot"
  - `p99`: "Properties"
  - `p99`: "Property"
  - `p99`: "Value"

### SEG-0100
- `physical_pages`: `100`
- `printed_pages`: `100`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc: FC7xxx ICU User Manual; Origin; FLAGCHIP"
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc", "IcuCmpPositiveInputMuxSelect", "ICU_CMP_INSEL_MUX_IN0"]
- `anchors`:
  - `p100`: "Origin"
  - `p100`: "FLAGCHIP"
  - `p100`: "SymbolicNameValue"
  - `p100`: "false"

### SEG-0101
- `physical_pages`: `101`
- `printed_pages`: `101`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod: FC7xxx ICU User Manual; 3.2.7.7; IcuCmpFilterPeriod"
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property", "Origin", "IcuCmpFilterCnt"]
- `anchors`:
  - `p101`: "3.2.7.7"
  - `p101`: "IcuCmpFilterPeriod"
  - `p101`: "Variable"
  - `p101`: "IcuCmpFilterPeriod"

### SEG-0102
- `physical_pages`: `102`
- `printed_pages`: `102`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut: FC7xxx ICU User Manual; 3.2.7.11; IcuInvCmpOut"
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property", "BOOLEAN", "Origin"]
- `anchors`:
  - `p102`: "3.2.7.11"
  - `p102`: "IcuInvCmpOut"
  - `p102`: "Variable"
  - `p102`: "IcuInvCmpOut"

### SEG-0103
- `physical_pages`: `103`
- `printed_pages`: `103`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.15 IcuCmpOutPinEnable"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.15 IcuCmpOutPinEnable: FC7xxx ICU User Manual; 3.2.7.15; IcuCmpOutPinEnable"
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property", "Origin", "IcuCmpDacReference"]
- `anchors`:
  - `p103`: "3.2.7.15"
  - `p103`: "IcuCmpOutPinEnable"
  - `p103`: "Variable"
  - `p103`: "IcuCmpOutPinEnable"

### SEG-0104
- `physical_pages`: `104`
- `printed_pages`: `104`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.19 IcuCmpOutWinUserDefLevel: FC7xxx ICU User Manual; 3.2.7.19; IcuCmpOutWinUserDefLevel"
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p104`: "3.2.7.19"
  - `p104`: "IcuCmpOutWinUserDefLevel"
  - `p104`: "Variable"
  - `p104`: "IcuCmpOutWinUserDefLevel"

### SEG-0105
- `physical_pages`: `105`
- `printed_pages`: `105`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.23 IcuCmpPartitionRef"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.23 IcuCmpPartitionRef: FC7xxx ICU User Manual; Screenshot; Properties"
- `keywords`: ["ICU", "FC7xxx", "REFERENCE", "ASPathDataOfSchema", "AUTOSAR", "EcucDefs", "EcuC", "EcucPartitionCollectio", "EcucPartition", "Screenshot"]
- `anchors`:
  - `p105`: "Screenshot"
  - `p105`: "Properties"
  - `p105`: "Property"
  - `p105`: "Value"

### SEG-0106
- `physical_pages`: `106`
- `printed_pages`: `106`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.1 IcuDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.1 IcuDevErrorDetect: FC7xxx ICU User Manual; 3.2.8; IcuGeneral"
- `keywords`: ["ICU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "SymbolicNameValue", "IcuGeneral", "IcuDevErrorDetect", "AUTOSAR_ECUC"]
- `anchors`:
  - `p106`: "3.2.8"
  - `p106`: "IcuGeneral"
  - `p106`: "Container"
  - `p106`: "IcuGeneral"

### SEG-0107
- `physical_pages`: `107`
- `printed_pages`: `107`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.5 IcuFtuGtbSupport"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.5 IcuFtuGtbSupport: FC7xxx ICU User Manual; Type; Variable: BOOLEAN"
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin", "IcuFtuGtbSupport", "Screenshot"]
- `anchors`:
  - `p107`: "Type"
  - `p107`: "Variable: BOOLEAN"
  - `p107`: "Origin"
  - `p107`: "FLAGCHIP"

### SEG-0108
- `physical_pages`: `108`
- `printed_pages`: `108`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.9 IcuFtuGtbGroup"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.9 IcuFtuGtbGroup: FC7xxx ICU User Manual; SymbolicNameValue; false"
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "IcuFtuGtbGroup", "Screenshot", "Properties", "Property", "IcuOptionalApis", "IcuDeInitApi", "BOOLEAN"]
- `anchors`:
  - `p108`: "SymbolicNameValue"
  - `p108`: "false"
  - `p108`: "Range"
  - `p108`: "ASPathDataOfSchema:/AUTOSAR/EcucDefs/EcuC/EcucPartitionCollectio"

### SEG-0109
- `physical_pages`: `109`
- `printed_pages`: `109`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.3 IcuEdgeCountApi"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.3 IcuEdgeCountApi: FC7xxx ICU User Manual; 3.2.9.3; IcuEdgeCountApi"
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Adds", "removes", "code", "IcuEdgeCountApi", "Screenshot"]
- `anchors`:
  - `p109`: "3.2.9.3"
  - `p109`: "IcuEdgeCountApi"
  - `p109`: "Variable"
  - `p109`: "IcuEdgeCountApi"

### SEG-0110
- `physical_pages`: `110`
- `printed_pages`: `110`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.8 IcuGetVersionInfoApi"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.8 IcuGetVersionInfoApi: FC7xxx ICU User Manual; Screenshot; Properties"
- `keywords`: ["ICU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property", "Origin", "IcuGetVersionInfoApi"]
- `anchors`:
  - `p110`: "Screenshot"
  - `p110`: "Properties"
  - `p110`: "Property"
  - `p110`: "Value"

### SEG-0111
- `physical_pages`: `111`
- `printed_pages`: `111`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.12 IcuWakeupFunctionalityApi"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.12 IcuWakeupFunctionalityApi: FC7xxx ICU User Manual; Origin; AUTOSAR_ECUC"
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "AUTOSAR_ECUC", "BOOLEAN", "Origin", "IcuWakeupFunctionalityApi", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p111`: "Origin"
  - `p111`: "AUTOSAR_ECUC"
  - `p111`: "SymbolicNameValue"
  - `p111`: "false"

### SEG-0112
- `physical_pages`: `112`
- `printed_pages`: `112`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi: FC7xxx ICU User Manual; 3.2.10.2; IcuOverflowNotificationApi"
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation", "ArReleaseMajorVersion", "AUTOSAR"]
- `anchors`:
  - `p112`: "3.2.10.2"
  - `p112`: "IcuOverflowNotificationApi"
  - `p112`: "Variable"
  - `p112`: "IcuOverflowNotificationApi"

### SEG-0113
- `physical_pages`: `113`
- `printed_pages`: `113`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion: FC7xxx ICU User Manual; Description; Revision version number of AUTOSAR specification on which the appropriate implementation is based on."
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number", "implementation", "Screenshot"]
- `anchors`:
  - `p113`: "Description"
  - `p113`: "Revision version number of AUTOSAR specification on which the appropriate implementation is based on."
  - `p113`: "Screenshot"
  - `p113`: "Properties"

### SEG-0114
- `physical_pages`: `114`
- `printed_pages`: `114`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.7 ModuleId"
- `content_types`: ["text"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.7 ModuleId: FC7xxx ICU User Manual; 3.2.11.7; ModuleId"
- `keywords`: ["ICU", "ModuleId", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "VendorId", "FC7xxx", "AUTOSAR", "Screenshot", "Properties"]
- `anchors`:
  - `p114`: "3.2.11.7"
  - `p114`: "ModuleId"
  - `p114`: "Variable"
  - `p114`: "ModuleId"

### SEG-0115
- `physical_pages`: `115`
- `printed_pages`: `115`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx ICU User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["ICU", "FTU", "channel", "FC7xxx", "ICU_MODE_SIGNAL_MEASUREMENT", "ICU_MODE_TIMESTAMP", "IcuFtu", "Only", "channels", "Set"]
- `anchors`:
  - `p115`: "Chapter 4 Configuration Guides"
  - `p115`: "4.1"
  - `p115`: "Configuration Item Constraint"
  - `p115`: "1)"

### SEG-0116
- `physical_pages`: `116`
- `printed_pages`: `116`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; If Port is used.; a)"
- `keywords`: ["ICU", "Port", "FC7xxx", "IcuPort", "Add", "object", "tab", "Select"]
- `anchors`:
  - `p116`: "If Port is used."
  - `p116`: "a)"
  - `p116`: "Add an object in the IcuPort tab."
  - `p116`: "b)"

### SEG-0117
- `physical_pages`: `117`
- `printed_pages`: `117`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; If AONTIMER is used; a)"
- `keywords`: ["AONTIMER", "ICU", "FC7xxx", "IcuAontmr", "Add", "object", "tab", "Set", "including", "clock"]
- `anchors`:
  - `p117`: "If AONTIMER is used"
  - `p117`: "a)"
  - `p117`: "Add an object in the IcuAontmr tab."
  - `p117`: "b)"

### SEG-0118
- `physical_pages`: `118`
- `printed_pages`: `118`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; If CMP is used.; a)"
- `keywords`: ["ICU", "CMP", "Cmp", "FC7xxx", "MuxSelect", "IcuChannel", "Add", "object", "tab", "Set"]
- `anchors`:
  - `p118`: "If CMP is used."
  - `p118`: "a)"
  - `p118`: "Add an object in the Cmp tab."
  - `p118`: "b)"

### SEG-0119
- `physical_pages`: `119`
- `printed_pages`: `119`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; b); Configure each option of the ICU channel."
- `keywords`: ["ICU", "FC7xxx", "Configure", "each", "option", "channel"]
- `anchors`:
  - `p119`: "b)"
  - `p119`: "Configure each option of the ICU channel."

### SEG-0120
- `physical_pages`: `120`
- `printed_pages`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; c); Wakeup-capabilty:Enable IcuWakeupCapability and select a wakeup source which is configured in EcuM"
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT", "IcuSignalEdgeDetection", "must"]
- `anchors`:
  - `p120`: "c)"
  - `p120`: "Wakeup-capabilty:Enable IcuWakeupCapability and select a wakeup source which is configured in EcuM"
  - `p120`: "module."
  - `p120`: "d)"

### SEG-0121
- `physical_pages`: `121`
- `printed_pages`: `121`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; c); Enable or disable the development error detection, wakeup source reporting, overflow time statistics."
- `keywords`: ["ICU", "Icu", "FC7xxx", "AUTOSAR", "MultiCoreFeature", "MultiCoreSupport", "disable", "should", "distributed", "partition"]
- `anchors`:
  - `p121`: "c)"
  - `p121`: "Enable or disable the development error detection, wakeup source reporting, overflow time statistics."
  - `p121`: "d)"
  - `p121`: "Enabling or disable the settings of this section will configure the driver in a mode not compliant with AUTOSAR"

### SEG-0122
- `physical_pages`: `122`
- `printed_pages`: `122`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps: FC7xxx ICU User Manual; a); Channel."
- `keywords`: ["ICU", "FC7xxx", "Channel", "unit"]
- `anchors`:
  - `p122`: "a)"
  - `p122`: "Channel."
  - `p122`: "b) HW unit."
  - `p122`: "c)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `None`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes table-like source content for Revision History; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Revision History"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0003-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0003-001"
- `caption`: "Revision History"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Revision History; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Revision History"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0004-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0004-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `4`
- `printed_pages`: ["4"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "Notification", "Inquire", "FC7xxx"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Rejected Requirement table-like panels; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Rejected Requirement table-like panels"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Table-like content on page 7"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `None`
- `key_fields`: ["ICU", "FC7xxx", "Structure"]
- `summary`: "Indexes table-like source content for Table-like content on page 7; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 7"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "define", "invalid", "called"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Table-like content on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "define", "NotifyInterval", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 9; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 9"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like content on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `bbox`: `None`
- `key_fields`: ["ICU", "define", "Icu_EnableEdgeDetection", "FC7xxx", "ICU_STOPTIMESTAMP_ID"]
- `summary`: "Indexes table-like source content for Table-like content on page 10; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 10"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Icu_Version.h"
- `bbox`: `None`
- `key_fields`: ["ICU", "define", "Definition", "FC7xxx", "ICU_INSTANCE_ID"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like content on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["ICU", "STD_ON", "define", "STD_OFF", "can"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like content on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["ICU", "STD_ON", "can", "STD_OFF", "services"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0014-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0014-001"
- `caption`: "Table-like content on page 14"
- `physical_pages`: `14`
- `printed_pages`: ["14"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Icu_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["Icu", "ICU", "Ftu", "FTU", "STD_ON"]
- `summary`: "Indexes table-like source content for Table-like content on page 14; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 14"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Table-like content on page 15"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.1 Icu_ModeType"
- `bbox`: `None`
- `key_fields`: ["ICU", "PORT", "AONTIMER", "CMP", "STD_ON"]
- `summary`: "Indexes table-like source content for Table-like content on page 15; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 15"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0016-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-001"
- `caption`: "Table-like content on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.5 Icu_MeasurementModeType"
- `bbox`: `None`
- `key_fields`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration"]
- `summary`: "Indexes table-like source content for Table-like content on page 16; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 16"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0017-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-001"
- `caption`: "Table-like content on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Icu_AontimerHwConfigType"
- `bbox`: `None`
- `key_fields`: ["ICU", "Aontimer", "typedef", "Icu_AontimerModuleConfigType", "Icu_AontimerHwConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 17; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 17"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0018-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-001"
- `caption`: "Table-like content on page 18"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Icu_ConfigType"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "Ftu", "channel", "const"]
- `summary`: "Indexes table-like source content for Table-like content on page 18; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 18"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0019-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-001"
- `caption`: "Table-like content on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType"
- `bbox`: `None`
- `key_fields`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu"]
- `summary`: "Indexes table-like source content for Table-like content on page 19; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 19"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0020-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-001"
- `caption`: "Table-like content on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "Port", "Cmp", "const"]
- `summary`: "Indexes table-like source content for Table-like content on page 20; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 20"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0021-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "Icu_Init", "Icu_ConfigType", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0023-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-001"
- `caption`: "Table-like content on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.2 void Icu_DeInit ( void)"
- `bbox`: `None`
- `key_fields`: ["ICU", "void", "Icu_DeInit", "Icu_SetMode", "Icu_ModeType"]
- `summary`: "Indexes table-like source content for Table-like content on page 23; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 23"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0024-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-001"
- `caption`: "Table-like content on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup"]
- `summary`: "Indexes table-like source content for Table-like content on page 24; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 24"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Table-like content on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 25; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 25"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0026-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0026-001"
- `caption`: "Table-like content on page 26"
- `physical_pages`: `26`
- `printed_pages`: ["26"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState"]
- `summary`: "Indexes table-like source content for Table-like content on page 26; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 26"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0027-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0027-001"
- `caption`: "Table-like content on page 27"
- `physical_pages`: `27`
- `printed_pages`: ["27"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 27; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 27"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0028-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0028-001"
- `caption`: "Table-like content on page 28"
- `physical_pages`: `28`
- `printed_pages`: ["28"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount"]
- `summary`: "Indexes table-like source content for Table-like content on page 28; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 28"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0029-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0029-001"
- `caption`: "Table-like content on page 29"
- `physical_pages`: `29`
- `printed_pages`: ["29"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "Icu_ChannelType", "channel", "void"]
- `summary`: "Indexes table-like source content for Table-like content on page 29; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 29"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0030-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0030-001"
- `caption`: "Table-like content on page 30"
- `physical_pages`: `30`
- `printed_pages`: ["30"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers"]
- `summary`: "Indexes table-like source content for Table-like content on page 30; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 30"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0031-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0031-001"
- `caption`: "Table-like content on page 31"
- `physical_pages`: `31`
- `printed_pages`: ["31"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues"]
- `summary`: "Indexes table-like source content for Table-like content on page 31; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 31"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0032-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0032-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `32`
- `printed_pages`: ["32"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `bbox`: `None`
- `key_fields`: ["ICU", "Ftu", "void", "const", "u32Group"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0033-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0033-001"
- `caption`: "Table-like content on page 33"
- `physical_pages`: `33`
- `printed_pages`: ["33"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `bbox`: `None`
- `key_fields`: ["ICU", "FC7xxx", "pHwConfig", "Diagram", "Pointer"]
- `summary`: "Indexes table-like source content for Table-like content on page 33; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 33"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0034-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0034-001"
- `caption`: "Table-like content on page 34"
- `physical_pages`: `34`
- `printed_pages`: ["34"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "void", "u32ChannelOfHw", "pHwConfig", "Icu_HW_ChannelDeInit"]
- `summary`: "Indexes table-like source content for Table-like content on page 34; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 34"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0035-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0035-001"
- `caption`: "Table-like content on page 35"
- `physical_pages`: `35`
- `printed_pages`: ["35"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "Icu_HW_ChannelInit", "Icu_HwType", "u32ChannelOfHw"]
- `summary`: "Indexes table-like source content for Table-like content on page 35; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 35"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0036-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0036-001"
- `caption`: "Table-like content on page 36"
- `physical_pages`: `36`
- `printed_pages`: ["36"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "u32ChannelOfHw", "eHwType", "void", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 36; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 36"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0037-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0037-001"
- `caption`: "Table-like content on page 37"
- `physical_pages`: `37`
- `printed_pages`: ["37"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "eActivationEdge", "channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 37; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 37"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0038-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0038-001"
- `caption`: "Table-like content on page 38"
- `physical_pages`: `38`
- `printed_pages`: ["38"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu_InputStateType", "Icu_HW_GetInputState", "Icu_HwType", "eHwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 38; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 38"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0039-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0039-001"
- `caption`: "Table-like content on page 39"
- `physical_pages`: `39`
- `printed_pages`: ["39"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.9 void"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_StartTimestamp", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 39; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 39"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0040-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0040-001"
- `caption`: "Table-like content on page 40"
- `physical_pages`: `40`
- `printed_pages`: ["40"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 40; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 40"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0041-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0041-001"
- `caption`: "Table-like content on page 41"
- `physical_pages`: `41`
- `printed_pages`: ["41"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 41; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 41"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0042-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0042-001"
- `caption`: "Table-like content on page 42"
- `physical_pages`: `42`
- `printed_pages`: ["42"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 42; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 42"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0043-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0043-001"
- `caption`: "Table-like content on page 43"
- `physical_pages`: `43`
- `printed_pages`: ["43"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_DisableEdgeDetection", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 43; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 43"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0044-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0044-001"
- `caption`: "Table-like content on page 44"
- `physical_pages`: `44`
- `printed_pages`: ["44"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `None`
- `key_fields`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 44; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 44"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0045-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0045-001"
- `caption`: "Table-like content on page 45"
- `physical_pages`: `45`
- `printed_pages`: ["45"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `bbox`: `None`
- `key_fields`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw"]
- `summary`: "Indexes table-like source content for Table-like content on page 45; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 45"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0046-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0046-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `46`
- `printed_pages`: ["46"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0047-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0047-001"
- `caption`: "Table-like content on page 47"
- `physical_pages`: `47`
- `printed_pages`: ["47"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "const", "Icu_Ftu_ChannelInit", "Icu_FtuInstanceType"]
- `summary`: "Indexes table-like source content for Table-like content on page 47; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 47"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0048-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0048-001"
- `caption`: "Table-like content on page 48"
- `physical_pages`: `48`
- `printed_pages`: ["48"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "eFtuInstance", "const", "Icu_FtuInstanceType"]
- `summary`: "Indexes table-like source content for Table-like content on page 48; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 48"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0049-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0049-001"
- `caption`: "Table-like content on page 49"
- `physical_pages`: `49`
- `printed_pages`: ["49"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 49; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 49"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0050-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0050-001"
- `caption`: "Table-like content on page 50"
- `physical_pages`: `50`
- `printed_pages`: ["50"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType"]
- `summary`: "Indexes table-like source content for Table-like content on page 50; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 50"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0051-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0051-001"
- `caption`: "Table-like content on page 51"
- `physical_pages`: `51`
- `printed_pages`: ["51"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const"]
- `summary`: "Indexes table-like source content for Table-like content on page 51; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 51"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0052-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0052-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `52`
- `printed_pages`: ["52"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `bbox`: `None`
- `key_fields`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0053-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0053-001"
- `caption`: "Table-like content on page 53"
- `physical_pages`: `53`
- `printed_pages`: ["53"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `bbox`: `None`
- `key_fields`: ["ICU", "Port", "const", "ePortInstance", "u8Channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 53; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 53"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0054-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0054-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `54`
- `printed_pages`: ["54"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `bbox`: `None`
- `key_fields`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0055-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0055-001"
- `caption`: "Table-like content on page 55"
- `physical_pages`: `55`
- `printed_pages`: ["55"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance"]
- `summary`: "Indexes table-like source content for Table-like content on page 55; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 55"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0056-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0056-001"
- `caption`: "Table-like content on page 56"
- `physical_pages`: `56`
- `printed_pages`: ["56"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType"]
- `summary`: "Indexes table-like source content for Table-like content on page 56; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 56"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0057-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0057-001"
- `caption`: "Table-like content on page 57"
- `physical_pages`: `57`
- `printed_pages`: ["57"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType"]
- `summary`: "Indexes table-like source content for Table-like content on page 57; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 57"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0058-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0058-001"
- `caption`: "Table-like content on page 58"
- `physical_pages`: `58`
- `printed_pages`: ["58"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance"]
- `summary`: "Indexes table-like source content for Table-like content on page 58; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 58"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0059-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0059-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `59`
- `printed_pages`: ["59"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "ICU", "Cmp", "eInstance", "void"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0060-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0060-001"
- `caption`: "Table-like content on page 60"
- `physical_pages`: `60`
- `printed_pages`: ["60"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "Icu_Cmp_DeInit", "Icu_CmpInstanceType", "eCmpInstance"]
- `summary`: "Indexes table-like source content for Table-like content on page 60; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 60"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0061-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0061-001"
- `caption`: "Table-like content on page 61"
- `physical_pages`: `61`
- `printed_pages`: ["61"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_Cmp_GetInputState"]
- `summary`: "Indexes table-like source content for Table-like content on page 61; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 61"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0062-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0062-001"
- `caption`: "Table-like content on page 62"
- `physical_pages`: `62`
- `printed_pages`: ["62"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "eCmpInstance", "const", "ePolarity"]
- `summary`: "Indexes table-like source content for Table-like content on page 62; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 62"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0063-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0063-001"
- `caption`: "Table-like content on page 63"
- `physical_pages`: `63`
- `printed_pages`: ["63"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "eCmpInstance", "void", "const"]
- `summary`: "Indexes table-like source content for Table-like content on page 63; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 63"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0064-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0064-001"
- `caption`: "Table-like content on page 64"
- `physical_pages`: `64`
- `printed_pages`: ["64"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType"]
- `summary`: "Indexes table-like source content for Table-like content on page 64; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 64"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0065-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0065-001"
- `caption`: "Table-like content on page 65"
- `physical_pages`: `65`
- `printed_pages`: ["65"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType"]
- `summary`: "Indexes table-like source content for Table-like content on page 65; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 65"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0066-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0066-001"
- `caption`: "Table-like content on page 66"
- `physical_pages`: `66`
- `printed_pages`: ["66"]
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `bbox`: `None`
- `key_fields`: ["ICU", "All", "disabled", "FC7xxx", "ICU_MODE_NORMAL"]
- `summary`: "Indexes table-like source content for Table-like content on page 66; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 66"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0085-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0085-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `85`
- `printed_pages`: ["85"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `None`
- `key_fields`: ["ICU", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0086-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0086-001"
- `caption`: "Table-like content on page 86"
- `physical_pages`: `86`
- `printed_pages`: ["86"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `None`
- `key_fields`: ["ICU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "IcuConfigSet", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 86; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 86"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0088-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0088-001"
- `caption`: "Table-like content on page 88"
- `physical_pages`: `88`
- `printed_pages`: ["88"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `bbox`: `None`
- `key_fields`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER"]
- `summary`: "Indexes table-like source content for Table-like content on page 88; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 88"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0089-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0089-001"
- `caption`: "Table-like content on page 89"
- `physical_pages`: `89`
- `printed_pages`: ["89"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "Variable", "Properties", "Property"]
- `summary`: "Indexes table-like source content for Table-like content on page 89; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 89"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0090-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0090-001"
- `caption`: "Table-like content on page 90"
- `physical_pages`: `90`
- `printed_pages`: ["90"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `bbox`: `None`
- `key_fields`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case"]
- `summary`: "Indexes table-like source content for Table-like content on page 90; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 90"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0091-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0091-001"
- `caption`: "Table-like content on page 91"
- `physical_pages`: `91`
- `printed_pages`: ["91"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 91; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 91"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0093-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0093-001"
- `caption`: "Table-like content on page 93"
- `physical_pages`: `93`
- `printed_pages`: ["93"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `bbox`: `None`
- `key_fields`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION"]
- `summary`: "Indexes table-like source content for Table-like content on page 93; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 93"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0094-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0094-001"
- `caption`: "Table-like content on page 94"
- `physical_pages`: `94`
- `printed_pages`: ["94"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `bbox`: `None`
- `key_fields`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER"]
- `summary`: "Indexes table-like source content for Table-like content on page 94; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 94"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0096-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0096-001"
- `caption`: "Table-like content on page 96"
- `physical_pages`: `96`
- `printed_pages`: ["96"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `bbox`: `None`
- `key_fields`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 96; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 96"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0097-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0097-001"
- `caption`: "Table-like content on page 97"
- `physical_pages`: `97`
- `printed_pages`: ["97"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `bbox`: `None`
- `key_fields`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue"]
- `summary`: "Indexes table-like source content for Table-like content on page 97; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 97"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0098-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0098-001"
- `caption`: "Table-like content on page 98"
- `physical_pages`: `98`
- `printed_pages`: ["98"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect"
- `bbox`: `None`
- `key_fields`: ["ICU", "Icu", "Aontimer", "SymbolicNameValue", "IcuAontmrPinSelect"]
- `summary`: "Indexes table-like source content for Table-like content on page 98; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 98"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0099-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0099-001"
- `caption`: "Table-like content on page 99"
- `physical_pages`: `99`
- `printed_pages`: ["99"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `bbox`: `None`
- `key_fields`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION"]
- `summary`: "Indexes table-like source content for Table-like content on page 99; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 99"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0100-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0100-001"
- `caption`: "Table-like content on page 100"
- `physical_pages`: `100`
- `printed_pages`: ["100"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `bbox`: `None`
- `key_fields`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION"]
- `summary`: "Indexes table-like source content for Table-like content on page 100; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 100"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0101-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0101-001"
- `caption`: "Table-like content on page 101"
- `physical_pages`: `101`
- `printed_pages`: ["101"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `bbox`: `None`
- `key_fields`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod"]
- `summary`: "Indexes table-like source content for Table-like content on page 101; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 101"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0106-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0106-001"
- `caption`: "Table-like content on page 106"
- `physical_pages`: `106`
- `printed_pages`: ["106"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.1 IcuDevErrorDetect"
- `bbox`: `None`
- `key_fields`: ["ICU", "Variable", "Screenshot", "Properties", "Property"]
- `summary`: "Indexes table-like source content for Table-like content on page 106; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 106"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0115-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0115-001"
- `caption`: "Table-like content on page 115"
- `physical_pages`: `115`
- `printed_pages`: ["115"]
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `None`
- `key_fields`: ["ICU", "FTU", "channel", "FC7xxx", "ICU_MODE_SIGNAL_MEASUREMENT"]
- `summary`: "Indexes table-like source content for Table-like content on page 115; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 115"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

### FIG-0003-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0003-001"
- `caption`: "Generated visual anchor: Table of Contents"
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around Table of Contents; generated for retrieval because no formal figure number was detected."
- `keywords`: ["ICU", "Icu", "Icu_Types", "FC7xxx", "Icu_Version", "Icu_Cfg", "Icu_AontimerHwConfigType", "Icu_AontimerModuleConfigType"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0004-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0004-001"
- `caption`: "Generated visual anchor: Table of Contents"
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around Table of Contents; generated for retrieval because no formal figure number was detected."
- `keywords`: ["ICU", "Channel", "Notification", "Inquire", "FC7xxx", "Icu_Cmp", "Elapsed", "Time"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0007-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0007-001"
- `caption`: "Image block near 2.2 File Structure"
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[36.0, 57.6, 556.65, 219.7]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.2 File Structure; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Structure"]
- `anchor`: "Image block near 2.2 File Structure"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0007-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0007-002"
- `caption`: "Image block near 2.2 File Structure"
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[36.0, 221.1, 559.3, 372.9]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.2 File Structure; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Structure"]
- `anchor`: "Image block near 2.2 File Structure"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0007-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0007-003"
- `caption`: "Image block near 2.2 File Structure"
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[36.0, 372.9, 559.3, 501.95]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.2 File Structure; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Structure"]
- `anchor`: "Image block near 2.2 File Structure"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0007-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0007-004"
- `caption`: "Image block near 2.2 File Structure"
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[36.0, 501.95, 559.3, 642.95]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.2 File Structure; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Structure"]
- `anchor`: "Image block near 2.2 File Structure"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0008-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0008-001"
- `caption`: "Image block near 2.3.1 Macros in Icu.h"
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Icu.h"
- `bbox`: `[36.0, 36.9, 559.3, 186.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in Icu.h; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "define", "invalid", "called", "Icu_SetMode", "FC7xxx", "ICU_E_PARAM_POINTER"]
- `anchor`: "Image block near 2.3.1 Macros in Icu.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Generated visual anchor: 2.4.1.5 Icu_MeasurementModeType"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Icu_Types.h / 2.4.1.5 Icu_MeasurementModeType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.4.1.5 Icu_MeasurementModeType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["ICU", "edges", "channel", "Icu_MeasurementModeType", "Enumeration", "Definition", "Mode", "Icu_SignalMeasurementPropertyType"]
- `anchor`: "2.4.1.5 Icu_MeasurementModeType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.6.1 Icu_AontimerHwConfigType"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Icu_AontimerHwConfigType"
- `bbox`: `[112.25, 517.96, 302.45, 613.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1 Icu_AontimerHwConfigType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Aontimer", "typedef", "Icu_AontimerModuleConfigType", "Icu_AontimerHwConfigType", "const", "FC7xxx", "ICU_DMA_CHANNEL_STATE_IDLE"]
- `anchor`: "Image block near 2.6.1 Icu_AontimerHwConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.6.3 Icu_ConfigType"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Icu_ConfigType"
- `bbox`: `[112.25, 172.78, 537.44, 239.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.3 Icu_ConfigType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Ftu", "channel", "const", "Icu_ChannelConfigType", "Icu_ConfigType", "FC7xxx"]
- `anchor`: "Image block near 2.6.3 Icu_ConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.6.5 Icu_DutyCycleType"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType"
- `bbox`: `[112.25, 370.42, 552.46, 468.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.5 Icu_DutyCycleType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu", "Icu_Ftu_HwConfigType", "channel", "Icu_DutyCycleType"]
- `anchor`: "Image block near 2.6.5 Icu_DutyCycleType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-002"
- `caption`: "Image block near 2.6.5 Icu_DutyCycleType"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Icu_DutyCycleType"
- `bbox`: `[112.25, 587.18, 265.75, 682.28]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.5 Icu_DutyCycleType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "PORT", "AONTIMER", "Ftu", "Icu_Ftu_HwConfigType", "channel", "Icu_DutyCycleType"]
- `anchor`: "Image block near 2.6.5 Icu_DutyCycleType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 2.6.8 Icu_FtuModuleConfigType"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType"
- `bbox`: `[112.25, 318.61, 271.2, 413.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.8 Icu_FtuModuleConfigType; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType"]
- `anchor`: "Image block near 2.6.8 Icu_FtuModuleConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-002"
- `caption`: "Image block near 2.6.8 Icu_FtuModuleConfigType"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Icu_FtuModuleConfigType"
- `bbox`: `[112.25, 645.61, 544.19, 737.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.8 Icu_FtuModuleConfigType; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Port", "Cmp", "const", "Config", "Icu_PortModuleConfigType", "Icu_FtuModuleConfigType"]
- `anchor`: "Image block near 2.6.8 Icu_FtuModuleConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `bbox`: `[112.3, 37.4, 536.74, 793.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.1 void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.7.1.2 void Icu_DeInit ( void)"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.2 void Icu_DeInit ( void)"
- `bbox`: `[112.25, 164.96, 559.3, 612.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.2 void Icu_DeInit ( void); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "void", "Icu_DeInit", "Icu_SetMode", "Icu_ModeType", "FC7xxx", "ConfigPtr", "Returns"]
- `anchor`: "Image block near 2.7.1.2 void Icu_DeInit ( void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 37.4, 543.51, 362.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup", "Icu_EnableWakeup", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-002"
- `caption`: "Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 541.27, 338.85, 593.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup", "Icu_EnableWakeup", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-003"
- `caption`: "Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 721.34, 331.17, 771.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_DisableWakeup", "Icu_EnableWakeup", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.4 void Icu_DisableWakeup ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-001"
- `caption`: "Image block near 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `bbox`: `[112.25, 181.9, 339.7, 278.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel", "WakeupSource", "Icu_CheckWakeup", "EcuM_WakeupSourceType"]
- `anchor`: "Image block near 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-002"
- `caption`: "Image block near 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `bbox`: `[112.25, 408.6, 547.05, 609.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "void", "Icu_ChannelType", "channel", "WakeupSource", "Icu_CheckWakeup", "EcuM_WakeupSourceType"]
- `anchor`: "Image block near 2.7.1.6 void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-001"
- `caption`: "Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 54.83, 338.81, 103.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState", "Returns", "Icu_EnableNotification", "Icu_InputStateType"]
- `anchor`: "Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-002"
- `caption`: "Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 231.2, 338.87, 281.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState", "Returns", "Icu_EnableNotification", "Icu_InputStateType"]
- `anchor`: "Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-003"
- `caption`: "Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 408.66, 518.56, 692.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "Icu_GetInputState", "Returns", "Icu_EnableNotification", "Icu_InputStateType"]
- `anchor`: "Image block near 2.7.1.9 void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-001"
- `caption`: "Image block near 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `bbox`: `[112.25, 123.08, 558.95, 278.58]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr", "BufferSize", "void", "Icu_StartTimestamp"]
- `anchor`: "Image block near 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-002"
- `caption`: "Image block near 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `bbox`: `[112.25, 459.46, 501.31, 586.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "BufferPtr", "BufferSize", "void", "Icu_StartTimestamp"]
- `anchor`: "Image block near 2.7.1.11 void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Image block near 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 112.15, 557.03, 171.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount", "channel", "Icu_EnableEdgeCount", "Icu_EnableEdgeDetection"]
- `anchor`: "Image block near 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-002"
- `caption`: "Image block near 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 299.06, 539.64, 583.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu_ChannelType", "Channel", "void", "Icu_ResetEdgeCount", "channel", "Icu_EnableEdgeCount", "Icu_EnableEdgeDetection"]
- `anchor`: "Image block near 2.7.1.14 void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Image block near 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 37.4, 539.34, 333.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "void", "Icu_DisableEdgeDetection", "Icu_DisableEdgeCount", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-002"
- `caption`: "Image block near 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 460.96, 558.7, 629.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "void", "Icu_DisableEdgeDetection", "Icu_DisableEdgeCount", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.17 void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 37.99, 531.82, 288.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers", "Icu_StartSignalMeasurement", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-002"
- `caption`: "Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 417.01, 559.3, 509.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers", "Icu_StartSignalMeasurement", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-003"
- `caption`: "Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 638.08, 557.18, 763.98]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "Icu_EdgeNumberType", "Icu_GetEdgeNumbers", "Icu_StartSignalMeasurement", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.7.1.19 Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 147.52, 559.3, 210.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-002"
- `caption`: "Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 338.59, 389.67, 402.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-003"
- `caption`: "Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `bbox`: `[112.25, 531.15, 367.32, 583.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Channel", "Icu_ChannelType", "channel", "DutyCycleValues", "Returns", "void", "Icu_StopSignalMeasurement"]
- `anchor`: "Image block near 2.7.1.21 void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `bbox`: `[112.25, 37.4, 556.99, 95.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo"]
- `anchor`: "Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-002"
- `caption`: "Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `bbox`: `[110.6, 368.21, 501.35, 394.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo"]
- `anchor`: "Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-003"
- `caption`: "Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Icu.h / 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `bbox`: `[110.6, 522.83, 502.1, 549.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Ftu", "void", "const", "u32Group", "Diagram", "Returns", "Icu_GetVersionInfo"]
- `anchor`: "Image block near 2.7.1.25 void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `bbox`: `[112.25, 37.4, 395.68, 723.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig ); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "pHwConfig", "Diagram", "Pointer", "structure", "Returns"]
- `anchor`: "Image block near 2.8.1.1 void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 130.08, 525.19, 257.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "void", "u32ChannelOfHw", "pHwConfig", "Icu_HW_ChannelDeInit", "Icu_HwType", "eHwType", "Icu_HW_ModulesDeInit"]
- `anchor`: "Image block near 2.8.1.2 void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `bbox`: `[112.25, 37.4, 489.44, 476.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "Icu_HW_ChannelInit", "Icu_HwType", "u32ChannelOfHw", "Icu_ActivationType", "eActivationEdge", "FC7xxx"]
- `anchor`: "Image block near 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-002"
- `caption`: "Image block near 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `bbox`: `[112.25, 638.34, 557.09, 749.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "Icu_HW_ChannelInit", "Icu_HwType", "u32ChannelOfHw", "Icu_ActivationType", "eActivationEdge", "FC7xxx"]
- `anchor`: "Image block near 2.8.1.4 void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 182.4, 537.46, 462.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "u32ChannelOfHw", "eHwType", "void", "Icu_HwType", "eActivationEdge", "Icu_HW_SetSleepMode", "Icu_HW_SetNormalMode"]
- `anchor`: "Image block near 2.8.1.5 void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `bbox`: `[112.25, 37.4, 537.27, 281.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "eActivationEdge", "channel", "void", "Icu_HW_SetActivationCondition", "Icu_HwType"]
- `anchor`: "Image block near 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `bbox`: `[112.25, 496.0, 537.26, 681.48]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "eActivationEdge", "channel", "void", "Icu_HW_SetActivationCondition", "Icu_HwType"]
- `anchor`: "Image block near 2.8.1.7 void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 112.15, 551.59, 405.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu_InputStateType", "Icu_HW_GetInputState", "Icu_HwType", "eHwType", "u32ChannelOfHw", "FC7xxx", "returns"]
- `anchor`: "Image block near 2.8.1.8 Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 2.8.1.9 void"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.9 void"
- `bbox`: `[112.25, 37.4, 537.73, 505.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.9 void; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_StartTimestamp", "Icu_HwType", "Icu_ActivationType", "eActivationEdge", "FC7xxx"]
- `anchor`: "Image block near 2.8.1.9 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 37.39, 551.44, 154.79]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "pEdgeNum", "void", "Icu_HW_StopTimeStamp"]
- `anchor`: "Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 335.17, 553.52, 407.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "pEdgeNum", "void", "Icu_HW_StopTimeStamp"]
- `anchor`: "Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-003"
- `caption`: "Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 604.54, 555.75, 717.44]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "pEdgeNum", "void", "Icu_HW_StopTimeStamp"]
- `anchor`: "Image block near 2.8.1.10 void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 164.46, 554.18, 224.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "void", "edge", "numbers"]
- `anchor`: "Image block near 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-002"
- `caption`: "Image block near 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 421.73, 537.47, 732.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "channel", "Icu_HwType", "void", "edge", "numbers"]
- `anchor`: "Image block near 2.8.1.12 void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 164.96, 537.52, 454.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "eActivationEdge", "channel", "Icu_HW_DisableEdgeCount"]
- `anchor`: "Image block near 2.8.1.14 void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 37.4, 537.49, 366.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "Icu_HW_DisableEdgeDetection", "Icu_HwType", "FC7xxx", "channel", "eActivationEdge"]
- `anchor`: "Image block near 2.8.1.16 void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-001"
- `caption`: "Image block near 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 37.4, 537.57, 321.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "channel", "Icu_HW_StartSignalMeasurement", "Icu_HW_StopSignalMeasurement"]
- `anchor`: "Image block near 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-002"
- `caption`: "Image block near 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `bbox`: `[112.25, 484.44, 554.27, 599.79]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "eHwType", "u32ChannelOfHw", "void", "Icu_HwType", "channel", "Icu_HW_StartSignalMeasurement", "Icu_HW_StopSignalMeasurement"]
- `anchor`: "Image block near 2.8.1.17 void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `bbox`: `[112.25, 37.4, 558.9, 107.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-002"
- `caption`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `bbox`: `[112.25, 287.07, 537.97, 392.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-003"
- `caption`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `bbox`: `[112.25, 589.39, 553.85, 613.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-004"
- `caption`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `bbox`: `[112.3, 759.45, 365.05, 786.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "eHwType", "channel", "u32ChannelOfHw", "Icu_HwType", "Diagram", "boolean"]
- `anchor`: "Image block near 2.8.1.19 boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-001"
- `caption`: "Image block near 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `bbox`: `[112.25, 233.71, 559.25, 357.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel", "void", "Icu_HwChannelType", "eInputLevel"]
- `anchor`: "Image block near 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-002"
- `caption`: "Image block near 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Icu_Hw.h / 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `bbox`: `[112.3, 538.59, 362.05, 566.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Icu", "Ftu", "tHwChannel", "void", "Icu_HwChannelType", "eInputLevel"]
- `anchor`: "Image block near 2.8.1.22 void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-001"
- `caption`: "Image block near 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `bbox`: `[112.25, 37.4, 537.4, 494.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "const", "Icu_Ftu_ChannelInit", "Icu_FtuInstanceType", "eFtuInstance", "Icu_FtuInputCaptureType", "eActivationEdge"]
- `anchor`: "Image block near 2.8.2.2 void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-001"
- `caption`: "Image block near 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `bbox`: `[112.25, 37.39, 546.24, 165.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance ); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "eFtuInstance", "const", "Icu_FtuInstanceType", "void", "Icu_Ftu_DeInit", "Icu_Ftu_SetSleepMode"]
- `anchor`: "Image block near 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-002"
- `caption`: "Image block near 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `bbox`: `[112.25, 346.22, 494.78, 638.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance ); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "eFtuInstance", "const", "Icu_FtuInstanceType", "void", "Icu_Ftu_DeInit", "Icu_Ftu_SetSleepMode"]
- `anchor`: "Image block near 2.8.2.3 void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-001"
- `caption`: "Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `bbox`: `[112.25, 37.4, 423.5, 76.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel", "eActivationEdge", "channel", "Icu_FtuInstanceType"]
- `anchor`: "Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-002"
- `caption`: "Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `bbox`: `[112.25, 273.21, 559.25, 395.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel", "eActivationEdge", "channel", "Icu_FtuInstanceType"]
- `anchor`: "Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-003"
- `caption`: "Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `bbox`: `[112.25, 609.92, 559.25, 725.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "u8Channel", "eActivationEdge", "channel", "Icu_FtuInstanceType"]
- `anchor`: "Image block near 2.8.2.5 void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-001"
- `caption`: "Image block near 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `bbox`: `[112.25, 164.96, 432.08, 272.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel ); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType", "u8Channel", "channel", "eActivationEdge"]
- `anchor`: "Image block near 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-002"
- `caption`: "Image block near 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `bbox`: `[112.25, 469.68, 559.25, 599.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel ); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "const", "eFtuInstance", "Icu_FtuInstanceType", "u8Channel", "channel", "eActivationEdge"]
- `anchor`: "Image block near 2.8.2.7 boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-001"
- `caption`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `bbox`: `[112.25, 54.83, 432.15, 127.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-002"
- `caption`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `bbox`: `[112.3, 308.31, 442.3, 336.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-003"
- `caption`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `bbox`: `[112.25, 482.32, 559.25, 506.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-004"
- `caption`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `bbox`: `[112.25, 669.76, 559.25, 693.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance); use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Ftu", "eFtuInstance", "const", "Icu_FtuInstanceType", "u8Channel", "channel"]
- `anchor`: "Image block near 2.8.2.10 Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0052-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0052-001"
- `caption`: "Image block near 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Icu_Ftu.h / 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `bbox`: `[115.45, 622.18, 429.63, 681.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "Port", "Ftu", "ePortInstance", "const", "void", "Icu_PortInstanceType"]
- `anchor`: "Image block near 2.8.2.13 void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-001"
- `caption`: "Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `bbox`: `[112.25, 329.11, 447.63, 391.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType"]
- `anchor`: "Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-002"
- `caption`: "Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `bbox`: `[112.25, 605.32, 449.05, 662.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType"]
- `anchor`: "Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-003"
- `caption`: "Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `bbox`: `[112.75, 123.08, 407.7, 143.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "const", "ePortInstance", "u8Channel", "Icu_PortInstanceType", "void", "Icu_PortIntConfigType"]
- `anchor`: "Image block near 2.8.3.4 void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0054-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0054-001"
- `caption`: "Image block near 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `bbox`: `[112.25, 106.15, 452.25, 207.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance", "Icu_PortInstanceType", "u8Channel", "boolean"]
- `anchor`: "Image block near 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0054-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0054-002"
- `caption`: "Image block near 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Icu_Port.h / 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `bbox`: `[112.45, 370.54, 428.2, 409.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Port", "const", "ePortInstance", "Icu_PortInstanceType", "u8Channel", "boolean"]
- `anchor`: "Image block near 2.8.3.7 boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-001"
- `caption`: "Image block near 2.8.4.2 void"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void"
- `bbox`: `[112.25, 37.4, 409.73, 330.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.2 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "Icu_Aontimer_SetActivationCondition", "Icu_AontimerPulsePolarityType", "Icu_Aontimer_GetInputState"]
- `anchor`: "Image block near 2.8.4.2 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-002"
- `caption`: "Image block near 2.8.4.2 void"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.2 void"
- `bbox`: `[112.25, 509.72, 423.73, 539.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.2 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "Icu_Aontimer_SetActivationCondition", "Icu_AontimerPulsePolarityType", "Icu_Aontimer_GetInputState"]
- `anchor`: "Image block near 2.8.4.2 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-001"
- `caption`: "Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `[112.25, 37.4, 445.73, 139.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance); use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit"]
- `anchor`: "Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-002"
- `caption`: "Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `[112.25, 284.65, 410.65, 400.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance); use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit"]
- `anchor`: "Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-003"
- `caption`: "Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `[112.25, 545.55, 481.25, 633.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance); use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "Aontimer", "eInstance", "Icu_AontimerInstanceType", "const", "void", "Icu_Aontimer_DeInit"]
- `anchor`: "Image block near 2.8.4.4 void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-001"
- `caption`: "Image block near 2.8.4.7 void"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `bbox`: `[112.25, 294.32, 493.92, 452.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.7 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType", "void", "Icu_Aontimer_EnableEdgeCount", "Icu_AontimerPulsePolarityType"]
- `anchor`: "Image block near 2.8.4.7 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-002"
- `caption`: "Image block near 2.8.4.7 void"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `bbox`: `[112.25, 615.82, 444.5, 654.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.7 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType", "void", "Icu_Aontimer_EnableEdgeCount", "Icu_AontimerPulsePolarityType"]
- `anchor`: "Image block near 2.8.4.7 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-003"
- `caption`: "Image block near 2.8.4.7 void"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.7 void"
- `bbox`: `[112.45, 37.7, 498.7, 114.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.7 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "eInstance", "const", "Icu_AontimerInstanceType", "void", "Icu_Aontimer_EnableEdgeCount", "Icu_AontimerPulsePolarityType"]
- `anchor`: "Image block near 2.8.4.7 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-001"
- `caption`: "Image block near 2.8.4.9 void"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void"
- `bbox`: `[112.25, 123.08, 485.8, 316.28]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.9 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "void", "Icu_AontimerPulsePolarityType", "ePolarity"]
- `anchor`: "Image block near 2.8.4.9 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-002"
- `caption`: "Image block near 2.8.4.9 void"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.9 void"
- `bbox`: `[112.25, 479.23, 444.5, 566.98]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.9 void; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "const", "Icu_AontimerInstanceType", "eInstance", "void", "Icu_AontimerPulsePolarityType", "ePolarity"]
- `anchor`: "Image block near 2.8.4.9 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-001"
- `caption`: "Image block near 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `[112.25, 37.4, 483.73, 157.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance); use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "Cmp", "eInstance", "void", "Icu_Aontimer_SetSleepMode", "const", "Icu_AontimerInstanceType"]
- `anchor`: "Image block near 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-002"
- `caption`: "Image block near 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Icu_Aontimer.h / 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `bbox`: `[112.25, 320.84, 493.26, 397.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance); use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "Cmp", "eInstance", "void", "Icu_Aontimer_SetSleepMode", "const", "Icu_AontimerInstanceType"]
- `anchor`: "Image block near 2.8.4.12 void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-001"
- `caption`: "Image block near 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `[112.25, 37.4, 341.0, 641.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "Icu_Cmp_DeInit", "Icu_CmpInstanceType", "eCmpInstance", "FC7xxx", "void", "Icu_HW_ModulesInit"]
- `anchor`: "Image block near 2.8.5.2 void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-001"
- `caption`: "Image block near 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `bbox`: `[112.25, 37.4, 367.76, 414.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_Cmp_GetInputState", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "FC7xxx"]
- `anchor`: "Image block near 2.8.5.3 boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-001"
- `caption`: "Image block near 2.8.5.4 void"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void"
- `bbox`: `[112.25, 37.4, 460.25, 253.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.4 void; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "ePolarity", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "void"]
- `anchor`: "Image block near 2.8.5.4 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-002"
- `caption`: "Image block near 2.8.5.4 void"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.4 void"
- `bbox`: `[112.25, 467.15, 411.5, 544.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.4 void; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "ePolarity", "Icu_CmpInstanceType", "ICU_CmpOutPolarityType", "void"]
- `anchor`: "Image block near 2.8.5.4 void"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0063-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0063-001"
- `caption`: "Image block near 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `[112.25, 37.4, 427.89, 175.62]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "void", "const", "Icu_CmpInstanceType", "ePolarity", "Icu_ChannelType"]
- `anchor`: "Image block near 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0063-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0063-002"
- `caption`: "Image block near 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `[112.25, 338.34, 411.5, 450.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "void", "const", "Icu_CmpInstanceType", "ePolarity", "Icu_ChannelType"]
- `anchor`: "Image block near 2.8.5.6 void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-001"
- `caption`: "Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `[112.25, 37.39, 424.25, 184.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType", "eHwType", "u32ChannelOfHw", "Icu_HW_SetNormalMode"]
- `anchor`: "Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-002"
- `caption`: "Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `[112.25, 364.27, 420.5, 512.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType", "eHwType", "u32ChannelOfHw", "Icu_HW_SetNormalMode"]
- `anchor`: "Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-003"
- `caption`: "Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `bbox`: `[112.25, 675.22, 388.25, 696.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance); use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "Icu_CmpInstanceType", "Icu_HwType", "eHwType", "u32ChannelOfHw", "Icu_HW_SetNormalMode"]
- `anchor`: "Image block near 2.8.5.8 void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0065-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0065-001"
- `caption`: "Image block near 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `bbox`: `[112.25, 146.02, 433.25, 294.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType", "void", "Icu_Cmp_EnableEdgeCount", "ICU_CmpOutPolarityType"]
- `anchor`: "Image block near 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0065-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0065-002"
- `caption`: "Image block near 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Icu_Cmp.h / 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `bbox`: `[112.3, 474.4, 434.8, 618.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "eCmpInstance", "const", "Icu_CmpInstanceType", "void", "Icu_Cmp_EnableEdgeCount", "ICU_CmpOutPolarityType"]
- `anchor`: "Image block near 2.8.5.10 void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0066-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0066-001"
- `caption`: "Image block near 2.9.2 De-initialization"
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `bbox`: `[77.97, 128.65, 531.42, 313.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.2 De-initialization; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "All", "disabled", "FC7xxx", "ICU_MODE_NORMAL", "configured", "according", "referenced"]
- `anchor`: "Image block near 2.9.2 De-initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0066-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0066-002"
- `caption`: "Image block near 2.9.2 De-initialization"
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `bbox`: `[77.97, 453.45, 531.45, 635.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.2 De-initialization; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "All", "disabled", "FC7xxx", "ICU_MODE_NORMAL", "configured", "according", "referenced"]
- `anchor`: "Image block near 2.9.2 De-initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0067-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0067-001"
- `caption`: "Image block near 2.9.3.1 Enabled Notifications in SLEEP mode"
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.1 Enabled Notifications in SLEEP mode"
- `bbox`: `[36.0, 79.59, 546.7, 779.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.1 Enabled Notifications in SLEEP mode; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Setting", "Mode", "Enabled", "Notifications", "mode"]
- `anchor`: "Image block near 2.9.3.1 Enabled Notifications in SLEEP mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0068-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0068-001"
- `caption`: "Image block near 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `bbox`: `[36.0, 53.83, 559.3, 689.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Disabled", "Reporting", "Sources", "Mode"]
- `anchor`: "Image block near 2.9.3.2 Disabled Reporting of Wakeup Sources in SLEEP Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0069-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0069-001"
- `caption`: "Image block near 2.9.3.3 Disabled Edge Notification in SLEEP Mode"
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.3 Disabled Edge Notification in SLEEP Mode"
- `bbox`: `[36.0, 53.83, 547.05, 788.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.3 Disabled Edge Notification in SLEEP Mode; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Disabled", "Edge", "Notification", "Mode"]
- `anchor`: "Image block near 2.9.3.3 Disabled Edge Notification in SLEEP Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0070-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0070-001"
- `caption`: "Image block near 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode"
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Setting Mode / 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode"
- `bbox`: `[36.0, 53.83, 559.3, 774.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "SLEEP", "Enabled", "Reporting", "Notifications", "Mode"]
- `anchor`: "Image block near 2.9.3.4 Un-Enabled Reporting of Notifications in SLEEP Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0071-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0071-001"
- `caption`: "Image block near 2.9.4 Disabling of Wakeup-Capabilities"
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Disabling of Wakeup-Capabilities"
- `bbox`: `[36.0, 56.66, 559.3, 583.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.4 Disabling of Wakeup-Capabilities; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Disabling", "Capabilities"]
- `anchor`: "Image block near 2.9.4 Disabling of Wakeup-Capabilities"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0072-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0072-001"
- `caption`: "Image block near 2.9.5 Enabling of Wakeup-Capabilities"
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Enabling of Wakeup-Capabilities"
- `bbox`: `[36.0, 56.66, 559.3, 756.26]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.5 Enabling of Wakeup-Capabilities; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Enabling", "Capabilities"]
- `anchor`: "Image block near 2.9.5 Enabling of Wakeup-Capabilities"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-001"
- `caption`: "Image block near 2.9.6 Setting up the Activation Condition for a Channel"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.6 Setting up the Activation Condition for a Channel"
- `bbox`: `[36.0, 56.66, 559.3, 593.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.6 Setting up the Activation Condition for a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Setting", "Activation", "Condition", "Channel"]
- `anchor`: "Image block near 2.9.6 Setting up the Activation Condition for a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-001"
- `caption`: "Image block near 2.9.7 Disabling of the Notification for a Channel"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.7 Disabling of the Notification for a Channel"
- `bbox`: `[36.0, 56.66, 559.3, 567.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.7 Disabling of the Notification for a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Disabling", "Notification", "Channel"]
- `anchor`: "Image block near 2.9.7 Disabling of the Notification for a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0075-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0075-001"
- `caption`: "Image block near 2.9.8 Enabling of the Edge-Notification for a Channel"
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.8 Enabling of the Edge-Notification for a Channel"
- `bbox`: `[36.0, 56.66, 559.3, 683.61]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.8 Enabling of the Edge-Notification for a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Enabling", "Edge", "Notification", "Channel"]
- `anchor`: "Image block near 2.9.8 Enabling of the Edge-Notification for a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0076-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0076-001"
- `caption`: "Image block near 2.9.9 Re-enabling of the Notification for a Channel"
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.9 Re-enabling of the Notification for a Channel"
- `bbox`: `[36.0, 56.66, 559.23, 785.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.9 Re-enabling of the Notification for a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "enabling", "Notification", "Channel"]
- `anchor`: "Image block near 2.9.9 Re-enabling of the Notification for a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-001"
- `caption`: "Image block near 2.9.10 Polling of the Channel Status"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.10 Polling of the Channel Status"
- `bbox`: `[36.0, 56.66, 559.3, 483.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.10 Polling of the Channel Status; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Polling", "Channel", "Status"]
- `anchor`: "Image block near 2.9.10 Polling of the Channel Status"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0078-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0078-001"
- `caption`: "Image block near 2.9.11 Overview of the Timestamping Functionality of the ICU Driver"
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.11 Overview of the Timestamping Functionality of the ICU Driver"
- `bbox`: `[36.0, 56.66, 559.3, 573.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.11 Overview of the Timestamping Functionality of the ICU Driver; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Overview", "Timestamping", "Functionality"]
- `anchor`: "Image block near 2.9.11 Overview of the Timestamping Functionality of the ICU Driver"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0079-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0079-001"
- `caption`: "Image block near 2.9.12 Inquire the Number of Counted Edges"
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.12 Inquire the Number of Counted Edges"
- `bbox`: `[36.0, 56.66, 559.3, 686.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.12 Inquire the Number of Counted Edges; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Inquire", "Number", "Counted", "Edges"]
- `anchor`: "Image block near 2.9.12 Inquire the Number of Counted Edges"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0080-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0080-001"
- `caption`: "Image block near 2.9.13 Inquire the Elapsed Level-Time of a Channel"
- `physical_page`: `80`
- `printed_page`: `80`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.13 Inquire the Elapsed Level-Time of a Channel"
- `bbox`: `[36.0, 56.66, 559.3, 519.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.13 Inquire the Elapsed Level-Time of a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Inquire", "Elapsed", "Level", "Time", "Channel"]
- `anchor`: "Image block near 2.9.13 Inquire the Elapsed Level-Time of a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0081-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0081-001"
- `caption`: "Image block near 2.9.14 Inquire the Elapsed Period Time of a Channel"
- `physical_page`: `81`
- `printed_page`: `81`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.14 Inquire the Elapsed Period Time of a Channel"
- `bbox`: `[36.0, 56.66, 559.3, 519.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.14 Inquire the Elapsed Period Time of a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Icu_GetDutyCycleValues", "Inquire", "Elapsed", "Time", "Channel", "behavior"]
- `anchor`: "Image block near 2.9.14 Inquire the Elapsed Period Time of a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0082-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0082-001"
- `caption`: "Image block near 2.9.15 Inquire the Elapsed High Time of a Channel"
- `physical_page`: `82`
- `printed_page`: `82`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.15 Inquire the Elapsed High Time of a Channel"
- `bbox`: `[36.0, 36.9, 559.3, 584.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.15 Inquire the Elapsed High Time of a Channel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx"]
- `anchor`: "Image block near 2.9.15 Inquire the Elapsed High Time of a Channel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0083-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0083-001"
- `caption`: "Image block near 2.9.16 Measure the Values Needed for Calculation of Duty Cycles"
- `physical_page`: `83`
- `printed_page`: `83`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.16 Measure the Values Needed for Calculation of Duty Cycles"
- `bbox`: `[36.0, 56.66, 559.3, 657.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.16 Measure the Values Needed for Calculation of Duty Cycles; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Measure", "Values", "Needed", "Calculation", "Duty", "Cycles"]
- `anchor`: "Image block near 2.9.16 Measure the Values Needed for Calculation of Duty Cycles"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0084-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0084-001"
- `caption`: "Image block near 2.9.17 Cooperative Usage of Notification and Polling Mechanism"
- `physical_page`: `84`
- `printed_page`: `84`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.17 Cooperative Usage of Notification and Polling Mechanism"
- `bbox`: `[36.0, 56.66, 559.3, 713.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.17 Cooperative Usage of Notification and Polling Mechanism; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Cooperative", "Usage", "Notification", "Polling", "Mechanism"]
- `anchor`: "Image block near 2.9.17 Cooperative Usage of Notification and Polling Mechanism"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0085-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0085-001"
- `caption`: "Image block near 3.1 Container Inclusion Relation"
- `physical_page`: `85`
- `printed_page`: `85`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `[36.0, 145.7, 558.95, 719.8]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1 Container Inclusion Relation; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown"]
- `anchor`: "Image block near 3.1 Container Inclusion Relation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0086-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0086-001"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `86`
- `printed_page`: `86`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[36.0, 36.89, 530.1, 467.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "IcuConfigSet", "FC7xxx", "VariantPreCompile", "Variable", "Screenshot"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0086-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0086-002"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `86`
- `printed_page`: `86`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[112.25, 555.23, 432.15, 575.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "IcuConfigSet", "FC7xxx", "VariantPreCompile", "Variable", "Screenshot"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0087-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0087-001"
- `caption`: "Image block near 3.2.2.1 IcuMaxChannel"
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `bbox`: `[112.25, 37.39, 423.81, 85.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 IcuMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1 IcuMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0087-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0087-002"
- `caption`: "Image block near 3.2.2.1 IcuMaxChannel"
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `bbox`: `[112.25, 196.37, 453.15, 217.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 IcuMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1 IcuMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0087-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0087-003"
- `caption`: "Image block near 3.2.2.1 IcuMaxChannel"
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `bbox`: `[112.25, 365.5, 553.73, 472.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 IcuMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1 IcuMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0087-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0087-004"
- `caption`: "Image block near 3.2.2.1 IcuMaxChannel"
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `bbox`: `[112.25, 600.57, 367.27, 640.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 IcuMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1 IcuMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0087-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0087-005"
- `caption`: "Image block near 3.2.2.1 IcuMaxChannel"
- `physical_page`: `87`
- `printed_page`: `87`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 IcuConfigSet / 3.2.2.1 IcuMaxChannel"
- `bbox`: `[112.25, 768.83, 452.02, 787.08]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 IcuMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuChannel", "Screenshot", "IcuMaxChannel", "Properties", "Property", "IcuChannelId", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1 IcuMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0088-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0088-001"
- `caption`: "Image block near 3.2.3.3 IcuHwModule"
- `physical_page`: `88`
- `printed_page`: `88`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `bbox`: `[112.25, 199.84, 451.73, 218.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.3 IcuHwModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "Image block near 3.2.3.3 IcuHwModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0088-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0088-002"
- `caption`: "Image block near 3.2.3.3 IcuHwModule"
- `physical_page`: `88`
- `printed_page`: `88`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `bbox`: `[112.25, 397.85, 452.0, 414.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.3 IcuHwModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "Image block near 3.2.3.3 IcuHwModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0088-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0088-003"
- `caption`: "Image block near 3.2.3.3 IcuHwModule"
- `physical_page`: `88`
- `printed_page`: `88`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `bbox`: `[112.25, 577.55, 452.09, 595.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.3 IcuHwModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "Image block near 3.2.3.3 IcuHwModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0088-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0088-004"
- `caption`: "Image block near 3.2.3.3 IcuHwModule"
- `physical_page`: `88`
- `printed_page`: `88`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.3 IcuHwModule"
- `bbox`: `[112.25, 757.94, 451.82, 777.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.3 IcuHwModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "SymbolicNameValue", "INTEGER", "channel", "Properties", "Property"]
- `anchor`: "Image block near 3.2.3.3 IcuHwModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0089-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0089-001"
- `caption`: "Image block near 3.2.3.7 IcuOverflowNotification"
- `physical_page`: `89`
- `printed_page`: `89`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `bbox`: `[112.25, 216.77, 452.5, 238.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.7 IcuOverflowNotification; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.3.7 IcuOverflowNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0089-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0089-002"
- `caption`: "Image block near 3.2.3.7 IcuOverflowNotification"
- `physical_page`: `89`
- `printed_page`: `89`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `bbox`: `[112.25, 563.17, 416.52, 606.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.7 IcuOverflowNotification; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.3.7 IcuOverflowNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0089-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0089-003"
- `caption`: "Image block near 3.2.3.7 IcuOverflowNotification"
- `physical_page`: `89`
- `printed_page`: `89`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.7 IcuOverflowNotification"
- `bbox`: `[112.25, 716.75, 462.5, 736.25]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.7 IcuOverflowNotification; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Variable", "Properties", "Property", "SymbolicNameValue", "IcuSignalEdgeDetection", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.3.7 IcuOverflowNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0090-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0090-001"
- `caption`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `physical_page`: `90`
- `printed_page`: `90`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `bbox`: `[112.25, 181.9, 423.98, 225.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.11 IcuSignalMeasurement; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0090-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0090-002"
- `caption`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `physical_page`: `90`
- `printed_page`: `90`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `bbox`: `[112.25, 336.33, 497.0, 358.08]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.11 IcuSignalMeasurement; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0090-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0090-003"
- `caption`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `physical_page`: `90`
- `printed_page`: `90`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `bbox`: `[112.25, 520.77, 423.92, 561.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.11 IcuSignalMeasurement; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0090-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0090-004"
- `caption`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `physical_page`: `90`
- `printed_page`: `90`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.11 IcuSignalMeasurement"
- `bbox`: `[112.25, 672.15, 508.35, 693.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.11 IcuSignalMeasurement; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuSignalMeasurement", "AUTOSAR_ECUC", "SymbolicNameValue", "case", "mode", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.11 IcuSignalMeasurement"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0091-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0091-001"
- `caption`: "Image block near 3.2.3.15 IcuTimestampNotification"
- `physical_page`: `91`
- `printed_page`: `91`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `bbox`: `[112.25, 112.15, 536.89, 132.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.15 IcuTimestampNotification; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "Image block near 3.2.3.15 IcuTimestampNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0091-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0091-002"
- `caption`: "Image block near 3.2.3.15 IcuTimestampNotification"
- `physical_page`: `91`
- `printed_page`: `91`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `bbox`: `[112.15, 494.67, 550.02, 516.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.15 IcuTimestampNotification; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "Image block near 3.2.3.15 IcuTimestampNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0091-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0091-003"
- `caption`: "Image block near 3.2.3.15 IcuTimestampNotification"
- `physical_page`: `91`
- `printed_page`: `91`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.15 IcuTimestampNotification"
- `bbox`: `[112.25, 661.17, 445.25, 706.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.15 IcuTimestampNotification; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Variable", "IcuTimestampNotification", "Screenshot", "Properties", "Property", "NAME"]
- `anchor`: "Image block near 3.2.3.15 IcuTimestampNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0092-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0092-001"
- `caption`: "Image block near 3.2.3.19 IcuChannelWakeupInfo"
- `physical_page`: `92`
- `printed_page`: `92`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo"
- `bbox`: `[112.25, 106.15, 451.97, 125.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.19 IcuChannelWakeupInfo; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.3.19 IcuChannelWakeupInfo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0092-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0092-002"
- `caption`: "Image block near 3.2.3.19 IcuChannelWakeupInfo"
- `physical_page`: `92`
- `printed_page`: `92`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo"
- `bbox`: `[112.25, 304.48, 552.37, 322.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.19 IcuChannelWakeupInfo; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.3.19 IcuChannelWakeupInfo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0092-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0092-003"
- `caption`: "Image block near 3.2.3.19 IcuChannelWakeupInfo"
- `physical_page`: `92`
- `printed_page`: `92`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 IcuChannel / 3.2.3.19 IcuChannelWakeupInfo"
- `bbox`: `[112.25, 487.14, 559.19, 656.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.19 IcuChannelWakeupInfo; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "Variable", "EcuM", "IcuChannelWakeupInfo", "ECU", "REFERENCE", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.3.19 IcuChannelWakeupInfo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0093-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0093-001"
- `caption`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `physical_page`: `93`
- `printed_page`: `93`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `bbox`: `[112.25, 37.39, 536.95, 54.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 IcuFtuClockSource; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0093-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0093-002"
- `caption`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `physical_page`: `93`
- `printed_page`: `93`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `bbox`: `[112.25, 234.37, 559.3, 251.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 IcuFtuClockSource; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0093-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0093-003"
- `caption`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `physical_page`: `93`
- `printed_page`: `93`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `bbox`: `[112.25, 431.59, 550.99, 448.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 IcuFtuClockSource; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0093-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0093-004"
- `caption`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `physical_page`: `93`
- `printed_page`: `93`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.2 IcuFtuClockSource"
- `bbox`: `[112.25, 662.59, 552.52, 679.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 IcuFtuClockSource; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "ICU", "Variable", "SymbolicNameValue", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.2 IcuFtuClockSource"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0094-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0094-001"
- `caption`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `physical_page`: `94`
- `printed_page`: `94`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `bbox`: `[112.25, 89.21, 555.89, 107.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 IcuFtuFilterPrescaler; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0094-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0094-002"
- `caption`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `physical_page`: `94`
- `printed_page`: `94`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `bbox`: `[112.25, 356.28, 559.3, 372.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 IcuFtuFilterPrescaler; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0094-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0094-003"
- `caption`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `physical_page`: `94`
- `printed_page`: `94`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `bbox`: `[112.25, 534.72, 559.3, 551.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 IcuFtuFilterPrescaler; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0094-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0094-004"
- `caption`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `physical_page`: `94`
- `printed_page`: `94`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.5 IcuFtuFilterPrescaler"
- `bbox`: `[112.25, 715.6, 559.3, 731.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 IcuFtuFilterPrescaler; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "filter", "SymbolicNameValue", "INTEGER", "IcuFtuFilterPrescaler", "Selects", "channel"]
- `anchor`: "Image block near 3.2.4.5 IcuFtuFilterPrescaler"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0095-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0095-001"
- `caption`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `physical_page`: `95`
- `printed_page`: `95`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `bbox`: `[112.25, 147.96, 556.43, 164.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 IcuFtuCh3Filter; use the source PDF page for exact visual details."
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0095-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0095-002"
- `caption`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `physical_page`: `95`
- `printed_page`: `95`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `bbox`: `[112.25, 327.54, 535.34, 344.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 IcuFtuCh3Filter; use the source PDF page for exact visual details."
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0095-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0095-003"
- `caption`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `physical_page`: `95`
- `printed_page`: `95`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `bbox`: `[112.15, 490.43, 534.17, 507.26]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 IcuFtuCh3Filter; use the source PDF page for exact visual details."
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0095-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0095-004"
- `caption`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `physical_page`: `95`
- `printed_page`: `95`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 IcuFtu / 3.2.4.9 IcuFtuCh3Filter"
- `bbox`: `[112.15, 652.29, 503.86, 671.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 IcuFtuCh3Filter; use the source PDF page for exact visual details."
- `keywords`: ["Icu", "ICU", "FTU", "Variable", "SymbolicNameValue", "IcuFtuCh3Filter", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.9 IcuFtuCh3Filter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0096-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0096-001"
- `caption`: "Image block near 3.2.5.1 IcuPortModule"
- `physical_page`: `96`
- `printed_page`: `96`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `bbox`: `[112.25, 92.03, 556.19, 178.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 IcuPortModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "Image block near 3.2.5.1 IcuPortModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0096-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0096-002"
- `caption`: "Image block near 3.2.5.1 IcuPortModule"
- `physical_page`: `96`
- `printed_page`: `96`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `bbox`: `[112.25, 306.45, 451.99, 328.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 IcuPortModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "Image block near 3.2.5.1 IcuPortModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0096-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0096-003"
- `caption`: "Image block near 3.2.5.1 IcuPortModule"
- `physical_page`: `96`
- `printed_page`: `96`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `bbox`: `[112.15, 491.09, 555.23, 508.29]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 IcuPortModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "Image block near 3.2.5.1 IcuPortModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0096-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0096-004"
- `caption`: "Image block near 3.2.5.1 IcuPortModule"
- `physical_page`: `96`
- `printed_page`: `96`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 IcuPort / 3.2.5.1 IcuPortModule"
- `bbox`: `[112.25, 673.35, 559.3, 761.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 IcuPortModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "Icu", "IcuPort", "Screenshot", "Properties", "Property", "IcuPortModule"]
- `anchor`: "Image block near 3.2.5.1 IcuPortModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0097-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0097-001"
- `caption`: "Image block near 3.2.6.1 IcuAontmrModule"
- `physical_page`: `97`
- `printed_page`: `97`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `bbox`: `[112.25, 147.52, 443.54, 164.86]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 IcuAontmrModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.6.1 IcuAontmrModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0097-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0097-002"
- `caption`: "Image block near 3.2.6.1 IcuAontmrModule"
- `physical_page`: `97`
- `printed_page`: `97`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `bbox`: `[112.25, 327.51, 452.24, 346.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 IcuAontmrModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.6.1 IcuAontmrModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0097-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0097-003"
- `caption`: "Image block near 3.2.6.1 IcuAontmrModule"
- `physical_page`: `97`
- `printed_page`: `97`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.1 IcuAontmrModule"
- `bbox`: `[112.25, 705.37, 475.75, 725.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 IcuAontmrModule; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "AONTIMER", "Variable", "ENUMERATION", "SymbolicNameValue", "IcuAontmrModule", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.6.1 IcuAontmrModule"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0098-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0098-001"
- `caption`: "Image block near 3.2.6.5 IcuAontmrPinSelect"
- `physical_page`: `98`
- `printed_page`: `98`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect"
- `bbox`: `[112.25, 350.78, 474.9, 370.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.5 IcuAontmrPinSelect; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Aontimer", "SymbolicNameValue", "IcuAontmrPinSelect", "IcuAontmrPartitionRef", "IcuCmp", "FC7xxx"]
- `anchor`: "Image block near 3.2.6.5 IcuAontmrPinSelect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0098-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0098-002"
- `caption`: "Image block near 3.2.6.5 IcuAontmrPinSelect"
- `physical_page`: `98`
- `printed_page`: `98`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 IcuAontmr / 3.2.6.5 IcuAontmrPinSelect"
- `bbox`: `[112.15, 549.96, 554.88, 568.29]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.5 IcuAontmrPinSelect; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "Aontimer", "SymbolicNameValue", "IcuAontmrPinSelect", "IcuAontmrPartitionRef", "IcuCmp", "FC7xxx"]
- `anchor`: "Image block near 3.2.6.5 IcuAontmrPinSelect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0099-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0099-001"
- `caption`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `physical_page`: `99`
- `printed_page`: `99`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `bbox`: `[112.25, 37.4, 509.85, 181.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.1 Icu Cmp Hardware Module; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0099-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0099-002"
- `caption`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `physical_page`: `99`
- `printed_page`: `99`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `bbox`: `[112.15, 292.02, 520.18, 312.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.1 Icu Cmp Hardware Module; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0099-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0099-003"
- `caption`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `physical_page`: `99`
- `printed_page`: `99`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `bbox`: `[112.15, 475.21, 548.33, 495.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.1 Icu Cmp Hardware Module; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0099-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0099-004"
- `caption`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `physical_page`: `99`
- `printed_page`: `99`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.1 Icu Cmp Hardware Module"
- `bbox`: `[112.15, 726.26, 551.3, 744.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.1 Icu Cmp Hardware Module; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Cmp", "Icu", "Variable", "ENUMERATION", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.1 Icu Cmp Hardware Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0100-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0100-001"
- `caption`: "Image block near 3.2.7.4 IcuCmpNegativeInputSrc"
- `physical_page`: `100`
- `printed_page`: `100`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `bbox`: `[112.15, 164.96, 554.18, 186.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.4 IcuCmpNegativeInputSrc; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc"]
- `anchor`: "Image block near 3.2.7.4 IcuCmpNegativeInputSrc"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0100-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0100-002"
- `caption`: "Image block near 3.2.7.4 IcuCmpNegativeInputSrc"
- `physical_page`: `100`
- `printed_page`: `100`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `bbox`: `[112.15, 348.9, 552.64, 369.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.4 IcuCmpNegativeInputSrc; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc"]
- `anchor`: "Image block near 3.2.7.4 IcuCmpNegativeInputSrc"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0100-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0100-003"
- `caption`: "Image block near 3.2.7.4 IcuCmpNegativeInputSrc"
- `physical_page`: `100`
- `printed_page`: `100`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.4 IcuCmpNegativeInputSrc"
- `bbox`: `[112.15, 600.6, 551.97, 620.28]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.4 IcuCmpNegativeInputSrc; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "SymbolicNameValue", "ICU_CMP_INSRCSEL_MUX", "Variable", "ENUMERATION", "Origin", "ICU_CMP_INSRCSEL_DAC", "IcuCmpNegativeInputSrc"]
- `anchor`: "Image block near 3.2.7.4 IcuCmpNegativeInputSrc"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0101-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0101-001"
- `caption`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `physical_page`: `101`
- `printed_page`: `101`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `bbox`: `[112.15, 89.21, 538.34, 109.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.7 IcuCmpFilterPeriod; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0101-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0101-002"
- `caption`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `physical_page`: `101`
- `printed_page`: `101`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `bbox`: `[112.15, 271.65, 498.08, 290.58]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.7 IcuCmpFilterPeriod; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0101-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0101-003"
- `caption`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `physical_page`: `101`
- `printed_page`: `101`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `bbox`: `[112.15, 470.28, 556.16, 492.47]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.7 IcuCmpFilterPeriod; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0101-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0101-004"
- `caption`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `physical_page`: `101`
- `printed_page`: `101`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.7 IcuCmpFilterPeriod"
- `bbox`: `[112.25, 671.91, 437.75, 692.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.7 IcuCmpFilterPeriod; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "CMP", "Variable", "SymbolicNameValue", "IcuCmpFilterPeriod", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.7 IcuCmpFilterPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0102-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0102-001"
- `caption`: "Image block near 3.2.7.11 IcuInvCmpOut"
- `physical_page`: `102`
- `printed_page`: `102`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut"
- `bbox`: `[112.25, 256.46, 432.5, 280.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.11 IcuInvCmpOut; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.11 IcuInvCmpOut"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0102-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0102-002"
- `caption`: "Image block near 3.2.7.11 IcuInvCmpOut"
- `physical_page`: `102`
- `printed_page`: `102`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut"
- `bbox`: `[112.25, 425.22, 419.0, 475.47]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.11 IcuInvCmpOut; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.11 IcuInvCmpOut"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0102-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0102-003"
- `caption`: "Image block near 3.2.7.11 IcuInvCmpOut"
- `physical_page`: `102`
- `printed_page`: `102`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.11 IcuInvCmpOut"
- `bbox`: `[112.25, 620.22, 417.5, 668.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.11 IcuInvCmpOut; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinConfig", "IcuInvCmpOut", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.11 IcuInvCmpOut"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0103-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0103-001"
- `caption`: "Image block near 3.2.7.15 IcuCmpOutPinEnable"
- `physical_page`: `103`
- `printed_page`: `103`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.15 IcuCmpOutPinEnable"
- `bbox`: `[112.25, 260.21, 452.0, 282.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.15 IcuCmpOutPinEnable; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.15 IcuCmpOutPinEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0103-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0103-002"
- `caption`: "Image block near 3.2.7.15 IcuCmpOutPinEnable"
- `physical_page`: `103`
- `printed_page`: `103`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.15 IcuCmpOutPinEnable"
- `bbox`: `[112.15, 444.9, 421.15, 494.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.15 IcuCmpOutPinEnable; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuCmpOutPinEnable", "CMPO", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.7.15 IcuCmpOutPinEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0104-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0104-001"
- `caption`: "Image block near 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `physical_page`: `104`
- `printed_page`: `104`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `bbox`: `[112.15, 89.21, 453.6, 109.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.19 IcuCmpOutWinUserDefLevel; use the source PDF page for exact visual details."
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot"]
- `anchor`: "Image block near 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0104-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0104-002"
- `caption`: "Image block near 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `physical_page`: `104`
- `printed_page`: `104`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `bbox`: `[112.15, 423.67, 331.15, 446.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.19 IcuCmpOutWinUserDefLevel; use the source PDF page for exact visual details."
- `keywords`: ["CMP", "ICU", "Icu", "Cmp", "Variable", "SymbolicNameValue", "IcuCmpOutWinUserDefLevel", "Screenshot"]
- `anchor`: "Image block near 3.2.7.19 IcuCmpOutWinUserDefLevel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0105-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0105-001"
- `caption`: "Image block near 3.2.7.23 IcuCmpPartitionRef"
- `physical_page`: `105`
- `printed_page`: `105`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 IcuCmp / 3.2.7.23 IcuCmpPartitionRef"
- `bbox`: `[112.15, 37.4, 553.48, 55.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.23 IcuCmpPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "REFERENCE", "ASPathDataOfSchema", "AUTOSAR", "EcucDefs", "EcuC", "EcucPartitionCollectio"]
- `anchor`: "Image block near 3.2.7.23 IcuCmpPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0106-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0106-001"
- `caption`: "Image block near 3.2.8.1 IcuDevErrorDetect"
- `physical_page`: `106`
- `printed_page`: `106`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.1 IcuDevErrorDetect"
- `bbox`: `[112.25, 92.03, 416.0, 138.53]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.8.1 IcuDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "SymbolicNameValue", "IcuGeneral"]
- `anchor`: "Image block near 3.2.8.1 IcuDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0107-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0107-001"
- `caption`: "Image block near 3.2.8.5 IcuFtuGtbSupport"
- `physical_page`: `107`
- `printed_page`: `107`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.5 IcuFtuGtbSupport"
- `bbox`: `[112.25, 531.54, 542.35, 551.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.8.5 IcuFtuGtbSupport; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin"]
- `anchor`: "Image block near 3.2.8.5 IcuFtuGtbSupport"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0107-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0107-002"
- `caption`: "Image block near 3.2.8.5 IcuFtuGtbSupport"
- `physical_page`: `107`
- `printed_page`: `107`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.5 IcuFtuGtbSupport"
- `bbox`: `[112.15, 713.49, 553.97, 730.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.8.5 IcuFtuGtbSupport; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "Icu", "Variable", "SymbolicNameValue", "ECUC", "BOOLEAN", "Origin"]
- `anchor`: "Image block near 3.2.8.5 IcuFtuGtbSupport"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0108-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0108-001"
- `caption`: "Image block near 3.2.8.9 IcuFtuGtbGroup"
- `physical_page`: `108`
- `printed_page`: `108`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.9 IcuFtuGtbGroup"
- `bbox`: `[112.15, 164.46, 558.9, 211.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.8.9 IcuFtuGtbGroup; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "IcuFtuGtbGroup", "Screenshot", "Properties", "Property", "IcuOptionalApis"]
- `anchor`: "Image block near 3.2.8.9 IcuFtuGtbGroup"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0108-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0108-002"
- `caption`: "Image block near 3.2.8.9 IcuFtuGtbGroup"
- `physical_page`: `108`
- `printed_page`: `108`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.8 IcuGeneral / 3.2.8.9 IcuFtuGtbGroup"
- `bbox`: `[112.25, 377.53, 395.22, 422.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.8.9 IcuFtuGtbGroup; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "IcuFtuGtbGroup", "Screenshot", "Properties", "Property", "IcuOptionalApis"]
- `anchor`: "Image block near 3.2.8.9 IcuFtuGtbGroup"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0111-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0111-001"
- `caption`: "Image block near 3.2.9.12 IcuWakeupFunctionalityApi"
- `physical_page`: `111`
- `printed_page`: `111`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.9 IcuOptionalApis / 3.2.9.12 IcuWakeupFunctionalityApi"
- `bbox`: `[112.25, 492.73, 411.95, 539.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.9.12 IcuWakeupFunctionalityApi; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "SymbolicNameValue", "Variable", "AUTOSAR_ECUC", "BOOLEAN", "Origin", "IcuWakeupFunctionalityApi", "Screenshot"]
- `anchor`: "Image block near 3.2.9.12 IcuWakeupFunctionalityApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0112-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0112-001"
- `caption`: "Image block near 3.2.10.2 IcuOverflowNotificationApi"
- `physical_page`: `112`
- `printed_page`: `112`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi"
- `bbox`: `[112.25, 274.82, 423.39, 323.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.10.2 IcuOverflowNotificationApi; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "Image block near 3.2.10.2 IcuOverflowNotificationApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0112-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0112-002"
- `caption`: "Image block near 3.2.10.2 IcuOverflowNotificationApi"
- `physical_page`: `112`
- `printed_page`: `112`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi"
- `bbox`: `[112.25, 435.59, 452.23, 451.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.10.2 IcuOverflowNotificationApi; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "Image block near 3.2.10.2 IcuOverflowNotificationApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0112-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0112-003"
- `caption`: "Image block near 3.2.10.2 IcuOverflowNotificationApi"
- `physical_page`: `112`
- `printed_page`: `112`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.10 IcuNonAUTOSAR / 3.2.10.2 IcuOverflowNotificationApi"
- `bbox`: `[112.25, 613.73, 486.5, 631.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.10.2 IcuOverflowNotificationApi; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "SymbolicNameValue", "IcuOverflowNotificationApi", "Screenshot", "Properties", "Property", "CommonPublishedInformation"]
- `anchor`: "Image block near 3.2.10.2 IcuOverflowNotificationApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0113-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0113-001"
- `caption`: "Image block near 3.2.11.4 SwMajorVersion"
- `physical_page`: `113`
- `printed_page`: `113`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion"
- `bbox`: `[112.25, 55.27, 486.5, 72.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.11.4 SwMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number"]
- `anchor`: "Image block near 3.2.11.4 SwMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0113-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0113-002"
- `caption`: "Image block near 3.2.11.4 SwMajorVersion"
- `physical_page`: `113`
- `printed_page`: `113`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion"
- `bbox`: `[112.25, 253.49, 452.83, 269.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.11.4 SwMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number"]
- `anchor`: "Image block near 3.2.11.4 SwMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0113-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0113-003"
- `caption`: "Image block near 3.2.11.4 SwMajorVersion"
- `physical_page`: `113`
- `printed_page`: `113`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.11 CommonPublishedInformation / 3.2.11.4 SwMajorVersion"
- `bbox`: `[112.25, 448.47, 478.06, 465.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.11.4 SwMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "version", "number"]
- `anchor`: "Image block near 3.2.11.4 SwMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0115-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0115-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `115`
- `printed_page`: `115`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[70.9, 286.03, 524.4, 622.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FTU", "channel", "FC7xxx", "ICU_MODE_SIGNAL_MEASUREMENT", "ICU_MODE_TIMESTAMP", "IcuFtu", "Only"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0116-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0116-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `116`
- `printed_page`: `116`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 36.89, 524.36, 273.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "FC7xxx", "IcuPort", "Add", "object", "tab", "Select"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0116-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0116-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `116`
- `printed_page`: `116`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 342.06, 524.36, 574.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "FC7xxx", "IcuPort", "Add", "object", "tab", "Select"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0116-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0116-003"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `116`
- `printed_page`: `116`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 649.62, 467.42, 781.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Port", "FC7xxx", "IcuPort", "Add", "object", "tab", "Select"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0117-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0117-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `117`
- `printed_page`: `117`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 59.83, 523.9, 226.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "FC7xxx", "IcuAontmr", "Add", "object", "tab", "Set"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0117-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0117-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `117`
- `printed_page`: `117`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 295.2, 524.4, 548.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["AONTIMER", "ICU", "FC7xxx", "IcuAontmr", "Add", "object", "tab", "Set"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0118-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0118-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `118`
- `printed_page`: `118`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 36.9, 467.54, 257.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "CMP", "Cmp", "FC7xxx", "MuxSelect", "IcuChannel", "Add", "object"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0118-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0118-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `118`
- `printed_page`: `118`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 327.11, 524.33, 513.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "CMP", "Cmp", "FC7xxx", "MuxSelect", "IcuChannel", "Add", "object"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0119-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0119-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `119`
- `printed_page`: `119`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 36.9, 524.4, 336.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Configure", "each", "option", "channel"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0119-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0119-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `119`
- `printed_page`: `119`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[70.9, 387.92, 524.4, 753.37]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Configure", "each", "option", "channel"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[177.4, 76.77, 417.53, 98.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[36.0, 104.72, 559.3, 160.07]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-003"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 228.89, 467.41, 248.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-004"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 254.39, 467.49, 330.07]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-005"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 398.5, 466.77, 418.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-006
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-006"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 424.1, 467.46, 494.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-007
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-007"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.58, 580.65, 467.97, 600.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0120-008
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0120-008"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `120`
- `printed_page`: `120`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 605.65, 467.13, 694.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "IcuMeasurementMode", "FC7xxx", "IcuWakeupCapability", "select", "EcuM", "set", "ICU_MODE_SIGNAL_EDGE_DETECT"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0121-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0121-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `121`
- `printed_page`: `121`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 36.9, 467.01, 115.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "FC7xxx", "AUTOSAR", "MultiCoreFeature", "MultiCoreSupport", "disable", "should"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0121-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0121-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `121`
- `printed_page`: `121`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[134.9, 167.92, 460.4, 260.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "FC7xxx", "AUTOSAR", "MultiCoreFeature", "MultiCoreSupport", "disable", "should"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0121-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0121-003"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `121`
- `printed_page`: `121`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[130.4, 328.98, 464.9, 402.48]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "FC7xxx", "AUTOSAR", "MultiCoreFeature", "MultiCoreSupport", "disable", "should"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0121-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0121-004"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `121`
- `printed_page`: `121`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[127.57, 454.36, 467.32, 634.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "Icu", "FC7xxx", "AUTOSAR", "MultiCoreFeature", "MultiCoreSupport", "disable", "should"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0122-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0122-001"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `122`
- `printed_page`: `122`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[79.63, 36.9, 532.87, 111.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Channel", "unit"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0122-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0122-002"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `122`
- `printed_page`: `122`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[79.63, 145.17, 533.11, 272.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Channel", "unit"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0122-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0122-003"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `122`
- `printed_page`: `122`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[79.63, 306.55, 533.01, 383.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Channel", "unit"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0122-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0122-004"
- `caption`: "Image block near 4.2 ICU Usage Common Steps"
- `physical_page`: `122`
- `printed_page`: `122`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 ICU Usage Common Steps"
- `bbox`: `[79.63, 417.82, 532.94, 478.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 ICU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["ICU", "FC7xxx", "Channel", "unit"]
- `anchor`: "Image block near 4.2 ICU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### REQ-SWS-ICU-00006
- `name`: "SWS_Icu_00006"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Icu_00006`."
- `anchors`:
  - `p6`: "Rejected Requirement 1 SWS_Icu_00006"
- `aliases`: []

### REQ-SWS-ICU-00246
- `name`: "SWS_Icu_00246"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Icu_00246`."
- `anchors`:
  - `p6`: "Rejected Requirement 2 SWS_Icu_00246"
- `aliases`: []

### REQ-SWS-ICU-00250
- `name`: "SWS_Icu_00250"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Icu_00250`."
- `anchors`:
  - `p6`: "Rejected Requirement 3 SWS_Icu_00250"
- `aliases`: []

### REQ-SWS-ICU-00252
- `name`: "SWS_Icu_00252"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Icu_00252`."
- `anchors`:
  - `p6`: "Rejected Requirement 4 SWS_Icu_00252"
- `aliases`: []

### API-ICU-CHANNELTYPE
- `name`: "Icu_ChannelType"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,17,18,24,25,26,27,28,29,30,31,63`
- `brief`: "api index entry for `Icu_ChannelType`."
- `anchors`:
  - `p12`: "#define ICU_MAX_CHANNEL ((Icu_ChannelType)XU)"
  - `p17`: "typedef uint32 Icu_ChannelType"
  - `p18`: "const Icu_ChannelType (*pIcuHwMap)[ICU_HW_CHANNEL_COUNT]"
  - `p24`: "void Icu_DisableWakeup ( Icu_ChannelType Channel )"
  - `p25`: "void Icu_SetActivationCondition ( Icu_ChannelType Channel, Icu_ActivationType Activation )"
- `aliases`: []

### API-ICU-STARTSIGNALMEASUREMENT
- `name`: "Icu_StartSignalMeasurement"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,10,13,30,44,45,46,110`
- `brief`: "api index entry for `Icu_StartSignalMeasurement`."
- `anchors`:
  - `p6`: "Icu_StartSignalMeasurement"
  - `p10`: "API service ID for Icu_StartSignalMeasurement function."
  - `p13`: "Adds or removes the services Icu_StartSignalMeasurement() and Icu_StopSignalMeasurement() from the code."
  - `p30`: "void Icu_StartSignalMeasurement ( Icu_ChannelType Channel )"
  - `p44`: "void Icu_StartSignalMeasurement()"
- `aliases`: []

### API-ICU-INIT
- `name`: "Icu_Init"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,8,9,15,21,26,34,36`
- `brief`: "api index entry for `Icu_Init`."
- `anchors`:
  - `p6`: "The function Icu_Init shall initialize all relevant registers of the configured hardware with the"
  - `p8`: "API Icu_Init service is called and when the ICU driver and the Hardware are already initialized."
  - `p9`: "API service ID for Icu_Init function."
  - `p15`: "Icu_GetInputState() or Icu_Init()."
  - `p21`: "void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `aliases`: []

### API-ICU-SETMODE
- `name`: "Icu_SetMode"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,9,12,23,36,37,110`
- `brief`: "api index entry for `Icu_SetMode`."
- `anchors`:
  - `p8`: "API service Icu_SetMode used with an invalid mode."
  - `p9`: "API service ID for Icu_SetMode function."
  - `p12`: "Adds or removes the service Icu_SetMode() from the code."
  - `p23`: "void Icu_SetMode ( Icu_ModeType Mode )"
  - `p36`: "void Icu_SetMode()"
- `aliases`: []

### API-ICU-ENABLEEDGEDETECTION
- `name`: "Icu_EnableEdgeDetection"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,10,14,28,43,63,111`
- `brief`: "api index entry for `Icu_EnableEdgeDetection`."
- `anchors`:
  - `p6`: "Icu_EnableEdgeDetection"
  - `p10`: "API service ID for Icu_EnableEdgeDetection function."
  - `p14`: "Adds or removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection()from the code."
  - `p28`: "void Icu_EnableEdgeDetection ( Icu_ChannelType Channel )"
  - `p43`: "void Icu_EnableEdgeDetection()"
- `aliases`: []

### API-ICU-GETINPUTSTATE
- `name`: "Icu_GetInputState"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,13,15,26,39,109`
- `brief`: "api index entry for `Icu_GetInputState`."
- `anchors`:
  - `p9`: "API service ID for Icu_GetInputState function."
  - `p13`: "Adds or removes the service Icu_GetInputState() from the code."
  - `p15`: "Icu_GetInputState() or Icu_Init()."
  - `p26`: "Icu_InputStateType Icu_GetInputState ( Icu_ChannelType Channel )"
  - `p39`: "Icu_InputStateType Icu_GetInputState()"
- `aliases`: []

### API-ICU-DEINIT
- `name`: "Icu_DeInit"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,12,23,34,35,108`
- `brief`: "api index entry for `Icu_DeInit`."
- `anchors`:
  - `p9`: "API service ID for Icu_DeInit function."
  - `p12`: "Adds or removes the service Icu_DeInit() from the code."
  - `p23`: "void Icu_DeInit ( void)"
  - `p34`: "void Icu_DeInit()"
  - `p35`: "void Icu_DeInit()"
- `aliases`: []

### API-ICU-GETEDGENUMBERS
- `name`: "Icu_GetEdgeNumbers"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,17,30,41,109`
- `brief`: "api index entry for `Icu_GetEdgeNumbers`."
- `anchors`:
  - `p10`: "API service ID for Icu_GetEdgeNumbers function."
  - `p13`: "Icu_ResetEdgeCount(), Icu_EnableEdgeCount(), Icu_DisableEdgeCount(),Icu_GetEdgeNumbers()."
  - `p17`: "Type, to abstract the return value of the service Icu_GetEdgeNumbers()."
  - `p30`: "Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
  - `p41`: "Icu_EdgeNumberType Icu_GetEdgeNumbers()"
- `aliases`: []

### API-ICU-ENABLEEDGECOUNT
- `name`: "Icu_EnableEdgeCount"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,10,13,28,42,109`
- `brief`: "api index entry for `Icu_EnableEdgeCount`."
- `anchors`:
  - `p6`: "Icu_EnableEdgeCount"
  - `p10`: "API service ID for Icu_EnableEdgeCount function."
  - `p13`: "Icu_ResetEdgeCount(), Icu_EnableEdgeCount(), Icu_DisableEdgeCount(),Icu_GetEdgeNumbers()."
  - `p28`: "void Icu_EnableEdgeCount ( Icu_ChannelType Channel )"
  - `p42`: "void Icu_EnableEdgeCount()"
- `aliases`: []

### API-ICU-STOPTIMESTAMP
- `name`: "Icu_StopTimestamp"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,10,13,27,40,110`
- `brief`: "api index entry for `Icu_StopTimestamp`."
- `anchors`:
  - `p8`: "API service Icu_StopTimestamp called on a channel which was not started or already stopped."
  - `p10`: "API service ID for Icu_StopTimestamp function."
  - `p13`: "Icu_StartTimestamp(), Icu_StopTimestamp(), Icu_GetTimestampIndex()."
  - `p27`: "void Icu_StopTimestamp ( Icu_ChannelType Channel )"
  - `p40`: "void Icu_StopTimestamp()"
- `aliases`: []

### API-ICU-GETDUTYCYCLEVALUES
- `name`: "Icu_GetDutyCycleValues"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,31,81,109`
- `brief`: "api index entry for `Icu_GetDutyCycleValues`."
- `anchors`:
  - `p10`: "API service ID for Icu_GetDutyCycleValues function."
  - `p13`: "Adds or removes the service Icu_GetDutyCycleValues() from the code."
  - `p31`: "void Icu_GetDutyCycleValues ( Icu_ChannelType Channel, Icu_DutyCycleType * DutyCycleValues )"
  - `p81`: "The shown behavior is also appropriate for the service Icu_GetDutyCycleValues()."
  - `p109`: "Adds / removes the service Icu_GetDutyCycleValues() from the code."
- `aliases`: []

### API-ICU-GETINPUTLEVEL
- `name`: "Icu_GetInputLevel"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,14,31,45,111`
- `brief`: "api index entry for `Icu_GetInputLevel`."
- `anchors`:
  - `p10`: "API service ID for Icu_GetInputLevel function."
  - `p14`: "Adds or removes the service Icu_GetInputLevel() from the code."
  - `p31`: "Icu_GetInputLevel (Icu_ChannelType Channel)"
  - `p45`: "Icu_GetInputLevel()"
  - `p111`: "Add / removes Icu_GetInputLevel API from the code"
- `aliases`: []

### API-ICU-HW-SETNORMALMODE
- `name`: "Icu_HW_SetNormalMode"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36,49,53,59,64`
- `brief`: "api index entry for `Icu_HW_SetNormalMode`."
- `anchors`:
  - `p36`: "Icu_HW_SetNormalMode(Icu_HwType"
  - `p49`: "Icu_HW_SetNormalMode()"
  - `p53`: "Icu_HW_EnableEdgeCount(), Icu_HW_EnableEdgeDetection(), Icu_HW_SetNormalMode()"
  - `p59`: "Icu_HW_SetNormalMode()"
  - `p64`: "void Icu_HW_SetNormalMode(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `aliases`: []

### API-ICU-DISABLEWAKEUP
- `name`: "Icu_DisableWakeup"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,12,13,24,108`
- `brief`: "api index entry for `Icu_DisableWakeup`."
- `anchors`:
  - `p9`: "API service ID for Icu_DisableWakeup function."
  - `p12`: "Adds or removes the service Icu_DisableWakeup() from the code."
  - `p13`: "STD_OFF: Icu_DisableWakeup () can not be used."
  - `p24`: "void Icu_DisableWakeup ( Icu_ChannelType Channel )"
  - `p108`: "Adds / removes the service Icu_DisableWakeup() from the code."
- `aliases`: []

### API-ICU-DISABLEEDGEDETECTION
- `name`: "Icu_DisableEdgeDetection"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14,29,44,63,111`
- `brief`: "api index entry for `Icu_DisableEdgeDetection`."
- `anchors`:
  - `p14`: "Adds or removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection()from the code."
  - `p29`: "void Icu_DisableEdgeDetection ( Icu_ChannelType Channel )"
  - `p44`: "void Icu_DisableEdgeDetection()"
  - `p63`: "void Icu_DisableEdgeDetection(Icu_ChannelType Channel)"
  - `p111`: "Adds / removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection() from the code."
- `aliases`: []

### API-ICU-HW-DISABLEEDGECOUNT
- `name`: "Icu_HW_DisableEdgeCount"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42,51,53,57,65`
- `brief`: "api index entry for `Icu_HW_DisableEdgeCount`."
- `anchors`:
  - `p42`: "void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p51`: "Icu_HW_DisableEdgeCount(),"
  - `p53`: "Icu_HW_DisableEdgeCount(),"
  - `p57`: "Icu_HW_DisableEdgeCount()"
  - `p65`: "void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `aliases`: []

### API-ICU-HW-ENABLEEDGECOUNT
- `name`: "Icu_HW_EnableEdgeCount"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41,50,53,57,65`
- `brief`: "api index entry for `Icu_HW_EnableEdgeCount`."
- `anchors`:
  - `p41`: "Icu_HW_EnableEdgeCount(Icu_HwType"
  - `p50`: "Icu_HW_EnableEdgeCount(),"
  - `p53`: "Icu_HW_EnableEdgeCount(), Icu_HW_EnableEdgeDetection(), Icu_HW_SetNormalMode()"
  - `p57`: "Icu_HW_EnableEdgeCount()"
  - `p65`: "void Icu_HW_EnableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw,"
- `aliases`: []

### API-ICU-HW-GETINPUTSTATE
- `name`: "Icu_HW_GetInputState"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38,50,54,56,62`
- `brief`: "api index entry for `Icu_HW_GetInputState`."
- `anchors`:
  - `p38`: "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p50`: "Icu_HW_GetInputState()"
  - `p54`: "Icu_HW_GetInputState()"
  - `p56`: "Icu_HW_GetInputState()"
  - `p62`: "Icu_HW_GetInputState(Icu_HwType"
- `aliases`: []

### API-ICU-HW-MODULESDEINIT
- `name`: "Icu_HW_ModulesDeInit"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34,48,52,56,61`
- `brief`: "api index entry for `Icu_HW_ModulesDeInit`."
- `anchors`:
  - `p34`: "void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig)"
  - `p48`: "Icu_HW_ModulesDeInit()"
  - `p52`: "Icu_HW_ModulesDeInit()"
  - `p56`: "Icu_HW_ModulesDeInit()"
  - `p61`: "void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig)"
- `aliases`: []

### API-ICU-HW-MODULESINIT
- `name`: "Icu_HW_ModulesInit"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32,47,52,55,60`
- `brief`: "api index entry for `Icu_HW_ModulesInit`."
- `anchors`:
  - `p32`: "void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
  - `p47`: "Icu_HW_ModulesInit()"
  - `p52`: "Icu_HW_ModulesInit()"
  - `p55`: "Icu_HW_ModulesInit()"
  - `p60`: "void Icu_HW_ModulesInit(const Icu_HwConfigType *pHwConfig)"
- `aliases`: []

### API-ICU-HW-SETACTIVATIONCONDITION
- `name`: "Icu_HW_SetActivationCondition"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37,50,53,55,62`
- `brief`: "api index entry for `Icu_HW_SetActivationCondition`."
- `anchors`:
  - `p37`: "void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
  - `p50`: "Icu_HW_SetActivationCondition()"
  - `p53`: "Icu_HW_SetActivationCondition()"
  - `p55`: "Icu_HW_SetActivationCondition()"
  - `p62`: "void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
- `aliases`: []

### API-ICU-DISABLEEDGECOUNT
- `name`: "Icu_DisableEdgeCount"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,29,42,109`
- `brief`: "api index entry for `Icu_DisableEdgeCount`."
- `anchors`:
  - `p10`: "API service ID for Icu_DisableEdgeCount function."
  - `p13`: "Icu_ResetEdgeCount(), Icu_EnableEdgeCount(), Icu_DisableEdgeCount(),Icu_GetEdgeNumbers()."
  - `p29`: "void Icu_DisableEdgeCount ( Icu_ChannelType Channel )"
  - `p42`: "void Icu_DisableEdgeCount()"
  - `p109`: "Icu_ResetEdgeCount(),Icu_EnableEdgeCount(), Icu_DisableEdgeCount(), Icu_GetEdgeNumbers()."
- `aliases`: []

### API-ICU-GETTIMESTAMPINDEX
- `name`: "Icu_GetTimestampIndex"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,17,27,110`
- `brief`: "api index entry for `Icu_GetTimestampIndex`."
- `anchors`:
  - `p10`: "API service ID for Icu_GetTimestampIndex function."
  - `p13`: "Icu_StartTimestamp(), Icu_StopTimestamp(), Icu_GetTimestampIndex()."
  - `p17`: "Type, to abstract the return value of the service Icu_GetTimestampIndex()."
  - `p27`: "Icu_IndexType Icu_GetTimestampIndex ( Icu_ChannelType Channel )"
  - `p110`: "Icu_StartTimestamp(), Icu_StopTimestamp(), Icu_GetTimestampIndex()."
- `aliases`: []

### API-ICU-RESETEDGECOUNT
- `name`: "Icu_ResetEdgeCount"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,28,41,109`
- `brief`: "api index entry for `Icu_ResetEdgeCount`."
- `anchors`:
  - `p10`: "API service ID for Icu_ResetEdgeCount function."
  - `p13`: "Icu_ResetEdgeCount(), Icu_EnableEdgeCount(), Icu_DisableEdgeCount(),Icu_GetEdgeNumbers()."
  - `p28`: "void Icu_ResetEdgeCount ( Icu_ChannelType Channel )"
  - `p41`: "void Icu_ResetEdgeCount()"
  - `p109`: "Icu_ResetEdgeCount(),Icu_EnableEdgeCount(), Icu_DisableEdgeCount(), Icu_GetEdgeNumbers()."
- `aliases`: []

### API-ICU-STARTTIMESTAMP
- `name`: "Icu_StartTimestamp"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,13,27,40,110`
- `brief`: "api index entry for `Icu_StartTimestamp`."
- `anchors`:
  - `p9`: "API service ID for Icu_StartTimestamp function."
  - `p13`: "Icu_StartTimestamp(), Icu_StopTimestamp(), Icu_GetTimestampIndex()."
  - `p27`: "void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
  - `p40`: "void Icu_StartTimestamp()"
  - `p110`: "Icu_StartTimestamp(), Icu_StopTimestamp(), Icu_GetTimestampIndex()."
- `aliases`: []

### API-ICU-STOPSIGNALMEASUREMENT
- `name`: "Icu_StopSignalMeasurement"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,31,45,110`
- `brief`: "api index entry for `Icu_StopSignalMeasurement`."
- `anchors`:
  - `p10`: "API service ID for Icu_StopSignalMeasurement function."
  - `p13`: "Adds or removes the services Icu_StartSignalMeasurement() and Icu_StopSignalMeasurement() from the code."
  - `p31`: "void Icu_StopSignalMeasurement ( Icu_ChannelType Channel )"
  - `p45`: "void Icu_StopSignalMeasurement()"
  - `p110`: "Adds / removes the services Icu_StartSignalMeasurement() and Icu_StopSignalMeasurement() from the"
- `aliases`: []

### API-ICU-CHECKWAKEUP
- `name`: "Icu_CheckWakeup"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,25,111`
- `brief`: "api index entry for `Icu_CheckWakeup`."
- `anchors`:
  - `p10`: "API service ID for Icu_CheckWakeup function."
  - `p13`: "Adds or removes the service Icu_CheckWakeup() from the code."
  - `p25`: "void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
  - `p111`: "Adds / removes the service Icu_CheckWakeup() from the code."
- `aliases`: []

### API-ICU-ENABLEWAKEUP
- `name`: "Icu_EnableWakeup"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,13,24,109`
- `brief`: "api index entry for `Icu_EnableWakeup`."
- `anchors`:
  - `p9`: "API service ID for Icu_EnableWakeup function."
  - `p13`: "Adds or removes the service Icu_EnableWakeup() from the code."
  - `p24`: "void Icu_EnableWakeup ( Icu_ChannelType Channel )"
  - `p109`: "Adds / removes the service Icu_EnableWakeup() from the code."
- `aliases`: []

### API-ICU-GETTIMEELAPSED
- `name`: "Icu_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13,31,109`
- `brief`: "api index entry for `Icu_GetTimeElapsed`."
- `anchors`:
  - `p10`: "API service ID for Icu_GetTimeElapsed function."
  - `p13`: "Adds or removes the service Icu_GetTimeElapsed() from the code."
  - `p31`: "Icu_ValueType Icu_GetTimeElapsed ( Icu_ChannelType Channel )"
  - `p109`: "Adds / removes the service Icu_GetTimeElapsed() from the code."
- `aliases`: []

### API-ICU-GETVERSIONINFO
- `name`: "Icu_GetVersionInfo"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,12,32,110`
- `brief`: "api index entry for `Icu_GetVersionInfo`."
- `anchors`:
  - `p10`: "API service ID for Icu_GetVersionInfo function."
  - `p12`: "Adds or removes the service Icu_GetVersionInfo() from the code."
  - `p32`: "void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
  - `p110`: "Adds / removes the service Icu_GetVersionInfo() from the code."
- `aliases`: []

### API-ICU-HW-DISABLEEDGEDETECTION
- `name`: "Icu_HW_DisableEdgeDetection"
- `type`: `api`
- `primary_page`: `43`
- `physical_pages`: `43,51,53,58`
- `brief`: "api index entry for `Icu_HW_DisableEdgeDetection`."
- `anchors`:
  - `p43`: "void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p51`: "Icu_HW_DisableEdgeDetection(),"
  - `p53`: "Icu_HW_DisableEdgeDetection(),"
  - `p58`: "Icu_HW_DisableEdgeDetection()"
- `aliases`: []

### API-ICU-HW-ENABLEEDGEDETECTION
- `name`: "Icu_HW_EnableEdgeDetection"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42,50,53,58`
- `brief`: "api index entry for `Icu_HW_EnableEdgeDetection`."
- `anchors`:
  - `p42`: "Icu_HW_EnableEdgeDetection(Icu_HwType"
  - `p50`: "Icu_HW_EnableEdgeDetection(),"
  - `p53`: "Icu_HW_EnableEdgeCount(), Icu_HW_EnableEdgeDetection(), Icu_HW_SetNormalMode()"
  - `p58`: "Icu_HW_EnableEdgeDetection()"
- `aliases`: []

### API-ICU-HW-SETSLEEPMODE
- `name`: "Icu_HW_SetSleepMode"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36,49,53,59`
- `brief`: "api index entry for `Icu_HW_SetSleepMode`."
- `anchors`:
  - `p36`: "void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p49`: "Icu_HW_SetSleepMode()"
  - `p53`: "Icu_HW_SetSleepMode()"
  - `p59`: "Icu_HW_SetSleepMode()"
- `aliases`: []

### API-ICU-SETACTIVATIONCONDITION
- `name`: "Icu_SetActivationCondition"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,9,25,37`
- `brief`: "api index entry for `Icu_SetActivationCondition`."
- `anchors`:
  - `p6`: "Icu_SetActivationCondition"
  - `p9`: "API service ID for Icu_SetActivationCondition function."
  - `p25`: "void Icu_SetActivationCondition ( Icu_ChannelType Channel, Icu_ActivationType Activation )"
  - `p37`: "void Icu_SetActivationCondition()"
- `aliases`: []

### API-ICU-FTUMODULECONFIGTYPE
- `name`: "Icu_FtuModuleConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,19,20,46`
- `brief`: "api index entry for `Icu_FtuModuleConfigType`."
- `anchors`:
  - `p3`: "Icu_FtuModuleConfigType ...................................................................................................................…"
  - `p19`: "const Icu_FtuModuleConfigType(* pFtuModuleConfig )[]"
  - `p20`: "Icu_FtuModuleConfigType"
  - `p46`: "void Icu_Ftu_Init ( const Icu_FtuModuleConfigType * pConfig )"
- `aliases`: []

### API-ICU-HW-CHANNELDEINIT
- `name`: "Icu_HW_ChannelDeInit"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34,51,53`
- `brief`: "api index entry for `Icu_HW_ChannelDeInit`."
- `anchors`:
  - `p34`: "void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p51`: "Icu_HW_ChannelDeInit(),"
  - `p53`: "Icu_HW_ChannelDeInit(),"
- `aliases`: []

### API-ICU-HW-CHANNELINIT
- `name`: "Icu_HW_ChannelInit"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35,48,52`
- `brief`: "api index entry for `Icu_HW_ChannelInit`."
- `anchors`:
  - `p35`: "void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
  - `p48`: "Icu_HW_ChannelInit()"
  - `p52`: "Icu_HW_ChannelInit()"
- `aliases`: []

### API-ICU-HW-GETINPUTLEVEL
- `name`: "Icu_HW_GetInputLevel"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45,54,64`
- `brief`: "api index entry for `Icu_HW_GetInputLevel`."
- `anchors`:
  - `p45`: "boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
  - `p54`: "Icu_HW_GetInputLevel()."
  - `p64`: "boolean Icu_HW_GetInputLevel(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_InputLevelType"
- `aliases`: []

### API-ICU-HW-STARTSIGNALMEASUREMENT
- `name`: "Icu_HW_StartSignalMeasurement"
- `type`: `api`
- `primary_page`: `44`
- `physical_pages`: `44,50,51`
- `brief`: "api index entry for `Icu_HW_StartSignalMeasurement`."
- `anchors`:
  - `p44`: "void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p50`: "Icu_HW_StartSignalMeasurement(),"
  - `p51`: "Icu_HW_StartSignalMeasurement(),Icu_HW_StartTimestamp()."
- `aliases`: []

### API-ICU-HW-STARTTIMESTAMP
- `name`: "Icu_HW_StartTimestamp"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39,50,51`
- `brief`: "api index entry for `Icu_HW_StartTimestamp`."
- `anchors`:
  - `p39`: "Icu_HW_StartTimestamp(Icu_HwType"
  - `p50`: "Icu_HW_StartTimestamp()"
  - `p51`: "Icu_HW_StartSignalMeasurement(),Icu_HW_StartTimestamp()."
- `aliases`: []

### API-ICU-AONTIMERMODULECONFIGTYPE
- `name`: "Icu_AontimerModuleConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,17,54`
- `brief`: "api index entry for `Icu_AontimerModuleConfigType`."
- `anchors`:
  - `p3`: "Icu_AontimerModuleConfigType ..............................................................................................................…"
  - `p17`: "const Icu_AontimerModuleConfigType (*pAontimerModuleConfig)[]"
  - `p54`: "void Icu_Aontimer_Init(const Icu_AontimerModuleConfigType *pConfig)"
- `aliases`: []

### API-BOOLEAN
- `name`: "Boolean"
- `type`: `api`
- `primary_page`: `91`
- `physical_pages`: `91,103,104`
- `brief`: "api index entry for `Boolean`."
- `anchors`:
  - `p91`: "Boolean(Range)"
  - `p103`: "Variable: Boolean"
  - `p104`: "Variable: Boolean(Range)"
- `aliases`: []

### API-ICU-HW-STOPSIGNALMEASUREMENT
- `name`: "Icu_HW_StopSignalMeasurement"
- `type`: `api`
- `primary_page`: `44`
- `physical_pages`: `44,51`
- `brief`: "api index entry for `Icu_HW_StopSignalMeasurement`."
- `anchors`:
  - `p44`: "void Icu_HW_StopSignalMeasurement(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p51`: "Icu_HW_StopSignalMeasurement(), Icu_HW_StopTimeStamp()"
- `aliases`: []

### API-ICU-HW-GETEDGENUMBERS
- `name`: "Icu_HW_GetEdgeNumbers"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40,56`
- `brief`: "api index entry for `Icu_HW_GetEdgeNumbers`."
- `anchors`:
  - `p40`: "boolean Icu_HW_GetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_EdgeNumberType"
  - `p56`: "Icu_HW_GetEdgeNumbers()"
- `aliases`: []

### API-ICU-HW-GETOVERFLOWVALUE
- `name`: "Icu_HW_GetOverflowValue"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45,51`
- `brief`: "api index entry for `Icu_HW_GetOverflowValue`."
- `anchors`:
  - `p45`: "Icu_ValueType Icu_HW_GetOverflowValue (Icu_HwType eHwType)"
  - `p51`: "Icu_HW_GetOverflowValue()"
- `aliases`: []

### API-ICU-HW-RESETEDGENUMBERS
- `name`: "Icu_HW_ResetEdgeNumbers"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41,57`
- `brief`: "api index entry for `Icu_HW_ResetEdgeNumbers`."
- `anchors`:
  - `p41`: "void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p57`: "Icu_HW_ResetEdgeNumbers()"
- `aliases`: []

### API-ICU-HW-STOPTIMESTAMP
- `name`: "Icu_HW_StopTimeStamp"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40,51`
- `brief`: "api index entry for `Icu_HW_StopTimeStamp`."
- `anchors`:
  - `p40`: "void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p51`: "Icu_HW_StopSignalMeasurement(), Icu_HW_StopTimeStamp()"
- `aliases`: []

### API-ICU-STARTGLOBALTIME
- `name`: "Icu_StartGlobalTime"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32,107`
- `brief`: "api index entry for `Icu_StartGlobalTime`."
- `anchors`:
  - `p32`: "void Icu_StartGlobalTime(const uint32 u32Group)"
  - `p107`: "won't start before calling Icu_StartGlobalTime() ."
- `aliases`: []

### API-ICU-CHANNELCONFIGTYPE
- `name`: "Icu_ChannelConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,18`
- `brief`: "api index entry for `Icu_ChannelConfigType`."
- `anchors`:
  - `p3`: "Icu_ChannelConfigType .....................................................................................................................…"
  - `p18`: "const Icu_ChannelConfigType (*pChannelsConfig)[]"
- `aliases`: []

### API-ICU-DISABLENOTIFICATION
- `name`: "Icu_DisableNotification"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,25`
- `brief`: "api index entry for `Icu_DisableNotification`."
- `anchors`:
  - `p9`: "API service ID for Icu_DisableNotification function."
  - `p25`: "void Icu_DisableNotification ( Icu_ChannelType Channel )"
- `aliases`: []

### API-ICU-ENABLENOTIFICATION
- `name`: "Icu_EnableNotification"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,26`
- `brief`: "api index entry for `Icu_EnableNotification`."
- `anchors`:
  - `p9`: "API service ID for Icu_EnableNotification function."
  - `p26`: "void Icu_EnableNotification ( Icu_ChannelType Channel )"
- `aliases`: []

### API-ICU-PORTMODULECONFIGTYPE
- `name`: "Icu_PortModuleConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `brief`: "api index entry for `Icu_PortModuleConfigType`."
- `anchors`:
  - `p3`: "2.6.10 Icu_PortModuleConfigType ...........................................................................................................…"
  - `p20`: "const Icu_PortModuleConfigType(* pPortModuleConfig )[]"
- `aliases`: []

### API-ICU-CMPMODULECONFIGTYPE
- `name`: "Icu_CmpmoduleConfigType"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20,59`
- `brief`: "api index entry for `Icu_CmpmoduleConfigType`."
- `anchors`:
  - `p20`: "const Icu_CmpmoduleConfigType (*pCmpModuleConfig)[];"
  - `p59`: "void Icu_Cmp_Init(const Icu_CmpmoduleConfigType *pConfig)"
- `aliases`: []

### API-STRING
- `name`: "String"
- `type`: `api`
- `primary_page`: `103`
- `physical_pages`: `103,104`
- `brief`: "api index entry for `String`."
- `anchors`:
  - `p103`: "Variable: String(Range)"
  - `p104`: "Variable: String(Range)"
- `aliases`: []

### API-ICU-AONTIMER-DEINIT
- `name`: "Icu_Aontimer_DeInit"
- `type`: `api`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "api index entry for `Icu_Aontimer_DeInit`."
- `anchors`:
  - `p56`: "void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-AONTIMER-DISABLEEDGECOUNT
- `name`: "Icu_Aontimer_DisableEdgeCount"
- `type`: `api`
- `primary_page`: `57`
- `physical_pages`: `57`
- `brief`: "api index entry for `Icu_Aontimer_DisableEdgeCount`."
- `anchors`:
  - `p57`: "void Icu_Aontimer_DisableEdgeCount(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-AONTIMER-DISABLEEDGEDETECTION
- `name`: "Icu_Aontimer_DisableEdgeDetection"
- `type`: `api`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "api index entry for `Icu_Aontimer_DisableEdgeDetection`."
- `anchors`:
  - `p58`: "void Icu_Aontimer_DisableEdgeDetection(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-AONTIMER-ENABLEEDGECOUNT
- `name`: "Icu_Aontimer_EnableEdgeCount"
- `type`: `api`
- `primary_page`: `57`
- `physical_pages`: `57`
- `brief`: "api index entry for `Icu_Aontimer_EnableEdgeCount`."
- `anchors`:
  - `p57`: "Icu_Aontimer_EnableEdgeCount(const"
- `aliases`: []

### API-ICU-AONTIMER-ENABLEEDGEDETECTION
- `name`: "Icu_Aontimer_EnableEdgeDetection"
- `type`: `api`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "api index entry for `Icu_Aontimer_EnableEdgeDetection`."
- `anchors`:
  - `p58`: "Icu_Aontimer_EnableEdgeDetection(const"
- `aliases`: []

### API-ICU-AONTIMER-GETEDGENUMBERS
- `name`: "Icu_Aontimer_GetEdgeNumbers"
- `type`: `api`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "api index entry for `Icu_Aontimer_GetEdgeNumbers`."
- `anchors`:
  - `p56`: "Icu_EdgeNumberType Icu_Aontimer_GetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-AONTIMER-GETINPUTSTATE
- `name`: "Icu_Aontimer_GetInputState"
- `type`: `api`
- `primary_page`: `55`
- `physical_pages`: `55`
- `brief`: "api index entry for `Icu_Aontimer_GetInputState`."
- `anchors`:
  - `p55`: "boolean Icu_Aontimer_GetInputState(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-AONTIMER-INIT
- `name`: "Icu_Aontimer_Init"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `Icu_Aontimer_Init`."
- `anchors`:
  - `p54`: "void Icu_Aontimer_Init(const Icu_AontimerModuleConfigType *pConfig)"
- `aliases`: []

### API-ICU-AONTIMER-RESETEDGENUMBERS
- `name`: "Icu_Aontimer_ResetEdgeNumbers"
- `type`: `api`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "api index entry for `Icu_Aontimer_ResetEdgeNumbers`."
- `anchors`:
  - `p56`: "void Icu_Aontimer_ResetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-AONTIMER-SETACTIVATIONCONDITION
- `name`: "Icu_Aontimer_SetActivationCondition"
- `type`: `api`
- `primary_page`: `55`
- `physical_pages`: `55`
- `brief`: "api index entry for `Icu_Aontimer_SetActivationCondition`."
- `anchors`:
  - `p55`: "Icu_Aontimer_SetActivationCondition(const"
- `aliases`: []

### API-ICU-AONTIMER-SETNORMALMODE
- `name`: "Icu_Aontimer_SetNormalMode"
- `type`: `api`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "api index entry for `Icu_Aontimer_SetNormalMode`."
- `anchors`:
  - `p58`: "Icu_Aontimer_SetNormalMode(const"
- `aliases`: []

### API-ICU-AONTIMER-SETSLEEPMODE
- `name`: "Icu_Aontimer_SetSleepMode"
- `type`: `api`
- `primary_page`: `59`
- `physical_pages`: `59`
- `brief`: "api index entry for `Icu_Aontimer_SetSleepMode`."
- `anchors`:
  - `p59`: "void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### API-ICU-CHANNEINTERRUPTCALLBACK
- `name`: "Icu_ChanneInterruptCallback"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `Icu_ChanneInterruptCallback`."
- `anchors`:
  - `p46`: "void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `aliases`: []

### API-ICU-CMP-DEINIT
- `name`: "Icu_Cmp_DeInit"
- `type`: `api`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "api index entry for `Icu_Cmp_DeInit`."
- `anchors`:
  - `p60`: "void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
- `aliases`: []

### API-ICU-CMP-DISABLEEDGECOUNT
- `name`: "Icu_Cmp_DisableEdgeCount"
- `type`: `api`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "api index entry for `Icu_Cmp_DisableEdgeCount`."
- `anchors`:
  - `p65`: "void Icu_Cmp_DisableEdgeCount (const Icu_CmpInstanceType eCmpInstance)"
- `aliases`: []

### API-ICU-CMP-DISABLEEDGEDETECTION
- `name`: "Icu_Cmp_DisableEdgeDetection"
- `type`: `api`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "api index entry for `Icu_Cmp_DisableEdgeDetection`."
- `anchors`:
  - `p63`: "void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
- `aliases`: []

### API-ICU-CMP-ENABLEEDGECOUNT
- `name`: "Icu_Cmp_EnableEdgeCount"
- `type`: `api`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "api index entry for `Icu_Cmp_EnableEdgeCount`."
- `anchors`:
  - `p65`: "void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `aliases`: []

### API-ICU-CMP-ENABLEEDGEDETECTION
- `name`: "Icu_Cmp_EnableEdgeDetection"
- `type`: `api`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "api index entry for `Icu_Cmp_EnableEdgeDetection`."
- `anchors`:
  - `p62`: "void Icu_Cmp_EnableEdgeDetection(const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `aliases`: []

### API-ICU-CMP-GETINPUTLEVEL
- `name`: "Icu_Cmp_GetInputLevel"
- `type`: `api`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "api index entry for `Icu_Cmp_GetInputLevel`."
- `anchors`:
  - `p64`: "boolean Icu_Cmp_GetInputLevel (const Icu_CmpInstanceType eCmpInstance)"
- `aliases`: []

### API-ICU-CMP-GETINPUTSTATE
- `name`: "Icu_Cmp_GetInputState"
- `type`: `api`
- `primary_page`: `61`
- `physical_pages`: `61`
- `brief`: "api index entry for `Icu_Cmp_GetInputState`."
- `anchors`:
  - `p61`: "boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
- `aliases`: []

### API-ICU-CMP-INIT
- `name`: "Icu_Cmp_Init"
- `type`: `api`
- `primary_page`: `59`
- `physical_pages`: `59`
- `brief`: "api index entry for `Icu_Cmp_Init`."
- `anchors`:
  - `p59`: "void Icu_Cmp_Init(const Icu_CmpmoduleConfigType *pConfig)"
- `aliases`: []

### API-ICU-CMP-SETACTIVATIONCONDITION
- `name`: "Icu_Cmp_SetActivationCondition"
- `type`: `api`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "api index entry for `Icu_Cmp_SetActivationCondition`."
- `anchors`:
  - `p62`: "Icu_Cmp_SetActivationCondition(const"
- `aliases`: []

### API-ICU-CMP-SETNORMALMODE
- `name`: "Icu_Cmp_SetNormalMode"
- `type`: `api`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "api index entry for `Icu_Cmp_SetNormalMode`."
- `anchors`:
  - `p63`: "void Icu_Cmp_SetNormalMode (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `aliases`: []

### API-ICU-CMP-SETSLEEPMODE
- `name`: "Icu_Cmp_SetSleepMode"
- `type`: `api`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "api index entry for `Icu_Cmp_SetSleepMode`."
- `anchors`:
  - `p64`: "void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `aliases`: []

### API-ICU-FTU-CHANNELINIT
- `name`: "Icu_Ftu_ChannelInit"
- `type`: `api`
- `primary_page`: `47`
- `physical_pages`: `47`
- `brief`: "api index entry for `Icu_Ftu_ChannelInit`."
- `anchors`:
  - `p47`: "void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `aliases`: []

### API-ICU-FTU-CONFIGGTB
- `name`: "Icu_Ftu_ConfigGTB"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `Icu_Ftu_ConfigGTB`."
- `anchors`:
  - `p52`: "void Icu_Ftu_ConfigGTB(const uint32 u32Group, boolean benable)"
- `aliases`: []

### API-ICU-FTU-DEINIT
- `name`: "Icu_Ftu_DeInit"
- `type`: `api`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "api index entry for `Icu_Ftu_DeInit`."
- `anchors`:
  - `p48`: "void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
- `aliases`: []

### API-ICU-FTU-DISABLEOVERFLOW
- `name`: "Icu_Ftu_DisableOverflow"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `Icu_Ftu_DisableOverflow`."
- `anchors`:
  - `p51`: "void Icu_Ftu_DisableOverflow(const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel)"
- `aliases`: []

### API-ICU-FTU-ENABLEOVERFLOW
- `name`: "Icu_Ftu_EnableOverflow"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `Icu_Ftu_EnableOverflow`."
- `anchors`:
  - `p51`: "void Icu_Ftu_EnableOverflow(const Icu_FtuInstanceType eFtuInstance, const uint8"
- `aliases`: []

### API-ICU-FTU-GETINPUTSTATE
- `name`: "Icu_Ftu_GetInputState"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `Icu_Ftu_GetInputState`."
- `anchors`:
  - `p50`: "boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `aliases`: []

### API-ICU-FTU-GETINSTANCEMAXCOUNT
- `name`: "Icu_Ftu_GetInstanceMaxCount"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `Icu_Ftu_GetInstanceMaxCount`."
- `anchors`:
  - `p51`: "Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `aliases`: []

### API-ICU-FTU-INIT
- `name`: "Icu_Ftu_Init"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `Icu_Ftu_Init`."
- `anchors`:
  - `p46`: "void Icu_Ftu_Init ( const Icu_FtuModuleConfigType * pConfig )"
- `aliases`: []

### API-ICU-FTU-SETACTIVATIONCONDITION
- `name`: "Icu_Ftu_SetActivationCondition"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `Icu_Ftu_SetActivationCondition`."
- `anchors`:
  - `p49`: "void Icu_Ftu_SetActivationCondition ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `aliases`: []

### API-ICU-FTU-SETNORMALMODE
- `name`: "Icu_Ftu_SetNormalMode"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `Icu_Ftu_SetNormalMode`."
- `anchors`:
  - `p49`: "void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `aliases`: []

### API-ICU-FTU-SETSLEEPMODE
- `name`: "Icu_Ftu_SetSleepMode"
- `type`: `api`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "api index entry for `Icu_Ftu_SetSleepMode`."
- `anchors`:
  - `p48`: "void Icu_Ftu_SetSleepMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel)"
- `aliases`: []

### API-ICU-FTU-STARTCHANNEL
- `name`: "Icu_Ftu_StartChannel"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `Icu_Ftu_StartChannel`."
- `anchors`:
  - `p50`: "void Icu_Ftu_StartChannel ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
- `aliases`: []

### API-ICU-FTU-STOPCHANNEL
- `name`: "Icu_Ftu_StopChannel"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `Icu_Ftu_StopChannel`."
- `anchors`:
  - `p50`: "void Icu_Ftu_StopChannel ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
- `aliases`: []

### API-ICU-HW-CONFIGGTB
- `name`: "Icu_HW_ConfigGTB"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "api index entry for `Icu_HW_ConfigGTB`."
- `anchors`:
  - `p45`: "Icu_HW_ConfigGTB( const uint32 u32Group,boolean benable)"
- `aliases`: []

### API-ICU-HW-FTUOVERFLOWINTRPROCESS
- `name`: "Icu_HW_FtuOverflowIntrProcess"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `Icu_HW_FtuOverflowIntrProcess`."
- `anchors`:
  - `p46`: "Icu_HW_FtuOverflowIntrProcess()."
- `aliases`: []

### API-ICU-OVERFLOWCALLBACK
- `name`: "Icu_OverflowCallback"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `Icu_OverflowCallback`."
- `anchors`:
  - `p46`: "void Icu_OverflowCallback"
- `aliases`: []

### API-ICU-PORT-CHANNELINIT
- `name`: "Icu_Port_ChannelInit"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `Icu_Port_ChannelInit`."
- `anchors`:
  - `p52`: "void Icu_Port_ChannelInit ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `aliases`: []

### API-ICU-PORT-CHANNELSTART
- `name`: "Icu_Port_ChannelStart"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "api index entry for `Icu_Port_ChannelStart`."
- `anchors`:
  - `p53`: "void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
- `aliases`: []

### API-ICU-PORT-CHANNELSTOP
- `name`: "Icu_Port_ChannelStop"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "api index entry for `Icu_Port_ChannelStop`."
- `anchors`:
  - `p53`: "void Icu_Port_ChannelStop (const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `aliases`: []

### API-ICU-PORT-DEINIT
- `name`: "Icu_Port_DeInit"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `Icu_Port_DeInit`."
- `anchors`:
  - `p52`: "void Icu_Port_DeInit(const Icu_PortInstanceType ePortInstance)"
- `aliases`: []

### API-ICU-PORT-GETINPUTLEVEL
- `name`: "Icu_Port_GetInputLevel"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `Icu_Port_GetInputLevel`."
- `anchors`:
  - `p54`: "boolean Icu_Port_GetInputLevel (const Icu_PortInstanceType ePortInstance,const uint8 u8Channel)"
- `aliases`: []

### API-ICU-PORT-GETINPUTSTATE
- `name`: "Icu_Port_GetInputState"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `Icu_Port_GetInputState`."
- `anchors`:
  - `p54`: "boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `aliases`: []

### API-ICU-PORT-INIT
- `name`: "Icu_Port_Init"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `Icu_Port_Init`."
- `anchors`:
  - `p52`: "void Icu_Port_Init(const Icu_PortInstanceType ePortInstance)"
- `aliases`: []

### API-ICU-PORT-SETACTIVATIONCONDITION
- `name`: "Icu_Port_SetActivationCondition"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "api index entry for `Icu_Port_SetActivationCondition`."
- `anchors`:
  - `p53`: "void Icu_Port_SetActivationCondition(const Icu_PortInstanceType eFtuInstance, const uint8 u8Channel, const"
- `aliases`: []

### API-ICU-STOPGLOBALTIME
- `name`: "Icu_StopGlobalTime"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `Icu_StopGlobalTime`."
- `anchors`:
  - `p32`: "void Icu_StopGlobalTime(const uint32 u32Group)"
- `aliases`: []

### API-ICUCONF-ICUFTUGTBGROUP-X
- `name`: "IcuConf_IcuFtuGtbGroup_X"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "api index entry for `IcuConf_IcuFtuGtbGroup_X`."
- `anchors`:
  - `p14`: "IcuConf_IcuFtuGtbGroup_X (XU)"
- `aliases`: []

### API-ICU-HW-STOPTIMESTAMP-2
- `name`: "Icu_HW_StopTimestamp"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `Icu_HW_StopTimestamp`."
- `anchors`:
  - `p51`: "Icu_HW_StopSignalMeasurement(),Icu_HW_StopTimestamp()."
- `aliases`: []

### API-MANAGER
- `name`: "Manager"
- `type`: `api`
- `primary_page`: `92`
- `physical_pages`: `92`
- `brief`: "api index entry for `Manager`."
- `anchors`:
  - `p92`: "If the wakeup-capability is true the wakeup source referenced is transmitted to the ECU State Manager"
- `aliases`: []

### API-BASE
- `name`: "Base"
- `type`: `api`
- `primary_page`: `107`
- `physical_pages`: `107`
- `brief`: "api index entry for `Base`."
- `anchors`:
  - `p107`: "The FTU supports a global time base through the Global Time Base (GTB) feature. If enable, the ftu CNT"
- `aliases`: []

### API-CONTROL
- `name`: "Control"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Control`."
- `anchors`:
  - `p5`: "Control(PORT) and Always-on Timer (AONTIMER)."
- `aliases`: []

### API-TIMER
- `name`: "Timer"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Timer`."
- `anchors`:
  - `p5`: "The ICU driver provides logical channels which are configured by hardware including Flexible Timer Unit (FTU), Port"
- `aliases`: []

### API-UNIT
- `name`: "Unit"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Unit`."
- `anchors`:
  - `p5`: "The ICU driver provides logical channels which are configured by hardware including Flexible Timer Unit (FTU), Port"
- `aliases`: []

### CFG-ICUCHANNEL
- `name`: "IcuChannel"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,87,118,120`
- `brief`: "config index entry for `IcuChannel`."
- `anchors`:
  - `p4`: "IcuChannel ................................................................................................................................…"
  - `p87`: "The value for the IcuMaxChannel must match with the number of IcuChannel configured."
  - `p118`: "Add an object in IcuChannel tab."
  - `p120`: "Input the number of objects to be added to the IcuChannel tab."
- `aliases`: []

### CFG-ICUGENERAL
- `name`: "IcuGeneral"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,95,106`
- `brief`: "config index entry for `IcuGeneral`."
- `anchors`:
  - `p4`: "IcuGeneral ................................................................................................................................…"
  - `p95`: "/Icu/Icu/IcuGeneral/IcuFtuGtbGroup_0"
  - `p106`: "IcuGeneral"
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,112`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "3.2.11 CommonPublishedInformation .........................................................................................................…"
  - `p112`: "CommonPublishedInformation"
- `aliases`: []

### CFG-ICUCONFIGSET
- `name`: "IcuConfigSet"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,86`
- `brief`: "config index entry for `IcuConfigSet`."
- `anchors`:
  - `p4`: "IcuConfigSet ..............................................................................................................................…"
  - `p86`: "IcuConfigSet"
- `aliases`: []

### CFG-ICUSIGNALNOTIFICATION
- `name`: "IcuSignalNotification"
- `type`: `config`
- `primary_page`: `89`
- `physical_pages`: `89,120`
- `brief`: "config index entry for `IcuSignalNotification`."
- `anchors`:
  - `p89`: "IcuSignalNotification"
  - `p120`: "Input the notification function name in IcuSignalNotification"
- `aliases`: []

### CFG-ICUTIMESTAMPNOTIFICATION
- `name`: "IcuTimestampNotification"
- `type`: `config`
- `primary_page`: `91`
- `physical_pages`: `91,120`
- `brief`: "config index entry for `IcuTimestampNotification`."
- `anchors`:
  - `p91`: "IcuTimestampNotification"
  - `p120`: "IcuTimestampNotification."
- `aliases`: []

### CFG-ICUWAKEUPCAPABILITY
- `name`: "IcuWakeupCapability"
- `type`: `config`
- `primary_page`: `89`
- `physical_pages`: `89,120`
- `brief`: "config index entry for `IcuWakeupCapability`."
- `anchors`:
  - `p89`: "IcuWakeupCapability"
  - `p120`: "Wakeup-capabilty:Enable IcuWakeupCapability and select a wakeup source which is configured in EcuM"
- `aliases`: []

### CFG-ICUCMPOUTPINCONFIG
- `name`: "IcuCmpOutPinConfig"
- `type`: `config`
- `primary_page`: `102`
- `physical_pages`: `102`
- `brief`: "config index entry for `IcuCmpOutPinConfig`."
- `anchors`:
  - `p102`: "IcuCmpOutPinConfig"
- `aliases`: []

### CFG-ICUMAXCHANNEL
- `name`: "IcuMaxChannel"
- `type`: `config`
- `primary_page`: `87`
- `physical_pages`: `87`
- `brief`: "config index entry for `IcuMaxChannel`."
- `anchors`:
  - `p87`: "IcuMaxChannel"
- `aliases`: []

### CFG-ICUAONTMRCHANNELCLKSRC
- `name`: "IcuAontmrChannelClkSrc"
- `type`: `config`
- `primary_page`: `97`
- `physical_pages`: `97`
- `brief`: "config index entry for `IcuAontmrChannelClkSrc`."
- `anchors`:
  - `p97`: "IcuAontmrChannelClkSrc"
- `aliases`: []

### CFG-ICUCHANNELECUCPARTITIONREF
- `name`: "IcuChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `92`
- `physical_pages`: `92`
- `brief`: "config index entry for `IcuChannelEcucPartitionRef`."
- `anchors`:
  - `p92`: "IcuChannelEcucPartitionRef"
- `aliases`: []

### CFG-ICUCHANNELID
- `name`: "IcuChannelId"
- `type`: `config`
- `primary_page`: `87`
- `physical_pages`: `87`
- `brief`: "config index entry for `IcuChannelId`."
- `anchors`:
  - `p87`: "IcuChannelId"
- `aliases`: []

### CFG-ICUCHANNELWAKEUPINFO
- `name`: "IcuChannelWakeupInfo"
- `type`: `config`
- `primary_page`: `92`
- `physical_pages`: `92`
- `brief`: "config index entry for `IcuChannelWakeupInfo`."
- `anchors`:
  - `p92`: "IcuChannelWakeupInfo"
- `aliases`: []

### CFG-ICUDISABLEWAKEUPAPI
- `name`: "IcuDisableWakeupApi"
- `type`: `config`
- `primary_page`: `108`
- `physical_pages`: `108`
- `brief`: "config index entry for `IcuDisableWakeupApi`."
- `anchors`:
  - `p108`: "IcuDisableWakeupApi"
- `aliases`: []

### CFG-ICUENABLEWAKEUPAPI
- `name`: "IcuEnableWakeupApi"
- `type`: `config`
- `primary_page`: `109`
- `physical_pages`: `109`
- `brief`: "config index entry for `IcuEnableWakeupApi`."
- `anchors`:
  - `p109`: "IcuEnableWakeupApi"
- `aliases`: []

### CFG-ICUOVERFLOWNOTIFICATION
- `name`: "IcuOverflowNotification"
- `type`: `config`
- `primary_page`: `89`
- `physical_pages`: `89`
- `brief`: "config index entry for `IcuOverflowNotification`."
- `anchors`:
  - `p89`: "IcuOverflowNotification"
- `aliases`: []

### CFG-ICUOVERFLOWNOTIFICATIONAPI
- `name`: "IcuOverflowNotificationApi"
- `type`: `config`
- `primary_page`: `112`
- `physical_pages`: `112`
- `brief`: "config index entry for `IcuOverflowNotificationApi`."
- `anchors`:
  - `p112`: "IcuOverflowNotificationApi"
- `aliases`: []

### CFG-ICUREPORTWAKEUPSOURCE
- `name`: "IcuReportWakeupSource"
- `type`: `config`
- `primary_page`: `106`
- `physical_pages`: `106`
- `brief`: "config index entry for `IcuReportWakeupSource`."
- `anchors`:
  - `p106`: "IcuReportWakeupSource"
- `aliases`: []

### CFG-ICUWAKEUP
- `name`: "IcuWakeup"
- `type`: `config`
- `primary_page`: `91`
- `physical_pages`: `91`
- `brief`: "config index entry for `IcuWakeup`."
- `anchors`:
  - `p91`: "IcuWakeup"
- `aliases`: []

### CFG-ICUWAKEUPFUNCTIONALITYAPI
- `name`: "IcuWakeupFunctionalityApi"
- `type`: `config`
- `primary_page`: `111`
- `physical_pages`: `111`
- `brief`: "config index entry for `IcuWakeupFunctionalityApi`."
- `anchors`:
  - `p111`: "IcuWakeupFunctionalityApi"
- `aliases`: []

### CFG-ECUMCONFIGURATION
- `name`: "EcuMConfiguration"
- `type`: `config`
- `primary_page`: `92`
- `physical_pages`: `92`
- `brief`: "config index entry for `EcuMConfiguration`."
- `anchors`:
  - `p92`: "ASPathDataOfSchema:/AUTOSAR/EcucDefs/EcuM/EcuMConfiguration/E"
- `aliases`: []

### CFG-ECUMWAKEUPSOURCE
- `name`: "EcuMWakeupSource"
- `type`: `config`
- `primary_page`: `92`
- `physical_pages`: `92`
- `brief`: "config index entry for `EcuMWakeupSource`."
- `anchors`:
  - `p92`: "cuMCommonConfiguration/EcuMWakeupSource"
- `aliases`: []

### CFG-ECUM-SETWAKEUPEVENT
- `name`: "EcuM_SetWakeupEvent"
- `type`: `config`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "config index entry for `EcuM_SetWakeupEvent`."
- `anchors`:
  - `p25`: "service EcuM_SetWakeupEvent in case of a valid ICU channel wakeup event."
- `aliases`: []

### CFG-ICUCMPWINDOWCONFIG
- `name`: "IcuCmpWindowConfig"
- `type`: `config`
- `primary_page`: `103`
- `physical_pages`: `103`
- `brief`: "config index entry for `IcuCmpWindowConfig`."
- `anchors`:
  - `p103`: "IcuCmpWindowConfig"
- `aliases`: []

### CFG-ICU-CHANNELTYP
- `name`: "Icu_ChannelTyp"
- `type`: `config`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "config index entry for `Icu_ChannelTyp`."
- `anchors`:
  - `p18`: "const Icu_ChannelTyp tChannelCount"
- `aliases`: []

### CFG-ICU-TIMESTAMPDMACHANNELSTATE
- `name`: "Icu_TimestampDmaChannelState"
- `type`: `config`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "config index entry for `Icu_TimestampDmaChannelState`."
- `anchors`:
  - `p16`: "Icu_TimestampDmaChannelState"
- `aliases`: []

### CFG-ICU-TIMESTAMPDMACHANNELSTATE-2
- `name`: "Icu__TimestampDmaChannelState"
- `type`: `config`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "config index entry for `Icu__TimestampDmaChannelState`."
- `anchors`:
  - `p16`: "Icu__TimestampDmaChannelState"
- `aliases`: []

### MACRO-AUTOSAR-ECUC
- `name`: "AUTOSAR_ECUC"
- `type`: `macro`
- `primary_page`: `87`
- `physical_pages`: `87,88,89,90,91,92,106,108,109,110,111`
- `brief`: "macro index entry for `AUTOSAR_ECUC`."
- `anchors`:
  - `p87`: "AUTOSAR_ECUC"
  - `p88`: "AUTOSAR_ECUC"
  - `p89`: "AUTOSAR_ECUC"
  - `p90`: "AUTOSAR_ECUC"
  - `p91`: "AUTOSAR_ECUC"
- `aliases`: []

### MACRO-ICU-MODE-SIGNAL-MEASUREMENT
- `name`: "ICU_MODE_SIGNAL_MEASUREMENT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,14,16,89,115,120`
- `brief`: "macro index entry for `ICU_MODE_SIGNAL_MEASUREMENT`."
- `anchors`:
  - `p12`: "STD_ON: The number of overflows will be added to the statistics in ICU_MODE_SIGNAL_MEASUREMENT mode.."
  - `p14`: "STD_ON: The number of overflows will be added to the statistics in ICU_MODE_SIGNAL_MEASUREMENT mode."
  - `p16`: "ICU_MODE_SIGNAL_MEASUREMENT ="
  - `p89`: "ICU_MODE_SIGNAL_MEASUREMENT, ICU_MODE_TIMESTAMP"
  - `p115`: "Only FTU channels support ICU_MODE_SIGNAL_MEASUREMENT."
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13,14,15`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p12`: "#define ICU_DEV_ERROR_DETECT (STD_ON)"
  - `p13`: "#define ICU_ENABLE_WAKEUP_API (STD_ON)"
  - `p14`: "#define ICU_EDGE_DETECT_API (STD_ON)"
  - `p15`: "#define ICU_PORT_ISR_USED (STD_ON)"
- `aliases`: []

### MACRO-ICU-MODE-TIMESTAMP
- `name`: "ICU_MODE_TIMESTAMP"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,89,115,120`
- `brief`: "macro index entry for `ICU_MODE_TIMESTAMP`."
- `anchors`:
  - `p16`: "ICU_MODE_TIMESTAMP = 2"
  - `p89`: "ICU_MODE_SIGNAL_MEASUREMENT, ICU_MODE_TIMESTAMP"
  - `p115`: "Only FTU channels support ICU_MODE_TIMESTAMP"
  - `p120`: "If IcuMeasurementMode is set to ICU_MODE_TIMESTAMP,IcuTimestampMeasurement must be enabled.Then"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13,14`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p12`: "STD_OFF: Disabled."
  - `p13`: "STD_OFF: Icu_DisableWakeup () can not be used."
  - `p14`: "STD_OFF: The services listed above cannot be used."
- `aliases`: []

### MACRO-INTEGER-LABEL
- `name`: "INTEGER_LABEL"
- `type`: `macro`
- `primary_page`: `112`
- `physical_pages`: `112,113,114`
- `brief`: "macro index entry for `INTEGER_LABEL`."
- `anchors`:
  - `p112`: "Variable : INTEGER_LABEL"
  - `p113`: "Variable : INTEGER_LABEL"
  - `p114`: "Variable : INTEGER_LABEL"
- `aliases`: []

### MACRO-ICU-ACTIVE
- `name`: "ICU_ACTIVE"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,26,39`
- `brief`: "macro index entry for `ICU_ACTIVE`."
- `anchors`:
  - `p15`: "ICU_ACTIVE = 0"
  - `p26`: "ICU_ACTIVE: An activation edge has been detected"
  - `p39`: "ICU_ACTIVE An active edge has been detected."
- `aliases`: []

### MACRO-ICU-BOTH-EDGES
- `name`: "ICU_BOTH_EDGES"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,25,88`
- `brief`: "macro index entry for `ICU_BOTH_EDGES`."
- `anchors`:
  - `p16`: "ICU_BOTH_EDGES = 2"
  - `p25`: "ICU_BOTH_EDGES"
  - `p88`: "ICU_BOTH_EDGES, ICU_FALLING_EDGE, ICU_RISING_EDGE"
- `aliases`: []

### MACRO-ICU-FALLING-EDGE
- `name`: "ICU_FALLING_EDGE"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,25,88`
- `brief`: "macro index entry for `ICU_FALLING_EDGE`."
- `anchors`:
  - `p16`: "ICU_FALLING_EDGE = 1"
  - `p25`: "ICU_FALLING_EDGE"
  - `p88`: "ICU_BOTH_EDGES, ICU_FALLING_EDGE, ICU_RISING_EDGE"
- `aliases`: []

### MACRO-ICU-IDLE
- `name`: "ICU_IDLE"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,26,39`
- `brief`: "macro index entry for `ICU_IDLE`."
- `anchors`:
  - `p15`: "ICU_IDLE = 1"
  - `p26`: "ICU_IDLE: No activation edge has been detected since the last call of Icu_GetInputState() or Icu_Init()."
  - `p39`: "ICU_IDLE No active edge has been detected."
- `aliases`: []

### MACRO-ICU-MODE-NORMAL
- `name`: "ICU_MODE_NORMAL"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,24,66`
- `brief`: "macro index entry for `ICU_MODE_NORMAL`."
- `anchors`:
  - `p15`: "ICU_MODE_NORMAL = 0"
  - `p24`: "ICU_MODE_NORMAL: Normal operation, all used interrupts are enabled"
  - `p66`: "Module operates in ICU_MODE_NORMAL."
- `aliases`: []

### MACRO-ICU-MODE-SIGNAL-EDGE-DETECT
- `name`: "ICU_MODE_SIGNAL_EDGE_DETECT"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,89,120`
- `brief`: "macro index entry for `ICU_MODE_SIGNAL_EDGE_DETECT`."
- `anchors`:
  - `p16`: "ICU_MODE_SIGNAL_EDGE_DETECT ="
  - `p89`: "ICU_MODE_SIGNAL_EDGE_DETECT,"
  - `p120`: "If IcuMeasurementMode is set to ICU_MODE_SIGNAL_EDGE_DETECT,IcuSignalEdgeDetection must be enabled."
- `aliases`: []

### MACRO-ICU-RISING-EDGE
- `name`: "ICU_RISING_EDGE"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,25,88`
- `brief`: "macro index entry for `ICU_RISING_EDGE`."
- `anchors`:
  - `p16`: "ICU_RISING_EDGE = 0"
  - `p25`: "ICU_RISING_EDGE"
  - `p88`: "ICU_BOTH_EDGES, ICU_FALLING_EDGE, ICU_RISING_EDGE"
- `aliases`: []

### MACRO-ICU-OVERFLOW-TIME-STATISTICS
- `name`: "ICU_OVERFLOW_TIME_STATISTICS"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,14`
- `brief`: "macro index entry for `ICU_OVERFLOW_TIME_STATISTICS`."
- `anchors`:
  - `p12`: "#define ICU_OVERFLOW_TIME_STATISTICS (STD_ON)"
  - `p14`: "#define ICU_OVERFLOW_TIME_STATISTICS (STD_ON)"
- `aliases`: []

### MACRO-CMPOUT-WIN
- `name`: "CMPOUT_WIN"
- `type`: `macro`
- `primary_page`: `103`
- `physical_pages`: `103,104`
- `brief`: "macro index entry for `CMPOUT_WIN`."
- `anchors`:
  - `p103`: "User can define CMPOUT_WIN level, when window is closed."
  - `p104`: "The CMPOUT_WIN defined by user."
- `aliases`: []

### MACRO-ICU-CIRCULAR-BUFFER
- `name`: "ICU_CIRCULAR_BUFFER"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,90`
- `brief`: "macro index entry for `ICU_CIRCULAR_BUFFER`."
- `anchors`:
  - `p16`: "ICU_CIRCULAR_BUFFER = 1"
  - `p90`: "ICU_CIRCULAR_BUFFER, ICU_LINEAR_BUFFER"
- `aliases`: []

### MACRO-ICU-DUTY-CYCLE
- `name`: "ICU_DUTY_CYCLE"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,90`
- `brief`: "macro index entry for `ICU_DUTY_CYCLE`."
- `anchors`:
  - `p16`: "ICU_DUTY_CYCLE = 3"
  - `p90`: "ICU_DUTY_CYCLE, ICU_HIGH_TIME, ICU_LOW_TIME, ICU_PERIOD_TIME"
- `aliases`: []

### MACRO-ICU-HIGH-TIME
- `name`: "ICU_HIGH_TIME"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,90`
- `brief`: "macro index entry for `ICU_HIGH_TIME`."
- `anchors`:
  - `p16`: "ICU_HIGH_TIME = 1"
  - `p90`: "ICU_DUTY_CYCLE, ICU_HIGH_TIME, ICU_LOW_TIME, ICU_PERIOD_TIME"
- `aliases`: []

### MACRO-ICU-LINEAR-BUFFER
- `name`: "ICU_LINEAR_BUFFER"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,90`
- `brief`: "macro index entry for `ICU_LINEAR_BUFFER`."
- `anchors`:
  - `p16`: "ICU_LINEAR_BUFFER = 0"
  - `p90`: "ICU_CIRCULAR_BUFFER, ICU_LINEAR_BUFFER"
- `aliases`: []

### MACRO-ICU-LOW-TIME
- `name`: "ICU_LOW_TIME"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,90`
- `brief`: "macro index entry for `ICU_LOW_TIME`."
- `anchors`:
  - `p16`: "ICU_LOW_TIME = 0"
  - `p90`: "ICU_DUTY_CYCLE, ICU_HIGH_TIME, ICU_LOW_TIME, ICU_PERIOD_TIME"
- `aliases`: []

### MACRO-ICU-MODE-EDGE-COUNTER
- `name`: "ICU_MODE_EDGE_COUNTER"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,89`
- `brief`: "macro index entry for `ICU_MODE_EDGE_COUNTER`."
- `anchors`:
  - `p16`: "ICU_MODE_EDGE_COUNTER = 3"
  - `p89`: "ICU_MODE_EDGE_COUNTER,"
- `aliases`: []

### MACRO-ICU-MODE-SLEEP
- `name`: "ICU_MODE_SLEEP"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,24`
- `brief`: "macro index entry for `ICU_MODE_SLEEP`."
- `anchors`:
  - `p15`: "ICU_MODE_SLEEP = 1"
  - `p24`: "ICU_MODE_SLEEP: Reduced power mode. In sleep mode, only those"
- `aliases`: []

### MACRO-ICU-PERIOD-TIME
- `name`: "ICU_PERIOD_TIME"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,90`
- `brief`: "macro index entry for `ICU_PERIOD_TIME`."
- `anchors`:
  - `p16`: "ICU_PERIOD_TIME = 2"
  - `p90`: "ICU_DUTY_CYCLE, ICU_HIGH_TIME, ICU_LOW_TIME, ICU_PERIOD_TIME"
- `aliases`: []

### MACRO-PORT-A
- `name`: "PORT_A"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_A`."
- `anchors`:
  - `p88`: "FTU0~11,PORT_A,"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-B
- `name`: "PORT_B"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_B`."
- `anchors`:
  - `p88`: "PORT_B,"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-C
- `name`: "PORT_C"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_C`."
- `anchors`:
  - `p88`: "PORT_C,"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-D
- `name`: "PORT_D"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_D`."
- `anchors`:
  - `p88`: "PORT_D,"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-E
- `name`: "PORT_E"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_E`."
- `anchors`:
  - `p88`: "PORT_E,PORT_F,PORT_G,PORT_H,PORT_I,AONTIMER,CMP0~2"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-F
- `name`: "PORT_F"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_F`."
- `anchors`:
  - `p88`: "PORT_E,PORT_F,PORT_G,PORT_H,PORT_I,AONTIMER,CMP0~2"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-H
- `name`: "PORT_H"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_H`."
- `anchors`:
  - `p88`: "PORT_E,PORT_F,PORT_G,PORT_H,PORT_I,AONTIMER,CMP0~2"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-PORT-I
- `name`: "PORT_I"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88,96`
- `brief`: "macro index entry for `PORT_I`."
- `anchors`:
  - `p88`: "PORT_E,PORT_F,PORT_G,PORT_H,PORT_I,AONTIMER,CMP0~2"
  - `p96`: "PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_H, PORT_I"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,86`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 86"
  - `p86`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-ICU-CMP-INSRCSEL-MUX
- `name`: "ICU_CMP_INSRCSEL_MUX"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSRCSEL_MUX`."
- `anchors`:
  - `p100`: "ICU_CMP_INSRCSEL_DAC,ICU_CMP_INSRCSEL_MUX"
- `aliases`: []

### MACRO-FTU-0
- `name`: "FTU_0"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_0`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-ICU-AONTMER-ISR-USED
- `name`: "ICU_AONTMER_ISR_USED"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `ICU_AONTMER_ISR_USED`."
- `anchors`:
  - `p15`: "#define ICU_AONTMER_ISR_USED (STD_ON)"
- `aliases`: []

### MACRO-ICU-CHECKWAKEUP-ID
- `name`: "ICU_CHECKWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_CHECKWAKEUP_ID`."
- `anchors`:
  - `p10`: "#define ICU_CHECKWAKEUP_ID ((uint8)0x15)"
- `aliases`: []

### MACRO-ICU-CM
- `name`: "ICU_CM"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CM`."
- `anchors`:
  - `p100`: "ICU_CMP_INSRCSEL_DAC,ICU_CMP_INSRCSEL_MUX"
- `aliases`: []

### MACRO-ICU-CMP-INSEL-MUX-IN
- `name`: "ICU_CMP_INSEL_MUX_IN"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_MUX_IN`."
- `anchors`:
  - `p100`: "ICU_CMP_INSEL_MUX_IN0,ICU_CMP_INSEL_MUX_IN1,ICU_CMP_INSEL_"
- `aliases`: []

### MACRO-ICU-CMP-INSEL-MUX-IN0
- `name`: "ICU_CMP_INSEL_MUX_IN0"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_MUX_IN0`."
- `anchors`:
  - `p100`: "ICU_CMP_INSEL_MUX_IN0,ICU_CMP_INSEL_MUX_IN1,ICU_CMP_INSEL_"
- `aliases`: []

### MACRO-ICU-CMP-INSEL-MUX-IN1
- `name`: "ICU_CMP_INSEL_MUX_IN1"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_MUX_IN1`."
- `anchors`:
  - `p100`: "ICU_CMP_INSEL_MUX_IN0,ICU_CMP_INSEL_MUX_IN1,ICU_CMP_INSEL_"
- `aliases`: []

### MACRO-ICU-CMP-INSEL-MUX-IN3
- `name`: "ICU_CMP_INSEL_MUX_IN3"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_MUX_IN3`."
- `anchors`:
  - `p100`: "MUX_IN2,ICU_CMP_INSEL_MUX_IN3,ICU_CMP_INSEL_MUX_IN4,ICU_CM"
- `aliases`: []

### MACRO-ICU-CMP-INSEL-MUX-IN4
- `name`: "ICU_CMP_INSEL_MUX_IN4"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_MUX_IN4`."
- `anchors`:
  - `p100`: "MUX_IN2,ICU_CMP_INSEL_MUX_IN3,ICU_CMP_INSEL_MUX_IN4,ICU_CM"
- `aliases`: []

### MACRO-ICU-CMP-INSEL-MUX-IN6
- `name`: "ICU_CMP_INSEL_MUX_IN6"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_MUX_IN6`."
- `anchors`:
  - `p100`: "P_INSEL_MUX_IN5,ICU_CMP_INSEL_MUX_IN6,ICU_CMP_INSEL_MUX_IN"
- `aliases`: []

### MACRO-ICU-CMP-INSRCSEL-DAC
- `name`: "ICU_CMP_INSRCSEL_DAC"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSRCSEL_DAC`."
- `anchors`:
  - `p100`: "ICU_CMP_INSRCSEL_DAC,ICU_CMP_INSRCSEL_MUX"
- `aliases`: []

### MACRO-ICU-CMP-ISR-USED
- `name`: "ICU_CMP_ISR_USED"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `ICU_CMP_ISR_USED`."
- `anchors`:
  - `p15`: "#define ICU_CMP_ISR_USED(STD_ON)"
- `aliases`: []

### MACRO-ICU-DEINIT-ID
- `name`: "ICU_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_DEINIT_ID`."
- `anchors`:
  - `p9`: "#define ICU_DEINIT_ID ((uint8)0x01)"
- `aliases`: []

### MACRO-ICU-DEV-ERROR-DETECT
- `name`: "ICU_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_DEV_ERROR_DETECT`."
- `anchors`:
  - `p12`: "#define ICU_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-ICU-DE-INIT-API
- `name`: "ICU_DE_INIT_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_DE_INIT_API`."
- `anchors`:
  - `p12`: "#define ICU_DE_INIT_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-DISABLEEDGECOUNT-ID
- `name`: "ICU_DISABLEEDGECOUNT_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_DISABLEEDGECOUNT_ID`."
- `anchors`:
  - `p10`: "#define ICU_DISABLEEDGECOUNT_ID ((uint8)0x0E)"
- `aliases`: []

### MACRO-ICU-DISABLEEDGEDETECTION-ID
- `name`: "ICU_DISABLEEDGEDETECTION_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_DISABLEEDGEDETECTION_ID`."
- `anchors`:
  - `p10`: "#define ICU_DISABLEEDGEDETECTION_ID ((uint8)0x17)"
- `aliases`: []

### MACRO-ICU-DISABLENOTIFICATION-ID
- `name`: "ICU_DISABLENOTIFICATION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_DISABLENOTIFICATION_ID`."
- `anchors`:
  - `p9`: "#define ICU_DISABLENOTIFICATION_ID ((uint8)0x06))"
- `aliases`: []

### MACRO-ICU-DISABLEWAKEUP-ID
- `name`: "ICU_DISABLEWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_DISABLEWAKEUP_ID`."
- `anchors`:
  - `p9`: "#define ICU_DISABLEWAKEUP_ID ((uint8)0x03)"
- `aliases`: []

### MACRO-ICU-DISABLE-WAKEUP-API
- `name`: "ICU_DISABLE_WAKEUP_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_DISABLE_WAKEUP_API`."
- `anchors`:
  - `p12`: "#define ICU_DISABLE_WAKEUP_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-EDGE-COUNT-API
- `name`: "ICU_EDGE_COUNT_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_EDGE_COUNT_API`."
- `anchors`:
  - `p13`: "#define ICU_EDGE_COUNT_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-EDGE-DETECT-API
- `name`: "ICU_EDGE_DETECT_API"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_EDGE_DETECT_API`."
- `anchors`:
  - `p14`: "#define ICU_EDGE_DETECT_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-ENABLEEDGECOUNT-ID
- `name`: "ICU_ENABLEEDGECOUNT_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_ENABLEEDGECOUNT_ID`."
- `anchors`:
  - `p10`: "#define ICU_ENABLEEDGECOUNT_ID ((uint8)0x0D)"
- `aliases`: []

### MACRO-ICU-ENABLEEDGEDETECTION-ID
- `name`: "ICU_ENABLEEDGEDETECTION_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_ENABLEEDGEDETECTION_ID`."
- `anchors`:
  - `p10`: "#define ICU_ENABLEEDGEDETECTION_ID ((uint8)0x16)"
- `aliases`: []

### MACRO-ICU-ENABLENOTIFICATION-ID
- `name`: "ICU_ENABLENOTIFICATION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_ENABLENOTIFICATION_ID`."
- `anchors`:
  - `p9`: "#define ICU_ENABLENOTIFICATION_ID ((uint8)0x07)"
- `aliases`: []

### MACRO-ICU-ENABLEWAKEUP-ID
- `name`: "ICU_ENABLEWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_ENABLEWAKEUP_ID`."
- `anchors`:
  - `p9`: "#define ICU_ENABLEWAKEUP_ID ((uint8)0x04)"
- `aliases`: []

### MACRO-ICU-ENABLE-WAKEUP-API
- `name`: "ICU_ENABLE_WAKEUP_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_ENABLE_WAKEUP_API`."
- `anchors`:
  - `p13`: "#define ICU_ENABLE_WAKEUP_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-E-ALREADY-INITIALIZED
- `name`: "ICU_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p8`: "#define ICU_E_ALREADY_INITIALIZED ((uint8)0x17)"
- `aliases`: []

### MACRO-ICU-E-BUSY-OPERATION
- `name`: "ICU_E_BUSY_OPERATION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_BUSY_OPERATION`."
- `anchors`:
  - `p8`: "#define ICU_E_BUSY_OPERATION ((uint8)0x16)"
- `aliases`: []

### MACRO-ICU-E-INIT-FAILED
- `name`: "ICU_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_INIT_FAILED`."
- `anchors`:
  - `p8`: "#define ICU_E_INIT_FAILED ((uint8)0x0D)"
- `aliases`: []

### MACRO-ICU-E-NOT-STARTED
- `name`: "ICU_E_NOT_STARTED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_NOT_STARTED`."
- `anchors`:
  - `p8`: "#define ICU_E_NOT_STARTED ((uint8)0x15)"
- `aliases`: []

### MACRO-ICU-E-PARAM-ACTIVATION
- `name`: "ICU_E_PARAM_ACTIVATION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_PARAM_ACTIVATION`."
- `anchors`:
  - `p8`: "#define ICU_E_PARAM_ACTIVATION ((uint8)0x0C)"
- `aliases`: []

### MACRO-ICU-E-PARAM-BUFFER-SIZE
- `name`: "ICU_E_PARAM_BUFFER_SIZE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_PARAM_BUFFER_SIZE`."
- `anchors`:
  - `p8`: "#define ICU_E_PARAM_BUFFER_SIZE ((uint8)0x0E)"
- `aliases`: []

### MACRO-ICU-E-PARAM-CHANNEL
- `name`: "ICU_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_PARAM_CHANNEL`."
- `anchors`:
  - `p8`: "#define ICU_E_PARAM_CHANNEL ((uint8)0x0B)"
- `aliases`: []

### MACRO-ICU-E-PARAM-DMACHANNEL-BUSY
- `name`: "ICU_E_PARAM_DMACHANNEL_BUSY"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_E_PARAM_DMACHANNEL_BUSY`."
- `anchors`:
  - `p9`: "#define ICU_E_PARAM_DMACHANNEL_BUSY ((uint8)0x22)"
- `aliases`: []

### MACRO-ICU-E-PARAM-MODE
- `name`: "ICU_E_PARAM_MODE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_PARAM_MODE`."
- `anchors`:
  - `p8`: "#define ICU_E_PARAM_MODE ((uint8)0x0F)"
- `aliases`: []

### MACRO-ICU-E-PARAM-NOTIFY-INTERVAL
- `name`: "ICU_E_PARAM_NOTIFY_INTERVAL"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_E_PARAM_NOTIFY_INTERVAL`."
- `anchors`:
  - `p9`: "#define ICU_E_PARAM_NOTIFY_INTERVAL ((uint8)0x18)"
- `aliases`: []

### MACRO-ICU-E-PARAM-PARTITION
- `name`: "ICU_E_PARAM_PARTITION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_E_PARAM_PARTITION`."
- `anchors`:
  - `p9`: "#define ICU_E_PARAM_PARTITION ((uint8)0x20)"
- `aliases`: []

### MACRO-ICU-E-PARAM-POINTER
- `name`: "ICU_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_PARAM_POINTER`."
- `anchors`:
  - `p8`: "#define ICU_E_PARAM_POINTER ((uint8)0x0A)"
- `aliases`: []

### MACRO-ICU-E-PARAM-VINFO
- `name`: "ICU_E_PARAM_VINFO"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_E_PARAM_VINFO`."
- `anchors`:
  - `p9`: "#define ICU_E_PARAM_VINFO ((uint8)0x19)"
- `aliases`: []

### MACRO-ICU-E-UNINIT
- `name`: "ICU_E_UNINIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_E_UNINIT`."
- `anchors`:
  - `p8`: "#define ICU_E_UNINIT ((uint8)0x14)"
- `aliases`: []

### MACRO-ICU-FTU-ISR-USED
- `name`: "ICU_FTU_ISR_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_FTU_ISR_USED`."
- `anchors`:
  - `p14`: "#define ICU_FTU_ISR_USED (STD_ON)"
- `aliases`: []

### MACRO-ICU-GETDUTYCYCLEVALUES-ID
- `name`: "ICU_GETDUTYCYCLEVALUES_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_GETDUTYCYCLEVALUES_ID`."
- `anchors`:
  - `p10`: "#define ICU_GETDUTYCYCLEVALUES_ID ((uint8)0x11)"
- `aliases`: []

### MACRO-ICU-GETEDGENUMBERS-ID
- `name`: "ICU_GETEDGENUMBERS_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_GETEDGENUMBERS_ID`."
- `anchors`:
  - `p10`: "#define ICU_GETEDGENUMBERS_ID ((uint8)0x0F)"
- `aliases`: []

### MACRO-ICU-GETINPUTSTATE-ID
- `name`: "ICU_GETINPUTSTATE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_GETINPUTSTATE_ID`."
- `anchors`:
  - `p9`: "#define ICU_GETINPUTSTATE_ID ((uint8)0x08)"
- `aliases`: []

### MACRO-ICU-GETTIMEELAPSED-ID
- `name`: "ICU_GETTIMEELAPSED_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_GETTIMEELAPSED_ID`."
- `anchors`:
  - `p10`: "#define ICU_GETTIMEELAPSED_ID ((uint8)0x10)"
- `aliases`: []

### MACRO-ICU-GETTIMESTAMPINDEX-ID
- `name`: "ICU_GETTIMESTAMPINDEX_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_GETTIMESTAMPINDEX_ID`."
- `anchors`:
  - `p10`: "#define ICU_GETTIMESTAMPINDEX_ID ((uint8)0x0B)"
- `aliases`: []

### MACRO-ICU-GETVERSIONINFO-ID
- `name`: "ICU_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_GETVERSIONINFO_ID`."
- `anchors`:
  - `p10`: "#define ICU_GETVERSIONINFO_ID ((uint8)0x12)"
- `aliases`: []

### MACRO-ICU-GET-DUTY-CYCLE-VALUES-API
- `name`: "ICU_GET_DUTY_CYCLE_VALUES_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_GET_DUTY_CYCLE_VALUES_API`."
- `anchors`:
  - `p13`: "#define ICU_GET_DUTY_CYCLE_VALUES_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-GET-INPUT-LEVEL-API
- `name`: "ICU_GET_INPUT_LEVEL_API"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_GET_INPUT_LEVEL_API`."
- `anchors`:
  - `p14`: "#define ICU_GET_INPUT_LEVEL_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-GET-INPUT-LEVEL-ID
- `name`: "ICU_GET_INPUT_LEVEL_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_GET_INPUT_LEVEL_ID`."
- `anchors`:
  - `p10`: "#define ICU_GET_INPUT_LEVEL_ID ((uint8)0x80)"
- `aliases`: []

### MACRO-ICU-GET-INPUT-STATE-API
- `name`: "ICU_GET_INPUT_STATE_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_GET_INPUT_STATE_API`."
- `anchors`:
  - `p13`: "#define ICU_GET_INPUT_STATE_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-GET-TIME-ELAPSED-API
- `name`: "ICU_GET_TIME_ELAPSED_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_GET_TIME_ELAPSED_API`."
- `anchors`:
  - `p13`: "#define ICU_GET_TIME_ELAPSED_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-GET-VERSION-INFO-API
- `name`: "ICU_GET_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_GET_VERSION_INFO_API`."
- `anchors`:
  - `p12`: "#define ICU_GET_VERSION_INFO_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-INIT-ID
- `name`: "ICU_INIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_INIT_ID`."
- `anchors`:
  - `p9`: "#define ICU_INIT_ID ((uint8)0x00)"
- `aliases`: []

### MACRO-ICU-INSTANCE-ID
- `name`: "ICU_INSTANCE_ID"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_INSTANCE_ID`."
- `anchors`:
  - `p11`: "#define ICU_INSTANCE_ID ((uint8)0U)"
- `aliases`: []

### MACRO-ICU-MAX-CHANNEL
- `name`: "ICU_MAX_CHANNEL"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_MAX_CHANNEL`."
- `anchors`:
  - `p12`: "#define ICU_MAX_CHANNEL ((Icu_ChannelType)XU)"
- `aliases`: []

### MACRO-ICU-MULTICORE-SUPPORT
- `name`: "ICU_MULTICORE_SUPPORT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_MULTICORE_SUPPORT`."
- `anchors`:
  - `p14`: "#define ICU_MULTICORE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-ICU-OVERFLOW-NOTIFICATION-API
- `name`: "ICU_OVERFLOW_NOTIFICATION_API"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_OVERFLOW_NOTIFICATION_API`."
- `anchors`:
  - `p14`: "#define ICU_OVERFLOW_NOTIFICATION_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-PARAM-MEASUREMENT-GET-PROPERTY
- `name`: "ICU_PARAM_MEASUREMENT_GET_PROPERTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_PARAM_MEASUREMENT_GET_PROPERTY`."
- `anchors`:
  - `p11`: "#define ICU_PARAM_MEASUREMENT_GET_PROPERTY(v) (1U)"
- `aliases`: []

### MACRO-ICU-PARAM-MEASUREMENT-PROPERTY-MASK
- `name`: "ICU_PARAM_MEASUREMENT_PROPERTY_MASK"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_PARAM_MEASUREMENT_PROPERTY_MASK`."
- `anchors`:
  - `p11`: "#define ICU_PARAM_MEASUREMENT_PROPERTY_MASK ((uint32)(BIT1 | BIT2 | BIT3))"
- `aliases`: []

### MACRO-ICU-PARAM-MEASUREMENT-PROPERTY-SHIFT
- `name`: "ICU_PARAM_MEASUREMENT_PROPERTY_SHIFT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_PARAM_MEASUREMENT_PROPERTY_SHIFT`."
- `anchors`:
  - `p11`: "#define ICU_PARAM_MEASUREMENT_PROPERTY_SHIFT (1U)"
- `aliases`: []

### MACRO-ICU-PARAM-TIME-STAMP-BUFFER-TYPE-MASK
- `name`: "ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK`."
- `anchors`:
  - `p11`: "#define ICU_PARAM_TIME_STAMP_BUFFER_TYPE_MASK ((uint32)(BIT0))"
- `aliases`: []

### MACRO-ICU-PARTITIONS-NB
- `name`: "ICU_PARTITIONS_NB"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_PARTITIONS_NB`."
- `anchors`:
  - `p14`: "#define ICU_PARTITIONS_NB (XU)"
- `aliases`: []

### MACRO-ICU-PORT-ISR-USED
- `name`: "ICU_PORT_ISR_USED"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `ICU_PORT_ISR_USED`."
- `anchors`:
  - `p15`: "#define ICU_PORT_ISR_USED (STD_ON)"
- `aliases`: []

### MACRO-ICU-REPORT-WAKEUP-SOURCE
- `name`: "ICU_REPORT_WAKEUP_SOURCE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_REPORT_WAKEUP_SOURCE`."
- `anchors`:
  - `p12`: "#define ICU_REPORT_WAKEUP_SOURCE (STD_ON)"
- `aliases`: []

### MACRO-ICU-RESETEDGECOUNT-ID
- `name`: "ICU_RESETEDGECOUNT_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_RESETEDGECOUNT_ID`."
- `anchors`:
  - `p10`: "#define ICU_RESETEDGECOUNT_ID ((uint8)0x0C)"
- `aliases`: []

### MACRO-ICU-SETACTIVATIONCONDITION-ID
- `name`: "ICU_SETACTIVATIONCONDITION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_SETACTIVATIONCONDITION_ID`."
- `anchors`:
  - `p9`: "#define ICU_SETACTIVATIONCONDITION_ID ((uint8)0x05)"
- `aliases`: []

### MACRO-ICU-SETMODE-ID
- `name`: "ICU_SETMODE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_SETMODE_ID`."
- `anchors`:
  - `p9`: "#define ICU_SETMODE_ID ((uint8)0x02)"
- `aliases`: []

### MACRO-ICU-SET-MODE-API
- `name`: "ICU_SET_MODE_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_SET_MODE_API`."
- `anchors`:
  - `p12`: "#define ICU_SET_MODE_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-SIGNAL-MEASUREMENT-API
- `name`: "ICU_SIGNAL_MEASUREMENT_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_SIGNAL_MEASUREMENT_API`."
- `anchors`:
  - `p13`: "#define ICU_SIGNAL_MEASUREMENT_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-STARTSIGNALMEASUREMENT-ID
- `name`: "ICU_STARTSIGNALMEASUREMENT_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_STARTSIGNALMEASUREMENT_ID`."
- `anchors`:
  - `p10`: "#define ICU_STARTSIGNALMEASUREMENT_ID ((uint8)0x13)"
- `aliases`: []

### MACRO-ICU-STARTTIMESTAMP-ID
- `name`: "ICU_STARTTIMESTAMP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_STARTTIMESTAMP_ID`."
- `anchors`:
  - `p9`: "#define ICU_STARTTIMESTAMP_ID ((uint8)0x09)"
- `aliases`: []

### MACRO-ICU-STOPSIGNALMEASUREMENT-ID
- `name`: "ICU_STOPSIGNALMEASUREMENT_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_STOPSIGNALMEASUREMENT_ID`."
- `anchors`:
  - `p10`: "#define ICU_STOPSIGNALMEASUREMENT_ID ((uint8)0x14)"
- `aliases`: []

### MACRO-ICU-STOPTIMESTAMP-ID
- `name`: "ICU_STOPTIMESTAMP_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_STOPTIMESTAMP_ID`."
- `anchors`:
  - `p10`: "#define ICU_STOPTIMESTAMP_ID ((uint8)0x0A)"
- `aliases`: []

### MACRO-ICU-TIMESTAMP-API
- `name`: "ICU_TIMESTAMP_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_TIMESTAMP_API`."
- `anchors`:
  - `p13`: "#define ICU_TIMESTAMP_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-WAKEUP-FUNCTIONALITY-API
- `name`: "ICU_WAKEUP_FUNCTIONALITY_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `ICU_WAKEUP_FUNCTIONALITY_API`."
- `anchors`:
  - `p13`: "#define ICU_WAKEUP_FUNCTIONALITY_API (STD_ON)"
- `aliases`: []

### MACRO-ICU-AR-RELEASE-MAJOR-VERSION
- `name`: "ICU_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-ICU-AR-RELEASE-MINOR-VERSION
- `name`: "ICU_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-ICU-AR-RELEASE-REVISION-VERSION
- `name`: "ICU_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-ICU-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: "ICU_CFG_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_CFG_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_CFG_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-ICU-CFG-AR-RELEASE-MINOR-VERSION
- `name`: "ICU_CFG_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_CFG_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_CFG_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-ICU-CFG-AR-RELEASE-REVISION-VERSION
- `name`: "ICU_CFG_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_CFG_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_CFG_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-ICU-CFG-SW-MAJOR-VERSION
- `name`: "ICU_CFG_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_CFG_SW_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_CFG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-ICU-CFG-SW-MINOR-VERSION
- `name`: "ICU_CFG_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_CFG_SW_MINOR_VERSION`."
- `anchors`:
  - `p12`: "#define ICU_CFG_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-ICU-CFG-SW-PATCH-VERSION
- `name`: "ICU_CFG_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_CFG_SW_PATCH_VERSION`."
- `anchors`:
  - `p12`: "#define ICU_CFG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-ICU-MODULE-ID
- `name`: "ICU_MODULE_ID"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_MODULE_ID`."
- `anchors`:
  - `p11`: "#define ICU_MODULE_ID 122"
- `aliases`: []

### MACRO-ICU-PRECOMPILE-SUPPORT
- `name`: "ICU_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p12`: "#define ICU_PRECOMPILE_SUPPORT"
- `aliases`: []

### MACRO-ICU-SW-MAJOR-VERSION
- `name`: "ICU_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_SW_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-ICU-SW-MINOR-VERSION
- `name`: "ICU_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_SW_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-ICU-SW-PATCH-VERSION
- `name`: "ICU_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_SW_PATCH_VERSION`."
- `anchors`:
  - `p11`: "#define ICU_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-ICU-VENDOR-ID
- `name`: "ICU_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_VENDOR_ID`."
- `anchors`:
  - `p11`: "#define ICU_VENDOR_ID 174"
- `aliases`: []

### MACRO-FTU-1
- `name`: "FTU_1"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_1`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-10
- `name`: "FTU_10"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_10`."
- `anchors`:
  - `p93`: "FTU_9, FTU_10, FTU_11 1 (For FC7240 only FTU_0~F TU_7)"
- `aliases`: []

### MACRO-FTU-11
- `name`: "FTU_11"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_11`."
- `anchors`:
  - `p93`: "FTU_9, FTU_10, FTU_11 1 (For FC7240 only FTU_0~F TU_7)"
- `aliases`: []

### MACRO-FTU-2
- `name`: "FTU_2"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_2`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-3
- `name`: "FTU_3"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_3`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-4
- `name`: "FTU_4"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_4`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-5
- `name`: "FTU_5"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_5`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-6
- `name`: "FTU_6"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_6`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-7
- `name`: "FTU_7"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_7`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-8
- `name`: "FTU_8"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_8`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### MACRO-FTU-9
- `name`: "FTU_9"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `FTU_9`."
- `anchors`:
  - `p93`: "FTU_9, FTU_10, FTU_11 1 (For FC7240 only FTU_0~F TU_7)"
- `aliases`: []

### MACRO-ICU-AONTIMER-CLK1-PIN
- `name`: "ICU_AONTIMER_CLK1_PIN"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_CLK1_PIN`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_CLK1_PIN,"
- `aliases`: []

### MACRO-ICU-AONTIMER-CLK2-PIN
- `name`: "ICU_AONTIMER_CLK2_PIN"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_CLK2_PIN`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_CLK2_PIN, ICU_AONTIMER_CLK3_PIN"
- `aliases`: []

### MACRO-ICU-AONTIMER-CLK3-PIN
- `name`: "ICU_AONTIMER_CLK3_PIN"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_CLK3_PIN`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_CLK2_PIN, ICU_AONTIMER_CLK3_PIN"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-1024
- `name`: "ICU_AONTIMER_GLITCH_FILTER_1024"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_1024`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_1024,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-128
- `name`: "ICU_AONTIMER_GLITCH_FILTER_128"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_128`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_128,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-16
- `name`: "ICU_AONTIMER_GLITCH_FILTER_16"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_16`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_8, ICU_AONTIMER_GLITCH_FILTER_16,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-16384
- `name`: "ICU_AONTIMER_GLITCH_FILTER_16384"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_16384`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_16384,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-2
- `name`: "ICU_AONTIMER_GLITCH_FILTER_2"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_2`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_2,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-2048
- `name`: "ICU_AONTIMER_GLITCH_FILTER_2048"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_2048`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_2048,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-256
- `name`: "ICU_AONTIMER_GLITCH_FILTER_256"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_256`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_256,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-32
- `name`: "ICU_AONTIMER_GLITCH_FILTER_32"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_32`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_32,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-32768
- `name`: "ICU_AONTIMER_GLITCH_FILTER_32768"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_32768`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_32768"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-4
- `name`: "ICU_AONTIMER_GLITCH_FILTER_4"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_4`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_4,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-4096
- `name`: "ICU_AONTIMER_GLITCH_FILTER_4096"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_4096`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_4096,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-512
- `name`: "ICU_AONTIMER_GLITCH_FILTER_512"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_512`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_512,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-64
- `name`: "ICU_AONTIMER_GLITCH_FILTER_64"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_64`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_64,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-8
- `name`: "ICU_AONTIMER_GLITCH_FILTER_8"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_8`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_8, ICU_AONTIMER_GLITCH_FILTER_16,"
- `aliases`: []

### MACRO-ICU-AONTIMER-GLITCH-FILTER-8192
- `name`: "ICU_AONTIMER_GLITCH_FILTER_8192"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_GLITCH_FILTER_8192`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_GLITCH_FILTER_8192,"
- `aliases`: []

### MACRO-ICU-AONTIMER-PCC-CLK
- `name`: "ICU_AONTIMER_PCC_CLK"
- `type`: `macro`
- `primary_page`: `97`
- `physical_pages`: `97`
- `brief`: "macro index entry for `ICU_AONTIMER_PCC_CLK`."
- `anchors`:
  - `p97`: "ICU_AONTIMER_PCC_CLK"
- `aliases`: []

### MACRO-ICU-AONTIMER-RTC-CLK
- `name`: "ICU_AONTIMER_RTC_CLK"
- `type`: `macro`
- `primary_page`: `97`
- `physical_pages`: `97`
- `brief`: "macro index entry for `ICU_AONTIMER_RTC_CLK`."
- `anchors`:
  - `p97`: "ICU_AONTIMER_RTC_CLK,"
- `aliases`: []

### MACRO-ICU-AONTIMER-SIRC-1MHZ
- `name`: "ICU_AONTIMER_SIRC_1MHZ"
- `type`: `macro`
- `primary_page`: `97`
- `physical_pages`: `97`
- `brief`: "macro index entry for `ICU_AONTIMER_SIRC_1MHZ`."
- `anchors`:
  - `p97`: "ICU_AONTIMER_SIRC_1MHZ,"
- `aliases`: []

### MACRO-ICU-AONTIMER-TRGSEL-OUTPUT
- `name`: "ICU_AONTIMER_TRGSEL_OUTPUT"
- `type`: `macro`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "macro index entry for `ICU_AONTIMER_TRGSEL_OUTPUT`."
- `anchors`:
  - `p98`: "ICU_AONTIMER_TRGSEL_OUTPUT,"
- `aliases`: []

### MACRO-ICU-CMP-BOTHEDGES
- `name`: "ICU_CMP_BOTHEDGES"
- `type`: `macro`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "macro index entry for `ICU_CMP_BOTHEDGES`."
- `anchors`:
  - `p104`: "ICU_CMP_RISINGEDGE,ICU_CMP_FALLINGEDGE,ICU_CMP_BOTHEDGES"
- `aliases`: []

### MACRO-ICU-CMP-FALLINGEDGE
- `name`: "ICU_CMP_FALLINGEDGE"
- `type`: `macro`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "macro index entry for `ICU_CMP_FALLINGEDGE`."
- `anchors`:
  - `p104`: "ICU_CMP_RISINGEDGE,ICU_CMP_FALLINGEDGE,ICU_CMP_BOTHEDGES"
- `aliases`: []

### MACRO-ICU-CMP-FILTERCNT-0
- `name`: "ICU_CMP_FILTERCNT_0"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_FILTERCNT_0`."
- `anchors`:
  - `p101`: "ICU_CMP_FILTERCNT_0,ICU_CMP_FILTERCNT_1,ICU_CMP_FILTERCNT_"
- `aliases`: []

### MACRO-ICU-CMP-FILTERCNT-1
- `name`: "ICU_CMP_FILTERCNT_1"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_FILTERCNT_1`."
- `anchors`:
  - `p101`: "ICU_CMP_FILTERCNT_0,ICU_CMP_FILTERCNT_1,ICU_CMP_FILTERCNT_"
- `aliases`: []

### MACRO-ICU-CMP-FILTERCNT-3
- `name`: "ICU_CMP_FILTERCNT_3"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_FILTERCNT_3`."
- `anchors`:
  - `p101`: "2,ICU_CMP_FILTERCNT_3"
- `aliases`: []

### MACRO-ICU-CMP-FILTEROUT
- `name`: "ICU_CMP_FILTEROUT"
- `type`: `macro`
- `primary_page`: `103`
- `physical_pages`: `103`
- `brief`: "macro index entry for `ICU_CMP_FILTEROUT`."
- `anchors`:
  - `p103`: "ICU_CMP_FILTEROUT,ICU_CMP_WINOUT"
- `aliases`: []

### MACRO-ICU-CMP-HYSTCTRL-0
- `name`: "ICU_CMP_HYSTCTRL_0"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_HYSTCTRL_0`."
- `anchors`:
  - `p101`: "ICU_CMP_HYSTCTRL_0,ICU_CMP_HYSTCTRL_1,ICU_CMP_HYSTCTRL_2,I"
- `aliases`: []

### MACRO-ICU-CMP-HYSTCTRL-1
- `name`: "ICU_CMP_HYSTCTRL_1"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_HYSTCTRL_1`."
- `anchors`:
  - `p101`: "ICU_CMP_HYSTCTRL_0,ICU_CMP_HYSTCTRL_1,ICU_CMP_HYSTCTRL_2,I"
- `aliases`: []

### MACRO-ICU-CMP-HYSTCTRL-2
- `name`: "ICU_CMP_HYSTCTRL_2"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_HYSTCTRL_2`."
- `anchors`:
  - `p101`: "ICU_CMP_HYSTCTRL_0,ICU_CMP_HYSTCTRL_1,ICU_CMP_HYSTCTRL_2,I"
- `aliases`: []

### MACRO-ICU-CMP-INSEL
- `name`: "ICU_CMP_INSEL_"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `ICU_CMP_INSEL_`."
- `anchors`:
  - `p100`: "ICU_CMP_INSEL_MUX_IN0,ICU_CMP_INSEL_MUX_IN1,ICU_CMP_INSEL_"
- `aliases`: []

### MACRO-ICU-CMP-MOD
- `name`: "ICU_CMP_MOD"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD`."
- `anchors`:
  - `p99`: "ICU_CMP_MOD_DISABLE,ICU_CMP_MOD_CONTINUOUS,ICU_CMP_MOD"
- `aliases`: []

### MACRO-ICU-CMP-MOD-CONTINUOUS
- `name`: "ICU_CMP_MOD_CONTINUOUS"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_CONTINUOUS`."
- `anchors`:
  - `p99`: "ICU_CMP_MOD_DISABLE,ICU_CMP_MOD_CONTINUOUS,ICU_CMP_MOD"
- `aliases`: []

### MACRO-ICU-CMP-MOD-DISABLE
- `name`: "ICU_CMP_MOD_DISABLE"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_DISABLE`."
- `anchors`:
  - `p99`: "ICU_CMP_MOD_DISABLE,ICU_CMP_MOD_CONTINUOUS,ICU_CMP_MOD"
- `aliases`: []

### MACRO-ICU-CMP-MOD-SAMPLE
- `name`: "ICU_CMP_MOD_SAMPLE"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_SAMPLE`."
- `anchors`:
  - `p99`: "_SAMPLE_NONFILTER_EXTCLK,ICU_CMP_MOD_SAMPLE_NONFILTER_IN"
- `aliases`: []

### MACRO-ICU-CMP-MOD-SAMPLE-FILTER-EXTCLK
- `name`: "ICU_CMP_MOD_SAMPLE_FILTER_EXTCLK"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_SAMPLE_FILTER_EXTCLK`."
- `anchors`:
  - `p99`: "TCLK,ICU_CMP_MOD_SAMPLE_FILTER_EXTCLK,ICU_CMP_MOD_SAMPLE"
- `aliases`: []

### MACRO-ICU-CMP-MOD-SAMPLE-NONFILTER-IN
- `name`: "ICU_CMP_MOD_SAMPLE_NONFILTER_IN"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_SAMPLE_NONFILTER_IN`."
- `anchors`:
  - `p99`: "_SAMPLE_NONFILTER_EXTCLK,ICU_CMP_MOD_SAMPLE_NONFILTER_IN"
- `aliases`: []

### MACRO-ICU-CMP-MOD-WINDOW
- `name`: "ICU_CMP_MOD_WINDOW"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_WINDOW`."
- `anchors`:
  - `p99`: "_FILTER_INTCLK,ICU_CMP_MOD_WINDOW,ICU_CMP_MOD_WINDOW_RE"
- `aliases`: []

### MACRO-ICU-CMP-MOD-WINDOW-FILTER
- `name`: "ICU_CMP_MOD_WINDOW_FILTER"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_WINDOW_FILTER`."
- `anchors`:
  - `p99`: "SAMPLE,ICU_CMP_MOD_WINDOW_FILTER"
- `aliases`: []

### MACRO-ICU-CMP-MOD-WINDOW-RE
- `name`: "ICU_CMP_MOD_WINDOW_RE"
- `type`: `macro`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "macro index entry for `ICU_CMP_MOD_WINDOW_RE`."
- `anchors`:
  - `p99`: "_FILTER_INTCLK,ICU_CMP_MOD_WINDOW,ICU_CMP_MOD_WINDOW_RE"
- `aliases`: []

### MACRO-ICU-CMP-RISINGEDGE
- `name`: "ICU_CMP_RISINGEDGE"
- `type`: `macro`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "macro index entry for `ICU_CMP_RISINGEDGE`."
- `anchors`:
  - `p104`: "ICU_CMP_RISINGEDGE,ICU_CMP_FALLINGEDGE,ICU_CMP_BOTHEDGES"
- `aliases`: []

### MACRO-ICU-CMP-WINOUT
- `name`: "ICU_CMP_WINOUT"
- `type`: `macro`
- `primary_page`: `103`
- `physical_pages`: `103`
- `brief`: "macro index entry for `ICU_CMP_WINOUT`."
- `anchors`:
  - `p103`: "ICU_CMP_FILTEROUT,ICU_CMP_WINOUT"
- `aliases`: []

### MACRO-ICU-DMA-CHANNEL-STATE-ACTIVE
- `name`: "ICU_DMA_CHANNEL_STATE_ACTIVE"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `ICU_DMA_CHANNEL_STATE_ACTIVE`."
- `anchors`:
  - `p17`: "ICU_DMA_CHANNEL_STATE_ACTIVE ="
- `aliases`: []

### MACRO-ICU-DMA-CHANNEL-STATE-IDLE
- `name`: "ICU_DMA_CHANNEL_STATE_IDLE"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `ICU_DMA_CHANNEL_STATE_IDLE`."
- `anchors`:
  - `p17`: "ICU_DMA_CHANNEL_STATE_IDLE = 0"
- `aliases`: []

### MACRO-ICU-FTU-CORE-CLK
- `name`: "ICU_FTU_CORE_CLK"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_CORE_CLK`."
- `anchors`:
  - `p93`: "ICU_FTU_CORE_CLK,"
- `aliases`: []

### MACRO-ICU-FTU-EXTERNAL-CLK0
- `name`: "ICU_FTU_EXTERNAL_CLK0"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_EXTERNAL_CLK0`."
- `anchors`:
  - `p93`: "ICU_FTU_EXTERNAL_CLK0,"
- `aliases`: []

### MACRO-ICU-FTU-EXTERNAL-CLK1
- `name`: "ICU_FTU_EXTERNAL_CLK1"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_EXTERNAL_CLK1`."
- `anchors`:
  - `p93`: "ICU_FTU_EXTERNAL_CLK1, ICU_FTU_EXTERNAL_CLK2"
- `aliases`: []

### MACRO-ICU-FTU-EXTERNAL-CLK2
- `name`: "ICU_FTU_EXTERNAL_CLK2"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_EXTERNAL_CLK2`."
- `anchors`:
  - `p93`: "ICU_FTU_EXTERNAL_CLK1, ICU_FTU_EXTERNAL_CLK2"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-1
- `name`: "ICU_FTU_FLT_DIV_1"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_1`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_1,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-10
- `name`: "ICU_FTU_FLT_DIV_10"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_10`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_10,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-11
- `name`: "ICU_FTU_FLT_DIV_11"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_11`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_11,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-12
- `name`: "ICU_FTU_FLT_DIV_12"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_12`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_12,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-13
- `name`: "ICU_FTU_FLT_DIV_13"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_13`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_13,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-14
- `name`: "ICU_FTU_FLT_DIV_14"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_14`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_14,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-15
- `name`: "ICU_FTU_FLT_DIV_15"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_15`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_15,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-16
- `name`: "ICU_FTU_FLT_DIV_16"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_16`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_16"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-2
- `name`: "ICU_FTU_FLT_DIV_2"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_2`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_2,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-3
- `name`: "ICU_FTU_FLT_DIV_3"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_3`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_3,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-4
- `name`: "ICU_FTU_FLT_DIV_4"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_4`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_4,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-5
- `name`: "ICU_FTU_FLT_DIV_5"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_5`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_5,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-6
- `name`: "ICU_FTU_FLT_DIV_6"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_6`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_6,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-7
- `name`: "ICU_FTU_FLT_DIV_7"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_7`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_7,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-8
- `name`: "ICU_FTU_FLT_DIV_8"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_8`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_8,"
- `aliases`: []

### MACRO-ICU-FTU-FLT-DIV-9
- `name`: "ICU_FTU_FLT_DIV_9"
- `type`: `macro`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "macro index entry for `ICU_FTU_FLT_DIV_9`."
- `anchors`:
  - `p94`: "ICU_FTU_FLT_DIV_9,"
- `aliases`: []

### MACRO-ICU-FTU-GTBGROUPMAXNB
- `name`: "ICU_FTU_GTBGROUPMAXNB"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_FTU_GTBGROUPMAXNB`."
- `anchors`:
  - `p14`: "ICU_FTU_GTBGROUPMAXNB"
- `aliases`: []

### MACRO-ICU-FTU-GTB-SUPPORT
- `name`: "ICU_FTU_GTB_SUPPORT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_FTU_GTB_SUPPORT`."
- `anchors`:
  - `p14`: "ICU_FTU_GTB_SUPPORT"
- `aliases`: []

### MACRO-ICU-FTU-INPUT-FILTER-COUNT
- `name`: "ICU_FTU_INPUT_FILTER_COUNT"
- `type`: `macro`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "macro index entry for `ICU_FTU_INPUT_FILTER_COUNT`."
- `anchors`:
  - `p20`: "const uint8 aInputFilter [ICU_FTU_INPUT_FILTER_COUNT]"
- `aliases`: []

### MACRO-ICU-FTU-PCC-CLK
- `name`: "ICU_FTU_PCC_CLK"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PCC_CLK`."
- `anchors`:
  - `p93`: "ICU_FTU_PCC_CLK,"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-1
- `name`: "ICU_FTU_PRESCALER_DIV_1"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_1`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_1,"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-128
- `name`: "ICU_FTU_PRESCALER_DIV_128"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_128`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_64, ICU_FTU_PRESCALER_DIV_128"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-16
- `name`: "ICU_FTU_PRESCALER_DIV_16"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_16`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_16,"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-2
- `name`: "ICU_FTU_PRESCALER_DIV_2"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_2`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_2,"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-32
- `name`: "ICU_FTU_PRESCALER_DIV_32"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_32`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_32,"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-4
- `name`: "ICU_FTU_PRESCALER_DIV_4"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_4`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_4,"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-64
- `name`: "ICU_FTU_PRESCALER_DIV_64"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_64`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_64, ICU_FTU_PRESCALER_DIV_128"
- `aliases`: []

### MACRO-ICU-FTU-PRESCALER-DIV-8
- `name`: "ICU_FTU_PRESCALER_DIV_8"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `ICU_FTU_PRESCALER_DIV_8`."
- `anchors`:
  - `p93`: "ICU_FTU_PRESCALER_DIV_8,"
- `aliases`: []

### MACRO-ICU-HW-CHANNEL-COUNT
- `name`: "ICU_HW_CHANNEL_COUNT"
- `type`: `macro`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "macro index entry for `ICU_HW_CHANNEL_COUNT`."
- `anchors`:
  - `p18`: "const Icu_ChannelType (*pIcuHwMap)[ICU_HW_CHANNEL_COUNT]"
- `aliases`: []

### MACRO-ICU-INPUT-HIGH
- `name`: "ICU_INPUT_HIGH"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `ICU_INPUT_HIGH`."
- `anchors`:
  - `p15`: "ICU_INPUT_HIGH = 1"
- `aliases`: []

### MACRO-ICU-INPUT-LOW
- `name`: "ICU_INPUT_LOW"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `ICU_INPUT_LOW`."
- `anchors`:
  - `p15`: "ICU_INPUT_LOW = 0"
- `aliases`: []

### MACRO-MUX-IN2
- `name`: "MUX_IN2"
- `type`: `macro`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "macro index entry for `MUX_IN2`."
- `anchors`:
  - `p100`: "MUX_IN2,ICU_CMP_INSEL_MUX_IN3,ICU_CMP_INSEL_MUX_IN4,ICU_CM"
- `aliases`: []

### MACRO-PORT-G
- `name`: "PORT_G"
- `type`: `macro`
- `primary_page`: `88`
- `physical_pages`: `88`
- `brief`: "macro index entry for `PORT_G`."
- `anchors`:
  - `p88`: "PORT_E,PORT_F,PORT_G,PORT_H,PORT_I,AONTIMER,CMP0~2"
- `aliases`: []

### MACRO-CU-CMP-HYSTCTRL-3
- `name`: "CU_CMP_HYSTCTRL_3"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `CU_CMP_HYSTCTRL_3`."
- `anchors`:
  - `p101`: "CU_CMP_HYSTCTRL_3"
- `aliases`: []

### MACRO-ICU-CMP-FILTERCNT
- `name`: "ICU_CMP_FILTERCNT_"
- `type`: `macro`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "macro index entry for `ICU_CMP_FILTERCNT_`."
- `anchors`:
  - `p101`: "ICU_CMP_FILTERCNT_0,ICU_CMP_FILTERCNT_1,ICU_CMP_FILTERCNT_"
- `aliases`: []

### MACRO-TU-7
- `name`: "TU_7"
- `type`: `macro`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "macro index entry for `TU_7`."
- `anchors`:
  - `p93`: "FTU_0, FTU_1, FTU_2, FTU_3, FTU_4, FTU_5, FTU_6, FTU_7, FTU_8,"
- `aliases`: []

### TYPE-ICU-HWTYPE
- `name`: "Icu_HwType"
- `type`: `type`
- `primary_page`: `34`
- `physical_pages`: `34,35,36,37,38,39,40,41,42,43,44,45,62,64,65`
- `brief`: "type index entry for `Icu_HwType`."
- `anchors`:
  - `p34`: "void Icu_HW_ChannelDeInit ( Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p35`: "void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
  - `p36`: "void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p37`: "void Icu_HW_SetActivationCondition(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType"
  - `p38`: "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
- `aliases`: []

### TYPE-ICU-ACTIVATIONTYPE
- `name`: "Icu_ActivationType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,18,25,35,36,37,39,41,42,62,64,65`
- `brief`: "type index entry for `Icu_ActivationType`."
- `anchors`:
  - `p15`: "Icu_ActivationType"
  - `p18`: "Icu_ActivationType eActivationEdge"
  - `p25`: "void Icu_SetActivationCondition ( Icu_ChannelType Channel, Icu_ActivationType Activation )"
  - `p35`: "void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_ActivationType eActivationEdge)"
  - `p36`: "Icu_ActivationType"
- `aliases`: []

### TYPE-ICU-HWCONFIGTYPE
- `name`: "Icu_HwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,18,19,32,34,60,61`
- `brief`: "type index entry for `Icu_HwConfigType`."
- `anchors`:
  - `p3`: "Icu_HwConfigType ..........................................................................................................................…"
  - `p18`: "const Icu_HwConfigType tHwConfig"
  - `p19`: "Icu_HwConfigType"
  - `p32`: "void Icu_HW_ModulesInit ( const Icu_HwConfigType * pHwConfig )"
  - `p34`: "void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig)"
- `aliases`: []

### TYPE-ICU-AONTIMERINSTANCETYPE
- `name`: "Icu_AontimerInstanceType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,55,56,57,58,59`
- `brief`: "type index entry for `Icu_AontimerInstanceType`."
- `anchors`:
  - `p17`: "const Icu_AontimerInstanceType eAontimerInstance"
  - `p55`: "Icu_AontimerInstanceType"
  - `p56`: "void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)"
  - `p57`: "Icu_AontimerInstanceType"
  - `p58`: "Icu_AontimerInstanceType"
- `aliases`: []

### TYPE-ICU-CMPINSTANCETYPE
- `name`: "Icu_CmpInstanceType"
- `type`: `type`
- `primary_page`: `60`
- `physical_pages`: `60,61,62,63,64,65`
- `brief`: "type index entry for `Icu_CmpInstanceType`."
- `anchors`:
  - `p60`: "void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)"
  - `p61`: "boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
  - `p62`: "Icu_CmpInstanceType"
  - `p63`: "void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)"
  - `p64`: "void Icu_Cmp_SetSleepMode (const Icu_CmpInstanceType eCmpInstance)"
- `aliases`: []

### TYPE-ICU-VALUETYPE
- `name`: "Icu_ValueType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,19,27,31,45,51`
- `brief`: "type index entry for `Icu_ValueType`."
- `anchors`:
  - `p17`: "typedef uint32 Icu_ValueType"
  - `p19`: "Icu_ValueType ActiveTime"
  - `p27`: "void Icu_StartTimestamp ( Icu_ChannelType Channel, Icu_ValueType * BufferPtr, uint16 BufferSize, uint16"
  - `p31`: "Icu_ValueType Icu_GetTimeElapsed ( Icu_ChannelType Channel )"
  - `p45`: "Icu_ValueType Icu_HW_GetOverflowValue (Icu_HwType eHwType)"
- `aliases`: []

### TYPE-ICU-FTUINSTANCETYPE
- `name`: "Icu_FtuInstanceType"
- `type`: `type`
- `primary_page`: `47`
- `physical_pages`: `47,48,49,50,51`
- `brief`: "type index entry for `Icu_FtuInstanceType`."
- `anchors`:
  - `p47`: "void Icu_Ftu_ChannelInit ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
  - `p48`: "void Icu_Ftu_DeInit ( const Icu_FtuInstanceType eFtuInstance )"
  - `p49`: "void Icu_Ftu_SetNormalMode ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel, const"
  - `p50`: "boolean Icu_Ftu_GetInputState ( const Icu_FtuInstanceType eFtuInstance, const uint8 u8Channel )"
  - `p51`: "Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)"
- `aliases`: []

### TYPE-ICU-INPUTLEVELTYPE
- `name`: "Icu_InputLevelType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,31,45,46,64`
- `brief`: "type index entry for `Icu_InputLevelType`."
- `anchors`:
  - `p15`: "Icu_InputLevelType"
  - `p31`: "Icu_InputLevelType"
  - `p45`: "boolean Icu_HW_GetInputLevel (Icu_HwType eHwType,uint32 u32ChannelOfHw, Icu_InputLevelType *pLevel)"
  - `p46`: "void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
  - `p64`: "boolean Icu_HW_GetInputLevel(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_InputLevelType"
- `aliases`: []

### TYPE-ICU-EDGENUMBERTYPE
- `name`: "Icu_EdgeNumberType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,30,40,41,56`
- `brief`: "type index entry for `Icu_EdgeNumberType`."
- `anchors`:
  - `p17`: "typedef uint16 Icu_EdgeNumberType"
  - `p30`: "Icu_EdgeNumberType Icu_GetEdgeNumbers ( Icu_ChannelType Channel )"
  - `p40`: "boolean Icu_HW_GetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw, Icu_EdgeNumberType"
  - `p41`: "Icu_EdgeNumberType Icu_GetEdgeNumbers()"
  - `p56`: "Icu_EdgeNumberType Icu_Aontimer_GetEdgeNumbers(const Icu_AontimerInstanceType eInstance)"
- `aliases`: []

### TYPE-ICU-INPUTSTATETYPE
- `name`: "Icu_InputStateType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,26,38,39,62`
- `brief`: "type index entry for `Icu_InputStateType`."
- `anchors`:
  - `p15`: "Icu_InputStateType"
  - `p26`: "Icu_InputStateType Icu_GetInputState ( Icu_ChannelType Channel )"
  - `p38`: "Icu_InputStateType Icu_HW_GetInputState(Icu_HwType eHwType, uint32 u32ChannelOfHw)"
  - `p39`: "Icu_InputStateType Icu_GetInputState()"
  - `p62`: "Icu_InputStateType"
- `aliases`: []

### TYPE-ICU-PORTINSTANCETYPE
- `name`: "Icu_PortInstanceType"
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: `20,52,53,54`
- `brief`: "type index entry for `Icu_PortInstanceType`."
- `anchors`:
  - `p20`: "const Icu_PortInstanceType ePortInstance"
  - `p52`: "void Icu_Port_Init(const Icu_PortInstanceType ePortInstance)"
  - `p53`: "void Icu_Port_ChannelStart ( const Icu_PortInstanceType ePortInstance, const uint8 u8Channel, const"
  - `p54`: "boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance, const uint8 u8Channel)"
- `aliases`: []

### TYPE-ICU-CMPOUTPOLARITYTYPE
- `name`: "ICU_CmpOutPolarityType"
- `type`: `type`
- `primary_page`: `61`
- `physical_pages`: `61,62,63,65`
- `brief`: "type index entry for `ICU_CmpOutPolarityType`."
- `anchors`:
  - `p61`: "boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType eCmpInstance,const ICU_CmpOutPolarityType"
  - `p62`: "ICU_CmpOutPolarityType ePolarity)"
  - `p63`: "void Icu_Cmp_SetNormalMode (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
  - `p65`: "void Icu_Cmp_EnableEdgeCount (const Icu_CmpInstanceType eCmpInstance, const ICU_CmpOutPolarityType"
- `aliases`: []

### TYPE-ICU-AONTIMERPULSEPOLARITYTYPE
- `name`: "Icu_AontimerPulsePolarityType"
- `type`: `type`
- `primary_page`: `55`
- `physical_pages`: `55,57,58`
- `brief`: "type index entry for `Icu_AontimerPulsePolarityType`."
- `anchors`:
  - `p55`: "Icu_AontimerPulsePolarityType ePolarity)"
  - `p57`: "Icu_AontimerPulsePolarityType ePolarity)"
  - `p58`: "Icu_AontimerPulsePolarityType ePolarity)"
- `aliases`: []

### TYPE-ICU-FTUINPUTCAPTURETYPE
- `name`: "Icu_FtuInputCaptureType"
- `type`: `type`
- `primary_page`: `47`
- `physical_pages`: `47,49,50`
- `brief`: "type index entry for `Icu_FtuInputCaptureType`."
- `anchors`:
  - `p47`: "Icu_FtuInputCaptureType eActivationEdge )"
  - `p49`: "Icu_FtuInputCaptureType eActivationEdge)"
  - `p50`: "Icu_FtuInputCaptureType eActivationEdge )"
- `aliases`: []

### TYPE-ICU-CONFIGTYPE
- `name`: "Icu_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,18,21`
- `brief`: "type index entry for `Icu_ConfigType`."
- `anchors`:
  - `p3`: "Icu_ConfigType ............................................................................................................................…"
  - `p18`: "Icu_ConfigType"
  - `p21`: "void Icu_Init ( const Icu_ConfigType * ConfigPtr )"
- `aliases`: []

### TYPE-ICU-DUTYCYCLETYPE
- `name`: "Icu_DutyCycleType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,19,31`
- `brief`: "type index entry for `Icu_DutyCycleType`."
- `anchors`:
  - `p3`: "Icu_DutyCycleType .........................................................................................................................…"
  - `p19`: "Icu_DutyCycleType"
  - `p31`: "void Icu_GetDutyCycleValues ( Icu_ChannelType Channel, Icu_DutyCycleType * DutyCycleValues )"
- `aliases`: []

### TYPE-ICU-AONTIMERHWCONFIGTYPE
- `name`: "Icu_AontimerHwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17,19`
- `brief`: "type index entry for `Icu_AontimerHwConfigType`."
- `anchors`:
  - `p3`: "Icu_AontimerHwConfigType ..................................................................................................................…"
  - `p17`: "Icu_AontimerHwConfigType"
  - `p19`: "const Icu_AontimerHwConfigType *pAontimerHwConfig"
- `aliases`: []

### TYPE-ICU-PORT-HWCONFIGTYPE
- `name`: "Icu_Port_HwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,19,20`
- `brief`: "type index entry for `Icu_Port_HwConfigType`."
- `anchors`:
  - `p3`: "Icu_Port_HwConfigType .....................................................................................................................…"
  - `p19`: "const Icu_Port_HwConfigType *pPortHwConfig"
  - `p20`: "Icu_Port_HwConfigType"
- `aliases`: []

### TYPE-ICU-NOTIFYTYPE
- `name`: "Icu_NotifyType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,18,19`
- `brief`: "type index entry for `Icu_NotifyType`."
- `anchors`:
  - `p17`: "typedef void (*Icu_NotifyType)(void)"
  - `p18`: "Icu_NotifyType pChannelNotification"
  - `p19`: "Icu_NotifyType pOverflowNotification"
- `aliases`: []

### TYPE-ICU-FTU-HWCONFIGTYPE
- `name`: "Icu_Ftu_HwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "type index entry for `Icu_Ftu_HwConfigType`."
- `anchors`:
  - `p3`: "Icu_Ftu_HwConfigType ......................................................................................................................…"
  - `p19`: "Icu_Ftu_HwConfigType"
- `aliases`: []

### TYPE-ICU-MODETYPE
- `name`: "Icu_ModeType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,23`
- `brief`: "type index entry for `Icu_ModeType`."
- `anchors`:
  - `p15`: "Icu_ModeType"
  - `p23`: "void Icu_SetMode ( Icu_ModeType Mode )"
- `aliases`: []

### TYPE-ICU-CMPHWCONFIGTYPE
- `name`: "Icu_CmpHwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `brief`: "type index entry for `Icu_CmpHwConfigType`."
- `anchors`:
  - `p3`: "2.6.11 Icu_CmpHwConfigType ................................................................................................................…"
  - `p20`: "Icu_CmpHwConfigType"
- `aliases`: []

### TYPE-ICU-INDEXTYPE
- `name`: "Icu_IndexType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,27`
- `brief`: "type index entry for `Icu_IndexType`."
- `anchors`:
  - `p17`: "typedef uint32 Icu_IndexType"
  - `p27`: "Icu_IndexType Icu_GetTimestampIndex ( Icu_ChannelType Channel )"
- `aliases`: []

### TYPE-ICU-MEASUREMENTMODETYPE
- `name`: "Icu_MeasurementModeType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,18`
- `brief`: "type index entry for `Icu_MeasurementModeType`."
- `anchors`:
  - `p16`: "Icu_MeasurementModeType"
  - `p18`: "Icu_MeasurementModeType eMode"
- `aliases`: []

### TYPE-ICU-HWCHANNELTYPE
- `name`: "Icu_HwChannelType"
- `type`: `type`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "type index entry for `Icu_HwChannelType`."
- `anchors`:
  - `p46`: "void Icu_ChanneInterruptCallback(Icu_HwChannelType tHwChannel,uint32 u32Value, Icu_InputLevelType"
- `aliases`: []

### TYPE-ICU-PORTINTCONFIGTYPE
- `name`: "Icu_PortIntConfigType"
- `type`: `type`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "type index entry for `Icu_PortIntConfigType`."
- `anchors`:
  - `p53`: "Icu_PortIntConfigType eIntConfig)"
- `aliases`: []

### TYPE-ECUM-WAKEUPSOURCETYPE
- `name`: "EcuM_WakeupSourceType"
- `type`: `type`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "type index entry for `EcuM_WakeupSourceType`."
- `anchors`:
  - `p25`: "void Icu_CheckWakeup ( EcuM_WakeupSourceType WakeupSource )"
- `aliases`: []

### TYPE-ICUCMPHYSTCTRLTYPE
- `name`: "IcuCmpHystCtrlType"
- `type`: `type`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "type index entry for `IcuCmpHystCtrlType`."
- `anchors`:
  - `p101`: "IcuCmpHystCtrlType"
- `aliases`: []

### TYPE-ICU-SIGNALMEASUREMENTPROPERTYTYPE
- `name`: "Icu_SignalMeasurementPropertyType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "type index entry for `Icu_SignalMeasurementPropertyType`."
- `anchors`:
  - `p16`: "Icu_SignalMeasurementPropertyType"
- `aliases`: []

### TYPE-ICU-TIMESTAMPBUFFERTYPE
- `name`: "Icu_TimestampBufferType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "type index entry for `Icu_TimestampBufferType`."
- `anchors`:
  - `p16`: "Icu_TimestampBufferType"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p32`: "void Icu_GetVersionInfo ( Std_VersionInfoType * versioninfo )"
- `aliases`: []

### TYPE-ICU-AONTIMERCLKSRCTYPE
- `name`: "Icu_AontimerClkSrcType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "type index entry for `Icu_AontimerClkSrcType`."
- `anchors`:
  - `p17`: "const Icu_AontimerClkSrcType eClkSrc"
- `aliases`: []

### TYPE-ICU-AONTIMERGLITCHFILTERTYPE
- `name`: "Icu_AontimerGlitchFilterType"
- `type`: `type`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "type index entry for `Icu_AontimerGlitchFilterType`."
- `anchors`:
  - `p18`: "const Icu_AontimerGlitchFilterType eGlitchFilter"
- `aliases`: []

### TYPE-ICU-AONTIMERPULSECLKSRCTYPE
- `name`: "Icu_AontimerPulseClkSrcType"
- `type`: `type`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "type index entry for `Icu_AontimerPulseClkSrcType`."
- `anchors`:
  - `p18`: "const Icu_AontimerPulseClkSrcType ePinSelect"
- `aliases`: []

### TYPE-ICU-FTUCLKSRCTYPE
- `name`: "Icu_FtuClkSrcType"
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "type index entry for `Icu_FtuClkSrcType`."
- `anchors`:
  - `p20`: "const Icu_FtuClkSrcType eClkSrc"
- `aliases`: []

### TYPE-ICU-FTUFILTERPRESCALERTYPE
- `name`: "Icu_FtuFilterPrescalerType"
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "type index entry for `Icu_FtuFilterPrescalerType`."
- `anchors`:
  - `p20`: "const Icu_FtuFilterPrescalerType efilterPrescaler"
- `aliases`: []

### TYPE-ICU-FTUPRESCALERTYPE
- `name`: "Icu_FtuPrescalerType"
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "type index entry for `Icu_FtuPrescalerType`."
- `anchors`:
  - `p20`: "const Icu_FtuPrescalerType ePrescaler"
- `aliases`: []

### FILE-ICU-H
- `name`: "Icu.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,6,8,21`
- `brief`: "file index entry for `Icu.h`."
- `anchors`:
  - `p3`: "Macros in Icu.h ...........................................................................................................................…"
  - `p6`: "Icu_Irq.c shall include Icu.h for the function which shall be called in the interrupt function and"
  - `p8`: "Macros in Icu.h"
  - `p21`: "Functions in Icu.h"
- `aliases`: []

### FILE-ICU-TYPES-H
- `name`: "Icu_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,15,17`
- `brief`: "file index entry for `Icu_Types.h`."
- `anchors`:
  - `p3`: "Enumerations in Icu_Types.h ...............................................................................................................…"
  - `p15`: "Enumerations in Icu_Types.h"
  - `p17`: "Typedefs in Icu_Types.h"
- `aliases`: []

### FILE-ICU-AONTIMER-H
- `name`: "Icu_Aontimer.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,54`
- `brief`: "file index entry for `Icu_Aontimer.h`."
- `anchors`:
  - `p3`: "Functions in Icu_Aontimer.h ...............................................................................................................…"
  - `p54`: "Functions in Icu_Aontimer.h"
- `aliases`: []

### FILE-ICU-CFG-H
- `name`: "Icu_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "file index entry for `Icu_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in Icu_Cfg.h .......................................................................................................................…"
  - `p11`: "Macros in Icu_Cfg.h"
- `aliases`: []

### FILE-ICU-CMP-H
- `name`: "Icu_Cmp.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,59`
- `brief`: "file index entry for `Icu_Cmp.h`."
- `anchors`:
  - `p4`: "Functions in Icu_Cmp.h ....................................................................................................................…"
  - `p59`: "Functions in Icu_Cmp.h"
- `aliases`: []

### FILE-ICU-FTU-H
- `name`: "Icu_Ftu.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,46`
- `brief`: "file index entry for `Icu_Ftu.h`."
- `anchors`:
  - `p3`: "Functions in Icu_Ftu.h ....................................................................................................................…"
  - `p46`: "Functions in Icu_Ftu.h"
- `aliases`: []

### FILE-ICU-HW-H
- `name`: "Icu_Hw.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,32`
- `brief`: "file index entry for `Icu_Hw.h`."
- `anchors`:
  - `p3`: "Functions in Icu_Hw.h .....................................................................................................................…"
  - `p32`: "Functions in Icu_Hw.h"
- `aliases`: []

### FILE-ICU-PORT-H
- `name`: "Icu_Port.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,52`
- `brief`: "file index entry for `Icu_Port.h`."
- `anchors`:
  - `p3`: "Functions in Icu_Port.h ...................................................................................................................…"
  - `p52`: "Functions in Icu_Port.h"
- `aliases`: []

### FILE-ICU-VERSION-H
- `name`: "Icu_Version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "file index entry for `Icu_Version.h`."
- `anchors`:
  - `p3`: "Macros in Icu_Version.h ...................................................................................................................…"
  - `p11`: "Macros in Icu_Version.h"
- `aliases`: []

### FILE-ICU-IRQ-C
- `name`: "Icu_Irq.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu_Irq.c`."
- `anchors`:
  - `p6`: "Icu_Irq.c shall include Icu.h for the function which shall be called in the interrupt function and"
- `aliases`: []

### FILE-ICU-CBK-H
- `name`: "Icu_Cbk.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu_Cbk.h`."
- `anchors`:
  - `p6`: "Icu.c shall include Icu_Cbk.h for pre-compile time configuration"
- `aliases`: []

### FILE-ICU-IRQ-H
- `name`: "Icu_Irq.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu_Irq.h`."
- `anchors`:
  - `p6`: "Icu_Irq.h for the declaration of interrupt functions."
- `aliases`: []

### FILE-ICU-C
- `name`: "Icu.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu.c`."
- `anchors`:
  - `p6`: "Icu.c shall include Icu_Cbk.h for pre-compile time configuration"
- `aliases`: []

### FILE-ICU-FTU-C
- `name`: "Icu_Ftu.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu_Ftu.c`."
- `anchors`:
  - `p6`: "Icu_Irq.c Icu_Irq.h is not created,interrupt function is located in Icu_Ftu.c Icu_Port.c and"
- `aliases`: []

### FILE-ICU-MEMMAP-H
- `name`: "Icu_MemMap.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu_MemMap.h`."
- `anchors`:
  - `p6`: "Icu_Irq.c shall include Icu_MemMap.h."
- `aliases`: []

### FILE-ICU-PORT-C
- `name`: "Icu_Port.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Icu_Port.c`."
- `anchors`:
  - `p6`: "Icu_Irq.c Icu_Irq.h is not created,interrupt function is located in Icu_Ftu.c Icu_Port.c and"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,5,87,88,89,90,91,92,95,96`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p4`: "AUTOSAR"
  - `p5`: "AUTOSAR"
  - `p87`: "AUTOSAR"
  - `p88`: "AUTOSAR"
  - `p89`: "AUTOSAR"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,10,12,14,28,29,42,43,44,50`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p6`: "Det"
  - `p10`: "Det"
  - `p12`: "Det"
  - `p14`: "Det"
  - `p28`: "Det"
- `aliases`: []

### TERM-ICU
- `name`: "ICU"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `ICU`."
- `anchors`:
  - `p1`: "ICU"
  - `p2`: "ICU"
  - `p3`: "ICU"
  - `p4`: "ICU"
  - `p5`: "ICU"
- `aliases`: []

### TERM-INPUT-CAPTURE-UNIT
- `name`: "Input Capture Unit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10,13,14,15,20,26,31,32,38`
- `brief`: "term index entry for `Input Capture Unit`."
- `anchors`:
  - `p9`: "Input Capture Unit"
  - `p10`: "Input Capture Unit"
  - `p13`: "Input Capture Unit"
  - `p14`: "Input Capture Unit"
  - `p15`: "Input Capture Unit"
- `aliases`: []

### TERM-ICUAONTMR
- `name`: "IcuAontmr"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,96,117`
- `brief`: "term index entry for `IcuAontmr`."
- `anchors`:
  - `p4`: "IcuAontmr .................................................................................................................................…"
  - `p96`: "IcuAontmr"
  - `p117`: "Add an object in the IcuAontmr tab."
- `aliases`: []

### TERM-ICUFTU
- `name`: "IcuFtu"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,92,115`
- `brief`: "term index entry for `IcuFtu`."
- `anchors`:
  - `p4`: "IcuFtu ....................................................................................................................................…"
  - `p92`: "IcuFtu"
  - `p115`: "Add an object in the IcuFtu tab."
- `aliases`: []

### TERM-ICUPORT
- `name`: "IcuPort"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,96,116`
- `brief`: "term index entry for `IcuPort`."
- `anchors`:
  - `p4`: "IcuPort ...................................................................................................................................…"
  - `p96`: "IcuPort"
  - `p116`: "Add an object in the IcuPort tab."
- `aliases`: []

### TERM-ICU-TYPES
- `name`: "Icu_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,15,17`
- `brief`: "term index entry for `Icu_Types`."
- `anchors`:
  - `p3`: "Enumerations in Icu_Types.h ...............................................................................................................…"
  - `p15`: "Enumerations in Icu_Types.h"
  - `p17`: "Typedefs in Icu_Types.h"
- `aliases`: []

### TERM-ICU-AONTIMER
- `name`: "Icu_Aontimer"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,6,54`
- `brief`: "term index entry for `Icu_Aontimer`."
- `anchors`:
  - `p3`: "Icu_AontimerHwConfigType ..................................................................................................................…"
  - `p6`: "Icu_Aontimer."
  - `p54`: "Functions in Icu_Aontimer.h"
- `aliases`: []

### TERM-ICU-FTU
- `name`: "Icu_Ftu"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,6,46`
- `brief`: "term index entry for `Icu_Ftu`."
- `anchors`:
  - `p3`: "Icu_Ftu_HwConfigType ......................................................................................................................…"
  - `p6`: "Icu_Irq.c Icu_Irq.h is not created,interrupt function is located in Icu_Ftu.c Icu_Port.c and"
  - `p46`: "Functions in Icu_Ftu.h"
- `aliases`: []

### TERM-ICU-PORT
- `name`: "Icu_Port"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,6,52`
- `brief`: "term index entry for `Icu_Port`."
- `anchors`:
  - `p3`: "Icu_Port_HwConfigType .....................................................................................................................…"
  - `p6`: "Icu_Irq.c Icu_Irq.h is not created,interrupt function is located in Icu_Ftu.c Icu_Port.c and"
  - `p52`: "Functions in Icu_Port.h"
- `aliases`: []

### TERM-ICUMEASUREMENTMODE
- `name`: "IcuMeasurementMode"
- `type`: `term`
- `primary_page`: `88`
- `physical_pages`: `88,120`
- `brief`: "term index entry for `IcuMeasurementMode`."
- `anchors`:
  - `p88`: "IcuMeasurementMode"
  - `p120`: "If IcuMeasurementMode is set to ICU_MODE_SIGNAL_EDGE_DETECT,IcuSignalEdgeDetection must be enabled."
- `aliases`: []

### TERM-ICUSIGNALMEASUREMENT
- `name`: "IcuSignalMeasurement"
- `type`: `term`
- `primary_page`: `90`
- `physical_pages`: `90,120`
- `brief`: "term index entry for `IcuSignalMeasurement`."
- `anchors`:
  - `p90`: "IcuSignalMeasurement"
  - `p120`: "If IcuMeasurementMode is set to ICU_MODE_SIGNAL_MEASUREMENT,IcuSignalMeasurement must be"
- `aliases`: []

### TERM-ICUSIGNALEDGEDETECTION
- `name`: "IcuSignalEdgeDetection"
- `type`: `term`
- `primary_page`: `89`
- `physical_pages`: `89,120`
- `brief`: "term index entry for `IcuSignalEdgeDetection`."
- `anchors`:
  - `p89`: "IcuSignalEdgeDetection"
  - `p120`: "If IcuMeasurementMode is set to ICU_MODE_SIGNAL_EDGE_DETECT,IcuSignalEdgeDetection must be enabled."
- `aliases`: []

### TERM-ICUCMP
- `name`: "IcuCmp"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,98`
- `brief`: "term index entry for `IcuCmp`."
- `anchors`:
  - `p4`: "IcuCmp ....................................................................................................................................…"
  - `p98`: "IcuCmp"
- `aliases`: []

### TERM-ICUNONAUTOSAR
- `name`: "IcuNonAUTOSAR"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,111`
- `brief`: "term index entry for `IcuNonAUTOSAR`."
- `anchors`:
  - `p4`: "3.2.10 IcuNonAUTOSAR ......................................................................................................................…"
  - `p111`: "IcuNonAUTOSAR"
- `aliases`: []

### TERM-ICUOPTIONALAPIS
- `name`: "IcuOptionalApis"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,108`
- `brief`: "term index entry for `IcuOptionalApis`."
- `anchors`:
  - `p4`: "IcuOptionalApis............................................................................................................................…"
  - `p108`: "IcuOptionalApis"
- `aliases`: []

### TERM-ICUSIGNALMEASUREMENTPROPERTY
- `name`: "IcuSignalMeasurementProperty"
- `type`: `term`
- `primary_page`: `90`
- `physical_pages`: `90,120`
- `brief`: "term index entry for `IcuSignalMeasurementProperty`."
- `anchors`:
  - `p90`: "IcuSignalMeasurementProperty"
  - `p120`: "enabled.And select the IcuSignalMeasurementProperty."
- `aliases`: []

### TERM-ICUTIMESTAMPMEASUREMENT
- `name`: "IcuTimestampMeasurement"
- `type`: `term`
- `primary_page`: `90`
- `physical_pages`: `90,120`
- `brief`: "term index entry for `IcuTimestampMeasurement`."
- `anchors`:
  - `p90`: "IcuTimestampMeasurement"
  - `p120`: "If IcuMeasurementMode is set to ICU_MODE_TIMESTAMP,IcuTimestampMeasurement must be enabled.Then"
- `aliases`: []

### TERM-ICUTIMESTAMPMEASUREMENTPROPERTY
- `name`: "IcuTimestampMeasurementProperty"
- `type`: `term`
- `primary_page`: `90`
- `physical_pages`: `90,120`
- `brief`: "term index entry for `IcuTimestampMeasurementProperty`."
- `anchors`:
  - `p90`: "IcuTimestampMeasurementProperty"
  - `p120`: "select the IcuTimestampMeasurementProperty and input the notification function name in"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12,106`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p12`: "Switches the Development Error Detection and Notification on or off."
  - `p106`: "Switches the Development Error Detection and Notification on or off."
- `aliases`: []

### TERM-ICU-CFG
- `name`: "Icu_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "term index entry for `Icu_Cfg`."
- `anchors`:
  - `p3`: "Macros in Icu_Cfg.h .......................................................................................................................…"
  - `p11`: "Macros in Icu_Cfg.h"
- `aliases`: []

### TERM-ICU-CMP
- `name`: "Icu_Cmp"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,59`
- `brief`: "term index entry for `Icu_Cmp`."
- `anchors`:
  - `p4`: "Functions in Icu_Cmp.h ....................................................................................................................…"
  - `p59`: "Functions in Icu_Cmp.h"
- `aliases`: []

### TERM-ICU-HW
- `name`: "Icu_Hw"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,32`
- `brief`: "term index entry for `Icu_Hw`."
- `anchors`:
  - `p3`: "Icu_HwConfigType ..........................................................................................................................…"
  - `p32`: "Functions in Icu_Hw.h"
- `aliases`: []

### TERM-ICU-STARTTIMESTAMP
- `name`: "Icu_StartTimeStamp"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,9`
- `brief`: "term index entry for `Icu_StartTimeStamp`."
- `anchors`:
  - `p6`: "Icu_StartTimeStamp"
  - `p9`: "API Icu_StartTimeStamp is called and the parameter NotifyInterval is invalid (e.g. NotifyInterval < 1)."
- `aliases`: []

### TERM-ICU-VERSION
- `name`: "Icu_Version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "term index entry for `Icu_Version`."
- `anchors`:
  - `p3`: "Macros in Icu_Version.h ...................................................................................................................…"
  - `p11`: "Macros in Icu_Version.h"
- `aliases`: []

### TERM-ICU-IRQ
- `name`: "Icu_Irq"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Icu_Irq`."
- `anchors`:
  - `p6`: "Icu_Irq.c shall include Icu.h for the function which shall be called in the interrupt function and"
- `aliases`: []

### TERM-ICUAONTMRMODULE
- `name`: "IcuAontmrModule"
- `type`: `term`
- `primary_page`: `97`
- `physical_pages`: `97`
- `brief`: "term index entry for `IcuAontmrModule`."
- `anchors`:
  - `p97`: "IcuAontmrModule"
- `aliases`: []

### TERM-ICUAONTMRPARTITIONREF
- `name`: "IcuAontmrPartitionRef"
- `type`: `term`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "term index entry for `IcuAontmrPartitionRef`."
- `anchors`:
  - `p98`: "IcuAontmrPartitionRef"
- `aliases`: []

### TERM-ICUAONTMRPINSELECT
- `name`: "IcuAontmrPinSelect"
- `type`: `term`
- `primary_page`: `98`
- `physical_pages`: `98`
- `brief`: "term index entry for `IcuAontmrPinSelect`."
- `anchors`:
  - `p98`: "IcuAontmrPinSelect"
- `aliases`: []

### TERM-ICUAONTMRPRESCALER
- `name`: "IcuAontmrPrescaler"
- `type`: `term`
- `primary_page`: `97`
- `physical_pages`: `97`
- `brief`: "term index entry for `IcuAontmrPrescaler`."
- `anchors`:
  - `p97`: "IcuAontmrPrescaler"
- `aliases`: []

### TERM-ICUCHOFMODULE
- `name`: "IcuChOfModule"
- `type`: `term`
- `primary_page`: `88`
- `physical_pages`: `88`
- `brief`: "term index entry for `IcuChOfModule`."
- `anchors`:
  - `p88`: "IcuChOfModule"
- `aliases`: []

### TERM-ICUCMPDACREFERENCE
- `name`: "IcuCmpDacReference"
- `type`: `term`
- `primary_page`: `103`
- `physical_pages`: `103`
- `brief`: "term index entry for `IcuCmpDacReference`."
- `anchors`:
  - `p103`: "IcuCmpDacReference"
- `aliases`: []

### TERM-ICUCMPFILTERCNT
- `name`: "IcuCmpFilterCnt"
- `type`: `term`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "term index entry for `IcuCmpFilterCnt`."
- `anchors`:
  - `p101`: "IcuCmpFilterCnt"
- `aliases`: []

### TERM-ICUCMPFILTERPERIOD
- `name`: "IcuCmpFilterPeriod"
- `type`: `term`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "term index entry for `IcuCmpFilterPeriod`."
- `anchors`:
  - `p101`: "IcuCmpFilterPeriod"
- `aliases`: []

### TERM-ICUCMPFUNCTIONMODE
- `name`: "IcuCmpFunctionMode"
- `type`: `term`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "term index entry for `IcuCmpFunctionMode`."
- `anchors`:
  - `p99`: "IcuCmpFunctionMode"
- `aliases`: []

### TERM-ICUCMPHIGHSPEEDMODE
- `name`: "IcuCmpHighSpeedMode"
- `type`: `term`
- `primary_page`: `102`
- `physical_pages`: `102`
- `brief`: "term index entry for `IcuCmpHighSpeedMode`."
- `anchors`:
  - `p102`: "IcuCmpHighSpeedMode"
- `aliases`: []

### TERM-ICUCMPINVSAMPLEENABLE
- `name`: "IcuCmpInvSampleEnable"
- `type`: `term`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "term index entry for `IcuCmpInvSampleEnable`."
- `anchors`:
  - `p104`: "IcuCmpInvSampleEnable"
- `aliases`: []

### TERM-ICUCMPNEGATIVEINPUTMUXSELECT
- `name`: "IcuCmpNegativeInputMuxSelect"
- `type`: `term`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "term index entry for `IcuCmpNegativeInputMuxSelect`."
- `anchors`:
  - `p100`: "IcuCmpNegativeInputMuxSelect"
- `aliases`: []

### TERM-ICUCMPNEGATIVEINPUTSRC
- `name`: "IcuCmpNegativeInputSrc"
- `type`: `term`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "term index entry for `IcuCmpNegativeInputSrc`."
- `anchors`:
  - `p100`: "IcuCmpNegativeInputSrc"
- `aliases`: []

### TERM-ICUCMPOCLOSEWINEVENT
- `name`: "IcuCmpOCloseWinEvent"
- `type`: `term`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "term index entry for `IcuCmpOCloseWinEvent`."
- `anchors`:
  - `p104`: "IcuCmpOCloseWinEvent"
- `aliases`: []

### TERM-ICUCMPOUTPINENABLE
- `name`: "IcuCmpOutPinEnable"
- `type`: `term`
- `primary_page`: `103`
- `physical_pages`: `103`
- `brief`: "term index entry for `IcuCmpOutPinEnable`."
- `anchors`:
  - `p103`: "IcuCmpOutPinEnable"
- `aliases`: []

### TERM-ICUCMPOUTWINUSERDEFLEVEL
- `name`: "IcuCmpOutWinUserDefLevel"
- `type`: `term`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "term index entry for `IcuCmpOutWinUserDefLevel`."
- `anchors`:
  - `p104`: "IcuCmpOutWinUserDefLevel"
- `aliases`: []

### TERM-ICUCMPPARTITIONREF
- `name`: "IcuCmpPartitionRef"
- `type`: `term`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "term index entry for `IcuCmpPartitionRef`."
- `anchors`:
  - `p104`: "IcuCmpPartitionRef"
- `aliases`: []

### TERM-ICUCMPPOSITIVEINPUTMUXSELECT
- `name`: "IcuCmpPositiveInputMuxSelect"
- `type`: `term`
- `primary_page`: `100`
- `physical_pages`: `100`
- `brief`: "term index entry for `IcuCmpPositiveInputMuxSelect`."
- `anchors`:
  - `p100`: "IcuCmpPositiveInputMuxSelect"
- `aliases`: []

### TERM-ICUCMPPOSITIVEINPUTSRC
- `name`: "IcuCmpPositiveInputSrc"
- `type`: `term`
- `primary_page`: `99`
- `physical_pages`: `99`
- `brief`: "term index entry for `IcuCmpPositiveInputSrc`."
- `anchors`:
  - `p99`: "IcuCmpPositiveInputSrc"
- `aliases`: []

### TERM-ICUCMPSTOPMODEENABLE
- `name`: "IcuCmpStopModeEnable"
- `type`: `term`
- `primary_page`: `101`
- `physical_pages`: `101`
- `brief`: "term index entry for `IcuCmpStopModeEnable`."
- `anchors`:
  - `p101`: "IcuCmpStopModeEnable"
- `aliases`: []

### TERM-ICUCMPWINOUTUSERDEF
- `name`: "IcuCmpWinOutUserDef"
- `type`: `term`
- `primary_page`: `103`
- `physical_pages`: `103`
- `brief`: "term index entry for `IcuCmpWinOutUserDef`."
- `anchors`:
  - `p103`: "IcuCmpWinOutUserDef"
- `aliases`: []

### TERM-ICUCMPOCLSEWINDOWENABLE
- `name`: "IcuCmpoClseWindowEnable"
- `type`: `term`
- `primary_page`: `104`
- `physical_pages`: `104`
- `brief`: "term index entry for `IcuCmpoClseWindowEnable`."
- `anchors`:
  - `p104`: "IcuCmpoClseWindowEnable"
- `aliases`: []

### TERM-ICUDEINITAPI
- `name`: "IcuDeInitApi"
- `type`: `term`
- `primary_page`: `108`
- `physical_pages`: `108`
- `brief`: "term index entry for `IcuDeInitApi`."
- `anchors`:
  - `p108`: "IcuDeInitApi"
- `aliases`: []

### TERM-ICUDEFAULTSTARTEDGE
- `name`: "IcuDefaultStartEdge"
- `type`: `term`
- `primary_page`: `88`
- `physical_pages`: `88`
- `brief`: "term index entry for `IcuDefaultStartEdge`."
- `anchors`:
  - `p88`: "IcuDefaultStartEdge"
- `aliases`: []

### TERM-ICUDEVERRORDETECT
- `name`: "IcuDevErrorDetect"
- `type`: `term`
- `primary_page`: `106`
- `physical_pages`: `106`
- `brief`: "term index entry for `IcuDevErrorDetect`."
- `anchors`:
  - `p106`: "IcuDevErrorDetect"
- `aliases`: []

### TERM-ICUECUCPARTITIONREF
- `name`: "IcuEcucPartitionRef"
- `type`: `term`
- `primary_page`: `107`
- `physical_pages`: `107`
- `brief`: "term index entry for `IcuEcucPartitionRef`."
- `anchors`:
  - `p107`: "IcuEcucPartitionRef"
- `aliases`: []

### TERM-ICUEDGECOUNTAPI
- `name`: "IcuEdgeCountApi"
- `type`: `term`
- `primary_page`: `109`
- `physical_pages`: `109`
- `brief`: "term index entry for `IcuEdgeCountApi`."
- `anchors`:
  - `p109`: "IcuEdgeCountApi"
- `aliases`: []

### TERM-ICUEDGEDETECTAPI
- `name`: "IcuEdgeDetectApi"
- `type`: `term`
- `primary_page`: `111`
- `physical_pages`: `111`
- `brief`: "term index entry for `IcuEdgeDetectApi`."
- `anchors`:
  - `p111`: "IcuEdgeDetectApi"
- `aliases`: []

### TERM-ICUFTUCH0FILTER
- `name`: "IcuFtuCh0Filter"
- `type`: `term`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "term index entry for `IcuFtuCh0Filter`."
- `anchors`:
  - `p94`: "IcuFtuCh0Filter"
- `aliases`: []

### TERM-ICUFTUCH1FILTER
- `name`: "IcuFtuCh1Filter"
- `type`: `term`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "term index entry for `IcuFtuCh1Filter`."
- `anchors`:
  - `p94`: "IcuFtuCh1Filter"
- `aliases`: []

### TERM-ICUFTUCH2FILTER
- `name`: "IcuFtuCh2Filter"
- `type`: `term`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "term index entry for `IcuFtuCh2Filter`."
- `anchors`:
  - `p94`: "IcuFtuCh2Filter"
- `aliases`: []

### TERM-ICUFTUCH3FILTER
- `name`: "IcuFtuCh3Filter"
- `type`: `term`
- `primary_page`: `95`
- `physical_pages`: `95`
- `brief`: "term index entry for `IcuFtuCh3Filter`."
- `anchors`:
  - `p95`: "IcuFtuCh3Filter"
- `aliases`: []

### TERM-ICUFTUCLOCKSOURCE
- `name`: "IcuFtuClockSource"
- `type`: `term`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "term index entry for `IcuFtuClockSource`."
- `anchors`:
  - `p93`: "IcuFtuClockSource"
- `aliases`: []

### TERM-ICUFTUFILTERPRESCALER
- `name`: "IcuFtuFilterPrescaler"
- `type`: `term`
- `primary_page`: `94`
- `physical_pages`: `94`
- `brief`: "term index entry for `IcuFtuFilterPrescaler`."
- `anchors`:
  - `p94`: "IcuFtuFilterPrescaler"
- `aliases`: []

### TERM-ICUFTUGTB
- `name`: "IcuFtuGtb"
- `type`: `term`
- `primary_page`: `95`
- `physical_pages`: `95`
- `brief`: "term index entry for `IcuFtuGtb`."
- `anchors`:
  - `p95`: "IcuFtuGtb"
- `aliases`: []

### TERM-ICUFTUGTBGROUP
- `name`: "IcuFtuGtbGroup"
- `type`: `term`
- `primary_page`: `108`
- `physical_pages`: `108`
- `brief`: "term index entry for `IcuFtuGtbGroup`."
- `anchors`:
  - `p108`: "IcuFtuGtbGroup"
- `aliases`: []

### TERM-ICUFTUGTBREF
- `name`: "IcuFtuGtbRef"
- `type`: `term`
- `primary_page`: `95`
- `physical_pages`: `95`
- `brief`: "term index entry for `IcuFtuGtbRef`."
- `anchors`:
  - `p95`: "IcuFtuGtbRef"
- `aliases`: []

### TERM-ICUFTUGTBSUPPORT
- `name`: "IcuFtuGtbSupport"
- `type`: `term`
- `primary_page`: `107`
- `physical_pages`: `107`
- `brief`: "term index entry for `IcuFtuGtbSupport`."
- `anchors`:
  - `p107`: "IcuFtuGtbSupport"
- `aliases`: []

### TERM-ICUFTUMODULE
- `name`: "IcuFtuModule"
- `type`: `term`
- `primary_page`: `92`
- `physical_pages`: `92`
- `brief`: "term index entry for `IcuFtuModule`."
- `anchors`:
  - `p92`: "IcuFtuModule"
- `aliases`: []

### TERM-ICUFTUPARTITIONREF
- `name`: "IcuFtuPartitionRef"
- `type`: `term`
- `primary_page`: `95`
- `physical_pages`: `95`
- `brief`: "term index entry for `IcuFtuPartitionRef`."
- `anchors`:
  - `p95`: "IcuFtuPartitionRef"
- `aliases`: []

### TERM-ICUFTUPERIOD
- `name`: "IcuFtuPeriod"
- `type`: `term`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "term index entry for `IcuFtuPeriod`."
- `anchors`:
  - `p93`: "IcuFtuPeriod"
- `aliases`: []

### TERM-ICUFTUPRESCALER
- `name`: "IcuFtuPrescaler"
- `type`: `term`
- `primary_page`: `93`
- `physical_pages`: `93`
- `brief`: "term index entry for `IcuFtuPrescaler`."
- `anchors`:
  - `p93`: "IcuFtuPrescaler"
- `aliases`: []

### TERM-ICUGETDUTYCYCLEVALUESAPI
- `name`: "IcuGetDutyCycleValuesApi"
- `type`: `term`
- `primary_page`: `109`
- `physical_pages`: `109`
- `brief`: "term index entry for `IcuGetDutyCycleValuesApi`."
- `anchors`:
  - `p109`: "IcuGetDutyCycleValuesApi"
- `aliases`: []

### TERM-ICUGETINPUTLEVELAPI
- `name`: "IcuGetInputLevelApi"
- `type`: `term`
- `primary_page`: `111`
- `physical_pages`: `111`
- `brief`: "term index entry for `IcuGetInputLevelApi`."
- `anchors`:
  - `p111`: "IcuGetInputLevelApi"
- `aliases`: []

### TERM-ICUGETINPUTSTATEAPI
- `name`: "IcuGetInputStateApi"
- `type`: `term`
- `primary_page`: `109`
- `physical_pages`: `109`
- `brief`: "term index entry for `IcuGetInputStateApi`."
- `anchors`:
  - `p109`: "IcuGetInputStateApi"
- `aliases`: []

### TERM-ICUGETTIMEELAPSEDAPI
- `name`: "IcuGetTimeElapsedApi"
- `type`: `term`
- `primary_page`: `109`
- `physical_pages`: `109`
- `brief`: "term index entry for `IcuGetTimeElapsedApi`."
- `anchors`:
  - `p109`: "IcuGetTimeElapsedApi"
- `aliases`: []

### TERM-ICUGETVERSIONINFOAPI
- `name`: "IcuGetVersionInfoApi"
- `type`: `term`
- `primary_page`: `110`
- `physical_pages`: `110`
- `brief`: "term index entry for `IcuGetVersionInfoApi`."
- `anchors`:
  - `p110`: "IcuGetVersionInfoApi"
- `aliases`: []

### TERM-ICUHWMODULE
- `name`: "IcuHwModule"
- `type`: `term`
- `primary_page`: `88`
- `physical_pages`: `88`
- `brief`: "term index entry for `IcuHwModule`."
- `anchors`:
  - `p88`: "IcuHwModule"
- `aliases`: []

### TERM-ICUINVCMPOUT
- `name`: "IcuInvCmpOut"
- `type`: `term`
- `primary_page`: `102`
- `physical_pages`: `102`
- `brief`: "term index entry for `IcuInvCmpOut`."
- `anchors`:
  - `p102`: "IcuInvCmpOut"
- `aliases`: []

### TERM-ICUKERNELECUCPARTITIONREF
- `name`: "IcuKernelEcucPartitionRef"
- `type`: `term`
- `primary_page`: `107`
- `physical_pages`: `107`
- `brief`: "term index entry for `IcuKernelEcucPartitionRef`."
- `anchors`:
  - `p107`: "IcuKernelEcucPartitionRef"
- `aliases`: []

### TERM-ICUMULTICORESUPPORT
- `name`: "IcuMultiCoreSupport"
- `type`: `term`
- `primary_page`: `106`
- `physical_pages`: `106`
- `brief`: "term index entry for `IcuMultiCoreSupport`."
- `anchors`:
  - `p106`: "IcuMultiCoreSupport"
- `aliases`: []

### TERM-ICUOVERFLOWTIMESTATISTICS
- `name`: "IcuOverflowTimeStatistics"
- `type`: `term`
- `primary_page`: `106`
- `physical_pages`: `106`
- `brief`: "term index entry for `IcuOverflowTimeStatistics`."
- `anchors`:
  - `p106`: "IcuOverflowTimeStatistics"
- `aliases`: []

### TERM-ICUPORTMODULE
- `name`: "IcuPortModule"
- `type`: `term`
- `primary_page`: `96`
- `physical_pages`: `96`
- `brief`: "term index entry for `IcuPortModule`."
- `anchors`:
  - `p96`: "IcuPortModule"
- `aliases`: []

### TERM-ICUPORTPARTITIONREF
- `name`: "IcuPortPartitionRef"
- `type`: `term`
- `primary_page`: `96`
- `physical_pages`: `96`
- `brief`: "term index entry for `IcuPortPartitionRef`."
- `anchors`:
  - `p96`: "IcuPortPartitionRef"
- `aliases`: []

### TERM-ICUSETMODEAPI
- `name`: "IcuSetModeApi"
- `type`: `term`
- `primary_page`: `110`
- `physical_pages`: `110`
- `brief`: "term index entry for `IcuSetModeApi`."
- `anchors`:
  - `p110`: "IcuSetModeApi"
- `aliases`: []

### TERM-ICUSIGNALMEASUREMENTAPI
- `name`: "IcuSignalMeasurementApi"
- `type`: `term`
- `primary_page`: `110`
- `physical_pages`: `110`
- `brief`: "term index entry for `IcuSignalMeasurementApi`."
- `anchors`:
  - `p110`: "IcuSignalMeasurementApi"
- `aliases`: []

### TERM-ICUTIMESTAMPDMASUPPORT
- `name`: "IcuTimeStampDmaSupport"
- `type`: `term`
- `primary_page`: `91`
- `physical_pages`: `91`
- `brief`: "term index entry for `IcuTimeStampDmaSupport`."
- `anchors`:
  - `p91`: "IcuTimeStampDmaSupport"
- `aliases`: []

### TERM-ICUTIMESTAMPDMAREF
- `name`: "IcuTimeStampdmaref"
- `type`: `term`
- `primary_page`: `91`
- `physical_pages`: `91`
- `brief`: "term index entry for `IcuTimeStampdmaref`."
- `anchors`:
  - `p91`: "IcuTimeStampdmaref"
- `aliases`: []

### TERM-ICUTIMESTAMPAPI
- `name`: "IcuTimestampApi"
- `type`: `term`
- `primary_page`: `110`
- `physical_pages`: `110`
- `brief`: "term index entry for `IcuTimestampApi`."
- `anchors`:
  - `p110`: "IcuTimestampApi"
- `aliases`: []

### TERM-ICUTSDMASUPPORT
- `name`: "IcuTsDmaSupport"
- `type`: `term`
- `primary_page`: `107`
- `physical_pages`: `107`
- `brief`: "term index entry for `IcuTsDmaSupport`."
- `anchors`:
  - `p107`: "IcuTsDmaSupport"
- `aliases`: []

### TERM-ICU-CBK
- `name`: "Icu_Cbk"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Icu_Cbk`."
- `anchors`:
  - `p6`: "Icu.c shall include Icu_Cbk.h for pre-compile time configuration"
- `aliases`: []

### TERM-AUTOSAR-SWS-ICUDRIVER
- `name`: "AUTOSAR_SWS_ICUDriver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `AUTOSAR_SWS_ICUDriver`."
- `anchors`:
  - `p5`: "detailed requirements, refer to the AUTOSAR_SWS_ICUDriver."
- `aliases`: []

### TERM-CMP-0
- `name`: "Cmp_0"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Cmp_0`."
- `anchors`:
  - `p5`: "Cmp provides 3 channels (for 7240 Only Cmp_0-Cmp_1) ."
- `aliases`: []

### TERM-CMP-1
- `name`: "Cmp_1"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Cmp_1`."
- `anchors`:
  - `p5`: "Cmp provides 3 channels (for 7240 Only Cmp_0-Cmp_1) ."
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p1`: "Dem"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p1`: "EB tresos"
- `aliases`: []

### TERM-FTU-0
- `name`: "Ftu_0"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ftu_0`."
- `anchors`:
  - `p5`: "FTU provides up to 96 channels (for 7240 Only Ftu_0-Ftu_7) ."
- `aliases`: []

### TERM-FTU-7
- `name`: "Ftu_7"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ftu_7`."
- `anchors`:
  - `p5`: "FTU provides up to 96 channels (for 7240 Only Ftu_0-Ftu_7) ."
- `aliases`: []

### TERM-ICUFTUGTBGROUP-0
- `name`: "IcuFtuGtbGroup_0"
- `type`: `term`
- `primary_page`: `95`
- `physical_pages`: `95`
- `brief`: "term index entry for `IcuFtuGtbGroup_0`."
- `anchors`:
  - `p95`: "/Icu/Icu/IcuGeneral/IcuFtuGtbGroup_0"
- `aliases`: []

### TERM-ICUTIMESTAMP
- `name`: "IcuTimestamp"
- `type`: `term`
- `primary_page`: `90`
- `physical_pages`: `90`
- `brief`: "term index entry for `IcuTimestamp`."
- `anchors`:
  - `p90`: "IcuTimestampMeasurement"
- `aliases`: []

### TERM-ICU-AONTIMERPRESCALERENABLETYPE
- `name`: "Icu_AontimerPrescalerEnableTYpe"
- `type`: `term`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "term index entry for `Icu_AontimerPrescalerEnableTYpe`."
- `anchors`:
  - `p18`: "const Icu_AontimerPrescalerEnableTYpe ePrescalerEnable"
- `aliases`: []

### TERM-ICU-HWTYP
- `name`: "Icu_HwTyp"
- `type`: `term`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "term index entry for `Icu_HwTyp`."
- `anchors`:
  - `p18`: "Icu_HwTyp eHwType"
- `aliases`: []

### TERM-ICU-MEMMAP
- `name`: "Icu_MemMap"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Icu_MemMap`."
- `anchors`:
  - `p6`: "Icu_Irq.c shall include Icu_MemMap.h."
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
- `aliases`: []

### TERM-PORT-A
- `name`: "Port_A"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_A`."
- `anchors`:
  - `p5`: "PORT provides up to 124 channels (for 7240 Only Port_A-Port_E) ."
- `aliases`: []

### TERM-PORT-E
- `name`: "Port_E"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_E`."
- `anchors`:
  - `p5`: "PORT provides up to 124 channels (for 7240 Only Port_A-Port_E) ."
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p1`: "Rte"
- `aliases`: []

## 9. Search Aliases

### ALIAS-ICU
- `canonical`: "ICU"
- `aliases`: ["Input Capture Unit", "输入捕获单元", "ICU module", "ICU driver", "ICU User Manual", "ICU Integration Manual", "Icu", "Icu_Init", "Icu_SetMode"]
- `related_ids`: ["TERM-ICU"]

### ALIAS-AUTOSAR
- `canonical`: "AUTOSAR"
- `aliases`: ["AUTOSAR Classic", "AUTOSAR CP", "AUTOSAR 4.6.0", "Classic Platform", "汽车开放系统架构"]
- `related_ids`: []

### ALIAS-MCAL
- `canonical`: "MCAL"
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "MCAL driver", "底层驱动"]
- `related_ids`: []

### ALIAS-EB-TRESOS
- `canonical`: "EB tresos"
- `aliases`: ["EB Tresos Studio", "Tresos", "EB tool", "EB plugins", "配置工具"]
- `related_ids`: []

### ALIAS-DET
- `canonical`: "DET"
- `aliases`: ["Default Error Tracer", "development error", "Det_ReportError", "开发错误检测"]
- `related_ids`: []

### ALIAS-DEM
- `canonical`: "DEM"
- `aliases`: ["Diagnostic Event Manager", "diagnostic error", "Dem event", "诊断事件管理"]
- `related_ids`: []

### ALIAS-RTE
- `canonical`: "RTE"
- `aliases`: ["Runtime Environment", "SchM", "exclusive area", "运行时环境"]
- `related_ids`: []

### ALIAS-FTU
- `canonical`: "FTU"
- `aliases`: ["Flexible Timer Unit", "Icu_Ftu", "edge detection", "timestamp", "edge counter"]
- `related_ids`: []

### ALIAS-AONTIMER
- `canonical`: "AONTIMER"
- `aliases`: ["Always-on Timer", "Icu_Aontimer", "always on timer"]
- `related_ids`: []

### ALIAS-ICU-CHANNEL
- `canonical`: "ICU channel"
- `aliases`: ["IcuChannel", "Icu_ChannelConfigType", "activation condition", "wakeup capability"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between ICU_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `ICU_User_Manual.pdf`
- `source_pdf_sha256`: `7d2f833f34dad1b5f10d8abe0e1628f83e338f014b3d27b82facc6efc1427827`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `276`
- `technical_missing_terms_added`: `7`
- `pages_with_added_terms`: `121`
- `supplemented_missing_token_count`: `276`
- `supplemented_missing_technical_token_count`: `7`
- `supplemented_physical_pages_count`: `121`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.3"
  - "1.0"
  - "3.0"
  - "Confidential"
  - "Flagchip"
  - "Initial"
  - "Proprietary"
  - "release"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "Flagchip"
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
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "measurement"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Some"
  - "values"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Init"
  - "Proprietary"
  - "failed"
  - "feasible"
  - "functionality"
  - "identifier"
  - "running"
  - "size"
  - "while"
  - "without"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "running"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "get"
  - "measurement"
  - "property"
  - "shift"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Pre"
  - "Proprietary"
  - "Switch"
  - "constants"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "counting"
  - "functionality"
  - "related"
  - "timestamping"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Doaanle"
  - "Flagchip"
  - "Group"
  - "Gtb"
  - "Names"
  - "Overflow"
  - "Proprietary"
  - "Removes"
  - "Switch"
  - "Symbolic"
  - "functionality"
  - "group"
  - "multicore"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Allow"
  - "Confidential"
  - "Flagchip"
  - "Power"
  - "Proprietary"
  - "available"
  - "capable"
  - "disabling"
  - "first"
  - "prepared"
  - "requests"
  - "required"
  - "tate"
  - "undefined"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Active"
  - "After"
  - "Confidential"
  - "Dma"
  - "Flagchip"
  - "Low"
  - "Proprietary"
  - "Signal"
  - "beginning"
  - "between"
  - "calculating"
  - "capturing"
  - "coherent"
  - "configurable"
  - "counting"
  - "cycle"
  - "detecting"
  - "different"
  - "duty"
  - "either"
  - "elapsed"
  - "end"
  - "falling"
  - "filled"
  - "just"
  - "measurement"
  - "measuring"
  - "needed"
  - "once"
  - "property"
  - "reaching"
  - "read"
  - "reading"
  - "restarts"
  - "that"
  - "times"
  - "values"
  - "various"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "Numeric"
  - "Proprietary"
  - "Width"
  - "elapsed"
  - "identifier"
  - "idle"
  - "measured"
  - "notify"
  - "ticks"
  - "u8ModuleCount"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Combined"
  - "Confidential"
  - "Data"
  - "Dma"
  - "Fields"
  - "Flagchip"
  - "Group"
  - "Gtb"
  - "Measurement"
  - "Multicore"
  - "Proprietary"
  - "Sub"
  - "array"
  - "bChannelDmaEn"
  - "map"
  - "measurement"
  - "pIcuChannelPartitionMappingPtr"
  - "pIcuFtuGroupPtr"
  - "process"
  - "property"
  - "translate"
  - "u32Param"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "PeriodTime"
  - "Point"
  - "Proprietary"
  - "modules"
  - "pFtuHwConfig"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "Proprietary"
  - "u16Period"
  - "u8ModuleCount"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "selected"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Numeric"
  - "Proprietary"
  - "available"
  - "capable"
  - "identifier"
  - "requests"
  - "single"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Checks"
  - "Confidential"
  - "Flagchip"
  - "Information"
  - "Numeric"
  - "Proprietary"
  - "calls"
  - "capable"
  - "checked"
  - "identifier"
  - "manager"
  - "supported"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "status"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Read"
  - "Size"
  - "Start"
  - "Timestamp"
  - "array"
  - "capturing"
  - "events"
  - "external"
  - "interval"
  - "measurement"
  - "placed"
  - "values"
  - "where"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Reset"
  - "counted"
  - "counting"
  - "zero"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "counting"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Read"
  - "Start"
  - "counted"
  - "measurement"
  - "signals"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Low"
  - "Proprietary"
  - "Read"
  - "Reads"
  - "Signal"
  - "coherent"
  - "current"
  - "elapsed"
  - "high"
  - "measurement"
  - "period"
  - "placed"
  - "results"
  - "signals"
  - "where"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Group"
  - "Gtb"
  - "Modules"
  - "Proprietary"
  - "Return"
  - "information"
  - "store"
  - "where"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Modules"
  - "Proprietary"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "normal"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Start"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Point"
  - "Proprietary"
  - "store"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Reset"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Start"
  - "measurement"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Overflow"
  - "Point"
  - "Proprietary"
  - "get"
  - "store"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Group"
  - "Gtb"
  - "Overflow"
  - "Proprietary"
  - "Tick"
  - "callback"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0049
- `physical_page`: `49`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "normal"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Start"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Proprietary"

### TEXTSUP-PAGE-0052
- `physical_page`: `52`
- `additional_text_terms`:
  - "Confidential"
  - "Deinitialize"
  - "Flagchip"
  - "Group"
  - "Gtb"
  - "Proprietary"
  - "port"

### TEXTSUP-PAGE-0053
- `physical_page`: `53`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "IRQC"
  - "Proprietary"
  - "Start"
  - "port"

### TEXTSUP-PAGE-0054
- `physical_page`: `54`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "port"

### TEXTSUP-PAGE-0055
- `physical_page`: `55`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0056
- `physical_page`: `56`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "Reset"

### TEXTSUP-PAGE-0057
- `physical_page`: `57`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Icu_AontimerInstanceTyp"
  - "Proprietary"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0058
- `physical_page`: `58`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "normal"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0059
- `physical_page`: `59`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0060
- `physical_page`: `60`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0061
- `physical_page`: `61`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "cmp"

### TEXTSUP-PAGE-0062
- `physical_page`: `62`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "cmp"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0063
- `physical_page`: `63`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "cmp"
  - "normal"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0064
- `physical_page`: `64`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "cmp"
  - "polarity"
  - "port"
  - "pulse"

### TEXTSUP-PAGE-0065
- `physical_page`: `65`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "polarity"
  - "pulse"

### TEXTSUP-PAGE-0066
- `physical_page`: `66`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0067
- `physical_page`: `67`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0068
- `physical_page`: `68`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0069
- `physical_page`: `69`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0070
- `physical_page`: `70`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0071
- `physical_page`: `71`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0072
- `physical_page`: `72`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0073
- `physical_page`: `73`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0074
- `physical_page`: `74`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0075
- `physical_page`: `75`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0076
- `physical_page`: `76`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0077
- `physical_page`: `77`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0078
- `physical_page`: `78`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0079
- `physical_page`: `79`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0080
- `physical_page`: `80`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0081
- `physical_page`: `81`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "after"
  - "capturing"
  - "example"
  - "exemplary"
  - "following"
  - "high"
  - "shows"
  - "while"

### TEXTSUP-PAGE-0082
- `physical_page`: `82`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0083
- `physical_page`: `83`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0084
- `physical_page`: `84`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

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
  - "Label"
  - "Proprietary"
  - "Variant"
  - "enumeration"
  - "multiple"

### TEXTSUP-PAGE-0087
- `physical_page`: `87`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "assigned"
  - "derived"
  - "individual"
  - "symbolic"

### TEXTSUP-PAGE-0088
- `physical_page`: `88`
- `additional_text_terms`:
  - "According"
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Proprietary"
  - "measurement"
  - "sub"

### TEXTSUP-PAGE-0089
- `physical_page`: `89`
- `additional_text_terms`:
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "Handler"
  - "Information"
  - "Overflow"
  - "Proprietary"
  - "about"
  - "measurement"
  - "parameters"

### TEXTSUP-PAGE-0090
- `physical_page`: `90`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Optional"
  - "Proprietary"
  - "Timestamp"
  - "could"
  - "handling"
  - "measured"
  - "measurement"
  - "parameters"
  - "property"
  - "that"

### TEXTSUP-PAGE-0091
- `physical_page`: `91`
- `additional_text_terms`:
  - "Confidential"
  - "Dma"
  - "DmaChannelConfig_0"
  - "DmaConfigSet"
  - "DmaHwUnit_0"
  - "FUNCTION"
  - "Flagchip"
  - "Implementation"
  - "Optional"
  - "Proprietary"
  - "SYMBOLIC"
  - "TimeStamp"
  - "acquired"
  - "capable"
  - "interval"
  - "needed"
  - "parameters"
  - "requested"
  - "switch"
  - "timestamps"
  - "transmit"
  - "way"

### TEXTSUP-PAGE-0092
- `physical_page`: `92`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "SYMBOLIC"

### TEXTSUP-PAGE-0093
- `physical_page`: `93`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Proprietary"
  - "period"
  - "prescaler"

### TEXTSUP-PAGE-0094
- `physical_page`: `94`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "zero"

### TEXTSUP-PAGE-0095
- `physical_page`: `95`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Switch"
  - "group"
  - "gtb"
  - "partitions"
  - "zero"

### TEXTSUP-PAGE-0096
- `physical_page`: `96`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "partitions"
  - "port"

### TEXTSUP-PAGE-0097
- `physical_page`: `97`
- `additional_text_terms`:
  - "Aontmr"
  - "CNR"
  - "Confidential"
  - "Counter"
  - "Flagchip"
  - "Glitch"
  - "PBYP"
  - "Proprietary"
  - "Pulse"
  - "When"
  - "clocks"
  - "directly"
  - "platform"
  - "prescaler"
  - "selected"

### TEXTSUP-PAGE-0098
- `physical_page`: `98`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "Counter"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Pulse"
  - "partitions"

### TEXTSUP-PAGE-0099
- `physical_page`: `99`
- `additional_text_terms`:
  - "CMP1"
  - "CMP2"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "positive"
  - "sourse"

### TEXTSUP-PAGE-0100
- `physical_page`: `100`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "mux"
  - "negative"
  - "positive"
  - "sourse"
  - "src"

### TEXTSUP-PAGE-0101
- `physical_page`: `101`
- `additional_text_terms`:
  - "Comparator"
  - "Confidential"
  - "Filter"
  - "Flagchip"
  - "Integer"
  - "Notice"
  - "Proprietary"
  - "STOP"
  - "Specifies"
  - "analog"
  - "bus"
  - "comparator"
  - "control"
  - "cycles"
  - "hard"
  - "hysteresis"
  - "may"
  - "output"
  - "period"
  - "sampling"
  - "some"

### TEXTSUP-PAGE-0102
- `physical_page`: `102`
- `additional_text_terms`:
  - "But"
  - "CMOOUT"
  - "Confidential"
  - "Flagchip"
  - "Highspeed"
  - "Increase"
  - "Proprietary"
  - "accelerate"
  - "analog"
  - "cmp"
  - "comparator"
  - "consumption"
  - "conversion"
  - "inverst"
  - "out"
  - "output"
  - "pin"
  - "speed"

### TEXTSUP-PAGE-0103
- `physical_page`: `103`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "cmp"
  - "output"
  - "sourse"

### TEXTSUP-PAGE-0104
- `physical_page`: `104`
- `additional_text_terms`:
  - "Confidential"
  - "During"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "caused"
  - "changes"
  - "close"
  - "invert"
  - "its"
  - "output"
  - "partitions"
  - "that"

### TEXTSUP-PAGE-0105
- `physical_page`: `105`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0106
- `physical_page`: `106`
- `additional_text_terms`:
  - "Confidential"
  - "Feature"
  - "Flagchip"
  - "MutilCore"
  - "Proprietary"
  - "Switch"
  - "general"
  - "parameters"

### TEXTSUP-PAGE-0107
- `physical_page`: `107`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Timestamp"
  - "True"
  - "assign"
  - "available"
  - "certain"
  - "core"
  - "don"
  - "kernel"
  - "make"
  - "mapped"
  - "multiple"
  - "one"
  - "partitions"
  - "subset"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0108
- `physical_page`: `108`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "LIST"
  - "Proprietary"
  - "configuring"
  - "group"
  - "gtb"
  - "optional"
  - "switches"

### TEXTSUP-PAGE-0109
- `physical_page`: `109`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "counting"
  - "functionality"
  - "related"

### TEXTSUP-PAGE-0110
- `physical_page`: `110`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "functionality"
  - "related"
  - "timestamping"

### TEXTSUP-PAGE-0111
- `physical_page`: `111`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0112
- `physical_page`: `112`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Major"
  - "Minor"
  - "Overflow"
  - "Proprietary"
  - "about"
  - "aggregated"
  - "functionality"
  - "information"
  - "modules"
  - "published"
  - "versions"

### TEXTSUP-PAGE-0113
- `physical_page`: `113`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Major"
  - "Minor"
  - "Patch"
  - "Proprietary"
  - "numbering"

### TEXTSUP-PAGE-0114
- `physical_page`: `114`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Proprietary"
  - "Vendor"
  - "dedicated"
  - "list"

### TEXTSUP-PAGE-0115
- `physical_page`: `115`
- `additional_text_terms`:
  - "Confidential"
  - "Each"
  - "Flagchip"
  - "Includes"
  - "Proprietary"
  - "different"
  - "period"
  - "prescaler"

### TEXTSUP-PAGE-0116
- `physical_page`: `116`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0117
- `physical_page`: `117`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "glitch"
  - "prescaler"

### TEXTSUP-PAGE-0118
- `physical_page`: `118`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "inputsrc"

### TEXTSUP-PAGE-0119
- `physical_page`: `119`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0120
- `physical_page`: `120`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "General"
  - "Proprietary"

### TEXTSUP-PAGE-0121
- `physical_page`: `121`
- `additional_text_terms`:
  - "Choose"
  - "Confidential"
  - "Each"
  - "Flagchip"
  - "Generate"
  - "Proprietary"
  - "files"

### TEXTSUP-PAGE-0122
- `physical_page`: `122`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122`
- `affected_ids`: []
- `message`: "PDF has an extractable text layer; OCR was not executed. Screenshots/diagrams were indexed but not OCR-transcribed."
- `recommended_action`: "Use the source PDF page for image-internal text or rerun generation with OCR if visual text must be indexed."

### WARN-0002
- `severity`: `medium`
- `category`: `outline`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "PDF has no internal outline/bookmarks; section index was generated from visible headings and table-of-contents text."
- `recommended_action`: "Use physical_page and anchors as authoritative locators; verify generated section ranges."

### WARN-0003
- `severity`: `low`
- `category`: `sparse_text`
- `physical_pages`: `1`
- `affected_ids`: []
- `message`: "Detected 1 sparse-text page(s), usually cover/blank/diagram-heavy pages."
- `recommended_action`: "Use page render/source PDF for visual confirmation."

### WARN-0004
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,23,24,25,26,27,28,29,30,31,32,33`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0028-001", "TBL-0029-001", "TBL-0030-001", "TBL-0031-001", "TBL-0032-001", "TBL-0033-001"]
- `message`: "79 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,16`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0016-001"]
- `message`: "3 generated visual anchors have no formal source figure number."
- `recommended_action`: "Use source PDF page to inspect vector graphics or screenshots."

### WARN-0006
- `severity`: `low`
- `category`: `revision_history`
- `physical_pages`: `2`
- `affected_ids`: []
- `message`: "Revision history dates are not strictly monotonic in displayed order; this appears to be a source-document issue."
- `recommended_action`: "Preserve source revision rows and verify with document owner if version chronology matters."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `122`
- `indexed_physical_pages_count`: `122`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `272`
- `table_index_count`: `79`
- `figure_index_count`: `227`
- `symbol_index_count`: `519`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `7d2f833f34dad1b5f10d8abe0e1628f83e338f014b3d27b82facc6efc1427827`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `276`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
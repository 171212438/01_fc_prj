---
manifest_schema_version: "1.1"
source_pdf: "OCU_User_Manual.pdf"
source_pdf_sha256: "2f3fdd10610499781ba163efcfacba149500bd2b80a5ab68f25e34ce9998b1ef"
source_pdf_size_bytes: 2793745
pdf_page_count: 54
generated_at: "2026-06-19T13:25:58Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: OCU_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `OCU_User_Manual.pdf`
- `source_pdf_sha256`: `2f3fdd10610499781ba163efcfacba149500bd2b80a5ab68f25e34ce9998b1ef`
- `source_pdf_size_bytes`: `2793745`
- `pdf_page_count`: `54`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx OCU User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T13:25:58Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `61`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL OCU module - User Manual"
- `module_scope`: "OCU driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 OCU Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["OCU", "Output Compare Unit Driver", "AUTOSAR_SWS_OCUDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Ocu", "FTU", "Ftu", "Ocu_Ftu", "OcuChannel"]
- `summary`: "This 54-page user manual indexes OCU content across source physical pages 1-54, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["OCU", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx OCU User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["OCU", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["OCU", "Ocu", "OcuConfigSet", "OcuChannel", "Ocu_Ftu", "Ocu_Ftu_Types", "FC7xxx", "Ocu_Cfg"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "OCU Introduction"
- `path`: "Chapter 1 OCU Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["OCU", "FTU", "channels", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_OCUDriver", "provides", "initializing"]
- `anchor`: "Chapter 1 OCU Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirement Tracing"
- `path`: "Chapter 1 OCU Introduction / 1.1 Requirement Tracing"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["OCU", "FTU", "channels", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_OCUDriver", "provides", "initializing"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 OCU Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["OCU", "FTU", "channels", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_OCUDriver", "provides", "initializing"]
- `anchor`: "1.2"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `31`
- `printed_page_start`: `6`
- `printed_page_end`: `31`
- `keywords`: ["channel", "OCU", "define", "const", "FTU", "Ocu", "void", "Ocu_ChannelType"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["OCU", "Ocu", "Rejected", "Requirement", "AUTOSAR", "Debugging", "Ocu_GetVersionInfo", "ADC"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["OCU", "DMA", "ECUC", "FC7xxx", "channel", "trigger", "SWS_Ocu_00168", "OcuKernelEcucPartitionRef"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `8`
- `physical_page_end`: `13`
- `printed_page_start`: `8`
- `printed_page_end`: `13`
- `keywords`: ["define", "OCU", "FTU", "Ocu", "Switch", "supported", "STD_ON", "indicate"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in Ocu.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["OCU", "define", "Ocu", "called", "channel", "Ocu_SetPinAction", "Ocu_Init", "FC7xxx"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in Ocu_Ftu_Types.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Ocu_Ftu_Types.h"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["OCU", "define", "FC7xxx", "OCU_ENABLENOTIFICATION_ID", "Ocu_EnableNotification", "Ocu_Ftu_Types", "OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET", "OCU_FTU_0"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in Ocu_Version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Ocu_Version.h"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OCU", "define", "FC7xxx", "OCU_FTU_CH_2", "OCU_FTU_CH_3", "OCU_FTU_CH_4", "OCU_FTU_CH_5", "OCU_FTU_CH_6"]
- `anchor`: "2.3.3"

### SEC-002-003-004
- `source_number`: `2.3.4`
- `title`: "Macros in Ocu_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `physical_page_start`: `11`
- `physical_page_end`: `13`
- `printed_page_start`: `11`
- `printed_page_end`: `13`
- `keywords`: ["define", "OCU", "FTU", "Switch", "STD_ON", "indicate", "supported", "STD_OFF"]
- `anchor`: "2.3.4"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["FTU", "OCU", "Ftu", "Ocu", "channel", "clock", "counter", "pin"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enumerations in Ocu.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Ocu.h"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Ocu_ChannelStatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Ocu.h / 2.4.1.1 Ocu_ChannelStatusType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.1.1"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enumerations in Ocu_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Ocu_Types.h"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.2"

### SEC-002-004-002-001
- `source_number`: `2.4.2.1`
- `title`: "Ocu_CountDirectionType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Ocu_Types.h / 2.4.2.1 Ocu_CountDirectionType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.2.1"

### SEC-002-004-002-002
- `source_number`: `2.4.2.2`
- `title`: "Ocu_PinStateType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Ocu_Types.h / 2.4.2.2 Ocu_PinStateType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.2.2"

### SEC-002-004-002-003
- `source_number`: `2.4.2.3`
- `title`: "Ocu_PinActionType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Ocu_Types.h / 2.4.2.3 Ocu_PinActionType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.2.3"

### SEC-002-004-002-004
- `source_number`: `2.4.2.4`
- `title`: "Ocu_ReturnType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Ocu_Types.h / 2.4.2.4 Ocu_ReturnType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values"]
- `anchor`: "2.4.2.4"

### SEC-002-004-003
- `source_number`: `2.4.3`
- `title`: "Enumerations in Ocu_Ftu_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["FTU", "OCU", "Ftu", "clock", "counter", "frequency", "divided", "OCU_FTU_DBG_COUNTER_STOP_CH"]
- `anchor`: "2.4.3"

### SEC-002-004-003-001
- `source_number`: `2.4.3.1`
- `title`: "OCU_FTU_DebugModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.1 OCU_FTU_DebugModeType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["FTU", "OCU", "Ftu", "clock", "counter", "frequency", "divided", "OCU_FTU_DBG_COUNTER_STOP_CH"]
- `anchor`: "2.4.3.1"

### SEC-002-004-003-002
- `source_number`: `2.4.3.2`
- `title`: "Ocu_FtuPrescalerType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.2 Ocu_FtuPrescalerType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["FTU", "OCU", "Ftu", "clock", "counter", "frequency", "divided", "OCU_FTU_DBG_COUNTER_STOP_CH"]
- `anchor`: "2.4.3.2"

### SEC-002-004-003-003
- `source_number`: `2.4.3.3`
- `title`: "Ocu_FtuModuleClkSrcType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.3 Ocu_FtuModuleClkSrcType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["FTU", "OCU", "Ftu", "clock", "counter", "frequency", "divided", "OCU_FTU_DBG_COUNTER_STOP_CH"]
- `anchor`: "2.4.3.3"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `16`
- `physical_page_end`: `18`
- `printed_page_start`: `16`
- `printed_page_end`: `18`
- `keywords`: ["OCU", "Ftu", "Ocu", "FTU", "OcuChannel", "const", "channel", "Structure"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Ocu_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Ocu_ConfigType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["OCU", "FTU", "Ftu", "typedef", "Ocu_ConfigType", "FC7xxx", "OCU_FTU_EXTERNAL_TCK2", "FTU_TCLK2"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Ocu_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Ocu_ChannelConfigType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["OCU", "OcuChannel", "FTU", "Ocu", "const", "Structure", "channel", "Ocu_HwConfigType"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Ocu_HwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Ocu_HwConfigType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["OCU", "OcuChannel", "FTU", "Ocu", "const", "Structure", "channel", "Ocu_HwConfigType"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Ocu_HwChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Ocu_HwChannelConfigType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["OCU", "OcuChannel", "FTU", "Ocu", "const", "Structure", "channel", "Ocu_HwConfigType"]
- `anchor`: "2.6.4"

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: "Ocu_FtuConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Ocu_FtuConfigType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Ocu", "Ftu", "OCU", "const", "Structure", "Ocu_Ftu_ChannelConfigType", "channel", "Ocu_Ftu_ModuleConfigType"]
- `anchor`: "2.6.5"

### SEC-002-006-006
- `source_number`: `2.6.6`
- `title`: "Ocu_Ftu_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 Ocu_Ftu_ChannelConfigType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Ocu", "Ftu", "OCU", "const", "Structure", "Ocu_Ftu_ChannelConfigType", "channel", "Ocu_Ftu_ModuleConfigType"]
- `anchor`: "2.6.6"

### SEC-002-006-007
- `source_number`: `2.6.7`
- `title`: "Ocu_Ftu_ModuleConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.7 Ocu_Ftu_ModuleConfigType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Ocu", "Ftu", "OCU", "const", "Structure", "Ocu_Ftu_ChannelConfigType", "channel", "Ocu_Ftu_ModuleConfigType"]
- `anchor`: "2.6.7"

### SEC-002-006-008
- `source_number`: `2.6.8`
- `title`: "Ocu_SetThresholdType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.8 Ocu_SetThresholdType"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["OCU", "FTU", "Ftu", "Ocu", "const", "Ocu_ValueType", "Ocu_SetThresholdType", "Ocu_Init"]
- `anchor`: "2.6.8"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `19`
- `physical_page_end`: `23`
- `printed_page_start`: `19`
- `printed_page_end`: `23`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "PinState", "PinAction", "FTU", "Ftu", "Ocu_ChannelType"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Ocu.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h"
- `physical_page_start`: `19`
- `physical_page_end`: `23`
- `printed_page_start`: `19`
- `printed_page_end`: `23`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "PinState", "PinAction", "FTU", "Ftu", "Ocu_ChannelType"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["OCU", "FTU", "Ftu", "Ocu", "const", "Ocu_ValueType", "Ocu_SetThresholdType", "Ocu_Init"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Ocu_DeInit (void )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.2 void Ocu_DeInit (void )"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["OCU", "void", "Ocu_DeInit", "FC7xxx", "ConfigPtr", "Diagram", "Pointer", "selected"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_StopChannel", "Std_ReturnType", "Ocu_StartChannel", "FC7xxx"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "Std_ReturnType Ocu_StartChannel(Ocu_ChannelType ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.4 Std_ReturnType Ocu_StartChannel(Ocu_ChannelType ChannelNumber)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_StopChannel", "Std_ReturnType", "Ocu_StartChannel", "FC7xxx"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "void Ocu_SetPinAction(Ocu_ChannelType ChannelNumber, Ocu_PinActionType PinAction)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.6 void Ocu_SetPinAction(Ocu_ChannelType ChannelNumber, Ocu_PinActionType PinAction)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "Ocu_ValueType Ocu_GetCounter(Ocu_ChannelType ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.7 Ocu_ValueType Ocu_GetCounter(Ocu_ChannelType ChannelNumber)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "Ocu_ReturnType"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "Ocu_ReturnType"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.9 Ocu_ReturnType"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "void Ocu_DisableNotification(Ocu_ChannelType ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.10 void Ocu_DisableNotification(Ocu_ChannelType ChannelNumber)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "void Ocu_EnableNotification(Ocu_ChannelType ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.11 void Ocu_EnableNotification(Ocu_ChannelType ChannelNumber)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["OCU", "Ocu", "void", "const", "pHwConfig", "Ocu_HwConfigType", "u8Channel", "Returns"]
- `anchor`: "2.7.1.12"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `24`
- `physical_page_end`: `27`
- `printed_page_start`: `24`
- `printed_page_end`: `27`
- `keywords`: ["FTU", "OCU", "Ocu", "channel", "void", "const", "u8ChannelNumber", "Ocu_Ftu"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in Ocu_Hw.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h"
- `physical_page_start`: `24`
- `physical_page_end`: `25`
- `printed_page_start`: `24`
- `printed_page_end`: `25`
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "void", "Ocu_ChannelType", "channel", "Returns", "Ocu_ValueType"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "void Ocu_Hw_Init(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.1 void Ocu_Hw_Init(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["OCU", "Ocu", "void", "const", "pHwConfig", "Ocu_HwConfigType", "u8Channel", "Returns"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "void Ocu_Hw_DeInit(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.2 void Ocu_Hw_DeInit(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["OCU", "Ocu", "void", "const", "pHwConfig", "Ocu_HwConfigType", "u8Channel", "Returns"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "void Ocu_Hw_StartChannel(Ocu_ChannelType u8ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.3 void Ocu_Hw_StartChannel(Ocu_ChannelType u8ChannelNumber)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["OCU", "Ocu", "void", "const", "pHwConfig", "Ocu_HwConfigType", "u8Channel", "Returns"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.4 void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "void", "top"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "void Ocu_Hw_SetPinState(Ocu_ChannelType u8ChannelNumber, Ocu_PinStateType ePinState)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.5 void Ocu_Hw_SetPinState(Ocu_ChannelType u8ChannelNumber, Ocu_PinStateType ePinState)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "void", "top"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "void Ocu_Hw_SetPinAction(Ocu_ChannelType u8ChannelNumber, Ocu_PinActionType ePinAction)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.6 void Ocu_Hw_SetPinAction(Ocu_ChannelType u8ChannelNumber, Ocu_PinActionType ePinAction)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "void", "top"]
- `anchor`: "2.8.1.6"

### SEC-002-008-001-007
- `source_number`: `2.8.1.7`
- `title`: "Ocu_ValueType Ocu_Hw_GetCounter(Ocu_ChannelType u8ChannelNumber)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.7 Ocu_ValueType Ocu_Hw_GetCounter(Ocu_ChannelType u8ChannelNumber)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "void", "top"]
- `anchor`: "2.8.1.7"

### SEC-002-008-001-008
- `source_number`: `2.8.1.8`
- `title`: "Ocu_ReturnType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.8 Ocu_ReturnType"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "void", "top"]
- `anchor`: "2.8.1.8"

### SEC-002-008-001-009
- `source_number`: `2.8.1.9`
- `title`: "Ocu_ReturnType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.9 Ocu_ReturnType"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["FTU", "OCU", "Ocu_Ftu", "Ocu", "const", "pFtuChannelConfig", "pFtuModuleConfig", "channel"]
- `anchor`: "2.8.1.9"

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: "Functions in Ocu_Ftu.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h"
- `physical_page_start`: `26`
- `physical_page_end`: `27`
- `printed_page_start`: `26`
- `printed_page_end`: `27`
- `keywords`: ["FTU", "OCU", "Ocu_Ftu", "Ocu", "Ftu", "const", "channel", "void"]
- `anchor`: "2.8.2"

### SEC-002-008-002-001
- `source_number`: `2.8.2.1`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.1 void"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["FTU", "OCU", "Ocu_Ftu", "Ocu", "const", "pFtuChannelConfig", "pFtuModuleConfig", "channel"]
- `anchor`: "2.8.2.1"

### SEC-002-008-002-002
- `source_number`: `2.8.2.2`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.2 void"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["FTU", "OCU", "Ocu_Ftu", "Ocu", "const", "pFtuChannelConfig", "pFtuModuleConfig", "channel"]
- `anchor`: "2.8.2.2"

### SEC-002-008-002-003
- `source_number`: `2.8.2.3`
- `title`: "void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.3 void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["FTU", "OCU", "Ftu", "Ocu", "u8HwModule", "u8HwChannel", "void", "channel"]
- `anchor`: "2.8.2.3"

### SEC-002-008-002-004
- `source_number`: `2.8.2.4`
- `title`: "void Ocu_Ftu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.4 void Ocu_Ftu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["FTU", "OCU", "Ftu", "Ocu", "u8HwModule", "u8HwChannel", "void", "channel"]
- `anchor`: "2.8.2.4"

### SEC-002-008-002-005
- `source_number`: `2.8.2.5`
- `title`: "void Ocu_Ftu_SetPinState(uint8 u8HwModule, uint8 u8HwChannel, Ocu_PinStateType ePinState)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.5 void Ocu_Ftu_SetPinState(uint8 u8HwModule, uint8 u8HwChannel, Ocu_PinStateType ePinState)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["FTU", "OCU", "Ftu", "Ocu", "u8HwModule", "u8HwChannel", "void", "channel"]
- `anchor`: "2.8.2.5"

### SEC-002-008-002-006
- `source_number`: `2.8.2.6`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.6 void"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["FTU", "OCU", "Ftu", "Ocu", "u8HwModule", "u8HwChannel", "void", "channel"]
- `anchor`: "2.8.2.6"

### SEC-002-008-002-007
- `source_number`: `2.8.2.7`
- `title`: "uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold", "const", "pFtuConfig", "Ocu_SetThresholdType"]
- `anchor`: "2.8.2.7"

### SEC-002-008-002-008
- `source_number`: `2.8.2.8`
- `title`: "void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType *"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.8 void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType *"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold", "const", "pFtuConfig", "Ocu_SetThresholdType"]
- `anchor`: "2.8.2.8"

### SEC-002-008-002-009
- `source_number`: `2.8.2.9`
- `title`: "void Ocu_Ftu_SetRelativeThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType * const"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.9 void Ocu_Ftu_SetRelativeThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType * const"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold", "const", "pFtuConfig", "Ocu_SetThresholdType"]
- `anchor`: "2.8.2.9"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `physical_page_start`: `28`
- `physical_page_end`: `31`
- `printed_page_start`: `28`
- `printed_page_end`: `31`
- `keywords`: ["OCU", "Ocu", "FTU", "Ftu", "SetThreshold", "const", "pFtuConfig", "FC7xxx"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Initialization"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold", "const", "pFtuConfig", "Ocu_SetThresholdType"]
- `anchor`: "2.9.1"

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: "De-initialization"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["OCU", "Ocu", "FC7xxx", "All", "disabled", "interrupts", "initialization", "configured"]
- `anchor`: "2.9.2"

### SEC-002-009-003
- `source_number`: `2.9.3`
- `title`: "Using the Ocu Notifications"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Using the Ocu Notifications"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["OCU", "Ocu", "FC7xxx", "All", "disabled", "interrupts", "initialization", "configured"]
- `anchor`: "2.9.3"

### SEC-002-009-004
- `source_number`: `2.9.4`
- `title`: "Ocu_SetPinState"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Ocu_SetPinState"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinState", "FC7xxx", "Ocu_StartChannel", "Ocu_EnableNotification", "Ocu_Notification", "channel"]
- `anchor`: "2.9.4"

### SEC-002-009-005
- `source_number`: `2.9.5`
- `title`: "Ocu_SetPinAction"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Ocu_SetPinAction"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinAction", "FC7xxx", "pin", "Set", "action", "After"]
- `anchor`: "2.9.5"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `32`
- `physical_page_end`: `46`
- `printed_page_start`: `32`
- `printed_page_end`: `46`
- `keywords`: ["Variable", "OCU", "Screenshot", "Properties", "Property", "Origin", "OcuChannel", "OcuConfigSet"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `32`
- `physical_page_end`: `33`
- `printed_page_start`: `32`
- `printed_page_end`: `33`
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "OcuHWSpecificSettings", "Tresos"]
- `anchor`: "3.1"

### SEC-003-001-001
- `source_number`: `3.1.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos", "Inclusion", "Relation", "has"]
- `anchor`: "3.1.1"

### SEC-003-001-002
- `source_number`: `3.1.2`
- `title`: "OcuConfigurationOfOptionalApis"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.2 OcuConfigurationOfOptionalApis"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos", "Inclusion", "Relation", "has"]
- `anchor`: "3.1.2"

### SEC-003-001-003
- `source_number`: `3.1.3`
- `title`: "OcuConfigSet"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchor`: "3.1.3"

### SEC-003-001-004
- `source_number`: `3.1.4`
- `title`: "OcuChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.4 OcuChannel"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchor`: "3.1.4"

### SEC-003-001-005
- `source_number`: `3.1.5`
- `title`: "OcuHWSpecificSettings"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.5 OcuHWSpecificSettings"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchor`: "3.1.5"

### SEC-003-001-006
- `source_number`: `3.1.6`
- `title`: "OcuGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION"]
- `anchor`: "3.1.6"

### SEC-003-001-007
- `source_number`: `3.1.7`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.7 CommonPublishedInformation"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION"]
- `anchor`: "3.1.7"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `34`
- `physical_page_end`: `46`
- `printed_page_start`: `34`
- `printed_page_end`: `46`
- `keywords`: ["Variable", "OCU", "Screenshot", "Properties", "Property", "Origin", "OcuChannel", "FTU"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "OcuConfigurationOfOptionalApis"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis"
- `physical_page_start`: `34`
- `physical_page_end`: `36`
- `printed_page_start`: `34`
- `printed_page_end`: `36`
- `keywords`: ["OCU", "Variable", "Screenshot", "Properties", "Property", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "OcuDeinitApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "OcuGetCounterApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.2 OcuGetCounterApi"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.2"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "OcuNotificationSupported"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.3 OcuNotificationSupported"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.3"

### SEC-003-002-002-004
- `source_number`: `3.2.2.4`
- `title`: "OcuSetAbsoluteThresholdApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.4 OcuSetAbsoluteThresholdApi"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.4"

### SEC-003-002-002-005
- `source_number`: `3.2.2.5`
- `title`: "OcuSetPinActionApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.5 OcuSetPinActionApi"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.5"

### SEC-003-002-002-006
- `source_number`: `3.2.2.6`
- `title`: "OcuSetPinStateApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.6 OcuSetPinStateApi"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.6"

### SEC-003-002-002-007
- `source_number`: `3.2.2.7`
- `title`: "OcuSetRelativeThresholdAp"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.7 OcuSetRelativeThresholdAp"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.7"

### SEC-003-002-002-008
- `source_number`: `3.2.2.8`
- `title`: "OcuVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.8 OcuVersionInfoApi"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.8"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "OcuConfigSet"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "OcuCountdirection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties"]
- `anchor`: "3.2.3.1"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "OcuChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel"
- `physical_page_start`: `37`
- `physical_page_end`: `40`
- `printed_page_start`: `37`
- `printed_page_end`: `40`
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Variable", "Ftu", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "OcuChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel"
- `physical_page_start`: `37`
- `physical_page_end`: `40`
- `printed_page_start`: `37`
- `printed_page_end`: `40`
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Variable", "Ftu", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-001-02
- `source_number`: `3.2.4.1.1`
- `title`: "OcuChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "3.2.4.1.1"

### SEC-003-002-004-001-03
- `source_number`: `3.2.4.1.2`
- `title`: "OcuAssignedHardwareChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.2 OcuAssignedHardwareChannel"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "3.2.4.1.2"

### SEC-003-002-004-001-04
- `source_number`: `3.2.4.1.3`
- `title`: "FtuHwChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.3 FtuHwChannel"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "3.2.4.1.3"

### SEC-003-002-004-001-05
- `source_number`: `3.2.4.1.4`
- `title`: "OcuDefaultThreshold"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.4 OcuDefaultThreshold"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "3.2.4.1.4"

### SEC-003-002-004-001-06
- `source_number`: `3.2.4.1.5`
- `title`: "OcuMaxCounterValue"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.5 OcuMaxCounterValue"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "3.2.4.1.5"

### SEC-003-002-004-001-07
- `source_number`: `3.2.4.1.6`
- `title`: "OcuOuptutPinUsed"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.1.6"

### SEC-003-002-004-001-08
- `source_number`: `3.2.4.1.7`
- `title`: "OcuOutputPinDefaultState"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.7 OcuOutputPinDefaultState"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.1.7"

### SEC-003-002-004-001-09
- `source_number`: `3.2.4.1.8`
- `title`: "OcuOutputPinAction"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.8 OcuOutputPinAction"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.1.8"

### SEC-003-002-004-001-10
- `source_number`: `3.2.4.1.9`
- `title`: "OcuChannelTickDuration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "3.2.4.1.9"

### SEC-003-002-004-001-11
- `source_number`: `3.2.4.1.10`
- `title`: "OcuNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.10 OcuNotification"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "3.2.4.1.10"

### SEC-003-002-004-001-12
- `source_number`: `3.2.4.1.11`
- `title`: "OcuHWSpecificSettingsRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.11 OcuHWSpecificSettingsRef"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "3.2.4.1.11"

### SEC-003-002-004-001-13
- `source_number`: `3.2.4.1.12`
- `title`: "OcuChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.12 OcuChannelEcucPartitionRef"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "3.2.4.1.12"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "OcuHWSpecificSettings"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "OcuHWSpecificSettings"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.5.1"

### SEC-003-002-005-001-02
- `source_number`: `3.2.5.1.1`
- `title`: "FTU Module"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.5.1.1"

### SEC-003-002-005-001-03
- `source_number`: `3.2.5.1.2`
- `title`: "OcuClockSource"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.2 OcuClockSource"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.5.1.2"

### SEC-003-002-005-001-04
- `source_number`: `3.2.5.1.3`
- `title`: "OcuPrescale"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.5.1.3"

### SEC-003-002-005-001-05
- `source_number`: `3.2.5.1.4`
- `title`: "Debug Mode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.4 Debug Mode"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.5.1.4"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "OcuGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral"
- `physical_page_start`: `42`
- `physical_page_end`: `43`
- `printed_page_start`: `42`
- `printed_page_end`: `43`
- `keywords`: ["OCU", "FTU", "Ocu", "Variable", "Origin", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "OcuDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.1 OcuDevErrorDetect"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "OcuDisableRuntimeErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "Ocu Multicore Support"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.3 Ocu Multicore Support"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "OcuEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.4 OcuEcucPartitionRef"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "OcuKernelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.5 OcuKernelEcucPartitionRef"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "3.2.6.5"

### SEC-003-002-007
- `source_number`: `3.2.7`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation"
- `physical_page_start`: `44`
- `physical_page_end`: `46`
- `printed_page_start`: `44`
- `printed_page_end`: `46`
- `keywords`: ["OCU", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "INTEGER_LABEL", "Origin"]
- `anchor`: "3.2.7"

### SEC-003-002-007-001
- `source_number`: `3.2.7.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["OCU", "Screenshot", "Properties", "Property", "SymbolicNameValue", "Variable", "AUTOSAR", "CommonPublishedInformation"]
- `anchor`: "3.2.7.1"

### SEC-003-002-007-002
- `source_number`: `3.2.7.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["OCU", "Screenshot", "Properties", "Property", "SymbolicNameValue", "Variable", "AUTOSAR", "CommonPublishedInformation"]
- `anchor`: "3.2.7.2"

### SEC-003-002-007-003
- `source_number`: `3.2.7.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.3 ArReleaseRevisionVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["OCU", "Screenshot", "Properties", "Property", "SymbolicNameValue", "Variable", "AUTOSAR", "CommonPublishedInformation"]
- `anchor`: "3.2.7.3"

### SEC-003-002-007-004
- `source_number`: `3.2.7.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default"]
- `anchor`: "3.2.7.4"

### SEC-003-002-007-005
- `source_number`: `3.2.7.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.5 SwMinorVersion"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default"]
- `anchor`: "3.2.7.5"

### SEC-003-002-007-006
- `source_number`: `3.2.7.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.6 SwPatchVersion"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default"]
- `anchor`: "3.2.7.6"

### SEC-003-002-007-007
- `source_number`: `3.2.7.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default"]
- `anchor`: "3.2.7.7"

### SEC-003-002-007-008
- `source_number`: `3.2.7.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.8 VendorId"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["OCU", "INTEGER_LABEL", "SymbolicNameValue", "VendorId", "FC7xxx", "Variable", "AUTOSAR", "Screenshot"]
- `anchor`: "3.2.7.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `47`
- `physical_page_end`: `54`
- `printed_page_start`: `47`
- `printed_page_end`: `54`
- `keywords`: ["OCU", "OcuChannel", "FTU", "FC7xxx", "tab", "channel", "OcuHWSpecificSettings", "same"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `47`
- `physical_page_end`: `49`
- `printed_page_start`: `47`
- `printed_page_end`: `49`
- `keywords`: ["OCU", "FTU", "FC7xxx", "same", "PWM", "ICU", "GPT", "OcuEcucPartitionRef"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "OCU Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `physical_page_start`: `50`
- `physical_page_end`: `54`
- `printed_page_start`: `50`
- `printed_page_end`: `54`
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "tab", "channel", "OcuHWSpecificSettings", "OcuHwResourceConfig", "EcucPartitions"]
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
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 OCU Introduction ........................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["2.9", "API Sequence Diagram ..............................................................................…", "2.9.1", "Initialization ....................................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 OCU Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 1 OCU Introduction", "1.1", "Requirement Tracing", "The design of this module follows the specifications of the OCU driver specified in AUTOSAR Classic…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "Rejected Requirement 3 SWS_Ocu_00020"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text", "table", "image", "requirement", "figure"]
- `anchors`: ["Description", "This parameter is used to allow the OCU channel to trigger a DMA channel upon compare", "match, if this is supported by hardware. The value of the parameter represents the DMA", "physical channel to trigger."]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.3", "Macros", "2.3.1", "Macros in Ocu.h"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define OCU_E_PARAM_NO_PIN ((uint8)0x0AU)", "API Ocu_SetPinState or Ocu_SetPinAction services called for a channel that does not have an associa…", "#define OCU_E_INIT_FAILED ((uint8)0x0BU)", "API Ocu_Init service called with wrong parameter."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Ocu_Ftu_Types.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define OCU_ENABLENOTIFICATION_ID ((uint8)0x0BU)", "API service ID of Ocu_EnableNotification function.", "2.3.2", "Macros in Ocu_Ftu_Types.h"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Ocu_Version.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["", "#define OCU_FTU_CH_2 ((uint8)0x02)", "", "#define OCU_FTU_CH_3 ((uint8)0x03)"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define OCU_CFG_AR_RELEASE_REVISION_VERSION 0", "#define OCU_CFG_SW_MAJOR_VERSION 0", "#define OCU_CFG_SW_MINOR_VERSION 6", "#define OCU_CFG_SW_PATCH_VERSION 0"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define OCU_SET_RELATIVE_THRESHOLD_API (STD_ON)", "Switch to indicate that Ocu_SetRelativeThreshold API is supported.", "#define OCU_NOTIFICATION_SUPPORTED (STD_ON)", "Switch to indicate that the notifications are supported."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Ocu.h / 2.4.1.1 Ocu_ChannelStatusType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.4", "Enums", "2.4.1", "Enumerations in Ocu.h"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.1 OCU_FTU_DebugModeType"
- `content_types`: ["text", "table"]
- `anchors`: ["Values", "Value", "Description", "OCU_CM_IN_REF_INTERVAL = 0"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Ocu_ConfigType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["OCU_FTU_EXTERNAL_TCK2 = 6", "FTU_TCLK2 pin as FTU external clock.", "2.5", "Typedefs"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Ocu_ChannelConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Data Fields", "const Ocu_ChannelType nNumChannels", "Number of channels for a given configuration.", "const Ocu_ConfigChannelType *pOcuChannelConfig"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Ocu_FtuConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "N/A", "Data Fields", "const uint8 u8IdxChannelConfig"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "N/A", "Data Fields", "const Ocu_FtuModuleClkSrcType eClkSrc"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.2 void Ocu_DeInit (void )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "N/A", "Returns"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7.1.8", "Ocu_ReturnType", "Ocu_SetAbsoluteThreshold(Ocu_ChannelType", "ChannelNumber,"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Parameters", "Parameter", "Description", "ChannelNumber"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.4 void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.8.1.4", "void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)", "Function", "void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.9 Ocu_ReturnType"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["ReferenceValue", "Reference value for the counting interval", "AbsoluteValue", "Absolute value for the counting interval"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.3 void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["2.8.2.3", "void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)", "Function", "void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["2.8.2.7", "uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)", "Function", "Uint32 Ocu_Ftu_GetCounter(uint8 u8HwModule)"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["b) All used interrupts are disabled.", "2.9.2", "De-initialization", "Ocu driver de-initialization."]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Ocu_SetPinState"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["The OCU channel is started after Ocu_StartChannel(). No notifications occur until the first call of", "Ocu_EnableNotification(...). Ocu_Notification<#Channel> represents the configured callback function…", "2.9.4", "Ocu_SetPinState"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Ocu_SetPinAction"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.9.5", "Ocu_SetPinAction", "Set Ocu output pin action. After calling the Ocu_SetPinAction(), the pin level only changees on the…"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The OCU module has the following 7 containers:"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet"
- `content_types`: ["text", "image", "config", "figure"]
- `anchors`: ["3.1.3", "OcuConfigSet", "3.1.4", "OcuChannel"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `content_types`: ["text", "table", "image", "config", "figure"]
- `anchors`: ["3.1.6", "OcuGeneral", "3.1.7", "CommonPublishedInformation"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.5 OcuSetPinActionApi"
- `content_types`: ["text", "api"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2.3", "OcuConfigSet", "Container", "OcuConfigSet"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["3.2.4.1.9", "OcuChannelTickDuration", "Variable", "OcuChannelTickDuration"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["3.2.5", "OcuHWSpecificSettings", "Container", "OcuHWSpecificSettings"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Origin", "FLAGCHIP", "3.2.5.1.3", "OcuPrescale"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `content_types`: ["text", "image"]
- `anchors`: ["SymbolicNameValue", "false", "3.2.6.2", "OcuDisableRuntimeErrorDetect"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["partition referenced is a subset of the ECUC partitions where the OCU driver is mapped to.", "Screenshot", "Properties", "Property"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Type", "Variable: INTEGER_LABEL", "Origin", "FLAGCHIP"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.8 VendorId"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1."]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.", "If the number OcuEcucPartitionRef = 0, the check-box OcuMulticoreEnabled must be 'false'."]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3.", "Different channels of the same instance must be assigned to the same partition."]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "config", "figure"]
- `anchors`: ["4.2", "OCU Usage Common Steps", "Basically, the OCU module can be configured by the following 4 steps:", "Add a module object in the OcuHWSpecificSettings tab and a channel object in the OcuChannel tab. Th…"]

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Configure OCU module parameters in the OcuHWSpecificSettings tab.", "Configure OCU channel parameters in the OcuChannel tab."]

### PAGE-0052
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["Choose which API will be used.", "Enable multicore and and allocate EcucPartitions for each channel (Skip this step if multicore is d…"]

### PAGE-0053
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 53"]

### PAGE-0054
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["Generate configuration files."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx OCU User Manual"
- `keywords`: ["OCU", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx OCU User Manual; Revision History; 0.1"
- `keywords`: ["OCU", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
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
- `summary`: "Table of Contents: FC7xxx OCU User Manual; Table of Contents; Revision History .................................................................................................................................................. 2"
- `keywords`: ["OCU", "Ocu", "Ocu_Ftu", "Ocu_Ftu_Types", "Ocu_Cfg", "Ocu_Types", "FC7xxx", "Ocu_Version", "Ocu_ConfigType", "Ocu_ChannelConfigType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 OCU Introduction ................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx OCU User Manual; 2.9; API Sequence Diagram .................................................................................................................................. 28"
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "Ocu", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "OcuHWSpecificSettings", "OcuGeneral", "CommonPublishedInformation", "FC7xxx"]
- `anchors`:
  - `p4`: "2.9"
  - `p4`: "API Sequence Diagram ......................................................................................................................…"
  - `p4`: "2.9.1"
  - `p4`: "Initialization ............................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 OCU Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 OCU Introduction / 1.1 Requirement Tracing: FC7xxx OCU User Manual; Chapter 1 OCU Introduction; 1.1"
- `keywords`: ["OCU", "FTU", "channels", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_OCUDriver", "provides", "initializing", "Requirement", "Tracing"]
- `anchors`:
  - `p5`: "Chapter 1 OCU Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirement Tracing"
  - `p5`: "The design of this module follows the specifications of the OCU driver specified in AUTOSAR Classic Platform Release 4.6.0."

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx OCU User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["OCU", "Ocu", "Rejected", "Requirement", "AUTOSAR", "Debugging", "Ocu_GetVersionInfo", "ADC", "concept", "implemented"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "Rejected Requirements"
  - `p6`: "Rejected Requirement 3 SWS_Ocu_00020"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text", "table", "image", "requirement", "figure"]
- `summary`: "Chapter 2 Software Design / 2.2 File Structure: FC7xxx OCU User Manual; Description; This parameter is used to allow the OCU channel to trigger a DMA channel upon compare"
- `keywords`: ["OCU", "DMA", "ECUC", "FC7xxx", "channel", "trigger", "SWS_Ocu_00168", "OcuKernelEcucPartitionRef", "supported", "implemented"]
- `anchors`:
  - `p7`: "Description"
  - `p7`: "This parameter is used to allow the OCU channel to trigger a DMA channel upon compare"
  - `p7`: "match, if this is supported by hardware. The value of the parameter represents the DMA"
  - `p7`: "physical channel to trigger."

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h: FC7xxx OCU User Manual; 2.3; Macros"
- `keywords`: ["OCU", "Ocu", "define", "called", "RUNNING", "FC7xxx", "OCU_INDEX", "OCU_E_UNINIT", "OCU_E_PARAM_INVALID_CHANNEL", "invalid"]
- `anchors`:
  - `p8`: "2.3"
  - `p8`: "Macros"
  - `p8`: "2.3.1"
  - `p8`: "Macros in Ocu.h"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h: FC7xxx OCU User Manual; #define OCU_E_PARAM_NO_PIN ((uint8)0x0AU); API Ocu_SetPinState or Ocu_SetPinAction services called for a channel that does not have an associated output pin."
- `keywords`: ["OCU", "define", "Ocu_SetPinState", "Ocu_SetPinAction", "Ocu_Init", "FC7xxx", "OCU_E_PARAM_NO_PIN", "called", "OCU_E_INIT_FAILED", "OCU_E_PARAM_INVALID_VALUE"]
- `anchors`:
  - `p9`: "#define OCU_E_PARAM_NO_PIN ((uint8)0x0AU)"
  - `p9`: "API Ocu_SetPinState or Ocu_SetPinAction services called for a channel that does not have an associated output pin."
  - `p9`: "#define OCU_E_INIT_FAILED ((uint8)0x0BU)"
  - `p9`: "API Ocu_Init service called with wrong parameter."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Ocu_Ftu_Types.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Ocu_Ftu_Types.h: FC7xxx OCU User Manual; #define OCU_ENABLENOTIFICATION_ID ((uint8)0x0BU); API service ID of Ocu_EnableNotification function."
- `keywords`: ["OCU", "define", "FC7xxx", "OCU_ENABLENOTIFICATION_ID", "Ocu_EnableNotification", "Ocu_Ftu_Types", "OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET", "OCU_FTU_0", "OCU_FTU_1", "OCU_FTU_2"]
- `anchors`:
  - `p10`: "#define OCU_ENABLENOTIFICATION_ID ((uint8)0x0BU)"
  - `p10`: "API service ID of Ocu_EnableNotification function."
  - `p10`: "2.3.2"
  - `p10`: "Macros in Ocu_Ftu_Types.h"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Ocu_Version.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Ocu_Version.h: FC7xxx OCU User Manual; #define OCU_FTU_CH_2 ((uint8)0x02); #define OCU_FTU_CH_3 ((uint8)0x03)"
- `keywords`: ["OCU", "define", "FC7xxx", "OCU_FTU_CH_2", "OCU_FTU_CH_3", "OCU_FTU_CH_4", "OCU_FTU_CH_5", "OCU_FTU_CH_6", "OCU_FTU_CH_7", "Ocu_Version"]
- `anchors`:
  - `p11`: ""
  - `p11`: "#define OCU_FTU_CH_2 ((uint8)0x02)"
  - `p11`: ""
  - `p11`: "#define OCU_FTU_CH_3 ((uint8)0x03)"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h: FC7xxx OCU User Manual; #define OCU_CFG_AR_RELEASE_REVISION_VERSION 0; #define OCU_CFG_SW_MAJOR_VERSION 0"
- `keywords`: ["OCU", "define", "Switch", "STD_ON", "indicate", "supported", "STD_OFF", "FC7xxx", "OCU_CFG_AR_RELEASE_REVISION_VERSION", "OCU_CFG_SW_MAJOR_VERSION"]
- `anchors`:
  - `p12`: "#define OCU_CFG_AR_RELEASE_REVISION_VERSION 0"
  - `p12`: "#define OCU_CFG_SW_MAJOR_VERSION 0"
  - `p12`: "#define OCU_CFG_SW_MINOR_VERSION 6"
  - `p12`: "#define OCU_CFG_SW_PATCH_VERSION 0"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h: FC7xxx OCU User Manual; #define OCU_SET_RELATIVE_THRESHOLD_API (STD_ON); Switch to indicate that Ocu_SetRelativeThreshold API is supported."
- `keywords`: ["FTU", "OCU", "define", "Switch", "STD_OFF", "Maximum", "platform", "STD_ON", "indicate", "supported"]
- `anchors`:
  - `p13`: "#define OCU_SET_RELATIVE_THRESHOLD_API (STD_ON)"
  - `p13`: "Switch to indicate that Ocu_SetRelativeThreshold API is supported."
  - `p13`: "#define OCU_NOTIFICATION_SUPPORTED (STD_ON)"
  - `p13`: "Switch to indicate that the notifications are supported."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Ocu.h / 2.4.1.1 Ocu_ChannelStatusType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Ocu.h / 2.4.1.1 Ocu_ChannelStatusType: FC7xxx OCU User Manual; 2.4; Enums"
- `keywords`: ["OCU", "Ocu", "channel", "pin", "Enumeration", "status", "Ocu_ChannelStatusType", "Values", "Ocu_CountDirectionType", "Ocu_PinStateType"]
- `anchors`:
  - `p14`: "2.4"
  - `p14`: "Enums"
  - `p14`: "2.4.1"
  - `p14`: "Enumerations in Ocu.h"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.1 OCU_FTU_DebugModeType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.1 OCU_FTU_DebugModeType: FC7xxx OCU User Manual; Values; Value"
- `keywords`: ["FTU", "OCU", "Ftu", "clock", "counter", "frequency", "divided", "OCU_FTU_DBG_COUNTER_STOP_CH", "Values", "OCU_FTU_DebugModeType"]
- `anchors`:
  - `p15`: "Values"
  - `p15`: "Value"
  - `p15`: "Description"
  - `p15`: "OCU_CM_IN_REF_INTERVAL = 0"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Ocu_ConfigType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Ocu_ConfigType: FC7xxx OCU User Manual; OCU_FTU_EXTERNAL_TCK2 = 6; FTU_TCLK2 pin as FTU external clock."
- `keywords`: ["OCU", "FTU", "Ftu", "typedef", "Ocu_ConfigType", "FC7xxx", "OCU_FTU_EXTERNAL_TCK2", "FTU_TCLK2", "Ocu_Types", "Ocu_ChannelType"]
- `anchors`:
  - `p16`: "OCU_FTU_EXTERNAL_TCK2 = 6"
  - `p16`: "FTU_TCLK2 pin as FTU external clock."
  - `p16`: "2.5"
  - `p16`: "Typedefs"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Ocu_ChannelConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Ocu_ChannelConfigType: FC7xxx OCU User Manual; Data Fields; const Ocu_ChannelType nNumChannels"
- `keywords`: ["OCU", "OcuChannel", "FTU", "Ocu", "const", "Structure", "channel", "Ocu_HwConfigType", "Ocu_HwChannelConfigType", "Ocu_ChannelType"]
- `anchors`:
  - `p17`: "Data Fields"
  - `p17`: "const Ocu_ChannelType nNumChannels"
  - `p17`: "Number of channels for a given configuration."
  - `p17`: "const Ocu_ConfigChannelType *pOcuChannelConfig"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Ocu_FtuConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Ocu_FtuConfigType: FC7xxx OCU User Manual; Diagram; N/A"
- `keywords`: ["Ocu", "Ftu", "OCU", "const", "Structure", "Ocu_Ftu_ChannelConfigType", "channel", "Ocu_Ftu_ModuleConfigType", "Ocu_FtuConfigType", "Ocu_Ftu_ChannelType"]
- `anchors`:
  - `p18`: "Diagram"
  - `p18`: "N/A"
  - `p18`: "Data Fields"
  - `p18`: "const uint8 u8IdxChannelConfig"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr): FC7xxx OCU User Manual; Diagram; N/A"
- `keywords`: ["OCU", "FTU", "Ftu", "Ocu", "const", "Ocu_ValueType", "Ocu_SetThresholdType", "Ocu_Init", "Ocu_ConfigType", "ConfigPtr"]
- `anchors`:
  - `p19`: "Diagram"
  - `p19`: "N/A"
  - `p19`: "Data Fields"
  - `p19`: "const Ocu_FtuModuleClkSrcType eClkSrc"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.2 void Ocu_DeInit (void )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.2 void Ocu_DeInit (void ): FC7xxx OCU User Manual; Diagram; Parameters"
- `keywords`: ["OCU", "void", "Ocu_DeInit", "FC7xxx", "ConfigPtr", "Diagram", "Pointer", "selected", "structure", "Returns"]
- `anchors`:
  - `p20`: "Diagram"
  - `p20`: "Parameters"
  - `p20`: "Parameter"
  - `p20`: "Description"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber): FC7xxx OCU User Manual; Diagram; Parameters"
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_StopChannel", "Std_ReturnType", "Ocu_StartChannel", "FC7xxx", "channel", "Diagram"]
- `anchors`:
  - `p21`: "Diagram"
  - `p21`: "Parameters"
  - `p21`: "N/A"
  - `p21`: "Returns"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState): FC7xxx OCU User Manual; Diagram; Parameters"
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "Diagram", "Returns"]
- `anchors`:
  - `p22`: "Diagram"
  - `p22`: "Parameters"
  - `p22`: "Parameter"
  - `p22`: "Description"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType: FC7xxx OCU User Manual; 2.7.1.8; Ocu_ReturnType"
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue", "AbsoluteValue", "threshold"]
- `anchors`:
  - `p23`: "2.7.1.8"
  - `p23`: "Ocu_ReturnType"
  - `p23`: "Ocu_SetAbsoluteThreshold(Ocu_ChannelType"
  - `p23`: "ChannelNumber,"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo): FC7xxx OCU User Manual; Parameters; Parameter"
- `keywords`: ["OCU", "Ocu", "void", "const", "pHwConfig", "Ocu_HwConfigType", "u8Channel", "Returns", "Std_VersionInfoType", "u8ChannelNumber"]
- `anchors`:
  - `p24`: "Parameters"
  - `p24`: "Parameter"
  - `p24`: "Description"
  - `p24`: "ChannelNumber"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.4 void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.4 void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber): FC7xxx OCU User Manual; 2.8.1.4; void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
- `keywords`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType", "void", "top", "structure", "ePinState"]
- `anchors`:
  - `p25`: "2.8.1.4"
  - `p25`: "void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
  - `p25`: "Function"
  - `p25`: "void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.9 Ocu_ReturnType"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.9 Ocu_ReturnType: FC7xxx OCU User Manual; ReferenceValue; Reference value for the counting interval"
- `keywords`: ["FTU", "OCU", "Ocu_Ftu", "Ocu", "const", "pFtuChannelConfig", "pFtuModuleConfig", "channel", "Ocu_ReturnType", "Ocu_Ftu_ChannelConfigType"]
- `anchors`:
  - `p26`: "ReferenceValue"
  - `p26`: "Reference value for the counting interval"
  - `p26`: "AbsoluteValue"
  - `p26`: "Absolute value for the counting interval"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.3 void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.3 void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel): FC7xxx OCU User Manual; 2.8.2.3; void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `keywords`: ["FTU", "OCU", "Ftu", "Ocu", "u8HwModule", "u8HwChannel", "void", "channel", "number", "const"]
- `anchors`:
  - `p27`: "2.8.2.3"
  - `p27`: "void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
  - `p27`: "Function"
  - `p27`: "void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule): FC7xxx OCU User Manual; 2.8.2.7; uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold", "const", "pFtuConfig", "Ocu_SetThresholdType", "Ocu_FtuConfigType", "u8HwModule"]
- `anchors`:
  - `p28`: "2.8.2.7"
  - `p28`: "uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
  - `p28`: "Function"
  - `p28`: "Uint32 Ocu_Ftu_GetCounter(uint8 u8HwModule)"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization: FC7xxx OCU User Manual; b) All used interrupts are disabled.; 2.9.2"
- `keywords`: ["OCU", "Ocu", "FC7xxx", "All", "disabled", "interrupts", "initialization", "configured", "according", "referenced"]
- `anchors`:
  - `p29`: "b) All used interrupts are disabled."
  - `p29`: "2.9.2"
  - `p29`: "De-initialization"
  - `p29`: "Ocu driver de-initialization."

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Ocu_SetPinState"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Ocu_SetPinState: FC7xxx OCU User Manual; The OCU channel is started after Ocu_StartChannel(). No notifications occur until the first call of; Ocu_EnableNotification(...). Ocu_Notification<#Channel> represents the configured callback function for a channel."
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinState", "FC7xxx", "Ocu_StartChannel", "Ocu_EnableNotification", "Ocu_Notification", "channel", "after", "pin"]
- `anchors`:
  - `p30`: "The OCU channel is started after Ocu_StartChannel(). No notifications occur until the first call of"
  - `p30`: "Ocu_EnableNotification(...). Ocu_Notification<#Channel> represents the configured callback function for a channel."
  - `p30`: "2.9.4"
  - `p30`: "Ocu_SetPinState"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Ocu_SetPinAction"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Ocu_SetPinAction: FC7xxx OCU User Manual; 2.9.5; Ocu_SetPinAction"
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinAction", "FC7xxx", "pin", "Set", "action", "After", "calling", "level"]
- `anchors`:
  - `p31`: "2.9.5"
  - `p31`: "Ocu_SetPinAction"
  - `p31`: "Set Ocu output pin action. After calling the Ocu_SetPinAction(), the pin level only changees on the compare match."

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT: FC7xxx OCU User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos", "Inclusion", "Relation", "has", "content", "each"]
- `anchors`:
  - `p32`: "Chapter 3 Tresos Configuration Items"
  - `p32`: "3.1"
  - `p32`: "Container Inclusion Relation"
  - `p32`: "The OCU module has the following 7 containers:"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet"
- `content_types`: ["text", "image", "config", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet: FC7xxx OCU User Manual; 3.1.3; OcuConfigSet"
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchors`:
  - `p33`: "3.1.3"
  - `p33`: "OcuConfigSet"
  - `p33`: "3.1.4"
  - `p33`: "OcuChannel"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `content_types`: ["text", "table", "image", "config", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral: FC7xxx OCU User Manual; 3.1.6; OcuGeneral"
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION", "VariantPreCompile", "Screenshot"]
- `anchors`:
  - `p34`: "3.1.6"
  - `p34`: "OcuGeneral"
  - `p34`: "3.1.7"
  - `p34`: "CommonPublishedInformation"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi: FC7xxx OCU User Manual; Screenshot; Properties"
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property", "OcuDeinitApi", "code"]
- `anchors`:
  - `p35`: "Screenshot"
  - `p35`: "Properties"
  - `p35`: "Property"
  - `p35`: "Value"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.5 OcuSetPinActionApi"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.5 OcuSetPinActionApi: FC7xxx OCU User Manual; Screenshot; Properties"
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property", "Origin", "OcuSetPinActionApi"]
- `anchors`:
  - `p36`: "Screenshot"
  - `p36`: "Properties"
  - `p36`: "Property"
  - `p36`: "Value"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection: FC7xxx OCU User Manual; 3.2.3; OcuConfigSet"
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties", "Property", "ENUMERATION"]
- `anchors`:
  - `p37`: "3.2.3"
  - `p37`: "OcuConfigSet"
  - `p37`: "Container"
  - `p37`: "OcuConfigSet"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId: FC7xxx OCU User Manual; Properties; Property"
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER", "OcuChannelId", "Screenshot"]
- `anchors`:
  - `p38`: "Properties"
  - `p38`: "Property"
  - `p38`: "Value"
  - `p38`: "Type"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed: FC7xxx OCU User Manual; Screenshot; Properties"
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property", "Origin", "OcuOuptutPinUsed"]
- `anchors`:
  - `p39`: "Screenshot"
  - `p39`: "Properties"
  - `p39`: "Property"
  - `p39`: "Value"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration: FC7xxx OCU User Manual; 3.2.4.1.9; OcuChannelTickDuration"
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties", "Property", "Origin"]
- `anchors`:
  - `p40`: "3.2.4.1.9"
  - `p40`: "OcuChannelTickDuration"
  - `p40`: "Variable"
  - `p40`: "OcuChannelTickDuration"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module: FC7xxx OCU User Manual; 3.2.5; OcuHWSpecificSettings"
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property", "Variable", "ENUMERATION"]
- `anchors`:
  - `p41`: "3.2.5"
  - `p41`: "OcuHWSpecificSettings"
  - `p41`: "Container"
  - `p41`: "OcuHWSpecificSettings"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale: FC7xxx OCU User Manual; Origin; FLAGCHIP"
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property", "ENUMERATION", "OcuGeneral"]
- `anchors`:
  - `p42`: "Origin"
  - `p42`: "FLAGCHIP"
  - `p42`: "3.2.5.1.3"
  - `p42`: "OcuPrescale"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.2 OcuDisableRuntimeErrorDetect: FC7xxx OCU User Manual; SymbolicNameValue; false"
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC", "OcuEcucPartitionRef", "OcuKernelEcucPartitionRef"]
- `anchors`:
  - `p43`: "SymbolicNameValue"
  - `p43`: "false"
  - `p43`: "3.2.6.2"
  - `p43`: "OcuDisableRuntimeErrorDetect"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion: FC7xxx OCU User Manual; partition referenced is a subset of the ECUC partitions where the OCU driver is mapped to.; Screenshot"
- `keywords`: ["OCU", "Screenshot", "Properties", "Property", "SymbolicNameValue", "Variable", "AUTOSAR", "CommonPublishedInformation", "ArReleaseMajorVersion", "INTEGER_LABEL"]
- `anchors`:
  - `p44`: "partition referenced is a subset of the ECUC partitions where the OCU driver is mapped to."
  - `p44`: "Screenshot"
  - `p44`: "Properties"
  - `p44`: "Property"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion: FC7xxx OCU User Manual; Type; Variable: INTEGER_LABEL"
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default", "SwMajorVersion", "SwMinorVersion"]
- `anchors`:
  - `p45`: "Type"
  - `p45`: "Variable: INTEGER_LABEL"
  - `p45`: "Origin"
  - `p45`: "FLAGCHIP"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.8 VendorId"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.8 VendorId: FC7xxx OCU User Manual; Screenshot; Properties"
- `keywords`: ["OCU", "INTEGER_LABEL", "SymbolicNameValue", "VendorId", "FC7xxx", "Variable", "AUTOSAR", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p46`: "Screenshot"
  - `p46`: "Properties"
  - `p46`: "Property"
  - `p46`: "Value"

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx OCU User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["OCU", "FTU", "FC7xxx", "PWM", "ICU", "GPT", "Guides", "Item", "Constraint", "same"]
- `anchors`:
  - `p47`: "Chapter 4 Configuration Guides"
  - `p47`: "4.1"
  - `p47`: "Configuration Item Constraint"
  - `p47`: "1."

### SEG-0048
- `physical_pages`: `48`
- `printed_pages`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx OCU User Manual; 2.; If the number OcuEcucPartitionRef = 0, the check-box OcuMulticoreEnabled must be 'false'."
- `keywords`: ["OCU", "FC7xxx", "OcuEcucPartitionRef", "OcuMulticoreEnabled", "number", "check", "box", "must"]
- `anchors`:
  - `p48`: "2."
  - `p48`: "If the number OcuEcucPartitionRef = 0, the check-box OcuMulticoreEnabled must be 'false'."

### SEG-0049
- `physical_pages`: `49`
- `printed_pages`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx OCU User Manual; 3.; Different channels of the same instance must be assigned to the same partition."
- `keywords`: ["OCU", "FC7xxx", "same", "Different", "channels", "instance", "must", "assigned", "partition"]
- `anchors`:
  - `p49`: "3."
  - `p49`: "Different channels of the same instance must be assigned to the same partition."

### SEG-0050
- `physical_pages`: `50`
- `printed_pages`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "config", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps: FC7xxx OCU User Manual; 4.2; OCU Usage Common Steps"
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "tab", "channel", "OcuHwResourceConfig", "object", "Usage", "Basically"]
- `anchors`:
  - `p50`: "4.2"
  - `p50`: "OCU Usage Common Steps"
  - `p50`: "Basically, the OCU module can be configured by the following 4 steps:"
  - `p50`: "Add a module object in the OcuHWSpecificSettings tab and a channel object in the OcuChannel tab. The added"

### SEG-0051
- `physical_pages`: `51`
- `printed_pages`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps: FC7xxx OCU User Manual; Configure OCU module parameters in the OcuHWSpecificSettings tab.; Configure OCU channel parameters in the OcuChannel tab."
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "Configure", "tab", "channel"]
- `anchors`:
  - `p51`: "Configure OCU module parameters in the OcuHWSpecificSettings tab."
  - `p51`: "Configure OCU channel parameters in the OcuChannel tab."

### SEG-0052
- `physical_pages`: `52`
- `printed_pages`: `52`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps: FC7xxx OCU User Manual; Choose which API will be used.; Enable multicore and and allocate EcucPartitions for each channel (Skip this step if multicore is disable)"
- `keywords`: ["OCU", "FC7xxx", "EcucPartitions", "multicore", "Choose", "which", "Enable", "allocate", "each", "channel"]
- `anchors`:
  - `p52`: "Choose which API will be used."
  - `p52`: "Enable multicore and and allocate EcucPartitions for each channel (Skip this step if multicore is disable)"

### SEG-0053
- `physical_pages`: `53`
- `printed_pages`: `53`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps: FC7xxx OCU User Manual"
- `keywords`: ["OCU", "FC7xxx"]
- `anchors`:
  - `p53`: "no body anchor extracted"

### SEG-0054
- `physical_pages`: `54`
- `printed_pages`: `54`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps: FC7xxx OCU User Manual; Generate configuration files."
- `keywords`: ["OCU", "FC7xxx", "Generate"]
- `anchors`:
  - `p54`: "Generate configuration files."

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
- `key_fields`: ["OCU", "OcuConfigSet", "OcuChannel", "Ocu", "IMPLEMENTATION_CONFIG_VARIANT"]
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
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Rejected Requirement table-like panels; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Rejected Requirement table-like panels"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "define", "called", "RUNNING"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `bbox`: `None`
- `key_fields`: ["OCU", "define", "Ocu_SetPinState", "Ocu_SetPinAction", "Ocu_Init"]
- `summary`: "Indexes table-like source content for Table-like content on page 9; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 9"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Ocu_Ftu_Types.h"
- `bbox`: `None`
- `key_fields`: ["OCU", "define", "FC7xxx", "OCU_ENABLENOTIFICATION_ID", "Ocu_EnableNotification"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Ocu_Version.h"
- `bbox`: `None`
- `key_fields`: ["OCU", "define", "FC7xxx", "OCU_FTU_CH_2", "OCU_FTU_CH_3"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["OCU", "define", "Switch", "STD_ON", "indicate"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Ocu_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["FTU", "OCU", "define", "Switch", "STD_OFF"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Ocu.h / 2.4.1.1 Ocu_ChannelStatusType"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "channel", "pin", "Enumeration"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Ocu_Ftu_Types.h / 2.4.3.1 OCU_FTU_DebugModeType"
- `bbox`: `None`
- `key_fields`: ["FTU", "OCU", "Ftu", "clock", "counter"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Ocu_ConfigType"
- `bbox`: `None`
- `key_fields`: ["OCU", "FTU", "Ftu", "typedef", "Ocu_ConfigType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Ocu_ChannelConfigType"
- `bbox`: `None`
- `key_fields`: ["OCU", "OcuChannel", "FTU", "Ocu", "const"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Ocu_FtuConfigType"
- `bbox`: `None`
- `key_fields`: ["Ocu", "Ftu", "OCU", "const", "Structure"]
- `summary`: "Indexes table-like source content for Table-like content on page 18; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 18"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0019-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `bbox`: `None`
- `key_fields`: ["OCU", "FTU", "Ftu", "Ocu", "const"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0020-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-001"
- `caption`: "Table-like content on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.2 void Ocu_DeInit (void )"
- `bbox`: `None`
- `key_fields`: ["OCU", "void", "Ocu_DeInit", "FC7xxx", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 20; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 20"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0021-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-001"
- `caption`: "Table-like content on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_StopChannel"]
- `summary`: "Indexes table-like source content for Table-like content on page 21; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 21"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0022-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-001"
- `caption`: "Table-like content on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `bbox`: `None`
- `key_fields`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber"]
- `summary`: "Indexes table-like source content for Table-like content on page 22; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 22"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0023-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-001"
- `caption`: "Table-like content on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType"]
- `summary`: "Indexes table-like source content for Table-like content on page 23; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 23"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0024-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "void", "const", "pHwConfig"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Table-like content on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.4 void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "u8ChannelNumber", "Ocu_ChannelType", "channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 25; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 25"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0026-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0026-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `26`
- `printed_pages`: ["26"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Ocu_Hw.h / 2.8.1.9 Ocu_ReturnType"
- `bbox`: `None`
- `key_fields`: ["FTU", "OCU", "Ocu_Ftu", "Ocu", "const"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0027-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0027-001"
- `caption`: "Table-like content on page 27"
- `physical_pages`: `27`
- `printed_pages`: ["27"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.3 void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `bbox`: `None`
- `key_fields`: ["FTU", "OCU", "Ftu", "Ocu", "u8HwModule"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `bbox`: `None`
- `key_fields`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `bbox`: `None`
- `key_fields`: ["OCU", "Ocu", "FC7xxx", "All", "disabled"]
- `summary`: "Indexes table-like source content for Table-like content on page 29; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 29"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0032-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0032-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `32`
- `printed_pages`: ["32"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `None`
- `key_fields`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0034-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0034-001"
- `caption`: "Table-like content on page 34"
- `physical_pages`: `34`
- `printed_pages`: ["34"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `bbox`: `None`
- `key_fields`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 34; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 34"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0037-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0037-001"
- `caption`: "Table-like content on page 37"
- `physical_pages`: `37`
- `printed_pages`: ["37"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `bbox`: `None`
- `key_fields`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `bbox`: `None`
- `key_fields`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `bbox`: `None`
- `key_fields`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction"]
- `summary`: "Indexes table-like source content for Table-like content on page 39; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 39"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0041-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0041-001"
- `caption`: "Table-like content on page 41"
- `physical_pages`: `41`
- `printed_pages`: ["41"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `bbox`: `None`
- `key_fields`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `bbox`: `None`
- `key_fields`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale"]
- `summary`: "Indexes table-like source content for Table-like content on page 42; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 42"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0047-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0047-001"
- `caption`: "Table-like content on page 47"
- `physical_pages`: `47`
- `printed_pages`: ["47"]
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `None`
- `key_fields`: ["OCU", "FTU", "FC7xxx", "PWM", "ICU"]
- `summary`: "Indexes table-like source content for Table-like content on page 47; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 47"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0051-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0051-001"
- `caption`: "Table-like content on page 51"
- `physical_pages`: `51`
- `printed_pages`: ["51"]
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `None`
- `key_fields`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "Configure"]
- `summary`: "Indexes table-like source content for Table-like content on page 51; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 51"
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
- `keywords`: ["OCU", "Ocu", "Ocu_Ftu", "Ocu_Ftu_Types", "Ocu_Cfg", "Ocu_Types", "FC7xxx", "Ocu_Version"]
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
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "Ocu", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "OcuHWSpecificSettings", "OcuGeneral"]
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
- `bbox`: `[36.0, 276.35, 559.3, 467.2]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.2 File Structure; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "DMA", "ECUC", "FC7xxx", "channel", "trigger", "SWS_Ocu_00168", "OcuKernelEcucPartitionRef"]
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
- `bbox`: `[61.85, 496.14, 533.45, 742.94]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.2 File Structure; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "DMA", "ECUC", "FC7xxx", "channel", "trigger", "SWS_Ocu_00168", "OcuKernelEcucPartitionRef"]
- `anchor`: "Image block near 2.2 File Structure"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0008-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0008-001"
- `caption`: "Image block near 2.3.1 Macros in Ocu.h"
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Ocu.h"
- `bbox`: `[36.0, 36.89, 559.3, 227.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in Ocu.h; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "define", "called", "RUNNING", "FC7xxx", "OCU_INDEX", "OCU_E_UNINIT"]
- `anchor`: "Image block near 2.3.1 Macros in Ocu.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 2.6.1 Ocu_ConfigType"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Ocu_ConfigType"
- `bbox`: `[112.25, 551.54, 477.25, 776.29]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1 Ocu_ConfigType; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Ftu", "typedef", "Ocu_ConfigType", "FC7xxx", "OCU_FTU_EXTERNAL_TCK2", "FTU_TCLK2"]
- `anchor`: "Image block near 2.6.1 Ocu_ConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.6.2 Ocu_ChannelConfigType"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Ocu_ChannelConfigType"
- `bbox`: `[112.25, 466.05, 477.5, 625.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.2 Ocu_ChannelConfigType; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "FTU", "Ocu", "const", "Structure", "channel", "Ocu_HwConfigType"]
- `anchor`: "Image block near 2.6.2 Ocu_ChannelConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.6.5 Ocu_FtuConfigType"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Ocu_FtuConfigType"
- `bbox`: `[112.25, 167.28, 420.5, 260.28]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.5 Ocu_FtuConfigType; use the source PDF page for exact visual details."
- `keywords`: ["Ocu", "Ftu", "OCU", "const", "Structure", "Ocu_Ftu_ChannelConfigType", "channel", "Ocu_Ftu_ModuleConfigType"]
- `anchor`: "Image block near 2.6.5 Ocu_FtuConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Generated visual anchor: 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr); generated for retrieval because no formal figure number was detected."
- `keywords`: ["OCU", "FTU", "Ftu", "Ocu", "const", "Ocu_ValueType", "Ocu_SetThresholdType", "Ocu_Init"]
- `anchor`: "2.7.1.1 void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 2.7.1.2 void Ocu_DeInit (void )"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.2 void Ocu_DeInit (void )"
- `bbox`: `[112.25, 37.4, 559.3, 580.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.2 void Ocu_DeInit (void ); use the source PDF page for exact visual details."
- `keywords`: ["OCU", "void", "Ocu_DeInit", "FC7xxx", "ConfigPtr", "Diagram", "Pointer", "selected"]
- `anchor`: "Image block near 2.7.1.2 void Ocu_DeInit (void )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `bbox`: `[112.25, 37.4, 559.3, 410.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber); use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_StopChannel", "Std_ReturnType", "Ocu_StartChannel", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-002"
- `caption`: "Image block near 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `bbox`: `[112.25, 521.74, 559.3, 621.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber); use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_StopChannel", "Std_ReturnType", "Ocu_StartChannel", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.3 void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `bbox`: `[112.25, 37.4, 559.3, 188.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState); use the source PDF page for exact visual details."
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-002"
- `caption`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `bbox`: `[112.25, 316.76, 559.3, 374.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState); use the source PDF page for exact visual details."
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-003"
- `caption`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `bbox`: `[112.25, 519.66, 520.75, 546.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState); use the source PDF page for exact visual details."
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-004"
- `caption`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `bbox`: `[112.25, 692.17, 559.3, 712.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState); use the source PDF page for exact visual details."
- `keywords`: ["PinState", "PinAction", "Ocu", "OCU", "ChannelNumber", "Ocu_ChannelType", "channel", "Ocu_ValueType"]
- `anchor`: "Image block near 2.7.1.5 void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `bbox`: `[112.25, 123.09, 559.3, 172.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 Ocu_ReturnType; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `bbox`: `[112.25, 402.93, 559.3, 441.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 Ocu_ReturnType; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-003"
- `caption`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `bbox`: `[112.25, 604.32, 385.75, 631.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 Ocu_ReturnType; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-004"
- `caption`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.8 Ocu_ReturnType"
- `bbox`: `[112.25, 759.39, 376.25, 786.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 Ocu_ReturnType; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "ChannelNumber", "Ocu_ChannelType", "Ocu_ReturnType", "Ocu_ValueType", "channel", "ReferenceValue"]
- `anchor`: "Image block near 2.7.1.8 Ocu_ReturnType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Generated visual anchor: 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Ocu.h / 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo); generated for retrieval because no formal figure number was detected."
- `keywords`: ["OCU", "Ocu", "void", "const", "pHwConfig", "Ocu_HwConfigType", "u8Channel", "Returns"]
- `anchor`: "2.7.1.12 void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Generated visual anchor: 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Ocu_Ftu.h / 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule); generated for retrieval because no formal figure number was detected."
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "SetThreshold", "const", "pFtuConfig", "Ocu_SetThresholdType"]
- `anchor`: "2.8.2.7 uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Image block near 2.9.2 De-initialization"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `bbox`: `[68.15, 53.83, 591.45, 297.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.2 De-initialization; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "FC7xxx", "All", "disabled", "interrupts", "initialization", "configured"]
- `anchor`: "Image block near 2.9.2 De-initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-002"
- `caption`: "Image block near 2.9.2 De-initialization"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `bbox`: `[36.0, 437.83, 559.3, 686.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.2 De-initialization; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "FC7xxx", "All", "disabled", "interrupts", "initialization", "configured"]
- `anchor`: "Image block near 2.9.2 De-initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 2.9.4 Ocu_SetPinState"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Ocu_SetPinState"
- `bbox`: `[50.15, 70.77, 573.45, 603.07]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.4 Ocu_SetPinState; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinState", "FC7xxx", "Ocu_StartChannel", "Ocu_EnableNotification", "Ocu_Notification", "channel"]
- `anchor`: "Image block near 2.9.4 Ocu_SetPinState"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 2.9.5 Ocu_SetPinAction"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Ocu_SetPinAction"
- `bbox`: `[36.0, 36.9, 559.3, 265.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.5 Ocu_SetPinAction; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinAction", "FC7xxx", "pin", "Set", "action", "After"]
- `anchor`: "Image block near 2.9.5 Ocu_SetPinAction"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-002"
- `caption`: "Image block near 2.9.5 Ocu_SetPinAction"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 Ocu_SetPinAction"
- `bbox`: `[36.0, 337.33, 559.3, 543.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.5 Ocu_SetPinAction; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "Ocu_SetPinAction", "FC7xxx", "pin", "Set", "action", "After"]
- `anchor`: "Image block near 2.9.5 Ocu_SetPinAction"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[184.65, 145.7, 410.65, 432.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos", "Inclusion", "Relation", "has"]
- `anchor`: "Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-002"
- `caption`: "Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[182.88, 480.9, 412.43, 556.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos", "Inclusion", "Relation", "has"]
- `anchor`: "Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-003"
- `caption`: "Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[143.5, 582.41, 451.8, 748.11]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "OcuConfigurationOfOptionalApis", "Tresos", "Inclusion", "Relation", "has"]
- `anchor`: "Image block near 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 3.1.3 OcuConfigSet"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet"
- `bbox`: `[109.7, 56.66, 485.6, 132.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.3 OcuConfigSet; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchor`: "Image block near 3.1.3 OcuConfigSet"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-002"
- `caption`: "Image block near 3.1.3 OcuConfigSet"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet"
- `bbox`: `[122.4, 158.17, 472.9, 414.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.3 OcuConfigSet; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchor`: "Image block near 3.1.3 OcuConfigSet"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-003"
- `caption`: "Image block near 3.1.3 OcuConfigSet"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.3 OcuConfigSet"
- `bbox`: `[222.2, 440.43, 373.1, 606.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.3 OcuConfigSet; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuConfigSet", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings"]
- `anchor`: "Image block near 3.1.3 OcuConfigSet"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 3.1.6 OcuGeneral"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `bbox`: `[214.65, 56.66, 380.65, 222.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6 OcuGeneral; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION"]
- `anchor`: "Image block near 3.1.6 OcuGeneral"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-002"
- `caption`: "Image block near 3.1.6 OcuGeneral"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `bbox`: `[169.65, 271.35, 425.65, 437.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6 OcuGeneral; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION"]
- `anchor`: "Image block near 3.1.6 OcuGeneral"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-003"
- `caption`: "Image block near 3.1.6 OcuGeneral"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation / 3.1.6 OcuGeneral"
- `bbox`: `[112.25, 548.13, 395.25, 570.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6 OcuGeneral; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "OcuConfigurationOfOptionalApis", "FC7xxx", "OcuGeneral", "CommonPublishedInformation", "ENUMERATION"]
- `anchor`: "Image block near 3.1.6 OcuGeneral"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 3.2.2.1 OcuDeinitApi"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi"
- `bbox`: `[112.3, 37.4, 559.3, 167.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 OcuDeinitApi; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.2.1 OcuDeinitApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-002"
- `caption`: "Image block near 3.2.2.1 OcuDeinitApi"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi"
- `bbox`: `[112.25, 278.52, 365.0, 298.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 OcuDeinitApi; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.2.1 OcuDeinitApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-003"
- `caption`: "Image block near 3.2.2.1 OcuDeinitApi"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 OcuConfigurationOfOptionalApis / 3.2.2.1 OcuDeinitApi"
- `bbox`: `[112.25, 607.78, 361.25, 628.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 OcuDeinitApi; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "BOOLEAN", "AUTOSAR_ECUC", "SymbolicNameValue", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.2.1 OcuDeinitApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 3.2.3.1 OcuCountdirection"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `bbox`: `[112.3, 131.91, 426.15, 209.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 OcuCountdirection; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties"]
- `anchor`: "Image block near 3.2.3.1 OcuCountdirection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 3.2.3.1 OcuCountdirection"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `bbox`: `[112.25, 319.49, 443.46, 341.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 OcuCountdirection; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties"]
- `anchor`: "Image block near 3.2.3.1 OcuCountdirection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-003"
- `caption`: "Image block near 3.2.3.1 OcuCountdirection"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `bbox`: `[112.3, 524.21, 559.35, 600.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 OcuCountdirection; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties"]
- `anchor`: "Image block near 3.2.3.1 OcuCountdirection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-004"
- `caption`: "Image block near 3.2.3.1 OcuCountdirection"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 OcuConfigSet / 3.2.3.1 OcuCountdirection"
- `bbox`: `[112.3, 726.94, 354.99, 775.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 OcuCountdirection; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "OcuConfigSet", "Screenshot", "OcuCountdirection", "OCU_UPCOUNTING", "FC7xxx", "Properties"]
- `anchor`: "Image block near 3.2.3.1 OcuCountdirection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 3.2.4.1.1 OcuChannelId"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `bbox`: `[112.3, 182.29, 531.63, 198.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.1 OcuChannelId; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1.1 OcuChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-002"
- `caption`: "Image block near 3.2.4.1.1 OcuChannelId"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `bbox`: `[112.3, 326.4, 529.46, 344.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.1 OcuChannelId; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1.1 OcuChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-003"
- `caption`: "Image block near 3.2.4.1.1 OcuChannelId"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `bbox`: `[112.3, 471.72, 538.23, 492.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.1 OcuChannelId; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1.1 OcuChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-004"
- `caption`: "Image block near 3.2.4.1.1 OcuChannelId"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.1 OcuChannelId"
- `bbox`: `[112.3, 619.93, 559.21, 640.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.1 OcuChannelId; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "Ftu", "Variable", "channel", "Properties", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1.1 OcuChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `bbox`: `[112.3, 37.39, 559.3, 59.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.6 OcuOuptutPinUsed; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-002"
- `caption`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `bbox`: `[112.3, 205.4, 462.35, 224.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.6 OcuOuptutPinUsed; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-003"
- `caption`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `bbox`: `[112.3, 386.79, 536.73, 407.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.6 OcuOuptutPinUsed; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-004"
- `caption`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.6 OcuOuptutPinUsed"
- `bbox`: `[112.3, 604.26, 540.3, 622.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.6 OcuOuptutPinUsed; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "AUTOSAR_ECUC", "OcuOutputPinDefaultState", "OcuOutputPinAction", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.1.6 OcuOuptutPinUsed"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `bbox`: `[112.3, 106.15, 553.86, 127.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.9 OcuChannelTickDuration; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `bbox`: `[112.3, 255.11, 541.22, 273.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.9 OcuChannelTickDuration; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-003"
- `caption`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `bbox`: `[112.3, 418.9, 559.3, 435.25]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.9 OcuChannelTickDuration; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-004"
- `caption`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 OcuChannel / 3.2.4.1 OcuChannel / 3.2.4.1.9 OcuChannelTickDuration"
- `bbox`: `[112.3, 580.41, 559.3, 724.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1.9 OcuChannelTickDuration; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "AUTOSAR_ECUC", "Variable", "ECUC", "OcuChannelTickDuration", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.1.9 OcuChannelTickDuration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 3.2.5.1.1 FTU Module"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `bbox`: `[112.3, 114.97, 559.35, 249.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.1 FTU Module; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.1 FTU Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-002"
- `caption`: "Image block near 3.2.5.1.1 FTU Module"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `bbox`: `[112.25, 394.97, 365.29, 443.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.1 FTU Module; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.1 FTU Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-003"
- `caption`: "Image block near 3.2.5.1.1 FTU Module"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `bbox`: `[112.25, 553.45, 406.54, 571.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.1 FTU Module; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.1 FTU Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-004"
- `caption`: "Image block near 3.2.5.1.1 FTU Module"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.1 FTU Module"
- `bbox`: `[112.3, 716.46, 415.56, 735.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.1 FTU Module; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Ocu", "Ftu", "OcuHWSpecificSettings", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.1 FTU Module"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 3.2.5.1.3 OcuPrescale"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `bbox`: `[112.3, 147.02, 450.21, 169.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.3 OcuPrescale; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.3 OcuPrescale"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-002"
- `caption`: "Image block near 3.2.5.1.3 OcuPrescale"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `bbox`: `[112.3, 331.66, 447.99, 351.89]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.3 OcuPrescale; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.3 OcuPrescale"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-003"
- `caption`: "Image block near 3.2.5.1.3 OcuPrescale"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 OcuHWSpecificSettings / 3.2.5.1 OcuHWSpecificSettings / 3.2.5.1.3 OcuPrescale"
- `bbox`: `[112.25, 550.71, 382.95, 596.48]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1.3 OcuPrescale; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "Variable", "Origin", "OcuPrescale", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.5.1.3 OcuPrescale"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `bbox`: `[112.25, 130.08, 362.36, 151.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 OcuDisableRuntimeErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-002"
- `caption`: "Image block near 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 OcuGeneral / 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `bbox`: `[112.25, 477.53, 559.3, 641.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 OcuDisableRuntimeErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Ocu", "SymbolicNameValue", "Variable", "ECUC", "OcuDisableRuntimeErrorDetect", "BOOLEAN", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.6.2 OcuDisableRuntimeErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-001"
- `caption`: "Image block near 3.2.7.1 ArReleaseMajorVersion"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion"
- `bbox`: `[112.25, 54.83, 528.95, 72.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.1 ArReleaseMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Screenshot", "Properties", "Property", "SymbolicNameValue", "Variable", "AUTOSAR", "CommonPublishedInformation"]
- `anchor`: "Image block near 3.2.7.1 ArReleaseMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-002"
- `caption`: "Image block near 3.2.7.1 ArReleaseMajorVersion"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion"
- `bbox`: `[112.25, 237.9, 365.04, 280.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.1 ArReleaseMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Screenshot", "Properties", "Property", "SymbolicNameValue", "Variable", "AUTOSAR", "CommonPublishedInformation"]
- `anchor`: "Image block near 3.2.7.1 ArReleaseMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 3.2.7.4 SwMajorVersion"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion"
- `bbox`: `[112.25, 201.17, 452.83, 216.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.4 SwMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default"]
- `anchor`: "Image block near 3.2.7.4 SwMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-002"
- `caption`: "Image block near 3.2.7.4 SwMajorVersion"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion"
- `bbox`: `[112.25, 396.59, 463.41, 413.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.4 SwMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "specific", "Origin", "Default"]
- `anchor`: "Image block near 3.2.7.4 SwMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-001"
- `caption`: "Image block near 3.2.7.8 VendorId"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.8 VendorId"
- `bbox`: `[112.25, 37.4, 453.05, 57.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.8 VendorId; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "INTEGER_LABEL", "SymbolicNameValue", "VendorId", "FC7xxx", "Variable", "AUTOSAR", "Screenshot"]
- `anchor`: "Image block near 3.2.7.8 VendorId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 162.64, 559.3, 408.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "FC7xxx", "PWM", "ICU", "GPT", "Guides", "Item"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-002"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 414.74, 559.3, 629.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FTU", "FC7xxx", "PWM", "ICU", "GPT", "Guides", "Item"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 36.9, 559.3, 290.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "OcuEcucPartitionRef", "OcuMulticoreEnabled", "number", "check", "box", "must"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-002"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 297.0, 559.3, 482.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "OcuEcucPartitionRef", "OcuMulticoreEnabled", "number", "check", "box", "must"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-003"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 534.27, 559.3, 707.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "OcuEcucPartitionRef", "OcuMulticoreEnabled", "number", "check", "box", "must"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 36.89, 559.3, 316.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "same", "Different", "channels", "instance", "must", "assigned"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-002"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 368.52, 559.3, 529.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "same", "Different", "channels", "instance", "must", "assigned"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-003"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 535.87, 559.3, 744.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "same", "Different", "channels", "instance", "must", "assigned"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-001"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[36.0, 36.9, 559.3, 291.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "tab", "channel", "OcuHwResourceConfig", "object"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-002"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 414.84, 577.3, 698.89]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "tab", "channel", "OcuHwResourceConfig", "object"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-001"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 36.89, 577.3, 320.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "Configure", "tab", "channel"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-002"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 354.82, 577.3, 638.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "OcuChannel", "FC7xxx", "OcuHWSpecificSettings", "Configure", "tab", "channel"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0052-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0052-001"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 36.89, 577.3, 320.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "EcucPartitions", "multicore", "Choose", "which", "Enable", "allocate"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0052-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0052-002"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 354.82, 577.3, 638.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "EcucPartitions", "multicore", "Choose", "which", "Enable", "allocate"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-001"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 36.89, 577.3, 320.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-002"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 320.95, 577.3, 604.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0054-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0054-001"
- `caption`: "Image block near 4.2 OCU Usage Common Steps"
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 OCU Usage Common Steps"
- `bbox`: `[54.0, 36.89, 577.3, 320.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 OCU Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["OCU", "FC7xxx", "Generate"]
- `anchor`: "Image block near 4.2 OCU Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### REQ-SWS-OCU-00020
- `name`: "SWS_Ocu_00020"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00020`."
- `anchors`:
  - `p6`: "Rejected Requirement 3 SWS_Ocu_00020"
- `aliases`: []

### REQ-SWS-OCU-00023
- `name`: "SWS_Ocu_00023"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00023`."
- `anchors`:
  - `p6`: "Rejected Requirement 4 SWS_Ocu_00023"
- `aliases`: []

### REQ-SWS-OCU-00024
- `name`: "SWS_Ocu_00024"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00024`."
- `anchors`:
  - `p6`: "Rejected Requirement 4 SWS_Ocu_00024"
- `aliases`: []

### REQ-SWS-OCU-00025
- `name`: "SWS_Ocu_00025"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00025`."
- `anchors`:
  - `p6`: "Rejected Requirement 5 SWS_Ocu_00025"
- `aliases`: []

### REQ-SWS-OCU-00026
- `name`: "SWS_Ocu_00026"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00026`."
- `anchors`:
  - `p6`: "Rejected Requirement 6 SWS_Ocu_00026"
- `aliases`: []

### REQ-SWS-OCU-00125
- `name`: "SWS_Ocu_00125"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00125`."
- `anchors`:
  - `p6`: "Rejected Requirement 6 SWS_Ocu_00125"
- `aliases`: []

### REQ-SWS-OCU-00155
- `name`: "SWS_Ocu_00155"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00155`."
- `anchors`:
  - `p6`: "Rejected Requirement 6 SWS_Ocu_00155"
- `aliases`: []

### REQ-SWS-OCU-00156
- `name`: "SWS_Ocu_00156"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Ocu_00156`."
- `anchors`:
  - `p6`: "Rejected Requirement 6 SWS_Ocu_00156"
- `aliases`: []

### REQ-SWS-OCU-00168
- `name`: "SWS_Ocu_00168"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Ocu_00168`."
- `anchors`:
  - `p7`: "Rejected Requirement 6 SWS_Ocu_00168"
- `aliases`: []

### API-OCU-CHANNELTYPE
- `name`: "Ocu_ChannelType"
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: `16,17,19,21,22,23,24,25,26`
- `brief`: "api index entry for `Ocu_ChannelType`."
- `anchors`:
  - `p16`: "typedef uint8 Ocu_ChannelType"
  - `p17`: "const Ocu_ChannelType nNumChannels"
  - `p19`: "Ocu_ChannelType u8ChannelNumber"
  - `p21`: "void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
  - `p22`: "void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
- `aliases`: []

### API-OCU-SETPINACTION
- `name`: "Ocu_SetPinAction"
- `type`: `api`
- `primary_page`: `4`
- `physical_pages`: `4,8,9,12,22,25,31,36`
- `brief`: "api index entry for `Ocu_SetPinAction`."
- `anchors`:
  - `p4`: "Ocu_SetPinAction ..........................................................................................................................…"
  - `p8`: "API Ocu_SetPinAction service called with an invalid pin action."
  - `p9`: "API Ocu_SetPinState or Ocu_SetPinAction services called for a channel that does not have an associated output pin."
  - `p12`: "Switch to indicate that Ocu_SetPinAction API is supported."
  - `p22`: "void Ocu_SetPinAction(Ocu_ChannelType ChannelNumber, Ocu_PinActionType PinAction)"
- `aliases`: []

### API-OCU-SETPINSTATE
- `name`: "Ocu_SetPinState"
- `type`: `api`
- `primary_page`: `4`
- `physical_pages`: `4,9,12,22,25,30,36`
- `brief`: "api index entry for `Ocu_SetPinState`."
- `anchors`:
  - `p4`: "Ocu_SetPinState ...........................................................................................................................…"
  - `p9`: "API Ocu_SetPinState or Ocu_SetPinAction services called for a channel that does not have an associated output pin."
  - `p12`: "Switch to indicate that Ocu_SetPinState API is supported."
  - `p22`: "void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
  - `p25`: "Ocu_SetPinState()"
- `aliases`: []

### API-OCU-GETVERSIONINFO
- `name`: "Ocu_GetVersionInfo"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,8,9,12,24,36`
- `brief`: "api index entry for `Ocu_GetVersionInfo`."
- `anchors`:
  - `p6`: "If source code for caller and callee of Ocu_GetVersionInfo is available; the OCU driver should"
  - `p8`: "Generated when a NULL pointer is passed to Ocu_GetVersionInfo function."
  - `p9`: "API service ID of Ocu_GetVersionInfo function."
  - `p12`: "Switch to indicate that Ocu_GetVersionInfo API is supported."
  - `p24`: "void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `aliases`: []

### API-OCU-DEINIT
- `name`: "Ocu_DeInit"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,12,20,24,35`
- `brief`: "api index entry for `Ocu_DeInit`."
- `anchors`:
  - `p9`: "API service ID of Ocu_DeInit function."
  - `p12`: "Switch to indicate that Ocu_DeInit API is supported."
  - `p20`: "void Ocu_DeInit (void )"
  - `p24`: "Ocu_DeInit()"
  - `p35`: "Add/Remove the service Ocu_DeInit() from the code."
- `aliases`: []

### API-OCU-GETCOUNTER
- `name`: "Ocu_GetCounter"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,12,22,25,35`
- `brief`: "api index entry for `Ocu_GetCounter`."
- `anchors`:
  - `p9`: "API service ID of Ocu_GetCounter function."
  - `p12`: "Switch to indicate that Ocu_GetCounter API is supported."
  - `p22`: "Ocu_ValueType Ocu_GetCounter(Ocu_ChannelType ChannelNumber)"
  - `p25`: "Ocu_GetCounter()"
  - `p35`: "Add/Remove the services Ocu_GetCounter() from the code."
- `aliases`: []

### API-OCU-SETABSOLUTETHRESHOLD
- `name`: "Ocu_SetAbsoluteThreshold"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,12,23,26,35`
- `brief`: "api index entry for `Ocu_SetAbsoluteThreshold`."
- `anchors`:
  - `p9`: "API service ID of Ocu_SetAbsoluteThreshold function."
  - `p12`: "Switch to indicate that Ocu_SetAbsoluteThreshold API is supported."
  - `p23`: "Ocu_SetAbsoluteThreshold(Ocu_ChannelType"
  - `p26`: "Ocu_SetAbsoluteThreshold()"
  - `p35`: "Adds/removes the service Ocu_SetAbsoluteThreshold() from the code."
- `aliases`: []

### API-OCU-SETRELATIVETHRESHOLD
- `name`: "Ocu_SetRelativeThreshold"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,13,23,26,36`
- `brief`: "api index entry for `Ocu_SetRelativeThreshold`."
- `anchors`:
  - `p9`: "API service ID of Ocu_SetRelativeThreshold function."
  - `p13`: "Switch to indicate that Ocu_SetRelativeThreshold API is supported."
  - `p23`: "Ocu_SetRelativeThreshold(Ocu_ChannelType"
  - `p26`: "Ocu_SetRelativeThreshold()"
  - `p36`: "Adds/removes the service Ocu_SetRelativeThreshold() from the code."
- `aliases`: []

### API-OCU-STARTCHANNEL
- `name`: "Ocu_StartChannel"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,9,21,24,30`
- `brief`: "api index entry for `Ocu_StartChannel`."
- `anchors`:
  - `p8`: "API Ocu_StartChannel service called on a channel that is in state RUNNING."
  - `p9`: "API service ID of Ocu_StartChannel function."
  - `p21`: "Std_ReturnType Ocu_StartChannel(Ocu_ChannelType ChannelNumber)"
  - `p24`: "Ocu_StartChannel()."
  - `p30`: "The OCU channel is started after Ocu_StartChannel(). No notifications occur until the first call of"
- `aliases`: []

### API-OCU-ENABLENOTIFICATION
- `name`: "Ocu_EnableNotification"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,23,30,35`
- `brief`: "api index entry for `Ocu_EnableNotification`."
- `anchors`:
  - `p10`: "API service ID of Ocu_EnableNotification function."
  - `p23`: "void Ocu_EnableNotification(Ocu_ChannelType ChannelNumber)"
  - `p30`: "Ocu_EnableNotification(...). Ocu_Notification<#Channel> represents the configured callback function for a channel."
  - `p35`: "Adds/removes the services Ocu_EnableNotification() and Ocu_DisableNotification() from the code."
- `aliases`: []

### API-OCU-INIT
- `name`: "Ocu_Init"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,9,19,24`
- `brief`: "api index entry for `Ocu_Init`."
- `anchors`:
  - `p8`: "API Ocu_Init service called while the OCU driver has already been initialised."
  - `p9`: "API Ocu_Init service called with wrong parameter."
  - `p19`: "void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
  - `p24`: "Ocu_Init()"
- `aliases`: []

### API-OCU-FTU-CHANNELCONFIGTYPE
- `name`: "Ocu_Ftu_ChannelConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,18,26`
- `brief`: "api index entry for `Ocu_Ftu_ChannelConfigType`."
- `anchors`:
  - `p3`: "Ocu_Ftu_ChannelConfigType .................................................................................................................…"
  - `p18`: "const Ocu_Ftu_ChannelConfigType (*pChannelsConfig)[]"
  - `p26`: "Ocu_Ftu_ChannelConfigType"
- `aliases`: []

### API-OCU-FTU-MODULECONFIGTYPE
- `name`: "Ocu_Ftu_ModuleConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,18,26`
- `brief`: "api index entry for `Ocu_Ftu_ModuleConfigType`."
- `anchors`:
  - `p3`: "Ocu_Ftu_ModuleConfigType ..................................................................................................................…"
  - `p18`: "const Ocu_Ftu_ModuleConfigType (*pModulesConfig)[]"
  - `p26`: "Ocu_Ftu_ModuleConfigType * pFtuModuleConfig, const uint8 u8Channel)"
- `aliases`: []

### API-OCU-DISABLENOTIFICATION
- `name`: "Ocu_DisableNotification"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,23,35`
- `brief`: "api index entry for `Ocu_DisableNotification`."
- `anchors`:
  - `p9`: "API service ID of Ocu_DisableNotification function."
  - `p23`: "void Ocu_DisableNotification(Ocu_ChannelType ChannelNumber)"
  - `p35`: "Adds/removes the services Ocu_EnableNotification() and Ocu_DisableNotification() from the code."
- `aliases`: []

### API-OCU-STOPCHANNEL
- `name`: "Ocu_StopChannel"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,21,25`
- `brief`: "api index entry for `Ocu_StopChannel`."
- `anchors`:
  - `p9`: "API service ID of Ocu_StopChannel function."
  - `p21`: "void Ocu_StopChannel(Ocu_ChannelType ChannelNumber)"
  - `p25`: "Ocu_StopChannel()."
- `aliases`: []

### API-OCU-HW-DEINIT
- `name`: "Ocu_Hw_DeInit"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,26`
- `brief`: "api index entry for `Ocu_Hw_DeInit`."
- `anchors`:
  - `p24`: "void Ocu_Hw_DeInit(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
  - `p26`: "Ocu_Hw_DeInit()"
- `aliases`: []

### API-OCU-HW-GETCOUNTER
- `name`: "Ocu_Hw_GetCounter"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,28`
- `brief`: "api index entry for `Ocu_Hw_GetCounter`."
- `anchors`:
  - `p25`: "Ocu_ValueType Ocu_Hw_GetCounter(Ocu_ChannelType u8ChannelNumber)"
  - `p28`: "Ocu_Hw_GetCounter()"
- `aliases`: []

### API-OCU-HW-INIT
- `name`: "Ocu_Hw_Init"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,26`
- `brief`: "api index entry for `Ocu_Hw_Init`."
- `anchors`:
  - `p24`: "void Ocu_Hw_Init(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
  - `p26`: "Ocu_Hw_Init()"
- `aliases`: []

### API-OCU-HW-SETABSOLUTETHRESHOLD
- `name`: "Ocu_Hw_SetAbsoluteThreshold"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,28`
- `brief`: "api index entry for `Ocu_Hw_SetAbsoluteThreshold`."
- `anchors`:
  - `p25`: "Ocu_Hw_SetAbsoluteThreshold(Ocu_ChannelType"
  - `p28`: "Ocu_Hw_SetAbsoluteThreshold()"
- `aliases`: []

### API-OCU-HW-SETPINACTION
- `name`: "Ocu_Hw_SetPinAction"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,27`
- `brief`: "api index entry for `Ocu_Hw_SetPinAction`."
- `anchors`:
  - `p25`: "void Ocu_Hw_SetPinAction(Ocu_ChannelType u8ChannelNumber, Ocu_PinActionType ePinAction)"
  - `p27`: "Ocu_Hw_SetPinAction()"
- `aliases`: []

### API-OCU-HW-SETPINSTATE
- `name`: "Ocu_Hw_SetPinState"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,27`
- `brief`: "api index entry for `Ocu_Hw_SetPinState`."
- `anchors`:
  - `p25`: "void Ocu_Hw_SetPinState(Ocu_ChannelType u8ChannelNumber, Ocu_PinStateType ePinState)"
  - `p27`: "Ocu_Hw_SetPinState()"
- `aliases`: []

### API-OCU-HW-STARTCHANNEL
- `name`: "Ocu_Hw_StartChannel"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,27`
- `brief`: "api index entry for `Ocu_Hw_StartChannel`."
- `anchors`:
  - `p24`: "void Ocu_Hw_StartChannel(Ocu_ChannelType u8ChannelNumber)"
  - `p27`: "Ocu_Hw_StartChannel()"
- `aliases`: []

### API-OCU-HW-STOPCHANNEL
- `name`: "Ocu_Hw_StopChannel"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,27`
- `brief`: "api index entry for `Ocu_Hw_StopChannel`."
- `anchors`:
  - `p25`: "void Ocu_Hw_StopChannel(Ocu_ChannelType u8ChannelNumber)"
  - `p27`: "Ocu_Hw_StopChannel()"
- `aliases`: []

### API-OCU-HWCHANNELCONFIGTYPE
- `name`: "Ocu_HwChannelConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `brief`: "api index entry for `Ocu_HwChannelConfigType`."
- `anchors`:
  - `p3`: "Ocu_HwChannelConfigType ...................................................................................................................…"
  - `p17`: "const Ocu_HwChannelConfigType (*pHwChannelsConfig)[]"
- `aliases`: []

### API-OCU-FTU-DEINIT
- `name`: "Ocu_Ftu_DeInit"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Ocu_Ftu_DeInit`."
- `anchors`:
  - `p26`: "Ocu_Ftu_DeInit(const"
- `aliases`: []

### API-OCU-FTU-GETCOUNTER
- `name`: "Ocu_Ftu_GetCounter"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `Ocu_Ftu_GetCounter`."
- `anchors`:
  - `p28`: "uint16 Ocu_Ftu_GetCounter(uint8 u8HwModule)"
- `aliases`: []

### API-OCU-FTU-INIT
- `name`: "Ocu_Ftu_Init"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Ocu_Ftu_Init`."
- `anchors`:
  - `p26`: "Ocu_Ftu_Init(const"
- `aliases`: []

### API-OCU-FTU-SETABSOLUTETHRESHOLD
- `name`: "Ocu_Ftu_SetAbsoluteThreshold"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `Ocu_Ftu_SetAbsoluteThreshold`."
- `anchors`:
  - `p28`: "void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType *"
- `aliases`: []

### API-OCU-FTU-SETPINACTION
- `name`: "Ocu_Ftu_SetPinAction"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Ocu_Ftu_SetPinAction`."
- `anchors`:
  - `p27`: "Ocu_Ftu_SetPinAction(const"
- `aliases`: []

### API-OCU-FTU-SETPINSTATE
- `name`: "Ocu_Ftu_SetPinState"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Ocu_Ftu_SetPinState`."
- `anchors`:
  - `p27`: "void Ocu_Ftu_SetPinState(uint8 u8HwModule, uint8 u8HwChannel, Ocu_PinStateType ePinState)"
- `aliases`: []

### API-OCU-FTU-SETRELATIVETHRESHOLD
- `name`: "Ocu_Ftu_SetRelativeThreshold"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `Ocu_Ftu_SetRelativeThreshold`."
- `anchors`:
  - `p28`: "void Ocu_Ftu_SetRelativeThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType * const"
- `aliases`: []

### API-OCU-FTU-STARTCHANNEL
- `name`: "Ocu_Ftu_StartChannel"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Ocu_Ftu_StartChannel`."
- `anchors`:
  - `p27`: "void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)"
- `aliases`: []

### API-OCU-FTU-STOPCHANNEL
- `name`: "Ocu_Ftu_StopChannel"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Ocu_Ftu_StopChannel`."
- `anchors`:
  - `p27`: "void Ocu_Ftu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel)"
- `aliases`: []

### API-OCU-HW-SETRELATIVETHRESHOLD
- `name`: "Ocu_Hw_SetRelativeThreshold"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Ocu_Hw_SetRelativeThreshold`."
- `anchors`:
  - `p26`: "Ocu_Hw_SetRelativeThreshold(Ocu_ChannelType"
- `aliases`: []

### API-OCU-HL-STOPTIMER
- `name`: "Ocu_HL_StopTimer"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `Ocu_HL_StopTimer`."
- `anchors`:
  - `p28`: "Ocu_HL_StopTimer()"
- `aliases`: []

### API-UNIT
- `name`: "Unit"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Unit`."
- `anchors`:
  - `p5`: "The OCU driver provides logical channels which are configured by Flexible Timer Unit (FTU) hardware."
- `aliases`: []

### CFG-OCUCHANNEL
- `name`: "OcuChannel"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,17,33,37,38,40,50,51`
- `brief`: "config index entry for `OcuChannel`."
- `anchors`:
  - `p4`: "OcuChannel ................................................................................................................................…"
  - `p17`: "const Ocu_ConfigChannelType *pOcuChannelConfig"
  - `p33`: "OcuChannel"
  - `p37`: "OcuChannel"
  - `p38`: "OcuChannelId"
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,34,44`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "CommonPublishedInformation ................................................................................................................…"
  - `p34`: "CommonPublishedInformation"
  - `p44`: "CommonPublishedInformation"
- `aliases`: []

### CFG-OCUCONFIGSET
- `name`: "OcuConfigSet"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,33,37`
- `brief`: "config index entry for `OcuConfigSet`."
- `anchors`:
  - `p4`: "OcuConfigSet ..............................................................................................................................…"
  - `p33`: "OcuConfigSet"
  - `p37`: "OcuConfigSet"
- `aliases`: []

### CFG-OCUCONFIGURATIONOFOPTIONALAPIS
- `name`: "OcuConfigurationOfOptionalApis"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,32,34`
- `brief`: "config index entry for `OcuConfigurationOfOptionalApis`."
- `anchors`:
  - `p4`: "OcuConfigurationOfOptionalApis ............................................................................................................…"
  - `p32`: "OcuConfigurationOfOptionalApis"
  - `p34`: "OcuConfigurationOfOptionalApis"
- `aliases`: []

### CFG-OCUGENERAL
- `name`: "OcuGeneral"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,34,42`
- `brief`: "config index entry for `OcuGeneral`."
- `anchors`:
  - `p4`: "OcuGeneral ................................................................................................................................…"
  - `p34`: "OcuGeneral"
  - `p42`: "OcuGeneral"
- `aliases`: []

### CFG-FTUHWCHANNEL
- `name`: "FtuHwChannel"
- `type`: `config`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "config index entry for `FtuHwChannel`."
- `anchors`:
  - `p38`: "FtuHwChannel"
- `aliases`: []

### CFG-OCUASSIGNEDHARDWARECHANNEL
- `name`: "OcuAssignedHardwareChannel"
- `type`: `config`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "config index entry for `OcuAssignedHardwareChannel`."
- `anchors`:
  - `p38`: "OcuAssignedHardwareChannel"
- `aliases`: []

### CFG-OCUCHANNELECUCPARTITIONREF
- `name`: "OcuChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "config index entry for `OcuChannelEcucPartitionRef`."
- `anchors`:
  - `p40`: "OcuChannelEcucPartitionRef"
- `aliases`: []

### CFG-OCUCHANNELID
- `name`: "OcuChannelId"
- `type`: `config`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "config index entry for `OcuChannelId`."
- `anchors`:
  - `p38`: "OcuChannelId"
- `aliases`: []

### CFG-OCUCHANNELTICKDURATION
- `name`: "OcuChannelTickDuration"
- `type`: `config`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "config index entry for `OcuChannelTickDuration`."
- `anchors`:
  - `p40`: "OcuChannelTickDuration"
- `aliases`: []

### CFG-OCUNOTIFICATION
- `name`: "OcuNotification"
- `type`: `config`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "config index entry for `OcuNotification`."
- `anchors`:
  - `p40`: "OcuNotification"
- `aliases`: []

### CFG-OCUNOTIFICATIONSUPPORTED
- `name`: "OcuNotificationSupported"
- `type`: `config`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "config index entry for `OcuNotificationSupported`."
- `anchors`:
  - `p35`: "OcuNotificationSupported"
- `aliases`: []

### CFG-OCUCHANNELPARTITIONMAPPINGPTR
- `name`: "OcuChannelPartitionMappingPtr"
- `type`: `config`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "config index entry for `OcuChannelPartitionMappingPtr`."
- `anchors`:
  - `p17`: "const uint8 * OcuChannelPartitionMappingPtr"
- `aliases`: []

### CFG-OCUHWRESOURCECONFIG
- `name`: "OcuHwResourceConfig"
- `type`: `config`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "config index entry for `OcuHwResourceConfig`."
- `anchors`:
  - `p50`: "Enable the selected channel in OcuHwResourceConfig tab."
- `aliases`: []

### CFG-OCU-NOTIFICATION
- `name`: "Ocu_Notification"
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "config index entry for `Ocu_Notification`."
- `anchors`:
  - `p30`: "Ocu_EnableNotification(...). Ocu_Notification<#Channel> represents the configured callback function for a channel."
- `aliases`: []

### MACRO-AUTOSAR-ECUC
- `name`: "AUTOSAR_ECUC"
- `type`: `macro`
- `primary_page`: `35`
- `physical_pages`: `35,36,37,38,39,40,42,43,44`
- `brief`: "macro index entry for `AUTOSAR_ECUC`."
- `anchors`:
  - `p35`: "AUTOSAR_ECUC"
  - `p36`: "AUTOSAR_ECUC"
  - `p37`: "AUTOSAR_ECUC"
  - `p38`: "AUTOSAR_ECUC"
  - `p39`: "AUTOSAR_ECUC"
- `aliases`: []

### MACRO-OCU-DISABLE
- `name`: "OCU_DISABLE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,22,27,39`
- `brief`: "macro index entry for `OCU_DISABLE`."
- `anchors`:
  - `p14`: "OCU_DISABLE = 3"
  - `p22`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p27`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p39`: "OCU_DISABLE"
- `aliases`: []

### MACRO-OCU-SET-HIGH
- `name`: "OCU_SET_HIGH"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,22,27,39`
- `brief`: "macro index entry for `OCU_SET_HIGH`."
- `anchors`:
  - `p14`: "OCU_SET_HIGH = 0"
  - `p22`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p27`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p39`: "OCU_SET_HIGH,"
- `aliases`: []

### MACRO-OCU-SET-LOW
- `name`: "OCU_SET_LOW"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,22,27,39`
- `brief`: "macro index entry for `OCU_SET_LOW`."
- `anchors`:
  - `p14`: "OCU_SET_LOW = 1"
  - `p22`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p27`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p39`: "OCU_SET_LOW,"
- `aliases`: []

### MACRO-OCU-TOGGLE
- `name`: "OCU_TOGGLE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,22,27,39`
- `brief`: "macro index entry for `OCU_TOGGLE`."
- `anchors`:
  - `p14`: "OCU_TOGGLE = 2"
  - `p22`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p27`: "OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE."
  - `p39`: "OCU_TOGGLE,"
- `aliases`: []

### MACRO-INTEGER-LABEL
- `name`: "INTEGER_LABEL"
- `type`: `macro`
- `primary_page`: `44`
- `physical_pages`: `44,45,46`
- `brief`: "macro index entry for `INTEGER_LABEL`."
- `anchors`:
  - `p44`: "Variable: INTEGER_LABEL"
  - `p45`: "Variable: INTEGER_LABEL"
  - `p46`: "Variable: INTEGER_LABEL"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,32,34`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 32"
  - `p32`: "IMPLEMENTATION_CONFIG_VARIANT"
  - `p34`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p12`: "#define OCU_DEV_ERROR_DETECT (STD_ON)"
  - `p13`: "#define OCU_SET_RELATIVE_THRESHOLD_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-LOW
- `name`: "OCU_LOW"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,39`
- `brief`: "macro index entry for `OCU_LOW`."
- `anchors`:
  - `p14`: "OCU_LOW = 1U"
  - `p39`: "OCU_HIGH, OCU_LOW"
- `aliases`: []

### MACRO-OCU-UPCOUNTING
- `name`: "OCU_UPCOUNTING"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,37`
- `brief`: "macro index entry for `OCU_UPCOUNTING`."
- `anchors`:
  - `p14`: "OCU_UPCOUNTING = 0U"
  - `p37`: "OCU_DOWNCOUNTING, OCU_UPCOUNTING"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p12`: "#define OCU_MUTILCORE_SUPPORT (STD_OFF)"
  - `p13`: "#define OCU_DOWNCOUNTING_SUPPORED (STD_OFF)"
- `aliases`: []

### MACRO-OCU-DOWNCOUNTING
- `name`: "OCU_DOWNCOUNTING"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,37`
- `brief`: "macro index entry for `OCU_DOWNCOUNTING`."
- `anchors`:
  - `p14`: "OCU_DOWNCOUNTING = 1U"
  - `p37`: "OCU_DOWNCOUNTING, OCU_UPCOUNTING"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV1
- `name`: "OCU_FTU_PRESCALER_DIV1"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,42`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV1`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV1 = 0"
  - `p42`: "OCU_FTU_PRESCALER_DIV1"
- `aliases`: []

### MACRO-OCU-HIGH
- `name`: "OCU_HIGH"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,39`
- `brief`: "macro index entry for `OCU_HIGH`."
- `anchors`:
  - `p14`: "OCU_HIGH = 0U"
  - `p39`: "OCU_HIGH, OCU_LOW"
- `aliases`: []

### MACRO-OCU-FTU-CH-PER-MODULES
- `name`: "OCU_FTU_CH_PER_MODULES"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_FTU_CH_PER_MODULES`."
- `anchors`:
  - `p13`: "#define OCU_FTU_CH_PER_MODULES ((uint8)8U)"
- `aliases`: []

### MACRO-OCU-FTU-DBG-COUNTER-STOP-CH
- `name`: "OCU_FTU_DBG_COUNTER_STOP_CH"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_DBG_COUNTER_STOP_CH`."
- `anchors`:
  - `p15`: "OCU_FTU_DBG_COUNTER_STOP_CH"
- `aliases`: []

### MACRO-OCU-FTU-HW-CHANNELS
- `name`: "OCU_FTU_HW_CHANNELS"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_FTU_HW_CHANNELS`."
- `anchors`:
  - `p13`: "#define OCU_FTU_HW_CHANNELS (uint8)(OCU_FTU_HW_MODULES * OCU_FTU_CH_PER_MODULES)"
- `aliases`: []

### MACRO-OCU-FTU-HW-MODULES
- `name`: "OCU_FTU_HW_MODULES"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_FTU_HW_MODULES`."
- `anchors`:
  - `p13`: "#define OCU_FTU_HW_MODULES ((uint8)12U)"
- `aliases`: []

### MACRO-OCU-DEINIT-API
- `name`: "OCU_DEINIT_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_DEINIT_API`."
- `anchors`:
  - `p12`: "#define OCU_DEINIT_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-DEINIT-ID
- `name`: "OCU_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_DEINIT_ID`."
- `anchors`:
  - `p9`: "#define OCU_DEINIT_ID ((uint8)0x01U)"
- `aliases`: []

### MACRO-OCU-DEV-ERROR-DETECT
- `name`: "OCU_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_DEV_ERROR_DETECT`."
- `anchors`:
  - `p12`: "#define OCU_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-OCU-DISABLENOTIFICATION-ID
- `name`: "OCU_DISABLENOTIFICATION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_DISABLENOTIFICATION_ID`."
- `anchors`:
  - `p9`: "#define OCU_DISABLENOTIFICATION_ID ((uint8)0x0AU)"
- `aliases`: []

### MACRO-OCU-DISABLE-DET-REPORT-RUNTIME-ERROR-STATUS
- `name`: "OCU_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS`."
- `anchors`:
  - `p13`: "#define OCU_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS (STD_OFF)"
- `aliases`: []

### MACRO-OCU-DOWNCOUNTING-SUPPORED
- `name`: "OCU_DOWNCOUNTING_SUPPORED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_DOWNCOUNTING_SUPPORED`."
- `anchors`:
  - `p13`: "#define OCU_DOWNCOUNTING_SUPPORED (STD_OFF)"
- `aliases`: []

### MACRO-OCU-ENABLENOTIFICATION-ID
- `name`: "OCU_ENABLENOTIFICATION_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_ENABLENOTIFICATION_ID`."
- `anchors`:
  - `p10`: "#define OCU_ENABLENOTIFICATION_ID ((uint8)0x0BU)"
- `aliases`: []

### MACRO-OCU-E-ALREADY-INITIALIZED
- `name`: "OCU_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p8`: "#define OCU_E_ALREADY_INITIALIZED ((uint8)0x07U)"
- `aliases`: []

### MACRO-OCU-E-BUSY
- `name`: "OCU_E_BUSY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_BUSY`."
- `anchors`:
  - `p8`: "#define OCU_E_BUSY ((uint8)0x09U)"
- `aliases`: []

### MACRO-OCU-E-INIT-FAILED
- `name`: "OCU_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_E_INIT_FAILED`."
- `anchors`:
  - `p9`: "#define OCU_E_INIT_FAILED ((uint8)0x0BU)"
- `aliases`: []

### MACRO-OCU-E-NO-VALID-NOTIF
- `name`: "OCU_E_NO_VALID_NOTIF"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_NO_VALID_NOTIF`."
- `anchors`:
  - `p8`: "#define OCU_E_NO_VALID_NOTIF ((uint8)0x06U)"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-ACTION
- `name`: "OCU_E_PARAM_INVALID_ACTION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_ACTION`."
- `anchors`:
  - `p8`: "#define OCU_E_PARAM_INVALID_ACTION ((uint8)0x05U)"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-CHANNEL
- `name`: "OCU_E_PARAM_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_CHANNEL`."
- `anchors`:
  - `p8`: "#define OCU_E_PARAM_INVALID_CHANNEL ((uint8)0x03U)"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-STATE
- `name`: "OCU_E_PARAM_INVALID_STATE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_STATE`."
- `anchors`:
  - `p8`: "#define OCU_E_PARAM_INVALID_STATE ((uint8)0x04U)"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-VALUE
- `name`: "OCU_E_PARAM_INVALID_VALUE"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_VALUE`."
- `anchors`:
  - `p9`: "#define OCU_E_PARAM_INVALID_VALUE ((uint8)0x1BU)"
- `aliases`: []

### MACRO-OCU-E-PARAM-NO-PIN
- `name`: "OCU_E_PARAM_NO_PIN"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_E_PARAM_NO_PIN`."
- `anchors`:
  - `p9`: "#define OCU_E_PARAM_NO_PIN ((uint8)0x0AU)"
- `aliases`: []

### MACRO-OCU-E-PARAM-POINTER
- `name`: "OCU_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_PARAM_POINTER`."
- `anchors`:
  - `p8`: "#define OCU_E_PARAM_POINTER ((uint8)0x08U)"
- `aliases`: []

### MACRO-OCU-E-UNINIT
- `name`: "OCU_E_UNINIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_E_UNINIT`."
- `anchors`:
  - `p8`: "#define OCU_E_UNINIT ((uint8)0x02U)"
- `aliases`: []

### MACRO-OCU-FTU-0
- `name`: "OCU_FTU_0"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_0`."
- `anchors`:
  - `p10`: "#define OCU_FTU_0 ((uint8)0x00)"
- `aliases`: []

### MACRO-OCU-FTU-1
- `name`: "OCU_FTU_1"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_1`."
- `anchors`:
  - `p10`: "#define OCU_FTU_1 ((uint8)0x01)"
- `aliases`: []

### MACRO-OCU-FTU-10
- `name`: "OCU_FTU_10"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_10`."
- `anchors`:
  - `p10`: "#define OCU_FTU_10 ((uint8)0x0A)"
- `aliases`: []

### MACRO-OCU-FTU-11
- `name`: "OCU_FTU_11"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_11`."
- `anchors`:
  - `p10`: "#define OCU_FTU_11 ((uint8)0x0B)"
- `aliases`: []

### MACRO-OCU-FTU-2
- `name`: "OCU_FTU_2"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_2`."
- `anchors`:
  - `p10`: "#define OCU_FTU_2 ((uint8)0x02)"
- `aliases`: []

### MACRO-OCU-FTU-3
- `name`: "OCU_FTU_3"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_3`."
- `anchors`:
  - `p10`: "#define OCU_FTU_3 ((uint8)0x03)"
- `aliases`: []

### MACRO-OCU-FTU-4
- `name`: "OCU_FTU_4"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_4`."
- `anchors`:
  - `p10`: "#define OCU_FTU_4 ((uint8)0x04)"
- `aliases`: []

### MACRO-OCU-FTU-5
- `name`: "OCU_FTU_5"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_5`."
- `anchors`:
  - `p10`: "#define OCU_FTU_5 ((uint8)0x05)"
- `aliases`: []

### MACRO-OCU-FTU-6
- `name`: "OCU_FTU_6"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_6`."
- `anchors`:
  - `p10`: "#define OCU_FTU_6 ((uint8)0x06)"
- `aliases`: []

### MACRO-OCU-FTU-7
- `name`: "OCU_FTU_7"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_7`."
- `anchors`:
  - `p10`: "#define OCU_FTU_7 ((uint8)0x07)"
- `aliases`: []

### MACRO-OCU-FTU-8
- `name`: "OCU_FTU_8"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_8`."
- `anchors`:
  - `p10`: "#define OCU_FTU_8 ((uint8)0x08)"
- `aliases`: []

### MACRO-OCU-FTU-9
- `name`: "OCU_FTU_9"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_9`."
- `anchors`:
  - `p10`: "#define OCU_FTU_9 ((uint8)0x09)"
- `aliases`: []

### MACRO-OCU-FTU-CH-0
- `name`: "OCU_FTU_CH_0"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_CH_0`."
- `anchors`:
  - `p10`: "#define OCU_FTU_CH_0 ((uint8)0x00)"
- `aliases`: []

### MACRO-OCU-FTU-CH-1
- `name`: "OCU_FTU_CH_1"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_CH_1`."
- `anchors`:
  - `p10`: "#define OCU_FTU_CH_1 ((uint8)0x01)"
- `aliases`: []

### MACRO-OCU-FTU-CH-2
- `name`: "OCU_FTU_CH_2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_FTU_CH_2`."
- `anchors`:
  - `p11`: "#define OCU_FTU_CH_2 ((uint8)0x02)"
- `aliases`: []

### MACRO-OCU-FTU-CH-3
- `name`: "OCU_FTU_CH_3"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_FTU_CH_3`."
- `anchors`:
  - `p11`: "#define OCU_FTU_CH_3 ((uint8)0x03)"
- `aliases`: []

### MACRO-OCU-FTU-CH-4
- `name`: "OCU_FTU_CH_4"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_FTU_CH_4`."
- `anchors`:
  - `p11`: "#define OCU_FTU_CH_4 ((uint8)0x04)"
- `aliases`: []

### MACRO-OCU-FTU-CH-5
- `name`: "OCU_FTU_CH_5"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_FTU_CH_5`."
- `anchors`:
  - `p11`: "#define OCU_FTU_CH_5 ((uint8)0x05)"
- `aliases`: []

### MACRO-OCU-FTU-CH-6
- `name`: "OCU_FTU_CH_6"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_FTU_CH_6`."
- `anchors`:
  - `p11`: "#define OCU_FTU_CH_6 ((uint8)0x06)"
- `aliases`: []

### MACRO-OCU-FTU-CH-7
- `name`: "OCU_FTU_CH_7"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_FTU_CH_7`."
- `anchors`:
  - `p11`: "#define OCU_FTU_CH_7 ((uint8)0x07)"
- `aliases`: []

### MACRO-OCU-FTU-HW-CHANNEL-MAX
- `name`: "OCU_FTU_HW_CHANNEL_MAX"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_FTU_HW_CHANNEL_MAX`."
- `anchors`:
  - `p13`: "#define OCU_FTU_HW_CHANNEL_MAX (3U)"
- `aliases`: []

### MACRO-OCU-FTU-MODULE-CHANNELS-NO
- `name`: "OCU_FTU_MODULE_CHANNELS_NO"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_FTU_MODULE_CHANNELS_NO`."
- `anchors`:
  - `p13`: "#define OCU_FTU_MODULE_CHANNELS_NO (8U)"
- `aliases`: []

### MACRO-OCU-FTU-SWOCTRL-FORCED-VALUE-OFFSET
- `name`: "OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET`."
- `anchors`:
  - `p10`: "#define OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET ((uint8)8U)"
- `aliases`: []

### MACRO-OCU-GETCOUNTER-ID
- `name`: "OCU_GETCOUNTER_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_GETCOUNTER_ID`."
- `anchors`:
  - `p9`: "#define OCU_GETCOUNTER_ID ((uint8)0x06U)"
- `aliases`: []

### MACRO-OCU-GETVERSIONINFO-ID
- `name`: "OCU_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_GETVERSIONINFO_ID`."
- `anchors`:
  - `p9`: "#define OCU_GETVERSIONINFO_ID ((uint8)0x09U)"
- `aliases`: []

### MACRO-OCU-GET-COUNTER-API
- `name`: "OCU_GET_COUNTER_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_GET_COUNTER_API`."
- `anchors`:
  - `p12`: "#define OCU_GET_COUNTER_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-HW-CHANNELS-NO
- `name`: "OCU_HW_CHANNELS_NO"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_HW_CHANNELS_NO`."
- `anchors`:
  - `p13`: "#define OCU_HW_CHANNELS_NO (OCU_FTU_HW_CHANNELS)"
- `aliases`: []

### MACRO-OCU-INDEX
- `name`: "OCU_INDEX"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_INDEX`."
- `anchors`:
  - `p8`: "#define OCU_INDEX ((uint8)0x0U)"
- `aliases`: []

### MACRO-OCU-INIT-ID
- `name`: "OCU_INIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_INIT_ID`."
- `anchors`:
  - `p9`: "#define OCU_INIT_ID ((uint8)0x00U)"
- `aliases`: []

### MACRO-OCU-MAX-CHANNELS
- `name`: "OCU_MAX_CHANNELS"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_MAX_CHANNELS`."
- `anchors`:
  - `p13`: "#define OCU_MAX_CHANNELS (3U)"
- `aliases`: []

### MACRO-OCU-MAX-PARTITIONS
- `name`: "OCU_MAX_PARTITIONS"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_MAX_PARTITIONS`."
- `anchors`:
  - `p12`: "#define OCU_MAX_PARTITIONS (0U)"
- `aliases`: []

### MACRO-OCU-MUTILCORE-SUPPORT
- `name`: "OCU_MUTILCORE_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_MUTILCORE_SUPPORT`."
- `anchors`:
  - `p12`: "#define OCU_MUTILCORE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-OCU-NOTIFICATION-SUPPORTED
- `name`: "OCU_NOTIFICATION_SUPPORTED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_NOTIFICATION_SUPPORTED`."
- `anchors`:
  - `p13`: "#define OCU_NOTIFICATION_SUPPORTED (STD_ON)"
- `aliases`: []

### MACRO-OCU-PRECOMPILE-SUPPORT
- `name`: "OCU_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p13`: "#define OCU_PRECOMPILE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-OCU-SETABSOLUTETHRESHOLD-ID
- `name`: "OCU_SETABSOLUTETHRESHOLD_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_SETABSOLUTETHRESHOLD_ID`."
- `anchors`:
  - `p9`: "#define OCU_SETABSOLUTETHRESHOLD_ID ((uint8)0x07U)"
- `aliases`: []

### MACRO-OCU-SETPINACTION-ID
- `name`: "OCU_SETPINACTION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_SETPINACTION_ID`."
- `anchors`:
  - `p9`: "#define OCU_SETPINACTION_ID ((uint8)0x05U)"
- `aliases`: []

### MACRO-OCU-SETPINSTATE-ID
- `name`: "OCU_SETPINSTATE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_SETPINSTATE_ID`."
- `anchors`:
  - `p9`: "#define OCU_SETPINSTATE_ID ((uint8)0x04U)"
- `aliases`: []

### MACRO-OCU-SETRELATIVETHRESHOLD-ID
- `name`: "OCU_SETRELATIVETHRESHOLD_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_SETRELATIVETHRESHOLD_ID`."
- `anchors`:
  - `p9`: "#define OCU_SETRELATIVETHRESHOLD_ID ((uint8)0x08U)"
- `aliases`: []

### MACRO-OCU-SET-ABSOLUTE-THRESHOLD-API
- `name`: "OCU_SET_ABSOLUTE_THRESHOLD_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_SET_ABSOLUTE_THRESHOLD_API`."
- `anchors`:
  - `p12`: "#define OCU_SET_ABSOLUTE_THRESHOLD_API (STD_OFF)"
- `aliases`: []

### MACRO-OCU-SET-PIN-ACTION-API
- `name`: "OCU_SET_PIN_ACTION_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_SET_PIN_ACTION_API`."
- `anchors`:
  - `p12`: "#define OCU_SET_PIN_ACTION_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-SET-PIN-STATE-API
- `name`: "OCU_SET_PIN_STATE_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_SET_PIN_STATE_API`."
- `anchors`:
  - `p12`: "#define OCU_SET_PIN_STATE_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-SET-RELATIVE-THRESHOLD-API
- `name`: "OCU_SET_RELATIVE_THRESHOLD_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_SET_RELATIVE_THRESHOLD_API`."
- `anchors`:
  - `p13`: "#define OCU_SET_RELATIVE_THRESHOLD_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-STARTCHANNEL-ID
- `name`: "OCU_STARTCHANNEL_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_STARTCHANNEL_ID`."
- `anchors`:
  - `p9`: "#define OCU_STARTCHANNEL_ID ((uint8)0x02U)"
- `aliases`: []

### MACRO-OCU-STOPCHANNEL-ID
- `name`: "OCU_STOPCHANNEL_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `OCU_STOPCHANNEL_ID`."
- `anchors`:
  - `p9`: "#define OCU_STOPCHANNEL_ID ((uint8)0x03U)"
- `aliases`: []

### MACRO-OCU-VERSION-INFO-API
- `name`: "OCU_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_VERSION_INFO_API`."
- `anchors`:
  - `p12`: "#define OCU_VERSION_INFO_API (STD_ON)"
- `aliases`: []

### MACRO-OCU-AR-RELEASE-MAJOR-VERSION
- `name`: "OCU_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-OCU-AR-RELEASE-MINOR-VERSION
- `name`: "OCU_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-OCU-AR-RELEASE-REVISION-VERSION
- `name`: "OCU_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-OCU-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: "OCU_CFG_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_CFG_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_CFG_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-OCU-CFG-AR-RELEASE-MINOR-VERSION
- `name`: "OCU_CFG_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_CFG_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_CFG_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-OCU-CFG-AR-RELEASE-REVISION-VERSION
- `name`: "OCU_CFG_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_CFG_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p12`: "#define OCU_CFG_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-OCU-CFG-MODULE-ID
- `name`: "OCU_CFG_MODULE_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_CFG_MODULE_ID`."
- `anchors`:
  - `p12`: "#define OCU_CFG_MODULE_ID 125"
- `aliases`: []

### MACRO-OCU-CFG-SW-MAJOR-VERSION
- `name`: "OCU_CFG_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_CFG_SW_MAJOR_VERSION`."
- `anchors`:
  - `p12`: "#define OCU_CFG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-OCU-CFG-SW-MINOR-VERSION
- `name`: "OCU_CFG_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_CFG_SW_MINOR_VERSION`."
- `anchors`:
  - `p12`: "#define OCU_CFG_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-OCU-CFG-SW-PATCH-VERSION
- `name`: "OCU_CFG_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_CFG_SW_PATCH_VERSION`."
- `anchors`:
  - `p12`: "#define OCU_CFG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-OCU-CFG-VENDOR-ID
- `name`: "OCU_CFG_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `OCU_CFG_VENDOR_ID`."
- `anchors`:
  - `p12`: "#define OCU_CFG_VENDOR_ID 174"
- `aliases`: []

### MACRO-OCU-MODULE-ID
- `name`: "OCU_MODULE_ID"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_MODULE_ID`."
- `anchors`:
  - `p11`: "#define OCU_MODULE_ID 125"
- `aliases`: []

### MACRO-OCU-SW-MAJOR-VERSION
- `name`: "OCU_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_SW_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-OCU-SW-MINOR-VERSION
- `name`: "OCU_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_SW_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-OCU-SW-PATCH-VERSION
- `name`: "OCU_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_SW_PATCH_VERSION`."
- `anchors`:
  - `p11`: "#define OCU_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-OCU-VENDOR-ID
- `name`: "OCU_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_VENDOR_ID`."
- `anchors`:
  - `p11`: "#define OCU_VENDOR_ID 174"
- `aliases`: []

### MACRO-FTU-TCLK0
- `name`: "FTU_TCLK0"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `FTU_TCLK0`."
- `anchors`:
  - `p15`: "FTU_TCLK0 pin as FTU external clock."
- `aliases`: []

### MACRO-FTU-TCLK1
- `name`: "FTU_TCLK1"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `FTU_TCLK1`."
- `anchors`:
  - `p15`: "FTU_TCLK1 pin as FTU external clock."
- `aliases`: []

### MACRO-FTU-TCLK2
- `name`: "FTU_TCLK2"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `FTU_TCLK2`."
- `anchors`:
  - `p16`: "FTU_TCLK2 pin as FTU external clock."
- `aliases`: []

### MACRO-OCU-CM-IN-REF-INTERVAL
- `name`: "OCU_CM_IN_REF_INTERVAL"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_CM_IN_REF_INTERVAL`."
- `anchors`:
  - `p15`: "OCU_CM_IN_REF_INTERVAL = 0"
- `aliases`: []

### MACRO-OCU-CM-OUT-REF-INTERVAL
- `name`: "OCU_CM_OUT_REF_INTERVAL"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_CM_OUT_REF_INTERVAL`."
- `anchors`:
  - `p15`: "OCU_CM_OUT_REF_INTERVAL = 1"
- `aliases`: []

### MACRO-OCU-EXTERNAL-CLOCK
- `name`: "OCU_EXTERNAL_CLOCK"
- `type`: `macro`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "macro index entry for `OCU_EXTERNAL_CLOCK`."
- `anchors`:
  - `p41`: "OCU_SYSTEM_CLOCK, OCU_EXTERNAL_CLOCK"
- `aliases`: []

### MACRO-OCU-FTU-BUS-CLK
- `name`: "OCU_FTU_BUS_CLK"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_BUS_CLK`."
- `anchors`:
  - `p15`: "OCU_FTU_BUS_CLK = 1"
- `aliases`: []

### MACRO-OCU-FTU-DBG-COUNTER-WORKS-C
- `name`: "OCU_FTU_DBG_COUNTER_WORKS_C"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_DBG_COUNTER_WORKS_C`."
- `anchors`:
  - `p15`: "OCU_FTU_DBG_COUNTER_WORKS_C"
- `aliases`: []

### MACRO-OCU-FTU-EXTERNAL-TCK0
- `name`: "OCU_FTU_EXTERNAL_TCK0"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_EXTERNAL_TCK0`."
- `anchors`:
  - `p15`: "OCU_FTU_EXTERNAL_TCK0 = 4"
- `aliases`: []

### MACRO-OCU-FTU-EXTERNAL-TCK1
- `name`: "OCU_FTU_EXTERNAL_TCK1"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_EXTERNAL_TCK1`."
- `anchors`:
  - `p15`: "OCU_FTU_EXTERNAL_TCK1 = 5"
- `aliases`: []

### MACRO-OCU-FTU-EXTERNAL-TCK2
- `name`: "OCU_FTU_EXTERNAL_TCK2"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `OCU_FTU_EXTERNAL_TCK2`."
- `anchors`:
  - `p16`: "OCU_FTU_EXTERNAL_TCK2 = 6"
- `aliases`: []

### MACRO-OCU-FTU-NO-CLK
- `name`: "OCU_FTU_NO_CLK"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_NO_CLK`."
- `anchors`:
  - `p15`: "OCU_FTU_NO_CLK = 0"
- `aliases`: []

### MACRO-OCU-FTU-PCC-CLK
- `name`: "OCU_FTU_PCC_CLK"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PCC_CLK`."
- `anchors`:
  - `p15`: "OCU_FTU_PCC_CLK = 3"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV128
- `name`: "OCU_FTU_PRESCALER_DIV128"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV128`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV128 = 7"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV16
- `name`: "OCU_FTU_PRESCALER_DIV16"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV16`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV16 = 4"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV2
- `name`: "OCU_FTU_PRESCALER_DIV2"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV2`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV2 = 1"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV32
- `name`: "OCU_FTU_PRESCALER_DIV32"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV32`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV32 = 5"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV4
- `name`: "OCU_FTU_PRESCALER_DIV4"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV4`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV4 = 2"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV64
- `name`: "OCU_FTU_PRESCALER_DIV64"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV64`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV64 = 6"
- `aliases`: []

### MACRO-OCU-FTU-PRESCALER-DIV8
- `name`: "OCU_FTU_PRESCALER_DIV8"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `OCU_FTU_PRESCALER_DIV8`."
- `anchors`:
  - `p15`: "OCU_FTU_PRESCALER_DIV8 = 3"
- `aliases`: []

### MACRO-OCU-STATUS-INITIALIZED
- `name`: "OCU_STATUS_INITIALIZED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `OCU_STATUS_INITIALIZED`."
- `anchors`:
  - `p14`: "OCU_STATUS_INITIALIZED = 1"
- `aliases`: []

### MACRO-OCU-STATUS-RUNNING
- `name`: "OCU_STATUS_RUNNING"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `OCU_STATUS_RUNNING`."
- `anchors`:
  - `p14`: "OCU_STATUS_RUNNING = 3"
- `aliases`: []

### MACRO-OCU-STATUS-STOPPED
- `name`: "OCU_STATUS_STOPPED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `OCU_STATUS_STOPPED`."
- `anchors`:
  - `p14`: "OCU_STATUS_STOPPED = 2"
- `aliases`: []

### MACRO-OCU-STATUS-UNINITIALIZED
- `name`: "OCU_STATUS_UNINITIALIZED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `OCU_STATUS_UNINITIALIZED`."
- `anchors`:
  - `p14`: "OCU_STATUS_UNINITIALIZED = 0"
- `aliases`: []

### MACRO-OCU-SYSTEM-CLOCK
- `name`: "OCU_SYSTEM_CLOCK"
- `type`: `macro`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "macro index entry for `OCU_SYSTEM_CLOCK`."
- `anchors`:
  - `p41`: "OCU_SYSTEM_CLOCK, OCU_EXTERNAL_CLOCK"
- `aliases`: []

### MACRO-CNT-ON-OUTPUTS-ON
- `name`: "CNT_ON_OUTPUTS_ON"
- `type`: `macro`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "macro index entry for `CNT_ON_OUTPUTS_ON`."
- `anchors`:
  - `p42`: "CNT_ON_OUTPUTS_ON,"
- `aliases`: []

### MACRO-CNT-STOPED-FLAG-SET
- `name`: "CNT_STOPED_FLAG_SET"
- `type`: `macro`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "macro index entry for `CNT_STOPED_FLAG_SET`."
- `anchors`:
  - `p42`: "CNT_STOPED_FLAG_SET"
- `aliases`: []

### MACRO-CNT-STOPED-OUTPUTS-FROZEN
- `name`: "CNT_STOPED_OUTPUTS_FROZEN"
- `type`: `macro`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "macro index entry for `CNT_STOPED_OUTPUTS_FROZEN`."
- `anchors`:
  - `p42`: "CNT_STOPED_OUTPUTS_FROZEN,"
- `aliases`: []

### MACRO-CNT-STOPED-OUTPUTS-SAFE
- `name`: "CNT_STOPED_OUTPUTS_SAFE"
- `type`: `macro`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "macro index entry for `CNT_STOPED_OUTPUTS_SAFE`."
- `anchors`:
  - `p42`: "CNT_STOPED_OUTPUTS_SAFE,"
- `aliases`: []

### MACRO-HN-WORKS
- `name`: "HN_WORKS"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `HN_WORKS`."
- `anchors`:
  - `p15`: "HN_WORKS = 3"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p40`: "NULL_PTR"
- `aliases`: []

### TYPE-OCU-VALUETYPE
- `name`: "Ocu_ValueType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,18,19,22,23,25,26`
- `brief`: "type index entry for `Ocu_ValueType`."
- `anchors`:
  - `p16`: "typedef uint32 Ocu_ValueType"
  - `p18`: "const Ocu_ValueType u32DefaultThreshold"
  - `p19`: "Ocu_ValueType u32ReferenceValue"
  - `p22`: "Ocu_ValueType Ocu_GetCounter(Ocu_ChannelType ChannelNumber)"
  - `p23`: "Ocu_ValueType"
- `aliases`: []

### TYPE-OCU-RETURNTYPE
- `name`: "Ocu_ReturnType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,19,23,25,26,28`
- `brief`: "type index entry for `Ocu_ReturnType`."
- `anchors`:
  - `p14`: "Ocu_ReturnType"
  - `p19`: "Ocu_ReturnType eInterval"
  - `p23`: "Ocu_ReturnType"
  - `p25`: "Ocu_ReturnType"
  - `p26`: "Ocu_ReturnType"
- `aliases`: []

### TYPE-OCU-FTUCONFIGTYPE
- `name`: "Ocu_FtuConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17,18,27,28`
- `brief`: "type index entry for `Ocu_FtuConfigType`."
- `anchors`:
  - `p3`: "Ocu_FtuConfigType .........................................................................................................................…"
  - `p17`: "const Ocu_FtuConfigType * const pFtuConfig"
  - `p18`: "Ocu_FtuConfigType"
  - `p27`: "Ocu_FtuConfigType * const pConfig)"
  - `p28`: "void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType *"
- `aliases`: []

### TYPE-OCU-PINACTIONTYPE
- `name`: "Ocu_PinActionType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,18,22,25,27`
- `brief`: "type index entry for `Ocu_PinActionType`."
- `anchors`:
  - `p14`: "Ocu_PinActionType"
  - `p18`: "const Ocu_PinActionType eOutputPinAction"
  - `p22`: "void Ocu_SetPinAction(Ocu_ChannelType ChannelNumber, Ocu_PinActionType PinAction)"
  - `p25`: "void Ocu_Hw_SetPinAction(Ocu_ChannelType u8ChannelNumber, Ocu_PinActionType ePinAction)"
  - `p27`: "Ocu_PinActionType"
- `aliases`: []

### TYPE-OCU-PINSTATETYPE
- `name`: "Ocu_PinStateType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,18,22,25,27`
- `brief`: "type index entry for `Ocu_PinStateType`."
- `anchors`:
  - `p14`: "Ocu_PinStateType"
  - `p18`: "const Ocu_PinStateType eDefaultPinState;"
  - `p22`: "void Ocu_SetPinState(Ocu_ChannelType ChannelNumber, Ocu_PinStateType PinState)"
  - `p25`: "void Ocu_Hw_SetPinState(Ocu_ChannelType u8ChannelNumber, Ocu_PinStateType ePinState)"
  - `p27`: "void Ocu_Ftu_SetPinState(uint8 u8HwModule, uint8 u8HwChannel, Ocu_PinStateType ePinState)"
- `aliases`: []

### TYPE-OCU-HWCONFIGTYPE
- `name`: "Ocu_HwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17,24`
- `brief`: "type index entry for `Ocu_HwConfigType`."
- `anchors`:
  - `p3`: "Ocu_HwConfigType ..........................................................................................................................…"
  - `p17`: "const Ocu_HwConfigType HwConfig"
  - `p24`: "void Ocu_Hw_Init(const Ocu_HwConfigType * pHwConfig, const uint8 u8Channel)"
- `aliases`: []

### TYPE-OCU-SETTHRESHOLDTYPE
- `name`: "Ocu_SetThresholdType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,19,28`
- `brief`: "type index entry for `Ocu_SetThresholdType`."
- `anchors`:
  - `p3`: "Ocu_SetThresholdType ......................................................................................................................…"
  - `p19`: "Ocu_SetThresholdType"
  - `p28`: "void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType * SetThreshold, const Ocu_FtuConfigType *"
- `aliases`: []

### TYPE-OCU-CONFIGTYPE
- `name`: "Ocu_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,19`
- `brief`: "type index entry for `Ocu_ConfigType`."
- `anchors`:
  - `p3`: "Ocu_ConfigType ............................................................................................................................…"
  - `p16`: "Ocu_ConfigType"
  - `p19`: "void Ocu_Init (const Ocu_ConfigType* ConfigPtr)"
- `aliases`: []

### TYPE-OCU-FTU-DEBUGMODETYPE
- `name`: "OCU_FTU_DebugModeType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,19`
- `brief`: "type index entry for `OCU_FTU_DebugModeType`."
- `anchors`:
  - `p15`: "OCU_FTU_DebugModeType"
  - `p19`: "const OCU_FTU_DebugModeType eDbgMode"
- `aliases`: []

### TYPE-OCU-CHANNELCONFIGTYPE
- `name`: "Ocu_ChannelConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `brief`: "type index entry for `Ocu_ChannelConfigType`."
- `anchors`:
  - `p3`: "Ocu_ChannelConfigType......................................................................................................................…"
  - `p17`: "Ocu_ChannelConfigType"
- `aliases`: []

### TYPE-OCU-FTUMODULECLKSRCTYPE
- `name`: "Ocu_FtuModuleClkSrcType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,19`
- `brief`: "type index entry for `Ocu_FtuModuleClkSrcType`."
- `anchors`:
  - `p15`: "Ocu_FtuModuleClkSrcType"
  - `p19`: "const Ocu_FtuModuleClkSrcType eClkSrc"
- `aliases`: []

### TYPE-OCU-FTUPRESCALERTYPE
- `name`: "Ocu_FtuPrescalerType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,19`
- `brief`: "type index entry for `Ocu_FtuPrescalerType`."
- `anchors`:
  - `p15`: "Ocu_FtuPrescalerType"
  - `p19`: "const Ocu_FtuPrescalerType ePrescaler"
- `aliases`: []

### TYPE-OCU-FTU-CHANNELTYPE
- `name`: "Ocu_Ftu_ChannelType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,18`
- `brief`: "type index entry for `Ocu_Ftu_ChannelType`."
- `anchors`:
  - `p16`: "typedef uint8 Ocu_Ftu_ChannelType"
  - `p18`: "const Ocu_Ftu_ChannelType u8NumChannels;"
- `aliases`: []

### TYPE-OCU-FTU-MODULETYPE
- `name`: "Ocu_Ftu_ModuleType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,18`
- `brief`: "type index entry for `Ocu_Ftu_ModuleType`."
- `anchors`:
  - `p16`: "typedef uint8 Ocu_Ftu_ModuleType"
  - `p18`: "const Ocu_Ftu_ModuleType u8NumModules;"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `21`
- `physical_pages`: `21,22`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p21`: "Std_ReturnType Ocu_StartChannel(Ocu_ChannelType ChannelNumber)"
  - `p22`: "Std_ReturnType -E_OK Channel was started， E_NOT_OK Channel was not started"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p24`: "void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `aliases`: []

### TYPE-OCU-CHANNELSTATUSTYPE
- `name`: "Ocu_ChannelStatusType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "type index entry for `Ocu_ChannelStatusType`."
- `anchors`:
  - `p14`: "Ocu_ChannelStatusType"
- `aliases`: []

### TYPE-OCU-COUNTDIRECTIONTYPE
- `name`: "Ocu_CountDirectionType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "type index entry for `Ocu_CountDirectionType`."
- `anchors`:
  - `p14`: "Ocu_CountDirectionType"
- `aliases`: []

### TYPE-OCU-CONFIGCHANNELTYPE
- `name`: "Ocu_ConfigChannelType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "type index entry for `Ocu_ConfigChannelType`."
- `anchors`:
  - `p17`: "const Ocu_ConfigChannelType *pOcuChannelConfig"
- `aliases`: []

### TYPE-OCU-NOTIFICATIONTYPE
- `name`: "Ocu_NotificationType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "type index entry for `Ocu_NotificationType`."
- `anchors`:
  - `p16`: "typedef void(* Ocu_NotificationType) (void)"
- `aliases`: []

### TYPE-OCU-NOTIFYTYPE
- `name`: "Ocu_NotifyType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "type index entry for `Ocu_NotifyType`."
- `anchors`:
  - `p17`: "const Ocu_NotifyType pfOcuChannelNotification"
- `aliases`: []

### FILE-OCU-H
- `name`: "Ocu.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,6,8,14,19`
- `brief`: "file index entry for `Ocu.h`."
- `anchors`:
  - `p3`: "Macros in Ocu.h ...........................................................................................................................…"
  - `p6`: "Ocu.h."
  - `p8`: "Macros in Ocu.h"
  - `p14`: "Enumerations in Ocu.h"
  - `p19`: "Functions in Ocu.h"
- `aliases`: []

### FILE-OCU-FTU-TYPES-H
- `name`: "Ocu_Ftu_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10,15,16`
- `brief`: "file index entry for `Ocu_Ftu_Types.h`."
- `anchors`:
  - `p3`: "Macros in Ocu_Ftu_Types.h .................................................................................................................…"
  - `p10`: "Macros in Ocu_Ftu_Types.h"
  - `p15`: "Enumerations in Ocu_Ftu_Types.h"
  - `p16`: "Typedefs in Ocu_Ftu_Types.h"
- `aliases`: []

### FILE-OCU-CFG-H
- `name`: "Ocu_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,11,16`
- `brief`: "file index entry for `Ocu_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in Ocu_Cfg.h .......................................................................................................................…"
  - `p11`: "Macros in Ocu_Cfg.h"
  - `p16`: "Typedefs in Ocu_Cfg.h"
- `aliases`: []

### FILE-OCU-TYPES-H
- `name`: "Ocu_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,14,16`
- `brief`: "file index entry for `Ocu_Types.h`."
- `anchors`:
  - `p3`: "Enumerations in Ocu_Types.h ...............................................................................................................…"
  - `p14`: "Enumerations in Ocu_Types.h"
  - `p16`: "Typedefs in Ocu_Types.h"
- `aliases`: []

### FILE-OCU-FTU-H
- `name`: "Ocu_Ftu.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,26`
- `brief`: "file index entry for `Ocu_Ftu.h`."
- `anchors`:
  - `p3`: "Functions in Ocu_Ftu.h ....................................................................................................................…"
  - `p26`: "Functions in Ocu_Ftu.h"
- `aliases`: []

### FILE-OCU-HW-H
- `name`: "Ocu_Hw.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,24`
- `brief`: "file index entry for `Ocu_Hw.h`."
- `anchors`:
  - `p3`: "Functions in Ocu_Hw.h .....................................................................................................................…"
  - `p24`: "Functions in Ocu_Hw.h"
- `aliases`: []

### FILE-OCU-VERSION-H
- `name`: "Ocu_Version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "file index entry for `Ocu_Version.h`."
- `anchors`:
  - `p3`: "Macros in Ocu_Version.h ...................................................................................................................…"
  - `p11`: "Macros in Ocu_Version.h"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6,35,36,37,38,39,40,42,43`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p6`: "AUTOSAR"
  - `p35`: "AUTOSAR"
  - `p36`: "AUTOSAR"
  - `p37`: "AUTOSAR"
- `aliases`: []

### TERM-OCU
- `name`: "OCU"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `OCU`."
- `anchors`:
  - `p1`: "OCU"
  - `p2`: "OCU"
  - `p3`: "OCU"
  - `p4`: "OCU"
  - `p5`: "OCU"
- `aliases`: []

### TERM-OCUHWSPECIFICSETTINGS
- `name`: "OcuHWSpecificSettings"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,33,40,41,50,51`
- `brief`: "term index entry for `OcuHWSpecificSettings`."
- `anchors`:
  - `p4`: "OcuHWSpecificSettings .....................................................................................................................…"
  - `p33`: "OcuHWSpecificSettings"
  - `p40`: "OcuHWSpecificSettingsRef"
  - `p41`: "OcuHWSpecificSettings"
  - `p50`: "Add a module object in the OcuHWSpecificSettings tab and a channel object in the OcuChannel tab. The added"
- `aliases`: []

### TERM-OUTPUT-COMPARE-UNIT-DRIVER
- `name`: "Output Compare Unit Driver"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14,17,18,22,39`
- `brief`: "term index entry for `Output Compare Unit Driver`."
- `anchors`:
  - `p14`: "Output Compare Unit Driver"
  - `p17`: "Output Compare Unit Driver"
  - `p18`: "Output Compare Unit Driver"
  - `p22`: "Output Compare Unit Driver"
  - `p39`: "Output Compare Unit Driver"
- `aliases`: []

### TERM-OCU-FTU-TYPES
- `name`: "Ocu_Ftu_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10,15,16`
- `brief`: "term index entry for `Ocu_Ftu_Types`."
- `anchors`:
  - `p3`: "Macros in Ocu_Ftu_Types.h .................................................................................................................…"
  - `p10`: "Macros in Ocu_Ftu_Types.h"
  - `p15`: "Enumerations in Ocu_Ftu_Types.h"
  - `p16`: "Typedefs in Ocu_Ftu_Types.h"
- `aliases`: []

### TERM-OCU-CFG
- `name`: "Ocu_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11,16`
- `brief`: "term index entry for `Ocu_Cfg`."
- `anchors`:
  - `p3`: "Macros in Ocu_Cfg.h .......................................................................................................................…"
  - `p11`: "Macros in Ocu_Cfg.h"
  - `p16`: "Typedefs in Ocu_Cfg.h"
- `aliases`: []

### TERM-OCU-TYPES
- `name`: "Ocu_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,14,16`
- `brief`: "term index entry for `Ocu_Types`."
- `anchors`:
  - `p3`: "Enumerations in Ocu_Types.h ...............................................................................................................…"
  - `p14`: "Enumerations in Ocu_Types.h"
  - `p16`: "Typedefs in Ocu_Types.h"
- `aliases`: []

### TERM-OCUECUCPARTITIONREF
- `name`: "OcuEcucPartitionRef"
- `type`: `term`
- `primary_page`: `43`
- `physical_pages`: `43,48`
- `brief`: "term index entry for `OcuEcucPartitionRef`."
- `anchors`:
  - `p43`: "OcuEcucPartitionRef"
  - `p48`: "If the number OcuEcucPartitionRef = 0, the check-box OcuMulticoreEnabled must be 'false'."
- `aliases`: []

### TERM-OCUKERNELECUCPARTITIONREF
- `name`: "OcuKernelEcucPartitionRef"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7,43`
- `brief`: "term index entry for `OcuKernelEcucPartitionRef`."
- `anchors`:
  - `p7`: "OcuKernelEcucPartitionRef is not supported."
  - `p43`: "OcuKernelEcucPartitionRef"
- `aliases`: []

### TERM-OCU-FTU
- `name`: "Ocu_Ftu"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,26`
- `brief`: "term index entry for `Ocu_Ftu`."
- `anchors`:
  - `p3`: "Macros in Ocu_Ftu_Types.h .................................................................................................................…"
  - `p26`: "Functions in Ocu_Ftu.h"
- `aliases`: []

### TERM-OCU-HW
- `name`: "Ocu_Hw"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,24`
- `brief`: "term index entry for `Ocu_Hw`."
- `anchors`:
  - `p3`: "Ocu_HwConfigType ..........................................................................................................................…"
  - `p24`: "Functions in Ocu_Hw.h"
- `aliases`: []

### TERM-OCU-VERSION
- `name`: "Ocu_Version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "term index entry for `Ocu_Version`."
- `anchors`:
  - `p3`: "Macros in Ocu_Version.h ...................................................................................................................…"
  - `p11`: "Macros in Ocu_Version.h"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42,43`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p42`: "Det"
  - `p43`: "Det"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,6`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p6`: "MCAL"
- `aliases`: []

### TERM-OCUOUTPUTPINACTION
- `name`: "OcuOutputPinAction"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `OcuOutputPinAction`."
- `anchors`:
  - `p39`: "OcuOutputPinAction"
- `aliases`: []

### TERM-OCUOUTPUTPINDEFAULTSTATE
- `name`: "OcuOutputPinDefaultState"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `OcuOutputPinDefaultState`."
- `anchors`:
  - `p39`: "OcuOutputPinDefaultState"
- `aliases`: []

### TERM-OCUCLOCKSOURCE
- `name`: "OcuClockSource"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `OcuClockSource`."
- `anchors`:
  - `p41`: "OcuClockSource"
- `aliases`: []

### TERM-OCUCOUNTDIRECTION
- `name`: "OcuCountdirection"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `OcuCountdirection`."
- `anchors`:
  - `p37`: "OcuCountdirection"
- `aliases`: []

### TERM-OCUDEFAULTTHRESHOLD
- `name`: "OcuDefaultThreshold"
- `type`: `term`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "term index entry for `OcuDefaultThreshold`."
- `anchors`:
  - `p38`: "OcuDefaultThreshold"
- `aliases`: []

### TERM-OCUDEINITAPI
- `name`: "OcuDeinitApi"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `OcuDeinitApi`."
- `anchors`:
  - `p35`: "OcuDeinitApi"
- `aliases`: []

### TERM-OCUDEVERRORDETECT
- `name`: "OcuDevErrorDetect"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "term index entry for `OcuDevErrorDetect`."
- `anchors`:
  - `p42`: "OcuDevErrorDetect"
- `aliases`: []

### TERM-OCUDISABLERUNTIMEERRORDETECT
- `name`: "OcuDisableRuntimeErrorDetect"
- `type`: `term`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "term index entry for `OcuDisableRuntimeErrorDetect`."
- `anchors`:
  - `p43`: "OcuDisableRuntimeErrorDetect"
- `aliases`: []

### TERM-OCUGETCOUNTERAPI
- `name`: "OcuGetCounterApi"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `OcuGetCounterApi`."
- `anchors`:
  - `p35`: "OcuGetCounterApi"
- `aliases`: []

### TERM-OCUHWSPECIFICSETTINGSREF
- `name`: "OcuHWSpecificSettingsRef"
- `type`: `term`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "term index entry for `OcuHWSpecificSettingsRef`."
- `anchors`:
  - `p40`: "OcuHWSpecificSettingsRef"
- `aliases`: []

### TERM-OCUMAXCOUNTERVALUE
- `name`: "OcuMaxCounterValue"
- `type`: `term`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "term index entry for `OcuMaxCounterValue`."
- `anchors`:
  - `p38`: "OcuMaxCounterValue"
- `aliases`: []

### TERM-OCUOUPTUTPINUSED
- `name`: "OcuOuptutPinUsed"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `OcuOuptutPinUsed`."
- `anchors`:
  - `p39`: "OcuOuptutPinUsed"
- `aliases`: []

### TERM-OCUPRESCALE
- `name`: "OcuPrescale"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "term index entry for `OcuPrescale`."
- `anchors`:
  - `p42`: "OcuPrescale"
- `aliases`: []

### TERM-OCUSETABSOLUTETHRESHOLDAPI
- `name`: "OcuSetAbsoluteThresholdApi"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `OcuSetAbsoluteThresholdApi`."
- `anchors`:
  - `p35`: "OcuSetAbsoluteThresholdApi"
- `aliases`: []

### TERM-OCUSETPINACTIONAPI
- `name`: "OcuSetPinActionApi"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `OcuSetPinActionApi`."
- `anchors`:
  - `p36`: "OcuSetPinActionApi"
- `aliases`: []

### TERM-OCUSETPINSTATEAPI
- `name`: "OcuSetPinStateApi"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `OcuSetPinStateApi`."
- `anchors`:
  - `p36`: "OcuSetPinStateApi"
- `aliases`: []

### TERM-OCUSETRELATIVETHRESHOLDAP
- `name`: "OcuSetRelativeThresholdAp"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `OcuSetRelativeThresholdAp`."
- `anchors`:
  - `p36`: "OcuSetRelativeThresholdAp"
- `aliases`: []

### TERM-OCUVERSIONINFOAPI
- `name`: "OcuVersionInfoApi"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `OcuVersionInfoApi`."
- `anchors`:
  - `p36`: "OcuVersionInfoApi"
- `aliases`: []

### TERM-AUTOSAR-SWS-OCUDRIVER
- `name`: "AUTOSAR_SWS_OCUDriver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `AUTOSAR_SWS_OCUDriver`."
- `anchors`:
  - `p5`: "For detailed requirements, refer to the AUTOSAR_SWS_OCUDriver."
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

### TERM-OCUMULTICOREENABLED
- `name`: "OcuMulticoreEnabled"
- `type`: `term`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "term index entry for `OcuMulticoreEnabled`."
- `anchors`:
  - `p48`: "If the number OcuEcucPartitionRef = 0, the check-box OcuMulticoreEnabled must be 'false'."
- `aliases`: []

### TERM-OCUMULTICORESUPPORT
- `name`: "OcuMulticoreSupport"
- `type`: `term`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "term index entry for `OcuMulticoreSupport`."
- `anchors`:
  - `p43`: "Ocu Multicore Support"
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

### ALIAS-OCU
- `canonical`: "OCU"
- `aliases`: ["Output Compare Unit Driver", "输出比较单元 / FTU 输出比较驱动", "OCU module", "OCU driver", "OCU User Manual", "OCU Integration Manual", "Ocu", "Output Compare Unit", "输出比较单元", "OCU模块"]
- `related_ids`: ["TERM-OCU"]

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

### ALIAS-OCU-CHANNEL
- `canonical`: "OCU channel"
- `aliases`: ["OcuChannel", "Ocu_ChannelConfigType", "logical channel", "FTU channel", "OCU通道"]
- `related_ids`: []

### ALIAS-OCU-NOTIFICATION
- `canonical`: "OCU notification"
- `aliases`: ["Ocu_EnableNotification", "Ocu_DisableNotification", "Ocu_Notification", "Ocu notification callback"]
- `related_ids`: []

### ALIAS-OCU-SETPINSTATE
- `canonical`: "Ocu_SetPinState"
- `aliases`: ["SetPinState", "Ocu_SetPinAction", "PinAction", "PinState", "输出引脚状态"]
- `related_ids`: []

### ALIAS-FTU
- `canonical`: "FTU"
- `aliases`: ["Flexible Timer Unit", "Ocu_Ftu", "FTU output compare", "FTU比较输出"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between OCU_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `OCU_User_Manual.pdf`
- `source_pdf_sha256`: `2f3fdd10610499781ba163efcfacba149500bd2b80a5ab68f25e34ce9998b1ef`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `293`
- `technical_missing_terms_added`: `10`
- `pages_with_added_terms`: `53`
- `supplemented_missing_token_count`: `293`
- `supplemented_missing_technical_token_count`: `10`
- `supplemented_physical_pages_count`: `53`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "3.0"
  - "Confidential"
  - "Flagchip"
  - "Initial"
  - "Proprietary"
  - "release"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "2.5.1"
  - "2.5.2"
  - "2.5.3"
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
  - "implements"
  - "others"
  - "peripheral"
  - "several"
  - "starting"
  - "stopping"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Current"
  - "Each"
  - "Flagchip"
  - "PRMCAL"
  - "Proprietary"
  - "Trigger"
  - "accessible"
  - "approach"
  - "calculate"
  - "cannot"
  - "common"
  - "debugged"
  - "debugging"
  - "declaration"
  - "defined"
  - "definitions"
  - "described"
  - "detection"
  - "errors"
  - "global"
  - "header"
  - "implementation"
  - "off"
  - "par"
  - "possible"
  - "production"
  - "realize"
  - "respective"
  - "shall"
  - "size"
  - "sizeof"
  - "such"
  - "switched"
  - "variable"
  - "variables"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Autosar"
  - "Confidential"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "assign"
  - "certain"
  - "core"
  - "current"
  - "kernel"
  - "one"
  - "therefore"
  - "yet"
  - "zero"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "IOcu_SetPinState"
  - "Identifier"
  - "Instance"
  - "Proprietary"
  - "disabling"
  - "enabling"
  - "without"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "greater"
  - "maximum"
  - "than"

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

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "detection"
  - "enabling"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "detection"
  - "down"
  - "enabling"
  - "modules"
  - "per"
  - "precompile"
  - "runtime"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Automatic"
  - "Confidential"
  - "Counter"
  - "Counting"
  - "DOWN"
  - "Flagchip"
  - "Proprietary"
  - "Return"
  - "allows"
  - "attached"
  - "count"
  - "current"
  - "direction"
  - "enum"
  - "enumerated"
  - "high"
  - "information"
  - "initialized"
  - "its"
  - "linked"
  - "new"
  - "next"
  - "opposite"
  - "performed"
  - "remain"
  - "running"
  - "selection"
  - "set"
  - "setting"
  - "specifies"
  - "stopped"
  - "uninitialized"
  - "whole"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "External"
  - "Flagchip"
  - "Interval"
  - "N_FORCE_SAFE"
  - "N_FROZEN"
  - "N_WORKS"
  - "Proprietary"
  - "current"
  - "debug"
  - "force"
  - "frozen"
  - "input"
  - "inside"
  - "mode"
  - "prescaler"
  - "safe"
  - "stopped"
  - "works"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "2.5.1"
  - "2.5.2"
  - "2.5.3"
  - "Confidential"
  - "Flagchip"
  - "Numeric"
  - "Proprietary"
  - "configurable"
  - "defined"
  - "functions"
  - "identifier"
  - "pointers"
  - "reading"
  - "required"
  - "set"
  - "shall"
  - "ticks"
  - "values"
  - "within"
  - "writing"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Array"
  - "Confidential"
  - "Flagchip"
  - "HwToLogicChannelMap"
  - "Mutilcore"
  - "Proprietary"
  - "bOcuOutputPinEnable"
  - "boolean"
  - "enabled"
  - "link"
  - "logic"
  - "map"
  - "partion"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Assigned"
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Pin"
  - "Proprietary"
  - "bOcuOutputPinUsed"
  - "boolean"
  - "configurations"
  - "current"
  - "functionality"
  - "general"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Assigned"
  - "Clock"
  - "Confidential"
  - "Flagchip"
  - "Initialize"
  - "Proprietary"
  - "Relative"
  - "Returned"
  - "SetAbsoluteThreshold"
  - "SetRelativeThreshold"
  - "functionalities"
  - "mode"
  - "prescale"
  - "u32AbsoluteValue"
  - "u32MaxCounterValue"
  - "u32RelativeValue"
  - "u8ModuleId"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Service"
  - "start"
  - "stop"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Content"
  - "Flagchip"
  - "Pin"
  - "Proprietary"
  - "Service"
  - "State"
  - "current"
  - "read"
  - "ticks"
  - "wakeup"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Interval"
  - "Proprietary"
  - "RelativeValue"
  - "Service"
  - "Tells"
  - "absolute"
  - "base"
  - "before"
  - "computing"
  - "current"
  - "determine"
  - "during"
  - "enable"
  - "exits"
  - "input"
  - "new"
  - "occurred"
  - "relative"
  - "result"
  - "set"
  - "setting"
  - "ticks"
  - "upper"
  - "using"
  - "whether"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initialize"
  - "Proprietary"
  - "Referenced"
  - "Start"
  - "returns"
  - "variable"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Action"
  - "Confidential"
  - "Expected"
  - "Flagchip"
  - "Pin"
  - "Proprietary"
  - "Referenced"
  - "State"
  - "Stop"
  - "absolute"
  - "get"
  - "set"
  - "timer"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initialize"
  - "Modules"
  - "Proprietary"
  - "Referenced"
  - "RelativeValue"
  - "relative"
  - "set"
  - "store"
  - "uses"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Pin"
  - "Proprietary"
  - "Referenced"
  - "State"
  - "Stop"
  - "behaviour"
  - "changes"
  - "comparison"
  - "current"
  - "next"
  - "one"
  - "predef"
  - "setting"
  - "timer"
  - "u8ChannelIndex"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Referenced"
  - "Struct"
  - "Used"
  - "absolute"
  - "back"
  - "comparison"
  - "contain"
  - "current"
  - "input"
  - "reads"
  - "register"
  - "relative"
  - "sends"
  - "sets"
  - "using"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "Disable"
  - "Flagchip"
  - "Proprietary"
  - "Used"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "changed"
  - "immediately"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "And"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "container"

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
  - "Label"
  - "Proprietary"
  - "Range"
  - "Variant"
  - "all"
  - "configuring"
  - "container"
  - "optional"
  - "switches"

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

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "MAP"
  - "MIN"
  - "Proprietary"
  - "Range"
  - "base"
  - "build"
  - "container"
  - "count"
  - "defined"
  - "different"
  - "direction"
  - "indicates"
  - "individual"
  - "post"
  - "process"
  - "sets"
  - "way"
  - "whole"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Range"
  - "able"
  - "assignment"
  - "comparison"
  - "container"
  - "count"
  - "defines"
  - "derived"
  - "symbolic"
  - "ticks"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Information"
  - "Optional"
  - "Proprietary"
  - "Range"
  - "True"
  - "about"
  - "imediatly"
  - "initialisation"
  - "set"
  - "shall"
  - "usage"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Callback"
  - "Confidential"
  - "Definition"
  - "EcucPartition"
  - "FUNCTION"
  - "Flagchip"
  - "Maps"
  - "NAME"
  - "Proprietary"
  - "Specifies"
  - "access"
  - "all"
  - "depends"
  - "edges"
  - "falling"
  - "increase"
  - "input"
  - "limit"
  - "may"
  - "multiple"
  - "one"
  - "range"
  - "relevant"
  - "required"
  - "rising"
  - "tick"
  - "values"
  - "zero"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "MAP"
  - "MIN"
  - "Proprietary"
  - "Range"
  - "Selects"
  - "container"
  - "defined"
  - "different"
  - "input"
  - "literals"
  - "modules"
  - "one"
  - "optional"
  - "prescalers"
  - "provided"
  - "select"
  - "selecting"
  - "setting"
  - "sources"
  - "statically"
  - "unit"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "CNTIN"
  - "Confidential"
  - "Flagchip"
  - "Implementation"
  - "MOD"
  - "Optional"
  - "Proprietary"
  - "Range"
  - "Switches"
  - "These"
  - "behavior"
  - "bit"
  - "bits"
  - "container"
  - "defined"
  - "detection"
  - "factor"
  - "form"
  - "off"
  - "prescale"
  - "register"
  - "registers"
  - "select"
  - "wave"
  - "wide"
  - "writing"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "EcucPartition"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Switches"
  - "assign"
  - "certain"
  - "core"
  - "detection"
  - "kernel"
  - "make"
  - "multiple"
  - "off"
  - "one"
  - "runtime"
  - "zero"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Confidential"
  - "EcucPartition"
  - "Flagchip"
  - "Major"
  - "Minor"
  - "Proprietary"
  - "about"
  - "aggregated"
  - "all"
  - "appropriate"
  - "container"
  - "implementation"
  - "information"
  - "modules"
  - "published"
  - "specification"
  - "versions"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Major"
  - "Minor"
  - "Patch"
  - "Proprietary"
  - "implementation"
  - "numbering"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Vendor"
  - "dedicated"
  - "implementation"
  - "list"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "report"
  - "uses"

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

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "included"
  - "needs"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
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
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54`
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
- `physical_pages`: `2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,32,34,37`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0028-001", "TBL-0029-001", "TBL-0032-001", "TBL-0034-001", "TBL-0037-001"]
- `message`: "36 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,19,24,28`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0019-001", "FIG-0024-001", "FIG-0028-001"]
- `message`: "5 generated visual anchors have no formal source figure number."
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
- `pdf_page_count`: `54`
- `indexed_physical_pages_count`: `54`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `136`
- `table_index_count`: `36`
- `figure_index_count`: `86`
- `symbol_index_count`: `254`
- `alias_index_count`: `11`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `2f3fdd10610499781ba163efcfacba149500bd2b80a5ab68f25e34ce9998b1ef`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `293`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
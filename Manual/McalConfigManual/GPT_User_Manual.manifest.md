---
manifest_schema_version: "1.1"
source_pdf: "GPT_User_Manual.pdf"
source_pdf_sha256: "b08ed051a2faeeedbb8a2ffa59f794ccd1274403eee74dc4853f4a87588a11a4"
source_pdf_size_bytes: 2619805
pdf_page_count: 81
generated_at: "2026-06-19T12:33:26Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: GPT_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `GPT_User_Manual.pdf`
- `source_pdf_sha256`: `b08ed051a2faeeedbb8a2ffa59f794ccd1274403eee74dc4853f4a87588a11a4`
- `source_pdf_size_bytes`: `2619805`
- `pdf_page_count`: `81`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx GPT User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T12:33:26Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `58`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL GPT module - User Manual"
- `module_scope`: "GPT driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 GPT Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["GPT", "General Purpose Timer", "AUTOSAR_SWS_GPTDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Gpt", "Ftu", "FTU", "Fcpit", "FCPIT"]
- `summary`: "This 81-page user manual indexes GPT content across source physical pages 1-81, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["GPT", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx GPT User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["GPT", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["GPT", "Gpt", "FTU", "FC7xxx", "Gpt_Hw_Types", "Gpt_version", "Gpt_Cfg", "Gpt_ConfigType"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "GPT Introduction"
- `path`: "Chapter 1 GPT Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["GPT", "FTU", "AONTIMER", "RTC", "FCPIT", "TSTMP", "implemented", "channel"]
- `anchor`: "Chapter 1 GPT Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirement Tracing"
- `path`: "Chapter 1 GPT Introduction / 1.1 Requirement Tracing"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["GPT", "FTU", "AONTIMER", "RTC", "FCPIT", "TSTMP", "implemented", "channel"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 GPT Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["GPT", "FTU", "AONTIMER", "RTC", "FCPIT", "TSTMP", "implemented", "channel"]
- `anchor`: "1.2"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `7`
- `physical_page_end`: `58`
- `printed_page_start`: `7`
- `printed_page_end`: `58`
- `keywords`: ["void", "LOCAL_INLINE", "Returns", "Referenced", "channel", "GPT", "FTU", "define"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["GPT", "Gpt", "Rejected", "Requirement", "FC7XXX", "register", "initialized", "applicable"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["GPT", "Gpt", "define", "called", "Gpt_GetPredefTimerValue", "FC7xxx", "GPT_E_INVALID_CALL", "Gpt_StartTimer"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `8`
- `physical_page_end`: `12`
- `printed_page_start`: `8`
- `printed_page_end`: `12`
- `keywords`: ["define", "GPT", "Gpt", "Ftu", "called", "STD_ON", "switch", "STD_OFF"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in Gpt.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["GPT", "define", "Gpt", "called", "invalid", "FC7xxx", "Gpt_StartTimer", "channel"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in Gpt_version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Gpt_version.h"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["GPT", "define", "FC7xxx", "GPT_ENABLEWAKEUP_ID", "Gpt_EnableWakeup", "GPT_CHECKWAKEUP_ID", "Gpt_CheckWakeup", "GPT_PROCESSCOMMONINTERRUPT_ID"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in Gpt_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `physical_page_start`: `10`
- `physical_page_end`: `12`
- `printed_page_start`: `10`
- `printed_page_end`: `12`
- `keywords`: ["define", "GPT", "Gpt", "Ftu", "STD_ON", "switch", "STD_OFF", "disable"]
- `anchor`: "2.3.3"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["GPT", "FTU", "FCPIT", "AONTIMER", "RTC", "Gpt", "channel", "define"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enumerations in Gpt.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Gpt.h"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["GPT", "Gpt", "define", "channel", "status", "Gpt_ChannelStatusType", "Gpt_ModeType", "FC7xxx"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Gpt_ChannelStatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Gpt.h / 2.4.1.1 Gpt_ChannelStatusType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["GPT", "Gpt", "define", "channel", "status", "Gpt_ChannelStatusType", "Gpt_ModeType", "FC7xxx"]
- `anchor`: "2.4.1.1"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enumerations in Gpt_Hw_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["GPT", "FTU", "FCPIT", "AONTIMER", "RTC", "Gpt", "channel", "define"]
- `anchor`: "2.4.2"

### SEC-002-004-002-001
- `source_number`: `2.4.2.1`
- `title`: "Gpt_ModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.1 Gpt_ModeType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["GPT", "Gpt", "define", "channel", "status", "Gpt_ChannelStatusType", "Gpt_ModeType", "FC7xxx"]
- `anchor`: "2.4.2.1"

### SEC-002-004-002-002
- `source_number`: `2.4.2.2`
- `title`: "Gpt_ChannelModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.2 Gpt_ChannelModeType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["FTU", "GPT", "FCPIT", "AONTIMER", "RTC", "mode", "Gpt_ChannelModeType", "channel"]
- `anchor`: "2.4.2.2"

### SEC-002-004-002-003
- `source_number`: `2.4.2.3`
- `title`: "Gpt_PredefTimerType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.3 Gpt_PredefTimerType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["FTU", "GPT", "FCPIT", "AONTIMER", "RTC", "mode", "Gpt_ChannelModeType", "channel"]
- `anchor`: "2.4.2.3"

### SEC-002-004-002-004
- `source_number`: `2.4.2.4`
- `title`: "Gpt_ModuleType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.4 Gpt_ModuleType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["FTU", "GPT", "FCPIT", "AONTIMER", "RTC", "mode", "Gpt_ChannelModeType", "channel"]
- `anchor`: "2.4.2.4"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `15`
- `physical_page_end`: `17`
- `printed_page_start`: `15`
- `printed_page_end`: `17`
- `keywords`: ["GPT", "channel", "FTU", "AONTIMER", "FCPIT", "Structure", "Diagram", "Data"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Gpt_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Gpt_ConfigType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["GPT", "typedef", "channel", "const", "Gpt_ChannelType", "data", "Gpt_ConfigType", "FC7xxx"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Gpt_ChannelInfoType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Gpt_ChannelInfoType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["GPT", "channel", "boolean", "Gpt_ChannelInfoType", "information", "Gpt_HwChannelInfoType", "Gpt_ConfigPredefChannelType", "FC7xxx"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Gpt_HwChannelInfoType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Gpt_HwChannelInfoType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["GPT", "channel", "boolean", "Gpt_ChannelInfoType", "information", "Gpt_HwChannelInfoType", "Gpt_ConfigPredefChannelType", "FC7xxx"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Gpt_ConfigPredefChannelType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Gpt_ConfigPredefChannelType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["GPT", "channel", "boolean", "Gpt_ChannelInfoType", "information", "Gpt_HwChannelInfoType", "Gpt_ConfigPredefChannelType", "FC7xxx"]
- `anchor`: "2.6.4"

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: "Gpt_ConfigChannelCommonType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Gpt_ConfigChannelCommonType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["GPT", "FTU", "AONTIMER", "FCPIT", "channel", "Gpt_ConfigChannelCommonType", "Gpt_ConfigChannelHwSpecificType", "Gpt_ConfigChannelType"]
- `anchor`: "2.6.5"

### SEC-002-006-006
- `source_number`: `2.6.6`
- `title`: "Gpt_ConfigChannelHwSpecificType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 Gpt_ConfigChannelHwSpecificType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["GPT", "FTU", "AONTIMER", "FCPIT", "channel", "Gpt_ConfigChannelCommonType", "Gpt_ConfigChannelHwSpecificType", "Gpt_ConfigChannelType"]
- `anchor`: "2.6.6"

### SEC-002-006-007
- `source_number`: `2.6.7`
- `title`: "Gpt_ConfigChannelType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.7 Gpt_ConfigChannelType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["GPT", "FTU", "AONTIMER", "FCPIT", "channel", "Gpt_ConfigChannelCommonType", "Gpt_ConfigChannelHwSpecificType", "Gpt_ConfigChannelType"]
- `anchor`: "2.6.7"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `18`
- `physical_page_end`: `22`
- `printed_page_start`: `18`
- `printed_page_end`: `22`
- `keywords`: ["GPT", "void", "Channel", "Ftu", "Gpt", "Gpt_ChannelType", "Diagram", "Returns"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Gpt.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h"
- `physical_page_start`: `18`
- `physical_page_end`: `22`
- `printed_page_start`: `18`
- `printed_page_end`: `22`
- `keywords`: ["GPT", "void", "Channel", "Ftu", "Gpt", "Gpt_ChannelType", "Diagram", "Returns"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Gpt_CheckWakeup (EcuM_WakeupSourceType WakeupSource)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.2 void Gpt_CheckWakeup (EcuM_WakeupSourceType WakeupSource)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "void Gpt_StartGlobalTime( const uint32 u32Group)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.3 void Gpt_StartGlobalTime( const uint32 u32Group)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "void Gpt_StopGlobalTime( const uint32 u32Group)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.4 void Gpt_StopGlobalTime( const uint32 u32Group)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "void Gpt_DeInit (void )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "void Gpt_DisableNotification (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.6 void Gpt_DisableNotification (Gpt_ChannelType Channel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "void Gpt_DisableWakeup (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.7 void Gpt_DisableWakeup (Gpt_ChannelType Channel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "void Gpt_EnableWakeup (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.9 void Gpt_EnableWakeup (Gpt_ChannelType Channel)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "Std_ReturnType Gpt_GetPredefTimerValue (Gpt_PredefTimerType PredefTimer, uint32 * TimeValuePtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.10 Std_ReturnType Gpt_GetPredefTimerValue (Gpt_PredefTimerType PredefTimer, uint32 * TimeValuePtr)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "Gpt_ValueType Gpt_GetTimeRemaining (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.12 Gpt_ValueType Gpt_GetTimeRemaining (Gpt_ChannelType Channel)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel"]
- `anchor`: "2.7.1.12"

### SEC-002-007-001-013
- `source_number`: `2.7.1.13`
- `title`: "void Gpt_GetVersionInfo (Std_VersionInfoType * VersionInfoPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.13 void Gpt_GetVersionInfo (Std_VersionInfoType * VersionInfoPtr)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel"]
- `anchor`: "2.7.1.13"

### SEC-002-007-001-014
- `source_number`: `2.7.1.14`
- `title`: "void Gpt_Init (const Gpt_ConfigType * ConfigPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.14 void Gpt_Init (const Gpt_ConfigType * ConfigPtr)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel"]
- `anchor`: "2.7.1.14"

### SEC-002-007-001-015
- `source_number`: `2.7.1.15`
- `title`: "void Gpt_SetMode (Gpt_ModeType Mode)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["GPT", "void", "Gpt_SetMode", "Gpt_ModeType", "Gpt_StartTimer", "Gpt_ChannelType", "Gpt_ValueType", "FC7xxx"]
- `anchor`: "2.7.1.15"

### SEC-002-007-001-016
- `source_number`: `2.7.1.16`
- `title`: "void Gpt_StartTimer (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.16 void Gpt_StartTimer (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["GPT", "void", "Gpt_SetMode", "Gpt_ModeType", "Gpt_StartTimer", "Gpt_ChannelType", "Gpt_ValueType", "FC7xxx"]
- `anchor`: "2.7.1.16"

### SEC-002-007-001-017
- `source_number`: `2.7.1.17`
- `title`: "void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void", "Gpt_StopTimer", "Gpt_ChannelType", "Gpt_ProcessCommonInterrupt"]
- `anchor`: "2.7.1.17"

### SEC-002-007-001-018
- `source_number`: `2.7.1.18`
- `title`: "void Gpt_ProcessCommonInterrupt (uint8 u8MapTableIndex)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.18 void Gpt_ProcessCommonInterrupt (uint8 u8MapTableIndex)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void", "Gpt_StopTimer", "Gpt_ChannelType", "Gpt_ProcessCommonInterrupt"]
- `anchor`: "2.7.1.18"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `23`
- `physical_page_end`: `35`
- `printed_page_start`: `23`
- `printed_page_end`: `35`
- `keywords`: ["void", "Returns", "Referenced", "FTU", "FCPIT", "eModule", "u8Channel", "const"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in Gpt_Hw.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h"
- `physical_page_start`: `23`
- `physical_page_end`: `25`
- `printed_page_start`: `23`
- `printed_page_end`: `25`
- `keywords`: ["GPT", "pChannelConfig", "FTU", "Ftu", "void", "const", "Gpt_ConfigChannelType", "Returns"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "Std_ReturnType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.1 Std_ReturnType"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void", "Gpt_StopTimer", "Gpt_ChannelType", "Gpt_ProcessCommonInterrupt"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.2 void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["GPT", "pChannelConfig", "void", "const", "Gpt_ConfigChannelType", "pointer", "Returns", "Referenced"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "void Gpt_HL_DisableInterrupt (const Gpt_ConfigChannelType * pChannelConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.3 void Gpt_HL_DisableInterrupt (const Gpt_ConfigChannelType * pChannelConfig)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["GPT", "pChannelConfig", "void", "const", "Gpt_ConfigChannelType", "pointer", "Returns", "Referenced"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "void Gpt_HL_EnableInterrupt (const Gpt_ConfigChannelType * pChannelConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.4 void Gpt_HL_EnableInterrupt (const Gpt_ConfigChannelType * pChannelConfig)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["GPT", "pChannelConfig", "void", "const", "Gpt_ConfigChannelType", "pointer", "Returns", "Referenced"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "void Gpt_HL_GetPredefTimerValue (const Gpt_ConfigPredefChannelType * pChannelConfig, uint32 *"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.5 void Gpt_HL_GetPredefTimerValue (const Gpt_ConfigPredefChannelType * pChannelConfig, uint32 *"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["GPT", "pChannelConfig", "void", "const", "Gpt_ConfigChannelType", "pointer", "Returns", "Referenced"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "Gpt_ValueType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.6 Gpt_ValueType"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig", "Gpt_ConfigChannelType", "void", "Gpt_ValueType"]
- `anchor`: "2.8.1.6"

### SEC-002-008-001-007
- `source_number`: `2.8.1.7`
- `title`: "void Gpt_HL_Init (const Gpt_ConfigChannelType * pChannelConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.7 void Gpt_HL_Init (const Gpt_ConfigChannelType * pChannelConfig)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig", "Gpt_ConfigChannelType", "void", "Gpt_ValueType"]
- `anchor`: "2.8.1.7"

### SEC-002-008-001-008
- `source_number`: `2.8.1.8`
- `title`: "void Gpt_HL_StartPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.8 void Gpt_HL_StartPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig", "Gpt_ConfigChannelType", "void", "Gpt_ValueType"]
- `anchor`: "2.8.1.8"

### SEC-002-008-001-009
- `source_number`: `2.8.1.9`
- `title`: "void Gpt_HW_ConfigGTB( const uint32 u32Group,boolean benable)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.9 void Gpt_HW_ConfigGTB( const uint32 u32Group,boolean benable)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig", "Gpt_ConfigChannelType", "void", "Gpt_ValueType"]
- `anchor`: "2.8.1.9"

### SEC-002-008-001-010
- `source_number`: `2.8.1.10`
- `title`: "void Gpt_HL_StartTimer (const Gpt_ConfigChannelType * pChannelConfig, Gpt_ValueType u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.10 void Gpt_HL_StartTimer (const Gpt_ConfigChannelType * pChannelConfig, Gpt_ValueType u32Value)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig", "Gpt_ConfigChannelType", "void", "Gpt_ValueType"]
- `anchor`: "2.8.1.10"

### SEC-002-008-001-011
- `source_number`: `2.8.1.11`
- `title`: "void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.11 void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns", "Referenced", "pConfigPtr", "timer"]
- `anchor`: "2.8.1.11"

### SEC-002-008-001-012
- `source_number`: `2.8.1.12`
- `title`: "void Gpt_HL_StopTimer (const Gpt_ConfigChannelType * pChannelConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.12 void Gpt_HL_StopTimer (const Gpt_ConfigChannelType * pChannelConfig)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns", "Referenced", "pConfigPtr", "timer"]
- `anchor`: "2.8.1.12"

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: "Functions in Gpt_Aontimer.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h"
- `physical_page_start`: `26`
- `physical_page_end`: `27`
- `printed_page_start`: `26`
- `printed_page_end`: `27`
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "timer", "pChannelConfig"]
- `anchor`: "2.8.2"

### SEC-002-008-002-001
- `source_number`: `2.8.2.1`
- `title`: "void Gpt_LL_Aontimer_DeInit (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.1 void Gpt_LL_Aontimer_DeInit (void )"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns", "Referenced", "pConfigPtr", "timer"]
- `anchor`: "2.8.2.1"

### SEC-002-008-002-002
- `source_number`: `2.8.2.2`
- `title`: "void Gpt_LL_Aontimer_DisableInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.2 void Gpt_LL_Aontimer_DisableInterrupt (void )"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns", "Referenced", "pConfigPtr", "timer"]
- `anchor`: "2.8.2.2"

### SEC-002-008-002-003
- `source_number`: `2.8.2.3`
- `title`: "void Gpt_LL_Aontimer_EnableInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.3 void Gpt_LL_Aontimer_EnableInterrupt (void )"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns", "Referenced", "pConfigPtr", "timer"]
- `anchor`: "2.8.2.3"

### SEC-002-008-002-004
- `source_number`: `2.8.2.4`
- `title`: "uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.4 uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void )"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.2.4"

### SEC-002-008-002-005
- `source_number`: `2.8.2.5`
- `title`: "uint32 Gpt_LL_Aontimer_GetTimeElapsed (boolean * pbReturnChannelRollover, uint32 * pu32TargetValue)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.5 uint32 Gpt_LL_Aontimer_GetTimeElapsed (boolean * pbReturnChannelRollover, uint32 * pu32TargetValue)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.2.5"

### SEC-002-008-002-006
- `source_number`: `2.8.2.6`
- `title`: "void Gpt_LL_Aontimer_Init (const Gpt_ConfigChannelAontimerType *const pAontiemrConf)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.6 void Gpt_LL_Aontimer_Init (const Gpt_ConfigChannelAontimerType *const pAontiemrConf)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.2.6"

### SEC-002-008-002-007
- `source_number`: `2.8.2.7`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.7 void"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.2.7"

### SEC-002-008-002-008
- `source_number`: `2.8.2.8`
- `title`: "void Gpt_LL_Aontimer_StartTimer (uint16 u16Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.8 void Gpt_LL_Aontimer_StartTimer (uint16 u16Value)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.2.8"

### SEC-002-008-002-009
- `source_number`: `2.8.2.9`
- `title`: "void Gpt_LL_Aontimer_StopPredefTimer (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.9 void Gpt_LL_Aontimer_StopPredefTimer (void )"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced"]
- `anchor`: "2.8.2.9"

### SEC-002-008-002-010
- `source_number`: `2.8.2.10`
- `title`: "void Gpt_LL_Aontimer_StopTimer (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.10 void Gpt_LL_Aontimer_StopTimer (void )"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced"]
- `anchor`: "2.8.2.10"

### SEC-002-008-003
- `source_number`: `2.8.3`
- `title`: "Functions in Gpt_FCPit.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h"
- `physical_page_start`: `28`
- `physical_page_end`: `29`
- `printed_page_start`: `28`
- `printed_page_end`: `29`
- `keywords`: ["FCPIT", "GPT", "AONTIMER", "eChannel", "void", "Gpt_FcpitChannelType", "Returns", "Referenced"]
- `anchor`: "2.8.3"

### SEC-002-008-003-001
- `source_number`: `2.8.3.1`
- `title`: "void Gpt_LL_FCPit_DeInit (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.1 void Gpt_LL_FCPit_DeInit (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced"]
- `anchor`: "2.8.3.1"

### SEC-002-008-003-002
- `source_number`: `2.8.3.2`
- `title`: "void Gpt_LL_FCPIT_DisableInterrupt (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.2 void Gpt_LL_FCPIT_DisableInterrupt (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced"]
- `anchor`: "2.8.3.2"

### SEC-002-008-003-003
- `source_number`: `2.8.3.3`
- `title`: "void Gpt_LL_FCPit_EnableInterrupt (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.3 void Gpt_LL_FCPit_EnableInterrupt (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced"]
- `anchor`: "2.8.3.3"

### SEC-002-008-003-004
- `source_number`: `2.8.3.4`
- `title`: "uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.4 uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["FCPIT", "GPT", "eChannel", "Gpt_FcpitChannelType", "u32MaxValue", "boolean", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.3.4"

### SEC-002-008-003-005
- `source_number`: `2.8.3.5`
- `title`: "uint32 Gpt_LL_FCPit_GetTimeElapsed (Gpt_FcpitChannelType eChannel, boolean * pbReturnChannelRollover,"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.5 uint32 Gpt_LL_FCPit_GetTimeElapsed (Gpt_FcpitChannelType eChannel, boolean * pbReturnChannelRollover,"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["FCPIT", "GPT", "eChannel", "Gpt_FcpitChannelType", "u32MaxValue", "boolean", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.3.5"

### SEC-002-008-003-006
- `source_number`: `2.8.3.6`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.6 void"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["FCPIT", "GPT", "eChannel", "Gpt_FcpitChannelType", "u32MaxValue", "boolean", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.3.6"

### SEC-002-008-003-007
- `source_number`: `2.8.3.7`
- `title`: "void Gpt_LL_FCPIT_StartPredefTimer (Gpt_FcpitChannelType eChannel, boolean bDbgModeEnable, uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.7 void Gpt_LL_FCPIT_StartPredefTimer (Gpt_FcpitChannelType eChannel, boolean bDbgModeEnable, uint32"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["FCPIT", "GPT", "eChannel", "Gpt_FcpitChannelType", "u32MaxValue", "boolean", "pbReturnChannelRollover", "pu32TargetValue"]
- `anchor`: "2.8.3.7"

### SEC-002-008-003-008
- `source_number`: `2.8.3.8`
- `title`: "void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.8 void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["FCPIT", "FTU", "GPT", "eChannel", "void", "Gpt_FcpitChannelType", "channel", "u32Value"]
- `anchor`: "2.8.3.8"

### SEC-002-008-003-009
- `source_number`: `2.8.3.9`
- `title`: "void Gpt_LL_FCPIT_StopPredefTimer (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.9 void Gpt_LL_FCPIT_StopPredefTimer (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["FCPIT", "FTU", "GPT", "eChannel", "void", "Gpt_FcpitChannelType", "channel", "u32Value"]
- `anchor`: "2.8.3.9"

### SEC-002-008-003-010
- `source_number`: `2.8.3.10`
- `title`: "void Gpt_LL_FCPit_StopTimer (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.10 void Gpt_LL_FCPit_StopTimer (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["FCPIT", "FTU", "GPT", "eChannel", "void", "Gpt_FcpitChannelType", "channel", "u32Value"]
- `anchor`: "2.8.3.10"

### SEC-002-008-004
- `source_number`: `2.8.4`
- `title`: "Functions in Gpt_Ftu.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h"
- `physical_page_start`: `30`
- `physical_page_end`: `32`
- `printed_page_start`: `30`
- `printed_page_end`: `32`
- `keywords`: ["FTU", "FCPIT", "GPT", "eModule", "Ftu", "void", "u8Channel", "Gpt_ModuleType"]
- `anchor`: "2.8.4"

### SEC-002-008-004-001
- `source_number`: `2.8.4.1`
- `title`: "void Gpt_LL_Ftu_ChangeNextTimeoutValue (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.1 void Gpt_LL_Ftu_ChangeNextTimeoutValue (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["FCPIT", "FTU", "GPT", "eChannel", "void", "Gpt_FcpitChannelType", "channel", "u32Value"]
- `anchor`: "2.8.4.1"

### SEC-002-008-004-002
- `source_number`: `2.8.4.2`
- `title`: "void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.2 void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FTU", "GPT", "Ftu", "eModule", "Gpt_ModuleType", "u8Channel", "Returns", "Referenced"]
- `anchor`: "2.8.4.2"

### SEC-002-008-004-003
- `source_number`: `2.8.4.3`
- `title`: "uint32 Gpt_LL_Ftu_GetPredefTimerValue (Gpt_ModuleType eModule)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.3 uint32 Gpt_LL_Ftu_GetPredefTimerValue (Gpt_ModuleType eModule)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FTU", "GPT", "Ftu", "eModule", "Gpt_ModuleType", "u8Channel", "Returns", "Referenced"]
- `anchor`: "2.8.4.3"

### SEC-002-008-004-004
- `source_number`: `2.8.4.4`
- `title`: "uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.4 uint32"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FTU", "GPT", "Ftu", "eModule", "Gpt_ModuleType", "u8Channel", "Returns", "Referenced"]
- `anchor`: "2.8.4.4"

### SEC-002-008-004-005
- `source_number`: `2.8.4.5`
- `title`: "void Gpt_Ftu_ConfigGTB( const uint32 u32Group,boolean benable)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.5 void Gpt_Ftu_ConfigGTB( const uint32 u32Group,boolean benable)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FTU", "GPT", "Ftu", "eModule", "Gpt_ModuleType", "u8Channel", "Returns", "Referenced"]
- `anchor`: "2.8.4.5"

### SEC-002-008-004-006
- `source_number`: `2.8.4.6`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.6 void"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FTU", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "bDbgModeEnable", "pFtuConfig"]
- `anchor`: "2.8.4.6"

### SEC-002-008-004-007
- `source_number`: `2.8.4.7`
- `title`: "void Gpt_LL_Ftu_StartPredefTimer (Gpt_ModuleType eModule, uint8 u8Channel, boolean bDbgModeEnable,"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.7 void Gpt_LL_Ftu_StartPredefTimer (Gpt_ModuleType eModule, uint8 u8Channel, boolean bDbgModeEnable,"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FTU", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "bDbgModeEnable", "pFtuConfig"]
- `anchor`: "2.8.4.7"

### SEC-002-008-004-008
- `source_number`: `2.8.4.8`
- `title`: "void Gpt_LL_Ftu_StartTimer (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.8 void Gpt_LL_Ftu_StartTimer (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FTU", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "bDbgModeEnable", "pFtuConfig"]
- `anchor`: "2.8.4.8"

### SEC-002-008-004-009
- `source_number`: `2.8.4.9`
- `title`: "void Gpt_LL_Ftu_StopPredefTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.9 void Gpt_LL_Ftu_StopPredefTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FTU", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "bDbgModeEnable", "pFtuConfig"]
- `anchor`: "2.8.4.9"

### SEC-002-008-004-010
- `source_number`: `2.8.4.10`
- `title`: "void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.10 void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel"]
- `anchor`: "2.8.4.10"

### SEC-002-008-005
- `source_number`: `2.8.5`
- `title`: "Functions in Gpt_Rtc.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel"]
- `anchor`: "2.8.5"

### SEC-002-008-005-001
- `source_number`: `2.8.5.1`
- `title`: "void Gpt_LL_Rtc_DeInit (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.1 void Gpt_LL_Rtc_DeInit (void )"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel"]
- `anchor`: "2.8.5.1"

### SEC-002-008-005-002
- `source_number`: `2.8.5.2`
- `title`: "void Gpt_LL_Rtc_DisableInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.2 void Gpt_LL_Rtc_DisableInterrupt (void )"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel"]
- `anchor`: "2.8.5.2"

### SEC-002-008-005-003
- `source_number`: `2.8.5.3`
- `title`: "void Gpt_LL_Rtc_EnableInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.3 void Gpt_LL_Rtc_EnableInterrupt (void )"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel"]
- `anchor`: "2.8.5.3"

### SEC-002-008-005-004
- `source_number`: `2.8.5.4`
- `title`: "uint32 Gpt_LL_Rtc_GetTimeElapsed (boolean * pReturnChannelRollover, uint32 * pTargetValue)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.4 uint32 Gpt_LL_Rtc_GetTimeElapsed (boolean * pReturnChannelRollover, uint32 * pTargetValue)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel"]
- `anchor`: "2.8.5.4"

### SEC-002-008-005-005
- `source_number`: `2.8.5.5`
- `title`: "void Gpt_LL_Rtc_Init (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.5 void Gpt_LL_Rtc_Init (void )"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["RTC", "TSTMP", "GPT", "FTU", "void", "Returns", "Referenced", "Gpt_LL_Rtc_Init"]
- `anchor`: "2.8.5.5"

### SEC-002-008-005-006
- `source_number`: `2.8.5.6`
- `title`: "void Gpt_LL_Rtc_StartTimer (uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.6 void Gpt_LL_Rtc_StartTimer (uint32 u32Value)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["RTC", "TSTMP", "GPT", "FTU", "void", "Returns", "Referenced", "Gpt_LL_Rtc_Init"]
- `anchor`: "2.8.5.6"

### SEC-002-008-005-007
- `source_number`: `2.8.5.7`
- `title`: "void Gpt_LL_Rtc_StopTimer (void )"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.7 void Gpt_LL_Rtc_StopTimer (void )"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["RTC", "TSTMP", "GPT", "FTU", "void", "Returns", "Referenced", "Gpt_LL_Rtc_Init"]
- `anchor`: "2.8.5.7"

### SEC-002-008-006
- `source_number`: `2.8.6`
- `title`: "Functions in Gpt_Tstmp.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h"
- `physical_page_start`: `34`
- `physical_page_end`: `35`
- `printed_page_start`: `34`
- `printed_page_end`: `35`
- `keywords`: ["TSTMP", "RTC", "GPT", "FTU", "void", "eModule", "u8Channel", "Gpt_ModuleType"]
- `anchor`: "2.8.6"

### SEC-002-008-006-001
- `source_number`: `2.8.6.1`
- `title`: "void Gpt_LL_Tstmp_Init(Gpt_ModuleType eModule, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.1 void Gpt_LL_Tstmp_Init(Gpt_ModuleType eModule, uint8 u8Channel)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["RTC", "TSTMP", "GPT", "FTU", "void", "Returns", "Referenced", "Gpt_LL_Rtc_Init"]
- `anchor`: "2.8.6.1"

### SEC-002-008-006-002
- `source_number`: `2.8.6.2`
- `title`: "2.8.6.3"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.2 2.8.6.3"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["TSTMP", "GPT", "RTC", "eModule", "u8Channel", "Gpt_ModuleType", "channel", "void"]
- `anchor`: "2.8.6.2"

### SEC-002-008-006-004
- `source_number`: `2.8.6.4`
- `title`: "void Gpt_LL_Tstmp_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.4 void Gpt_LL_Tstmp_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["TSTMP", "GPT", "RTC", "eModule", "u8Channel", "Gpt_ModuleType", "channel", "void"]
- `anchor`: "2.8.6.4"

### SEC-002-008-006-005
- `source_number`: `2.8.6.5`
- `title`: "void Gpt_LL_Tstmp_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.5 void Gpt_LL_Tstmp_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["TSTMP", "GPT", "RTC", "eModule", "u8Channel", "Gpt_ModuleType", "channel", "void"]
- `anchor`: "2.8.6.5"

### SEC-002-008-006-006
- `source_number`: `2.8.6.6`
- `title`: "uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.6 uint32"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["TSTMP", "GPT", "RTC", "eModule", "u8Channel", "Gpt_ModuleType", "channel", "void"]
- `anchor`: "2.8.6.6"

### SEC-002-008-006-007
- `source_number`: `2.8.6.7`
- `title`: "void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.7 void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["TSTMP", "AONTIMER", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "u32MaxValue"]
- `anchor`: "2.8.6.7"

### SEC-002-008-006-008
- `source_number`: `2.8.6.8`
- `title`: "uint32 Gpt_LL_Tstmp_GetPredefTimerValue(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxCount)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.8 uint32 Gpt_LL_Tstmp_GetPredefTimerValue(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxCount)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["TSTMP", "AONTIMER", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "u32MaxValue"]
- `anchor`: "2.8.6.8"

### SEC-002-008-006-009
- `source_number`: `2.8.6.9`
- `title`: "void Gpt_LL_Tstmp_StopPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.9 void Gpt_LL_Tstmp_StopPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["TSTMP", "AONTIMER", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "u32MaxValue"]
- `anchor`: "2.8.6.9"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "Peripheral Functions"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions"
- `physical_page_start`: `36`
- `physical_page_end`: `54`
- `printed_page_start`: `36`
- `printed_page_end`: `54`
- `keywords`: ["void", "LOCAL_INLINE", "Returns", "Referenced", "FTU", "pFtu", "TSTMP", "FCPIT"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Functions in Gpt_Aontiemr_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h"
- `physical_page_start`: `36`
- `physical_page_end`: `39`
- `printed_page_start`: `36`
- `printed_page_end`: `39`
- `keywords`: ["void", "LOCAL_INLINE", "AONTIMER", "TSTMP", "GPT", "Returns", "Referenced", "interrupt"]
- `anchor`: "2.9.1"

### SEC-002-009-001-001
- `source_number`: `2.9.1.1`
- `title`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntEnableState (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.1 LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntEnableState (void )"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["TSTMP", "AONTIMER", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "u32MaxValue"]
- `anchor`: "2.9.1.1"

### SEC-002-009-001-002
- `source_number`: `2.9.1.2`
- `title`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.2 LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue"]
- `anchor`: "2.9.1.2"

### SEC-002-009-001-003
- `source_number`: `2.9.1.3`
- `title`: "LOCAL_INLINE boolean AONTIMER_HWA_CheckIntFlagAndEnable (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.3 LOCAL_INLINE boolean AONTIMER_HWA_CheckIntFlagAndEnable (void )"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue"]
- `anchor`: "2.9.1.3"

### SEC-002-009-001-004
- `source_number`: `2.9.1.4`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_ClearInterruptFlag (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.4 LOCAL_INLINE void AONTIMER_HWA_ClearInterruptFlag (void )"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue"]
- `anchor`: "2.9.1.4"

### SEC-002-009-001-005
- `source_number`: `2.9.1.5`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_ConfigModulePrescale (uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.5 LOCAL_INLINE void AONTIMER_HWA_ConfigModulePrescale (uint32 u32RegValue)"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue"]
- `anchor`: "2.9.1.5"

### SEC-002-009-001-006
- `source_number`: `2.9.1.6`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_DisableBypassMode (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.6 LOCAL_INLINE void AONTIMER_HWA_DisableBypassMode (void )"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue"]
- `anchor`: "2.9.1.6"

### SEC-002-009-001-007
- `source_number`: `2.9.1.7`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_DisableModuleInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.7 LOCAL_INLINE void AONTIMER_HWA_DisableModuleInterrupt (void )"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue"]
- `anchor`: "2.9.1.7"

### SEC-002-009-001-008
- `source_number`: `2.9.1.8`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.8 LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns", "Gpt_LL_Aontimer_Init", "Gpt_LL_Aontimer_StartPredefTimer", "Referenced"]
- `anchor`: "2.9.1.8"

### SEC-002-009-001-009
- `source_number`: `2.9.1.9`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_DisableTimer (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.9 LOCAL_INLINE void AONTIMER_HWA_DisableTimer (void )"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns", "Gpt_LL_Aontimer_Init", "Gpt_LL_Aontimer_StartPredefTimer", "Referenced"]
- `anchor`: "2.9.1.9"

### SEC-002-009-001-010
- `source_number`: `2.9.1.10`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_EnableBypassMode (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.10 LOCAL_INLINE void AONTIMER_HWA_EnableBypassMode (void )"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns", "Gpt_LL_Aontimer_Init", "Gpt_LL_Aontimer_StartPredefTimer", "Referenced"]
- `anchor`: "2.9.1.10"

### SEC-002-009-001-011
- `source_number`: `2.9.1.11`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_EnableModuleInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.11 LOCAL_INLINE void AONTIMER_HWA_EnableModuleInterrupt (void )"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns", "Gpt_LL_Aontimer_Init", "Gpt_LL_Aontimer_StartPredefTimer", "Referenced"]
- `anchor`: "2.9.1.11"

### SEC-002-009-001-012
- `source_number`: `2.9.1.12`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_EnableTimer (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.12 LOCAL_INLINE void AONTIMER_HWA_EnableTimer (void )"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns", "Gpt_LL_Aontimer_Init", "Gpt_LL_Aontimer_StartPredefTimer", "Referenced"]
- `anchor`: "2.9.1.12"

### SEC-002-009-001-013
- `source_number`: `2.9.1.13`
- `title`: "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.13 LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns"]
- `anchor`: "2.9.1.13"

### SEC-002-009-001-014
- `source_number`: `2.9.1.14`
- `title`: "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCounterCurrentValue (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.14 LOCAL_INLINE uint32 AONTIMER_HWA_ReadCounterCurrentValue (void )"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns"]
- `anchor`: "2.9.1.14"

### SEC-002-009-001-015
- `source_number`: `2.9.1.15`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_SelectModuleClkSrc (Gpt_AontimerClkSrcType eClk)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.15 LOCAL_INLINE void AONTIMER_HWA_SelectModuleClkSrc (Gpt_AontimerClkSrcType eClk)"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns"]
- `anchor`: "2.9.1.15"

### SEC-002-009-001-016
- `source_number`: `2.9.1.16`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_SetCounterResetOnOverflow (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.16 LOCAL_INLINE void AONTIMER_HWA_SetCounterResetOnOverflow (void )"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns"]
- `anchor`: "2.9.1.16"

### SEC-002-009-001-017
- `source_number`: `2.9.1.17`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_SetModuleCompareValue (uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.17 LOCAL_INLINE void AONTIMER_HWA_SetModuleCompareValue (uint32 u32RegValue)"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns"]
- `anchor`: "2.9.1.17"

### SEC-002-009-001-018
- `source_number`: `2.9.1.18`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_SetModuleCounterValue (uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.18 LOCAL_INLINE void AONTIMER_HWA_SetModuleCounterValue (uint32 u32RegValue)"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns"]
- `anchor`: "2.9.1.18"

### SEC-002-009-001-019
- `source_number`: `2.9.1.19`
- `title`: "LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.19 LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "LOCAL_INLINE", "u32RegValue", "void", "Gpt_FcpitChannelType", "eChannel"]
- `anchor`: "2.9.1.19"

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: "Functions in Gpt_Fcpit_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h"
- `physical_page_start`: `40`
- `physical_page_end`: `42`
- `printed_page_start`: `40`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "void", "LOCAL_INLINE", "GPT", "AONTIMER", "u32RegValue", "Returns", "Referenced"]
- `anchor`: "2.9.2"

### SEC-002-009-002-001
- `source_number`: `2.9.2.1`
- `title`: "LOCAL_INLINE void FCPIT_HWA_ClearChannelsInterruptFlag (uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.1 LOCAL_INLINE void FCPIT_HWA_ClearChannelsInterruptFlag (uint32 u32RegValue)"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "LOCAL_INLINE", "u32RegValue", "void", "Gpt_FcpitChannelType", "eChannel"]
- `anchor`: "2.9.2.1"

### SEC-002-009-002-002
- `source_number`: `2.9.2.2`
- `title`: "LOCAL_INLINE void FCPIT_HWA_ConfigChannel (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.2 LOCAL_INLINE void FCPIT_HWA_ConfigChannel (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "LOCAL_INLINE", "u32RegValue", "void", "Gpt_FcpitChannelType", "eChannel"]
- `anchor`: "2.9.2.2"

### SEC-002-009-002-003
- `source_number`: `2.9.2.3`
- `title`: "LOCAL_INLINE void FCPIT_HWA_DisableChannel (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.3 LOCAL_INLINE void FCPIT_HWA_DisableChannel (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "LOCAL_INLINE", "u32RegValue", "void", "Gpt_FcpitChannelType", "eChannel"]
- `anchor`: "2.9.2.3"

### SEC-002-009-002-004
- `source_number`: `2.9.2.4`
- `title`: "LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.4 LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue", "Returns", "Referenced", "Gpt_LL_FCPit_DeInit"]
- `anchor`: "2.9.2.4"

### SEC-002-009-002-005
- `source_number`: `2.9.2.5`
- `title`: "LOCAL_INLINE void FCPIT_HWA_DisableModule (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.5 LOCAL_INLINE void FCPIT_HWA_DisableModule (void )"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue", "Returns", "Referenced", "Gpt_LL_FCPit_DeInit"]
- `anchor`: "2.9.2.5"

### SEC-002-009-002-006
- `source_number`: `2.9.2.6`
- `title`: "LOCAL_INLINE void FCPIT_HWA_EnableChannel (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.6 LOCAL_INLINE void FCPIT_HWA_EnableChannel (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue", "Returns", "Referenced", "Gpt_LL_FCPit_DeInit"]
- `anchor`: "2.9.2.6"

### SEC-002-009-002-007
- `source_number`: `2.9.2.7`
- `title`: "LOCAL_INLINE void FCPIT_HWA_EnableChannelsInterrupt (uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.7 LOCAL_INLINE void FCPIT_HWA_EnableChannelsInterrupt (uint32 u32RegValue)"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue", "Returns", "Referenced", "Gpt_LL_FCPit_DeInit"]
- `anchor`: "2.9.2.7"

### SEC-002-009-002-008
- `source_number`: `2.9.2.8`
- `title`: "LOCAL_INLINE void FCPIT_HWA_EnableModule (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.8 LOCAL_INLINE void FCPIT_HWA_EnableModule (void )"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue", "Returns", "Referenced", "Gpt_LL_FCPit_DeInit"]
- `anchor`: "2.9.2.8"

### SEC-002-009-002-009
- `source_number`: `2.9.2.9`
- `title`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.9 LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel"]
- `anchor`: "2.9.2.9"

### SEC-002-009-002-010
- `source_number`: `2.9.2.10`
- `title`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadCurChannelValue (Gpt_FcpitChannelType eChannel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.10 LOCAL_INLINE uint32 FCPIT_HWA_ReadCurChannelValue (Gpt_FcpitChannelType eChannel)"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel"]
- `anchor`: "2.9.2.10"

### SEC-002-009-002-011
- `source_number`: `2.9.2.11`
- `title`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadEnableInterruptFlag (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.11 LOCAL_INLINE uint32 FCPIT_HWA_ReadEnableInterruptFlag (void )"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel"]
- `anchor`: "2.9.2.11"

### SEC-002-009-002-012
- `source_number`: `2.9.2.12`
- `title`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadInterruptFlag (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.12 LOCAL_INLINE uint32 FCPIT_HWA_ReadInterruptFlag (void )"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel"]
- `anchor`: "2.9.2.12"

### SEC-002-009-002-013
- `source_number`: `2.9.2.13`
- `title`: "LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnDebug (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.13 LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnDebug (void )"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel"]
- `anchor`: "2.9.2.13"

### SEC-002-009-002-014
- `source_number`: `2.9.2.14`
- `title`: "LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnLpm (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.14 LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnLpm (void )"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel"]
- `anchor`: "2.9.2.14"

### SEC-002-009-002-015
- `source_number`: `2.9.2.15`
- `title`: "LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.15 LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE", "channel", "FTU_Type", "Referenced"]
- `anchor`: "2.9.2.15"

### SEC-002-009-002-016
- `source_number`: `2.9.2.16`
- `title`: "LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnLpm (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.16 LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnLpm (void )"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE", "channel", "FTU_Type", "Referenced"]
- `anchor`: "2.9.2.16"

### SEC-002-009-002-017
- `source_number`: `2.9.2.17`
- `title`: "LOCAL_INLINE void FCPIT_HWA_SetChannelValue (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.17 LOCAL_INLINE void FCPIT_HWA_SetChannelValue (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE", "channel", "FTU_Type", "Referenced"]
- `anchor`: "2.9.2.17"

### SEC-002-009-003
- `source_number`: `2.9.3`
- `title`: "Functions in Gpt_Ftu_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h"
- `physical_page_start`: `43`
- `physical_page_end`: `47`
- `printed_page_start`: `43`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "pFtu", "LOCAL_INLINE", "void", "FTU_Type", "GPT", "FCPIT", "u8Channel"]
- `anchor`: "2.9.3"

### SEC-002-009-003-001
- `source_number`: `2.9.3.1`
- `title`: "LOCAL_INLINE void FTU_HWA_ClearChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.1 LOCAL_INLINE void FTU_HWA_ClearChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE", "channel", "FTU_Type", "Referenced"]
- `anchor`: "2.9.3.1"

### SEC-002-009-003-002
- `source_number`: `2.9.3.2`
- `title`: "LOCAL_INLINE void FTU_HWA_ClearModuleAllFaultFlag (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.2 LOCAL_INLINE void FTU_HWA_ClearModuleAllFaultFlag (FTU_Type * pFtu)"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE", "channel", "FTU_Type", "Referenced"]
- `anchor`: "2.9.3.2"

### SEC-002-009-003-003
- `source_number`: `2.9.3.3`
- `title`: "LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.3 LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "u32RegValue", "Gpt_LL_Ftu_Init"]
- `anchor`: "2.9.3.3"

### SEC-002-009-003-004
- `source_number`: `2.9.3.4`
- `title`: "LOCAL_INLINE void FTU_HWA_ClearModuleCounterInitialValue (FTU_Type * pFtu, uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.4 LOCAL_INLINE void FTU_HWA_ClearModuleCounterInitialValue (FTU_Type * pFtu, uint32 u32RegValue)"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "u32RegValue", "Gpt_LL_Ftu_Init"]
- `anchor`: "2.9.3.4"

### SEC-002-009-003-005
- `source_number`: `2.9.3.5`
- `title`: "LOCAL_INLINE void FTU_HWA_ClearModuleUpdateRegBySync (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.5 LOCAL_INLINE void FTU_HWA_ClearModuleUpdateRegBySync (FTU_Type * pFtu)"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "u32RegValue", "Gpt_LL_Ftu_Init"]
- `anchor`: "2.9.3.5"

### SEC-002-009-003-006
- `source_number`: `2.9.3.6`
- `title`: "LOCAL_INLINE void FTU_HWA_ClearOutputMode (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.6 LOCAL_INLINE void FTU_HWA_ClearOutputMode (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "u32RegValue", "Gpt_LL_Ftu_Init"]
- `anchor`: "2.9.3.6"

### SEC-002-009-003-007
- `source_number`: `2.9.3.7`
- `title`: "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.7 LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "Gpt_LL_Ftu_StartPredefTimer", "eDbgMode"]
- `anchor`: "2.9.3.7"

### SEC-002-009-003-008
- `source_number`: `2.9.3.8`
- `title`: "LOCAL_INLINE void FTU_HWA_DisableChannelInterrupt (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.8 LOCAL_INLINE void FTU_HWA_DisableChannelInterrupt (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "Gpt_LL_Ftu_StartPredefTimer", "eDbgMode"]
- `anchor`: "2.9.3.8"

### SEC-002-009-003-009
- `source_number`: `2.9.3.9`
- `title`: "LOCAL_INLINE void FTU_HWA_DisableModuleCpwmMode (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.9 LOCAL_INLINE void FTU_HWA_DisableModuleCpwmMode (FTU_Type * pFtu)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "Gpt_LL_Ftu_StartPredefTimer", "eDbgMode"]
- `anchor`: "2.9.3.9"

### SEC-002-009-003-010
- `source_number`: `2.9.3.10`
- `title`: "LOCAL_INLINE void FTU_HWA_DisableModuleFaultMode (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.10 LOCAL_INLINE void FTU_HWA_DisableModuleFaultMode (FTU_Type * pFtu)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "Gpt_LL_Ftu_StartPredefTimer", "eDbgMode"]
- `anchor`: "2.9.3.10"

### SEC-002-009-003-011
- `source_number`: `2.9.3.11`
- `title`: "LOCAL_INLINE void FTU_HWA_DisableOverflowInterrupt (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.11 LOCAL_INLINE void FTU_HWA_DisableOverflowInterrupt (FTU_Type * pFtu)"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "Gpt_LL_Ftu_StartPredefTimer", "eDbgMode"]
- `anchor`: "2.9.3.11"

### SEC-002-009-003-012
- `source_number`: `2.9.3.12`
- `title`: "LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.12 LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u8Channel", "channel", "interrupt"]
- `anchor`: "2.9.3.12"

### SEC-002-009-003-013
- `source_number`: `2.9.3.13`
- `title`: "LOCAL_INLINE void FTU_HWA_EnableChannelInterrupt (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.13 LOCAL_INLINE void FTU_HWA_EnableChannelInterrupt (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u8Channel", "channel", "interrupt"]
- `anchor`: "2.9.3.13"

### SEC-002-009-003-014
- `source_number`: `2.9.3.14`
- `title`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.14 LOCAL_INLINE uint32 FTU_HWA_ReadChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u8Channel", "channel", "interrupt"]
- `anchor`: "2.9.3.14"

### SEC-002-009-003-015
- `source_number`: `2.9.3.15`
- `title`: "LOCAL_INLINE boolean FTU_HWA_ReadChannelInterruptFlagAndEnable (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.15 LOCAL_INLINE boolean FTU_HWA_ReadChannelInterruptFlagAndEnable (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u8Channel", "channel", "interrupt"]
- `anchor`: "2.9.3.15"

### SEC-002-009-003-016
- `source_number`: `2.9.3.16`
- `title`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.16 LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u32RegValue", "u8Channel", "void"]
- `anchor`: "2.9.3.16"

### SEC-002-009-003-017
- `source_number`: `2.9.3.17`
- `title`: "LOCAL_INLINE uint32 FTU_HWA_ReadModuleCounter (FTU_Type * pFtu)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.17 LOCAL_INLINE uint32 FTU_HWA_ReadModuleCounter (FTU_Type * pFtu)"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u32RegValue", "u8Channel", "void"]
- `anchor`: "2.9.3.17"

### SEC-002-009-003-018
- `source_number`: `2.9.3.18`
- `title`: "LOCAL_INLINE void FTU_HWA_SetChannelValue (FTU_Type * pFtu, uint8 u8Channel, uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.18 LOCAL_INLINE void FTU_HWA_SetChannelValue (FTU_Type * pFtu, uint8 u8Channel, uint32 u32RegValue)"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u32RegValue", "u8Channel", "void"]
- `anchor`: "2.9.3.18"

### SEC-002-009-003-019
- `source_number`: `2.9.3.19`
- `title`: "LOCAL_INLINE void FTU_HWA_SetModuleClkSrc (FTU_Type * pFtu, Gpt_FtuModuleClkSrcType eClkSrc)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.19 LOCAL_INLINE void FTU_HWA_SetModuleClkSrc (FTU_Type * pFtu, Gpt_FtuModuleClkSrcType eClkSrc)"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u32RegValue", "u8Channel", "void"]
- `anchor`: "2.9.3.19"

### SEC-002-009-003-020
- `source_number`: `2.9.3.20`
- `title`: "LOCAL_INLINE void FTU_HWA_SetModuleCompareValue (FTU_Type * pFtu, uint32 u32RegValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.20 LOCAL_INLINE void FTU_HWA_SetModuleCompareValue (FTU_Type * pFtu, uint32 u32RegValue)"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u32RegValue", "u8Channel", "void"]
- `anchor`: "2.9.3.20"

### SEC-002-009-003-021
- `source_number`: `2.9.3.21`
- `title`: "LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.21 LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["FTU", "GPT", "LOCAL_INLINE", "void", "pFtu", "FTU_Type", "Returns", "Referenced"]
- `anchor`: "2.9.3.21"

### SEC-002-009-003-022
- `source_number`: `2.9.3.22`
- `title`: "LOCAL_INLINE void FTU_HWA_SetOutputMode (FTU_Type * pFtu, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.22 LOCAL_INLINE void FTU_HWA_SetOutputMode (FTU_Type * pFtu, uint8 u8Channel)"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["FTU", "GPT", "LOCAL_INLINE", "void", "pFtu", "FTU_Type", "Returns", "Referenced"]
- `anchor`: "2.9.3.22"

### SEC-002-009-004
- `source_number`: `2.9.4`
- `title`: "Functions in Gpt_Rtc_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h"
- `physical_page_start`: `48`
- `physical_page_end`: `50`
- `printed_page_start`: `48`
- `printed_page_end`: `50`
- `keywords`: ["void", "LOCAL_INLINE", "RTC", "FTU", "GPT", "Returns", "Referenced", "pFtu"]
- `anchor`: "2.9.4"

### SEC-002-009-004-001
- `source_number`: `2.9.4.1`
- `title`: "LOCAL_INLINE void ConfigControl (uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.1 LOCAL_INLINE void ConfigControl (uint32 u32Value)"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["FTU", "GPT", "LOCAL_INLINE", "void", "pFtu", "FTU_Type", "Returns", "Referenced"]
- `anchor`: "2.9.4.1"

### SEC-002-009-004-002
- `source_number`: `2.9.4.2`
- `title`: "LOCAL_INLINE void DisableAlarmInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.2 LOCAL_INLINE void DisableAlarmInterrupt (void )"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["FTU", "GPT", "LOCAL_INLINE", "void", "pFtu", "FTU_Type", "Returns", "Referenced"]
- `anchor`: "2.9.4.2"

### SEC-002-009-004-003
- `source_number`: `2.9.4.3`
- `title`: "LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.3 LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt"]
- `anchor`: "2.9.4.3"

### SEC-002-009-004-004
- `source_number`: `2.9.4.4`
- `title`: "LOCAL_INLINE void DisableRtcCounter (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.4 LOCAL_INLINE void DisableRtcCounter (void )"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt"]
- `anchor`: "2.9.4.4"

### SEC-002-009-004-005
- `source_number`: `2.9.4.5`
- `title`: "LOCAL_INLINE void EnableAlarmInterrupt (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.5 LOCAL_INLINE void EnableAlarmInterrupt (void )"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt"]
- `anchor`: "2.9.4.5"

### SEC-002-009-004-006
- `source_number`: `2.9.4.6`
- `title`: "LOCAL_INLINE void EnableRtcCounter (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.6 LOCAL_INLINE void EnableRtcCounter (void )"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt"]
- `anchor`: "2.9.4.6"

### SEC-002-009-004-007
- `source_number`: `2.9.4.7`
- `title`: "LOCAL_INLINE uint32 ReadAlarmFlag (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.7 LOCAL_INLINE uint32 ReadAlarmFlag (void )"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt"]
- `anchor`: "2.9.4.7"

### SEC-002-009-004-008
- `source_number`: `2.9.4.8`
- `title`: "LOCAL_INLINE uint32 ReadAlarmInterruptEnableBit (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.8 LOCAL_INLINE uint32 ReadAlarmInterruptEnableBit (void )"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt"]
- `anchor`: "2.9.4.8"

### SEC-002-009-004-009
- `source_number`: `2.9.4.9`
- `title`: "LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.9 LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus"]
- `anchor`: "2.9.4.9"

### SEC-002-009-004-010
- `source_number`: `2.9.4.10`
- `title`: "LOCAL_INLINE uint32 ReadIntFlag (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.10 LOCAL_INLINE uint32 ReadIntFlag (void )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus"]
- `anchor`: "2.9.4.10"

### SEC-002-009-004-011
- `source_number`: `2.9.4.11`
- `title`: "LOCAL_INLINE uint32 ReadSecondValue (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.11 LOCAL_INLINE uint32 ReadSecondValue (void )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus"]
- `anchor`: "2.9.4.11"

### SEC-002-009-004-012
- `source_number`: `2.9.4.12`
- `title`: "LOCAL_INLINE uint32 ReadTargetAlarmValue (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.12 LOCAL_INLINE uint32 ReadTargetAlarmValue (void )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus"]
- `anchor`: "2.9.4.12"

### SEC-002-009-004-013
- `source_number`: `2.9.4.13`
- `title`: "LOCAL_INLINE void RtcSoftwareReset (void )"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.13 LOCAL_INLINE void RtcSoftwareReset (void )"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus"]
- `anchor`: "2.9.4.13"

### SEC-002-009-004-014
- `source_number`: `2.9.4.14`
- `title`: "LOCAL_INLINE void SetAlarmCounterValue (uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.14 LOCAL_INLINE void SetAlarmCounterValue (uint32 u32Value)"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus"]
- `anchor`: "2.9.4.14"

### SEC-002-009-004-015
- `source_number`: `2.9.4.15`
- `title`: "LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.15 LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value)"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["TSTMP", "RTC", "GPT", "LOCAL_INLINE", "u32Value", "TSTMP_Type", "pTstmp", "register"]
- `anchor`: "2.9.4.15"

### SEC-002-009-004-016
- `source_number`: `2.9.4.16`
- `title`: "LOCAL_INLINE void SetSecondCounterValue (uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.16 LOCAL_INLINE void SetSecondCounterValue (uint32 u32Value)"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["TSTMP", "RTC", "GPT", "LOCAL_INLINE", "u32Value", "TSTMP_Type", "pTstmp", "register"]
- `anchor`: "2.9.4.16"

### SEC-002-009-005
- `source_number`: `2.9.5`
- `title`: "Functions in Gpt_Tstmp_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h"
- `physical_page_start`: `51`
- `physical_page_end`: `54`
- `printed_page_start`: `51`
- `printed_page_end`: `54`
- `keywords`: ["TSTMP", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "MOD", "GPT", "RTC"]
- `anchor`: "2.9.5"

### SEC-002-009-005-001
- `source_number`: `2.9.5.1`
- `title`: "LOCAL_INLINE uint64 TSTMP_HWA_ReadTstmpValue(TSTMP_Type *pTstmp)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.1 LOCAL_INLINE uint64 TSTMP_HWA_ReadTstmpValue(TSTMP_Type *pTstmp)"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["TSTMP", "RTC", "GPT", "LOCAL_INLINE", "u32Value", "TSTMP_Type", "pTstmp", "register"]
- `anchor`: "2.9.5.1"

### SEC-002-009-005-002
- `source_number`: `2.9.5.2`
- `title`: "LOCAL_INLINE boolean TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.2 LOCAL_INLINE boolean TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `51`
- `physical_page_end`: `51`
- `printed_page_start`: `51`
- `printed_page_end`: `51`
- `keywords`: ["TSTMP", "RTC", "GPT", "LOCAL_INLINE", "u32Value", "TSTMP_Type", "pTstmp", "register"]
- `anchor`: "2.9.5.2"

### SEC-002-009-005-003
- `source_number`: `2.9.5.3`
- `title`: "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.3 LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "MOD", "void"]
- `anchor`: "2.9.5.3"

### SEC-002-009-005-004
- `source_number`: `2.9.5.4`
- `title`: "LOCAL_INLINE void TSTMP_HWA_DisableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.4 LOCAL_INLINE void TSTMP_HWA_DisableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "MOD", "void"]
- `anchor`: "2.9.5.4"

### SEC-002-009-005-005
- `source_number`: `2.9.5.5`
- `title`: "LOCAL_INLINE"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.5 LOCAL_INLINE"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "MOD", "void"]
- `anchor`: "2.9.5.5"

### SEC-002-009-005-006
- `source_number`: `2.9.5.6`
- `title`: "LOCAL_INLINE void TSTMP_HWA_EnableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.6 LOCAL_INLINE void TSTMP_HWA_EnableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "MOD", "void"]
- `anchor`: "2.9.5.6"

### SEC-002-009-005-007
- `source_number`: `2.9.5.7`
- `title`: "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.7 LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "LOCAL_INLINE", "TSTMP_Type", "u8Mod", "MOD", "void"]
- `anchor`: "2.9.5.7"

### SEC-002-009-005-008
- `source_number`: `2.9.5.8`
- `title`: "LOCAL_INLINE"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.8 LOCAL_INLINE"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "LOCAL_INLINE", "TSTMP_Type", "u8Mod", "MOD", "void"]
- `anchor`: "2.9.5.8"

### SEC-002-009-005-009
- `source_number`: `2.9.5.9`
- `title`: "LOCAL_INLINE uint32 TSTMP_HWA_ReadModMatchFlag(TSTMP_Type *pTstmp)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.9 LOCAL_INLINE uint32 TSTMP_HWA_ReadModMatchFlag(TSTMP_Type *pTstmp)"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "LOCAL_INLINE", "TSTMP_Type", "u8Mod", "MOD", "void"]
- `anchor`: "2.9.5.9"

### SEC-002-009-005-010
- `source_number`: `2.9.5.10`
- `title`: "LOCAL_INLINE void TSTMP_HWA_ClearSingleMod123MatchFlag(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.10 LOCAL_INLINE void TSTMP_HWA_ClearSingleMod123MatchFlag(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["TSTMP", "GPT", "pTstmp", "LOCAL_INLINE", "TSTMP_Type", "u8Mod", "MOD", "void"]
- `anchor`: "2.9.5.10"

### SEC-002-009-005-011
- `source_number`: `2.9.5.11`
- `title`: "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.11 LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["TSTMP", "GPT", "MOD", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "u32ModValue"]
- `anchor`: "2.9.5.11"

### SEC-002-009-005-012
- `source_number`: `2.9.5.12`
- `title`: "LOCAL_INLINE uint32 TSTMP_HWA_GetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.12 LOCAL_INLINE uint32 TSTMP_HWA_GetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["TSTMP", "GPT", "MOD", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "u32ModValue"]
- `anchor`: "2.9.5.12"

### SEC-002-009-005-013
- `source_number`: `2.9.5.13`
- `title`: "LOCAL_INLINE void TSTMP_HWA_SetNextTargetChannelValue(TSTMP_Type *pTstmp, uint8 u8Mod,uint64"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.13 LOCAL_INLINE void TSTMP_HWA_SetNextTargetChannelValue(TSTMP_Type *pTstmp, uint8 u8Mod,uint64"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["TSTMP", "GPT", "MOD", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "u32ModValue"]
- `anchor`: "2.9.5.13"

### SEC-002-010
- `source_number`: `2.10`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram"
- `physical_page_start`: `55`
- `physical_page_end`: `58`
- `printed_page_start`: `55`
- `printed_page_end`: `58`
- `keywords`: ["GPT", "FC7xxx", "Mode", "notification", "Gpt_Init", "ECU", "EcuM", "when"]
- `anchor`: "2.10 API Sequence Diagram"

### SEC-002-010-001
- `source_number`: `2.10.1`
- `title`: "Gpt_Init"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Gpt_Init"
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["GPT", "FC7xxx", "Gpt_Init", "ECU", "EcuM", "Sequence", "Diagram", "State"]
- `anchor`: "2.10.1"

### SEC-002-010-002
- `source_number`: `2.10.2`
- `title`: "GPT Continuous Mode"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 GPT Continuous Mode"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["GPT", "FC7xxx", "Continuous", "Mode", "Channel", "configured"]
- `anchor`: "2.10.2"

### SEC-002-010-003
- `source_number`: `2.10.3`
- `title`: "GPT One-shot Mode"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.3 GPT One-shot Mode"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["GPT", "FC7xxx", "One", "shot", "Mode", "when", "notification", "disabled"]
- `anchor`: "2.10.3"

### SEC-002-010-004
- `source_number`: `2.10.4`
- `title`: "Disable/Enable Notifications"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.4 Disable/Enable Notifications"
- `physical_page_start`: `57`
- `physical_page_end`: `58`
- `printed_page_start`: `57`
- `printed_page_end`: `58`
- `keywords`: ["GPT", "FC7xxx", "notification", "when", "One", "shot", "Mode", "disabled"]
- `anchor`: "2.10.4"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `59`
- `physical_page_end`: `77`
- `printed_page_start`: `59`
- `printed_page_end`: `77`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "GPT", "Origin", "SymbolicNameValue", "Default"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration", "FC7xxx", "VariantPreCompile", "Screenshot"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `59`
- `physical_page_end`: `77`
- `printed_page_start`: `59`
- `printed_page_end`: `77`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "GPT", "Origin", "SymbolicNameValue", "Default"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration", "FC7xxx", "VariantPreCompile", "Screenshot"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "GptChannelConfigSet"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet"
- `physical_page_start`: `59`
- `physical_page_end`: `67`
- `printed_page_start`: `59`
- `printed_page_end`: `67`
- `keywords`: ["Variable", "GPT", "Screenshot", "Properties", "Property", "FTU", "FCPIT", "AONTIMER"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "GptChannelConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `physical_page_start`: `59`
- `physical_page_end`: `62`
- `printed_page_start`: `59`
- `printed_page_end`: `62`
- `keywords`: ["GPT", "FTU", "AONTIMER", "FCPIT", "RTC", "Variable", "Screenshot", "Properties"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-001-02
- `source_number`: `3.2.2.1.1`
- `title`: "GptChannelConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.1"

### SEC-003-002-002-001-03
- `source_number`: `3.2.2.1.2`
- `title`: "GptChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.2 GptChannelId"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.2"

### SEC-003-002-002-001-04
- `source_number`: `3.2.2.1.3`
- `title`: "GptHwChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.3 GptHwChannel"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.3"

### SEC-003-002-002-001-05
- `source_number`: `3.2.2.1.4`
- `title`: "GptChannelMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.4"

### SEC-003-002-002-001-06
- `source_number`: `3.2.2.1.5`
- `title`: "GptChannelTickFrequency"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.5 GptChannelTickFrequency"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.5"

### SEC-003-002-002-001-07
- `source_number`: `3.2.2.1.6`
- `title`: "GptChannelClkSrcRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.6 GptChannelClkSrcRef"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.6"

### SEC-003-002-002-001-08
- `source_number`: `3.2.2.1.7`
- `title`: "GptChannelTickValueMax"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.7 GptChannelTickValueMax"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "3.2.2.1.7"

### SEC-003-002-002-001-09
- `source_number`: `3.2.2.1.8`
- `title`: "GptDbgModeEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "3.2.2.1.8"

### SEC-003-002-002-001-10
- `source_number`: `3.2.2.1.9`
- `title`: "GptEnableWakeup"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.9 GptEnableWakeup"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "3.2.2.1.9"

### SEC-003-002-002-001-11
- `source_number`: `3.2.2.1.10`
- `title`: "GptIsrEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.10 GptIsrEnable"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "3.2.2.1.10"

### SEC-003-002-002-001-12
- `source_number`: `3.2.2.1.11`
- `title`: "GptNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.11 GptNotification"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "3.2.2.1.11"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "GptChannelConfiguration_FTU"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["FTU", "GPT", "clock", "Variable", "GptChannelConfiguration_FTU", "GptFtuPrescaler", "channels", "same"]
- `anchor`: "3.2.2.2"

### SEC-003-002-002-002-02
- `source_number`: `3.2.2.2.1`
- `title`: "GptFtuPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.1 GptFtuPrescaler"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["FTU", "GPT", "clock", "Variable", "GptChannelConfiguration_FTU", "GptFtuPrescaler", "channels", "same"]
- `anchor`: "3.2.2.2.1"

### SEC-003-002-002-002-03
- `source_number`: `3.2.2.2.2`
- `title`: "GptFtuChannelClkSrc"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.2 GptFtuChannelClkSrc"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["FTU", "GPT", "clock", "Variable", "GptChannelConfiguration_FTU", "GptFtuPrescaler", "channels", "same"]
- `anchor`: "3.2.2.2.2"

### SEC-003-002-002-002-04
- `source_number`: `3.2.2.2.3`
- `title`: "GptFtuGtb"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.3 GptFtuGtb"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["FTU", "GPT", "clock", "Variable", "GptChannelConfiguration_FTU", "GptFtuPrescaler", "channels", "same"]
- `anchor`: "3.2.2.2.3"

### SEC-003-002-002-002-05
- `source_number`: `3.2.2.2.4`
- `title`: "GptFtuGtbRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.2.2.4"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "GptChannelConfiguration_AONTIMER"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.3 GptChannelConfiguration_AONTIMER"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.2.3"

### SEC-003-002-002-003-02
- `source_number`: `3.2.2.3.1`
- `title`: "GptAontimerPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.3 GptChannelConfiguration_AONTIMER / 3.2.2.3.1 GptAontimerPrescaler"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.2.3.1"

### SEC-003-002-002-003-03
- `source_number`: `3.2.2.3.2`
- `title`: "GptAontimerChannelClkSrc"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.3 GptChannelConfiguration_AONTIMER / 3.2.2.3.2 GptAontimerChannelClkSrc"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.2.3.2"

### SEC-003-002-002-004
- `source_number`: `3.2.2.4`
- `title`: "GptChannelConfiguration_FCPIT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT"
- `physical_page_start`: `65`
- `physical_page_end`: `66`
- `printed_page_start`: `65`
- `printed_page_end`: `66`
- `keywords`: ["FCPIT", "GPT", "Variable", "SymbolicNameValue", "Properties", "Property", "Timer", "Origin"]
- `anchor`: "3.2.2.4"

### SEC-003-002-002-004-02
- `source_number`: `3.2.2.4.1`
- `title`: "GptFCPitIsExternalTrigger"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.1 GptFCPitIsExternalTrigger"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["FCPIT", "GPT", "Variable", "Properties", "Property", "SymbolicNameValue", "SIRC_1MHZ", "GptChannelConfiguration_FCPIT"]
- `anchor`: "3.2.2.4.1"

### SEC-003-002-002-004-03
- `source_number`: `3.2.2.4.2`
- `title`: "GptFCPitEnReloadOnTrigger"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.2 GptFCPitEnReloadOnTrigger"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["FCPIT", "GPT", "Variable", "Properties", "Property", "SymbolicNameValue", "SIRC_1MHZ", "GptChannelConfiguration_FCPIT"]
- `anchor`: "3.2.2.4.2"

### SEC-003-002-002-004-04
- `source_number`: `3.2.2.4.3`
- `title`: "GptFCPitEnStopOnInterrupt"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.3 GptFCPitEnStopOnInterrupt"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["FCPIT", "GPT", "Variable", "Properties", "Property", "SymbolicNameValue", "SIRC_1MHZ", "GptChannelConfiguration_FCPIT"]
- `anchor`: "3.2.2.4.3"

### SEC-003-002-002-004-05
- `source_number`: `3.2.2.4.4`
- `title`: "GptFCPitEnStartOnTrigger"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.4 GptFCPitEnStartOnTrigger"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["FCPIT", "GPT", "SymbolicNameValue", "Variable", "Timer", "GptFCPitEnStartOnTrigger", "GptFCPitTriggerChannels", "channel"]
- `anchor`: "3.2.2.4.4"

### SEC-003-002-002-004-06
- `source_number`: `3.2.2.4.5`
- `title`: "GptFCPitTriggerChannels"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.5 GptFCPitTriggerChannels"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["FCPIT", "GPT", "SymbolicNameValue", "Variable", "Timer", "GptFCPitEnStartOnTrigger", "GptFCPitTriggerChannels", "channel"]
- `anchor`: "3.2.2.4.5"

### SEC-003-002-002-004-07
- `source_number`: `3.2.2.4.6`
- `title`: "GptFCPitChainMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.6 GptFCPitChainMode"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["FCPIT", "GPT", "SymbolicNameValue", "Variable", "Timer", "GptFCPitEnStartOnTrigger", "GptFCPitTriggerChannels", "channel"]
- `anchor`: "3.2.2.4.6"

### SEC-003-002-002-005
- `source_number`: `3.2.2.5`
- `title`: "GptChannelConfiguration_TSTMP"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.5 GptChannelConfiguration_TSTMP"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["GPT", "TSTMP0", "SRIC_1M", "AON_CLK", "Screenshot", "Properties", "Property", "Variable"]
- `anchor`: "3.2.2.5"

### SEC-003-002-002-005-02
- `source_number`: `3.2.2.5.1`
- `title`: "GptTstmpModClkSrcSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.5 GptChannelConfiguration_TSTMP / 3.2.2.5.1 GptTstmpModClkSrcSelect"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["GPT", "TSTMP0", "SRIC_1M", "AON_CLK", "Screenshot", "Properties", "Property", "Variable"]
- `anchor`: "3.2.2.5.1"

### SEC-003-002-002-006
- `source_number`: `3.2.2.6`
- `title`: "GptWakeupConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["GPT", "TSTMP0", "SRIC_1M", "AON_CLK", "Screenshot", "Properties", "Property", "Variable"]
- `anchor`: "3.2.2.6"

### SEC-003-002-002-006-02
- `source_number`: `3.2.2.6.1`
- `title`: "GptWakeupSourceRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration / 3.2.2.6.1 GptWakeupSourceRef"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["GPT", "TSTMP0", "SRIC_1M", "AON_CLK", "Screenshot", "Properties", "Property", "Variable"]
- `anchor`: "3.2.2.6.1"

### SEC-003-002-002-006-03
- `source_number`: `3.2.2.6.2`
- `title`: "GptChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration / 3.2.2.6.2 GptChannelEcucPartitionRef"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "ECUC", "Screenshot", "Properties", "Reference", "GptChannelEcucPartitionRef"]
- `anchor`: "3.2.2.6.2"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "GptConfigurationOfOptApiServices"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices"
- `physical_page_start`: `68`
- `physical_page_end`: `69`
- `printed_page_start`: `68`
- `printed_page_end`: `69`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "GptDeinitApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.1 GptDeinitApi"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "ECUC", "Screenshot", "Properties", "Reference", "GptChannelEcucPartitionRef"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-002
- `source_number`: `3.2.3.2`
- `title`: "GptTimeElapsedApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.2 GptTimeElapsedApi"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue", "GptTimeElapsedApi", "Add", "Remove", "code"]
- `anchor`: "3.2.3.2"

### SEC-003-002-003-003
- `source_number`: `3.2.3.3`
- `title`: "GptTimeRemainingApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.3 GptTimeRemainingApi"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue", "GptTimeElapsedApi", "Add", "Remove", "code"]
- `anchor`: "3.2.3.3"

### SEC-003-002-003-004
- `source_number`: `3.2.3.4`
- `title`: "GptVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.4 GptVersionInfoApi"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue", "GptTimeElapsedApi", "Add", "Remove", "code"]
- `anchor`: "3.2.3.4"

### SEC-003-002-003-005
- `source_number`: `3.2.3.5`
- `title`: "GptWakeupFunctionalityApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.5 GptWakeupFunctionalityApi"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue", "GptTimeElapsedApi", "Add", "Remove", "code"]
- `anchor`: "3.2.3.5"

### SEC-003-002-003-006
- `source_number`: `3.2.3.6`
- `title`: "GptChangeNextTimeoutValueApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.6 GptChangeNextTimeoutValueApi"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["GPT", "FTU", "Variable", "GptChangeNextTimeoutValueApi", "Screenshot", "Properties", "SymbolicNameValue", "GptDriverConfiguration"]
- `anchor`: "3.2.3.6"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "GptDriverConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration"
- `physical_page_start`: `70`
- `physical_page_end`: `73`
- `printed_page_start`: `70`
- `printed_page_end`: `73`
- `keywords`: ["GPT", "FTU", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "GptDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.1 GptDevErrorDetect"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["GPT", "FTU", "Variable", "GptChangeNextTimeoutValueApi", "Screenshot", "Properties", "SymbolicNameValue", "GptDriverConfiguration"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "GptPredefTimer100us32bitEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.2 GptPredefTimer100us32bitEnable"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["GPT", "FTU", "Variable", "GptChangeNextTimeoutValueApi", "Screenshot", "Properties", "SymbolicNameValue", "GptDriverConfiguration"]
- `anchor`: "3.2.4.2"

### SEC-003-002-004-003
- `source_number`: `3.2.4.3`
- `title`: "GptPredefTimer1usEnablingGrade"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin", "Default", "GptPredefTimer1usEnablingGrade", "GPT_PREDEF_TIMER_1US_DISABLED"]
- `anchor`: "3.2.4.3"

### SEC-003-002-004-004
- `source_number`: `3.2.4.4`
- `title`: "GptReportWakeupSource"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.4 GptReportWakeupSource"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin", "Default", "GptPredefTimer1usEnablingGrade", "GPT_PREDEF_TIMER_1US_DISABLED"]
- `anchor`: "3.2.4.4"

### SEC-003-002-004-005
- `source_number`: `3.2.4.5`
- `title`: "GptRegisterLockingMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.5 GptRegisterLockingMode"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin", "Default", "GptPredefTimer1usEnablingGrade", "GPT_PREDEF_TIMER_1US_DISABLED"]
- `anchor`: "3.2.4.5"

### SEC-003-002-004-006
- `source_number`: `3.2.4.6`
- `title`: "GptEnableUserModeSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.6 GptEnableUserModeSupport"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["GPT", "FTU", "Gpt", "Variable", "SymbolicNameValue", "GptEnableUserModeSupport", "Screenshot", "Properties"]
- `anchor`: "3.2.4.6"

### SEC-003-002-004-007
- `source_number`: `3.2.4.7`
- `title`: "GptStandbyWakeupSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.7 GptStandbyWakeupSupport"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["GPT", "FTU", "Gpt", "Variable", "SymbolicNameValue", "GptEnableUserModeSupport", "Screenshot", "Properties"]
- `anchor`: "3.2.4.7"

### SEC-003-002-004-008
- `source_number`: `3.2.4.8`
- `title`: "GptMultiCoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.8 GptMultiCoreSupport"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["GPT", "FTU", "Gpt", "Variable", "SymbolicNameValue", "GptEnableUserModeSupport", "Screenshot", "Properties"]
- `anchor`: "3.2.4.8"

### SEC-003-002-004-009
- `source_number`: `3.2.4.9`
- `title`: "GptFtuGtbSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.9 GptFtuGtbSupport"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["GPT", "FTU", "Gpt", "Variable", "SymbolicNameValue", "GptEnableUserModeSupport", "Screenshot", "Properties"]
- `anchor`: "3.2.4.9"

### SEC-003-002-004-010
- `source_number`: `3.2.4.10`
- `title`: "GptKernelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "3.2.4.10"

### SEC-003-002-004-011
- `source_number`: `3.2.4.11`
- `title`: "GptClockReferencePoint"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.11 GptClockReferencePoint"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "3.2.4.11"

### SEC-003-002-004-012
- `source_number`: `3.2.4.12`
- `title`: "GptEcuPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.12 GptEcuPartitionRef"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "3.2.4.12"

### SEC-003-002-004-013
- `source_number`: `3.2.4.13`
- `title`: "GptClockReferencePoint"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "3.2.4.13"

### SEC-003-002-004-014
- `source_number`: `3.2.4.14`
- `title`: "GptClockReference"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.14 GptClockReference"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "3.2.4.14"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "GptPredefTimerConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "GptPredefTimer_1us_16Bit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.1 GptPredefTimer_1us_16Bit"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "3.2.5.1"

### SEC-003-002-005-002
- `source_number`: `3.2.5.2`
- `title`: "GptPredefTimer_1us_24Bit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.2 GptPredefTimer_1us_24Bit"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "3.2.5.2"

### SEC-003-002-005-003
- `source_number`: `3.2.5.3`
- `title`: "GptPredefTimer_1us_32Bit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "3.2.5.3"

### SEC-003-002-005-004
- `source_number`: `3.2.5.4`
- `title`: "GptPredefTimer_100us_32Bit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.4 GptPredefTimer_100us_32Bit"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "3.2.5.4"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation"
- `physical_page_start`: `75`
- `physical_page_end`: `77`
- `printed_page_start`: `75`
- `printed_page_end`: `77`
- `keywords`: ["GPT", "Variable", "Screenshot", "Properties", "Integer_Label", "SymbolicNameValue", "Property", "vendor"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.1 ArReleaseMajorVersion"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `physical_page_start`: `76`
- `physical_page_end`: `76`
- `printed_page_start`: `76`
- `printed_page_end`: `76`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "AUTOSAR", "version", "number", "implementation"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.3 ArReleaseRevisionVersion"
- `physical_page_start`: `76`
- `physical_page_end`: `76`
- `printed_page_start`: `76`
- `printed_page_end`: `76`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "AUTOSAR", "version", "number", "implementation"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.4 SwMajorVersion"
- `physical_page_start`: `76`
- `physical_page_end`: `76`
- `printed_page_start`: `76`
- `printed_page_end`: `76`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "AUTOSAR", "version", "number", "implementation"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.5 SwMinorVersion"
- `physical_page_start`: `76`
- `physical_page_end`: `76`
- `printed_page_start`: `76`
- `printed_page_end`: `76`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "AUTOSAR", "version", "number", "implementation"]
- `anchor`: "3.2.6.5"

### SEC-003-002-006-006
- `source_number`: `3.2.6.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `physical_page_start`: `77`
- `physical_page_end`: `77`
- `printed_page_start`: `77`
- `printed_page_end`: `77`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "vendor", "specific", "Screenshot", "Properties"]
- `anchor`: "3.2.6.6"

### SEC-003-002-006-007
- `source_number`: `3.2.6.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.7 ModuleId"
- `physical_page_start`: `77`
- `physical_page_end`: `77`
- `printed_page_start`: `77`
- `printed_page_end`: `77`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "vendor", "specific", "Screenshot", "Properties"]
- `anchor`: "3.2.6.7"

### SEC-003-002-006-008
- `source_number`: `3.2.6.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.8 VendorId"
- `physical_page_start`: `77`
- `physical_page_end`: `77`
- `printed_page_start`: `77`
- `printed_page_end`: `77`
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "vendor", "specific", "Screenshot", "Properties"]
- `anchor`: "3.2.6.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `78`
- `physical_page_end`: `81`
- `printed_page_start`: `78`
- `printed_page_end`: `81`
- `keywords`: ["GPT", "FTU", "FCPIT", "channel", "clock", "reference", "point", "FC7xxx"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `78`
- `physical_page_end`: `78`
- `printed_page_start`: `78`
- `printed_page_end`: `78`
- `keywords`: ["GPT", "FCPIT", "FTU", "FC7xxx", "FC7240", "PWM", "ICU", "OCU"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "GPT Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 GPT Usage Common Steps"
- `physical_page_start`: `79`
- `physical_page_end`: `79`
- `printed_page_start`: `79`
- `printed_page_end`: `79`
- `keywords`: ["GPT", "FTU", "channel", "clock", "PCC", "GptFtuChannelClkSrc", "point", "FC7xxx"]
- `anchor`: "4.2"

### SEC-004-003
- `source_number`: `4.3`
- `title`: "GPT Channel Use FTU Demo"
- `path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `physical_page_start`: `79`
- `physical_page_end`: `81`
- `printed_page_start`: `79`
- `printed_page_end`: `81`
- `keywords`: ["GPT", "FTU", "channel", "clock", "reference", "point", "FC7xxx", "Configure"]
- `anchor`: "4.3"

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
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 GPT Introduction ........................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["2.9.1", "Functions in Gpt_Aontiemr_RegOps.h ................................................................…", "2.9.2", "Functions in Gpt_Fcpit_RegOps.h ...................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 GPT Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 1 GPT Introduction", "1.1", "Requirement Tracing", "The design of this module follows the specifications of the GPT driver specified in AUTOSAR Classic…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 1 GPT Introduction / 1.2 Hardware Summary"
- `content_types`: ["text", "api"]
- `anchors`: ["RTC Channel", "Independent timeout periods for each 32-bit timer.", "FCPIT Channel (Only available on FC7240)", "32-bit programmable timeout value for each channel."]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "Rejected Requirement 1 SWS_Gpt_00261"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.2", "File Structure", "2.3", "Macros"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define GPT_E_INIT_FAILED ((uint8)0x0E)", "Function called with invalid the parameter in function Gpt_Init.", "#define GPT_E_PARAM_MODE ((uint8)0x1FU)", "Function called with invalid mode param."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Gpt_version.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define GPT_ENABLEWAKEUP_ID ((uint8)0x0BU)", "API service ID for Gpt_EnableWakeup function.", "#define GPT_CHECKWAKEUP_ID ((uint8)0x0CU)", "API service ID for Gpt_CheckWakeup function."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define GPT_CFG_AR_RELEASE_MINOR_VERSION 6", "#define GPT_CFG_AR_RELEASE_REVISION_VERSION 0", "#define GPT_CFG_SW_MAJOR_VERSION 0", "#define GPT_CFG_SW_MINOR_VERSION 6"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define GPT_MULTICORE_SUPPORT (STD_ON)", "Enable/disable support for multicore feature.", "#define GPT_FTU_GTB_SUPPORT (STD_OFF)", "Enable/disable support for Gpt Ftu Gtb feature.."]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Gpt.h / 2.4.1.1 Gpt_ChannelStatusType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define GPT_PRECOMPILE_SUPPORT (STD_ON)", "#define GPT_FCPIT_MODULES_NUM (1U)", "#define GPT_FCPIT_CHANNEL_NUM (4U)", "#define GPT_AONTIMER_MODULES_NUM (1U)"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.2 Gpt_ChannelModeType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["2.4.2.2", "Gpt_ChannelModeType", "Enumeration", "Gpt_ChannelModeType"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Gpt_ConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["2.5", "Typedefs", "2.5.1", "Typedefs in Gpt_Hw_Types.h"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Gpt_ChannelInfoType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Multicore channel partition map table", "2.6.2", "Gpt_ChannelInfoType", "Structure"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Gpt_ConfigChannelCommonType"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["2.6.5", "Gpt_ConfigChannelCommonType", "Structure", "Gpt_ConfigChannelCommonType"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7", "API Functions", "2.7.1", "Functions in Gpt.h"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "PredefTimer"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.2 void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["Description", "Change the next timeout value.", "Parameters", "Parameter"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.6 Gpt_ValueType"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["2.8.1.6", "Gpt_ValueType", "Gpt_HL_GetTimeElapsed", "(const"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.11 void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["pChannelConfig", "Channel configuration pointer.", "u32Value", "Start timer value."]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.4 uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Returns", "N/A", "Referenced By", "Gpt_HL_EnableInterrupt()"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.9 void Gpt_LL_Aontimer_StopPredefTimer (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "AONTIMER start timer.", "Parameters", "Parameter"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.4 uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["Parameters", "Parameter", "Description", "eChannel"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.8 void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Start the predef timer.", "Parameters", "Parameter"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.2 void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["u32Value", "The value of next timeout.", "Returns", "N/A"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.6 void"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["2.8.4.6", "void", "Gpt_LL_Ftu_Init", "(Gpt_ModuleType"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.10 void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Stop the FTU predef timer.", "Parameters", "Parameter"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.5 void Gpt_LL_Rtc_Init (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Get the timer elapsed value.", "Parameters", "Parameter"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.2 2.8.6.3"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.8.6.2", "2.8.6.3", "void Gpt_LL_Tstmp_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)", "Function"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.7 void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.8.6.7", "void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)", "Function", "void"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.2 LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.2", "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )", "Function", "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.8 LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Disable an AONTIMER module interrupt.", "Parameters", "N/A"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.13 LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Referenced By", "Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StartTimer()", "2.9.1.13", "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.19 LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Set the AONTIMER current counter value.", "Parameters", "Parameter"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.4 LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Gpt_LL_FCPIT_StopPredefTimer(), and Gpt_LL_FCPit_StopTimer()", "2.9.2.4", "LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)", "Function"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.9 LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.2.9", "LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)", "Function", "LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.15 LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Referenced By", "Gpt_LL_Fcpit_Init()", "2.9.2.15", "LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.3 LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["pFtu", "FTU instance.", "Returns", "N/A"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.7 LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.3.7", "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)", "Function", "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.12 LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "pFtu"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.16 LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.3.16", "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)", "Function", "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.21 LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Set the FTU counter compare value.", "Parameters", "Parameter"]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.3 LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.4.3", "LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )", "Function", "LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.9 LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Referenced By", "Gpt_LL_Rtc_EnableInterrupt(), and Gpt_LL_Rtc_Init()", "2.9.4.9", "LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"]

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.15 LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["u32Value", "TAR register value.", "Returns", "N/A"]

### PAGE-0052
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.3 LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.5.3", "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)", "Function", "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"]

### PAGE-0053
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.7 LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.5.7", "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)", "Function", "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"]

### PAGE-0054
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.11 LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.5.11", "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)", "Function", "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32"]

### PAGE-0055
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Gpt_Init"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.10 API Sequence Diagram", "2.10.1", "Gpt_Init", "The ECU State Manager (EcuM) is responsible for calling the initialization function."]

### PAGE-0056
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 GPT Continuous Mode"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.10.2", "GPT Continuous Mode", "Channel 2 is configured as \"Continuous Mode.\""]

### PAGE-0057
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.3 GPT One-shot Mode"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.10.3", "GPT One-shot Mode", "Channel 1 is configured for \"One-shot Mode.\"", "2.10.4"]

### PAGE-0058
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.4 Disable/Enable Notifications"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["This notification is discarded and not made up again, when the notification is re-enabled."]

### PAGE-0059
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The container inclusion relation is shown below:"]

### PAGE-0060
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0061
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["3.2.2.1.4", "GptChannelMode", "Variable", "GptChannelMode"]

### PAGE-0062
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["3.2.2.1.8", "GptDbgModeEnable", "Variable", "GptDbgModeEnable"]

### PAGE-0063
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.1 GptFtuPrescaler"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Optional", "true", "3.2.2.2", "GptChannelConfiguration_FTU"]

### PAGE-0064
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0065
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.1 GptFCPitIsExternalTrigger"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0066
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.4 GptFCPitEnStartOnTrigger"
- `content_types`: ["text", "table"]
- `anchors`: ["Origin", "FLAGCHIP", "SymbolicNameValue", "False"]

### PAGE-0067
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.5 GptChannelConfiguration_TSTMP / 3.2.2.5.1 GptTstmpModClkSrcSelect"
- `content_types`: ["text", "table", "config"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0068
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration / 3.2.2.6.2 GptChannelEcucPartitionRef"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Description", "In case the wakeup-capability is true this value is transmitted to the Ecu State Manager. Implement…", "Type: reference to EcuM_WakeupSourceType.", "Screenshot"]

### PAGE-0069
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.2 GptTimeElapsedApi"
- `content_types`: ["text", "api"]
- `anchors`: ["3.2.3.2", "GptTimeElapsedApi", "Variable", "GptTimeElapsedApi"]

### PAGE-0070
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.6 GptChangeNextTimeoutValueApi"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["3.2.3.6", "GptChangeNextTimeoutValueApi", "Variable", "GptChangeNextTimeoutValueApi"]

### PAGE-0071
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Type", "Variable: Boolean", "Origin", "AUTOSAR_ECUC"]

### PAGE-0072
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.6 GptEnableUserModeSupport"
- `content_types`: ["text", "api"]
- `anchors`: ["3.2.4.6", "GptEnableUserModeSupport", "Variable", "GptEnableUserModeSupport"]

### PAGE-0073
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.4.10", "GptKernelEcucPartitionRef", "Variable", "GptKernelEcucPartitionRef"]

### PAGE-0074
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["3.2.4.13", "GptClockReferencePoint", "Container", "GptClockReferencePoint"]

### PAGE-0075
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Description", "This container contains the 1μs 24bit predef timer configuration (parameters) of the GPT Driver.", "Screenshot", "Properties"]

### PAGE-0076
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "Major version number of AUTOSAR specification on which the appropriate implementation is based.", "Screenshot", "Properties"]

### PAGE-0077
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "Minor version number of the vendor specific implementation of the module. The numbering is vendor", "specific.", "Screenshot"]

### PAGE-0078
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1)"]

### PAGE-0079
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 GPT Usage Common Steps"
- `content_types`: ["text", "image", "config", "figure"]
- `anchors`: ["3)", "If the GPT channel uses FTU and the clock source is from PCC, the GptFtuChannelClkSrc must select", "GPT_FTU_BUS_CLK.", "4.2"]

### PAGE-0080
- `physical_page`: `80`
- `printed_page`: `80`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2)", "Configure Clock reference point", "The clock reference point is a reference from the MCU module, so configure the MCU module first and…", "reference point which GPT channel used."]

### PAGE-0081
- `physical_page`: `81`
- `printed_page`: `81`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3)", "Configure general configurations", "Select which API will be used.", "4)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx GPT User Manual"
- `keywords`: ["GPT", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx GPT User Manual; Revision History; 0.1"
- `keywords`: ["GPT", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
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
- `summary`: "Table of Contents: FC7xxx GPT User Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["GPT", "Gpt", "Gpt_Hw_Types", "FC7xxx", "Gpt_version", "Gpt_Cfg", "Gpt_ConfigType", "Gpt_ChannelInfoType", "Gpt_HwChannelInfoType", "Gpt_ConfigPredefChannelType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 GPT Introduction ................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx GPT User Manual; 2.9.1; Functions in Gpt_Aontiemr_RegOps.h ..................................................................................................... 36"
- `keywords`: ["GPT", "FTU", "FC7xxx", "Gpt_Aontiemr_RegOps", "Gpt_Fcpit_RegOps", "Gpt_Ftu_RegOps", "Gpt_Rtc_RegOps", "Gpt_Tstmp_RegOps", "Gpt_Init", "IMPLEMENTATION_CONFIG_VARIANT"]
- `anchors`:
  - `p4`: "2.9.1"
  - `p4`: "Functions in Gpt_Aontiemr_RegOps.h ..................................................................................................... 36"
  - `p4`: "2.9.2"
  - `p4`: "Functions in Gpt_Fcpit_RegOps.h ...........................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 GPT Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 GPT Introduction / 1.1 Requirement Tracing: FC7xxx GPT User Manual; Chapter 1 GPT Introduction; 1.1"
- `keywords`: ["GPT", "FTU", "AONTIMER", "RTC", "FCPIT", "TSTMP", "implemented", "channel", "channels", "Timer"]
- `anchors`:
  - `p5`: "Chapter 1 GPT Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirement Tracing"
  - `p5`: "The design of this module follows the specifications of the GPT driver specified in AUTOSAR Classic Platform Release 4.6.0."

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 1 GPT Introduction / 1.2 Hardware Summary"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 GPT Introduction / 1.2 Hardware Summary: FC7xxx GPT User Manual; RTC Channel; Independent timeout periods for each 32-bit timer."
- `keywords`: ["GPT", "RTC", "FCPIT", "TSTMP", "FC7xxx", "Channel", "bit", "FC7240", "timeout", "each"]
- `anchors`:
  - `p6`: "RTC Channel"
  - `p6`: "Independent timeout periods for each 32-bit timer."
  - `p6`: "FCPIT Channel (Only available on FC7240)"
  - `p6`: "32-bit programmable timeout value for each channel."

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx GPT User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["GPT", "Gpt", "Rejected", "Requirement", "FC7XXX", "register", "initialized", "applicable", "FC7xxx", "SWS_Gpt_00261"]
- `anchors`:
  - `p7`: "Chapter 2 Software Design"
  - `p7`: "2.1"
  - `p7`: "Rejected Requirements"
  - `p7`: "Rejected Requirement 1 SWS_Gpt_00261"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h: FC7xxx GPT User Manual; 2.2; File Structure"
- `keywords`: ["GPT", "Gpt", "define", "called", "Gpt_GetPredefTimerValue", "FC7xxx", "GPT_E_INVALID_CALL", "Gpt_StartTimer", "when", "channel"]
- `anchors`:
  - `p8`: "2.2"
  - `p8`: "File Structure"
  - `p8`: "2.3"
  - `p8`: "Macros"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h: FC7xxx GPT User Manual; #define GPT_E_INIT_FAILED ((uint8)0x0E); Function called with invalid the parameter in function Gpt_Init."
- `keywords`: ["GPT", "define", "Gpt_Init", "FC7xxx", "GPT_E_INIT_FAILED", "called", "invalid", "GPT_E_PARAM_MODE", "GPT_E_PARAM_PARTITION", "GPT_GETVERSIONINFO_ID"]
- `anchors`:
  - `p9`: "#define GPT_E_INIT_FAILED ((uint8)0x0E)"
  - `p9`: "Function called with invalid the parameter in function Gpt_Init."
  - `p9`: "#define GPT_E_PARAM_MODE ((uint8)0x1FU)"
  - `p9`: "Function called with invalid mode param."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Gpt_version.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Gpt_version.h: FC7xxx GPT User Manual; #define GPT_ENABLEWAKEUP_ID ((uint8)0x0BU); API service ID for Gpt_EnableWakeup function."
- `keywords`: ["GPT", "define", "FC7xxx", "GPT_ENABLEWAKEUP_ID", "Gpt_EnableWakeup", "GPT_CHECKWAKEUP_ID", "Gpt_CheckWakeup", "GPT_PROCESSCOMMONINTERRUPT_ID", "Gpt_ProcessCommonInterrupt", "ISR"]
- `anchors`:
  - `p10`: "#define GPT_ENABLEWAKEUP_ID ((uint8)0x0BU)"
  - `p10`: "API service ID for Gpt_EnableWakeup function."
  - `p10`: "#define GPT_CHECKWAKEUP_ID ((uint8)0x0CU)"
  - `p10`: "API service ID for Gpt_CheckWakeup function."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h: FC7xxx GPT User Manual; #define GPT_CFG_AR_RELEASE_MINOR_VERSION 6; #define GPT_CFG_AR_RELEASE_REVISION_VERSION 0"
- `keywords`: ["GPT", "define", "STD_ON", "switch", "GPT_VERSION_INFO_API", "GPT_DEINIT_API", "GPT_TIME_ELAPSED_API", "GPT_TIME_REMAINING_API", "GPT_ENABLE_DISABLE_NOTIFICATION_API", "GPT_WAKEUP_FUNCTION_API"]
- `anchors`:
  - `p11`: "#define GPT_CFG_AR_RELEASE_MINOR_VERSION 6"
  - `p11`: "#define GPT_CFG_AR_RELEASE_REVISION_VERSION 0"
  - `p11`: "#define GPT_CFG_SW_MAJOR_VERSION 0"
  - `p11`: "#define GPT_CFG_SW_MINOR_VERSION 6"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h: FC7xxx GPT User Manual; #define GPT_MULTICORE_SUPPORT (STD_ON); Enable/disable support for multicore feature."
- `keywords`: ["GPT", "Gpt", "Ftu", "define", "STD_OFF", "disable", "Enable", "GPT_FCPIT_MODULE", "GPT_TSTMP_MODULE", "GPT_AONTIMER_MODULE"]
- `anchors`:
  - `p12`: "#define GPT_MULTICORE_SUPPORT (STD_ON)"
  - `p12`: "Enable/disable support for multicore feature."
  - `p12`: "#define GPT_FTU_GTB_SUPPORT (STD_OFF)"
  - `p12`: "Enable/disable support for Gpt Ftu Gtb feature.."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Gpt.h / 2.4.1.1 Gpt_ChannelStatusType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Gpt.h / 2.4.1.1 Gpt_ChannelStatusType: FC7xxx GPT User Manual; #define GPT_PRECOMPILE_SUPPORT (STD_ON); #define GPT_FCPIT_MODULES_NUM (1U)"
- `keywords`: ["GPT", "Gpt", "define", "channel", "status", "Gpt_ChannelStatusType", "Gpt_ModeType", "FC7xxx", "GPT_PRECOMPILE_SUPPORT", "STD_ON"]
- `anchors`:
  - `p13`: "#define GPT_PRECOMPILE_SUPPORT (STD_ON)"
  - `p13`: "#define GPT_FCPIT_MODULES_NUM (1U)"
  - `p13`: "#define GPT_FCPIT_CHANNEL_NUM (4U)"
  - `p13`: "#define GPT_AONTIMER_MODULES_NUM (1U)"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.2 Gpt_ChannelModeType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.2 Gpt_ChannelModeType: FC7xxx GPT User Manual; 2.4.2.2; Gpt_ChannelModeType"
- `keywords`: ["FTU", "GPT", "FCPIT", "AONTIMER", "RTC", "mode", "Gpt_ChannelModeType", "channel", "Gpt_PredefTimerType", "predef"]
- `anchors`:
  - `p14`: "2.4.2.2"
  - `p14`: "Gpt_ChannelModeType"
  - `p14`: "Enumeration"
  - `p14`: "Gpt_ChannelModeType"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Gpt_ConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Gpt_ConfigType: FC7xxx GPT User Manual; 2.5; Typedefs"
- `keywords`: ["GPT", "typedef", "channel", "const", "Gpt_ChannelType", "data", "Gpt_ConfigType", "FC7xxx", "Gpt_Hw_Types", "Gpt_ValueType"]
- `anchors`:
  - `p15`: "2.5"
  - `p15`: "Typedefs"
  - `p15`: "2.5.1"
  - `p15`: "Typedefs in Gpt_Hw_Types.h"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Gpt_ChannelInfoType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Gpt_ChannelInfoType: FC7xxx GPT User Manual; Multicore channel partition map table; 2.6.2"
- `keywords`: ["GPT", "channel", "boolean", "Gpt_ChannelInfoType", "information", "Gpt_HwChannelInfoType", "Gpt_ConfigPredefChannelType", "FC7xxx", "Structure", "status"]
- `anchors`:
  - `p16`: "Multicore channel partition map table"
  - `p16`: "2.6.2"
  - `p16`: "Gpt_ChannelInfoType"
  - `p16`: "Structure"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Gpt_ConfigChannelCommonType"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Gpt_ConfigChannelCommonType: FC7xxx GPT User Manual; 2.6.5; Gpt_ConfigChannelCommonType"
- `keywords`: ["GPT", "FTU", "AONTIMER", "FCPIT", "channel", "Gpt_ConfigChannelCommonType", "Gpt_ConfigChannelHwSpecificType", "Gpt_ConfigChannelType", "FC7xxx", "Structure"]
- `anchors`:
  - `p17`: "2.6.5"
  - `p17`: "Gpt_ConfigChannelCommonType"
  - `p17`: "Structure"
  - `p17`: "Gpt_ConfigChannelCommonType"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value): FC7xxx GPT User Manual; 2.7; API Functions"
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType", "Channel", "Gpt_ValueType"]
- `anchors`:
  - `p18`: "2.7"
  - `p18`: "API Functions"
  - `p18`: "2.7.1"
  - `p18`: "Functions in Gpt.h"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void ): FC7xxx GPT User Manual; Diagram; Parameters"
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup", "FC7xxx", "Diagram"]
- `anchors`:
  - `p19`: "Diagram"
  - `p19`: "Parameters"
  - `p19`: "Parameter"
  - `p19`: "Description"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel): FC7xxx GPT User Manual; Diagram; Parameters"
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup", "Std_ReturnType", "Gpt_GetPredefTimerValue"]
- `anchors`:
  - `p20`: "Diagram"
  - `p20`: "Parameters"
  - `p20`: "Parameter"
  - `p20`: "Description"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel): FC7xxx GPT User Manual; Parameters; Parameter"
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel", "Gpt_GetTimeRemaining", "void"]
- `anchors`:
  - `p21`: "Parameters"
  - `p21`: "Parameter"
  - `p21`: "Description"
  - `p21`: "PredefTimer"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode): FC7xxx GPT User Manual; Diagram; Parameters"
- `keywords`: ["GPT", "void", "Gpt_SetMode", "Gpt_ModeType", "Gpt_StartTimer", "Gpt_ChannelType", "Gpt_ValueType", "FC7xxx", "ConfigPtr", "Mode"]
- `anchors`:
  - `p22`: "Diagram"
  - `p22`: "Parameters"
  - `p22`: "Parameter"
  - `p22`: "Description"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel): FC7xxx GPT User Manual; Diagram; Parameters"
- `keywords`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void", "Gpt_StopTimer", "Gpt_ChannelType", "Gpt_ProcessCommonInterrupt", "Std_ReturnType", "Gpt_HL_ChangeNextTimeoutValue"]
- `anchors`:
  - `p23`: "Diagram"
  - `p23`: "Parameters"
  - `p23`: "Parameter"
  - `p23`: "Description"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.2 void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.2 void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig): FC7xxx GPT User Manual; Description; Change the next timeout value."
- `keywords`: ["GPT", "pChannelConfig", "void", "const", "Gpt_ConfigChannelType", "pointer", "Returns", "Referenced", "u32TimeValuePtr", "Channel"]
- `anchors`:
  - `p24`: "Description"
  - `p24`: "Change the next timeout value."
  - `p24`: "Parameters"
  - `p24`: "Parameter"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.6 Gpt_ValueType"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.6 Gpt_ValueType: FC7xxx GPT User Manual; 2.8.1.6; Gpt_ValueType"
- `keywords`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig", "Gpt_ConfigChannelType", "void", "Gpt_ValueType", "pChannelInfo", "pConfigPtr"]
- `anchors`:
  - `p25`: "2.8.1.6"
  - `p25`: "Gpt_ValueType"
  - `p25`: "Gpt_HL_GetTimeElapsed"
  - `p25`: "(const"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.11 void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.11 void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr): FC7xxx GPT User Manual; pChannelConfig; Channel configuration pointer."
- `keywords`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns", "Referenced", "pConfigPtr", "timer", "Gpt_HL_StopPredefTimer", "const"]
- `anchors`:
  - `p26`: "pChannelConfig"
  - `p26`: "Channel configuration pointer."
  - `p26`: "u32Value"
  - `p26`: "Start timer value."

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.4 uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.4 uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void ): FC7xxx GPT User Manual; Returns; N/A"
- `keywords`: ["AONTIMER", "GPT", "void", "const", "Returns", "Referenced", "pbReturnChannelRollover", "pu32TargetValue", "pAontiemrConf", "eClkSrc"]
- `anchors`:
  - `p27`: "Returns"
  - `p27`: "N/A"
  - `p27`: "Referenced By"
  - `p27`: "Gpt_HL_EnableInterrupt()"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.9 void Gpt_LL_Aontimer_StopPredefTimer (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.9 void Gpt_LL_Aontimer_StopPredefTimer (void ): FC7xxx GPT User Manual; Description; AONTIMER start timer."
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced", "timer", "Gpt_LL_Aontimer_StopPredefTimer"]
- `anchors`:
  - `p28`: "Description"
  - `p28`: "AONTIMER start timer."
  - `p28`: "Parameters"
  - `p28`: "Parameter"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.4 uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.4 uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue): FC7xxx GPT User Manual; Parameters; Parameter"
- `keywords`: ["FCPIT", "GPT", "eChannel", "Gpt_FcpitChannelType", "u32MaxValue", "boolean", "pbReturnChannelRollover", "pu32TargetValue", "bDbgMode", "pFcpitConfig"]
- `anchors`:
  - `p29`: "Parameters"
  - `p29`: "Parameter"
  - `p29`: "Description"
  - `p29`: "eChannel"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.8 void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.8 void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value): FC7xxx GPT User Manual; Description; Start the predef timer."
- `keywords`: ["FCPIT", "FTU", "GPT", "eChannel", "void", "Gpt_FcpitChannelType", "channel", "u32Value", "timer", "Returns"]
- `anchors`:
  - `p30`: "Description"
  - `p30`: "Start the predef timer."
  - `p30`: "Parameters"
  - `p30`: "Parameter"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.2 void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.2 void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel): FC7xxx GPT User Manual; u32Value; The value of next timeout."
- `keywords`: ["FTU", "GPT", "Ftu", "eModule", "Gpt_ModuleType", "u8Channel", "Returns", "Referenced", "pReturnChannelOverflow", "pTargetValue"]
- `anchors`:
  - `p31`: "u32Value"
  - `p31`: "The value of next timeout."
  - `p31`: "Returns"
  - `p31`: "N/A"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.6 void"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.6 void: FC7xxx GPT User Manual; 2.8.4.6; void"
- `keywords`: ["FTU", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "bDbgModeEnable", "pFtuConfig", "eClkSrc", "Gpt_LL_Ftu_Init"]
- `anchors`:
  - `p32`: "2.8.4.6"
  - `p32`: "void"
  - `p32`: "Gpt_LL_Ftu_Init"
  - `p32`: "(Gpt_ModuleType"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.10 void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.10 void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel): FC7xxx GPT User Manual; Description; Stop the FTU predef timer."
- `keywords`: ["FTU", "RTC", "GPT", "void", "Returns", "Referenced", "eModule", "u8Channel", "Gpt_LL_Ftu_StopTimer", "Gpt_ModuleType"]
- `anchors`:
  - `p33`: "Description"
  - `p33`: "Stop the FTU predef timer."
  - `p33`: "Parameters"
  - `p33`: "Parameter"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.5 void Gpt_LL_Rtc_Init (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.5 void Gpt_LL_Rtc_Init (void ): FC7xxx GPT User Manual; Description; Get the timer elapsed value."
- `keywords`: ["RTC", "TSTMP", "GPT", "FTU", "void", "Returns", "Referenced", "Gpt_LL_Rtc_Init", "Gpt_HL_Init", "Gpt_LL_Rtc_StartTimer"]
- `anchors`:
  - `p34`: "Description"
  - `p34`: "Get the timer elapsed value."
  - `p34`: "Parameters"
  - `p34`: "Parameter"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.2 2.8.6.3"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.2 2.8.6.3: FC7xxx GPT User Manual; 2.8.6.2; 2.8.6.3"
- `keywords`: ["TSTMP", "GPT", "RTC", "eModule", "u8Channel", "Gpt_ModuleType", "channel", "void", "Gpt_LL_Tstmp_DeInit", "current"]
- `anchors`:
  - `p35`: "2.8.6.2"
  - `p35`: "2.8.6.3"
  - `p35`: "void Gpt_LL_Tstmp_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p35`: "Function"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.7 void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.7 void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue): FC7xxx GPT User Manual; 2.8.6.7; void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
- `keywords`: ["TSTMP", "AONTIMER", "GPT", "eModule", "u8Channel", "Gpt_ModuleType", "void", "u32MaxValue", "Gpt_LL_Tstmp_StartPredefTimer", "timer"]
- `anchors`:
  - `p36`: "2.8.6.7"
  - `p36`: "void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
  - `p36`: "Function"
  - `p36`: "void"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.2 LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.2 LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void ): FC7xxx GPT User Manual; 2.9.1.2; LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt", "Returns", "Referenced", "u32RegValue", "AONTIMER_HWA_CheckIntFlag", "flag"]
- `anchors`:
  - `p37`: "2.9.1.2"
  - `p37`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
  - `p37`: "Function"
  - `p37`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.8 LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.8 LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void ): FC7xxx GPT User Manual; Description; Disable an AONTIMER module interrupt."
- `keywords`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns", "Gpt_LL_Aontimer_Init", "Gpt_LL_Aontimer_StartPredefTimer", "Referenced", "Gpt_LL_Aontimer_DeInit", "Gpt_LL_Aontimer_StopPredefTimer"]
- `anchors`:
  - `p38`: "Description"
  - `p38`: "Disable an AONTIMER module interrupt."
  - `p38`: "Parameters"
  - `p38`: "N/A"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.13 LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.13 LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void ): FC7xxx GPT User Manual; Referenced By; Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StartTimer()"
- `keywords`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue", "Referenced", "Gpt_LL_Aontimer_StartPredefTimer", "Returns", "Gpt_LL_Aontimer_StartTimer", "AONTIMER_HWA_ReadCompareValue"]
- `anchors`:
  - `p39`: "Referenced By"
  - `p39`: "Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StartTimer()"
  - `p39`: "2.9.1.13"
  - `p39`: "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.19 LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.19 LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue): FC7xxx GPT User Manual; Description; Set the AONTIMER current counter value."
- `keywords`: ["FCPIT", "AONTIMER", "GPT", "LOCAL_INLINE", "u32RegValue", "void", "Gpt_FcpitChannelType", "eChannel", "Returns", "Referenced"]
- `anchors`:
  - `p40`: "Description"
  - `p40`: "Set the AONTIMER current counter value."
  - `p40`: "Parameters"
  - `p40`: "Parameter"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.4 LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.4 LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue): FC7xxx GPT User Manual; Gpt_LL_FCPIT_StopPredefTimer(), and Gpt_LL_FCPit_StopTimer(); 2.9.2.4"
- `keywords`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue", "Returns", "Referenced", "Gpt_LL_FCPit_DeInit", "Gpt_LL_FCPIT_StartPredefTimer", "FCPIT_HWA_DisableChannelsInterrupt"]
- `anchors`:
  - `p41`: "Gpt_LL_FCPIT_StopPredefTimer(), and Gpt_LL_FCPit_StopTimer()"
  - `p41`: "2.9.2.4"
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
  - `p41`: "Function"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.9 LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.9 LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel): FC7xxx GPT User Manual; 2.9.2.9; LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `keywords`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType", "channel", "Returns", "eChannel", "Referenced", "Gpt_LL_FCPit_GetTimeElapsed"]
- `anchors`:
  - `p42`: "2.9.2.9"
  - `p42`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
  - `p42`: "Function"
  - `p42`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.15 LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.15 LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void ): FC7xxx GPT User Manual; Referenced By; Gpt_LL_Fcpit_Init()"
- `keywords`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE", "channel", "FTU_Type", "Referenced", "Gpt_LL_Fcpit_Init", "u32RegValue"]
- `anchors`:
  - `p43`: "Referenced By"
  - `p43`: "Gpt_LL_Fcpit_Init()"
  - `p43`: "2.9.2.15"
  - `p43`: "LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.3 LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.3 LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue): FC7xxx GPT User Manual; pFtu; FTU instance."
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "u32RegValue", "Gpt_LL_Ftu_Init", "Gpt_LL_Ftu_StartPredefTimer", "Gpt_LL_Ftu_DeInit"]
- `anchors`:
  - `p44`: "pFtu"
  - `p44`: "FTU instance."
  - `p44`: "Returns"
  - `p44`: "N/A"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.7 LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.7 LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode): FC7xxx GPT User Manual; 2.9.3.7; LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType…"
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "void", "Gpt_LL_Ftu_StartPredefTimer", "eDbgMode", "Gpt_LL_Ftu_Init", "FTU_HWA_ConfigModuleDebugMode"]
- `anchors`:
  - `p45`: "2.9.3.7"
  - `p45`: "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
  - `p45`: "Function"
  - `p45`: "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.12 LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.12 LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu): FC7xxx GPT User Manual; Parameters; Parameter"
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u8Channel", "channel", "interrupt", "instance", "Returns"]
- `anchors`:
  - `p46`: "Parameters"
  - `p46`: "Parameter"
  - `p46`: "Description"
  - `p46`: "pFtu"

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.16 LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.16 LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel): FC7xxx GPT User Manual; 2.9.3.16; LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `keywords`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type", "u32RegValue", "u8Channel", "void", "instance", "eClkSrc"]
- `anchors`:
  - `p47`: "2.9.3.16"
  - `p47`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
  - `p47`: "Function"
  - `p47`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"

### SEG-0048
- `physical_pages`: `48`
- `printed_pages`: `48`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.21 LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.21 LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs): FC7xxx GPT User Manual; Description; Set the FTU counter compare value."
- `keywords`: ["FTU", "GPT", "LOCAL_INLINE", "void", "pFtu", "FTU_Type", "Returns", "Referenced", "Gpt_LL_Ftu_Init", "Gpt_LL_Ftu_StartPredefTimer"]
- `anchors`:
  - `p48`: "Description"
  - `p48`: "Set the FTU counter compare value."
  - `p48`: "Parameters"
  - `p48`: "Parameter"

### SEG-0049
- `physical_pages`: `49`
- `printed_pages`: `49`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.3 LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.3 LOCAL_INLINE void DisableOverflowInvalidInterrupt (void ): FC7xxx GPT User Manual; 2.9.4.3; LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `keywords`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns", "Referenced", "Gpt_LL_Rtc_StartTimer", "DisableOverflowInvalidInterrupt", "interrupt", "Gpt_LL_Rtc_Init"]
- `anchors`:
  - `p49`: "2.9.4.3"
  - `p49`: "LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
  - `p49`: "Function"
  - `p49`: "LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"

### SEG-0050
- `physical_pages`: `50`
- `printed_pages`: `50`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.9 LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.9 LOCAL_INLINE uint32 ReadCounterEnableStatus (void ): FC7xxx GPT User Manual; Referenced By; Gpt_LL_Rtc_EnableInterrupt(), and Gpt_LL_Rtc_Init()"
- `keywords`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced", "Returns", "Gpt_LL_Rtc_EnableInterrupt", "ReadCounterEnableStatus", "Read", "status"]
- `anchors`:
  - `p50`: "Referenced By"
  - `p50`: "Gpt_LL_Rtc_EnableInterrupt(), and Gpt_LL_Rtc_Init()"
  - `p50`: "2.9.4.9"
  - `p50`: "LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"

### SEG-0051
- `physical_pages`: `51`
- `printed_pages`: `51`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.15 LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.15 LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value): FC7xxx GPT User Manual; u32Value; TAR register value."
- `keywords`: ["TSTMP", "RTC", "GPT", "LOCAL_INLINE", "u32Value", "TSTMP_Type", "pTstmp", "register", "Returns", "Referenced"]
- `anchors`:
  - `p51`: "u32Value"
  - `p51`: "TAR register value."
  - `p51`: "Returns"
  - `p51`: "N/A"

### SEG-0052
- `physical_pages`: `52`
- `printed_pages`: `52`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.3 LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.3 LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod): FC7xxx GPT User Manual; 2.9.5.3; LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `keywords`: ["TSTMP", "GPT", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "MOD", "void", "eCounterMode", "TSTMP_HWA_EnableModMatchInterrupt"]
- `anchors`:
  - `p52`: "2.9.5.3"
  - `p52`: "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
  - `p52`: "Function"
  - `p52`: "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"

### SEG-0053
- `physical_pages`: `53`
- `printed_pages`: `53`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.7 LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.7 LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod): FC7xxx GPT User Manual; 2.9.5.7; LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `keywords`: ["TSTMP", "GPT", "pTstmp", "LOCAL_INLINE", "TSTMP_Type", "u8Mod", "MOD", "void", "Gpt_LL_Tstmp_Init", "Gpt_LL_Tstmp_DeInit"]
- `anchors`:
  - `p53`: "2.9.5.7"
  - `p53`: "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
  - `p53`: "Function"
  - `p53`: "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"

### SEG-0054
- `physical_pages`: `54`
- `printed_pages`: `54`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.11 LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.11 LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue): FC7xxx GPT User Manual; 2.9.5.11; LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint…"
- `keywords`: ["TSTMP", "GPT", "MOD", "pTstmp", "u8Mod", "LOCAL_INLINE", "TSTMP_Type", "u32ModValue", "u64TargetValue", "void"]
- `anchors`:
  - `p54`: "2.9.5.11"
  - `p54`: "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
  - `p54`: "Function"
  - `p54`: "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32"

### SEG-0055
- `physical_pages`: `55`
- `printed_pages`: `55`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Gpt_Init"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Gpt_Init: FC7xxx GPT User Manual; 2.10 API Sequence Diagram; 2.10.1"
- `keywords`: ["GPT", "FC7xxx", "Gpt_Init", "ECU", "EcuM", "Sequence", "Diagram", "State", "Manager", "responsible"]
- `anchors`:
  - `p55`: "2.10 API Sequence Diagram"
  - `p55`: "2.10.1"
  - `p55`: "Gpt_Init"
  - `p55`: "The ECU State Manager (EcuM) is responsible for calling the initialization function."

### SEG-0056
- `physical_pages`: `56`
- `printed_pages`: `56`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 GPT Continuous Mode"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 GPT Continuous Mode: FC7xxx GPT User Manual; 2.10.2; GPT Continuous Mode"
- `keywords`: ["GPT", "FC7xxx", "Continuous", "Mode", "Channel", "configured"]
- `anchors`:
  - `p56`: "2.10.2"
  - `p56`: "GPT Continuous Mode"
  - `p56`: "Channel 2 is configured as \"Continuous Mode.\""

### SEG-0057
- `physical_pages`: `57`
- `printed_pages`: `57`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.3 GPT One-shot Mode"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.3 GPT One-shot Mode: FC7xxx GPT User Manual; 2.10.3; GPT One-shot Mode"
- `keywords`: ["GPT", "FC7xxx", "One", "shot", "Mode", "when", "notification", "disabled", "timer", "time"]
- `anchors`:
  - `p57`: "2.10.3"
  - `p57`: "GPT One-shot Mode"
  - `p57`: "Channel 1 is configured for \"One-shot Mode.\""
  - `p57`: "2.10.4"

### SEG-0058
- `physical_pages`: `58`
- `printed_pages`: `58`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.4 Disable/Enable Notifications"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.4 Disable/Enable Notifications: FC7xxx GPT User Manual; This notification is discarded and not made up again, when the notification is re-enabled."
- `keywords`: ["GPT", "FC7xxx", "notification", "discarded", "made", "again", "when", "enabled"]
- `anchors`:
  - `p58`: "This notification is discarded and not made up again, when the notification is re-enabled."

### SEG-0059
- `physical_pages`: `59`
- `printed_pages`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration: FC7xxx GPT User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration", "FC7xxx", "VariantPreCompile", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p59`: "Chapter 3 Tresos Configuration Items"
  - `p59`: "3.1"
  - `p59`: "Container Inclusion Relation"
  - `p59`: "The container inclusion relation is shown below:"

### SEG-0060
- `physical_pages`: `60`
- `printed_pages`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration: FC7xxx GPT User Manual; Screenshot; Properties"
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue", "GptHwChannel", "FC7xxx"]
- `anchors`:
  - `p60`: "Screenshot"
  - `p60`: "Properties"
  - `p60`: "Property"
  - `p60`: "Value"

### SEG-0061
- `physical_pages`: `61`
- `printed_pages`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode: FC7xxx GPT User Manual; 3.2.2.1.4; GptChannelMode"
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue", "GptChannelMode", "timer"]
- `anchors`:
  - `p61`: "3.2.2.1.4"
  - `p61`: "GptChannelMode"
  - `p61`: "Variable"
  - `p61`: "GptChannelMode"

### SEG-0062
- `physical_pages`: `62`
- `printed_pages`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable: FC7xxx GPT User Manual; 3.2.2.1.8; GptDbgModeEnable"
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same", "Screenshot", "Properties"]
- `anchors`:
  - `p62`: "3.2.2.1.8"
  - `p62`: "GptDbgModeEnable"
  - `p62`: "Variable"
  - `p62`: "GptDbgModeEnable"

### SEG-0063
- `physical_pages`: `63`
- `printed_pages`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.1 GptFtuPrescaler"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.1 GptFtuPrescaler: FC7xxx GPT User Manual; Optional; true"
- `keywords`: ["FTU", "GPT", "clock", "Variable", "GptChannelConfiguration_FTU", "GptFtuPrescaler", "channels", "same", "SymbolicNameValue", "GptFtuChannelClkSrc"]
- `anchors`:
  - `p63`: "Optional"
  - `p63`: "true"
  - `p63`: "3.2.2.2"
  - `p63`: "GptChannelConfiguration_FTU"

### SEG-0064
- `physical_pages`: `64`
- `printed_pages`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef: FC7xxx GPT User Manual; Screenshot; Properties"
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "GptFtuGtbRef", "GptChannelConfiguration_AONTIMER"]
- `anchors`:
  - `p64`: "Screenshot"
  - `p64`: "Properties"
  - `p64`: "Property"
  - `p64`: "Value"

### SEG-0065
- `physical_pages`: `65`
- `printed_pages`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.1 GptFCPitIsExternalTrigger"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.1 GptFCPitIsExternalTrigger: FC7xxx GPT User Manual; Properties; Property"
- `keywords`: ["FCPIT", "GPT", "Variable", "Properties", "Property", "SymbolicNameValue", "SIRC_1MHZ", "GptChannelConfiguration_FCPIT", "Screenshot", "GptFCPitIsExternalTrigger"]
- `anchors`:
  - `p65`: "Properties"
  - `p65`: "Property"
  - `p65`: "Value"
  - `p65`: "Type"

### SEG-0066
- `physical_pages`: `66`
- `printed_pages`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.4 GptFCPitEnStartOnTrigger"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.4 GptFCPitEnStartOnTrigger: FC7xxx GPT User Manual; Origin; FLAGCHIP"
- `keywords`: ["FCPIT", "GPT", "SymbolicNameValue", "Variable", "Timer", "GptFCPitEnStartOnTrigger", "GptFCPitTriggerChannels", "channel", "trigger", "selectd"]
- `anchors`:
  - `p66`: "Origin"
  - `p66`: "FLAGCHIP"
  - `p66`: "SymbolicNameValue"
  - `p66`: "False"

### SEG-0067
- `physical_pages`: `67`
- `printed_pages`: `67`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.5 GptChannelConfiguration_TSTMP / 3.2.2.5.1 GptTstmpModClkSrcSelect"
- `content_types`: ["text", "table", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.5 GptChannelConfiguration_TSTMP / 3.2.2.5.1 GptTstmpModClkSrcSelect: FC7xxx GPT User Manual; Screenshot; Properties"
- `keywords`: ["GPT", "TSTMP0", "SRIC_1M", "AON_CLK", "Screenshot", "Properties", "Property", "Variable", "SymbolicNameValue", "GptChannelConfiguration_TSTMP"]
- `anchors`:
  - `p67`: "Screenshot"
  - `p67`: "Properties"
  - `p67`: "Property"
  - `p67`: "Value"

### SEG-0068
- `physical_pages`: `68`
- `printed_pages`: `68`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration / 3.2.2.6.2 GptChannelEcucPartitionRef"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration / 3.2.2.6.2 GptChannelEcucPartitionRef: FC7xxx GPT User Manual; Description; In case the wakeup-capability is true this value is transmitted to the Ecu State Manager. Implementation"
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "ECUC", "Screenshot", "Properties", "Reference", "GptChannelEcucPartitionRef", "GptConfigurationOfOptApiServices", "GptDeinitApi"]
- `anchors`:
  - `p68`: "Description"
  - `p68`: "In case the wakeup-capability is true this value is transmitted to the Ecu State Manager. Implementation"
  - `p68`: "Type: reference to EcuM_WakeupSourceType."
  - `p68`: "Screenshot"

### SEG-0069
- `physical_pages`: `69`
- `printed_pages`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.2 GptTimeElapsedApi"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.2 GptTimeElapsedApi: FC7xxx GPT User Manual; 3.2.3.2; GptTimeElapsedApi"
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue", "GptTimeElapsedApi", "Add", "Remove", "code", "Screenshot", "Properties"]
- `anchors`:
  - `p69`: "3.2.3.2"
  - `p69`: "GptTimeElapsedApi"
  - `p69`: "Variable"
  - `p69`: "GptTimeElapsedApi"

### SEG-0070
- `physical_pages`: `70`
- `printed_pages`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.6 GptChangeNextTimeoutValueApi"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.6 GptChangeNextTimeoutValueApi: FC7xxx GPT User Manual; 3.2.3.6; GptChangeNextTimeoutValueApi"
- `keywords`: ["GPT", "FTU", "Variable", "GptChangeNextTimeoutValueApi", "Screenshot", "Properties", "SymbolicNameValue", "GptDriverConfiguration", "GptDevErrorDetect", "GptPredefTimer100us32bitEnable"]
- `anchors`:
  - `p70`: "3.2.3.6"
  - `p70`: "GptChangeNextTimeoutValueApi"
  - `p70`: "Variable"
  - `p70`: "GptChangeNextTimeoutValueApi"

### SEG-0071
- `physical_pages`: `71`
- `printed_pages`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade: FC7xxx GPT User Manual; Type; Variable: Boolean"
- `keywords`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin", "Default", "GptPredefTimer1usEnablingGrade", "GPT_PREDEF_TIMER_1US_DISABLED", "GptReportWakeupSource", "GptRegisterLockingMode"]
- `anchors`:
  - `p71`: "Type"
  - `p71`: "Variable: Boolean"
  - `p71`: "Origin"
  - `p71`: "AUTOSAR_ECUC"

### SEG-0072
- `physical_pages`: `72`
- `printed_pages`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.6 GptEnableUserModeSupport"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.6 GptEnableUserModeSupport: FC7xxx GPT User Manual; 3.2.4.6; GptEnableUserModeSupport"
- `keywords`: ["GPT", "FTU", "Gpt", "Variable", "SymbolicNameValue", "GptEnableUserModeSupport", "Screenshot", "Properties", "Property", "Boolean"]
- `anchors`:
  - `p72`: "3.2.4.6"
  - `p72`: "GptEnableUserModeSupport"
  - `p72`: "Variable"
  - `p72`: "GptEnableUserModeSupport"

### SEG-0073
- `physical_pages`: `73`
- `printed_pages`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef: FC7xxx GPT User Manual; 3.2.4.10; GptKernelEcucPartitionRef"
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchors`:
  - `p73`: "3.2.4.10"
  - `p73`: "GptKernelEcucPartitionRef"
  - `p73`: "Variable"
  - `p73`: "GptKernelEcucPartitionRef"

### SEG-0074
- `physical_pages`: `74`
- `printed_pages`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint: FC7xxx GPT User Manual; 3.2.4.13; GptClockReferencePoint"
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit", "GptPredefTimer_1us_24Bit", "FC7xxx"]
- `anchors`:
  - `p74`: "3.2.4.13"
  - `p74`: "GptClockReferencePoint"
  - `p74`: "Container"
  - `p74`: "GptClockReferencePoint"

### SEG-0075
- `physical_pages`: `75`
- `printed_pages`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit: FC7xxx GPT User Manual; Description; This container contains the 1μs 24bit predef timer configuration (parameters) of the GPT Driver."
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion", "FC7xxx", "predef"]
- `anchors`:
  - `p75`: "Description"
  - `p75`: "This container contains the 1μs 24bit predef timer configuration (parameters) of the GPT Driver."
  - `p75`: "Screenshot"
  - `p75`: "Properties"

### SEG-0076
- `physical_pages`: `76`
- `printed_pages`: `76`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion: FC7xxx GPT User Manual; Description; Major version number of AUTOSAR specification on which the appropriate implementation is based."
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "AUTOSAR", "version", "number", "implementation", "Screenshot", "Properties"]
- `anchors`:
  - `p76`: "Description"
  - `p76`: "Major version number of AUTOSAR specification on which the appropriate implementation is based."
  - `p76`: "Screenshot"
  - `p76`: "Properties"

### SEG-0077
- `physical_pages`: `77`
- `printed_pages`: `77`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion: FC7xxx GPT User Manual; Description; Minor version number of the vendor specific implementation of the module. The numbering is vendor"
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "vendor", "specific", "Screenshot", "Properties", "Property", "Origin"]
- `anchors`:
  - `p77`: "Description"
  - `p77`: "Minor version number of the vendor specific implementation of the module. The numbering is vendor"
  - `p77`: "specific."
  - `p77`: "Screenshot"

### SEG-0078
- `physical_pages`: `78`
- `printed_pages`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx GPT User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["GPT", "FCPIT", "FTU", "FC7xxx", "FC7240", "PWM", "ICU", "OCU", "Guides", "Item"]
- `anchors`:
  - `p78`: "Chapter 4 Configuration Guides"
  - `p78`: "4.1"
  - `p78`: "Configuration Item Constraint"
  - `p78`: "1)"

### SEG-0079
- `physical_pages`: `79`
- `printed_pages`: `79`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 GPT Usage Common Steps"
- `content_types`: ["text", "image", "config", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 GPT Usage Common Steps: FC7xxx GPT User Manual; 3); If the GPT channel uses FTU and the clock source is from PCC, the GptFtuChannelClkSrc must select"
- `keywords`: ["GPT", "FTU", "channel", "clock", "PCC", "GptFtuChannelClkSrc", "point", "FC7xxx", "select", "GPT_FTU_BUS_CLK"]
- `anchors`:
  - `p79`: "3)"
  - `p79`: "If the GPT channel uses FTU and the clock source is from PCC, the GptFtuChannelClkSrc must select"
  - `p79`: "GPT_FTU_BUS_CLK."
  - `p79`: "4.2"

### SEG-0080
- `physical_pages`: `80`
- `printed_pages`: `80`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo: FC7xxx GPT User Manual; 2); Configure Clock reference point"
- `keywords`: ["GPT", "FTU", "reference", "point", "MCU", "FC7xxx", "clock", "create", "channel", "Configure"]
- `anchors`:
  - `p80`: "2)"
  - `p80`: "Configure Clock reference point"
  - `p80`: "The clock reference point is a reference from the MCU module, so configure the MCU module first and create the"
  - `p80`: "reference point which GPT channel used."

### SEG-0081
- `physical_pages`: `81`
- `printed_pages`: `81`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo: FC7xxx GPT User Manual; 3); Configure general configurations"
- `keywords`: ["GPT", "FC7xxx", "Configure", "general", "configurations", "Select", "which", "Right", "click", "select"]
- `anchors`:
  - `p81`: "3)"
  - `p81`: "Configure general configurations"
  - `p81`: "Select which API will be used."
  - `p81`: "4)"

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
- `key_fields`: ["GPT", "FTU", "FC7xxx", "Gpt_Aontiemr_RegOps", "Gpt_Fcpit_RegOps"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `bbox`: `None`
- `key_fields`: ["GPT", "Gpt", "define", "called", "Gpt_GetPredefTimerValue"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `bbox`: `None`
- `key_fields`: ["GPT", "define", "Gpt_Init", "FC7xxx", "GPT_E_INIT_FAILED"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Gpt_version.h"
- `bbox`: `None`
- `key_fields`: ["GPT", "define", "FC7xxx", "GPT_ENABLEWAKEUP_ID", "Gpt_EnableWakeup"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like content on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["GPT", "define", "STD_ON", "switch", "GPT_VERSION_INFO_API"]
- `summary`: "Indexes table-like source content for Table-like content on page 11; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 11"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like content on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Gpt_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["GPT", "Gpt", "Ftu", "define", "STD_OFF"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Gpt.h / 2.4.1.1 Gpt_ChannelStatusType"
- `bbox`: `None`
- `key_fields`: ["GPT", "Gpt", "define", "channel", "status"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.2 Gpt_ChannelModeType"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "FCPIT", "AONTIMER", "RTC"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Gpt_ConfigType"
- `bbox`: `None`
- `key_fields`: ["GPT", "typedef", "channel", "const", "Gpt_ChannelType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Gpt_ChannelInfoType"
- `bbox`: `None`
- `key_fields`: ["GPT", "channel", "boolean", "Gpt_ChannelInfoType", "information"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Gpt_ConfigChannelCommonType"
- `bbox`: `None`
- `key_fields`: ["GPT", "FTU", "AONTIMER", "FCPIT", "channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 17; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 17"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0018-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `bbox`: `None`
- `key_fields`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0019-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-001"
- `caption`: "Table-like content on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `bbox`: `None`
- `key_fields`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `bbox`: `None`
- `key_fields`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `bbox`: `None`
- `key_fields`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `bbox`: `None`
- `key_fields`: ["GPT", "void", "Gpt_SetMode", "Gpt_ModeType", "Gpt_StartTimer"]
- `summary`: "Indexes table-like source content for Table-like content on page 22; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 22"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0023-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `bbox`: `None`
- `key_fields`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0024-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-001"
- `caption`: "Table-like content on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.2 void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
- `bbox`: `None`
- `key_fields`: ["GPT", "pChannelConfig", "void", "const", "Gpt_ConfigChannelType"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.6 Gpt_ValueType"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "Ftu", "const", "pChannelConfig"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Gpt_Hw.h / 2.8.1.11 void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "GPT", "void", "pChannelConfig", "Returns"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.4 uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void )"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "GPT", "void", "const", "Returns"]
- `summary`: "Indexes table-like source content for Table-like content on page 27; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 27"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0028-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0028-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `28`
- `printed_pages`: ["28"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.2 Functions in Gpt_Aontimer.h / 2.8.2.9 void Gpt_LL_Aontimer_StopPredefTimer (void )"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "AONTIMER", "GPT", "void", "Gpt_FcpitChannelType"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0029-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0029-001"
- `caption`: "Table-like content on page 29"
- `physical_pages`: `29`
- `printed_pages`: ["29"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.4 uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "GPT", "eChannel", "Gpt_FcpitChannelType", "u32MaxValue"]
- `summary`: "Indexes table-like source content for Table-like content on page 29; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 29"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0030-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0030-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `30`
- `printed_pages`: ["30"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.3 Functions in Gpt_FCPit.h / 2.8.3.8 void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "FTU", "GPT", "eChannel", "void"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0031-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0031-001"
- `caption`: "Table-like content on page 31"
- `physical_pages`: `31`
- `printed_pages`: ["31"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.2 void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "Ftu", "eModule", "Gpt_ModuleType"]
- `summary`: "Indexes table-like source content for Table-like content on page 31; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 31"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0032-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0032-001"
- `caption`: "Table-like content on page 32"
- `physical_pages`: `32`
- `printed_pages`: ["32"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.6 void"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "eModule", "u8Channel", "Gpt_ModuleType"]
- `summary`: "Indexes table-like source content for Table-like content on page 32; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 32"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0033-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0033-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `33`
- `printed_pages`: ["33"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.4 Functions in Gpt_Ftu.h / 2.8.4.10 void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
- `bbox`: `None`
- `key_fields`: ["FTU", "RTC", "GPT", "void", "Returns"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0034-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0034-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `34`
- `printed_pages`: ["34"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.5 Functions in Gpt_Rtc.h / 2.8.5.5 void Gpt_LL_Rtc_Init (void )"
- `bbox`: `None`
- `key_fields`: ["RTC", "TSTMP", "GPT", "FTU", "void"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0035-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0035-001"
- `caption`: "Table-like content on page 35"
- `physical_pages`: `35`
- `printed_pages`: ["35"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.2 2.8.6.3"
- `bbox`: `None`
- `key_fields`: ["TSTMP", "GPT", "RTC", "eModule", "u8Channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 35; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 35"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0036-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0036-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `36`
- `printed_pages`: ["36"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.6 Functions in Gpt_Tstmp.h / 2.8.6.7 void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
- `bbox`: `None`
- `key_fields`: ["TSTMP", "AONTIMER", "GPT", "eModule", "u8Channel"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0037-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0037-001"
- `caption`: "Table-like content on page 37"
- `physical_pages`: `37`
- `printed_pages`: ["37"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.2 LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "interrupt"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.8 LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "GPT", "void", "LOCAL_INLINE", "Returns"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.13 LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
- `bbox`: `None`
- `key_fields`: ["AONTIMER", "GPT", "LOCAL_INLINE", "void", "u32RegValue"]
- `summary`: "Indexes table-like source content for Table-like content on page 39; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 39"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0040-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0040-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `40`
- `printed_pages`: ["40"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Gpt_Aontiemr_RegOps.h / 2.9.1.19 LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "AONTIMER", "GPT", "LOCAL_INLINE", "u32RegValue"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0041-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0041-001"
- `caption`: "Table-like content on page 41"
- `physical_pages`: `41`
- `printed_pages`: ["41"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.4 LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "GPT", "void", "LOCAL_INLINE", "u32RegValue"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.9 LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "GPT", "LOCAL_INLINE", "void", "Gpt_FcpitChannelType"]
- `summary`: "Indexes table-like source content for Table-like content on page 42; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 42"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0043-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0043-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `43`
- `printed_pages`: ["43"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.2 Functions in Gpt_Fcpit_RegOps.h / 2.9.2.15 LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "FTU", "GPT", "void", "LOCAL_INLINE"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0044-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0044-001"
- `caption`: "Table-like content on page 44"
- `physical_pages`: `44`
- `printed_pages`: ["44"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.3 LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.7 LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 45; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 45"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0046-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0046-001"
- `caption`: "Table-like content on page 46"
- `physical_pages`: `46`
- `printed_pages`: ["46"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.12 LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 46; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 46"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0047-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0047-001"
- `caption`: "Table-like content on page 47"
- `physical_pages`: `47`
- `printed_pages`: ["47"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.16 LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "pFtu", "LOCAL_INLINE", "FTU_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 47; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 47"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0048-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0048-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `48`
- `printed_pages`: ["48"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.3 Functions in Gpt_Ftu_RegOps.h / 2.9.3.21 LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "LOCAL_INLINE", "void", "pFtu"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0049-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0049-001"
- `caption`: "Table-like content on page 49"
- `physical_pages`: `49`
- `printed_pages`: ["49"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.3 LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `bbox`: `None`
- `key_fields`: ["RTC", "GPT", "void", "LOCAL_INLINE", "Returns"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.9 LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"
- `bbox`: `None`
- `key_fields`: ["RTC", "GPT", "LOCAL_INLINE", "void", "Referenced"]
- `summary`: "Indexes table-like source content for Table-like content on page 50; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 50"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0051-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0051-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `51`
- `printed_pages`: ["51"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.4 Functions in Gpt_Rtc_RegOps.h / 2.9.4.15 LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["TSTMP", "RTC", "GPT", "LOCAL_INLINE", "u32Value"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0052-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0052-001"
- `caption`: "Table-like content on page 52"
- `physical_pages`: `52`
- `printed_pages`: ["52"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.3 LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `bbox`: `None`
- `key_fields`: ["TSTMP", "GPT", "pTstmp", "u8Mod", "LOCAL_INLINE"]
- `summary`: "Indexes table-like source content for Table-like content on page 52; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 52"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0053-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0053-001"
- `caption`: "Table-like content on page 53"
- `physical_pages`: `53`
- `printed_pages`: ["53"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.7 LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `bbox`: `None`
- `key_fields`: ["TSTMP", "GPT", "pTstmp", "LOCAL_INLINE", "TSTMP_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 53; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 53"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0054-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0054-001"
- `caption`: "Table-like content on page 54"
- `physical_pages`: `54`
- `printed_pages`: ["54"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.5 Functions in Gpt_Tstmp_RegOps.h / 2.9.5.11 LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `bbox`: `None`
- `key_fields`: ["TSTMP", "GPT", "MOD", "pTstmp", "u8Mod"]
- `summary`: "Indexes table-like source content for Table-like content on page 54; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 54"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0059-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0059-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `59`
- `printed_pages`: ["59"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `bbox`: `None`
- `key_fields`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0060-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0060-001"
- `caption`: "Table-like content on page 60"
- `physical_pages`: `60`
- `printed_pages`: ["60"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `bbox`: `None`
- `key_fields`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `bbox`: `None`
- `key_fields`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER"]
- `summary`: "Indexes table-like source content for Table-like content on page 61; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 61"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0063-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0063-001"
- `caption`: "Table-like content on page 63"
- `physical_pages`: `63`
- `printed_pages`: ["63"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.1 GptFtuPrescaler"
- `bbox`: `None`
- `key_fields`: ["FTU", "GPT", "clock", "Variable", "GptChannelConfiguration_FTU"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `bbox`: `None`
- `key_fields`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.1 GptFCPitIsExternalTrigger"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "GPT", "Variable", "Properties", "Property"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.4 GptChannelConfiguration_FCPIT / 3.2.2.4.4 GptFCPitEnStartOnTrigger"
- `bbox`: `None`
- `key_fields`: ["FCPIT", "GPT", "SymbolicNameValue", "Variable", "Timer"]
- `summary`: "Indexes table-like source content for Table-like content on page 66; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 66"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0067-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0067-001"
- `caption`: "Table-like content on page 67"
- `physical_pages`: `67`
- `printed_pages`: ["67"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.5 GptChannelConfiguration_TSTMP / 3.2.2.5.1 GptTstmpModClkSrcSelect"
- `bbox`: `None`
- `key_fields`: ["GPT", "TSTMP0", "SRIC_1M", "AON_CLK", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 67; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 67"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0070-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0070-001"
- `caption`: "Table-like content on page 70"
- `physical_pages`: `70`
- `printed_pages`: ["70"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.6 GptChangeNextTimeoutValueApi"
- `bbox`: `None`
- `key_fields`: ["GPT", "FTU", "Variable", "GptChangeNextTimeoutValueApi", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 70; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 70"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0071-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0071-001"
- `caption`: "Table-like content on page 71"
- `physical_pages`: `71`
- `printed_pages`: ["71"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `bbox`: `None`
- `key_fields`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin"]
- `summary`: "Indexes table-like source content for Table-like content on page 71; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 71"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0074-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0074-001"
- `caption`: "Table-like content on page 74"
- `physical_pages`: `74`
- `printed_pages`: ["74"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `bbox`: `None`
- `key_fields`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 74; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 74"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0075-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0075-001"
- `caption`: "Table-like content on page 75"
- `physical_pages`: `75`
- `printed_pages`: ["75"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `bbox`: `None`
- `key_fields`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit"]
- `summary`: "Indexes table-like source content for Table-like content on page 75; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 75"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0078-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0078-001"
- `caption`: "Table-like content on page 78"
- `physical_pages`: `78`
- `printed_pages`: ["78"]
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `None`
- `key_fields`: ["GPT", "FCPIT", "FTU", "FC7xxx", "FC7240"]
- `summary`: "Indexes table-like source content for Table-like content on page 78; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 78"
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
- `keywords`: ["GPT", "Gpt", "Gpt_Hw_Types", "FC7xxx", "Gpt_version", "Gpt_Cfg", "Gpt_ConfigType", "Gpt_ChannelInfoType"]
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
- `keywords`: ["GPT", "FTU", "FC7xxx", "Gpt_Aontiemr_RegOps", "Gpt_Fcpit_RegOps", "Gpt_Ftu_RegOps", "Gpt_Rtc_RegOps", "Gpt_Tstmp_RegOps"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0008-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0008-001"
- `caption`: "Image block near 2.3.1 Macros in Gpt.h"
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Gpt.h"
- `bbox`: `[36.0, 57.6, 559.3, 244.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in Gpt.h; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Gpt", "define", "called", "Gpt_GetPredefTimerValue", "FC7xxx", "GPT_E_INVALID_CALL", "Gpt_StartTimer"]
- `anchor`: "Image block near 2.3.1 Macros in Gpt.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0014-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-001"
- `caption`: "Generated visual anchor: 2.4.2.2 Gpt_ChannelModeType"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Gpt_Hw_Types.h / 2.4.2.2 Gpt_ChannelModeType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.4.2.2 Gpt_ChannelModeType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["FTU", "GPT", "FCPIT", "AONTIMER", "RTC", "mode", "Gpt_ChannelModeType", "channel"]
- `anchor`: "2.4.2.2 Gpt_ChannelModeType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-001"
- `caption`: "Image block near 2.6.1 Gpt_ConfigType"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Gpt_ConfigType"
- `bbox`: `[112.25, 465.14, 527.06, 653.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1 Gpt_ConfigType; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "typedef", "channel", "const", "Gpt_ChannelType", "data", "Gpt_ConfigType", "FC7xxx"]
- `anchor`: "Image block near 2.6.1 Gpt_ConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Generated visual anchor: 2.6.2 Gpt_ChannelInfoType"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Gpt_ChannelInfoType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.2 Gpt_ChannelInfoType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["GPT", "channel", "boolean", "Gpt_ChannelInfoType", "information", "Gpt_HwChannelInfoType", "Gpt_ConfigPredefChannelType", "FC7xxx"]
- `anchor`: "2.6.2 Gpt_ChannelInfoType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Generated visual anchor: 2.6.5 Gpt_ConfigChannelCommonType"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Gpt_ConfigChannelCommonType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.5 Gpt_ConfigChannelCommonType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["GPT", "FTU", "AONTIMER", "FCPIT", "channel", "Gpt_ConfigChannelCommonType", "Gpt_ConfigChannelHwSpecificType", "Gpt_ConfigChannelType"]
- `anchor`: "2.6.5 Gpt_ConfigChannelCommonType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `bbox`: `[112.25, 141.67, 556.69, 235.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `bbox`: `[112.25, 381.33, 356.75, 403.08]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-003"
- `caption`: "Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `bbox`: `[112.25, 535.49, 508.95, 601.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Ftu", "Gpt", "void", "WakeupSource", "u32Group", "Gpt_ChangeNextTimeoutValue", "Gpt_ChannelType"]
- `anchor`: "Image block near 2.7.1.1 void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.7.1.5 void Gpt_DeInit (void )"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `bbox`: `[112.25, 37.4, 508.95, 103.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Gpt_DeInit (void ); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup"]
- `anchor`: "Image block near 2.7.1.5 void Gpt_DeInit (void )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-002"
- `caption`: "Image block near 2.7.1.5 void Gpt_DeInit (void )"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `bbox`: `[112.25, 231.36, 526.6, 449.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Gpt_DeInit (void ); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup"]
- `anchor`: "Image block near 2.7.1.5 void Gpt_DeInit (void )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-003"
- `caption`: "Image block near 2.7.1.5 void Gpt_DeInit (void )"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.5 void Gpt_DeInit (void )"
- `bbox`: `[112.25, 560.2, 396.5, 626.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Gpt_DeInit (void ); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Ftu", "void", "Gpt_ChannelType", "Channel", "Gpt_DeInit", "Gpt_DisableNotification", "Gpt_DisableWakeup"]
- `anchor`: "Image block near 2.7.1.5 void Gpt_DeInit (void )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 37.4, 381.5, 98.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-002"
- `caption`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 233.36, 392.0, 299.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-003"
- `caption`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 427.43, 380.0, 493.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-004"
- `caption`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 621.49, 531.04, 773.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Channel", "Gpt_ChannelType", "channel", "Diagram", "void", "Gpt_EnableNotification", "Gpt_EnableWakeup"]
- `anchor`: "Image block near 2.7.1.8 void Gpt_EnableNotification (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 188.4, 524.97, 247.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel"]
- `anchor`: "Image block near 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-002"
- `caption`: "Image block near 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 375.36, 559.3, 437.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Gpt_ValueType", "Gpt_ChannelType", "Channel", "VersionInfoPtr", "Returns", "Gpt_GetTimeElapsed", "channel"]
- `anchor`: "Image block near 2.7.1.11 Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `bbox`: `[112.25, 37.39, 459.64, 192.29]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "void", "Gpt_SetMode", "Gpt_ModeType", "Gpt_StartTimer", "Gpt_ChannelType", "Gpt_ValueType", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-002"
- `caption`: "Image block near 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `bbox`: `[112.25, 320.36, 506.02, 623.61]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "void", "Gpt_SetMode", "Gpt_ModeType", "Gpt_StartTimer", "Gpt_ChannelType", "Gpt_ValueType", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.15 void Gpt_SetMode (Gpt_ModeType Mode)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 37.4, 531.5, 179.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void", "Gpt_StopTimer", "Gpt_ChannelType", "Gpt_ProcessCommonInterrupt"]
- `anchor`: "Image block near 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Gpt.h / 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `bbox`: `[112.25, 325.7, 546.3, 429.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["GPT", "channel", "u8MapTableIndex", "Channel", "void", "Gpt_StopTimer", "Gpt_ChannelType", "Gpt_ProcessCommonInterrupt"]
- `anchor`: "Image block near 2.7.1.17 void Gpt_StopTimer (Gpt_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-001"
- `caption`: "Image block near 2.10.1 Gpt_Init"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Gpt_Init"
- `bbox`: `[50.15, 100.3, 573.45, 323.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.1 Gpt_Init; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FC7xxx", "Gpt_Init", "ECU", "EcuM", "Sequence", "Diagram", "State"]
- `anchor`: "Image block near 2.10.1 Gpt_Init"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-001"
- `caption`: "Image block near 2.10.2 GPT Continuous Mode"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 GPT Continuous Mode"
- `bbox`: `[50.15, 73.59, 573.45, 751.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.2 GPT Continuous Mode; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FC7xxx", "Continuous", "Mode", "Channel", "configured"]
- `anchor`: "Image block near 2.10.2 GPT Continuous Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-001"
- `caption`: "Image block near 2.10.3 GPT One-shot Mode"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.3 GPT One-shot Mode"
- `bbox`: `[50.15, 73.59, 573.45, 669.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.3 GPT One-shot Mode; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FC7xxx", "One", "shot", "Mode", "when", "notification", "disabled"]
- `anchor`: "Image block near 2.10.3 GPT One-shot Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-001"
- `caption`: "Image block near Enable Notifications"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.4 Disable/Enable Notifications"
- `bbox`: `[50.15, 53.83, 573.45, 601.18]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near Enable Notifications; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FC7xxx", "notification", "discarded", "made", "again", "when", "enabled"]
- `anchor`: "Image block near Enable Notifications"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-001"
- `caption`: "Image block near 3.2.2.1 GptChannelConfiguration"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `bbox`: `[36.0, 139.7, 559.3, 242.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration", "FC7xxx", "VariantPreCompile", "Screenshot"]
- `anchor`: "Image block near 3.2.2.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-002"
- `caption`: "Image block near 3.2.2.1 GptChannelConfiguration"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `bbox`: `[112.25, 352.78, 395.25, 374.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration", "FC7xxx", "VariantPreCompile", "Screenshot"]
- `anchor`: "Image block near 3.2.2.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-003"
- `caption`: "Image block near 3.2.2.1 GptChannelConfiguration"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration"
- `bbox`: `[112.25, 591.41, 339.65, 675.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GptChannelConfigSet", "GptChannelConfiguration", "FC7xxx", "VariantPreCompile", "Screenshot"]
- `anchor`: "Image block near 3.2.2.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-001"
- `caption`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `bbox`: `[112.25, 37.39, 551.6, 180.04]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-002"
- `caption`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `bbox`: `[112.25, 308.11, 338.68, 348.79]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-003"
- `caption`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `bbox`: `[112.25, 476.58, 561.67, 494.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-004"
- `caption`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.1 GptChannelConfiguration"
- `bbox`: `[112.25, 661.41, 553.86, 674.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.1 GptChannelConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptChannelConfiguration", "Screenshot", "Properties", "Property", "GptChannelId", "Variable", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.1 GptChannelConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-001"
- `caption`: "Image block near 3.2.2.1.4 GptChannelMode"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `bbox`: `[112.25, 89.21, 555.67, 107.08]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4 GptChannelMode; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.4 GptChannelMode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-002"
- `caption`: "Image block near 3.2.2.1.4 GptChannelMode"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `bbox`: `[112.25, 270.1, 561.39, 287.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4 GptChannelMode; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.4 GptChannelMode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-003"
- `caption`: "Image block near 3.2.2.1.4 GptChannelMode"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `bbox`: `[112.25, 453.63, 545.61, 467.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4 GptChannelMode; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.4 GptChannelMode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-004"
- `caption`: "Image block near 3.2.2.1.4 GptChannelMode"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.4 GptChannelMode"
- `bbox`: `[112.25, 664.64, 557.29, 680.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4 GptChannelMode; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FCPIT", "RTC", "FTU", "AONTIMER", "Variable", "AUTOSAR_ECUC", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1.4 GptChannelMode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-001"
- `caption`: "Image block near 3.2.2.1.8 GptDbgModeEnable"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable"
- `bbox`: `[112.25, 108.98, 557.27, 123.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8 GptDbgModeEnable; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "Image block near 3.2.2.1.8 GptDbgModeEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-002"
- `caption`: "Image block near 3.2.2.1.8 GptDbgModeEnable"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable"
- `bbox`: `[112.25, 487.94, 547.1, 503.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8 GptDbgModeEnable; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "Image block near 3.2.2.1.8 GptDbgModeEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-003"
- `caption`: "Image block near 3.2.2.1.8 GptDbgModeEnable"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.1 GptChannelConfiguration / 3.2.2.1.8 GptDbgModeEnable"
- `bbox`: `[112.25, 682.82, 562.95, 699.98]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8 GptDbgModeEnable; use the source PDF page for exact visual details."
- `keywords`: ["FTU", "GPT", "AONTIMER", "Variable", "SymbolicNameValue", "channels", "GptDbgModeEnable", "same"]
- `anchor`: "Image block near 3.2.2.1.8 GptDbgModeEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-001"
- `caption`: "Image block near 3.2.2.2.4 GptFtuGtbRef"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `bbox`: `[112.25, 217.86, 550.49, 234.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.2.4 GptFtuGtbRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.2.4 GptFtuGtbRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-002"
- `caption`: "Image block near 3.2.2.2.4 GptFtuGtbRef"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `bbox`: `[112.25, 542.37, 395.06, 560.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.2.4 GptFtuGtbRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.2.4 GptFtuGtbRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-003"
- `caption`: "Image block near 3.2.2.2.4 GptFtuGtbRef"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.2 GptChannelConfiguration_FTU / 3.2.2.2.4 GptFtuGtbRef"
- `bbox`: `[112.25, 757.79, 395.35, 775.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.2.4 GptFtuGtbRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "AONTIMER", "Gpt", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.2.4 GptFtuGtbRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0068-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0068-001"
- `caption`: "Image block near 3.2.2.6.2 GptChannelEcucPartitionRef"
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GptChannelConfigSet / 3.2.2.6 GptWakeupConfiguration / 3.2.2.6.2 GptChannelEcucPartitionRef"
- `bbox`: `[112.25, 420.93, 451.9, 528.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.6.2 GptChannelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Variable", "AUTOSAR_ECUC", "ECUC", "Screenshot", "Properties", "Reference", "GptChannelEcucPartitionRef"]
- `anchor`: "Image block near 3.2.2.6.2 GptChannelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0070-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0070-001"
- `caption`: "Image block near 3.2.3.6 GptChangeNextTimeoutValueApi"
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 GptConfigurationOfOptApiServices / 3.2.3.6 GptChangeNextTimeoutValueApi"
- `bbox`: `[112.25, 289.91, 508.12, 460.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.6 GptChangeNextTimeoutValueApi; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FTU", "Variable", "GptChangeNextTimeoutValueApi", "Screenshot", "Properties", "SymbolicNameValue", "GptDriverConfiguration"]
- `anchor`: "Image block near 3.2.3.6 GptChangeNextTimeoutValueApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0071-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0071-001"
- `caption`: "Image block near 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `bbox`: `[112.25, 199.88, 451.78, 216.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.3 GptPredefTimer1usEnablingGrade; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin", "Default", "GptPredefTimer1usEnablingGrade", "GPT_PREDEF_TIMER_1US_DISABLED"]
- `anchor`: "Image block near 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0071-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0071-002"
- `caption`: "Image block near 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `bbox`: `[112.25, 627.91, 451.83, 647.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.3 GptPredefTimer1usEnablingGrade; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Variable", "SymbolicNameValue", "AUTOSAR_ECUC", "Origin", "Default", "GptPredefTimer1usEnablingGrade", "GPT_PREDEF_TIMER_1US_DISABLED"]
- `anchor`: "Image block near 3.2.4.3 GptPredefTimer1usEnablingGrade"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-001"
- `caption`: "Image block near 3.2.4.10 GptKernelEcucPartitionRef"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef"
- `bbox`: `[112.25, 125.32, 553.03, 140.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.10 GptKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.10 GptKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-002"
- `caption`: "Image block near 3.2.4.10 GptKernelEcucPartitionRef"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef"
- `bbox`: `[112.25, 302.96, 542.55, 414.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.10 GptKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.10 GptKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-003"
- `caption`: "Image block near 3.2.4.10 GptKernelEcucPartitionRef"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.10 GptKernelEcucPartitionRef"
- `bbox`: `[111.95, 564.28, 472.82, 679.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.10 GptKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Gpt", "ECUC", "GptKernelEcucPartitionRef", "GptClockReferencePoint", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.10 GptKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-001"
- `caption`: "Image block near 3.2.4.13 GptClockReferencePoint"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `bbox`: `[112.25, 106.15, 338.7, 147.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 GptClockReferencePoint; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "Image block near 3.2.4.13 GptClockReferencePoint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-002"
- `caption`: "Image block near 3.2.4.13 GptClockReferencePoint"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `bbox`: `[112.25, 406.75, 333.5, 442.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 GptClockReferencePoint; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "Image block near 3.2.4.13 GptClockReferencePoint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-003"
- `caption`: "Image block near 3.2.4.13 GptClockReferencePoint"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 GptDriverConfiguration / 3.2.4.13 GptClockReferencePoint"
- `bbox`: `[112.25, 535.54, 395.29, 701.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 GptClockReferencePoint; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "GptClockReferencePoint", "McuClockReferencePoint", "Screenshot", "Properties", "GptClockReference", "GptPredefTimerConfiguration", "GptPredefTimer_1us_16Bit"]
- `anchor`: "Image block near 3.2.4.13 GptClockReferencePoint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0075-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0075-001"
- `caption`: "Image block near 3.2.5.3 GptPredefTimer_1us_32Bit"
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `bbox`: `[112.25, 54.83, 395.66, 157.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.3 GptPredefTimer_1us_32Bit; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.3 GptPredefTimer_1us_32Bit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0075-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0075-002"
- `caption`: "Image block near 3.2.5.3 GptPredefTimer_1us_32Bit"
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `bbox`: `[112.25, 255.77, 395.29, 360.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.3 GptPredefTimer_1us_32Bit; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.3 GptPredefTimer_1us_32Bit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0075-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0075-003"
- `caption`: "Image block near 3.2.5.3 GptPredefTimer_1us_32Bit"
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 GptPredefTimerConfiguration / 3.2.5.3 GptPredefTimer_1us_32Bit"
- `bbox`: `[112.25, 637.17, 452.09, 707.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.3 GptPredefTimer_1us_32Bit; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "contains", "Screenshot", "Properties", "GptPredefTimer_1us_32Bit", "GptPredefTimer_100us_32Bit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.3 GptPredefTimer_1us_32Bit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0076-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0076-001"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[112.25, 236.05, 495.5, 251.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "AUTOSAR", "version", "number", "implementation"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-001"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[112.25, 71.77, 484.25, 89.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "vendor", "specific", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-002"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[112.25, 450.47, 451.55, 466.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "Variable", "Integer_Label", "SymbolicNameValue", "vendor", "specific", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0078-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0078-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 179.58, 559.3, 462.58]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FCPIT", "FTU", "FC7xxx", "FC7240", "PWM", "ICU", "OCU"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0078-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0078-002"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 491.52, 559.3, 776.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FCPIT", "FTU", "FC7xxx", "FC7240", "PWM", "ICU", "OCU"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0079-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0079-001"
- `caption`: "Image block near 4.2 GPT Usage Common Steps"
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 GPT Usage Common Steps"
- `bbox`: `[36.0, 99.71, 533.13, 343.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 GPT Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FTU", "channel", "clock", "PCC", "GptFtuChannelClkSrc", "point", "FC7xxx"]
- `anchor`: "Image block near 4.2 GPT Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0080-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0080-001"
- `caption`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `physical_page`: `80`
- `printed_page`: `80`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `bbox`: `[36.0, 36.89, 559.3, 220.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.3 GPT Channel Use FTU Demo; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FTU", "reference", "point", "MCU", "FC7xxx", "clock", "create"]
- `anchor`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0080-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0080-002"
- `caption`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `physical_page`: `80`
- `printed_page`: `80`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `bbox`: `[36.0, 334.83, 559.3, 594.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.3 GPT Channel Use FTU Demo; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FTU", "reference", "point", "MCU", "FC7xxx", "clock", "create"]
- `anchor`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0081-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0081-001"
- `caption`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `physical_page`: `81`
- `printed_page`: `81`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `bbox`: `[36.0, 36.9, 559.3, 232.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.3 GPT Channel Use FTU Demo; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FC7xxx", "Configure", "general", "configurations", "Select", "which", "Right"]
- `anchor`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0081-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0081-002"
- `caption`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `physical_page`: `81`
- `printed_page`: `81`
- `section_path`: "Chapter 4 Configuration Guides / 4.3 GPT Channel Use FTU Demo"
- `bbox`: `[36.0, 307.76, 559.3, 618.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.3 GPT Channel Use FTU Demo; use the source PDF page for exact visual details."
- `keywords`: ["GPT", "FC7xxx", "Configure", "general", "configurations", "Select", "which", "Right"]
- `anchor`: "Image block near 4.3 GPT Channel Use FTU Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### REQ-SWS-GPT-00261
- `name`: "SWS_Gpt_00261"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Gpt_00261`."
- `anchors`:
  - `p7`: "Rejected Requirement 1 SWS_Gpt_00261"
- `aliases`: []

### REQ-SWS-GPT-00337
- `name`: "SWS_Gpt_00337"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Gpt_00337`."
- `anchors`:
  - `p7`: "Rejected Requirement 2 SWS_Gpt_00337"
- `aliases`: []

### REQ-SWS-GPT-00353
- `name`: "SWS_Gpt_00353"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Gpt_00353`."
- `anchors`:
  - `p7`: "Rejected Requirement 3 SWS_Gpt_00353"
- `aliases`: []

### REQ-SWS-GPT-00354
- `name`: "SWS_Gpt_00354"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Gpt_00354`."
- `anchors`:
  - `p7`: "Rejected Requirement 4 SWS_Gpt_00354"
- `aliases`: []

### REQ-SWS-GPT-00355
- `name`: "SWS_Gpt_00355"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Gpt_00355`."
- `anchors`:
  - `p7`: "Rejected Requirement 5 SWS_Gpt_00355"
- `aliases`: []

### REQ-SWS-GPT-00356
- `name`: "SWS_Gpt_00356"
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "requirement index entry for `SWS_Gpt_00356`."
- `anchors`:
  - `p7`: "Rejected Requirement 6 SWS_Gpt_00356"
- `aliases`: []

### API-GPT-LL-FTU-STARTPREDEFTIMER
- `name`: "Gpt_LL_Ftu_StartPredefTimer"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32,43,44,45,46,47,48`
- `brief`: "api index entry for `Gpt_LL_Ftu_StartPredefTimer`."
- `anchors`:
  - `p32`: "void Gpt_LL_Ftu_StartPredefTimer (Gpt_ModuleType eModule, uint8 u8Channel, boolean bDbgModeEnable,"
  - `p43`: "Gpt_LL_Ftu_DeInit(), Gpt_LL_Ftu_Init(), Gpt_LL_Ftu_StartPredefTimer(), Gpt_LL_Ftu_StartTimer(), and"
  - `p44`: "Gpt_LL_Ftu_Init(), and Gpt_LL_Ftu_StartPredefTimer()"
  - `p45`: "Gpt_LL_Ftu_StartPredefTimer(),"
  - `p46`: "Gpt_LL_Ftu_Init(), and Gpt_LL_Ftu_StartPredefTimer()"
- `aliases`: []

### API-GPT-LL-FTU-INIT
- `name`: "Gpt_LL_Ftu_Init"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32,43,44,45,46,47,48`
- `brief`: "api index entry for `Gpt_LL_Ftu_Init`."
- `anchors`:
  - `p32`: "Gpt_LL_Ftu_Init"
  - `p43`: "Gpt_LL_Ftu_DeInit(), Gpt_LL_Ftu_Init(), Gpt_LL_Ftu_StartPredefTimer(), Gpt_LL_Ftu_StartTimer(), and"
  - `p44`: "Gpt_LL_Ftu_Init(), and Gpt_LL_Ftu_StartPredefTimer()"
  - `p45`: "Gpt_LL_Ftu_Init(),"
  - `p46`: "Gpt_LL_Ftu_Init(), and Gpt_LL_Ftu_StartPredefTimer()"
- `aliases`: []

### API-GPT-LL-FTU-DEINIT
- `name`: "Gpt_LL_Ftu_DeInit"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31,43,44,45,47,48`
- `brief`: "api index entry for `Gpt_LL_Ftu_DeInit`."
- `anchors`:
  - `p31`: "void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p43`: "Gpt_LL_Ftu_DeInit(), Gpt_LL_Ftu_Init(), Gpt_LL_Ftu_StartPredefTimer(), Gpt_LL_Ftu_StartTimer(), and"
  - `p44`: "Gpt_LL_Ftu_DeInit(),"
  - `p45`: "Gpt_LL_Ftu_DeInit(),"
  - `p47`: "Gpt_LL_Ftu_DeInit(), Gpt_LL_Ftu_Init(), Gpt_LL_Ftu_StartPredefTimer(), Gpt_LL_Ftu_StartTimer(), and"
- `aliases`: []

### API-GPT-LL-FTU-STOPPREDEFTIMER
- `name`: "Gpt_LL_Ftu_StopPredefTimer"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32,43,44,45,47,48`
- `brief`: "api index entry for `Gpt_LL_Ftu_StopPredefTimer`."
- `anchors`:
  - `p32`: "void Gpt_LL_Ftu_StopPredefTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p43`: "Gpt_LL_Ftu_StopPredefTimer()"
  - `p44`: "Gpt_LL_Ftu_StopPredefTimer()"
  - `p45`: "Gpt_LL_Ftu_StopPredefTimer()"
  - `p47`: "Gpt_LL_Ftu_StopPredefTimer()"
- `aliases`: []

### API-GPT-SETMODE
- `name`: "Gpt_SetMode"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,22,24,25,26,69`
- `brief`: "api index entry for `Gpt_SetMode`."
- `anchors`:
  - `p9`: "API service ID for Gpt_SetMode function."
  - `p22`: "void Gpt_SetMode (Gpt_ModeType Mode)"
  - `p24`: "Gpt_DisableNotification(), Gpt_DisableWakeup(), and Gpt_SetMode()."
  - `p25`: "Gpt_GetTimeElapsed(), Gpt_GetTimeRemaining(), Gpt_SetMode(), and Gpt_StopTimer()"
  - `p26`: "Gpt_DeInit(), and Gpt_SetMode()"
- `aliases`: []

### API-GPT-HL-INIT
- `name`: "Gpt_HL_Init"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,27,29,32,34,35`
- `brief`: "api index entry for `Gpt_HL_Init`."
- `anchors`:
  - `p25`: "void Gpt_HL_Init (const Gpt_ConfigChannelType * pChannelConfig)"
  - `p27`: "Gpt_HL_Init()"
  - `p29`: "Gpt_HL_Init()"
  - `p32`: "Gpt_HL_Init()"
  - `p34`: "Gpt_HL_Init()"
- `aliases`: []

### API-GPT-HL-STARTTIMER
- `name`: "Gpt_HL_StartTimer"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,28,30,32,34,35`
- `brief`: "api index entry for `Gpt_HL_StartTimer`."
- `anchors`:
  - `p25`: "void Gpt_HL_StartTimer (const Gpt_ConfigChannelType * pChannelConfig, Gpt_ValueType u32Value)"
  - `p28`: "Gpt_HL_StartTimer()"
  - `p30`: "Gpt_HL_StartTimer()"
  - `p32`: "Gpt_HL_StartTimer()"
  - `p34`: "Gpt_HL_StartTimer()"
- `aliases`: []

### API-GPT-HL-GETTIMEELAPSED
- `name`: "Gpt_HL_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,27,29,31,34,35`
- `brief`: "api index entry for `Gpt_HL_GetTimeElapsed`."
- `anchors`:
  - `p25`: "Gpt_HL_GetTimeElapsed"
  - `p27`: "Gpt_HL_GetTimeElapsed()"
  - `p29`: "Gpt_HL_GetTimeElapsed()"
  - `p31`: "Gpt_HL_GetTimeElapsed()"
  - `p34`: "Gpt_HL_GetTimeElapsed()"
- `aliases`: []

### API-GPT-LL-AONTIMER-STARTPREDEFTIMER
- `name`: "Gpt_LL_Aontimer_StartPredefTimer"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,37,38,39,40`
- `brief`: "api index entry for `Gpt_LL_Aontimer_StartPredefTimer`."
- `anchors`:
  - `p27`: "Gpt_LL_Aontimer_StartPredefTimer"
  - `p37`: "Gpt_LL_Aontimer_StartPredefTimer()"
  - `p38`: "Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StopPredefTimer()"
  - `p39`: "Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StartTimer()"
  - `p40`: "Gpt_LL_Aontimer_Init(), and Gpt_LL_Aontimer_StartPredefTimer()"
- `aliases`: []

### API-GPT-LL-AONTIMER-INIT
- `name`: "Gpt_LL_Aontimer_Init"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,37,38,39,40`
- `brief`: "api index entry for `Gpt_LL_Aontimer_Init`."
- `anchors`:
  - `p27`: "void Gpt_LL_Aontimer_Init (const Gpt_ConfigChannelAontimerType *const pAontiemrConf)"
  - `p37`: "Gpt_LL_Aontimer_Init()"
  - `p38`: "Gpt_LL_Aontimer_Init(),"
  - `p39`: "Gpt_LL_Aontimer_Init(), and Gpt_LL_Aontimer_StartPredefTimer()"
  - `p40`: "Gpt_LL_Aontimer_Init(), and Gpt_LL_Aontimer_StartPredefTimer()"
- `aliases`: []

### API-GPT-LL-FCPIT-STARTPREDEFTIMER
- `name`: "Gpt_LL_FCPIT_StartPredefTimer"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29,40,41,42,43`
- `brief`: "api index entry for `Gpt_LL_FCPIT_StartPredefTimer`."
- `anchors`:
  - `p29`: "void Gpt_LL_FCPIT_StartPredefTimer (Gpt_FcpitChannelType eChannel, boolean bDbgModeEnable, uint32"
  - `p40`: "Gpt_LL_Fcpit_Init(), Gpt_LL_FCPIT_StartPredefTimer(), and Gpt_LL_FCPit_StopTimer()"
  - `p41`: "Gpt_LL_FCPIT_StartPredefTimer()"
  - `p42`: "Gpt_LL_Fcpit_Init(), and Gpt_LL_FCPIT_StartPredefTimer()"
  - `p43`: "Gpt_LL_FCPit_DeInit(), Gpt_LL_Fcpit_Init(), and Gpt_LL_FCPIT_StartPredefTimer()"
- `aliases`: []

### API-GPT-LL-FCPIT-INIT
- `name`: "Gpt_LL_Fcpit_Init"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29,40,41,42,43`
- `brief`: "api index entry for `Gpt_LL_Fcpit_Init`."
- `anchors`:
  - `p29`: "Gpt_LL_Fcpit_Init"
  - `p40`: "Gpt_LL_Fcpit_Init(), Gpt_LL_FCPIT_StartPredefTimer(), and Gpt_LL_FCPit_StopTimer()"
  - `p41`: "Gpt_LL_Fcpit_Init(),"
  - `p42`: "Gpt_LL_Fcpit_Init(), and Gpt_LL_FCPIT_StartPredefTimer()"
  - `p43`: "Gpt_LL_Fcpit_Init()"
- `aliases`: []

### API-GPT-LL-RTC-INIT
- `name`: "Gpt_LL_Rtc_Init"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34,48,49,50,51`
- `brief`: "api index entry for `Gpt_LL_Rtc_Init`."
- `anchors`:
  - `p34`: "void Gpt_LL_Rtc_Init (void )"
  - `p48`: "Gpt_LL_Rtc_Init()"
  - `p49`: "Gpt_LL_Rtc_Init()"
  - `p50`: "Gpt_LL_Rtc_EnableInterrupt(), and Gpt_LL_Rtc_Init()"
  - `p51`: "Gpt_LL_Rtc_Init()"
- `aliases`: []

### API-GPT-LL-RTC-STARTTIMER
- `name`: "Gpt_LL_Rtc_StartTimer"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34,48,49,50,51`
- `brief`: "api index entry for `Gpt_LL_Rtc_StartTimer`."
- `anchors`:
  - `p34`: "void Gpt_LL_Rtc_StartTimer (uint32 u32Value)"
  - `p48`: "Gpt_LL_Rtc_DisableInterrupt(), Gpt_LL_Rtc_Init(), Gpt_LL_Rtc_StartTimer(), and Gpt_LL_Rtc_StopTimer()"
  - `p49`: "Gpt_LL_Rtc_Init(), Gpt_LL_Rtc_StartTimer(), and Gpt_LL_Rtc_StopTimer()"
  - `p50`: "Gpt_LL_Rtc_GetTimeElapsed(), and Gpt_LL_Rtc_StartTimer()"
  - `p51`: "Gpt_LL_Rtc_StartTimer(),"
- `aliases`: []

### API-GPT-LL-TSTMP-STARTPREDEFTIMER
- `name`: "Gpt_LL_Tstmp_StartPredefTimer"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36,51,52,53,54`
- `brief`: "api index entry for `Gpt_LL_Tstmp_StartPredefTimer`."
- `anchors`:
  - `p36`: "void Gpt_LL_Tstmp_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)"
  - `p51`: "Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_GetTimeElapsed(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL"
  - `p52`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL_Tstmp_StartPred"
  - `p53`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL_Tstmp_StopPred"
  - `p54`: "Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL_Tstmp_St"
- `aliases`: []

### API-GPT-HL-DEINIT
- `name`: "Gpt_HL_DeInit"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,26,28,31,33`
- `brief`: "api index entry for `Gpt_HL_DeInit`."
- `anchors`:
  - `p24`: "void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
  - `p26`: "Gpt_HL_DeInit()"
  - `p28`: "Gpt_HL_DeInit()"
  - `p31`: "Gpt_HL_DeInit()"
  - `p33`: "Gpt_HL_DeInit()"
- `aliases`: []

### API-GPT-HL-GETPREDEFTIMERVALUE
- `name`: "Gpt_HL_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,27,29,31,36`
- `brief`: "api index entry for `Gpt_HL_GetPredefTimerValue`."
- `anchors`:
  - `p24`: "void Gpt_HL_GetPredefTimerValue (const Gpt_ConfigPredefChannelType * pChannelConfig, uint32 *"
  - `p27`: "Gpt_HL_GetPredefTimerValue()"
  - `p29`: "Gpt_HL_GetPredefTimerValue()"
  - `p31`: "Gpt_HL_GetPredefTimerValue()"
  - `p36`: "Gpt_HL_GetPredefTimerValue()"
- `aliases`: []

### API-GPT-HL-STARTPREDEFTIMER
- `name`: "Gpt_HL_StartPredefTimer"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,27,30,32,36`
- `brief`: "api index entry for `Gpt_HL_StartPredefTimer`."
- `anchors`:
  - `p25`: "void Gpt_HL_StartPredefTimer (const Gpt_ConfigType * pConfigPtr)"
  - `p27`: "Gpt_HL_StartPredefTimer()"
  - `p30`: "Gpt_HL_StartPredefTimer()"
  - `p32`: "Gpt_HL_StartPredefTimer()"
  - `p36`: "Gpt_HL_StartPredefTimer()"
- `aliases`: []

### API-GPT-HL-STOPPREDEFTIMER
- `name`: "Gpt_HL_StopPredefTimer"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26,28,30,33,36`
- `brief`: "api index entry for `Gpt_HL_StopPredefTimer`."
- `anchors`:
  - `p26`: "void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
  - `p28`: "Gpt_HL_StopPredefTimer()"
  - `p30`: "Gpt_HL_StopPredefTimer()"
  - `p33`: "Gpt_HL_StopPredefTimer()"
  - `p36`: "Gpt_HL_StopPredefTimer()"
- `aliases`: []

### API-GPT-HL-STOPTIMER
- `name`: "Gpt_HL_StopTimer"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26,28,30,33,34`
- `brief`: "api index entry for `Gpt_HL_StopTimer`."
- `anchors`:
  - `p26`: "void Gpt_HL_StopTimer (const Gpt_ConfigChannelType * pChannelConfig)"
  - `p28`: "Gpt_HL_StopTimer()"
  - `p30`: "Gpt_HL_StopTimer()"
  - `p33`: "Gpt_HL_StopTimer()"
  - `p34`: "Gpt_HL_StopTimer()"
- `aliases`: []

### API-GPT-INIT
- `name`: "Gpt_Init"
- `type`: `api`
- `primary_page`: `4`
- `physical_pages`: `4,9,21,25,55`
- `brief`: "api index entry for `Gpt_Init`."
- `anchors`:
  - `p4`: "2.10.1 Gpt_Init ...........................................................................................................................…"
  - `p9`: "Function called with invalid the parameter in function Gpt_Init."
  - `p21`: "void Gpt_Init (const Gpt_ConfigType * ConfigPtr)"
  - `p25`: "Gpt_Init()"
  - `p55`: "Gpt_Init"
- `aliases`: []

### API-GPT-LL-RTC-STOPTIMER
- `name`: "Gpt_LL_Rtc_StopTimer"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34,48,49,50,51`
- `brief`: "api index entry for `Gpt_LL_Rtc_StopTimer`."
- `anchors`:
  - `p34`: "void Gpt_LL_Rtc_StopTimer (void )"
  - `p48`: "Gpt_LL_Rtc_DisableInterrupt(), Gpt_LL_Rtc_Init(), Gpt_LL_Rtc_StartTimer(), and Gpt_LL_Rtc_StopTimer()"
  - `p49`: "Gpt_LL_Rtc_Init(), Gpt_LL_Rtc_StartTimer(), and Gpt_LL_Rtc_StopTimer()"
  - `p50`: "Gpt_LL_Rtc_StopTimer()"
  - `p51`: "Gpt_LL_Rtc_StopTimer()"
- `aliases`: []

### API-GPT-DEINIT
- `name`: "Gpt_DeInit"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,19,24,26,68`
- `brief`: "api index entry for `Gpt_DeInit`."
- `anchors`:
  - `p9`: "API service ID for Gpt_DeInit function."
  - `p19`: "void Gpt_DeInit (void )"
  - `p24`: "Gpt_DeInit()"
  - `p26`: "Gpt_DeInit(), and Gpt_SetMode()"
  - `p68`: "Add/Remove the service Gpt_DeInit() from the code."
- `aliases`: []

### API-GPT-STARTTIMER
- `name`: "Gpt_StartTimer"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,9,22,24,26`
- `brief`: "api index entry for `Gpt_StartTimer`."
- `anchors`:
  - `p8`: "Function Gpt_StartTimer is called when the driver is in sleep mode for a channel which is not wakeup enabled."
  - `p9`: "API service ID for Gpt_StartTimer function."
  - `p22`: "void Gpt_StartTimer (Gpt_ChannelType Channel, Gpt_ValueType Value)"
  - `p24`: "Gpt_EnableNotification(), Gpt_EnableWakeup(), Gpt_SetMode(), and Gpt_StartTimer()."
  - `p26`: "Gpt_StartTimer()"
- `aliases`: []

### API-GPT-LL-FCPIT-DEINIT
- `name`: "Gpt_LL_FCPit_DeInit"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,40,41,43`
- `brief`: "api index entry for `Gpt_LL_FCPit_DeInit`."
- `anchors`:
  - `p28`: "void Gpt_LL_FCPit_DeInit (Gpt_FcpitChannelType eChannel)"
  - `p40`: "Gpt_LL_FCPit_DeInit(),"
  - `p41`: "Gpt_LL_FCPit_DeInit(),"
  - `p43`: "Gpt_LL_FCPit_DeInit(), Gpt_LL_Fcpit_Init(), and Gpt_LL_FCPIT_StartPredefTimer()"
- `aliases`: []

### API-GPT-LL-TSTMP-DEINIT
- `name`: "Gpt_LL_Tstmp_DeInit"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35,52,53,54`
- `brief`: "api index entry for `Gpt_LL_Tstmp_DeInit`."
- `anchors`:
  - `p35`: "void Gpt_LL_Tstmp_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p52`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
  - `p53`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
  - `p54`: "Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL_Tstmp_St"
- `aliases`: []

### API-GPT-LL-FTU-STARTTIMER
- `name`: "Gpt_LL_Ftu_StartTimer"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32,43,46,47`
- `brief`: "api index entry for `Gpt_LL_Ftu_StartTimer`."
- `anchors`:
  - `p32`: "void Gpt_LL_Ftu_StartTimer (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
  - `p43`: "Gpt_LL_Ftu_DeInit(), Gpt_LL_Ftu_Init(), Gpt_LL_Ftu_StartPredefTimer(), Gpt_LL_Ftu_StartTimer(), and"
  - `p46`: "Gpt_LL_Ftu_StartTimer()"
  - `p47`: "Gpt_LL_Ftu_GetPredefTimerValue(), Gpt_LL_Ftu_GetTimeElapsed(), and Gpt_LL_Ftu_StartTimer()"
- `aliases`: []

### API-GPT-LL-AONTIMER-GETTIMEELAPSED
- `name`: "Gpt_LL_Aontimer_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,37,39,40`
- `brief`: "api index entry for `Gpt_LL_Aontimer_GetTimeElapsed`."
- `anchors`:
  - `p27`: "uint32 Gpt_LL_Aontimer_GetTimeElapsed (boolean * pbReturnChannelRollover, uint32 * pu32TargetValue)"
  - `p37`: "Gpt_LL_Aontimer_GetTimeElapsed()"
  - `p39`: "Gpt_LL_Aontimer_GetTimeElapsed()"
  - `p40`: "Gpt_LL_Aontimer_GetPredefTimerValue(), and Gpt_LL_Aontimer_GetTimeElapsed()"
- `aliases`: []

### API-GPT-LL-RTC-ENABLEINTERRUPT
- `name`: "Gpt_LL_Rtc_EnableInterrupt"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33,49,50,51`
- `brief`: "api index entry for `Gpt_LL_Rtc_EnableInterrupt`."
- `anchors`:
  - `p33`: "void Gpt_LL_Rtc_EnableInterrupt (void )"
  - `p49`: "Gpt_LL_Rtc_EnableInterrupt(), and Gpt_LL_Rtc_StartTimer()"
  - `p50`: "Gpt_LL_Rtc_EnableInterrupt(), and Gpt_LL_Rtc_Init()"
  - `p51`: "Gpt_LL_Rtc_EnableInterrupt(),"
- `aliases`: []

### API-GPT-LL-TSTMP-STARTTIMER
- `name`: "Gpt_LL_Tstmp_StartTimer"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35,51,52,54`
- `brief`: "api index entry for `Gpt_LL_Tstmp_StartTimer`."
- `anchors`:
  - `p35`: "void Gpt_LL_Tstmp_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
  - `p51`: "Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_GetTimeElapsed(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL"
  - `p52`: "Gpt_LL_Tstmp_StartTimer()"
  - `p54`: "Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL_Tstmp_St"
- `aliases`: []

### API-GPT-HL-DISABLEINTERRUPT
- `name`: "Gpt_HL_DisableInterrupt"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,26,28,33`
- `brief`: "api index entry for `Gpt_HL_DisableInterrupt`."
- `anchors`:
  - `p24`: "void Gpt_HL_DisableInterrupt (const Gpt_ConfigChannelType * pChannelConfig)"
  - `p26`: "Gpt_HL_DisableInterrupt()"
  - `p28`: "Gpt_HL_DisableInterrupt()"
  - `p33`: "Gpt_HL_DisableInterrupt()"
- `aliases`: []

### API-GPT-HL-ENABLEINTERRUPT
- `name`: "Gpt_HL_EnableInterrupt"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24,27,29,33`
- `brief`: "api index entry for `Gpt_HL_EnableInterrupt`."
- `anchors`:
  - `p24`: "void Gpt_HL_EnableInterrupt (const Gpt_ConfigChannelType * pChannelConfig)"
  - `p27`: "Gpt_HL_EnableInterrupt()"
  - `p29`: "Gpt_HL_EnableInterrupt()"
  - `p33`: "Gpt_HL_EnableInterrupt()"
- `aliases`: []

### API-GPT-LL-AONTIMER-ENABLEINTERRUPT
- `name`: "Gpt_LL_Aontimer_EnableInterrupt"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26,36,37,38`
- `brief`: "api index entry for `Gpt_LL_Aontimer_EnableInterrupt`."
- `anchors`:
  - `p26`: "void Gpt_LL_Aontimer_EnableInterrupt (void )"
  - `p36`: "Gpt_LL_Aontimer_EnableInterrupt()"
  - `p37`: "Gpt_LL_Aontimer_EnableInterrupt(),"
  - `p38`: "Gpt_LL_Aontimer_EnableInterrupt()."
- `aliases`: []

### API-GPT-LL-FCPIT-STARTTIMER
- `name`: "Gpt_LL_FCPit_StartTimer"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30,40,41,43`
- `brief`: "api index entry for `Gpt_LL_FCPit_StartTimer`."
- `anchors`:
  - `p30`: "void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
  - `p40`: "Gpt_LL_FCPit_StartTimer(),"
  - `p41`: "Gpt_LL_FCPIT_StartPredefTimer(), and Gpt_LL_FCPit_StartTimer()"
  - `p43`: "Gpt_LL_Fcpit_Init(), Gpt_LL_FCPIT_StartPredefTimer(), and Gpt_LL_FCPit_StartTimer()"
- `aliases`: []

### API-GPT-LL-RTC-DISABLEINTERRUPT
- `name`: "Gpt_LL_Rtc_DisableInterrupt"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33,48,50,51`
- `brief`: "api index entry for `Gpt_LL_Rtc_DisableInterrupt`."
- `anchors`:
  - `p33`: "void Gpt_LL_Rtc_DisableInterrupt (void )"
  - `p48`: "Gpt_LL_Rtc_DisableInterrupt(), Gpt_LL_Rtc_Init(), Gpt_LL_Rtc_StartTimer(), and Gpt_LL_Rtc_StopTimer()"
  - `p50`: "Gpt_LL_Rtc_DisableInterrupt(),"
  - `p51`: "Gpt_LL_Rtc_DisableInterrupt(),"
- `aliases`: []

### API-GPT-LL-TSTMP-GETTIMEELAPSED
- `name`: "Gpt_LL_Tstmp_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35,51,53,54`
- `brief`: "api index entry for `Gpt_LL_Tstmp_GetTimeElapsed`."
- `anchors`:
  - `p35`: "Gpt_LL_Tstmp_GetTimeElapsed(Gpt_ModuleType"
  - `p51`: "Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_GetTimeElapsed(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL"
  - `p53`: "Gpt_LL_Tstmp_GetTimeElapsed(),TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
  - `p54`: "Gpt_LL_Tstmp_GetTimeElapsed()"
- `aliases`: []

### API-GPT-DISABLEWAKEUP
- `name`: "Gpt_DisableWakeup"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,19,24,69`
- `brief`: "api index entry for `Gpt_DisableWakeup`."
- `anchors`:
  - `p9`: "API service ID for Gpt_DisableWakeup function."
  - `p19`: "void Gpt_DisableWakeup (Gpt_ChannelType Channel)"
  - `p24`: "Gpt_DisableNotification(), Gpt_DisableWakeup(), and Gpt_SetMode()."
  - `p69`: "Gpt_DisableWakeup()"
- `aliases`: []

### API-GPT-ENABLEWAKEUP
- `name`: "Gpt_EnableWakeup"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,20,24,69`
- `brief`: "api index entry for `Gpt_EnableWakeup`."
- `anchors`:
  - `p10`: "API service ID for Gpt_EnableWakeup function."
  - `p20`: "void Gpt_EnableWakeup (Gpt_ChannelType Channel)"
  - `p24`: "Gpt_EnableNotification(), Gpt_EnableWakeup(), Gpt_SetMode(), and Gpt_StartTimer()."
  - `p69`: "Gpt_EnableWakeup()"
- `aliases`: []

### API-GPT-GETPREDEFTIMERVALUE
- `name`: "Gpt_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,10,20,24`
- `brief`: "api index entry for `Gpt_GetPredefTimerValue`."
- `anchors`:
  - `p8`: "Function called with invalid the parameter in function Gpt_GetPredefTimerValue."
  - `p10`: "API service ID for Gpt_GetPredefTimerValue function."
  - `p20`: "Std_ReturnType Gpt_GetPredefTimerValue (Gpt_PredefTimerType PredefTimer, uint32 * TimeValuePtr)"
  - `p24`: "Gpt_GetPredefTimerValue()"
- `aliases`: []

### API-GPT-GETTIMEELAPSED
- `name`: "Gpt_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,21,25,69`
- `brief`: "api index entry for `Gpt_GetTimeElapsed`."
- `anchors`:
  - `p9`: "API service ID for Gpt_GetTimeElapsed function."
  - `p21`: "Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
  - `p25`: "Gpt_GetTimeElapsed(), Gpt_GetTimeRemaining(), Gpt_SetMode(), and Gpt_StopTimer()"
  - `p69`: "Add/Remove the service Gpt_GetTimeElapsed() from the code."
- `aliases`: []

### API-GPT-GETTIMEREMAINING
- `name`: "Gpt_GetTimeRemaining"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,21,25,69`
- `brief`: "api index entry for `Gpt_GetTimeRemaining`."
- `anchors`:
  - `p9`: "API service ID for Gpt_GetTimeRemaining function."
  - `p21`: "Gpt_ValueType Gpt_GetTimeRemaining (Gpt_ChannelType Channel)"
  - `p25`: "Gpt_GetTimeElapsed(), Gpt_GetTimeRemaining(), Gpt_SetMode(), and Gpt_StopTimer()"
  - `p69`: "Add/Remove the service Gpt_GetTimeRemaining() from the code."
- `aliases`: []

### API-GPT-STARTGLOBALTIME
- `name`: "Gpt_StartGlobalTime"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,18,25,72`
- `brief`: "api index entry for `Gpt_StartGlobalTime`."
- `anchors`:
  - `p10`: "API service ID for Gpt_StartGlobalTime function."
  - `p18`: "void Gpt_StartGlobalTime( const uint32 u32Group)"
  - `p25`: "Gpt_StartGlobalTime (), and Gpt_StopGlobalTime ()"
  - `p72`: "won't start before calling Gpt_StartGlobalTime()."
- `aliases`: []

### API-GPT-STOPTIMER
- `name`: "Gpt_StopTimer"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,23,25,26`
- `brief`: "api index entry for `Gpt_StopTimer`."
- `anchors`:
  - `p9`: "API service ID for Gpt_StopTimer function."
  - `p23`: "void Gpt_StopTimer (Gpt_ChannelType Channel)"
  - `p25`: "Gpt_GetTimeElapsed(), Gpt_GetTimeRemaining(), Gpt_SetMode(), and Gpt_StopTimer()"
  - `p26`: "Gpt_ProcessCommonInterrupt(), Gpt_SetMode(), and Gpt_StopTimer()"
- `aliases`: []

### API-GPT-LL-TSTMP-INIT
- `name`: "Gpt_LL_Tstmp_Init"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34,52,53`
- `brief`: "api index entry for `Gpt_LL_Tstmp_Init`."
- `anchors`:
  - `p34`: "void Gpt_LL_Tstmp_Init(Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p52`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
  - `p53`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
- `aliases`: []

### API-GPT-LL-AONTIMER-DEINIT
- `name`: "Gpt_LL_Aontimer_DeInit"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26,37,38`
- `brief`: "api index entry for `Gpt_LL_Aontimer_DeInit`."
- `anchors`:
  - `p26`: "void Gpt_LL_Aontimer_DeInit (void )"
  - `p37`: "Gpt_LL_Aontimer_DeInit(),"
  - `p38`: "Gpt_LL_Aontimer_DeInit(),"
- `aliases`: []

### API-GPT-LL-AONTIMER-STARTTIMER
- `name`: "Gpt_LL_Aontimer_StartTimer"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,38,39`
- `brief`: "api index entry for `Gpt_LL_Aontimer_StartTimer`."
- `anchors`:
  - `p27`: "void Gpt_LL_Aontimer_StartTimer (uint16 u16Value)"
  - `p38`: "Gpt_LL_Aontimer_StartTimer(), Gpt_LL_Aontimer_StopPredefTimer(), and Gpt_LL_Aontimer_StopTimer()"
  - `p39`: "Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StartTimer()"
- `aliases`: []

### API-GPT-LL-AONTIMER-STOPPREDEFTIMER
- `name`: "Gpt_LL_Aontimer_StopPredefTimer"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,37,38`
- `brief`: "api index entry for `Gpt_LL_Aontimer_StopPredefTimer`."
- `anchors`:
  - `p28`: "void Gpt_LL_Aontimer_StopPredefTimer (void )"
  - `p37`: "Gpt_LL_Aontimer_Init(), Gpt_LL_Aontimer_StopPredefTimer(), and Gpt_LL_Aontimer_StopTimer()"
  - `p38`: "Gpt_LL_Aontimer_StartPredefTimer(), and Gpt_LL_Aontimer_StopPredefTimer()"
- `aliases`: []

### API-GPT-LL-FTU-GETTIMEELAPSED
- `name`: "Gpt_LL_Ftu_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31,46,47`
- `brief`: "api index entry for `Gpt_LL_Ftu_GetTimeElapsed`."
- `anchors`:
  - `p31`: "Gpt_LL_Ftu_GetTimeElapsed"
  - `p46`: "Gpt_LL_Ftu_GetTimeElapsed(), and Gpt_LL_Ftu_StartTimer()"
  - `p47`: "Gpt_LL_Ftu_GetTimeElapsed()."
- `aliases`: []

### API-GPT-LL-RTC-GETTIMEELAPSED
- `name`: "Gpt_LL_Rtc_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33,49,50`
- `brief`: "api index entry for `Gpt_LL_Rtc_GetTimeElapsed`."
- `anchors`:
  - `p33`: "uint32 Gpt_LL_Rtc_GetTimeElapsed (boolean * pReturnChannelRollover, uint32 * pTargetValue)"
  - `p49`: "Gpt_LL_Rtc_GetTimeElapsed()"
  - `p50`: "Gpt_LL_Rtc_GetTimeElapsed(), and Gpt_LL_Rtc_StartTimer()"
- `aliases`: []

### API-GPT-LL-TSTMP-STOPPREDEFTIMER
- `name`: "Gpt_LL_Tstmp_StopPredefTimer"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36,52,53`
- `brief`: "api index entry for `Gpt_LL_Tstmp_StopPredefTimer`."
- `anchors`:
  - `p36`: "void Gpt_LL_Tstmp_StopPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p52`: "r(),Gpt_LL_Tstmp_StopPredefTimer()"
  - `p53`: "r(),Gpt_LL_Tstmp_StopPredefTimer()"
- `aliases`: []

### API-GPT-LL-AONTIMER-DISABLEINTERRUPT
- `name`: "Gpt_LL_Aontimer_DisableInterrupt"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26,37,38`
- `brief`: "api index entry for `Gpt_LL_Aontimer_DisableInterrupt`."
- `anchors`:
  - `p26`: "void Gpt_LL_Aontimer_DisableInterrupt (void )"
  - `p37`: "Gpt_LL_Aontimer_DisableInterrupt(),"
  - `p38`: "Gpt_LL_Aontimer_DisableInterrupt(),"
- `aliases`: []

### API-GPT-LL-AONTIMER-GETPREDEFTIMERVALUE
- `name`: "Gpt_LL_Aontimer_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,39,40`
- `brief`: "api index entry for `Gpt_LL_Aontimer_GetPredefTimerValue`."
- `anchors`:
  - `p27`: "uint32 Gpt_LL_Aontimer_GetPredefTimerValue (void )"
  - `p39`: "Gpt_LL_Aontimer_GetPredefTimerValue(), and Gpt_LL_Aontimer_GetTimeElapsed()"
  - `p40`: "Gpt_LL_Aontimer_GetPredefTimerValue(), and Gpt_LL_Aontimer_GetTimeElapsed()"
- `aliases`: []

### API-GPT-LL-AONTIMER-STOPTIMER
- `name`: "Gpt_LL_Aontimer_StopTimer"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,37,38`
- `brief`: "api index entry for `Gpt_LL_Aontimer_StopTimer`."
- `anchors`:
  - `p28`: "void Gpt_LL_Aontimer_StopTimer (void )"
  - `p37`: "Gpt_LL_Aontimer_Init(), Gpt_LL_Aontimer_StopPredefTimer(), and Gpt_LL_Aontimer_StopTimer()"
  - `p38`: "Gpt_LL_Aontimer_StartTimer(), Gpt_LL_Aontimer_StopPredefTimer(), and Gpt_LL_Aontimer_StopTimer()"
- `aliases`: []

### API-GPT-LL-FCPIT-DISABLEINTERRUPT
- `name`: "Gpt_LL_FCPIT_DisableInterrupt"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,40,41`
- `brief`: "api index entry for `Gpt_LL_FCPIT_DisableInterrupt`."
- `anchors`:
  - `p28`: "void Gpt_LL_FCPIT_DisableInterrupt (Gpt_FcpitChannelType eChannel)"
  - `p40`: "Gpt_LL_FCPIT_DisableInterrupt(),"
  - `p41`: "Gpt_LL_FCPIT_DisableInterrupt(),"
- `aliases`: []

### API-GPT-LL-FCPIT-ENABLEINTERRUPT
- `name`: "Gpt_LL_FCPit_EnableInterrupt"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,40,41`
- `brief`: "api index entry for `Gpt_LL_FCPit_EnableInterrupt`."
- `anchors`:
  - `p28`: "void Gpt_LL_FCPit_EnableInterrupt (Gpt_FcpitChannelType eChannel)"
  - `p40`: "Gpt_LL_FCPit_EnableInterrupt(),"
  - `p41`: "Gpt_LL_FCPit_EnableInterrupt()"
- `aliases`: []

### API-GPT-LL-FCPIT-STOPTIMER
- `name`: "Gpt_LL_FCPit_StopTimer"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30,40,41`
- `brief`: "api index entry for `Gpt_LL_FCPit_StopTimer`."
- `anchors`:
  - `p30`: "void Gpt_LL_FCPit_StopTimer (Gpt_FcpitChannelType eChannel)"
  - `p40`: "Gpt_LL_Fcpit_Init(), Gpt_LL_FCPIT_StartPredefTimer(), and Gpt_LL_FCPit_StopTimer()"
  - `p41`: "Gpt_LL_FCPIT_StopPredefTimer(), and Gpt_LL_FCPit_StopTimer()"
- `aliases`: []

### API-GPT-LL-TSTMP-STOPTIMER
- `name`: "Gpt_LL_Tstmp_StopTimer"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35,52,53`
- `brief`: "api index entry for `Gpt_LL_Tstmp_StopTimer`."
- `anchors`:
  - `p35`: "void Gpt_LL_Tstmp_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p52`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
  - `p53`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
- `aliases`: []

### API-GPT-CHANGENEXTTIMEOUTVALUE
- `name`: "Gpt_ChangeNextTimeoutValue"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,18,24`
- `brief`: "api index entry for `Gpt_ChangeNextTimeoutValue`."
- `anchors`:
  - `p10`: "API service ID for Gpt_ChangeNextTimeoutValue function."
  - `p18`: "void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
  - `p24`: "Gpt_ChangeNextTimeoutValue()."
- `aliases`: []

### API-GPT-DISABLENOTIFICATION
- `name`: "Gpt_DisableNotification"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,19,24`
- `brief`: "api index entry for `Gpt_DisableNotification`."
- `anchors`:
  - `p9`: "API service ID for Gpt_DisableNotification function."
  - `p19`: "void Gpt_DisableNotification (Gpt_ChannelType Channel)"
  - `p24`: "Gpt_DisableNotification(), Gpt_DisableWakeup(), and Gpt_SetMode()."
- `aliases`: []

### API-GPT-ENABLENOTIFICATION
- `name`: "Gpt_EnableNotification"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,20,24`
- `brief`: "api index entry for `Gpt_EnableNotification`."
- `anchors`:
  - `p9`: "API service ID for Gpt_EnableNotification function."
  - `p20`: "void Gpt_EnableNotification (Gpt_ChannelType Channel)"
  - `p24`: "Gpt_EnableNotification(), Gpt_EnableWakeup(), Gpt_SetMode(), and Gpt_StartTimer()."
- `aliases`: []

### API-GPT-GETVERSIONINFO
- `name`: "Gpt_GetVersionInfo"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,21,69`
- `brief`: "api index entry for `Gpt_GetVersionInfo`."
- `anchors`:
  - `p9`: "API service ID for Gpt_GetVersionInfo function."
  - `p21`: "void Gpt_GetVersionInfo (Std_VersionInfoType * VersionInfoPtr)"
  - `p69`: "Add/Remove the service Gpt_GetVersionInfo() from the code."
- `aliases`: []

### API-GPT-PROCESSCOMMONINTERRUPT
- `name`: "Gpt_ProcessCommonInterrupt"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,23,26`
- `brief`: "api index entry for `Gpt_ProcessCommonInterrupt`."
- `anchors`:
  - `p10`: "API service ID for Gpt_ProcessCommonInterrupt generic ISR handler."
  - `p23`: "void Gpt_ProcessCommonInterrupt (uint8 u8MapTableIndex)"
  - `p26`: "Gpt_ProcessCommonInterrupt(), Gpt_SetMode(), and Gpt_StopTimer()"
- `aliases`: []

### API-GPT-STOPGLOBALTIME
- `name`: "Gpt_StopGlobalTime"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,18,25`
- `brief`: "api index entry for `Gpt_StopGlobalTime`."
- `anchors`:
  - `p10`: "API service ID for Gpt_StopGlobalTime function."
  - `p18`: "void Gpt_StopGlobalTime( const uint32 u32Group)"
  - `p25`: "Gpt_StartGlobalTime (), and Gpt_StopGlobalTime ()"
- `aliases`: []

### API-GPT-LL-FCPIT-GETTIMEELAPSED
- `name`: "Gpt_LL_FCPit_GetTimeElapsed"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29,42`
- `brief`: "api index entry for `Gpt_LL_FCPit_GetTimeElapsed`."
- `anchors`:
  - `p29`: "uint32 Gpt_LL_FCPit_GetTimeElapsed (Gpt_FcpitChannelType eChannel, boolean * pbReturnChannelRollover,"
  - `p42`: "Gpt_LL_FCPIT_GetPredefTimerValue(), and Gpt_LL_FCPit_GetTimeElapsed()"
- `aliases`: []

### API-TSTMP-HWA-SETMODCOUNTERMODE
- `name`: "TSTMP_HWA_SetModCounterMode"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52,53`
- `brief`: "api index entry for `TSTMP_HWA_SetModCounterMode`."
- `anchors`:
  - `p52`: "TSTMP_HWA_SetModCounterMode(TSTMP_Type"
  - `p53`: "TSTMP_HWA_SetModCounterMode(TSTMP_Type"
- `aliases`: []

### API-GPT-HL-CHANGENEXTTIMEOUTVALUE
- `name`: "Gpt_HL_ChangeNextTimeoutValue"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23,31`
- `brief`: "api index entry for `Gpt_HL_ChangeNextTimeoutValue`."
- `anchors`:
  - `p23`: "Gpt_HL_ChangeNextTimeoutValue"
  - `p31`: "Gpt_HL_ChangeNextTimeoutValue()"
- `aliases`: []

### API-GPT-HW-CONFIGGTB
- `name`: "Gpt_HW_ConfigGTB"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,31`
- `brief`: "api index entry for `Gpt_HW_ConfigGTB`."
- `anchors`:
  - `p25`: "void Gpt_HW_ConfigGTB( const uint32 u32Group,boolean benable)"
  - `p31`: "Gpt_HW_ConfigGTB ()"
- `aliases`: []

### API-GPT-LL-FCPIT-GETPREDEFTIMERVALUE
- `name`: "Gpt_LL_FCPIT_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29,42`
- `brief`: "api index entry for `Gpt_LL_FCPIT_GetPredefTimerValue`."
- `anchors`:
  - `p29`: "uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
  - `p42`: "Gpt_LL_FCPIT_GetPredefTimerValue(), and Gpt_LL_FCPit_GetTimeElapsed()"
- `aliases`: []

### API-GPT-LL-FCPIT-STOPPREDEFTIMER
- `name`: "Gpt_LL_FCPIT_StopPredefTimer"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30,41`
- `brief`: "api index entry for `Gpt_LL_FCPIT_StopPredefTimer`."
- `anchors`:
  - `p30`: "void Gpt_LL_FCPIT_StopPredefTimer (Gpt_FcpitChannelType eChannel)"
  - `p41`: "Gpt_LL_FCPIT_StopPredefTimer(), and Gpt_LL_FCPit_StopTimer()"
- `aliases`: []

### API-GPT-LL-FTU-GETPREDEFTIMERVALUE
- `name`: "Gpt_LL_Ftu_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31,47`
- `brief`: "api index entry for `Gpt_LL_Ftu_GetPredefTimerValue`."
- `anchors`:
  - `p31`: "uint32 Gpt_LL_Ftu_GetPredefTimerValue (Gpt_ModuleType eModule)"
  - `p47`: "Gpt_LL_Ftu_GetPredefTimerValue(), Gpt_LL_Ftu_GetTimeElapsed(), and Gpt_LL_Ftu_StartTimer()"
- `aliases`: []

### API-GPT-LL-FTU-STOPTIMER
- `name`: "Gpt_LL_Ftu_StopTimer"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33,45`
- `brief`: "api index entry for `Gpt_LL_Ftu_StopTimer`."
- `anchors`:
  - `p33`: "void Gpt_LL_Ftu_StopTimer (Gpt_ModuleType eModule, uint8 u8Channel)"
  - `p45`: "and Gpt_LL_Ftu_StopTimer()"
- `aliases`: []

### API-GPT-LL-RTC-DEINIT
- `name`: "Gpt_LL_Rtc_DeInit"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33,50`
- `brief`: "api index entry for `Gpt_LL_Rtc_DeInit`."
- `anchors`:
  - `p33`: "void Gpt_LL_Rtc_DeInit (void )"
  - `p50`: "Gpt_LL_Rtc_DeInit()"
- `aliases`: []

### API-GPT-CHECKWAKEUP
- `name`: "Gpt_CheckWakeup"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,18`
- `brief`: "api index entry for `Gpt_CheckWakeup`."
- `anchors`:
  - `p10`: "API service ID for Gpt_CheckWakeup function."
  - `p18`: "void Gpt_CheckWakeup (EcuM_WakeupSourceType WakeupSource)"
- `aliases`: []

### API-GPT-TSTMP-PROCESSINTERRUPT
- `name`: "Gpt_Tstmp_ProcessInterrupt"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53,54`
- `brief`: "api index entry for `Gpt_Tstmp_ProcessInterrupt`."
- `anchors`:
  - `p53`: "efTimer(),Gpt_Tstmp_ProcessInterrupt(),TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
  - `p54`: "Gpt_Tstmp_ProcessInterrupt()"
- `aliases`: []

### API-EFTIMER
- `name`: "efTimer"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52,53`
- `brief`: "api index entry for `efTimer`."
- `anchors`:
  - `p52`: "r(),Gpt_LL_Tstmp_StopPredefTimer()"
  - `p53`: "r(),Gpt_LL_Tstmp_StopPredefTimer()"
- `aliases`: []

### API-AONTIMER-HWA-CHECKINTENABLESTATE
- `name`: "AONTIMER_HWA_CheckIntEnableState"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `AONTIMER_HWA_CheckIntEnableState`."
- `anchors`:
  - `p36`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntEnableState (void )"
- `aliases`: []

### API-AONTIMER-HWA-CHECKINTFLAG
- `name`: "AONTIMER_HWA_CheckIntFlag"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `AONTIMER_HWA_CheckIntFlag`."
- `anchors`:
  - `p37`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
- `aliases`: []

### API-AONTIMER-HWA-CHECKINTFLAGANDENABLE
- `name`: "AONTIMER_HWA_CheckIntFlagAndEnable"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `AONTIMER_HWA_CheckIntFlagAndEnable`."
- `anchors`:
  - `p37`: "LOCAL_INLINE boolean AONTIMER_HWA_CheckIntFlagAndEnable (void )"
- `aliases`: []

### API-AONTIMER-HWA-CLEARINTERRUPTFLAG
- `name`: "AONTIMER_HWA_ClearInterruptFlag"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `AONTIMER_HWA_ClearInterruptFlag`."
- `anchors`:
  - `p37`: "LOCAL_INLINE void AONTIMER_HWA_ClearInterruptFlag (void )"
- `aliases`: []

### API-AONTIMER-HWA-CONFIGMODULEPRESCALE
- `name`: "AONTIMER_HWA_ConfigModulePrescale"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `AONTIMER_HWA_ConfigModulePrescale`."
- `anchors`:
  - `p37`: "LOCAL_INLINE void AONTIMER_HWA_ConfigModulePrescale (uint32 u32RegValue)"
- `aliases`: []

### API-AONTIMER-HWA-DISABLEBYPASSMODE
- `name`: "AONTIMER_HWA_DisableBypassMode"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `AONTIMER_HWA_DisableBypassMode`."
- `anchors`:
  - `p37`: "LOCAL_INLINE void AONTIMER_HWA_DisableBypassMode (void )"
- `aliases`: []

### API-AONTIMER-HWA-DISABLEMODULEINTERRUPT
- `name`: "AONTIMER_HWA_DisableModuleInterrupt"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `AONTIMER_HWA_DisableModuleInterrupt`."
- `anchors`:
  - `p37`: "LOCAL_INLINE void AONTIMER_HWA_DisableModuleInterrupt (void )"
- `aliases`: []

### API-AONTIMER-HWA-DISABLEPULSEMODE
- `name`: "AONTIMER_HWA_DisablePulseMode"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "api index entry for `AONTIMER_HWA_DisablePulseMode`."
- `anchors`:
  - `p38`: "LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
- `aliases`: []

### API-AONTIMER-HWA-DISABLETIMER
- `name`: "AONTIMER_HWA_DisableTimer"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "api index entry for `AONTIMER_HWA_DisableTimer`."
- `anchors`:
  - `p38`: "LOCAL_INLINE void AONTIMER_HWA_DisableTimer (void )"
- `aliases`: []

### API-AONTIMER-HWA-ENABLEBYPASSMODE
- `name`: "AONTIMER_HWA_EnableBypassMode"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "api index entry for `AONTIMER_HWA_EnableBypassMode`."
- `anchors`:
  - `p38`: "LOCAL_INLINE void AONTIMER_HWA_EnableBypassMode (void )"
- `aliases`: []

### API-AONTIMER-HWA-ENABLEMODULEINTERRUPT
- `name`: "AONTIMER_HWA_EnableModuleInterrupt"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "api index entry for `AONTIMER_HWA_EnableModuleInterrupt`."
- `anchors`:
  - `p38`: "LOCAL_INLINE void AONTIMER_HWA_EnableModuleInterrupt (void )"
- `aliases`: []

### API-AONTIMER-HWA-ENABLETIMER
- `name`: "AONTIMER_HWA_EnableTimer"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "api index entry for `AONTIMER_HWA_EnableTimer`."
- `anchors`:
  - `p38`: "LOCAL_INLINE void AONTIMER_HWA_EnableTimer (void )"
- `aliases`: []

### API-AONTIMER-HWA-READCOMPAREVALUE
- `name`: "AONTIMER_HWA_ReadCompareValue"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `AONTIMER_HWA_ReadCompareValue`."
- `anchors`:
  - `p39`: "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
- `aliases`: []

### API-AONTIMER-HWA-READCOUNTERCURRENTVALUE
- `name`: "AONTIMER_HWA_ReadCounterCurrentValue"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `AONTIMER_HWA_ReadCounterCurrentValue`."
- `anchors`:
  - `p39`: "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCounterCurrentValue (void )"
- `aliases`: []

### API-AONTIMER-HWA-SELECTMODULECLKSRC
- `name`: "AONTIMER_HWA_SelectModuleClkSrc"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `AONTIMER_HWA_SelectModuleClkSrc`."
- `anchors`:
  - `p39`: "LOCAL_INLINE void AONTIMER_HWA_SelectModuleClkSrc (Gpt_AontimerClkSrcType eClk)"
- `aliases`: []

### API-AONTIMER-HWA-SETCOUNTERRESETONOVERFLOW
- `name`: "AONTIMER_HWA_SetCounterResetOnOverflow"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `AONTIMER_HWA_SetCounterResetOnOverflow`."
- `anchors`:
  - `p39`: "LOCAL_INLINE void AONTIMER_HWA_SetCounterResetOnOverflow (void )"
- `aliases`: []

### API-AONTIMER-HWA-SETMODULECOMPAREVALUE
- `name`: "AONTIMER_HWA_SetModuleCompareValue"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `AONTIMER_HWA_SetModuleCompareValue`."
- `anchors`:
  - `p39`: "LOCAL_INLINE void AONTIMER_HWA_SetModuleCompareValue (uint32 u32RegValue)"
- `aliases`: []

### API-AONTIMER-HWA-SETMODULECOUNTERVALUE
- `name`: "AONTIMER_HWA_SetModuleCounterValue"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `AONTIMER_HWA_SetModuleCounterValue`."
- `anchors`:
  - `p39`: "LOCAL_INLINE void AONTIMER_HWA_SetModuleCounterValue (uint32 u32RegValue)"
- `aliases`: []

### API-AONTIMER-HWA-SETPRESCALE
- `name`: "AONTIMER_HWA_SetPrescale"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "api index entry for `AONTIMER_HWA_SetPrescale`."
- `anchors`:
  - `p40`: "LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `aliases`: []

### API-FCPIT-HWA-CLEARCHANNELSINTERRUPTFLAG
- `name`: "FCPIT_HWA_ClearChannelsInterruptFlag"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "api index entry for `FCPIT_HWA_ClearChannelsInterruptFlag`."
- `anchors`:
  - `p40`: "LOCAL_INLINE void FCPIT_HWA_ClearChannelsInterruptFlag (uint32 u32RegValue)"
- `aliases`: []

### API-FCPIT-HWA-CONFIGCHANNEL
- `name`: "FCPIT_HWA_ConfigChannel"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "api index entry for `FCPIT_HWA_ConfigChannel`."
- `anchors`:
  - `p40`: "LOCAL_INLINE void FCPIT_HWA_ConfigChannel (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
- `aliases`: []

### API-FCPIT-HWA-DISABLECHANNEL
- `name`: "FCPIT_HWA_DisableChannel"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "api index entry for `FCPIT_HWA_DisableChannel`."
- `anchors`:
  - `p40`: "LOCAL_INLINE void FCPIT_HWA_DisableChannel (Gpt_FcpitChannelType eChannel)"
- `aliases`: []

### API-FCPIT-HWA-DISABLECHANNELSINTERRUPT
- `name`: "FCPIT_HWA_DisableChannelsInterrupt"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "api index entry for `FCPIT_HWA_DisableChannelsInterrupt`."
- `anchors`:
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt (uint32 u32RegValue)"
- `aliases`: []

### API-FCPIT-HWA-DISABLEMODULE
- `name`: "FCPIT_HWA_DisableModule"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "api index entry for `FCPIT_HWA_DisableModule`."
- `anchors`:
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_DisableModule (void )"
- `aliases`: []

### API-FCPIT-HWA-ENABLECHANNEL
- `name`: "FCPIT_HWA_EnableChannel"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "api index entry for `FCPIT_HWA_EnableChannel`."
- `anchors`:
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_EnableChannel (Gpt_FcpitChannelType eChannel)"
- `aliases`: []

### API-FCPIT-HWA-ENABLECHANNELSINTERRUPT
- `name`: "FCPIT_HWA_EnableChannelsInterrupt"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "api index entry for `FCPIT_HWA_EnableChannelsInterrupt`."
- `anchors`:
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_EnableChannelsInterrupt (uint32 u32RegValue)"
- `aliases`: []

### API-FCPIT-HWA-ENABLEMODULE
- `name`: "FCPIT_HWA_EnableModule"
- `type`: `api`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "api index entry for `FCPIT_HWA_EnableModule`."
- `anchors`:
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_EnableModule (void )"
- `aliases`: []

### API-FCPIT-HWA-READCHANNELTIMERVALUE
- `name`: "FCPIT_HWA_ReadChannelTimerValue"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `FCPIT_HWA_ReadChannelTimerValue`."
- `anchors`:
  - `p42`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue (Gpt_FcpitChannelType eChannel)"
- `aliases`: []

### API-FCPIT-HWA-READCURCHANNELVALUE
- `name`: "FCPIT_HWA_ReadCurChannelValue"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `FCPIT_HWA_ReadCurChannelValue`."
- `anchors`:
  - `p42`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadCurChannelValue (Gpt_FcpitChannelType eChannel)"
- `aliases`: []

### API-FCPIT-HWA-READENABLEINTERRUPTFLAG
- `name`: "FCPIT_HWA_ReadEnableInterruptFlag"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `FCPIT_HWA_ReadEnableInterruptFlag`."
- `anchors`:
  - `p42`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadEnableInterruptFlag (void )"
- `aliases`: []

### API-FCPIT-HWA-READINTERRUPTFLAG
- `name`: "FCPIT_HWA_ReadInterruptFlag"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `FCPIT_HWA_ReadInterruptFlag`."
- `anchors`:
  - `p42`: "LOCAL_INLINE uint32 FCPIT_HWA_ReadInterruptFlag (void )"
- `aliases`: []

### API-FCPIT-HWA-SETCHANNELRUNONDEBUG
- `name`: "FCPIT_HWA_SetChannelRunOnDebug"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `FCPIT_HWA_SetChannelRunOnDebug`."
- `anchors`:
  - `p42`: "LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnDebug (void )"
- `aliases`: []

### API-FCPIT-HWA-SETCHANNELRUNONLPM
- `name`: "FCPIT_HWA_SetChannelRunOnLpm"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `FCPIT_HWA_SetChannelRunOnLpm`."
- `anchors`:
  - `p42`: "LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnLpm (void )"
- `aliases`: []

### API-FCPIT-HWA-SETCHANNELSTOPONDEBUG
- `name`: "FCPIT_HWA_SetChannelStopOnDebug"
- `type`: `api`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "api index entry for `FCPIT_HWA_SetChannelStopOnDebug`."
- `anchors`:
  - `p43`: "LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug (void )"
- `aliases`: []

### API-FCPIT-HWA-SETCHANNELSTOPONLPM
- `name`: "FCPIT_HWA_SetChannelStopOnLpm"
- `type`: `api`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "api index entry for `FCPIT_HWA_SetChannelStopOnLpm`."
- `anchors`:
  - `p43`: "LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnLpm (void )"
- `aliases`: []

### API-FCPIT-HWA-SETCHANNELVALUE
- `name`: "FCPIT_HWA_SetChannelValue"
- `type`: `api`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "api index entry for `FCPIT_HWA_SetChannelValue`."
- `anchors`:
  - `p43`: "LOCAL_INLINE void FCPIT_HWA_SetChannelValue (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
- `aliases`: []

### API-FTU-HWA-CLEARCHANNELINTERRUPTFLAG
- `name`: "FTU_HWA_ClearChannelInterruptFlag"
- `type`: `api`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "api index entry for `FTU_HWA_ClearChannelInterruptFlag`."
- `anchors`:
  - `p43`: "LOCAL_INLINE void FTU_HWA_ClearChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-CLEARMODULEALLFAULTFLAG
- `name`: "FTU_HWA_ClearModuleAllFaultFlag"
- `type`: `api`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "api index entry for `FTU_HWA_ClearModuleAllFaultFlag`."
- `anchors`:
  - `p43`: "LOCAL_INLINE void FTU_HWA_ClearModuleAllFaultFlag (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-CLEARMODULECOUNTER
- `name`: "FTU_HWA_ClearModuleCounter"
- `type`: `api`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "api index entry for `FTU_HWA_ClearModuleCounter`."
- `anchors`:
  - `p44`: "LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
- `aliases`: []

### API-FTU-HWA-CLEARMODULECOUNTERINITIALVALUE
- `name`: "FTU_HWA_ClearModuleCounterInitialValue"
- `type`: `api`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "api index entry for `FTU_HWA_ClearModuleCounterInitialValue`."
- `anchors`:
  - `p44`: "LOCAL_INLINE void FTU_HWA_ClearModuleCounterInitialValue (FTU_Type * pFtu, uint32 u32RegValue)"
- `aliases`: []

### API-FTU-HWA-CLEARMODULEUPDATEREGBYSYNC
- `name`: "FTU_HWA_ClearModuleUpdateRegBySync"
- `type`: `api`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "api index entry for `FTU_HWA_ClearModuleUpdateRegBySync`."
- `anchors`:
  - `p44`: "LOCAL_INLINE void FTU_HWA_ClearModuleUpdateRegBySync (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-CLEAROUTPUTMODE
- `name`: "FTU_HWA_ClearOutputMode"
- `type`: `api`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "api index entry for `FTU_HWA_ClearOutputMode`."
- `anchors`:
  - `p44`: "LOCAL_INLINE void FTU_HWA_ClearOutputMode (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-CONFIGMODULEDEBUGMODE
- `name`: "FTU_HWA_ConfigModuleDebugMode"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "api index entry for `FTU_HWA_ConfigModuleDebugMode`."
- `anchors`:
  - `p45`: "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `aliases`: []

### API-FTU-HWA-DISABLECHANNELINTERRUPT
- `name`: "FTU_HWA_DisableChannelInterrupt"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "api index entry for `FTU_HWA_DisableChannelInterrupt`."
- `anchors`:
  - `p45`: "LOCAL_INLINE void FTU_HWA_DisableChannelInterrupt (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-DISABLEMODULECPWMMODE
- `name`: "FTU_HWA_DisableModuleCpwmMode"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "api index entry for `FTU_HWA_DisableModuleCpwmMode`."
- `anchors`:
  - `p45`: "LOCAL_INLINE void FTU_HWA_DisableModuleCpwmMode (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-DISABLEMODULEFAULTMODE
- `name`: "FTU_HWA_DisableModuleFaultMode"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "api index entry for `FTU_HWA_DisableModuleFaultMode`."
- `anchors`:
  - `p45`: "LOCAL_INLINE void FTU_HWA_DisableModuleFaultMode (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-DISABLEOVERFLOWINTERRUPT
- `name`: "FTU_HWA_DisableOverflowInterrupt"
- `type`: `api`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "api index entry for `FTU_HWA_DisableOverflowInterrupt`."
- `anchors`:
  - `p45`: "LOCAL_INLINE void FTU_HWA_DisableOverflowInterrupt (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-DISABLEQUADRATUREMODE
- `name`: "FTU_HWA_DisableQuadratureMode"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `FTU_HWA_DisableQuadratureMode`."
- `anchors`:
  - `p46`: "LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-ENABLECHANNELINTERRUPT
- `name`: "FTU_HWA_EnableChannelInterrupt"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `FTU_HWA_EnableChannelInterrupt`."
- `anchors`:
  - `p46`: "LOCAL_INLINE void FTU_HWA_EnableChannelInterrupt (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-READCHANNELINTERRUPTFLAG
- `name`: "FTU_HWA_ReadChannelInterruptFlag"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `FTU_HWA_ReadChannelInterruptFlag`."
- `anchors`:
  - `p46`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-READCHANNELINTERRUPTFLAGANDENABLE
- `name`: "FTU_HWA_ReadChannelInterruptFlagAndEnable"
- `type`: `api`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "api index entry for `FTU_HWA_ReadChannelInterruptFlagAndEnable`."
- `anchors`:
  - `p46`: "LOCAL_INLINE boolean FTU_HWA_ReadChannelInterruptFlagAndEnable (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-READCHANNELVALUE
- `name`: "FTU_HWA_ReadChannelValue"
- `type`: `api`
- `primary_page`: `47`
- `physical_pages`: `47`
- `brief`: "api index entry for `FTU_HWA_ReadChannelValue`."
- `anchors`:
  - `p47`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-FTU-HWA-READMODULECOUNTER
- `name`: "FTU_HWA_ReadModuleCounter"
- `type`: `api`
- `primary_page`: `47`
- `physical_pages`: `47`
- `brief`: "api index entry for `FTU_HWA_ReadModuleCounter`."
- `anchors`:
  - `p47`: "LOCAL_INLINE uint32 FTU_HWA_ReadModuleCounter (FTU_Type * pFtu)"
- `aliases`: []

### API-FTU-HWA-SETCHANNELVALUE
- `name`: "FTU_HWA_SetChannelValue"
- `type`: `api`
- `primary_page`: `47`
- `physical_pages`: `47`
- `brief`: "api index entry for `FTU_HWA_SetChannelValue`."
- `anchors`:
  - `p47`: "LOCAL_INLINE void FTU_HWA_SetChannelValue (FTU_Type * pFtu, uint8 u8Channel, uint32 u32RegValue)"
- `aliases`: []

### API-FTU-HWA-SETMODULECLKSRC
- `name`: "FTU_HWA_SetModuleClkSrc"
- `type`: `api`
- `primary_page`: `47`
- `physical_pages`: `47`
- `brief`: "api index entry for `FTU_HWA_SetModuleClkSrc`."
- `anchors`:
  - `p47`: "LOCAL_INLINE void FTU_HWA_SetModuleClkSrc (FTU_Type * pFtu, Gpt_FtuModuleClkSrcType eClkSrc)"
- `aliases`: []

### API-FTU-HWA-SETMODULECOMPAREVALUE
- `name`: "FTU_HWA_SetModuleCompareValue"
- `type`: `api`
- `primary_page`: `47`
- `physical_pages`: `47`
- `brief`: "api index entry for `FTU_HWA_SetModuleCompareValue`."
- `anchors`:
  - `p47`: "LOCAL_INLINE void FTU_HWA_SetModuleCompareValue (FTU_Type * pFtu, uint32 u32RegValue)"
- `aliases`: []

### API-FTU-HWA-SETMODULEPRESCALE
- `name`: "FTU_HWA_SetModulePrescale"
- `type`: `api`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "api index entry for `FTU_HWA_SetModulePrescale`."
- `anchors`:
  - `p48`: "LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `aliases`: []

### API-FTU-HWA-SETOUTPUTMODE
- `name`: "FTU_HWA_SetOutputMode"
- `type`: `api`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "api index entry for `FTU_HWA_SetOutputMode`."
- `anchors`:
  - `p48`: "LOCAL_INLINE void FTU_HWA_SetOutputMode (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### API-GPT-FTU-CONFIGGTB
- `name`: "Gpt_Ftu_ConfigGTB"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `Gpt_Ftu_ConfigGTB`."
- `anchors`:
  - `p31`: "void Gpt_Ftu_ConfigGTB( const uint32 u32Group,boolean benable)"
- `aliases`: []

### API-GPT-LL-FTU-CHANGENEXTTIMEOUTVALUE
- `name`: "Gpt_LL_Ftu_ChangeNextTimeoutValue"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `Gpt_LL_Ftu_ChangeNextTimeoutValue`."
- `anchors`:
  - `p30`: "void Gpt_LL_Ftu_ChangeNextTimeoutValue (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
- `aliases`: []

### API-GPT-LL-TSTMP-GETPREDEFTIMERVALUE
- `name`: "Gpt_LL_Tstmp_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `Gpt_LL_Tstmp_GetPredefTimerValue`."
- `anchors`:
  - `p36`: "uint32 Gpt_LL_Tstmp_GetPredefTimerValue(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxCount)"
- `aliases`: []

### API-RTCSOFTWARERESET
- `name`: "RtcSoftwareReset"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `RtcSoftwareReset`."
- `anchors`:
  - `p50`: "LOCAL_INLINE void RtcSoftwareReset (void )"
- `aliases`: []

### API-TSTMP-HWA-CLEARSINGLEMOD123MATCHFLAG
- `name`: "TSTMP_HWA_ClearSingleMod123MatchFlag"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "api index entry for `TSTMP_HWA_ClearSingleMod123MatchFlag`."
- `anchors`:
  - `p53`: "LOCAL_INLINE void TSTMP_HWA_ClearSingleMod123MatchFlag(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-DISABLEMODCOUNTER
- `name`: "TSTMP_HWA_DisableModCounter"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "api index entry for `TSTMP_HWA_DisableModCounter`."
- `anchors`:
  - `p53`: "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-DISABLEMODMATCHINTERRUPT
- `name`: "TSTMP_HWA_DisableModMatchInterrupt"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `TSTMP_HWA_DisableModMatchInterrupt`."
- `anchors`:
  - `p52`: "LOCAL_INLINE void TSTMP_HWA_DisableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-ENABLEMODCOUNTER
- `name`: "TSTMP_HWA_EnableModCounter"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `TSTMP_HWA_EnableModCounter`."
- `anchors`:
  - `p52`: "LOCAL_INLINE void TSTMP_HWA_EnableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-ENABLEMODMATCHINTERRUPT
- `name`: "TSTMP_HWA_EnableModMatchInterrupt"
- `type`: `api`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "api index entry for `TSTMP_HWA_EnableModMatchInterrupt`."
- `anchors`:
  - `p52`: "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-GETMODMATCHVALUE
- `name`: "TSTMP_HWA_GetModMatchValue"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `TSTMP_HWA_GetModMatchValue`."
- `anchors`:
  - `p54`: "LOCAL_INLINE uint32 TSTMP_HWA_GetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-READMODMATCHFLAG
- `name`: "TSTMP_HWA_ReadModMatchFlag"
- `type`: `api`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "api index entry for `TSTMP_HWA_ReadModMatchFlag`."
- `anchors`:
  - `p53`: "LOCAL_INLINE uint32 TSTMP_HWA_ReadModMatchFlag(TSTMP_Type *pTstmp)"
- `aliases`: []

### API-TSTMP-HWA-READTSTMPINTERRUPTFLAGANDENABLE
- `name`: "TSTMP_HWA_ReadTstmpInterruptFlagAndEnable"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `TSTMP_HWA_ReadTstmpInterruptFlagAndEnable`."
- `anchors`:
  - `p51`: "LOCAL_INLINE boolean TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_Type *pTstmp, uint8 u8Mod)"
- `aliases`: []

### API-TSTMP-HWA-READTSTMPVALUE
- `name`: "TSTMP_HWA_ReadTstmpValue"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `TSTMP_HWA_ReadTstmpValue`."
- `anchors`:
  - `p51`: "LOCAL_INLINE uint64 TSTMP_HWA_ReadTstmpValue(TSTMP_Type *pTstmp)"
- `aliases`: []

### API-TSTMP-HWA-SETMODMATCHVALUE
- `name`: "TSTMP_HWA_SetModMatchValue"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `TSTMP_HWA_SetModMatchValue`."
- `anchors`:
  - `p54`: "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `aliases`: []

### API-TSTMP-HWA-SETNEXTTARGETCHANNELVALUE
- `name`: "TSTMP_HWA_SetNextTargetChannelValue"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `TSTMP_HWA_SetNextTargetChannelValue`."
- `anchors`:
  - `p54`: "LOCAL_INLINE void TSTMP_HWA_SetNextTargetChannelValue(TSTMP_Type *pTstmp, uint8 u8Mod,uint64"
- `aliases`: []

### API-MCUCLOCKREFERENCEPOINT
- `name`: "McuClockReferencePoint"
- `type`: `api`
- `primary_page`: `74`
- `physical_pages`: `74`
- `brief`: "api index entry for `McuClockReferencePoint`."
- `anchors`:
  - `p74`: "McuClockReferencePoint (defined in module MCU)."
- `aliases`: []

### API-CONFIGCONTROL
- `name`: "ConfigControl"
- `type`: `api`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "api index entry for `ConfigControl`."
- `anchors`:
  - `p48`: "LOCAL_INLINE void ConfigControl (uint32 u32Value)"
- `aliases`: []

### API-DISABLEALARMINTERRUPT
- `name`: "DisableAlarmInterrupt"
- `type`: `api`
- `primary_page`: `48`
- `physical_pages`: `48`
- `brief`: "api index entry for `DisableAlarmInterrupt`."
- `anchors`:
  - `p48`: "LOCAL_INLINE void DisableAlarmInterrupt (void )"
- `aliases`: []

### API-DISABLEOVERFLOWINVALIDINTERRUPT
- `name`: "DisableOverflowInvalidInterrupt"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `DisableOverflowInvalidInterrupt`."
- `anchors`:
  - `p49`: "LOCAL_INLINE void DisableOverflowInvalidInterrupt (void )"
- `aliases`: []

### API-DISABLERTCCOUNTER
- `name`: "DisableRtcCounter"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `DisableRtcCounter`."
- `anchors`:
  - `p49`: "LOCAL_INLINE void DisableRtcCounter (void )"
- `aliases`: []

### API-ENABLEALARMINTERRUPT
- `name`: "EnableAlarmInterrupt"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `EnableAlarmInterrupt`."
- `anchors`:
  - `p49`: "LOCAL_INLINE void EnableAlarmInterrupt (void )"
- `aliases`: []

### API-ENABLERTCCOUNTER
- `name`: "EnableRtcCounter"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `EnableRtcCounter`."
- `anchors`:
  - `p49`: "LOCAL_INLINE void EnableRtcCounter (void )"
- `aliases`: []

### API-GPT-CBK-CHECKWAKEUP
- `name`: "Gpt_Cbk_CheckWakeup"
- `type`: `api`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "api index entry for `Gpt_Cbk_CheckWakeup`."
- `anchors`:
  - `p69`: "Gpt_Cbk_CheckWakeup() from the code."
- `aliases`: []

### API-GPT-RTC-INIT
- `name`: "Gpt_Rtc_Init"
- `type`: `api`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "api index entry for `Gpt_Rtc_Init`."
- `anchors`:
  - `p72`: "counter, during init (Gpt_Rtc_Init()) the flag is already set"
- `aliases`: []

### API-GPT-SRTC-INIT
- `name`: "Gpt_SRtc_Init"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `Gpt_SRtc_Init`."
- `anchors`:
  - `p12`: "should not disable the counter, during init *(Gpt_SRtc_Init()) the flag is already set."
- `aliases`: []

### API-READALARMFLAG
- `name`: "ReadAlarmFlag"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `ReadAlarmFlag`."
- `anchors`:
  - `p49`: "LOCAL_INLINE uint32 ReadAlarmFlag (void )"
- `aliases`: []

### API-READALARMINTERRUPTENABLEBIT
- `name`: "ReadAlarmInterruptEnableBit"
- `type`: `api`
- `primary_page`: `49`
- `physical_pages`: `49`
- `brief`: "api index entry for `ReadAlarmInterruptEnableBit`."
- `anchors`:
  - `p49`: "LOCAL_INLINE uint32 ReadAlarmInterruptEnableBit (void )"
- `aliases`: []

### API-READCOUNTERENABLESTATUS
- `name`: "ReadCounterEnableStatus"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `ReadCounterEnableStatus`."
- `anchors`:
  - `p50`: "LOCAL_INLINE uint32 ReadCounterEnableStatus (void )"
- `aliases`: []

### API-READINTFLAG
- `name`: "ReadIntFlag"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `ReadIntFlag`."
- `anchors`:
  - `p50`: "LOCAL_INLINE uint32 ReadIntFlag (void )"
- `aliases`: []

### API-READSECONDVALUE
- `name`: "ReadSecondValue"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `ReadSecondValue`."
- `anchors`:
  - `p50`: "LOCAL_INLINE uint32 ReadSecondValue (void )"
- `aliases`: []

### API-READTARGETALARMVALUE
- `name`: "ReadTargetAlarmValue"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `ReadTargetAlarmValue`."
- `anchors`:
  - `p50`: "LOCAL_INLINE uint32 ReadTargetAlarmValue (void )"
- `aliases`: []

### API-SETALARMCOUNTERVALUE
- `name`: "SetAlarmCounterValue"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `SetAlarmCounterValue`."
- `anchors`:
  - `p50`: "LOCAL_INLINE void SetAlarmCounterValue (uint32 u32Value)"
- `aliases`: []

### API-SETPRESCALERCOUNTERVALUE
- `name`: "SetPrescalerCounterValue"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `SetPrescalerCounterValue`."
- `anchors`:
  - `p51`: "LOCAL_INLINE void SetPrescalerCounterValue (uint32 u32Value)"
- `aliases`: []

### API-SETSECONDCOUNTERVALUE
- `name`: "SetSecondCounterValue"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `SetSecondCounterValue`."
- `anchors`:
  - `p51`: "LOCAL_INLINE void SetSecondCounterValue (uint32 u32Value)"
- `aliases`: []

### API-TIMER
- `name`: "Timer"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Timer`."
- `anchors`:
  - `p5`: "The GPT driver provides logical channels which are configured by hardware including Flexible Timer Unit (FTU), Always-on"
- `aliases`: []

### API-BASE
- `name`: "Base"
- `type`: `api`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "api index entry for `Base`."
- `anchors`:
  - `p72`: "The FTU supports a global time base through the Global Time Base (GTB) feature.If enable,the ftu CNT"
- `aliases`: []

### API-CHANNEL
- `name`: "Channel"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "api index entry for `Channel`."
- `anchors`:
  - `p6`: "RTC Channel"
- `aliases`: []

### API-CLOCK
- `name`: "Clock"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Clock`."
- `anchors`:
  - `p5`: "Timer (AONTIMER), Real-Time Clock (RTC), FC Programmable Interrupt Timer (FCPIT) and Timer Stamp (TSTMP)."
- `aliases`: []

### API-FTU
- `name`: "FTU"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `FTU`."
- `anchors`:
  - `p5`: "The GPT driver provides logical channels which are configured by hardware including Flexible Timer Unit (FTU), Always-on"
- `aliases`: []

### API-MANAGER
- `name`: "Manager"
- `type`: `api`
- `primary_page`: `55`
- `physical_pages`: `55`
- `brief`: "api index entry for `Manager`."
- `anchors`:
  - `p55`: "The ECU State Manager (EcuM) is responsible for calling the initialization function."
- `aliases`: []

### API-STAMP
- `name`: "Stamp"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Stamp`."
- `anchors`:
  - `p5`: "Timer (AONTIMER), Real-Time Clock (RTC), FC Programmable Interrupt Timer (FCPIT) and Timer Stamp (TSTMP)."
- `aliases`: []

### API-UNIT
- `name`: "Unit"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Unit`."
- `anchors`:
  - `p5`: "The GPT driver provides logical channels which are configured by hardware including Flexible Timer Unit (FTU), Always-on"
- `aliases`: []

### API-TSTMP-GETPREDEFTIMERVALUE
- `name`: "_Tstmp_GetPredefTimerValue"
- `type`: `api`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "api index entry for `_Tstmp_GetPredefTimerValue`."
- `anchors`:
  - `p51`: "_Tstmp_GetPredefTimerValue()"
- `aliases`: []

### API-OPPREDEFTIMER
- `name`: "opPredefTimer"
- `type`: `api`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "api index entry for `opPredefTimer`."
- `anchors`:
  - `p54`: "opPredefTimer()"
- `aliases`: []

### CFG-GPTCHANNELCONFIGURATION
- `name`: "GptChannelConfiguration"
- `type`: `config`
- `primary_page`: `59`
- `physical_pages`: `59,60,79`
- `brief`: "config index entry for `GptChannelConfiguration`."
- `anchors`:
  - `p59`: "GptChannelConfiguration"
  - `p60`: "GptChannelConfiguration"
  - `p79`: "Configure the GPT channel and link the GPT clock reference point in GptChannelConfiguration tab."
- `aliases`: []

### CFG-GPTFTUCHANNELCLKSRC
- `name`: "GptFtuChannelClkSrc"
- `type`: `config`
- `primary_page`: `63`
- `physical_pages`: `63,79`
- `brief`: "config index entry for `GptFtuChannelClkSrc`."
- `anchors`:
  - `p63`: "GptFtuChannelClkSrc"
  - `p79`: "If the GPT channel uses FTU and the clock source is from PCC, the GptFtuChannelClkSrc must select"
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,75`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "CommonPublishedInformation ................................................................................................................…"
  - `p75`: "CommonPublishedInformation"
- `aliases`: []

### CFG-GPTCHANNELCLKSRCREF
- `name`: "GptChannelClkSrcRef"
- `type`: `config`
- `primary_page`: `61`
- `physical_pages`: `61,63`
- `brief`: "config index entry for `GptChannelClkSrcRef`."
- `anchors`:
  - `p61`: "GptChannelClkSrcRef"
  - `p63`: "selected by GptChannelClkSrcRef. The new prescaler factor affects the clock source on the next system"
- `aliases`: []

### CFG-GPTCHANNELCONFIGSET
- `name`: "GptChannelConfigSet"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,59`
- `brief`: "config index entry for `GptChannelConfigSet`."
- `anchors`:
  - `p4`: "GptChannelConfigSet .......................................................................................................................…"
  - `p59`: "GptChannelConfigSet"
- `aliases`: []

### CFG-GPTCHANNELMODE
- `name`: "GptChannelMode"
- `type`: `config`
- `primary_page`: `61`
- `physical_pages`: `61,79`
- `brief`: "config index entry for `GptChannelMode`."
- `anchors`:
  - `p61`: "GptChannelMode"
  - `p79`: "GPT channel mode configured to continues mode, so the GptChannelMode selects GPT_CH_MODE_CONTINUES."
- `aliases`: []

### CFG-GPTCHANNELTICKFREQUENCY
- `name`: "GptChannelTickFrequency"
- `type`: `config`
- `primary_page`: `61`
- `physical_pages`: `61,79`
- `brief`: "config index entry for `GptChannelTickFrequency`."
- `anchors`:
  - `p61`: "GptChannelTickFrequency"
  - `p79`: "d) Select the FTU prescaler and then the GptChannelTickFrequency will calculate automatically."
- `aliases`: []

### CFG-GPTCONFIGURATIONOFOPTAPISERVICES
- `name`: "GptConfigurationOfOptApiServices"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,68`
- `brief`: "config index entry for `GptConfigurationOfOptApiServices`."
- `anchors`:
  - `p4`: "GptConfigurationOfOptApiServices .........................................................................................................…"
  - `p68`: "GptConfigurationOfOptApiServices"
- `aliases`: []

### CFG-GPTDRIVERCONFIGURATION
- `name`: "GptDriverConfiguration"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,70`
- `brief`: "config index entry for `GptDriverConfiguration`."
- `anchors`:
  - `p4`: "GptDriverConfiguration ....................................................................................................................…"
  - `p70`: "GptDriverConfiguration"
- `aliases`: []

### CFG-GPTPREDEFTIMERCONFIGURATION
- `name`: "GptPredefTimerConfiguration"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,74`
- `brief`: "config index entry for `GptPredefTimerConfiguration`."
- `anchors`:
  - `p4`: "GptPredefTimerConfiguration ...............................................................................................................…"
  - `p74`: "GptPredefTimerConfiguration"
- `aliases`: []

### CFG-GPTAONTIMERCHANNELCLKSRC
- `name`: "GptAontimerChannelClkSrc"
- `type`: `config`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "config index entry for `GptAontimerChannelClkSrc`."
- `anchors`:
  - `p64`: "GptAontimerChannelClkSrc"
- `aliases`: []

### CFG-GPTCHANNELCONFIGURATION-AONTIMER
- `name`: "GptChannelConfiguration_AONTIMER"
- `type`: `config`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "config index entry for `GptChannelConfiguration_AONTIMER`."
- `anchors`:
  - `p64`: "GptChannelConfiguration_AONTIMER"
- `aliases`: []

### CFG-GPTCHANNELCONFIGURATION-FCPIT
- `name`: "GptChannelConfiguration_FCPIT"
- `type`: `config`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "config index entry for `GptChannelConfiguration_FCPIT`."
- `anchors`:
  - `p65`: "GptChannelConfiguration_FCPIT"
- `aliases`: []

### CFG-GPTCHANNELCONFIGURATION-FTU
- `name`: "GptChannelConfiguration_FTU"
- `type`: `config`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "config index entry for `GptChannelConfiguration_FTU`."
- `anchors`:
  - `p63`: "GptChannelConfiguration_FTU"
- `aliases`: []

### CFG-GPTCHANNELCONFIGURATION-TSTMP
- `name`: "GptChannelConfiguration_TSTMP"
- `type`: `config`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "config index entry for `GptChannelConfiguration_TSTMP`."
- `anchors`:
  - `p67`: "GptChannelConfiguration_TSTMP"
- `aliases`: []

### CFG-GPTCHANNELECUCPARTITIONREF
- `name`: "GptChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "config index entry for `GptChannelEcucPartitionRef`."
- `anchors`:
  - `p68`: "GptChannelEcucPartitionRef"
- `aliases`: []

### CFG-GPTCHANNELID
- `name`: "GptChannelId"
- `type`: `config`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "config index entry for `GptChannelId`."
- `anchors`:
  - `p60`: "GptChannelId"
- `aliases`: []

### CFG-GPTCHANNELTICKVALUEMAX
- `name`: "GptChannelTickValueMax"
- `type`: `config`
- `primary_page`: `61`
- `physical_pages`: `61`
- `brief`: "config index entry for `GptChannelTickValueMax`."
- `anchors`:
  - `p61`: "GptChannelTickValueMax"
- `aliases`: []

### CFG-GPTENABLEWAKEUP
- `name`: "GptEnableWakeup"
- `type`: `config`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "config index entry for `GptEnableWakeup`."
- `anchors`:
  - `p62`: "GptEnableWakeup"
- `aliases`: []

### CFG-GPTFCPITENSTOPONINTERRUPT
- `name`: "GptFCPitEnStopOnInterrupt"
- `type`: `config`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "config index entry for `GptFCPitEnStopOnInterrupt`."
- `anchors`:
  - `p65`: "GptFCPitEnStopOnInterrupt"
- `aliases`: []

### CFG-GPTFCPITTRIGGERCHANNELS
- `name`: "GptFCPitTriggerChannels"
- `type`: `config`
- `primary_page`: `66`
- `physical_pages`: `66`
- `brief`: "config index entry for `GptFCPitTriggerChannels`."
- `anchors`:
  - `p66`: "GptFCPitTriggerChannels"
- `aliases`: []

### CFG-GPTHWCHANNEL
- `name`: "GptHwChannel"
- `type`: `config`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "config index entry for `GptHwChannel`."
- `anchors`:
  - `p60`: "GptHwChannel"
- `aliases`: []

### CFG-GPTNOTIFICATION
- `name`: "GptNotification"
- `type`: `config`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "config index entry for `GptNotification`."
- `anchors`:
  - `p62`: "GptNotification"
- `aliases`: []

### CFG-GPTREPORTWAKEUPSOURCE
- `name`: "GptReportWakeupSource"
- `type`: `config`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "config index entry for `GptReportWakeupSource`."
- `anchors`:
  - `p71`: "GptReportWakeupSource"
- `aliases`: []

### CFG-GPTSTANDBYWAKEUPSUPPORT
- `name`: "GptStandbyWakeupSupport"
- `type`: `config`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "config index entry for `GptStandbyWakeupSupport`."
- `anchors`:
  - `p72`: "GptStandbyWakeupSupport"
- `aliases`: []

### CFG-GPTWAKEUPCONFIGURATION
- `name`: "GptWakeupConfiguration"
- `type`: `config`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "config index entry for `GptWakeupConfiguration`."
- `anchors`:
  - `p67`: "GptWakeupConfiguration"
- `aliases`: []

### CFG-GPTWAKEUPFUNCTIONALITYAPI
- `name`: "GptWakeupFunctionalityApi"
- `type`: `config`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "config index entry for `GptWakeupFunctionalityApi`."
- `anchors`:
  - `p69`: "GptWakeupFunctionalityApi"
- `aliases`: []

### CFG-GPTWAKEUPSOURCEREF
- `name`: "GptWakeupSourceRef"
- `type`: `config`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "config index entry for `GptWakeupSourceRef`."
- `anchors`:
  - `p67`: "GptWakeupSourceRef"
- `aliases`: []

### CFG-ECUMWAKEUPSOURCE
- `name`: "EcuMWakeupSource"
- `type`: `config`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "config index entry for `EcuMWakeupSource`."
- `anchors`:
  - `p68`: "Reference to node: EcuMWakeupSource"
- `aliases`: []

### CFG-GPTENABLEDISABLENOTIFICATIONAPI
- `name`: "GptEnableDisableNotificationApi"
- `type`: `config`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "config index entry for `GptEnableDisableNotificationApi`."
- `anchors`:
  - `p62`: "GptEnableDisableNotificationApi is true."
- `aliases`: []

### MACRO-LOCAL-INLINE
- `name`: "LOCAL_INLINE"
- `type`: `macro`
- `primary_page`: `36`
- `physical_pages`: `36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54`
- `brief`: "macro index entry for `LOCAL_INLINE`."
- `anchors`:
  - `p36`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntEnableState (void )"
  - `p37`: "LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag (void )"
  - `p38`: "LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode (void )"
  - `p39`: "LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue (void )"
  - `p40`: "LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `aliases`: []

### MACRO-AUTOSAR-ECUC
- `name`: "AUTOSAR_ECUC"
- `type`: `macro`
- `primary_page`: `60`
- `physical_pages`: `60,61,62,68,69,70,71,74`
- `brief`: "macro index entry for `AUTOSAR_ECUC`."
- `anchors`:
  - `p60`: "AUTOSAR_ECUC"
  - `p61`: "AUTOSAR_ECUC"
  - `p62`: "AUTOSAR_ECUC"
  - `p68`: "AUTOSAR_ECUC"
  - `p69`: "AUTOSAR_ECUC"
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12,13`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p11`: "#define GPT_DEV_ERROR_DETECT (STD_ON)"
  - `p12`: "#define GPT_MULTICORE_SUPPORT (STD_ON)"
  - `p13`: "#define GPT_PRECOMPILE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-TSTMP-0-ISR
- `name`: "TSTMP_0_ISR"
- `type`: `macro`
- `primary_page`: `51`
- `physical_pages`: `51,53`
- `brief`: "macro index entry for `TSTMP_0_ISR`."
- `anchors`:
  - `p51`: "TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
  - `p53`: "Gpt_LL_Tstmp_GetTimeElapsed(),TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
- `aliases`: []

### MACRO-TSTMP-1-ISR
- `name`: "TSTMP_1_ISR"
- `type`: `macro`
- `primary_page`: `51`
- `physical_pages`: `51,53`
- `brief`: "macro index entry for `TSTMP_1_ISR`."
- `anchors`:
  - `p51`: "TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
  - `p53`: "Gpt_LL_Tstmp_GetTimeElapsed(),TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
- `aliases`: []

### MACRO-TSTMP-2-ISR
- `name`: "TSTMP_2_ISR"
- `type`: `macro`
- `primary_page`: `51`
- `physical_pages`: `51,53`
- `brief`: "macro index entry for `TSTMP_2_ISR`."
- `anchors`:
  - `p51`: "TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
  - `p53`: "Gpt_LL_Tstmp_GetTimeElapsed(),TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
- `aliases`: []

### MACRO-TSTMP-3-ISR
- `name`: "TSTMP_3_ISR"
- `type`: `macro`
- `primary_page`: `51`
- `physical_pages`: `51,53`
- `brief`: "macro index entry for `TSTMP_3_ISR`."
- `anchors`:
  - `p51`: "TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
  - `p53`: "Gpt_LL_Tstmp_GetTimeElapsed(),TSTMP_0_ISR(),TSTMP_1_ISR(),TSTMP_2_ISR(), TSTMP_3_ISR()"
- `aliases`: []

### MACRO-GPT-AONTIMER-CHANNEL-NUM
- `name`: "GPT_AONTIMER_CHANNEL_NUM"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `GPT_AONTIMER_CHANNEL_NUM`."
- `anchors`:
  - `p12`: "#define GPT_RTC_MODULE (GPT_AONTIMER_MODULE + GPT_AONTIMER_CHANNEL_NUM)"
  - `p13`: "#define GPT_AONTIMER_CHANNEL_NUM (1U)"
- `aliases`: []

### MACRO-GPT-FCPIT-CHANNEL-NUM
- `name`: "GPT_FCPIT_CHANNEL_NUM"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `GPT_FCPIT_CHANNEL_NUM`."
- `anchors`:
  - `p12`: "#define GPT_TSTMP_MODULE (GPT_FCPIT_MODULE + GPT_FCPIT_CHANNEL_NUM)"
  - `p13`: "#define GPT_FCPIT_CHANNEL_NUM (4U)"
- `aliases`: []

### MACRO-GPT-FTU-MODULES-NUM-U8
- `name`: "GPT_FTU_MODULES_NUM_U8"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `GPT_FTU_MODULES_NUM_U8`."
- `anchors`:
  - `p12`: "#define GPT_FCPIT_MODULE ((GPT_FTU_MODULE_CHANNEL_NUM_U8) * (GPT_FTU_MODULES_NUM_U8))"
  - `p13`: "#define GPT_FTU_MODULES_NUM_U8 (12U)"
- `aliases`: []

### MACRO-GPT-FTU-MODULE-CHANNEL-NUM-U8
- `name`: "GPT_FTU_MODULE_CHANNEL_NUM_U8"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `GPT_FTU_MODULE_CHANNEL_NUM_U8`."
- `anchors`:
  - `p12`: "#define GPT_FCPIT_MODULE ((GPT_FTU_MODULE_CHANNEL_NUM_U8) * (GPT_FTU_MODULES_NUM_U8))"
  - `p13`: "#define GPT_FTU_MODULE_CHANNEL_NUM_U8 (8U)"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p11`: "#define GPT_WAKEUP_FUNCTION_API (STD_OFF)"
  - `p12`: "#define GPT_FTU_GTB_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-GPT-CH-MODE-ONESHOT
- `name`: "GPT_CH_MODE_ONESHOT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,61`
- `brief`: "macro index entry for `GPT_CH_MODE_ONESHOT`."
- `anchors`:
  - `p14`: "GPT_CH_MODE_ONESHOT = 1U"
  - `p61`: "GPT_CH_MODE_ONESHOT"
- `aliases`: []

### MACRO-GPT-FTU-PCC-CLK
- `name`: "GPT_FTU_PCC_CLK"
- `type`: `macro`
- `primary_page`: `63`
- `physical_pages`: `63,79`
- `brief`: "macro index entry for `GPT_FTU_PCC_CLK`."
- `anchors`:
  - `p63`: "GPT_FTU_BUS_CLOCK, GPT_FTU_PCC_CLK, GPT_FTU_EXTERNAL_CLK0,"
  - `p79`: "GPT_FTU_PCC_CLK, and clock reference point select the specific point."
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,59`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 59"
  - `p59`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `62`
- `physical_pages`: `62,79`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p62`: "NULL_PTR"
  - `p79`: "name must not be NULL or NULL_PTR."
- `aliases`: []

### MACRO-GPT-AONTIMER-MODULE
- `name`: "GPT_AONTIMER_MODULE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_AONTIMER_MODULE`."
- `anchors`:
  - `p12`: "#define GPT_AONTIMER_MODULE (GPT_TSTMP_MODULE + (GPT_TSTMP_CHANNEL_NUM *"
- `aliases`: []

### MACRO-GPT-DEINIT-API
- `name`: "GPT_DEINIT_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_DEINIT_API`."
- `anchors`:
  - `p11`: "#define GPT_DEINIT_API (STD_ON)"
- `aliases`: []

### MACRO-GPT-ENABLE-DISABLE-NOTIFICATION-API
- `name`: "GPT_ENABLE_DISABLE_NOTIFICATION_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_ENABLE_DISABLE_NOTIFICATION_API`."
- `anchors`:
  - `p11`: "#define GPT_ENABLE_DISABLE_NOTIFICATION_API (STD_ON)"
- `aliases`: []

### MACRO-GPT-FCPIT-MODULE
- `name`: "GPT_FCPIT_MODULE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_FCPIT_MODULE`."
- `anchors`:
  - `p12`: "#define GPT_FCPIT_MODULE ((GPT_FTU_MODULE_CHANNEL_NUM_U8) * (GPT_FTU_MODULES_NUM_U8))"
- `aliases`: []

### MACRO-GPT-PREDEFTIMER-FUNCTION-API
- `name`: "GPT_PREDEFTIMER_FUNCTION_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_PREDEFTIMER_FUNCTION_API`."
- `anchors`:
  - `p11`: "#define GPT_PREDEFTIMER_FUNCTION_API (STD_ON)"
- `aliases`: []

### MACRO-GPT-TIME-ELAPSED-API
- `name`: "GPT_TIME_ELAPSED_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_TIME_ELAPSED_API`."
- `anchors`:
  - `p11`: "#define GPT_TIME_ELAPSED_API (STD_ON)"
- `aliases`: []

### MACRO-GPT-TIME-REMAINING-API
- `name`: "GPT_TIME_REMAINING_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_TIME_REMAINING_API`."
- `anchors`:
  - `p11`: "#define GPT_TIME_REMAINING_API (STD_ON)"
- `aliases`: []

### MACRO-GPT-TSTMP-MODULE
- `name`: "GPT_TSTMP_MODULE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_TSTMP_MODULE`."
- `anchors`:
  - `p12`: "#define GPT_TSTMP_MODULE (GPT_FCPIT_MODULE + GPT_FCPIT_CHANNEL_NUM)"
- `aliases`: []

### MACRO-GPT-VERSION-INFO-API
- `name`: "GPT_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_VERSION_INFO_API`."
- `anchors`:
  - `p11`: "#define GPT_VERSION_INFO_API (STD_ON)"
- `aliases`: []

### MACRO-GPT-WAKEUP-FUNCTION-API
- `name`: "GPT_WAKEUP_FUNCTION_API"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_WAKEUP_FUNCTION_API`."
- `anchors`:
  - `p11`: "#define GPT_WAKEUP_FUNCTION_API (STD_OFF)"
- `aliases`: []

### MACRO-GPT-AONTIMER-MODULES-NUM
- `name`: "GPT_AONTIMER_MODULES_NUM"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_AONTIMER_MODULES_NUM`."
- `anchors`:
  - `p13`: "#define GPT_AONTIMER_MODULES_NUM (1U)"
- `aliases`: []

### MACRO-GPT-CHANGE-NEXT-TIMEOUT-VALUE
- `name`: "GPT_CHANGE_NEXT_TIMEOUT_VALUE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CHANGE_NEXT_TIMEOUT_VALUE`."
- `anchors`:
  - `p11`: "#define GPT_CHANGE_NEXT_TIMEOUT_VALUE (STD_ON)"
- `aliases`: []

### MACRO-GPT-CHANGE-NEXT-TIMEOUT-VALUE-ID
- `name`: "GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID`."
- `anchors`:
  - `p10`: "#define GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID ((uint8)0x0FU)"
- `aliases`: []

### MACRO-GPT-CHECKWAKEUP-ID
- `name`: "GPT_CHECKWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_CHECKWAKEUP_ID`."
- `anchors`:
  - `p10`: "#define GPT_CHECKWAKEUP_ID ((uint8)0x0CU)"
- `aliases`: []

### MACRO-GPT-DEINIT-ID
- `name`: "GPT_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_DEINIT_ID`."
- `anchors`:
  - `p9`: "#define GPT_DEINIT_ID ((uint8)0x02U)"
- `aliases`: []

### MACRO-GPT-DEV-ERROR-DETECT
- `name`: "GPT_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_DEV_ERROR_DETECT`."
- `anchors`:
  - `p11`: "#define GPT_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-GPT-DISABLENOTIFICATION-ID
- `name`: "GPT_DISABLENOTIFICATION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_DISABLENOTIFICATION_ID`."
- `anchors`:
  - `p9`: "#define GPT_DISABLENOTIFICATION_ID ((uint8)0x08U)"
- `aliases`: []

### MACRO-GPT-DISABLEWAKEUP-ID
- `name`: "GPT_DISABLEWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_DISABLEWAKEUP_ID`."
- `anchors`:
  - `p9`: "#define GPT_DISABLEWAKEUP_ID ((uint8)0x0AU)"
- `aliases`: []

### MACRO-GPT-ENABLENOTIFICATION-ID
- `name`: "GPT_ENABLENOTIFICATION_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_ENABLENOTIFICATION_ID`."
- `anchors`:
  - `p9`: "#define GPT_ENABLENOTIFICATION_ID ((uint8)0x07U)"
- `aliases`: []

### MACRO-GPT-ENABLEWAKEUP-ID
- `name`: "GPT_ENABLEWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_ENABLEWAKEUP_ID`."
- `anchors`:
  - `p10`: "#define GPT_ENABLEWAKEUP_ID ((uint8)0x0BU)"
- `aliases`: []

### MACRO-GPT-ENABLE-USER-MODE-SUPPORT
- `name`: "GPT_ENABLE_USER_MODE_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_ENABLE_USER_MODE_SUPPORT`."
- `anchors`:
  - `p12`: "#define GPT_ENABLE_USER_MODE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-GPT-E-ALREADY-INITIALIZED
- `name`: "GPT_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p8`: "#define GPT_E_ALREADY_INITIALIZED ((uint8)0x0DU)"
- `aliases`: []

### MACRO-GPT-E-BUSY
- `name`: "GPT_E_BUSY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_BUSY`."
- `anchors`:
  - `p8`: "#define GPT_E_BUSY ((uint8)0x0BU)"
- `aliases`: []

### MACRO-GPT-E-INIT-FAILED
- `name`: "GPT_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_E_INIT_FAILED`."
- `anchors`:
  - `p9`: "#define GPT_E_INIT_FAILED ((uint8)0x0E)"
- `aliases`: []

### MACRO-GPT-E-INVALID-CALL
- `name`: "GPT_E_INVALID_CALL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_INVALID_CALL`."
- `anchors`:
  - `p8`: "#define GPT_E_INVALID_CALL ((uint8)0xA0U)"
- `aliases`: []

### MACRO-GPT-E-MODE
- `name`: "GPT_E_MODE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_MODE`."
- `anchors`:
  - `p8`: "#define GPT_E_MODE ((uint8)0x0C)"
- `aliases`: []

### MACRO-GPT-E-PARAM-CHANNEL
- `name`: "GPT_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_PARAM_CHANNEL`."
- `anchors`:
  - `p8`: "#define GPT_E_PARAM_CHANNEL ((uint8)0x14U)"
- `aliases`: []

### MACRO-GPT-E-PARAM-MODE
- `name`: "GPT_E_PARAM_MODE"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_E_PARAM_MODE`."
- `anchors`:
  - `p9`: "#define GPT_E_PARAM_MODE ((uint8)0x1FU)"
- `aliases`: []

### MACRO-GPT-E-PARAM-PARTITION
- `name`: "GPT_E_PARAM_PARTITION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_E_PARAM_PARTITION`."
- `anchors`:
  - `p9`: "#define GPT_E_PARAM_PARTITION ((uint8)0x20U)"
- `aliases`: []

### MACRO-GPT-E-PARAM-POINTER
- `name`: "GPT_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_PARAM_POINTER`."
- `anchors`:
  - `p8`: "#define GPT_E_PARAM_POINTER ((uint8)0x16U)"
- `aliases`: []

### MACRO-GPT-E-PARAM-PREDEF-TIMER
- `name`: "GPT_E_PARAM_PREDEF_TIMER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_PARAM_PREDEF_TIMER`."
- `anchors`:
  - `p8`: "#define GPT_E_PARAM_PREDEF_TIMER ((uint8)0x17)"
- `aliases`: []

### MACRO-GPT-E-PARAM-VALUE
- `name`: "GPT_E_PARAM_VALUE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_PARAM_VALUE`."
- `anchors`:
  - `p8`: "#define GPT_E_PARAM_VALUE ((uint8)0x15U)"
- `aliases`: []

### MACRO-GPT-E-UNINIT
- `name`: "GPT_E_UNINIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_E_UNINIT`."
- `anchors`:
  - `p8`: "#define GPT_E_UNINIT ((uint8)0x0AU)"
- `aliases`: []

### MACRO-GPT-FCPIT-MODULES-NUM
- `name`: "GPT_FCPIT_MODULES_NUM"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_FCPIT_MODULES_NUM`."
- `anchors`:
  - `p13`: "#define GPT_FCPIT_MODULES_NUM (1U)"
- `aliases`: []

### MACRO-GPT-FTU-BUS-CLOCK
- `name`: "GPT_FTU_BUS_CLOCK"
- `type`: `macro`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "macro index entry for `GPT_FTU_BUS_CLOCK`."
- `anchors`:
  - `p63`: "GPT_FTU_BUS_CLOCK"
- `aliases`: []

### MACRO-GPT-FTU-GTB-SUPPORT
- `name`: "GPT_FTU_GTB_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_FTU_GTB_SUPPORT`."
- `anchors`:
  - `p12`: "#define GPT_FTU_GTB_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-GPT-GETVERSIONINFO-ID
- `name`: "GPT_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_GETVERSIONINFO_ID`."
- `anchors`:
  - `p9`: "#define GPT_GETVERSIONINFO_ID ((uint8)0x00U)"
- `aliases`: []

### MACRO-GPT-GET-PREDEF-TIMERVALUE-ID
- `name`: "GPT_GET_PREDEF_TIMERVALUE_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_GET_PREDEF_TIMERVALUE_ID`."
- `anchors`:
  - `p10`: "#define GPT_GET_PREDEF_TIMERVALUE_ID ((uint8)0x0DU)"
- `aliases`: []

### MACRO-GPT-HW-CHANNEL-UNUSED
- `name`: "GPT_HW_CHANNEL_UNUSED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_HW_CHANNEL_UNUSED`."
- `anchors`:
  - `p12`: "#define GPT_HW_CHANNEL_UNUSED (0xFF)"
- `aliases`: []

### MACRO-GPT-HW-PREDEFTIMER-NUM
- `name`: "GPT_HW_PREDEFTIMER_NUM"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_HW_PREDEFTIMER_NUM`."
- `anchors`:
  - `p12`: "#define GPT_HW_PREDEFTIMER_NUM (4U)"
- `aliases`: []

### MACRO-GPT-INIT-ID
- `name`: "GPT_INIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_INIT_ID`."
- `anchors`:
  - `p9`: "#define GPT_INIT_ID ((uint8)0x01U)"
- `aliases`: []

### MACRO-GPT-INSTANCE-ID
- `name`: "GPT_INSTANCE_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_INSTANCE_ID`."
- `anchors`:
  - `p10`: "#define GPT_INSTANCE_ID ((uint8)0U)"
- `aliases`: []

### MACRO-GPT-MULTICORE-SUPPORT
- `name`: "GPT_MULTICORE_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_MULTICORE_SUPPORT`."
- `anchors`:
  - `p12`: "#define GPT_MULTICORE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-GPT-PARTITIONS-NB
- `name`: "GPT_PARTITIONS_NB"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_PARTITIONS_NB`."
- `anchors`:
  - `p12`: "#define GPT_PARTITIONS_NB (3)"
- `aliases`: []

### MACRO-GPT-PRECOMPILE-SUPPORT
- `name`: "GPT_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p13`: "#define GPT_PRECOMPILE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-DISABLED
- `name`: "GPT_PREDEF_TIMER_1US_DISABLED"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_DISABLED`."
- `anchors`:
  - `p71`: "GPT_PREDEF_TIMER_1US_DISABLED"
- `aliases`: []

### MACRO-GPT-PROCESSCOMMONINTERRUPT-ID
- `name`: "GPT_PROCESSCOMMONINTERRUPT_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_PROCESSCOMMONINTERRUPT_ID`."
- `anchors`:
  - `p10`: "#define GPT_PROCESSCOMMONINTERRUPT_ID ((uint8)0x11U)"
- `aliases`: []

### MACRO-GPT-REPORT-WAKEUP-SOURCE
- `name`: "GPT_REPORT_WAKEUP_SOURCE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_REPORT_WAKEUP_SOURCE`."
- `anchors`:
  - `p11`: "#define GPT_REPORT_WAKEUP_SOURCE (STD_ON)"
- `aliases`: []

### MACRO-GPT-RTC-CHANNEL-NUM
- `name`: "GPT_RTC_CHANNEL_NUM"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_RTC_CHANNEL_NUM`."
- `anchors`:
  - `p13`: "#define GPT_RTC_CHANNEL_NUM (1U)"
- `aliases`: []

### MACRO-GPT-RTC-MODULE
- `name`: "GPT_RTC_MODULE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_RTC_MODULE`."
- `anchors`:
  - `p12`: "#define GPT_RTC_MODULE (GPT_AONTIMER_MODULE + GPT_AONTIMER_CHANNEL_NUM)"
- `aliases`: []

### MACRO-GPT-RTC-MODULES-NUM
- `name`: "GPT_RTC_MODULES_NUM"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_RTC_MODULES_NUM`."
- `anchors`:
  - `p13`: "#define GPT_RTC_MODULES_NUM (1U)"
- `aliases`: []

### MACRO-GPT-SETMODE-ID
- `name`: "GPT_SETMODE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_SETMODE_ID`."
- `anchors`:
  - `p9`: "#define GPT_SETMODE_ID ((uint8)0x09U)"
- `aliases`: []

### MACRO-GPT-STANDBY-WAKEUP-SUPPORT
- `name`: "GPT_STANDBY_WAKEUP_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_STANDBY_WAKEUP_SUPPORT`."
- `anchors`:
  - `p12`: "#define GPT_STANDBY_WAKEUP_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-GPT-STARTGLOBALTIME-ID
- `name`: "GPT_STARTGLOBALTIME_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_STARTGLOBALTIME_ID`."
- `anchors`:
  - `p10`: "#define GPT_STARTGLOBALTIME_ID ((uint8)0x12U)"
- `aliases`: []

### MACRO-GPT-STARTTIMER-ID
- `name`: "GPT_STARTTIMER_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_STARTTIMER_ID`."
- `anchors`:
  - `p9`: "#define GPT_STARTTIMER_ID ((uint8)0x05U)"
- `aliases`: []

### MACRO-GPT-STOPGLOBALTIME-ID
- `name`: "GPT_STOPGLOBALTIME_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_STOPGLOBALTIME_ID`."
- `anchors`:
  - `p10`: "#define GPT_STOPGLOBALTIME_ID ((uint8)0x13U)"
- `aliases`: []

### MACRO-GPT-STOPTIMER-ID
- `name`: "GPT_STOPTIMER_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_STOPTIMER_ID`."
- `anchors`:
  - `p9`: "#define GPT_STOPTIMER_ID ((uint8)0x06U)"
- `aliases`: []

### MACRO-GPT-TIMEELAPSED-ID
- `name`: "GPT_TIMEELAPSED_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_TIMEELAPSED_ID`."
- `anchors`:
  - `p9`: "#define GPT_TIMEELAPSED_ID ((uint8)0x03U)"
- `aliases`: []

### MACRO-GPT-TIMEREMAINING-ID
- `name`: "GPT_TIMEREMAINING_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_TIMEREMAINING_ID`."
- `anchors`:
  - `p9`: "#define GPT_TIMEREMAINING_ID ((uint8)0x04U)"
- `aliases`: []

### MACRO-GPT-USER-MODE-SOFTWARE-LOCKED
- `name`: "GPT_USER_MODE_SOFTWARE_LOCKED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_USER_MODE_SOFTWARE_LOCKED`."
- `anchors`:
  - `p12`: "#define GPT_USER_MODE_SOFTWARE_LOCKED (STD_OFF)"
- `aliases`: []

### MACRO-SRIC-1M
- `name`: "SRIC_1M"
- `type`: `macro`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "macro index entry for `SRIC_1M`."
- `anchors`:
  - `p67`: "The Clock Source of Modulate Timer in TSTMP0 can be selected in range of AON_CLK or SRIC_1M."
- `aliases`: []

### MACRO-AON-CLK
- `name`: "AON_CLK"
- `type`: `macro`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "macro index entry for `AON_CLK`."
- `anchors`:
  - `p67`: "The Clock Source of Modulate Timer in TSTMP0 can be selected in range of AON_CLK or SRIC_1M."
- `aliases`: []

### MACRO-GPT-AR-RELEASE-MAJOR-VERSION
- `name`: "GPT_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-GPT-AR-RELEASE-MINOR-VERSION
- `name`: "GPT_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-GPT-AR-RELEASE-REVISION-VERSION
- `name`: "GPT_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-GPT-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: "GPT_CFG_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_CFG_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_CFG_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-GPT-CFG-AR-RELEASE-MINOR-VERSION
- `name`: "GPT_CFG_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CFG_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define GPT_CFG_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-GPT-CFG-AR-RELEASE-REVISION-VERSION
- `name`: "GPT_CFG_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CFG_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p11`: "#define GPT_CFG_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-GPT-CFG-SW-MAJOR-VERSION
- `name`: "GPT_CFG_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CFG_SW_MAJOR_VERSION`."
- `anchors`:
  - `p11`: "#define GPT_CFG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-GPT-CFG-SW-MINOR-VERSION
- `name`: "GPT_CFG_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CFG_SW_MINOR_VERSION`."
- `anchors`:
  - `p11`: "#define GPT_CFG_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-GPT-CFG-SW-PATCH-VERSION
- `name`: "GPT_CFG_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CFG_SW_PATCH_VERSION`."
- `anchors`:
  - `p11`: "#define GPT_CFG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-GPT-CFG-VENDOR-ID
- `name`: "GPT_CFG_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `GPT_CFG_VENDOR_ID`."
- `anchors`:
  - `p11`: "#define GPT_CFG_VENDOR_ID 174"
- `aliases`: []

### MACRO-GPT-FCPIT-ENABLE-EXT-TRIGGERS
- `name`: "GPT_FCPIT_ENABLE_EXT_TRIGGERS"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_FCPIT_ENABLE_EXT_TRIGGERS`."
- `anchors`:
  - `p12`: "#define GPT_FCPIT_ENABLE_EXT_TRIGGERS STD_OFF"
- `aliases`: []

### MACRO-GPT-FTU-MODULE
- `name`: "GPT_FTU_MODULE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_FTU_MODULE`."
- `anchors`:
  - `p12`: "#define GPT_FTU_MODULE 0U"
- `aliases`: []

### MACRO-GPT-MODULE-ID
- `name`: "GPT_MODULE_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_MODULE_ID`."
- `anchors`:
  - `p10`: "#define GPT_MODULE_ID 100"
- `aliases`: []

### MACRO-GPT-SW-MAJOR-VERSION
- `name`: "GPT_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_SW_MAJOR_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-GPT-SW-MINOR-VERSION
- `name`: "GPT_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_SW_MINOR_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-GPT-SW-PATCH-VERSION
- `name`: "GPT_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_SW_PATCH_VERSION`."
- `anchors`:
  - `p10`: "#define GPT_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-GPT-VENDOR-ID
- `name`: "GPT_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `GPT_VENDOR_ID`."
- `anchors`:
  - `p10`: "#define GPT_VENDOR_ID 174"
- `aliases`: []

### MACRO-MAX-GPT-CHANNEL-NUM
- `name`: "MAX_GPT_CHANNEL_NUM"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `MAX_GPT_CHANNEL_NUM`."
- `anchors`:
  - `p13`: "#define MAX_GPT_CHANNEL_NUM (102U)"
- `aliases`: []

### MACRO-GPT-CH-MODE-CONTINUES
- `name`: "GPT_CH_MODE_CONTINUES"
- `type`: `macro`
- `primary_page`: `79`
- `physical_pages`: `79`
- `brief`: "macro index entry for `GPT_CH_MODE_CONTINUES`."
- `anchors`:
  - `p79`: "GPT channel mode configured to continues mode, so the GptChannelMode selects GPT_CH_MODE_CONTINUES."
- `aliases`: []

### MACRO-GPT-CH-MODE-CONTINUOUS
- `name`: "GPT_CH_MODE_CONTINUOUS"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_CH_MODE_CONTINUOUS`."
- `anchors`:
  - `p14`: "GPT_CH_MODE_CONTINUOUS = 0U"
- `aliases`: []

### MACRO-GPT-FTU-BUS-CLK
- `name`: "GPT_FTU_BUS_CLK"
- `type`: `macro`
- `primary_page`: `79`
- `physical_pages`: `79`
- `brief`: "macro index entry for `GPT_FTU_BUS_CLK`."
- `anchors`:
  - `p79`: "GPT_FTU_BUS_CLK."
- `aliases`: []

### MACRO-GPT-FTU-EXTERNAL-CLK0
- `name`: "GPT_FTU_EXTERNAL_CLK0"
- `type`: `macro`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "macro index entry for `GPT_FTU_EXTERNAL_CLK0`."
- `anchors`:
  - `p63`: "GPT_FTU_BUS_CLOCK, GPT_FTU_PCC_CLK, GPT_FTU_EXTERNAL_CLK0,"
- `aliases`: []

### MACRO-GPT-FTU-EXTERNAL-CLK1
- `name`: "GPT_FTU_EXTERNAL_CLK1"
- `type`: `macro`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "macro index entry for `GPT_FTU_EXTERNAL_CLK1`."
- `anchors`:
  - `p63`: "GPT_FTU_EXTERNAL_CLK1, GPT_FTU_EXTERNAL_CLK2"
- `aliases`: []

### MACRO-GPT-FTU-EXTERNAL-CLK2
- `name`: "GPT_FTU_EXTERNAL_CLK2"
- `type`: `macro`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "macro index entry for `GPT_FTU_EXTERNAL_CLK2`."
- `anchors`:
  - `p63`: "GPT_FTU_EXTERNAL_CLK1, GPT_FTU_EXTERNAL_CLK2"
- `aliases`: []

### MACRO-GPT-MODE-NORMAL
- `name`: "GPT_MODE_NORMAL"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_MODE_NORMAL`."
- `anchors`:
  - `p13`: "GPT_MODE_NORMAL = 0U"
- `aliases`: []

### MACRO-GPT-MODE-SLEEP
- `name`: "GPT_MODE_SLEEP"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_MODE_SLEEP`."
- `anchors`:
  - `p13`: "GPT_MODE_SLEEP = 1U"
- `aliases`: []

### MACRO-GPT-MODULE-AONTIMER
- `name`: "GPT_MODULE_AONTIMER"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_AONTIMER`."
- `anchors`:
  - `p14`: "GPT_MODULE_AONTIMER"
- `aliases`: []

### MACRO-GPT-MODULE-FCPIT
- `name`: "GPT_MODULE_FCPIT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FCPIT`."
- `anchors`:
  - `p14`: "GPT_MODULE_FCPIT"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-0
- `name`: "GPT_MODULE_FTU_0"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_0`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_0 = 0"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-1
- `name`: "GPT_MODULE_FTU_1"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_1`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_1"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-10
- `name`: "GPT_MODULE_FTU_10"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_10`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_10"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-11
- `name`: "GPT_MODULE_FTU_11"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_11`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_11"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-2
- `name`: "GPT_MODULE_FTU_2"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_2`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_2"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-3
- `name`: "GPT_MODULE_FTU_3"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_3`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_3"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-4
- `name`: "GPT_MODULE_FTU_4"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_4`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_4"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-5
- `name`: "GPT_MODULE_FTU_5"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_5`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_5"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-6
- `name`: "GPT_MODULE_FTU_6"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_6`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_6"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-7
- `name`: "GPT_MODULE_FTU_7"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_7`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_7"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-8
- `name`: "GPT_MODULE_FTU_8"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_8`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_8"
- `aliases`: []

### MACRO-GPT-MODULE-FTU-9
- `name`: "GPT_MODULE_FTU_9"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_FTU_9`."
- `anchors`:
  - `p14`: "GPT_MODULE_FTU_9"
- `aliases`: []

### MACRO-GPT-MODULE-RTC
- `name`: "GPT_MODULE_RTC"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_MODULE_RTC`."
- `anchors`:
  - `p14`: "GPT_MODULE_RTC"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-100US-32BIT
- `name`: "GPT_PREDEF_TIMER_100US_32BIT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_100US_32BIT`."
- `anchors`:
  - `p14`: "GPT_PREDEF_TIMER_100US_32BIT"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-16BIT
- `name`: "GPT_PREDEF_TIMER_1US_16BIT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_16BIT`."
- `anchors`:
  - `p14`: "GPT_PREDEF_TIMER_1US_16BIT"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-16BIT-ENABLED
- `name`: "GPT_PREDEF_TIMER_1US_16BIT_ENABLED"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_16BIT_ENABLED`."
- `anchors`:
  - `p71`: "GPT_PREDEF_TIMER_1US_16BIT_ENABLED,"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-16-24BIT-ENABLED
- `name`: "GPT_PREDEF_TIMER_1US_16_24BIT_ENABLED"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_16_24BIT_ENABLED`."
- `anchors`:
  - `p71`: "GPT_PREDEF_TIMER_1US_16_24BIT_ENABLED,"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-16-24-32BIT-ENABLED
- `name`: "GPT_PREDEF_TIMER_1US_16_24_32BIT_ENABLED"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_16_24_32BIT_ENABLED`."
- `anchors`:
  - `p71`: "GPT_PREDEF_TIMER_1US_16_24_32BIT_ENABLED,"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-24BIT
- `name`: "GPT_PREDEF_TIMER_1US_24BIT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_24BIT`."
- `anchors`:
  - `p14`: "GPT_PREDEF_TIMER_1US_24BIT"
- `aliases`: []

### MACRO-GPT-PREDEF-TIMER-1US-32BIT
- `name`: "GPT_PREDEF_TIMER_1US_32BIT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `GPT_PREDEF_TIMER_1US_32BIT`."
- `anchors`:
  - `p14`: "GPT_PREDEF_TIMER_1US_32BIT"
- `aliases`: []

### MACRO-GPT-STATUS-EXPIRED
- `name`: "GPT_STATUS_EXPIRED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_STATUS_EXPIRED`."
- `anchors`:
  - `p13`: "GPT_STATUS_EXPIRED = 3"
- `aliases`: []

### MACRO-GPT-STATUS-INITIALIZED
- `name`: "GPT_STATUS_INITIALIZED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_STATUS_INITIALIZED`."
- `anchors`:
  - `p13`: "GPT_STATUS_INITIALIZED = 1"
- `aliases`: []

### MACRO-GPT-STATUS-RUNNING
- `name`: "GPT_STATUS_RUNNING"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_STATUS_RUNNING`."
- `anchors`:
  - `p13`: "GPT_STATUS_RUNNING = 4"
- `aliases`: []

### MACRO-GPT-STATUS-STOPPED
- `name`: "GPT_STATUS_STOPPED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_STATUS_STOPPED`."
- `anchors`:
  - `p13`: "GPT_STATUS_STOPPED = 2"
- `aliases`: []

### MACRO-GPT-STATUS-UNINITIALIZED
- `name`: "GPT_STATUS_UNINITIALIZED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_STATUS_UNINITIALIZED`."
- `anchors`:
  - `p13`: "GPT_STATUS_UNINITIALIZED = 0"
- `aliases`: []

### MACRO-GPT-TSTMP-CHANNEL-NUM
- `name`: "GPT_TSTMP_CHANNEL_NUM"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_TSTMP_CHANNEL_NUM`."
- `anchors`:
  - `p12`: "#define GPT_AONTIMER_MODULE (GPT_TSTMP_MODULE + (GPT_TSTMP_CHANNEL_NUM *"
- `aliases`: []

### MACRO-GPT-TSTMP-MODULES-NUM
- `name`: "GPT_TSTMP_MODULES_NUM"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `GPT_TSTMP_MODULES_NUM`."
- `anchors`:
  - `p12`: "GPT_TSTMP_MODULES_NUM))"
- `aliases`: []

### MACRO-NO-REGISTER-LOCKING
- `name`: "NO_REGISTER_LOCKING"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `NO_REGISTER_LOCKING`."
- `anchors`:
  - `p71`: "NO_REGISTER_LOCKING"
- `aliases`: []

### MACRO-RTC-CLK
- `name`: "RTC_CLK"
- `type`: `macro`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "macro index entry for `RTC_CLK`."
- `anchors`:
  - `p65`: "SIRC_1MHZ,RTC_CLK,IRC_CLK"
- `aliases`: []

### MACRO-SIRC-1MHZ
- `name`: "SIRC_1MHZ"
- `type`: `macro`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "macro index entry for `SIRC_1MHZ`."
- `anchors`:
  - `p65`: "SIRC_1MHZ"
- `aliases`: []

### MACRO-IRC-CLK
- `name`: "IRC_CLK"
- `type`: `macro`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "macro index entry for `IRC_CLK`."
- `anchors`:
  - `p65`: "SIRC_1MHZ,RTC_CLK,IRC_CLK"
- `aliases`: []

### MACRO-REG-PROT
- `name`: "REG_PROT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `REG_PROT`."
- `anchors`:
  - `p12`: "HW registers will be done via REG_PROT, user mode access SUPERVISOR_MODE_SOFTWARE_LOCKED: Locks the"
- `aliases`: []

### MACRO-SUPERVISOR-MODE-SOFTWARE-LOCKED
- `name`: "SUPERVISOR_MODE_SOFTWARE_LOCKED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SUPERVISOR_MODE_SOFTWARE_LOCKED`."
- `anchors`:
  - `p12`: "HW registers will be done via REG_PROT, user mode access SUPERVISOR_MODE_SOFTWARE_LOCKED: Locks the"
- `aliases`: []

### MACRO-SUPERVISOR-MODE-SOFT-LOCKING
- `name`: "SUPERVISOR_MODE_SOFT_LOCKING"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `SUPERVISOR_MODE_SOFT_LOCKING`."
- `anchors`:
  - `p71`: "SUPERVISOR_MODE_SOFT_LOCKING"
- `aliases`: []

### MACRO-USER-MODE-SOFTWARE-LOCKED
- `name`: "USER_MODE_SOFTWARE_LOCKED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `USER_MODE_SOFTWARE_LOCKED`."
- `anchors`:
  - `p12`: "#define GPT_USER_MODE_SOFTWARE_LOCKED (STD_OFF)"
- `aliases`: []

### MACRO-USER-MODE-SOFT-LOCKING
- `name`: "USER_MODE_SOFT_LOCKING"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `USER_MODE_SOFT_LOCKING`."
- `anchors`:
  - `p71`: "NO_REGISTER_LOCKING, USER_MODE_SOFT_LOCKING,"
- `aliases`: []

### TYPE-GPT-MODULETYPE
- `name`: "Gpt_ModuleType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,16,17,30,31,32,33,34,35,36`
- `brief`: "type index entry for `Gpt_ModuleType`."
- `anchors`:
  - `p14`: "Gpt_ModuleType"
  - `p16`: "Gpt_ModuleType eGptPredefModule"
  - `p17`: "Gpt_ModuleType eGptModule"
  - `p30`: "void Gpt_LL_Ftu_ChangeNextTimeoutValue (Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)"
  - `p31`: "void Gpt_LL_Ftu_DeInit (Gpt_ModuleType eModule, uint8 u8Channel)"
- `aliases`: []

### TYPE-GPT-VALUETYPE
- `name`: "Gpt_ValueType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,16,17,18,21,22,23,25`
- `brief`: "type index entry for `Gpt_ValueType`."
- `anchors`:
  - `p15`: "typedef uint32 Gpt_ValueType"
  - `p16`: "Gpt_ValueType tTargetTime"
  - `p17`: "Gpt_ValueType u32GptChannelTickValueMax"
  - `p18`: "void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
  - `p21`: "Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `aliases`: []

### TYPE-GPT-FCPITCHANNELTYPE
- `name`: "Gpt_FcpitChannelType"
- `type`: `type`
- `primary_page`: `28`
- `physical_pages`: `28,29,30,40,41,42,43`
- `brief`: "type index entry for `Gpt_FcpitChannelType`."
- `anchors`:
  - `p28`: "void Gpt_LL_FCPit_DeInit (Gpt_FcpitChannelType eChannel)"
  - `p29`: "uint32 Gpt_LL_FCPIT_GetPredefTimerValue (Gpt_FcpitChannelType eChannel, uint32 u32MaxValue)"
  - `p30`: "void Gpt_LL_FCPit_StartTimer (Gpt_FcpitChannelType eChannel, uint32 u32Value)"
  - `p40`: "LOCAL_INLINE void FCPIT_HWA_ConfigChannel (Gpt_FcpitChannelType eChannel, uint32 u32RegValue)"
  - `p41`: "LOCAL_INLINE void FCPIT_HWA_EnableChannel (Gpt_FcpitChannelType eChannel)"
- `aliases`: []

### TYPE-GPT-CHANNELTYPE
- `name`: "Gpt_ChannelType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,18,19,20,21,22,23`
- `brief`: "type index entry for `Gpt_ChannelType`."
- `anchors`:
  - `p15`: "typedef uint8 Gpt_ChannelType"
  - `p18`: "void Gpt_ChangeNextTimeoutValue (Gpt_ChannelType Channel, Gpt_ValueType Value)"
  - `p19`: "void Gpt_DisableNotification (Gpt_ChannelType Channel)"
  - `p20`: "void Gpt_EnableNotification (Gpt_ChannelType Channel)"
  - `p21`: "Gpt_ValueType Gpt_GetTimeElapsed (Gpt_ChannelType Channel)"
- `aliases`: []

### TYPE-GPT-CONFIGCHANNELTYPE
- `name`: "Gpt_ConfigChannelType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,15,17,23,24,25,26`
- `brief`: "type index entry for `Gpt_ConfigChannelType`."
- `anchors`:
  - `p3`: "Gpt_ConfigChannelType .....................................................................................................................…"
  - `p15`: "const Gpt_ConfigChannelType *pGptChannelConfig"
  - `p17`: "Gpt_ConfigChannelType"
  - `p23`: "Gpt_ConfigChannelType"
  - `p24`: "void Gpt_HL_DeInit (const Gpt_ConfigChannelType * pChannelConfig)"
- `aliases`: []

### TYPE-FTU-TYPE
- `name`: "FTU_Type"
- `type`: `type`
- `primary_page`: `43`
- `physical_pages`: `43,44,45,46,47,48`
- `brief`: "type index entry for `FTU_Type`."
- `anchors`:
  - `p43`: "LOCAL_INLINE void FTU_HWA_ClearChannelInterruptFlag (FTU_Type * pFtu, uint8 u8Channel)"
  - `p44`: "LOCAL_INLINE void FTU_HWA_ClearModuleCounter (FTU_Type * pFtu, uint32 u32RegValue)"
  - `p45`: "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
  - `p46`: "LOCAL_INLINE void FTU_HWA_DisableQuadratureMode (FTU_Type * pFtu)"
  - `p47`: "LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue (FTU_Type * pFtu, uint8 u8Channel)"
- `aliases`: []

### TYPE-GPT-CONFIGTYPE
- `name`: "Gpt_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,15,21,25,26`
- `brief`: "type index entry for `Gpt_ConfigType`."
- `anchors`:
  - `p3`: "Gpt_ConfigType ............................................................................................................................…"
  - `p15`: "Gpt_ConfigType"
  - `p21`: "void Gpt_Init (const Gpt_ConfigType * ConfigPtr)"
  - `p25`: "void Gpt_HL_StartPredefTimer (const Gpt_ConfigType * pConfigPtr)"
  - `p26`: "void Gpt_HL_StopPredefTimer (const Gpt_ConfigType * pConfigPtr)"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `7`
- `physical_pages`: `7,20,21,23,24`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p7`: "Std_Types Std_ReturnType"
  - `p20`: "Std_ReturnType Gpt_GetPredefTimerValue (Gpt_PredefTimerType PredefTimer, uint32 * TimeValuePtr)"
  - `p21`: "Std_ReturnType API status return type."
  - `p23`: "Std_ReturnType"
  - `p24`: "Std_ReturnType Function return type."
- `aliases`: []

### TYPE-TSTMP-TYPE
- `name`: "TSTMP_Type"
- `type`: `type`
- `primary_page`: `51`
- `physical_pages`: `51,52,53,54`
- `brief`: "type index entry for `TSTMP_Type`."
- `anchors`:
  - `p51`: "LOCAL_INLINE uint64 TSTMP_HWA_ReadTstmpValue(TSTMP_Type *pTstmp)"
  - `p52`: "LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)"
  - `p53`: "LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)"
  - `p54`: "LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)"
- `aliases`: []

### TYPE-GPT-CONFIGPREDEFCHANNELTYPE
- `name`: "Gpt_ConfigPredefChannelType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,15,16,24`
- `brief`: "type index entry for `Gpt_ConfigPredefChannelType`."
- `anchors`:
  - `p3`: "Gpt_ConfigPredefChannelType ...............................................................................................................…"
  - `p15`: "const Gpt_ConfigPredefChannelType *const (*pGptChannelPredefConfig)"
  - `p16`: "Gpt_ConfigPredefChannelType"
  - `p24`: "void Gpt_HL_GetPredefTimerValue (const Gpt_ConfigPredefChannelType * pChannelConfig, uint32 *"
- `aliases`: []

### TYPE-GPT-HWCHANNELINFOTYPE
- `name`: "Gpt_HwChannelInfoType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,25`
- `brief`: "type index entry for `Gpt_HwChannelInfoType`."
- `anchors`:
  - `p3`: "Gpt_HwChannelInfoType .....................................................................................................................…"
  - `p16`: "Gpt_HwChannelInfoType"
  - `p25`: "Gpt_HwChannelInfoType * pChannelInfo)"
- `aliases`: []

### TYPE-ECUM-WAKEUPSOURCETYPE
- `name`: "EcuM_WakeupSourceType"
- `type`: `type`
- `primary_page`: `7`
- `physical_pages`: `7,18,68`
- `brief`: "type index entry for `EcuM_WakeupSourceType`."
- `anchors`:
  - `p7`: "EcuM EcuM_WakeupSourceType"
  - `p18`: "void Gpt_CheckWakeup (EcuM_WakeupSourceType WakeupSource)"
  - `p68`: "Type: reference to EcuM_WakeupSourceType."
- `aliases`: []

### TYPE-GPT-AONTIMERCLKSRCTYPE
- `name`: "Gpt_AontimerClkSrcType"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27,39`
- `brief`: "type index entry for `Gpt_AontimerClkSrcType`."
- `anchors`:
  - `p27`: "Gpt_AontimerClkSrcType"
  - `p39`: "LOCAL_INLINE void AONTIMER_HWA_SelectModuleClkSrc (Gpt_AontimerClkSrcType eClk)"
- `aliases`: []

### TYPE-GPT-AONTIMERPRESCALERTYPE
- `name`: "Gpt_AontimerPrescalerType"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27,40`
- `brief`: "type index entry for `Gpt_AontimerPrescalerType`."
- `anchors`:
  - `p27`: "Gpt_AontimerPrescalerType ePrescaler)"
  - `p40`: "LOCAL_INLINE void AONTIMER_HWA_SetPrescale (Gpt_AontimerPrescalerType ePrescalerValue)"
- `aliases`: []

### TYPE-GPT-CONFIGCHANNELCOMMONTYPE
- `name`: "Gpt_ConfigChannelCommonType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `brief`: "type index entry for `Gpt_ConfigChannelCommonType`."
- `anchors`:
  - `p3`: "Gpt_ConfigChannelCommonType............................................................................................................ 17"
  - `p17`: "Gpt_ConfigChannelCommonType"
- `aliases`: []

### TYPE-GPT-CONFIGCHANNELHWSPECIFICTYPE
- `name`: "Gpt_ConfigChannelHwSpecificType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `brief`: "type index entry for `Gpt_ConfigChannelHwSpecificType`."
- `anchors`:
  - `p3`: "Gpt_ConfigChannelHwSpecificType ........................................................................................................ 17"
  - `p17`: "Gpt_ConfigChannelHwSpecificType"
- `aliases`: []

### TYPE-GPT-FTUMODULECLKSRCTYPE
- `name`: "Gpt_FtuModuleClkSrcType"
- `type`: `type`
- `primary_page`: `32`
- `physical_pages`: `32,47`
- `brief`: "type index entry for `Gpt_FtuModuleClkSrcType`."
- `anchors`:
  - `p32`: "Gpt_FtuModuleClkSrcType eClkSrc, Gpt_FtuPrescalerType ePrescale)"
  - `p47`: "LOCAL_INLINE void FTU_HWA_SetModuleClkSrc (FTU_Type * pFtu, Gpt_FtuModuleClkSrcType eClkSrc)"
- `aliases`: []

### TYPE-GPT-FTUPRESCALERTYPE
- `name`: "Gpt_FtuPrescalerType"
- `type`: `type`
- `primary_page`: `32`
- `physical_pages`: `32,48`
- `brief`: "type index entry for `Gpt_FtuPrescalerType`."
- `anchors`:
  - `p32`: "Gpt_FtuModuleClkSrcType eClkSrc, Gpt_FtuPrescalerType ePrescale)"
  - `p48`: "LOCAL_INLINE void FTU_HWA_SetModulePrescale (FTU_Type * pFtu, Gpt_FtuPrescalerType ePs)"
- `aliases`: []

### TYPE-GPT-MODETYPE
- `name`: "Gpt_ModeType"
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13,22`
- `brief`: "type index entry for `Gpt_ModeType`."
- `anchors`:
  - `p13`: "Gpt_ModeType"
  - `p22`: "void Gpt_SetMode (Gpt_ModeType Mode)"
- `aliases`: []

### TYPE-GPT-PREDEFTIMERTYPE
- `name`: "Gpt_PredefTimerType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,20`
- `brief`: "type index entry for `Gpt_PredefTimerType`."
- `anchors`:
  - `p14`: "Gpt_PredefTimerType"
  - `p20`: "Std_ReturnType Gpt_GetPredefTimerValue (Gpt_PredefTimerType PredefTimer, uint32 * TimeValuePtr)"
- `aliases`: []

### TYPE-GPT-CHANNELINFOTYPE
- `name`: "Gpt_ChannelInfoType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16`
- `brief`: "type index entry for `Gpt_ChannelInfoType`."
- `anchors`:
  - `p3`: "Gpt_ChannelInfoType .......................................................................................................................…"
  - `p16`: "Gpt_ChannelInfoType"
- `aliases`: []

### TYPE-GPT-CHANNELMODETYPE
- `name`: "Gpt_ChannelModeType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,17`
- `brief`: "type index entry for `Gpt_ChannelModeType`."
- `anchors`:
  - `p14`: "Gpt_ChannelModeType"
  - `p17`: "Gpt_ChannelModeType eGptChannelMode"
- `aliases`: []

### TYPE-GPT-CHANNELSTATUSTYPE
- `name`: "Gpt_ChannelStatusType"
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13,16`
- `brief`: "type index entry for `Gpt_ChannelStatusType`."
- `anchors`:
  - `p13`: "Gpt_ChannelStatusType"
  - `p16`: "Gpt_ChannelStatusType eChannelStatus"
- `aliases`: []

### TYPE-GPT-CONFIGCHANNELAONTIMERTYPE
- `name`: "Gpt_ConfigChannelAontimerType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,27`
- `brief`: "type index entry for `Gpt_ConfigChannelAontimerType`."
- `anchors`:
  - `p17`: "Gpt_ConfigChannelAontimerType tGptAontimerChannelConfig"
  - `p27`: "void Gpt_LL_Aontimer_Init (const Gpt_ConfigChannelAontimerType *const pAontiemrConf)"
- `aliases`: []

### TYPE-GPT-CONFIGCHANNELFCPITTYPE
- `name`: "Gpt_ConfigChannelFcpitType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,29`
- `brief`: "type index entry for `Gpt_ConfigChannelFcpitType`."
- `anchors`:
  - `p17`: "Gpt_ConfigChannelFcpitType tGptFcpitChannelConfig"
  - `p29`: "Gpt_ConfigChannelFcpitType *const pFcpitConfig)"
- `aliases`: []

### TYPE-GPT-CONFIGCHANNELFTUTYPE
- `name`: "Gpt_ConfigChannelFtuType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,32`
- `brief`: "type index entry for `Gpt_ConfigChannelFtuType`."
- `anchors`:
  - `p17`: "Gpt_ConfigChannelFtuType tGptFtuChannelConfig"
  - `p32`: "Gpt_ConfigChannelFtuType * pFtuConfig)"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `7`
- `physical_pages`: `7,21`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p7`: "Std_VersionInfoType"
  - `p21`: "void Gpt_GetVersionInfo (Std_VersionInfoType * VersionInfoPtr)"
- `aliases`: []

### TYPE-GPT-CLOCKSOURCETYPE
- `name`: "Gpt_ClockSourceType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,16`
- `brief`: "type index entry for `Gpt_ClockSourceType`."
- `anchors`:
  - `p15`: "typedef uint8 Gpt_ClockSourceType"
  - `p16`: "Gpt_ClockSourceType u8GptPredefClockSource"
- `aliases`: []

### TYPE-GPT-NOTIFICATIONTYPE
- `name`: "Gpt_NotificationType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,17`
- `brief`: "type index entry for `Gpt_NotificationType`."
- `anchors`:
  - `p15`: "typedef void(* Gpt_NotificationType) (void)"
  - `p17`: "Gpt_NotificationType pGptNotification"
- `aliases`: []

### TYPE-GPT-PRESCALERTYPE
- `name`: "Gpt_PrescalerType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,16`
- `brief`: "type index entry for `Gpt_PrescalerType`."
- `anchors`:
  - `p15`: "typedef uint8 Gpt_PrescalerType"
  - `p16`: "Gpt_PrescalerType u8GptPredefPrescaler"
- `aliases`: []

### TYPE-GPT-FTUDEBUGMODETYPE
- `name`: "Gpt_FtuDebugModeType"
- `type`: `type`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "type index entry for `Gpt_FtuDebugModeType`."
- `anchors`:
  - `p45`: "LOCAL_INLINE void FTU_HWA_ConfigModuleDebugMode (FTU_Type * pFtu, Gpt_FtuDebugModeType eDbgMode)"
- `aliases`: []

### TYPE-DEM-EVENTIDTYPE
- `name`: "Dem_EventIdType"
- `type`: `type`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "type index entry for `Dem_EventIdType`."
- `anchors`:
  - `p7`: "Dem Dem_EventIdType"
- `aliases`: []

### TYPE-DEM-EVENTSTATUSTYPE
- `name`: "Dem_EventStatusType"
- `type`: `type`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "type index entry for `Dem_EventStatusType`."
- `anchors`:
  - `p7`: "Dem_EventStatusType"
- `aliases`: []

### FILE-GPT-H
- `name`: "Gpt.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,7,8,13,18`
- `brief`: "file index entry for `Gpt.h`."
- `anchors`:
  - `p3`: "Macros in Gpt.h ...........................................................................................................................…"
  - `p7`: "Gpt_Irq.c shall include Gpt.h for the prototype declaration of the notification functions."
  - `p8`: "Macros in Gpt.h"
  - `p13`: "Enumerations in Gpt.h"
  - `p18`: "Functions in Gpt.h"
- `aliases`: []

### FILE-GPT-HW-TYPES-H
- `name`: "Gpt_Hw_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,13,15`
- `brief`: "file index entry for `Gpt_Hw_Types.h`."
- `anchors`:
  - `p3`: "Enumerations in Gpt_Hw_Types.h ...........................................................................................................…"
  - `p13`: "Enumerations in Gpt_Hw_Types.h"
  - `p15`: "Typedefs in Gpt_Hw_Types.h"
- `aliases`: []

### FILE-GPT-AONTIEMR-REGOPS-H
- `name`: "Gpt_Aontiemr_RegOps.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,36`
- `brief`: "file index entry for `Gpt_Aontiemr_RegOps.h`."
- `anchors`:
  - `p4`: "Functions in Gpt_Aontiemr_RegOps.h ..................................................................................................... 36"
  - `p36`: "Functions in Gpt_Aontiemr_RegOps.h"
- `aliases`: []

### FILE-GPT-AONTIMER-H
- `name`: "Gpt_Aontimer.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,26`
- `brief`: "file index entry for `Gpt_Aontimer.h`."
- `anchors`:
  - `p3`: "Functions in Gpt_Aontimer.h ...............................................................................................................…"
  - `p26`: "Functions in Gpt_Aontimer.h"
- `aliases`: []

### FILE-GPT-CFG-H
- `name`: "Gpt_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "file index entry for `Gpt_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in Gpt_Cfg.h .......................................................................................................................…"
  - `p10`: "Macros in Gpt_Cfg.h"
- `aliases`: []

### FILE-GPT-FCPIT-H
- `name`: "Gpt_FCPit.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,28`
- `brief`: "file index entry for `Gpt_FCPit.h`."
- `anchors`:
  - `p3`: "Functions in Gpt_FCPit.h ..................................................................................................................…"
  - `p28`: "Functions in Gpt_FCPit.h"
- `aliases`: []

### FILE-GPT-FCPIT-REGOPS-H
- `name`: "Gpt_Fcpit_RegOps.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,40`
- `brief`: "file index entry for `Gpt_Fcpit_RegOps.h`."
- `anchors`:
  - `p4`: "Functions in Gpt_Fcpit_RegOps.h ...........................................................................................................…"
  - `p40`: "Functions in Gpt_Fcpit_RegOps.h"
- `aliases`: []

### FILE-GPT-FTU-H
- `name`: "Gpt_Ftu.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,30`
- `brief`: "file index entry for `Gpt_Ftu.h`."
- `anchors`:
  - `p3`: "Functions in Gpt_Ftu.h ....................................................................................................................…"
  - `p30`: "Functions in Gpt_Ftu.h"
- `aliases`: []

### FILE-GPT-FTU-REGOPS-H
- `name`: "Gpt_Ftu_RegOps.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,43`
- `brief`: "file index entry for `Gpt_Ftu_RegOps.h`."
- `anchors`:
  - `p4`: "Functions in Gpt_Ftu_RegOps.h .............................................................................................................…"
  - `p43`: "Functions in Gpt_Ftu_RegOps.h"
- `aliases`: []

### FILE-GPT-HW-H
- `name`: "Gpt_Hw.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,23`
- `brief`: "file index entry for `Gpt_Hw.h`."
- `anchors`:
  - `p3`: "Functions in Gpt_Hw.h .....................................................................................................................…"
  - `p23`: "Functions in Gpt_Hw.h"
- `aliases`: []

### FILE-GPT-RTC-H
- `name`: "Gpt_Rtc.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,33`
- `brief`: "file index entry for `Gpt_Rtc.h`."
- `anchors`:
  - `p3`: "Functions in Gpt_Rtc.h ....................................................................................................................…"
  - `p33`: "Functions in Gpt_Rtc.h"
- `aliases`: []

### FILE-GPT-RTC-REGOPS-H
- `name`: "Gpt_Rtc_RegOps.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,48`
- `brief`: "file index entry for `Gpt_Rtc_RegOps.h`."
- `anchors`:
  - `p4`: "Functions in Gpt_Rtc_RegOps.h .............................................................................................................…"
  - `p48`: "Functions in Gpt_Rtc_RegOps.h"
- `aliases`: []

### FILE-GPT-TSTMP-H
- `name`: "Gpt_Tstmp.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,34`
- `brief`: "file index entry for `Gpt_Tstmp.h`."
- `anchors`:
  - `p3`: "Functions in Gpt_Tstmp.h ..................................................................................................................…"
  - `p34`: "Functions in Gpt_Tstmp.h"
- `aliases`: []

### FILE-GPT-TSTMP-REGOPS-H
- `name`: "Gpt_Tstmp_RegOps.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,51`
- `brief`: "file index entry for `Gpt_Tstmp_RegOps.h`."
- `anchors`:
  - `p4`: "Functions in Gpt_Tstmp_RegOps.h ..........................................................................................................…"
  - `p51`: "Functions in Gpt_Tstmp_RegOps.h"
- `aliases`: []

### FILE-GPT-VERSION-H
- `name`: "Gpt_version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "file index entry for `Gpt_version.h`."
- `anchors`:
  - `p3`: "Macros in Gpt_version.h ...................................................................................................................…"
  - `p10`: "Macros in Gpt_version.h"
- `aliases`: []

### FILE-GPT-C
- `name`: "Gpt.c"
- `type`: `file`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "file index entry for `Gpt.c`."
- `anchors`:
  - `p7`: "Considering lots of local variables are defined in Gpt.c, the notification function: process"
- `aliases`: []

### FILE-GPT-IRQ-C
- `name`: "Gpt_Irq.c"
- `type`: `file`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "file index entry for `Gpt_Irq.c`."
- `anchors`:
  - `p7`: "Gpt_Irq.c shall include Gpt.h for the prototype declaration of the notification functions."
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,16,60,61,62,68,69,70,71,74`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p16`: "AUTOSAR"
  - `p60`: "AUTOSAR"
  - `p61`: "AUTOSAR"
  - `p62`: "AUTOSAR"
- `aliases`: []

### TERM-GPT
- `name`: "GPT"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `GPT`."
- `anchors`:
  - `p1`: "GPT"
  - `p2`: "GPT"
  - `p3`: "GPT"
  - `p4`: "GPT"
  - `p5`: "GPT"
- `aliases`: []

### TERM-GPTCLOCKREFERENCEPOINT
- `name`: "GptClockReferencePoint"
- `type`: `term`
- `primary_page`: `61`
- `physical_pages`: `61,73,74,79`
- `brief`: "term index entry for `GptClockReferencePoint`."
- `anchors`:
  - `p61`: "Reference to the GptClockReferencePoint from which the channel clock is derived."
  - `p73`: "GptClockReferencePoint"
  - `p74`: "GptClockReferencePoint"
  - `p79`: "Configure the GPT channel clock reference point in GptClockReferencePoint tab."
- `aliases`: []

### TERM-GPT-HW-TYPES
- `name`: "Gpt_Hw_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,13,15`
- `brief`: "term index entry for `Gpt_Hw_Types`."
- `anchors`:
  - `p3`: "Enumerations in Gpt_Hw_Types.h ...........................................................................................................…"
  - `p13`: "Enumerations in Gpt_Hw_Types.h"
  - `p15`: "Typedefs in Gpt_Hw_Types.h"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,7,79`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p4`: "Dem"
  - `p7`: "Dem"
  - `p79`: "Dem"
- `aliases`: []

### TERM-TSTMP-MODECOUNTERRUNNINGMODE
- `name`: "TSTMP_ModeCounterRunningMode"
- `type`: `term`
- `primary_page`: `52`
- `physical_pages`: `52,53`
- `brief`: "term index entry for `TSTMP_ModeCounterRunningMode`."
- `anchors`:
  - `p52`: "TSTMP_ModeCounterRunningMode eCounterMode)"
  - `p53`: "TSTMP_ModeCounterRunningMode eCounterMode)"
- `aliases`: []

### TERM-GPTISRENABLE
- `name`: "GptIsrEnable"
- `type`: `term`
- `primary_page`: `62`
- `physical_pages`: `62,79`
- `brief`: "term index entry for `GptIsrEnable`."
- `anchors`:
  - `p62`: "GptIsrEnable"
  - `p79`: "GPT channel notification open, then enable GptIsrEnable first and write the notification function name, the"
- `aliases`: []

### TERM-GPT-AONTIEMR-REGOPS
- `name`: "Gpt_Aontiemr_RegOps"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,36`
- `brief`: "term index entry for `Gpt_Aontiemr_RegOps`."
- `anchors`:
  - `p4`: "Functions in Gpt_Aontiemr_RegOps.h ..................................................................................................... 36"
  - `p36`: "Functions in Gpt_Aontiemr_RegOps.h"
- `aliases`: []

### TERM-GPT-AONTIMER
- `name`: "Gpt_Aontimer"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,26`
- `brief`: "term index entry for `Gpt_Aontimer`."
- `anchors`:
  - `p3`: "Functions in Gpt_Aontimer.h ...............................................................................................................…"
  - `p26`: "Functions in Gpt_Aontimer.h"
- `aliases`: []

### TERM-GPT-CFG
- `name`: "Gpt_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "term index entry for `Gpt_Cfg`."
- `anchors`:
  - `p3`: "Macros in Gpt_Cfg.h .......................................................................................................................…"
  - `p10`: "Macros in Gpt_Cfg.h"
- `aliases`: []

### TERM-GPT-FCPIT
- `name`: "Gpt_FCPit"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,28`
- `brief`: "term index entry for `Gpt_FCPit`."
- `anchors`:
  - `p3`: "Functions in Gpt_FCPit.h ..................................................................................................................…"
  - `p28`: "Functions in Gpt_FCPit.h"
- `aliases`: []

### TERM-GPT-FCPIT-REGOPS
- `name`: "Gpt_Fcpit_RegOps"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,40`
- `brief`: "term index entry for `Gpt_Fcpit_RegOps`."
- `anchors`:
  - `p4`: "Functions in Gpt_Fcpit_RegOps.h ...........................................................................................................…"
  - `p40`: "Functions in Gpt_Fcpit_RegOps.h"
- `aliases`: []

### TERM-GPT-FTU
- `name`: "Gpt_Ftu"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,30`
- `brief`: "term index entry for `Gpt_Ftu`."
- `anchors`:
  - `p3`: "Functions in Gpt_Ftu.h ....................................................................................................................…"
  - `p30`: "Functions in Gpt_Ftu.h"
- `aliases`: []

### TERM-GPT-FTU-REGOPS
- `name`: "Gpt_Ftu_RegOps"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,43`
- `brief`: "term index entry for `Gpt_Ftu_RegOps`."
- `anchors`:
  - `p4`: "Functions in Gpt_Ftu_RegOps.h .............................................................................................................…"
  - `p43`: "Functions in Gpt_Ftu_RegOps.h"
- `aliases`: []

### TERM-GPT-HW
- `name`: "Gpt_Hw"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,23`
- `brief`: "term index entry for `Gpt_Hw`."
- `anchors`:
  - `p3`: "Enumerations in Gpt_Hw_Types.h ...........................................................................................................…"
  - `p23`: "Functions in Gpt_Hw.h"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STARTPREDEFTIME
- `name`: "Gpt_LL_Tstmp_StartPredefTime"
- `type`: `term`
- `primary_page`: `52`
- `physical_pages`: `52,53`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StartPredefTime`."
- `anchors`:
  - `p52`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
  - `p53`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
- `aliases`: []

### TERM-GPT-RTC
- `name`: "Gpt_Rtc"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,33`
- `brief`: "term index entry for `Gpt_Rtc`."
- `anchors`:
  - `p3`: "Functions in Gpt_Rtc.h ....................................................................................................................…"
  - `p33`: "Functions in Gpt_Rtc.h"
- `aliases`: []

### TERM-GPT-RTC-REGOPS
- `name`: "Gpt_Rtc_RegOps"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,48`
- `brief`: "term index entry for `Gpt_Rtc_RegOps`."
- `anchors`:
  - `p4`: "Functions in Gpt_Rtc_RegOps.h .............................................................................................................…"
  - `p48`: "Functions in Gpt_Rtc_RegOps.h"
- `aliases`: []

### TERM-GPT-TSTMP
- `name`: "Gpt_Tstmp"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,34`
- `brief`: "term index entry for `Gpt_Tstmp`."
- `anchors`:
  - `p3`: "Functions in Gpt_Tstmp.h ..................................................................................................................…"
  - `p34`: "Functions in Gpt_Tstmp.h"
- `aliases`: []

### TERM-GPT-TSTMP-REGOPS
- `name`: "Gpt_Tstmp_RegOps"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,51`
- `brief`: "term index entry for `Gpt_Tstmp_RegOps`."
- `anchors`:
  - `p4`: "Functions in Gpt_Tstmp_RegOps.h ..........................................................................................................…"
  - `p51`: "Functions in Gpt_Tstmp_RegOps.h"
- `aliases`: []

### TERM-GPT-VERSION
- `name`: "Gpt_version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "term index entry for `Gpt_version`."
- `anchors`:
  - `p3`: "Macros in Gpt_version.h ...................................................................................................................…"
  - `p10`: "Macros in Gpt_version.h"
- `aliases`: []

### TERM-GPTAONTIMERPRESCALER
- `name`: "GptAontimerPrescaler"
- `type`: `term`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "term index entry for `GptAontimerPrescaler`."
- `anchors`:
  - `p64`: "GptAontimerPrescaler"
- `aliases`: []

### TERM-GPTCHANGENEXTTIMEOUTVALUEAPI
- `name`: "GptChangeNextTimeoutValueApi"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `GptChangeNextTimeoutValueApi`."
- `anchors`:
  - `p70`: "GptChangeNextTimeoutValueApi"
- `aliases`: []

### TERM-GPTCLOCKREFERENCE
- `name`: "GptClockReference"
- `type`: `term`
- `primary_page`: `74`
- `physical_pages`: `74`
- `brief`: "term index entry for `GptClockReference`."
- `anchors`:
  - `p74`: "GptClockReferencePoint"
- `aliases`: []

### TERM-GPTDBGMODEENABLE
- `name`: "GptDbgModeEnable"
- `type`: `term`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "term index entry for `GptDbgModeEnable`."
- `anchors`:
  - `p62`: "GptDbgModeEnable"
- `aliases`: []

### TERM-GPTDEINITAPI
- `name`: "GptDeinitApi"
- `type`: `term`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "term index entry for `GptDeinitApi`."
- `anchors`:
  - `p68`: "GptDeinitApi"
- `aliases`: []

### TERM-GPTDEVERRORDETECT
- `name`: "GptDevErrorDetect"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `GptDevErrorDetect`."
- `anchors`:
  - `p70`: "GptDevErrorDetect"
- `aliases`: []

### TERM-GPTENABLEUSERMODESUPPORT
- `name`: "GptEnableUserModeSupport"
- `type`: `term`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "term index entry for `GptEnableUserModeSupport`."
- `anchors`:
  - `p72`: "GptEnableUserModeSupport"
- `aliases`: []

### TERM-GPTFCPITCHAINMODE
- `name`: "GptFCPitChainMode"
- `type`: `term`
- `primary_page`: `66`
- `physical_pages`: `66`
- `brief`: "term index entry for `GptFCPitChainMode`."
- `anchors`:
  - `p66`: "GptFCPitChainMode"
- `aliases`: []

### TERM-GPTFCPITENRELOADONTRIGGER
- `name`: "GptFCPitEnReloadOnTrigger"
- `type`: `term`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "term index entry for `GptFCPitEnReloadOnTrigger`."
- `anchors`:
  - `p65`: "GptFCPitEnReloadOnTrigger"
- `aliases`: []

### TERM-GPTFCPITENSTARTONTRIGGER
- `name`: "GptFCPitEnStartOnTrigger"
- `type`: `term`
- `primary_page`: `66`
- `physical_pages`: `66`
- `brief`: "term index entry for `GptFCPitEnStartOnTrigger`."
- `anchors`:
  - `p66`: "GptFCPitEnStartOnTrigger"
- `aliases`: []

### TERM-GPTFCPITISEXTERNALTRIGGER
- `name`: "GptFCPitIsExternalTrigger"
- `type`: `term`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "term index entry for `GptFCPitIsExternalTrigger`."
- `anchors`:
  - `p65`: "GptFCPitIsExternalTrigger"
- `aliases`: []

### TERM-GPTFTUGTB
- `name`: "GptFtuGtb"
- `type`: `term`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "term index entry for `GptFtuGtb`."
- `anchors`:
  - `p63`: "GptFtuGtb"
- `aliases`: []

### TERM-GPTFTUGTBREF
- `name`: "GptFtuGtbRef"
- `type`: `term`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "term index entry for `GptFtuGtbRef`."
- `anchors`:
  - `p64`: "GptFtuGtbRef"
- `aliases`: []

### TERM-GPTFTUGTBSUPPORT
- `name`: "GptFtuGtbSupport"
- `type`: `term`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "term index entry for `GptFtuGtbSupport`."
- `anchors`:
  - `p72`: "GptFtuGtbSupport"
- `aliases`: []

### TERM-GPTFTUPRESCALER
- `name`: "GptFtuPrescaler"
- `type`: `term`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "term index entry for `GptFtuPrescaler`."
- `anchors`:
  - `p63`: "GptFtuPrescaler"
- `aliases`: []

### TERM-GPTKERNELECUCPARTITIONREF
- `name`: "GptKernelEcucPartitionRef"
- `type`: `term`
- `primary_page`: `73`
- `physical_pages`: `73`
- `brief`: "term index entry for `GptKernelEcucPartitionRef`."
- `anchors`:
  - `p73`: "GptKernelEcucPartitionRef"
- `aliases`: []

### TERM-GPTMULTICORESUPPORT
- `name`: "GptMultiCoreSupport"
- `type`: `term`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "term index entry for `GptMultiCoreSupport`."
- `anchors`:
  - `p72`: "GptMultiCoreSupport"
- `aliases`: []

### TERM-GPTPREDEFTIMER100US32BITENABLE
- `name`: "GptPredefTimer100us32bitEnable"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `GptPredefTimer100us32bitEnable`."
- `anchors`:
  - `p70`: "GptPredefTimer100us32bitEnable"
- `aliases`: []

### TERM-GPTPREDEFTIMER1USENABLINGGRADE
- `name`: "GptPredefTimer1usEnablingGrade"
- `type`: `term`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "term index entry for `GptPredefTimer1usEnablingGrade`."
- `anchors`:
  - `p71`: "GptPredefTimer1usEnablingGrade"
- `aliases`: []

### TERM-GPTPREDEFTIMER-100US-32BIT
- `name`: "GptPredefTimer_100us_32Bit"
- `type`: `term`
- `primary_page`: `75`
- `physical_pages`: `75`
- `brief`: "term index entry for `GptPredefTimer_100us_32Bit`."
- `anchors`:
  - `p75`: "GptPredefTimer_100us_32Bit"
- `aliases`: []

### TERM-GPTPREDEFTIMER-1US-16BIT
- `name`: "GptPredefTimer_1us_16Bit"
- `type`: `term`
- `primary_page`: `74`
- `physical_pages`: `74`
- `brief`: "term index entry for `GptPredefTimer_1us_16Bit`."
- `anchors`:
  - `p74`: "GptPredefTimer_1us_16Bit"
- `aliases`: []

### TERM-GPTPREDEFTIMER-1US-24BIT
- `name`: "GptPredefTimer_1us_24Bit"
- `type`: `term`
- `primary_page`: `74`
- `physical_pages`: `74`
- `brief`: "term index entry for `GptPredefTimer_1us_24Bit`."
- `anchors`:
  - `p74`: "GptPredefTimer_1us_24Bit"
- `aliases`: []

### TERM-GPTPREDEFTIMER-1US-32BIT
- `name`: "GptPredefTimer_1us_32Bit"
- `type`: `term`
- `primary_page`: `75`
- `physical_pages`: `75`
- `brief`: "term index entry for `GptPredefTimer_1us_32Bit`."
- `anchors`:
  - `p75`: "GptPredefTimer_1us_32Bit"
- `aliases`: []

### TERM-GPTREGISTERLOCKINGMODE
- `name`: "GptRegisterLockingMode"
- `type`: `term`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "term index entry for `GptRegisterLockingMode`."
- `anchors`:
  - `p71`: "GptRegisterLockingMode"
- `aliases`: []

### TERM-GPTTIMEELAPSEDAPI
- `name`: "GptTimeElapsedApi"
- `type`: `term`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "term index entry for `GptTimeElapsedApi`."
- `anchors`:
  - `p69`: "GptTimeElapsedApi"
- `aliases`: []

### TERM-GPTTIMEREMAININGAPI
- `name`: "GptTimeRemainingApi"
- `type`: `term`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "term index entry for `GptTimeRemainingApi`."
- `anchors`:
  - `p69`: "GptTimeRemainingApi"
- `aliases`: []

### TERM-GPTTSTMPMODCLKSRCSELECT
- `name`: "GptTstmpModClkSrcSelect"
- `type`: `term`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "term index entry for `GptTstmpModClkSrcSelect`."
- `anchors`:
  - `p67`: "GptTstmpModClkSrcSelect"
- `aliases`: []

### TERM-GPTVERSIONINFOAPI
- `name`: "GptVersionInfoApi"
- `type`: `term`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "term index entry for `GptVersionInfoApi`."
- `anchors`:
  - `p69`: "GptVersionInfoApi"
- `aliases`: []

### TERM-AUTOSAR-SWS-GPTDRIVER
- `name`: "AUTOSAR_SWS_GPTDriver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `AUTOSAR_SWS_GPTDriver`."
- `anchors`:
  - `p5`: "For detailed requirements, refer to the AUTOSAR_SWS_GPTDriver."
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p70`: "Det"
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

### TERM-GENERAL-PURPOSE-TIMER
- `name`: "General Purpose Timer"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `General Purpose Timer`."
- `anchors`:
  - `p1`: "General Purpose Timer"
- `aliases`: []

### TERM-GPTECUPARTITIONREF
- `name`: "GptEcuPartitionRef"
- `type`: `term`
- `primary_page`: `73`
- `physical_pages`: `73`
- `brief`: "term index entry for `GptEcuPartitionRef`."
- `anchors`:
  - `p73`: "GptEcuPartitionRef"
- `aliases`: []

### TERM-GPTECUCPARTITIONREF
- `name`: "GptEcucPartitionRef"
- `type`: `term`
- `primary_page`: `73`
- `physical_pages`: `73`
- `brief`: "term index entry for `GptEcucPartitionRef`."
- `anchors`:
  - `p73`: "GptEcucPartitionRef"
- `aliases`: []

### TERM-GPTFTUGTBGROUP
- `name`: "GptFtuGtbGroup"
- `type`: `term`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "term index entry for `GptFtuGtbGroup`."
- `anchors`:
  - `p64`: "Reference to node: GptFtuGtbGroup"
- `aliases`: []

### TERM-GPT-IRQ
- `name`: "Gpt_Irq"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `Gpt_Irq`."
- `anchors`:
  - `p7`: "Gpt_Irq.c shall include Gpt.h for the prototype declaration of the notification functions."
- `aliases`: []

### TERM-GPT-LL
- `name`: "Gpt_LL"
- `type`: `term`
- `primary_page`: `51`
- `physical_pages`: `51`
- `brief`: "term index entry for `Gpt_LL`."
- `anchors`:
  - `p51`: "Gpt_LL_Rtc_DisableInterrupt(),"
- `aliases`: []

### TERM-GPT-LL-TSTMP-ST
- `name`: "Gpt_LL_Tstmp_St"
- `type`: `term`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "term index entry for `Gpt_LL_Tstmp_St`."
- `anchors`:
  - `p54`: "Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StartTimer(),Gpt_LL_Tstmp_StartPredefTimer(),Gpt_LL_Tstmp_St"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STARTPRED
- `name`: "Gpt_LL_Tstmp_StartPred"
- `type`: `term`
- `primary_page`: `52`
- `physical_pages`: `52`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StartPred`."
- `anchors`:
  - `p52`: "Gpt_LL_Tstmp_Init(),Gpt_LL_Tstmp_DeInit(),Gpt_LL_Tstmp_StopTimer(),Gpt_LL_Tstmp_StartPredefTime"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STOPPRED
- `name`: "Gpt_LL_Tstmp_StopPred"
- `type`: `term`
- `primary_page`: `53`
- `physical_pages`: `53`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StopPred`."
- `anchors`:
  - `p53`: "r(),Gpt_LL_Tstmp_StopPredefTimer()"
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

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p1`: "Rte"
- `aliases`: []

### TERM-STD-TYPES
- `name`: "Std_Types"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `Std_Types`."
- `anchors`:
  - `p7`: "Std_Types Std_ReturnType"
- `aliases`: []

## 9. Search Aliases

### ALIAS-GPT
- `canonical`: "GPT"
- `aliases`: ["General Purpose Timer", "通用定时器", "GPT module", "GPT driver", "GPT User Manual", "GPT Integration Manual", "Gpt", "Gpt_StartTimer", "Gpt_StopTimer"]
- `related_ids`: ["TERM-GPT"]

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
- `aliases`: ["Flexible Timer Unit", "Gpt_Ftu", "timer unit", "灵活定时器"]
- `related_ids`: []

### ALIAS-AONTIMER
- `canonical`: "AONTIMER"
- `aliases`: ["Always-on Timer", "Gpt_Aontimer", "always on timer"]
- `related_ids`: []

### ALIAS-FCPIT
- `canonical`: "FCPIT"
- `aliases`: ["FC Programmable Interrupt Timer", "Gpt_Fcpit"]
- `related_ids`: []

### ALIAS-TSTMP
- `canonical`: "TSTMP"
- `aliases`: ["timestamp timer", "Gpt_Tstmp", "Timer Stamp"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between GPT_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `GPT_User_Manual.pdf`
- `source_pdf_sha256`: `b08ed051a2faeeedbb8a2ffa59f794ccd1274403eee74dc4853f4a87588a11a4`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `365`
- `technical_missing_terms_added`: `24`
- `pages_with_added_terms`: `80`
- `supplemented_missing_token_count`: `365`
- `supplemented_missing_technical_token_count`: `24`
- `supplemented_physical_pages_count`: `80`
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
  - "FC7300"
  - "FTU1"
  - "FTU2"
  - "FTUs"
  - "Flagchip"
  - "Proprietary"
  - "counters"
  - "eight"
  - "getting"
  - "implements"
  - "initializing"
  - "maximum"
  - "modules"
  - "other"
  - "others"
  - "peripherals"
  - "remaining"
  - "services"
  - "several"
  - "width"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "independent"
  - "individual"
  - "interrupts"
  - "modulate"
  - "supported"
  - "timers"
  - "width"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "All"
  - "Confidential"
  - "Flagchip"
  - "Imported"
  - "Module"
  - "Not"
  - "PORT"
  - "Proprietary"
  - "These"
  - "affect"
  - "after"
  - "chip"
  - "common"
  - "directly"
  - "errors"
  - "included"
  - "modules"
  - "needed"
  - "other"
  - "reset"
  - "series"
  - "several"
  - "startup"
  - "that"
  - "writable"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initialization"
  - "Proprietary"
  - "out"
  - "running"
  - "still"
  - "without"

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
  - "Instance"
  - "Proprietary"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Dev"
  - "Flagchip"
  - "Proprietary"
  - "Wakeup"
  - "changing"
  - "detect"
  - "running"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "All"
  - "CLEAR"
  - "Confidential"
  - "Flagchip"
  - "NOT"
  - "Number"
  - "Proprietary"
  - "Standby"
  - "Support"
  - "also"
  - "existing"
  - "external"
  - "platform"
  - "reads"
  - "representing"
  - "reserved"
  - "sources"
  - "supervisor"
  - "supported"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Normal"
  - "Proprietary"
  - "Values"
  - "allows"
  - "different"
  - "enumerated"
  - "expired"
  - "logic"
  - "modes"
  - "operation"
  - "power"
  - "running"
  - "selection"
  - "stopped"
  - "total"
  - "uninitialized"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "0x0"
  - "Confidential"
  - "Flagchip"
  - "Indicates"
  - "ONE"
  - "Proprietary"
  - "SHOT"
  - "Values"
  - "continuous"
  - "one"
  - "whether"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Fields"
  - "Flagchip"
  - "Pointer"
  - "Proprietary"
  - "Used"
  - "callback"
  - "configurable"
  - "initializing"
  - "logic"
  - "notifications"
  - "pGptChannelPartitionMappingPtr"
  - "pGptHw2ChannelMap"
  - "pointers"
  - "reading"
  - "required"
  - "setting"
  - "ticks"
  - "within"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Counter"
  - "Fields"
  - "Flagchip"
  - "Low"
  - "Proprietary"
  - "bChannelRollover"
  - "bGptPredefDebugModeEnable"
  - "bNotificationEnabled"
  - "bWakeupEnabled"
  - "bWakeupGenerated"
  - "debug"
  - "level"
  - "max"
  - "receive"
  - "rollover"
  - "runtime"
  - "target"
  - "u8GptPredefChannel"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Fields"
  - "Flagchip"
  - "Pointer"
  - "Proprietary"
  - "WakeUp"
  - "bGptDebugModeEnable"
  - "bGptEnableWakeup"
  - "callback"
  - "common"
  - "debug"
  - "external"
  - "max"
  - "tGptChannelCommonConfig"
  - "tGptChannelHwSpecificConfig"
  - "tick"
  - "u32GptWakeupSource"
  - "u8GptChannel"
  - "wake"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Group"
  - "Logic"
  - "Proprietary"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Group"
  - "Logic"
  - "Proprietary"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Logic"
  - "Predef"
  - "Proprietary"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Logic"
  - "Predef"
  - "Proprietary"
  - "Version"
  - "enumeration"
  - "remaining"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Pointer"
  - "Proprietary"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Handle"
  - "Logic"
  - "Proprietary"
  - "common"
  - "routine"
  - "such"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Next"
  - "Predef"
  - "Proprietary"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Elapsed"
  - "Flagchip"
  - "Group"
  - "Initialize"
  - "Predef"
  - "Proprietary"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Elapsed"
  - "Flagchip"
  - "Predef"
  - "Proprietary"
  - "get"
  - "over"
  - "roll"
  - "target"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "stop"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "Elapsed"
  - "Flagchip"
  - "Initialize"
  - "Proprietary"
  - "debug"
  - "max"
  - "over"
  - "roll"
  - "target"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "change"
  - "debug"
  - "max"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Elapsed"
  - "Flagchip"
  - "Group"
  - "Predef"
  - "Proprietary"
  - "Target"
  - "overflow"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "debug"

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
  - "Elapsed"
  - "Flagchip"
  - "Proprietary"
  - "over"
  - "roll"
  - "stop"
  - "target"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Elapsed"
  - "Flagchip"
  - "Proprietary"
  - "get"
  - "initiailization"
  - "over"
  - "roll"
  - "stop"
  - "target"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Predef"
  - "Proprietary"
  - "max"
  - "state"
  - "stop"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Flagchip"
  - "PSR"
  - "Proprietary"
  - "True"
  - "bypass"
  - "else"
  - "filter"
  - "flags"
  - "glitch"
  - "prescale"
  - "pulse"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "bypass"
  - "filter"
  - "glitch"
  - "pulse"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "CMR"
  - "CNR"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "overflow"
  - "reset"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "CNR"
  - "Clear"
  - "Confidential"
  - "Flagchip"
  - "Prescaler"
  - "Proprietary"
  - "TCTRL"
  - "TIF0"
  - "TIF3"
  - "indicates"
  - "input"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Enables"
  - "Flagchip"
  - "Proprietary"
  - "TIE0"
  - "TIE3"
  - "indicate"
  - "indicates"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "debug"
  - "power"
  - "running"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "all"
  - "debug"
  - "fault"
  - "power"
  - "stop"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "CNTIN"
  - "Clear"
  - "Clears"
  - "Confidential"
  - "FTUEN"
  - "Flagchip"
  - "Proprietary"
  - "behaviors"
  - "counters"
  - "defines"
  - "different"
  - "field"
  - "free"
  - "initial"
  - "output"
  - "running"
  - "synchronization"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "CPWM"
  - "Confidential"
  - "Debug"
  - "Flagchip"
  - "Proprietary"
  - "debug"
  - "enumeration"
  - "fault"
  - "overflow"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "else"
  - "exists"
  - "false"
  - "quadrature"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "CnV"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "Confidential"
  - "Control"
  - "Flagchip"
  - "Proprietary"
  - "alarm"
  - "bind"
  - "control"
  - "enumeration"
  - "output"
  - "pad"
  - "prescale"
  - "signal"

### TEXTSUP-PAGE-0049
- `physical_page`: `49`
- `additional_text_terms`:
  - "Alarm"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "alarm"
  - "overflow"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Second"
  - "Target"
  - "alarm"
  - "reset"
  - "second"
  - "software"
  - "target"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "Confidential"
  - "FALSE"
  - "Flagchip"
  - "Proprietary"
  - "TRUE"
  - "else"
  - "exist"
  - "seconds"

### TEXTSUP-PAGE-0052
- `physical_page`: `52`
- `additional_text_terms`:
  - "Confidential"
  - "Counting"
  - "Flagchip"
  - "Proprietary"
  - "counting"
  - "match"
  - "modes"

### TEXTSUP-PAGE-0053
- `physical_page`: `53`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "all"
  - "counting"
  - "eModClkSrc"
  - "match"
  - "modes"
  - "single"

### TEXTSUP-PAGE-0054
- `physical_page`: `54`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "match"
  - "target"

### TEXTSUP-PAGE-0055
- `physical_page`: `55`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0056
- `physical_page`: `56`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0057
- `physical_page`: `57`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "behavior"
  - "chapter"
  - "continuous"
  - "explains"
  - "informed"
  - "period"
  - "reaches"
  - "running"
  - "still"
  - "target"
  - "while"

### TEXTSUP-PAGE-0058
- `physical_page`: `58`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0059
- `physical_page`: `59`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Label"
  - "Proprietary"
  - "Range"
  - "Variant"
  - "build"
  - "different"
  - "enumeration"
  - "post"
  - "sets"
  - "way"

### TEXTSUP-PAGE-0060
- `physical_page`: `60`
- `additional_text_terms`:
  - "ARM_fc7xxx"
  - "Confidential"
  - "Flagchip"
  - "Integer"
  - "List"
  - "Min"
  - "Proprietary"
  - "Range"
  - "See"
  - "True"
  - "assigned"
  - "properties"
  - "symbolic"
  - "wide"
  - "xxx"

### TEXTSUP-PAGE-0061
- `physical_page`: `61`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Float"
  - "Integer"
  - "Maximum"
  - "Proprietary"
  - "Ref"
  - "See"
  - "Specify"
  - "There"
  - "With"
  - "able"
  - "after"
  - "behavior"
  - "bits"
  - "corresponding"
  - "count"
  - "expired"
  - "frequency"
  - "mandatory"
  - "over"
  - "resolution"
  - "rolls"
  - "tick"
  - "ticks"
  - "zero"

### TEXTSUP-PAGE-0062
- `physical_page`: `62`
- `additional_text_terms`:
  - "CPU"
  - "Confidential"
  - "Flagchip"
  - "NAME"
  - "Proprietary"
  - "Sources"
  - "all"
  - "belonging"
  - "callback"
  - "debug"
  - "editable"
  - "false"
  - "field"
  - "just"
  - "non"
  - "option"
  - "resource"

### TEXTSUP-PAGE-0063
- `physical_page`: `63`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Frame"
  - "Integer"
  - "Proprietary"
  - "Range"
  - "Selects"
  - "Switch"
  - "after"
  - "all"
  - "allows"
  - "belonging"
  - "bits"
  - "cycle"
  - "different"
  - "division"
  - "factors"
  - "input"
  - "into"
  - "line"
  - "one"
  - "option"
  - "per"
  - "peripherals"
  - "sources"
  - "statically"
  - "updated"
  - "wide"

### TEXTSUP-PAGE-0064
- `physical_page`: `64`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "Counter"
  - "Flagchip"
  - "Frame"
  - "Integer"
  - "Maps"
  - "Prescaler"
  - "Proprietary"
  - "Range"
  - "Ref"
  - "allows"
  - "different"
  - "divisions"
  - "false"
  - "group"
  - "gtb"
  - "input"
  - "line"
  - "one"
  - "per"
  - "platform"
  - "sources"
  - "statically"
  - "wide"

### TEXTSUP-PAGE-0065
- `physical_page`: `65`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Frame"
  - "Proprietary"
  - "Range"
  - "Reload"
  - "TImer"
  - "between"
  - "edge"
  - "external"
  - "false"
  - "its"
  - "line"
  - "occurs"
  - "rising"
  - "sources"
  - "stop"
  - "wide"

### TEXTSUP-PAGE-0066
- `physical_page`: `66`
- `additional_text_terms`:
  - "Chain"
  - "Channel_0_Trigger_Source"
  - "Channel_10_Trigger_Source"
  - "Channel_11_Trigger_Source"
  - "Channel_12_Trigger_Source"
  - "Channel_13_Trigger_Source"
  - "Channel_14_Trigger_Source"
  - "Channel_15_Trigger_Source"
  - "Channel_1_Trigger_Source"
  - "Channel_2_Trigger_Source"
  - "Channel_3_Trigger_Source"
  - "Channel_4_Trigger_Source"
  - "Channel_5_Trigger_Source"
  - "Channel_6_Trigger_Source"
  - "Channel_7_Trigger_Source"
  - "Channel_8_Trigger_Source"
  - "Channel_9_Trigger_Source"
  - "Channels"
  - "Confidential"
  - "External"
  - "Flagchip"
  - "Proprietary"
  - "Range"
  - "Signal"
  - "Trigger"
  - "edge"
  - "external"
  - "false"
  - "rising"
  - "sources"

### TEXTSUP-PAGE-0067
- `physical_page`: `67`
- `additional_text_terms`:
  - "Available"
  - "Confidential"
  - "Flagchip"
  - "Frame"
  - "Note"
  - "Proprietary"
  - "Range"
  - "codes"
  - "defines"
  - "false"
  - "line"
  - "reported"

### TEXTSUP-PAGE-0068
- `physical_page`: `68`
- `additional_text_terms`:
  - "Confidential"
  - "EcucPartition"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Ref"
  - "all"
  - "configuring"
  - "group"
  - "limit"
  - "mapped"
  - "multiple"
  - "optional"
  - "partitions"
  - "referenced"
  - "services"
  - "subset"
  - "switches"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0069
- `physical_page`: `69`
- `additional_text_terms`:
  - "Confidential"
  - "Editable"
  - "Flagchip"
  - "Proprietary"
  - "false"
  - "services"

### TEXTSUP-PAGE-0070
- `physical_page`: `70`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "changing"
  - "detection"
  - "false"
  - "running"
  - "settings"
  - "tick"
  - "wide"

### TEXTSUP-PAGE-0071
- `physical_page`: `71`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Predef"
  - "Proprietary"
  - "Range"
  - "Readonly"
  - "Specify"
  - "Timers"
  - "duration"
  - "enabling"
  - "false"
  - "grade"
  - "reporting"
  - "tick"

### TEXTSUP-PAGE-0072
- `physical_page`: `72`
- `additional_text_terms`:
  - "CLEAR"
  - "Confidential"
  - "Flagchip"
  - "MultiCore"
  - "NOT"
  - "Proprietary"
  - "True"
  - "also"
  - "doesn"
  - "false"

### TEXTSUP-PAGE-0073
- `physical_page`: `73`
- `additional_text_terms`:
  - "Confidential"
  - "EcucPartition"
  - "Flagchip"
  - "List"
  - "Maps"
  - "Max"
  - "Min"
  - "Proprietary"
  - "Pwm"
  - "Ref"
  - "assign"
  - "certain"
  - "core"
  - "kernel"
  - "mapped"
  - "one"
  - "partitions"
  - "referenced"
  - "rejected"
  - "subset"
  - "supported"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0074
- `physical_page`: `74`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Predefined"
  - "Proprietary"
  - "Ref"
  - "configuring"
  - "functionality"
  - "represents"

### TEXTSUP-PAGE-0075
- `physical_page`: `75`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Visible"
  - "about"
  - "aggregated"
  - "all"
  - "false"
  - "modules"
  - "published"
  - "versions"

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
  - "List"
  - "Module"
  - "Patch"
  - "Proprietary"
  - "Vendor"
  - "according"
  - "dedicated"
  - "level"
  - "list"

### TEXTSUP-PAGE-0078
- `physical_page`: `78`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "peripheral"
  - "report"
  - "supported"

### TEXTSUP-PAGE-0079
- `physical_page`: `79`
- `additional_text_terms`:
  - "Basically"
  - "Choose"
  - "Confidential"
  - "Flagchip"
  - "Generate"
  - "Proprietary"
  - "demo"
  - "external"
  - "files"
  - "following"
  - "peripheral"
  - "pin"
  - "steps"

### TEXTSUP-PAGE-0080
- `physical_page`: `80`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Here"
  - "Proprietary"
  - "item"
  - "peripheral"

### TEXTSUP-PAGE-0081
- `physical_page`: `81`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Generate"
  - "Proprietary"
  - "after"
  - "finished"
  - "generate"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81`
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
- `physical_pages`: `2,3,4,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0028-001", "TBL-0029-001", "TBL-0030-001", "TBL-0031-001", "TBL-0032-001", "TBL-0033-001"]
- `message`: "64 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,14,16,17`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0014-001", "FIG-0016-001", "FIG-0017-001"]
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
- `pdf_page_count`: `81`
- `indexed_physical_pages_count`: `81`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `288`
- `table_index_count`: `64`
- `figure_index_count`: `67`
- `symbol_index_count`: `469`
- `alias_index_count`: `11`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `b08ed051a2faeeedbb8a2ffa59f794ccd1274403eee74dc4853f4a87588a11a4`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `365`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
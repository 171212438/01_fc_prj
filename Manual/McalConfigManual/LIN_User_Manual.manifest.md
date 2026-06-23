---
manifest_schema_version: "1.1"
source_pdf: "LIN_User_Manual.pdf"
source_pdf_sha256: "ccf0bc2ef2bd76c466ec61dc056cf0e265e3ce39ccb54250e5ceb1e0757e64aa"
source_pdf_size_bytes: 2459748
pdf_page_count: 51
generated_at: "2026-06-19T13:04:07Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: LIN_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `LIN_User_Manual.pdf`
- `source_pdf_sha256`: `ccf0bc2ef2bd76c466ec61dc056cf0e265e3ce39ccb54250e5ceb1e0757e64aa`
- `source_pdf_size_bytes`: `2459748`
- `pdf_page_count`: `51`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx LIN User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T13:04:07Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `45`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL LIN module - User Manual"
- `module_scope`: "LIN driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 LIN Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["LIN", "Local Interconnect Network", "AUTOSAR_SWS_LINDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Lin", "FCUART", "Uart", "UART"]
- `summary`: "This 51-page user manual indexes LIN content across source physical pages 1-51, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["LIN", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx LIN User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["LIN", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["LIN", "Lin", "FC7xxx", "Lin_Cfg", "Lin_GeneralTypes", "Lin_version", "Lin_ConfigType", "Lin_CoreConfigType"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "LIN Introduction"
- `path`: "Chapter 1 LIN Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["LIN", "FCUART", "Lin", "receiver", "bit", "can", "FIFO", "FC7xxx"]
- `anchor`: "Chapter 1 LIN Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 LIN Introduction / 1.1 Requirements"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["LIN", "FCUART", "Lin", "receiver", "bit", "can", "FIFO", "FC7xxx"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Design Summary"
- `path`: "Chapter 1 LIN Introduction / 1.2 Design Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["LIN", "FCUART", "Lin", "receiver", "bit", "can", "FIFO", "FC7xxx"]
- `anchor`: "1.2"

### SEC-001-003
- `source_number`: `1.3`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 LIN Introduction / 1.3 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["LIN", "FCUART", "Lin", "receiver", "bit", "can", "FIFO", "FC7xxx"]
- `anchor`: "1.3"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `39`
- `printed_page_start`: `6`
- `printed_page_end`: `39`
- `keywords`: ["pUart", "LIN", "void", "LOCAL_INLINE", "FCUART_Type", "define", "UART", "Lin"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `7`
- `printed_page_start`: `6`
- `printed_page_end`: `7`
- `keywords`: ["LIN", "FCUART", "UART", "Uart", "Lin", "Rejected", "FC7xxx", "Requirement"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["LIN", "Lin", "FC7xxx", "define", "LIN_INSTANCE_ID", "LIN_E_UNINIT", "ADC", "LIN_E_INVALID_CHANNEL"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `8`
- `physical_page_end`: `13`
- `printed_page_start`: `8`
- `printed_page_end`: `13`
- `keywords`: ["define", "Lin", "LIN", "FCUART", "channel", "frame", "states", "Interrupt"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in Lin.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `physical_page_start`: `8`
- `physical_page_end`: `11`
- `printed_page_start`: `8`
- `printed_page_end`: `11`
- `keywords`: ["Lin", "define", "LIN", "states", "Interrupt", "Errors", "conditions", "channel"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in Lin_version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Lin_version.h"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["LIN", "define", "IDs", "frame", "Commands", "FC7xxx", "LIN_TX_SLAVE_RES_COMMAND", "slave"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in Lin_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Lin_Cfg.h"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["define", "LIN", "FCUART", "Lin", "LINFlex", "IDs", "frame", "was"]
- `anchor`: "2.3.3"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["LIN", "FCUART", "Lin", "define", "error", "NULL_PTR", "STD_OFF", "STD_ON"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enums in Lin_GeneralTypes.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h"
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["LIN", "FCUART", "Lin", "define", "error", "NULL_PTR", "STD_OFF", "STD_ON"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Lin_FrameCsModelType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.1 Lin_FrameCsModelType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["LIN", "FCUART", "Lin", "define", "NULL_PTR", "STD_OFF", "STD_ON", "ISR"]
- `anchor`: "2.4.1.1"

### SEC-002-004-001-002
- `source_number`: `2.4.1.2`
- `title`: "Lin_FrameResponseType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.2 Lin_FrameResponseType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["LIN", "error", "response", "Lin_FrameResponseType", "Response", "node", "Lin_StatusType", "transmission"]
- `anchor`: "2.4.1.2"

### SEC-002-004-001-003
- `source_number`: `2.4.1.3`
- `title`: "Lin_StatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.3 Lin_StatusType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["LIN", "error", "response", "Lin_FrameResponseType", "Response", "node", "Lin_StatusType", "transmission"]
- `anchor`: "2.4.1.3"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enums in Lin_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break"]
- `anchor`: "2.4.2"

### SEC-002-004-002-001
- `source_number`: `2.4.2.1`
- `title`: "Lin_BreakDelimiterType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break"]
- `anchor`: "2.4.2.1"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `16`
- `physical_page_end`: `17`
- `printed_page_start`: `16`
- `printed_page_end`: `17`
- `keywords`: ["LIN", "Lin", "Data", "Lin_BreakDelimiterType", "length", "Lin_CoreConfigType", "Lin_ChannelType", "FC7xxx"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Lin_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Lin_ConfigType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Lin_CoreConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Lin_CoreConfigType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Lin_ChannelType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Lin_ChannelType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Lin", "LIN", "Lin_ChannelType", "Lin_PduType", "FC7xxx", "Lin_BreakDelimiterType", "eLinBreakDelimiterLen", "u32LinBaudRate"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Lin_PduType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Lin_PduType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Lin", "LIN", "Lin_ChannelType", "Lin_PduType", "FC7xxx", "Lin_BreakDelimiterType", "eLinBreakDelimiterLen", "u32LinBaudRate"]
- `anchor`: "2.6.4"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `18`
- `physical_page_end`: `23`
- `printed_page_start`: `18`
- `printed_page_end`: `23`
- `keywords`: ["LIN", "Lin", "Channel", "Std_ReturnType", "channel", "FC7xxx", "Diagram", "Returns"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Lin.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h"
- `physical_page_start`: `18`
- `physical_page_end`: `23`
- `printed_page_start`: `18`
- `printed_page_end`: `23`
- `keywords`: ["LIN", "Lin", "Channel", "Std_ReturnType", "channel", "FC7xxx", "Diagram", "Returns"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Lin_Init(const Lin_ConfigType* Config)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Lin", "LIN", "Lin_Init", "Lin_ConfigType", "Std_ReturnType", "Lin_CheckWakeup", "FC7xxx", "Config"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "Std_ReturnType Lin_CheckWakeup(uint8 Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.2 Std_ReturnType Lin_CheckWakeup(uint8 Channel)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Lin", "LIN", "Lin_Init", "Lin_ConfigType", "Std_ReturnType", "Lin_CheckWakeup", "FC7xxx", "Config"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["LIN", "Lin", "Channel", "channel", "Std_ReturnType", "Lin_StatusType", "Lin_SduPtr", "Lin_GetStatus"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "Std_ReturnType Lin_GoToSleep(uint8 Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.4 Std_ReturnType Lin_GoToSleep(uint8 Channel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["LIN", "Lin", "Channel", "channel", "Std_ReturnType", "Lin_StatusType", "Lin_SduPtr", "Lin_GetStatus"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Lin_GoToSleepInternal", "FC7xxx", "Channel", "channel", "LIN_CH_SLEEP"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "PduInfoPtr", "Lin_SendFrame", "Lin_PduType", "response", "FC7xxx"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Lin_Wakeup", "FC7xxx", "Channel", "PduInfoPtr", "PDU"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Channel", "channel", "Lin_WakeupInternal", "Lin_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "void Lin_GetVersionInfo (Std_VersionInfoType* versioninfo)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.9 void Lin_GetVersionInfo (Std_VersionInfoType* versioninfo)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Channel", "channel", "Lin_WakeupInternal", "Lin_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "2.7.1.9"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `24`
- `physical_page_end`: `26`
- `printed_page_start`: `24`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "u8Channel", "Lin", "u8Module", "Uart", "channel", "void", "Std_ReturnType"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in Lin_FCUart.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h"
- `physical_page_start`: `24`
- `physical_page_end`: `26`
- `printed_page_start`: `24`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "u8Channel", "Lin", "u8Module", "Uart", "channel", "void", "Std_ReturnType"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["LIN", "Lin", "channel", "u8Channel", "Returns", "addressed", "Std_ReturnType", "Lin_StatusType"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "Std_ReturnType Lin_LL_CheckWakeup(uint8 Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.2 Std_ReturnType Lin_LL_CheckWakeup(uint8 Channel)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["LIN", "Lin", "channel", "u8Channel", "Returns", "addressed", "Std_ReturnType", "Lin_StatusType"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "Lin_StatusType Lin_LL_GetStatus(const uint8 u8Channel, uint8 *pu8LinSdu)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.3 Lin_StatusType Lin_LL_GetStatus(const uint8 u8Channel, uint8 *pu8LinSdu)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["LIN", "Lin", "channel", "u8Channel", "Returns", "addressed", "Std_ReturnType", "Lin_StatusType"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.4 Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["LIN", "Lin", "u8Channel", "Std_ReturnType", "u8Module", "pPduInfoPtr", "Lin_PduType", "transmission"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "Std_ReturnType Lin_LL_GoToSleepInternal(uint8 u8Channel, uint8 u8Module)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.5 Std_ReturnType Lin_LL_GoToSleepInternal(uint8 u8Channel, uint8 u8Module)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["LIN", "Lin", "u8Channel", "Std_ReturnType", "u8Module", "pPduInfoPtr", "Lin_PduType", "transmission"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "Std_ReturnType Lin_LL_SendHeader(uint8 u8Channel,uint8 u8Module, const Lin_PduType *pPduInfoPtr)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.6 Std_ReturnType Lin_LL_SendHeader(uint8 u8Channel,uint8 u8Module, const Lin_PduType *pPduInfoPtr)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["LIN", "Lin", "u8Channel", "Std_ReturnType", "u8Module", "pPduInfoPtr", "Lin_PduType", "transmission"]
- `anchor`: "2.8.1.6"

### SEC-002-008-001-007
- `source_number`: `2.8.1.7`
- `title`: "void Lin_LL_SendResponse(uint8 u8Channel, uint8 u8Module, const Lin_PduType *pPduInfoPtr)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.7 void Lin_LL_SendResponse(uint8 u8Channel, uint8 u8Module, const Lin_PduType *pPduInfoPtr)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["LIN", "Lin", "u8Channel", "Std_ReturnType", "u8Module", "pPduInfoPtr", "Lin_PduType", "transmission"]
- `anchor`: "2.8.1.7"

### SEC-002-008-001-008
- `source_number`: `2.8.1.8`
- `title`: "void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.8 void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "Lin", "Uart", "u8Module", "void", "u8Channel", "channel", "Returns"]
- `anchor`: "2.8.1.8"

### SEC-002-008-001-009
- `source_number`: `2.8.1.9`
- `title`: "void Lin_LL_WakeupInternal(uint8 u8Channel, uint8 u8Module)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.9 void Lin_LL_WakeupInternal(uint8 u8Channel, uint8 u8Module)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "Lin", "Uart", "u8Module", "void", "u8Channel", "channel", "Returns"]
- `anchor`: "2.8.1.9"

### SEC-002-008-001-010
- `source_number`: `2.8.1.10`
- `title`: "void Lin_LL_TxRxInterruptHandler(const uint8 u8Module);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.10 void Lin_LL_TxRxInterruptHandler(const uint8 u8Module);"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "Lin", "Uart", "u8Module", "void", "u8Channel", "channel", "Returns"]
- `anchor`: "2.8.1.10"

### SEC-002-008-001-011
- `source_number`: `2.8.1.11`
- `title`: "void Lin_LL_RxDataReadyHandler(uint8 u8Module, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.11 void Lin_LL_RxDataReadyHandler(uint8 u8Module, uint8 u8Channel)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "Lin", "Uart", "u8Module", "void", "u8Channel", "channel", "Returns"]
- `anchor`: "2.8.1.11"

### SEC-002-008-001-012
- `source_number`: `2.8.1.12`
- `title`: "void Lin_LL_InterruptSourceSlave(uint8 u8Module, uint8 u8Channel, uint32 u32Data)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.12 void Lin_LL_InterruptSourceSlave(uint8 u8Module, uint8 u8Channel, uint32 u32Data)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["LIN", "Lin", "Uart", "u8Module", "void", "u8Channel", "channel", "Returns"]
- `anchor`: "2.8.1.12"

### SEC-002-008-001-013
- `source_number`: `2.8.1.13`
- `title`: "void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.13 void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "LIN", "Uart", "FCUART", "u8Module", "eStatusType", "LOCAL_INLINE", "FCUART_Type"]
- `anchor`: "2.8.1.13"

### SEC-002-008-001-014
- `source_number`: `2.8.1.14`
- `title`: "void Lin_LL_ErrorInterruptHandler(const uint8 u8Module)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.14 void Lin_LL_ErrorInterruptHandler(const uint8 u8Module)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "LIN", "Uart", "FCUART", "u8Module", "eStatusType", "LOCAL_INLINE", "FCUART_Type"]
- `anchor`: "2.8.1.14"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "Peripheral Functions"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions"
- `physical_page_start`: `27`
- `physical_page_end`: `36`
- `printed_page_start`: `27`
- `printed_page_end`: `36`
- `keywords`: ["pUart", "LOCAL_INLINE", "FCUART_Type", "void", "UART", "Returns", "Referenced", "instance"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Functions in Lin_FCUart_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h"
- `physical_page_start`: `27`
- `physical_page_end`: `36`
- `printed_page_start`: `27`
- `printed_page_end`: `36`
- `keywords`: ["pUart", "LOCAL_INLINE", "FCUART_Type", "void", "UART", "Returns", "Referenced", "instance"]
- `anchor`: "2.9.1"

### SEC-002-009-001-001
- `source_number`: `2.9.1.1`
- `title`: "LOCAL_INLINE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.1 LOCAL_INLINE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "LIN", "Uart", "FCUART", "u8Module", "eStatusType", "LOCAL_INLINE", "FCUART_Type"]
- `anchor`: "2.9.1.1"

### SEC-002-009-001-002
- `source_number`: `2.9.1.2`
- `title`: "LOCAL_INLINE"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.2 LOCAL_INLINE"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "LIN", "Uart", "FCUART", "u8Module", "eStatusType", "LOCAL_INLINE", "FCUART_Type"]
- `anchor`: "2.9.1.2"

### SEC-002-009-001-003
- `source_number`: `2.9.1.3`
- `title`: "LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.3 LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "eStatusType"]
- `anchor`: "2.9.1.3"

### SEC-002-009-001-004
- `source_number`: `2.9.1.4`
- `title`: "LOCAL_INLINE void FCUART_HWA_StartTransmit(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.4 LOCAL_INLINE void FCUART_HWA_StartTransmit(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "eStatusType"]
- `anchor`: "2.9.1.4"

### SEC-002-009-001-005
- `source_number`: `2.9.1.5`
- `title`: "LOCAL_INLINE void FCUART_HWA_ClearTransmit(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.5 LOCAL_INLINE void FCUART_HWA_ClearTransmit(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "eStatusType"]
- `anchor`: "2.9.1.5"

### SEC-002-009-001-006
- `source_number`: `2.9.1.6`
- `title`: "LOCAL_INLINE void FCUART_HWA_StartReceive(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.6 LOCAL_INLINE void FCUART_HWA_StartReceive(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "eStatusType"]
- `anchor`: "2.9.1.6"

### SEC-002-009-001-007
- `source_number`: `2.9.1.7`
- `title`: "LOCAL_INLINE void FCUART_HWA_ClearReceive(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.7 LOCAL_INLINE void FCUART_HWA_ClearReceive(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "eStatusType"]
- `anchor`: "2.9.1.7"

### SEC-002-009-001-008
- `source_number`: `2.9.1.8`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.8 LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "Interrupt"]
- `anchor`: "2.9.1.8"

### SEC-002-009-001-009
- `source_number`: `2.9.1.9`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.9 LOCAL_INLINE void FCUART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "Interrupt"]
- `anchor`: "2.9.1.9"

### SEC-002-009-001-010
- `source_number`: `2.9.1.10`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.10 LOCAL_INLINE void FCUART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "Interrupt"]
- `anchor`: "2.9.1.10"

### SEC-002-009-001-011
- `source_number`: `2.9.1.11`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.11 LOCAL_INLINE void FCUART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "Interrupt"]
- `anchor`: "2.9.1.11"

### SEC-002-009-001-012
- `source_number`: `2.9.1.12`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.12 LOCAL_INLINE void FCUART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "Interrupt"]
- `anchor`: "2.9.1.12"

### SEC-002-009-001-013
- `source_number`: `2.9.1.13`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.13 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "u32Value"]
- `anchor`: "2.9.1.13"

### SEC-002-009-001-014
- `source_number`: `2.9.1.14`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.14 LOCAL_INLINE void FCUART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "u32Value"]
- `anchor`: "2.9.1.14"

### SEC-002-009-001-015
- `source_number`: `2.9.1.15`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.15 LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "u32Value"]
- `anchor`: "2.9.1.15"

### SEC-002-009-001-016
- `source_number`: `2.9.1.16`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetCtrl(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.16 LOCAL_INLINE void FCUART_HWA_SetCtrl(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "u32Value"]
- `anchor`: "2.9.1.16"

### SEC-002-009-001-017
- `source_number`: `2.9.1.17`
- `title`: "LOCAL_INLINE void FCUART_HWA_AttachCtrl(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.17 LOCAL_INLINE void FCUART_HWA_AttachCtrl(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "u32Value"]
- `anchor`: "2.9.1.17"

### SEC-002-009-001-018
- `source_number`: `2.9.1.18`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.18 LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "u32Value", "void"]
- `anchor`: "2.9.1.18"

### SEC-002-009-001-019
- `source_number`: `2.9.1.19`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.19 LOCAL_INLINE void FCUART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "u32Value", "void"]
- `anchor`: "2.9.1.19"

### SEC-002-009-001-020
- `source_number`: `2.9.1.20`
- `title`: "LOCAL_INLINE void FCUART_HWA_AttachBaud(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.20 LOCAL_INLINE void FCUART_HWA_AttachBaud(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "u32Value", "void"]
- `anchor`: "2.9.1.20"

### SEC-002-009-001-021
- `source_number`: `2.9.1.21`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetFifo(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.21 LOCAL_INLINE void FCUART_HWA_SetFifo(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "u32Value", "void"]
- `anchor`: "2.9.1.21"

### SEC-002-009-001-022
- `source_number`: `2.9.1.22`
- `title`: "LOCAL_INLINE void FCUART_HWA_AttachFifo(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.22 LOCAL_INLINE void FCUART_HWA_AttachFifo(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "u32Value", "void"]
- `anchor`: "2.9.1.22"

### SEC-002-009-001-023
- `source_number`: `2.9.1.23`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.23 LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "u32Value", "LOCAL_INLINE", "FCUART_Type", "void"]
- `anchor`: "2.9.1.23"

### SEC-002-009-001-024
- `source_number`: `2.9.1.24`
- `title`: "LOCAL_INLINE void FCUART_HWA_AttachWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.24 LOCAL_INLINE void FCUART_HWA_AttachWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "u32Value", "LOCAL_INLINE", "FCUART_Type", "void"]
- `anchor`: "2.9.1.24"

### SEC-002-009-001-025
- `source_number`: `2.9.1.25`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetMatch(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.25 LOCAL_INLINE void FCUART_HWA_SetMatch(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "u32Value", "LOCAL_INLINE", "FCUART_Type", "void"]
- `anchor`: "2.9.1.25"

### SEC-002-009-001-026
- `source_number`: `2.9.1.26`
- `title`: "LOCAL_INLINE void FCUART_HWA_AttachMatch(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.26 LOCAL_INLINE void FCUART_HWA_AttachMatch(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "u32Value", "LOCAL_INLINE", "FCUART_Type", "void"]
- `anchor`: "2.9.1.26"

### SEC-002-009-001-027
- `source_number`: `2.9.1.27`
- `title`: "LOCAL_INLINE uint32 FCUART_HWA_ReadSTAT(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.27 LOCAL_INLINE uint32 FCUART_HWA_ReadSTAT(FCUART_Type *pUart)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "u32Value", "LOCAL_INLINE", "FCUART_Type", "void"]
- `anchor`: "2.9.1.27"

### SEC-002-009-001-028
- `source_number`: `2.9.1.28`
- `title`: "LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "STAT"]
- `anchor`: "2.9.1.28"

### SEC-002-009-001-029
- `source_number`: `2.9.1.29`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBitModeAndParity(FCUART_Type *pUart, FCUART_BitModeType eBitMode,"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.29 LOCAL_INLINE void FCUART_HWA_SetBitModeAndParity(FCUART_Type *pUart, FCUART_BitModeType eBitMode,"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "STAT"]
- `anchor`: "2.9.1.29"

### SEC-002-009-001-030
- `source_number`: `2.9.1.30`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveDMA(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.30 LOCAL_INLINE void FCUART_HWA_EnableReceiveDMA(FCUART_Type *pUart)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "STAT"]
- `anchor`: "2.9.1.30"

### SEC-002-009-001-031
- `source_number`: `2.9.1.31`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveDMA(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.31 LOCAL_INLINE void FCUART_HWA_DisableReceiveDMA(FCUART_Type *pUart)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "STAT"]
- `anchor`: "2.9.1.31"

### SEC-002-009-001-032
- `source_number`: `2.9.1.32`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.32 LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "Returns", "void", "data"]
- `anchor`: "2.9.1.32"

### SEC-002-009-001-033
- `source_number`: `2.9.1.33`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveFIFO(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.33 LOCAL_INLINE void FCUART_HWA_DisableReceiveFIFO(FCUART_Type *pUart)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "Returns", "void", "data"]
- `anchor`: "2.9.1.33"

### SEC-002-009-001-034
- `source_number`: `2.9.1.34`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.34 LOCAL_INLINE void FCUART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "Returns", "void", "data"]
- `anchor`: "2.9.1.34"

### SEC-002-009-001-035
- `source_number`: `2.9.1.35`
- `title`: "LOCAL_INLINE uint8 FCUART_HWA_GetData(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.35 LOCAL_INLINE uint8 FCUART_HWA_GetData(FCUART_Type *pUart)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "Returns", "void", "data"]
- `anchor`: "2.9.1.35"

### SEC-002-009-001-036
- `source_number`: `2.9.1.36`
- `title`: "LOCAL_INLINE uint32 FCUART_HWA_GetDataRegStatus(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.36 LOCAL_INLINE uint32 FCUART_HWA_GetDataRegStatus(FCUART_Type *pUart)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "Returns", "void", "data"]
- `anchor`: "2.9.1.36"

### SEC-002-009-001-037
- `source_number`: `2.9.1.37`
- `title`: "LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.37 LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "Referenced"]
- `anchor`: "2.9.1.37"

### SEC-002-009-001-038
- `source_number`: `2.9.1.38`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableBreakDetectInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.38 LOCAL_INLINE void FCUART_HWA_DisableBreakDetectInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "Referenced"]
- `anchor`: "2.9.1.38"

### SEC-002-009-001-039
- `source_number`: `2.9.1.39`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableBreakDetectInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.39 LOCAL_INLINE void FCUART_HWA_EnableBreakDetectInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "Referenced"]
- `anchor`: "2.9.1.39"

### SEC-002-009-001-040
- `source_number`: `2.9.1.40`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBreakLength(FCUART_Type *pUart, Lin_BreakLengthType eBreakLen)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.40 LOCAL_INLINE void FCUART_HWA_SetBreakLength(FCUART_Type *pUart, Lin_BreakLengthType eBreakLen)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "Referenced"]
- `anchor`: "2.9.1.40"

### SEC-002-009-001-041
- `source_number`: `2.9.1.41`
- `title`: "LOCAL_INLINE void FCUART_HWA_SendBreakField(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.41 LOCAL_INLINE void FCUART_HWA_SendBreakField(FCUART_Type *pUart)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "Referenced"]
- `anchor`: "2.9.1.41"

### SEC-002-009-001-042
- `source_number`: `2.9.1.42`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.42 LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "interrupt"]
- `anchor`: "2.9.1.42"

### SEC-002-009-001-043
- `source_number`: `2.9.1.43`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.43 LOCAL_INLINE void FCUART_HWA_DisableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "interrupt"]
- `anchor`: "2.9.1.43"

### SEC-002-009-001-044
- `source_number`: `2.9.1.44`
- `title`: "LOCAL_INLINE uint32 FCUART_HWA_GetReceiveActiveInterruptStatus(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.44 LOCAL_INLINE uint32 FCUART_HWA_GetReceiveActiveInterruptStatus(FCUART_Type *pUart)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "interrupt"]
- `anchor`: "2.9.1.44"

### SEC-002-009-001-045
- `source_number`: `2.9.1.45`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetIdleConfig(FCUART_Type *pUart, Lin_IdleConfigType eType)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.45 LOCAL_INLINE void FCUART_HWA_SetIdleConfig(FCUART_Type *pUart, Lin_IdleConfigType eType)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "interrupt"]
- `anchor`: "2.9.1.45"

### SEC-002-009-001-046
- `source_number`: `2.9.1.46`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableIdleInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.46 LOCAL_INLINE void FCUART_HWA_EnableIdleInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "interrupt"]
- `anchor`: "2.9.1.46"

### SEC-002-009-001-047
- `source_number`: `2.9.1.47`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["LIN", "UART", "call", "frame", "LinIf_MainFunction_", "ChannelId", "LOCAL_INLINE", "FCUART_HWA_DisableIdleInterrupt"]
- `anchor`: "2.9.1.47"

### SEC-002-010
- `source_number`: `2.10`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram"
- `physical_page_start`: `37`
- `physical_page_end`: `39`
- `printed_page_start`: `37`
- `printed_page_end`: `39`
- `keywords`: ["LIN", "UART", "call", "frame", "LinIf_MainFunction_", "ChannelId", "FC7xxx", "transmission"]
- `anchor`: "2.10 API Sequence Diagram"

### SEC-002-010-001
- `source_number`: `2.10.1`
- `title`: "Frame Transmission"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Frame Transmission"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["LIN", "UART", "call", "frame", "LinIf_MainFunction_", "ChannelId", "LOCAL_INLINE", "FCUART_HWA_DisableIdleInterrupt"]
- `anchor`: "2.10.1"

### SEC-002-010-002
- `source_number`: `2.10.2`
- `title`: "Frame Reception"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `physical_page_start`: `38`
- `physical_page_end`: `39`
- `printed_page_start`: `38`
- `printed_page_end`: `39`
- `keywords`: ["LIN", "frame", "call", "FC7xxx", "LinIf_MainFunction_", "ChannelId", "RequestFrame", "AllocateRxBuffer"]
- `anchor`: "2.10.2"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `40`
- `physical_page_end`: `49`
- `printed_page_start`: `40`
- `printed_page_end`: `49`
- `keywords`: ["Variable", "LIN", "Screenshot", "Properties", "Property", "Lin", "Origin", "FCUART"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["LIN", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "FC7xxx", "VariantPreCompile", "Tresos", "Inclusion", "Relation"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `40`
- `physical_page_end`: `49`
- `printed_page_start`: `40`
- `printed_page_end`: `49`
- `keywords`: ["Variable", "LIN", "Screenshot", "Properties", "Property", "Lin", "Origin", "FCUART"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["LIN", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "FC7xxx", "VariantPreCompile", "Tresos", "Inclusion", "Relation"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "NonAutosar"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "LinDisableDemReportErrorStatus"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "LinMaxDataLength"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.2 LinMaxDataLength"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength"]
- `anchor`: "3.2.2.2"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "LinGlobalConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig"
- `physical_page_start`: `41`
- `physical_page_end`: `43`
- `printed_page_start`: `41`
- `printed_page_end`: `43`
- `keywords`: ["LIN", "FCUART", "Lin", "Variable", "Screenshot", "Properties", "Property", "Default"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "LinChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel"
- `physical_page_start`: `41`
- `physical_page_end`: `43`
- `printed_page_start`: `41`
- `printed_page_end`: `43`
- `keywords`: ["LIN", "FCUART", "Lin", "Variable", "Screenshot", "Properties", "Property", "Default"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-001-02
- `source_number`: `3.2.3.1.1`
- `title`: "LinChannelBaudRate"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "3.2.3.1.1"

### SEC-003-002-003-001-03
- `source_number`: `3.2.3.1.2`
- `title`: "LinChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.2 LinChannelId"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "3.2.3.1.2"

### SEC-003-002-003-001-04
- `source_number`: `3.2.3.1.3`
- `title`: "BreakLength"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.3 BreakLength"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "3.2.3.1.3"

### SEC-003-002-003-001-05
- `source_number`: `3.2.3.1.4`
- `title`: "BreakDelimiter"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "3.2.3.1.4"

### SEC-003-002-003-001-06
- `source_number`: `3.2.3.1.5`
- `title`: "LinHwChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.5 LinHwChannel"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "3.2.3.1.5"

### SEC-003-002-003-001-07
- `source_number`: `3.2.3.1.6`
- `title`: "LinChannelWakeupSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.6 LinChannelWakeupSupport"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "3.2.3.1.6"

### SEC-003-002-003-001-08
- `source_number`: `3.2.3.1.7`
- `title`: "LinChannelEcuMWakeupSource"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.7 LinChannelEcuMWakeupSource"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "3.2.3.1.7"

### SEC-003-002-003-001-09
- `source_number`: `3.2.3.1.8`
- `title`: "LinClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "3.2.3.1.8"

### SEC-003-002-003-001-10
- `source_number`: `3.2.3.1.9`
- `title`: "LinChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.9 LinChannelEcucPartitionRef"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "3.2.3.1.9"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "LinGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral"
- `physical_page_start`: `44`
- `physical_page_end`: `45`
- `printed_page_start`: `44`
- `printed_page_end`: `45`
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "Origin", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "LinDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.1 LinDevErrorDetect"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "LinMulticoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "3.2.4.2"

### SEC-003-002-004-003
- `source_number`: `3.2.4.3`
- `title`: "LinIndex"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.3 LinIndex"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "3.2.4.3"

### SEC-003-002-004-004
- `source_number`: `3.2.4.4`
- `title`: "LinTimeoutDuration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.4 LinTimeoutDuration"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "3.2.4.4"

### SEC-003-002-004-005
- `source_number`: `3.2.4.5`
- `title`: "LinVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.5 LinVersionInfoApi"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "3.2.4.5"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "LinDemEventParameterRefs"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "LIN_E_TIMEOUT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "3.2.5.1"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation"
- `physical_page_start`: `46`
- `physical_page_end`: `47`
- `printed_page_start`: `46`
- `printed_page_end`: `47`
- `keywords`: ["LIN", "Variable", "Screenshot", "Properties", "Property", "Integer_Label", "error", "Origin"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.1 ArReleaseMajorVersion"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.3 ArReleaseRevisionVersion"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.4 SwMajorVersion"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.5 SwMinorVersion"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.2.6.5"

### SEC-003-002-006-006
- `source_number`: `3.2.6.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "3.2.6.6"

### SEC-003-002-006-007
- `source_number`: `3.2.6.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.7 ModuleId"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "3.2.6.7"

### SEC-003-002-006-008
- `source_number`: `3.2.6.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.8 VendorId"
- `physical_page_start`: `48`
- `physical_page_end`: `48`
- `printed_page_start`: `48`
- `printed_page_end`: `48`
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "3.2.6.8"

### SEC-003-002-007
- `source_number`: `3.2.7`
- `title`: "LinEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 LinEcucPartitionRef"
- `physical_page_start`: `48`
- `physical_page_end`: `49`
- `printed_page_start`: `48`
- `printed_page_end`: `49`
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "FC7xxx", "Default", "SwPatchVersion"]
- `anchor`: "3.2.7"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `50`
- `physical_page_end`: `51`
- `printed_page_start`: `50`
- `printed_page_end`: `51`
- `keywords`: ["LIN", "UART", "Lin", "FCUART0", "FC7xxx", "Set", "PTB0", "PTB1"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "LIN Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.1 LIN Usage Common Steps"
- `physical_page_start`: `50`
- `physical_page_end`: `50`
- `printed_page_start`: `50`
- `printed_page_end`: `50`
- `keywords`: ["LIN", "UART", "Lin", "FC7xxx", "PTB0", "PTB1", "FCUART0", "Configure"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "LIN Channel Demo"
- `path`: "Chapter 4 Configuration Guides / 4.2 LIN Channel Demo"
- `physical_page_start`: `50`
- `physical_page_end`: `51`
- `printed_page_start`: `50`
- `printed_page_end`: `51`
- `keywords`: ["LIN", "UART", "Lin", "FCUART0", "FC7xxx", "Set", "PTB0", "PTB1"]
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
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 LIN Introduction ........................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["3.2.1", "IMPLEMENTATION_CONFIG_VARIANT .....................................................................…", "3.2.2", "NonAutosar ........................................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 LIN Introduction / 1.1 Requirements"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 1 LIN Introduction", "1.1", "Requirements", "The design of this module follows the specifications of the Lin driver specified in AUTOSAR Classic…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement", "api"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "Rejected Requirement 1 SWS_Lin_00026"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table"]
- `anchors`: ["Rejected Requirement 5 SWS_Lin_CONSTR_00279", "Description", "LinChannel and LinTrcvChannel of one communication channel shall all reference the", "same ECUC partition."]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.2", "File Structure", "2.3", "Macros"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["API service used with an invalid or inactive channel parameter.", "#define LIN_E_INVALID_POINTER ((uint8)0x03U)", "API service called with invalid configuration pointer.", "#define LIN_E_STATE_TRANSITION ((uint8)0x04U)"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define LIN_WAKEUPINTERNAL_ID ((uint8)0xBU)", "API Service ID for Lin_WakeUpInternal().", "#define LIN_UNINIT ((uint8)0x01U)", "Lin driver initialization states."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define LIN_NO_ERROR ((uint8)0x00U)", "Interrupt Errors conditions. No error occurred on a channel.", "#define LIN_BIT_ERROR ((uint8)0x01U)", "Interrupt Errors conditions. Bit error on a channel:"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Lin_version.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define LIN_TX_SLAVE_RES_COMMAND ((uint8)0x02U)", "Commands IDs. Tx frame is a slave frame (response is provided by slave).", "#define LIN_TX_SLEEP_COMMAND ((uint8)0x03U)", "Commands IDs. Tx frame is a sleep command frame."]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Lin_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define LIN_CFG_SW_MAJOR_VERSION 0", "#define LIN_CFG_SW_MINOR_VERSION 6", "#define LIN_CFG_SW_PATCH_VERSION 0", "#define LIN_INSTANCE_COUNT 18U"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.1 Lin_FrameCsModelType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define LIN_CORE_CONFIGPTR_UINIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}", "Init variable Lin_FCUart_pConfig", "#define LIN_CHMAP_UNINT_ARRAY {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x…", "0xFF, 0xFF, 0xFF, 0xFF, 0xFF}"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.2 Lin_FrameResponseType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.4.1.2", "Lin_FrameResponseType", "Enumeration", "Lin_FrameResponseType"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.4.2", "Enums in Lin_Cfg.h", "2.4.2.1", "Lin_BreakDelimiterType"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Lin_ChannelType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Lin_BreakDelimiterType eLinBreakDelimiterLen;", "Lin break delimiter length.", "uint32 u32LinBaudRate", "Lin baudrate configure."]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7", "API Functions", "2.7.1", "Functions in Lin.h"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Channel", "LIN channel to be addressed.", "Returns", "Std_ReturnType"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Description", "Returns the version information of this module.", "Diagram", "Parameters"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.4 Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.8.1.4", "Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)", "Function", "Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.8 void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["pPduInfoPtr", "Pointer to PDU containing the PID, Checksum model, Response type, Dl", "and SDU data pointer.", "Returns"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.13 void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "This function shall manage the RX ISRs on the addressed channel when the frame command is a slave", "response command.", "Parameters"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.3 LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["eStatusType", "Interrupt stat type.", "Returns", "FCUART CTRL interrupt status flag"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.8 LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Referenced By", "N/A", "2.9.1.8", "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.13 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.13", "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)", "Function", "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.18 LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.18", "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLe…", "Function", "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.23 LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["u32Value", "Written value.", "Returns", "N/A"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "Read FCUART STAT register.", "Parameters", "Parameter"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.32 LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Returns", "N/A", "Referenced By", "N/A"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.37 LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Referenced By", "N/A", "2.9.1.37", "LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.42 LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Referenced By", "N/A", "2.9.1.42", "LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Referenced By", "N/A", "2.9.1.47", "LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.10.2", "Frame Reception", "The following use case shows the reception of a LIN frame. The first call of the LinIf_MainFunction…", "transmission of the header. During the second call, the frame is under transmission. In the third c…"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 39"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The container inclusion relation is shown below:"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2.2", "NonAutosar", "Container", "NonAutosar"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "This container contains the configuration (parameters) of the LIN Controller(s)", "Screenshot", "Properties"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Type", "Variable:reference", "Origin", "AUTOSAR_ECUC"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.4.2", "LinMulticoreSupport", "Variable", "LinMulticoreSupport"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["Default", "False", "3.2.5", "LinDemEventParameterRefs"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Default", "3.2.6.2", "ArReleaseMinorVersion", "Variable"]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["SymbolicNameValue", "False", "Default", "3.2.6.6"]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 LinEcucPartitionRef"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "N/A"]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 LIN Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "LIN Usage Common Steps", "Basically, the LIN module can be configured by following the below 3 steps:"]

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 LIN Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3)", "Set Lin channel baud rate and specify the UART number. In this demo, FCUART0 is selected, and the b…", "9600. Choose the clock reference FCUART0. Wakeup support and wakeup source can only be set after th…", "reference is created in EcuM."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx LIN User Manual"
- `keywords`: ["LIN", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx LIN User Manual; Revision History; 0.1"
- `keywords`: ["LIN", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
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
- `summary`: "Table of Contents: FC7xxx LIN User Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["LIN", "Lin", "Lin_Cfg", "Lin_GeneralTypes", "FC7xxx", "Lin_version", "Lin_ConfigType", "Lin_CoreConfigType", "Lin_ChannelType", "Lin_PduType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 LIN Introduction ................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image", "config"]
- `summary`: "Table of Contents: FC7xxx LIN User Manual; 3.2.1; IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 40"
- `keywords`: ["LIN", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "NonAutosar", "LinGlobalConfig", "LinGeneral", "LinDemEventParameterRefs", "CommonPublishedInformation", "LinEcucPartitionRef", "Guides"]
- `anchors`:
  - `p4`: "3.2.1"
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 40"
  - `p4`: "3.2.2"
  - `p4`: "NonAutosar ................................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 LIN Introduction / 1.1 Requirements"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 1 LIN Introduction / 1.1 Requirements: FC7xxx LIN User Manual; Chapter 1 LIN Introduction; 1.1"
- `keywords`: ["LIN", "FCUART", "Lin", "receiver", "bit", "can", "FIFO", "FC7xxx", "NRZ", "data"]
- `anchors`:
  - `p5`: "Chapter 1 LIN Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirements"
  - `p5`: "The design of this module follows the specifications of the Lin driver specified in AUTOSAR Classic Platform Release 4.6.0. For"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "requirement", "api"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx LIN User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["LIN", "FCUART", "UART", "FC7xxx", "Rejected", "Requirement", "different", "Vendor", "name", "Lin_GeneralTypes"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "Rejected Requirements"
  - `p6`: "Rejected Requirement 1 SWS_Lin_00026"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx LIN User Manual; Rejected Requirement 5 SWS_Lin_CONSTR_00279; Description"
- `keywords`: ["LIN", "Uart", "Lin", "FC7xxx", "SWS_Lin_CONSTR_00279", "LinChannel", "LinTrcvChannel", "ECUC", "LinTrcv", "SWS_Lin_CONSTR_00246"]
- `anchors`:
  - `p7`: "Rejected Requirement 5 SWS_Lin_CONSTR_00279"
  - `p7`: "Description"
  - `p7`: "LinChannel and LinTrcvChannel of one communication channel shall all reference the"
  - `p7`: "same ECUC partition."

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h: FC7xxx LIN User Manual; 2.2; File Structure"
- `keywords`: ["LIN", "Lin", "FC7xxx", "define", "LIN_INSTANCE_ID", "LIN_E_UNINIT", "ADC", "LIN_E_INVALID_CHANNEL", "Structure", "Instance"]
- `anchors`:
  - `p8`: "2.2"
  - `p8`: "File Structure"
  - `p8`: "2.3"
  - `p8`: "Macros"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h: FC7xxx LIN User Manual; API service used with an invalid or inactive channel parameter.; #define LIN_E_INVALID_POINTER ((uint8)0x03U)"
- `keywords`: ["LIN", "Lin", "define", "FC7xxx", "LIN_E_INVALID_POINTER", "LIN_E_STATE_TRANSITION", "LIN_E_PARAM_POINTER", "LIN_E_TIMEOUT", "LIN_E_ALREADY_INITIALIZED", "LIN_INIT_ID"]
- `anchors`:
  - `p9`: "API service used with an invalid or inactive channel parameter."
  - `p9`: "#define LIN_E_INVALID_POINTER ((uint8)0x03U)"
  - `p9`: "API service called with invalid configuration pointer."
  - `p9`: "#define LIN_E_STATE_TRANSITION ((uint8)0x04U)"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h: FC7xxx LIN User Manual; #define LIN_WAKEUPINTERNAL_ID ((uint8)0xBU); API Service ID for Lin_WakeUpInternal()."
- `keywords`: ["Lin", "LIN", "define", "states", "Channel", "frame", "channel", "FC7xxx", "LIN_WAKEUPINTERNAL_ID", "Lin_WakeUpInternal"]
- `anchors`:
  - `p10`: "#define LIN_WAKEUPINTERNAL_ID ((uint8)0xBU)"
  - `p10`: "API Service ID for Lin_WakeUpInternal()."
  - `p10`: "#define LIN_UNINIT ((uint8)0x01U)"
  - `p10`: "Lin driver initialization states."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h: FC7xxx LIN User Manual; #define LIN_NO_ERROR ((uint8)0x00U); Interrupt Errors conditions. No error occurred on a channel."
- `keywords`: ["LIN", "define", "Interrupt", "Errors", "conditions", "error", "channel", "data", "RECVBUF", "FC7xxx"]
- `anchors`:
  - `p11`: "#define LIN_NO_ERROR ((uint8)0x00U)"
  - `p11`: "Interrupt Errors conditions. No error occurred on a channel."
  - `p11`: "#define LIN_BIT_ERROR ((uint8)0x01U)"
  - `p11`: "Interrupt Errors conditions. Bit error on a channel:"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Lin_version.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Lin_version.h: FC7xxx LIN User Manual; #define LIN_TX_SLAVE_RES_COMMAND ((uint8)0x02U); Commands IDs. Tx frame is a slave frame (response is provided by slave)."
- `keywords`: ["LIN", "define", "IDs", "frame", "Commands", "FC7xxx", "LIN_TX_SLAVE_RES_COMMAND", "slave", "LIN_TX_SLEEP_COMMAND", "LIN_TX_NO_COMMAND"]
- `anchors`:
  - `p12`: "#define LIN_TX_SLAVE_RES_COMMAND ((uint8)0x02U)"
  - `p12`: "Commands IDs. Tx frame is a slave frame (response is provided by slave)."
  - `p12`: "#define LIN_TX_SLEEP_COMMAND ((uint8)0x03U)"
  - `p12`: "Commands IDs. Tx frame is a sleep command frame."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Lin_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Lin_Cfg.h: FC7xxx LIN User Manual; #define LIN_CFG_SW_MAJOR_VERSION 0; #define LIN_CFG_SW_MINOR_VERSION 6"
- `keywords`: ["LIN", "FCUART", "Lin", "define", "LINFlex", "was", "enable", "when", "platform", "has"]
- `anchors`:
  - `p13`: "#define LIN_CFG_SW_MAJOR_VERSION 0"
  - `p13`: "#define LIN_CFG_SW_MINOR_VERSION 6"
  - `p13`: "#define LIN_CFG_SW_PATCH_VERSION 0"
  - `p13`: "#define LIN_INSTANCE_COUNT 18U"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.1 Lin_FrameCsModelType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.1 Lin_FrameCsModelType: FC7xxx LIN User Manual; #define LIN_CORE_CONFIGPTR_UINIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}; Init variable Lin_FCUart_pConfig"
- `keywords`: ["LIN", "FCUART", "Lin", "define", "NULL_PTR", "STD_OFF", "STD_ON", "ISR", "Lin_FrameCsModelType", "FC7xxx"]
- `anchors`:
  - `p14`: "#define LIN_CORE_CONFIGPTR_UINIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}"
  - `p14`: "Init variable Lin_FCUart_pConfig"
  - `p14`: "#define LIN_CHMAP_UNINT_ARRAY {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,"
  - `p14`: "0xFF, 0xFF, 0xFF, 0xFF, 0xFF}"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.2 Lin_FrameResponseType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.2 Lin_FrameResponseType: FC7xxx LIN User Manual; 2.4.1.2; Lin_FrameResponseType"
- `keywords`: ["LIN", "error", "response", "Lin_FrameResponseType", "Response", "node", "Lin_StatusType", "transmission", "FC7xxx", "LIN_FRAMERESPONSE_TX"]
- `anchors`:
  - `p15`: "2.4.1.2"
  - `p15`: "Lin_FrameResponseType"
  - `p15`: "Enumeration"
  - `p15`: "Lin_FrameResponseType"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType: FC7xxx LIN User Manual; 2.4.2; Enums in Lin_Cfg.h"
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break", "LEN_DELIMITER_1BIT", "length"]
- `anchors`:
  - `p16`: "2.4.2"
  - `p16`: "Enums in Lin_Cfg.h"
  - `p16`: "2.4.2.1"
  - `p16`: "Lin_BreakDelimiterType"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Lin_ChannelType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Lin_ChannelType: FC7xxx LIN User Manual; Lin_BreakDelimiterType eLinBreakDelimiterLen;; Lin break delimiter length."
- `keywords`: ["Lin", "LIN", "Lin_ChannelType", "Lin_PduType", "FC7xxx", "Lin_BreakDelimiterType", "eLinBreakDelimiterLen", "u32LinBaudRate", "u32LinSampSbr_RegVal", "SAMP"]
- `anchors`:
  - `p17`: "Lin_BreakDelimiterType eLinBreakDelimiterLen;"
  - `p17`: "Lin break delimiter length."
  - `p17`: "uint32 u32LinBaudRate"
  - `p17`: "Lin baudrate configure."

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config): FC7xxx LIN User Manual; 2.7; API Functions"
- `keywords`: ["Lin", "LIN", "Lin_Init", "Lin_ConfigType", "Std_ReturnType", "Lin_CheckWakeup", "FC7xxx", "Config", "void", "const"]
- `anchors`:
  - `p18`: "2.7"
  - `p18`: "API Functions"
  - `p18`: "2.7.1"
  - `p18`: "Functions in Lin.h"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);: FC7xxx LIN User Manual; Channel; LIN channel to be addressed."
- `keywords`: ["LIN", "Lin", "Channel", "channel", "Std_ReturnType", "Lin_StatusType", "Lin_SduPtr", "Lin_GetStatus", "transmission", "Lin_GoToSleep"]
- `anchors`:
  - `p19`: "Channel"
  - `p19`: "LIN channel to be addressed."
  - `p19`: "Returns"
  - `p19`: "Std_ReturnType"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel): FC7xxx LIN User Manual; Diagram; Parameters"
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Lin_GoToSleepInternal", "FC7xxx", "Channel", "channel", "LIN_CH_SLEEP", "state", "Diagram"]
- `anchors`:
  - `p20`: "Diagram"
  - `p20`: "Parameters"
  - `p20`: "Parameter"
  - `p20`: "Description"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr): FC7xxx LIN User Manual; Diagram; Parameters"
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "PduInfoPtr", "Lin_SendFrame", "Lin_PduType", "response", "FC7xxx", "Channel", "slave"]
- `anchors`:
  - `p21`: "Diagram"
  - `p21`: "Parameters"
  - `p21`: "Parameter"
  - `p21`: "Description"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel): FC7xxx LIN User Manual; Diagram; Parameters"
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Lin_Wakeup", "FC7xxx", "Channel", "PduInfoPtr", "PDU", "LIN_CH_OPERATIONAL", "channel"]
- `anchors`:
  - `p22`: "Diagram"
  - `p22`: "Parameters"
  - `p22`: "Parameter"
  - `p22`: "Description"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel): FC7xxx LIN User Manual; Diagram; Parameters"
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Channel", "channel", "Lin_WakeupInternal", "Lin_GetVersionInfo", "Std_VersionInfoType", "FC7xxx", "LIN_CH_OPERATIONAL"]
- `anchors`:
  - `p23`: "Diagram"
  - `p23`: "Parameters"
  - `p23`: "Parameter"
  - `p23`: "Description"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig): FC7xxx LIN User Manual; Description; Returns the version information of this module."
- `keywords`: ["LIN", "Lin", "channel", "u8Channel", "Returns", "addressed", "Std_ReturnType", "Lin_StatusType", "pu8LinSdu", "Lin_LL_ChannelInit"]
- `anchors`:
  - `p24`: "Description"
  - `p24`: "Returns the version information of this module."
  - `p24`: "Diagram"
  - `p24`: "Parameters"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.4 Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.4 Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module): FC7xxx LIN User Manual; 2.8.1.4; Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `keywords`: ["LIN", "Lin", "u8Channel", "Std_ReturnType", "u8Module", "pPduInfoPtr", "Lin_PduType", "transmission", "frame", "Lin_LL_SendResponse"]
- `anchors`:
  - `p25`: "2.8.1.4"
  - `p25`: "Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
  - `p25`: "Function"
  - `p25`: "Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.8 void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.8 void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module): FC7xxx LIN User Manual; pPduInfoPtr; Pointer to PDU containing the PID, Checksum model, Response type, Dl"
- `keywords`: ["LIN", "Lin", "Uart", "u8Module", "void", "u8Channel", "channel", "Returns", "Referenced", "Lin_LL_WakeUp"]
- `anchors`:
  - `p26`: "pPduInfoPtr"
  - `p26`: "Pointer to PDU containing the PID, Checksum model, Response type, Dl"
  - `p26`: "and SDU data pointer."
  - `p26`: "Returns"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.13 void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.13 void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel): FC7xxx LIN User Manual; Description; This function shall manage the RX ISRs on the addressed channel when the frame command is a slave"
- `keywords`: ["UART", "LIN", "Uart", "FCUART", "u8Module", "eStatusType", "LOCAL_INLINE", "FCUART_Type", "pUart", "ISRs"]
- `anchors`:
  - `p27`: "Description"
  - `p27`: "This function shall manage the RX ISRs on the addressed channel when the frame command is a slave"
  - `p27`: "response command."
  - `p27`: "Parameters"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.3 LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.3 LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType): FC7xxx LIN User Manual; eStatusType; Interrupt stat type."
- `keywords`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "eStatusType", "Returns", "instance"]
- `anchors`:
  - `p28`: "eStatusType"
  - `p28`: "Interrupt stat type."
  - `p28`: "Returns"
  - `p28`: "FCUART CTRL interrupt status flag"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.8 LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.8 LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart): FC7xxx LIN User Manual; Referenced By; N/A"
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "Interrupt", "instance", "Returns"]
- `anchors`:
  - `p29`: "Referenced By"
  - `p29`: "N/A"
  - `p29`: "2.9.1.8"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.13 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.13 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart): FC7xxx LIN User Manual; 2.9.1.13; LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "u32Value", "instance", "Returns"]
- `anchors`:
  - `p30`: "2.9.1.13"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
  - `p30`: "Function"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.18 LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.18 LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen): FC7xxx LIN User Manual; 2.9.1.18; LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_Break…"
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "u32Value", "void", "eBreakLen", "instance"]
- `anchors`:
  - `p31`: "2.9.1.18"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
  - `p31`: "Function"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.23 LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.23 LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value): FC7xxx LIN User Manual; u32Value; Written value."
- `keywords`: ["FCUART", "UART", "LIN", "pUart", "u32Value", "LOCAL_INLINE", "FCUART_Type", "void", "Written", "Returns"]
- `anchors`:
  - `p32`: "u32Value"
  - `p32`: "Written value."
  - `p32`: "Returns"
  - `p32`: "N/A"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value): FC7xxx LIN User Manual; Description; Read FCUART STAT register."
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "STAT", "instance", "eBitMode"]
- `anchors`:
  - `p33`: "Description"
  - `p33`: "Read FCUART STAT register."
  - `p33`: "Parameters"
  - `p33`: "Parameter"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.32 LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.32 LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart): FC7xxx LIN User Manual; Returns; N/A"
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "Returns", "void", "data", "Referenced", "instance"]
- `anchors`:
  - `p34`: "Returns"
  - `p34`: "N/A"
  - `p34`: "Referenced By"
  - `p34`: "N/A"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.37 LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.37 LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart): FC7xxx LIN User Manual; Referenced By; N/A"
- `keywords`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "Referenced", "Returns", "Lin_BreakLengthType"]
- `anchors`:
  - `p35`: "Referenced By"
  - `p35`: "N/A"
  - `p35`: "2.9.1.37"
  - `p35`: "LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.42 LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.42 LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart): FC7xxx LIN User Manual; Referenced By; N/A"
- `keywords`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Referenced", "interrupt", "instance", "Returns"]
- `anchors`:
  - `p36`: "Referenced By"
  - `p36`: "N/A"
  - `p36`: "2.9.1.42"
  - `p36`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart): FC7xxx LIN User Manual; Referenced By; N/A"
- `keywords`: ["LIN", "UART", "call", "frame", "LinIf_MainFunction_", "ChannelId", "LOCAL_INLINE", "FCUART_HWA_DisableIdleInterrupt", "FCUART_Type", "FC7xxx"]
- `anchors`:
  - `p37`: "Referenced By"
  - `p37`: "N/A"
  - `p37`: "2.9.1.47"
  - `p37`: "LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception: FC7xxx LIN User Manual; 2.10.2; Frame Reception"
- `keywords`: ["LIN", "frame", "call", "LinIf_MainFunction_", "ChannelId", "FC7xxx", "RequestFrame", "AllocateRxBuffer", "transmission", "Frame"]
- `anchors`:
  - `p38`: "2.10.2"
  - `p38`: "Frame Reception"
  - `p38`: "The following use case shows the reception of a LIN frame. The first call of the LinIf_MainFunction_<ChannelId> requests"
  - `p38`: "transmission of the header. During the second call, the frame is under transmission. In the third call, the frame is finished (this"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception: FC7xxx LIN User Manual"
- `keywords`: ["LIN", "FC7xxx"]
- `anchors`:
  - `p39`: "no body anchor extracted"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT: FC7xxx LIN User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["LIN", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "FC7xxx", "VariantPreCompile", "Tresos", "Inclusion", "Relation", "inclusion", "relation"]
- `anchors`:
  - `p40`: "Chapter 3 Tresos Configuration Items"
  - `p40`: "3.1"
  - `p40`: "Container Inclusion Relation"
  - `p40`: "The container inclusion relation is shown below:"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus: FC7xxx LIN User Manual; 3.2.2; NonAutosar"
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength", "LinGlobalConfig", "LinChannel"]
- `anchors`:
  - `p41`: "3.2.2"
  - `p41`: "NonAutosar"
  - `p41`: "Container"
  - `p41`: "NonAutosar"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate: FC7xxx LIN User Manual; Description; This container contains the configuration (parameters) of the LIN Controller(s)"
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength", "FC7xxx", "Properties"]
- `anchors`:
  - `p42`: "Description"
  - `p42`: "This container contains the configuration (parameters) of the LIN Controller(s)"
  - `p42`: "Screenshot"
  - `p42`: "Properties"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter: FC7xxx LIN User Manual; Properties; Property"
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default", "BreakDelimiter", "Screenshot"]
- `anchors`:
  - `p43`: "Properties"
  - `p43`: "Property"
  - `p43`: "Value"
  - `p43`: "Type"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef: FC7xxx LIN User Manual; Type; Variable:reference"
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef", "Screenshot", "Properties"]
- `anchors`:
  - `p44`: "Type"
  - `p44`: "Variable:reference"
  - `p44`: "Origin"
  - `p44`: "AUTOSAR_ECUC"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport: FC7xxx LIN User Manual; 3.2.4.2; LinMulticoreSupport"
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "Origin"]
- `anchors`:
  - `p45`: "3.2.4.2"
  - `p45`: "LinMulticoreSupport"
  - `p45`: "Variable"
  - `p45`: "LinMulticoreSupport"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT: FC7xxx LIN User Manual; Default; False"
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchors`:
  - `p46`: "Default"
  - `p46`: "False"
  - `p46`: "3.2.5"
  - `p46`: "LinDemEventParameterRefs"

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion: FC7xxx LIN User Manual; Default; 3.2.6.2"
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number", "AUTOSAR", "implementation"]
- `anchors`:
  - `p47`: "Default"
  - `p47`: "3.2.6.2"
  - `p47`: "ArReleaseMinorVersion"
  - `p47`: "Variable"

### SEG-0048
- `physical_pages`: `48`
- `printed_pages`: `48`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion: FC7xxx LIN User Manual; SymbolicNameValue; False"
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "Default", "SwPatchVersion", "ModuleId", "VendorId", "FC7xxx"]
- `anchors`:
  - `p48`: "SymbolicNameValue"
  - `p48`: "False"
  - `p48`: "Default"
  - `p48`: "3.2.6.6"

### SEG-0049
- `physical_pages`: `49`
- `printed_pages`: `49`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 LinEcucPartitionRef"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 LinEcucPartitionRef: FC7xxx LIN User Manual; Screenshot; Properties"
- `keywords`: ["LIN", "FC7xxx", "Screenshot", "Properties"]
- `anchors`:
  - `p49`: "Screenshot"
  - `p49`: "Properties"
  - `p49`: "N/A"

### SEG-0050
- `physical_pages`: `50`
- `printed_pages`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 LIN Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 LIN Usage Common Steps: FC7xxx LIN User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["LIN", "UART", "Lin", "FC7xxx", "PTB0", "PTB1", "FCUART0", "Configure", "general", "configurations"]
- `anchors`:
  - `p50`: "Chapter 4 Configuration Guides"
  - `p50`: "4.1"
  - `p50`: "LIN Usage Common Steps"
  - `p50`: "Basically, the LIN module can be configured by following the below 3 steps:"

### SEG-0051
- `physical_pages`: `51`
- `printed_pages`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 LIN Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 LIN Channel Demo: FC7xxx LIN User Manual; 3); Set Lin channel baud rate and specify the UART number. In this demo, FCUART0 is selected, and the baud rate is"
- `keywords`: ["LIN", "UART", "Lin", "FCUART0", "FC7xxx", "EcuM", "baud", "rate", "reference", "Set"]
- `anchors`:
  - `p51`: "3)"
  - `p51`: "Set Lin channel baud rate and specify the UART number. In this demo, FCUART0 is selected, and the baud rate is"
  - `p51`: "9600. Choose the clock reference FCUART0. Wakeup support and wakeup source can only be set after the source"
  - `p51`: "reference is created in EcuM."

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

### TBL-0005-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0005-001"
- `caption`: "Table-like content on page 5"
- `physical_pages`: `5`
- `printed_pages`: ["5"]
- `section_path`: "Chapter 1 LIN Introduction / 1.1 Requirements"
- `bbox`: `None`
- `key_fields`: ["LIN", "FCUART", "Lin", "receiver", "bit"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "FC7xxx", "define", "LIN_INSTANCE_ID"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "define", "FC7xxx", "LIN_E_INVALID_POINTER"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `None`
- `key_fields`: ["Lin", "LIN", "define", "states", "Channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 10; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 10"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like content on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `None`
- `key_fields`: ["LIN", "define", "Interrupt", "Errors", "conditions"]
- `summary`: "Indexes table-like source content for Table-like content on page 11; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 11"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Lin_version.h"
- `bbox`: `None`
- `key_fields`: ["LIN", "define", "IDs", "frame", "Commands"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like content on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Lin_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["LIN", "FCUART", "Lin", "define", "LINFlex"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.1 Lin_FrameCsModelType"
- `bbox`: `None`
- `key_fields`: ["LIN", "FCUART", "Lin", "define", "NULL_PTR"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Lin_GeneralTypes.h / 2.4.1.2 Lin_FrameResponseType"
- `bbox`: `None`
- `key_fields`: ["LIN", "error", "response", "Lin_FrameResponseType", "Response"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Lin_ChannelType"
- `bbox`: `None`
- `key_fields`: ["Lin", "LIN", "Lin_ChannelType", "Lin_PduType", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `bbox`: `None`
- `key_fields`: ["Lin", "LIN", "Lin_Init", "Lin_ConfigType", "Std_ReturnType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Channel", "channel", "Std_ReturnType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Std_ReturnType", "Lin_GoToSleepInternal", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Std_ReturnType", "PduInfoPtr", "Lin_SendFrame"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Std_ReturnType", "Lin_Wakeup", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Std_ReturnType", "Channel", "channel"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "channel", "u8Channel", "Returns"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.4 Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "u8Channel", "Std_ReturnType", "u8Module"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.8 void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Uart", "u8Module", "void"]
- `summary`: "Indexes table-like source content for Table-like content on page 26; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 26"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0027-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0027-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `27`
- `printed_pages`: ["27"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.13 void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)"
- `bbox`: `None`
- `key_fields`: ["UART", "LIN", "Uart", "FCUART", "u8Module"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0028-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0028-001"
- `caption`: "Table-like content on page 28"
- `physical_pages`: `28`
- `printed_pages`: ["28"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.3 LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `bbox`: `None`
- `key_fields`: ["UART", "LIN", "FCUART", "pUart", "LOCAL_INLINE"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.8 LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.13 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.18 LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `bbox`: `None`
- `key_fields`: ["FCUART", "UART", "LIN", "pUart", "LOCAL_INLINE"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.23 LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["FCUART", "UART", "LIN", "pUart", "u32Value"]
- `summary`: "Indexes table-like source content for Table-like content on page 32; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 32"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0033-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0033-001"
- `caption`: "Table-like content on page 33"
- `physical_pages`: `33`
- `printed_pages`: ["33"]
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.32 LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.37 LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["LIN", "UART", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.42 LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["LIN", "UART", "call", "frame", "LinIf_MainFunction_"]
- `summary`: "Indexes table-like source content for Table-like content on page 37; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 37"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0040-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0040-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `40`
- `printed_pages`: ["40"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `None`
- `key_fields`: ["LIN", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "FC7xxx", "VariantPreCompile"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0041-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0041-001"
- `caption`: "Table-like content on page 41"
- `physical_pages`: `41`
- `printed_pages`: ["41"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `bbox`: `None`
- `key_fields`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Variable", "Properties", "Property"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC"]
- `summary`: "Indexes table-like source content for Table-like content on page 44; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 44"
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
- `keywords`: ["LIN", "Lin", "Lin_Cfg", "Lin_GeneralTypes", "FC7xxx", "Lin_version", "Lin_ConfigType", "Lin_CoreConfigType"]
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
- `keywords`: ["LIN", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "NonAutosar", "LinGlobalConfig", "LinGeneral", "LinDemEventParameterRefs", "CommonPublishedInformation"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0008-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0008-001"
- `caption`: "Image block near 2.3.1 Macros in Lin.h"
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `[36.0, 57.6, 559.3, 214.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in Lin.h; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "FC7xxx", "define", "LIN_INSTANCE_ID", "LIN_E_UNINIT", "ADC", "LIN_E_INVALID_CHANNEL"]
- `anchor`: "Image block near 2.3.1 Macros in Lin.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0008-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0008-002"
- `caption`: "Image block near 2.3.1 Macros in Lin.h"
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `[36.0, 221.1, 559.3, 378.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in Lin.h; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "FC7xxx", "define", "LIN_INSTANCE_ID", "LIN_E_UNINIT", "ADC", "LIN_E_INVALID_CHANNEL"]
- `anchor`: "Image block near 2.3.1 Macros in Lin.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0008-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0008-003"
- `caption`: "Image block near 2.3.1 Macros in Lin.h"
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Lin.h"
- `bbox`: `[36.0, 384.6, 559.3, 571.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in Lin.h; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "FC7xxx", "define", "LIN_INSTANCE_ID", "LIN_E_UNINIT", "ADC", "LIN_E_INVALID_CHANNEL"]
- `anchor`: "Image block near 2.3.1 Macros in Lin.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 2.4.2.1 Lin_BreakDelimiterType"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType"
- `bbox`: `[116.3, 432.15, 223.34, 563.25]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.4.2.1 Lin_BreakDelimiterType; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break"]
- `anchor`: "Image block near 2.4.2.1 Lin_BreakDelimiterType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-002"
- `caption`: "Image block near 2.4.2.1 Lin_BreakDelimiterType"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Lin_Cfg.h / 2.4.2.1 Lin_BreakDelimiterType"
- `bbox`: `[116.3, 675.95, 214.65, 750.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.4.2.1 Lin_BreakDelimiterType; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Lin_CoreConfigType", "Lin_BreakDelimiterType", "Lin_ConfigType", "FC7xxx", "Lin_Cfg", "break"]
- `anchor`: "Image block near 2.4.2.1 Lin_BreakDelimiterType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Generated visual anchor: 2.6.3 Lin_ChannelType"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Lin_ChannelType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.3 Lin_ChannelType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["Lin", "LIN", "Lin_ChannelType", "Lin_PduType", "FC7xxx", "Lin_BreakDelimiterType", "eLinBreakDelimiterLen", "u32LinBaudRate"]
- `anchor`: "2.6.3 Lin_ChannelType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `bbox`: `[116.3, 141.67, 363.55, 551.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config); use the source PDF page for exact visual details."
- `keywords`: ["Lin", "LIN", "Lin_Init", "Lin_ConfigType", "Std_ReturnType", "Lin_CheckWakeup", "FC7xxx", "Config"]
- `anchor`: "Image block near 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `bbox`: `[116.3, 679.24, 442.01, 764.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config); use the source PDF page for exact visual details."
- `keywords`: ["Lin", "LIN", "Lin_Init", "Lin_ConfigType", "Std_ReturnType", "Lin_CheckWakeup", "FC7xxx", "Config"]
- `anchor`: "Image block near 2.7.1.1 void Lin_Init(const Lin_ConfigType* Config)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `bbox`: `[116.35, 181.4, 456.43, 339.8]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Channel", "channel", "Std_ReturnType", "Lin_StatusType", "Lin_SduPtr", "Lin_GetStatus"]
- `anchor`: "Image block near 2.7.1.3 Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `bbox`: `[116.3, 37.4, 553.65, 406.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel); use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Lin_GoToSleepInternal", "FC7xxx", "Channel", "channel", "LIN_CH_SLEEP"]
- `anchor`: "Image block near 2.7.1.5 Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `bbox`: `[116.3, 37.4, 456.43, 289.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr); use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "PduInfoPtr", "Lin_SendFrame", "Lin_PduType", "response", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.6 Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `bbox`: `[116.3, 37.4, 553.65, 482.79]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel); use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Lin_Wakeup", "FC7xxx", "Channel", "PduInfoPtr", "PDU"]
- `anchor`: "Image block near 2.7.1.7 Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `bbox`: `[116.3, 37.39, 456.4, 319.29]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel); use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Channel", "channel", "Lin_WakeupInternal", "Lin_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "Image block near 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Lin.h / 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `bbox`: `[116.3, 464.4, 456.45, 670.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel); use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Std_ReturnType", "Channel", "channel", "Lin_WakeupInternal", "Lin_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "Image block near 2.7.1.8 Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Lin_FCUart.h / 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `bbox`: `[116.3, 54.83, 455.88, 78.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig); use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "channel", "u8Channel", "Returns", "addressed", "Std_ReturnType", "Lin_StatusType"]
- `anchor`: "Image block near 2.8.1.1 void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Generated visual anchor: 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value); generated for retrieval because no formal figure number was detected."
- `keywords`: ["UART", "FCUART", "LIN", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "STAT"]
- `anchor`: "2.9.1.28 LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Generated visual anchor: 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Lin_FCUart_RegOps.h / 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart); generated for retrieval because no formal figure number was detected."
- `keywords`: ["LIN", "UART", "call", "frame", "LinIf_MainFunction_", "ChannelId", "LOCAL_INLINE", "FCUART_HWA_DisableIdleInterrupt"]
- `anchor`: "2.9.1.47 LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 2.10.2 Frame Reception"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `bbox`: `[70.9, 36.89, 524.79, 587.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.2 Frame Reception; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "frame", "call", "LinIf_MainFunction_", "ChannelId", "FC7xxx", "RequestFrame", "AllocateRxBuffer"]
- `anchor`: "Image block near 2.10.2 Frame Reception"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 2.10.2 Frame Reception"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Frame Reception"
- `bbox`: `[70.9, 36.89, 524.81, 445.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.2 Frame Reception; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "FC7xxx"]
- `anchor`: "Image block near 2.10.2 Frame Reception"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[36.0, 145.7, 559.25, 504.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "FC7xxx", "VariantPreCompile", "Tresos", "Inclusion", "Relation"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 3.2.2.1 LinDisableDemReportErrorStatus"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `bbox`: `[116.3, 114.97, 492.5, 207.37]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 LinDisableDemReportErrorStatus; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength"]
- `anchor`: "Image block near 3.2.2.1 LinDisableDemReportErrorStatus"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-002"
- `caption`: "Image block near 3.2.2.1 LinDisableDemReportErrorStatus"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `bbox`: `[116.3, 483.0, 443.32, 500.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 LinDisableDemReportErrorStatus; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength"]
- `anchor`: "Image block near 3.2.2.1 LinDisableDemReportErrorStatus"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-003"
- `caption`: "Image block near 3.2.2.1 LinDisableDemReportErrorStatus"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 NonAutosar / 3.2.2.1 LinDisableDemReportErrorStatus"
- `bbox`: `[116.3, 649.33, 361.32, 688.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 LinDisableDemReportErrorStatus; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "NonAutosar", "Screenshot", "Properties", "Property", "LinDisableDemReportErrorStatus", "LinMaxDataLength"]
- `anchor`: "Image block near 3.2.2.1 LinDisableDemReportErrorStatus"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `bbox`: `[116.3, 54.83, 553.59, 259.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.1 LinChannelBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-002"
- `caption`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `bbox`: `[116.3, 387.79, 539.83, 404.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.1 LinChannelBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-003"
- `caption`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `bbox`: `[116.3, 567.47, 552.66, 584.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.1 LinChannelBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-004"
- `caption`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.1 LinChannelBaudRate"
- `bbox`: `[116.3, 747.11, 545.9, 770.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.1 LinChannelBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "FCUART", "Screenshot", "LinChannelBaudRate", "Variable", "AUTOSAR_ECUC", "LinChannelId", "BreakLength"]
- `anchor`: "Image block near 3.2.3.1.1 LinChannelBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `bbox`: `[116.3, 199.84, 553.65, 216.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.4 BreakDelimiter; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-002"
- `caption`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `bbox`: `[116.3, 380.78, 548.64, 397.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.4 BreakDelimiter; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-003"
- `caption`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `bbox`: `[116.3, 562.76, 463.47, 577.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.4 BreakDelimiter; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-004"
- `caption`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.4 BreakDelimiter"
- `bbox`: `[116.3, 741.74, 550.58, 757.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.4 BreakDelimiter; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "Properties", "Property", "SymbolicNameValue", "Origin", "Default"]
- `anchor`: "Image block near 3.2.3.1.4 BreakDelimiter"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-001"
- `caption`: "Image block near 3.2.3.1.8 LinClockRef"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `bbox`: `[116.3, 164.9, 553.12, 181.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.8 LinClockRef; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "Image block near 3.2.3.1.8 LinClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-002"
- `caption`: "Image block near 3.2.3.1.8 LinClockRef"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `bbox`: `[116.3, 330.84, 533.88, 343.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.8 LinClockRef; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "Image block near 3.2.3.1.8 LinClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-003"
- `caption`: "Image block near 3.2.3.1.8 LinClockRef"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `bbox`: `[116.3, 474.23, 365.2, 512.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.8 LinClockRef; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "Image block near 3.2.3.1.8 LinClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-004"
- `caption`: "Image block near 3.2.3.1.8 LinClockRef"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 LinGlobalConfig / 3.2.3.1 LinChannel / 3.2.3.1.8 LinClockRef"
- `bbox`: `[116.3, 656.73, 399.32, 674.44]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1.8 LinClockRef; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "AUTOSAR_ECUC", "ECUC", "reference", "Origin", "LinClockRef"]
- `anchor`: "Image block near 3.2.3.1.8 LinClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 3.2.4.2 LinMulticoreSupport"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport"
- `bbox`: `[116.3, 123.32, 440.73, 140.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 LinMulticoreSupport; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.2 LinMulticoreSupport"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-002"
- `caption`: "Image block near 3.2.4.2 LinMulticoreSupport"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport"
- `bbox`: `[116.3, 306.56, 510.64, 322.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 LinMulticoreSupport; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.2 LinMulticoreSupport"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-003"
- `caption`: "Image block near 3.2.4.2 LinMulticoreSupport"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 LinGeneral / 3.2.4.2 LinMulticoreSupport"
- `bbox`: `[116.3, 507.49, 533.45, 523.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 LinMulticoreSupport; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "Variable", "LinMulticoreSupport", "SymbolicNameValue", "AUTOSAR_ECUC", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.2 LinMulticoreSupport"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-001"
- `caption`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `bbox`: `[116.3, 183.72, 390.1, 220.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 LIN_E_TIMEOUT; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-002"
- `caption`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `bbox`: `[116.3, 350.73, 547.03, 365.42]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 LIN_E_TIMEOUT; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-003"
- `caption`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `bbox`: `[116.3, 516.71, 406.85, 598.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 LIN_E_TIMEOUT; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-004"
- `caption`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 LinDemEventParameterRefs / 3.2.5.1 LIN_E_TIMEOUT"
- `bbox`: `[116.3, 691.74, 457.7, 707.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 LIN_E_TIMEOUT; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "error", "Variable", "DemEventParameter", "LinDemEventParameterRefs", "Screenshot", "Properties", "LIN_E_TIMEOUT"]
- `anchor`: "Image block near 3.2.5.1 LIN_E_TIMEOUT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-001"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 131.42, 499.55, 147.11]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-002"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 310.4, 490.55, 327.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-003"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 506.92, 456.17, 523.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-004"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 703.6, 482.11, 721.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Variable", "Integer_Label", "SymbolicNameValue", "Default", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-001"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[116.3, 166.4, 450.95, 181.61]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-002"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[116.3, 346.08, 507.61, 361.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "Lin", "SymbolicNameValue", "Variable", "Integer_Label", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-001"
- `caption`: "Image block near 3.2.7 LinEcucPartitionRef"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 LinEcucPartitionRef"
- `bbox`: `[116.3, 37.39, 399.13, 142.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7 LinEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.7 LinEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-001"
- `caption`: "Image block near 4.1 LIN Usage Common Steps"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 LIN Usage Common Steps"
- `bbox`: `[36.0, 246.16, 559.3, 554.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 LIN Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "UART", "Lin", "FC7xxx", "PTB0", "PTB1", "FCUART0", "Configure"]
- `anchor`: "Image block near 4.1 LIN Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-002"
- `caption`: "Image block near 4.1 LIN Usage Common Steps"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 LIN Usage Common Steps"
- `bbox`: `[36.0, 601.03, 558.6, 745.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 LIN Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "UART", "Lin", "FC7xxx", "PTB0", "PTB1", "FCUART0", "Configure"]
- `anchor`: "Image block near 4.1 LIN Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-001"
- `caption`: "Image block near 4.2 LIN Channel Demo"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 LIN Channel Demo"
- `bbox`: `[36.0, 93.71, 525.3, 261.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 LIN Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["LIN", "UART", "Lin", "FCUART0", "FC7xxx", "EcuM", "baud", "rate"]
- `anchor`: "Image block near 4.2 LIN Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### REQ-SWS-LIN-00026
- `name`: "SWS_Lin_00026"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Lin_00026`."
- `anchors`:
  - `p6`: "Rejected Requirement 1 SWS_Lin_00026"
- `aliases`: []

### REQ-SWS-LIN-00039
- `name`: "SWS_Lin_00039"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Lin_00039`."
- `anchors`:
  - `p6`: "Rejected Requirement 2 SWS_Lin_00039"
- `aliases`: []

### REQ-SWS-LIN-00177
- `name`: "SWS_Lin_00177"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Lin_00177`."
- `anchors`:
  - `p6`: "Rejected Requirement 3 SWS_Lin_00177"
- `aliases`: []

### REQ-SWS-LIN-00201
- `name`: "SWS_Lin_00201"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Lin_00201`."
- `anchors`:
  - `p6`: "Rejected Requirement 4 SWS_Lin_00201"
- `aliases`: []

### REQ-SWS-LIN-00221
- `name`: "SWS_Lin_00221"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Lin_00221`."
- `anchors`:
  - `p6`: "Rejected Requirement 5 SWS_Lin_00221"
- `aliases`: []

### REQ-SWS-LIN-00245
- `name`: "SWS_Lin_00245"
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "requirement index entry for `SWS_Lin_00245`."
- `anchors`:
  - `p6`: "Rejected Requirement 5 SWS_Lin_00245"
- `aliases`: []

### API-LIN-GETSTATUS
- `name`: "Lin_GetStatus"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,10,19,24,25`
- `brief`: "api index entry for `Lin_GetStatus`."
- `anchors`:
  - `p9`: "API Service ID for Lin_GetStatus()."
  - `p10`: "Lin_GetStatus() is called."
  - `p19`: "Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
  - `p24`: "Lin_GetStatus()"
  - `p25`: "Lin_GetStatus()"
- `aliases`: []

### API-LIN-SENDFRAME
- `name`: "Lin_SendFrame"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,21,25,26`
- `brief`: "api index entry for `Lin_SendFrame`."
- `anchors`:
  - `p9`: "API Service ID for Lin_SendFrame()."
  - `p21`: "Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
  - `p25`: "Lin_SendFrame()"
  - `p26`: "Lin_SendFrame()"
- `aliases`: []

### API-LIN-GETVERSIONINFO
- `name`: "Lin_GetVersionInfo"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,13,23,45`
- `brief`: "api index entry for `Lin_GetVersionInfo`."
- `anchors`:
  - `p9`: "API Service ID for Lin_GetVersionInfo()."
  - `p13`: "Support for version info API. Switches the Lin_GetVersionInfo() API ON or OFF."
  - `p23`: "void Lin_GetVersionInfo (Std_VersionInfoType* versioninfo)"
  - `p45`: "Switches the Lin_GetVersionInfo function ON or OFF."
- `aliases`: []

### API-LIN-INIT
- `name`: "Lin_Init"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,18,24`
- `brief`: "api index entry for `Lin_Init`."
- `anchors`:
  - `p9`: "API Service ID for Lin_Init()."
  - `p18`: "void Lin_Init(const Lin_ConfigType* Config)"
  - `p24`: "Lin_Init()"
- `aliases`: []

### API-LIN-GOTOSLEEP
- `name`: "Lin_GoToSleep"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6,9,19`
- `brief`: "api index entry for `Lin_GoToSleep`."
- `anchors`:
  - `p6`: "The function Lin_GoToSleep shall optionally set the LIN hardware unit to reduced power"
  - `p9`: "API Service ID for Lin_GoToSleep()."
  - `p19`: "Std_ReturnType Lin_GoToSleep(uint8 Channel)"
- `aliases`: []

### API-LIN-CHECKWAKEUP
- `name`: "Lin_CheckWakeup"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,18`
- `brief`: "api index entry for `Lin_CheckWakeup`."
- `anchors`:
  - `p9`: "API Service ID for Lin_CheckWakeup()."
  - `p18`: "Std_ReturnType Lin_CheckWakeup(uint8 Channel)"
- `aliases`: []

### API-LIN-GOTOSLEEPINTERNAL
- `name`: "Lin_GoToSleepInternal"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,20`
- `brief`: "api index entry for `Lin_GoToSleepInternal`."
- `anchors`:
  - `p9`: "API Service ID for Lin_GoToSleepInternal()."
  - `p20`: "Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)"
- `aliases`: []

### API-LIN-WAKEUPINTERNAL
- `name`: "Lin_WakeupInternal"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23,26`
- `brief`: "api index entry for `Lin_WakeupInternal`."
- `anchors`:
  - `p23`: "Std_ReturnType Lin_WakeupInternal(uint8 Channel)"
  - `p26`: "Lin_WakeupInternal()"
- `aliases`: []

### API-LIN-WAKEUP
- `name`: "Lin_WakeUp"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,26`
- `brief`: "api index entry for `Lin_WakeUp`."
- `anchors`:
  - `p9`: "API Service ID for Lin_WakeUp()."
  - `p26`: "Lin_WakeUp ()"
- `aliases`: []

### API-LIN-LL-SENDRESPONSE
- `name`: "Lin_LL_SendResponse"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Lin_LL_SendResponse`."
- `anchors`:
  - `p25`: "nothing is sent over the bus the entire frame (including header) is sent with the Lin_LL_SendResponse"
- `aliases`: []

### API-FCUART-HWA-ATTACHBAUD
- `name`: "FCUART_HWA_AttachBaud"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_AttachBaud`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_AttachBaud(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-ATTACHCTRL
- `name`: "FCUART_HWA_AttachCtrl"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_AttachCtrl`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_AttachCtrl(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-ATTACHFIFO
- `name`: "FCUART_HWA_AttachFifo"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_AttachFifo`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_AttachFifo(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-ATTACHMATCH
- `name`: "FCUART_HWA_AttachMatch"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_AttachMatch`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_AttachMatch(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-ATTACHWATERMARK
- `name`: "FCUART_HWA_AttachWaterMark"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_AttachWaterMark`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_AttachWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-CLEARRECEIVE
- `name`: "FCUART_HWA_ClearReceive"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_ClearReceive`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_ClearReceive(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-CLEARSTATUS
- `name`: "FCUART_HWA_ClearStatus"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_ClearStatus`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### API-FCUART-HWA-CLEARTRANSMIT
- `name`: "FCUART_HWA_ClearTransmit"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_ClearTransmit`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_ClearTransmit(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLEBREAKDETECTINTERRUPT
- `name`: "FCUART_HWA_DisableBreakDetectInterrupt"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `FCUART_HWA_DisableBreakDetectInterrupt`."
- `anchors`:
  - `p35`: "LOCAL_INLINE void FCUART_HWA_DisableBreakDetectInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLEERRORINTERRUPT
- `name`: "FCUART_HWA_DisableErrorInterrupt"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_DisableErrorInterrupt`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLEIDLEINTERRUPT
- `name`: "FCUART_HWA_DisableIdleInterrupt"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `FCUART_HWA_DisableIdleInterrupt`."
- `anchors`:
  - `p37`: "LOCAL_INLINE void FCUART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLERECEIVEACTIVEINTERRUPT
- `name`: "FCUART_HWA_DisableReceiveActiveInterrupt"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `FCUART_HWA_DisableReceiveActiveInterrupt`."
- `anchors`:
  - `p36`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLERECEIVEDMA
- `name`: "FCUART_HWA_DisableReceiveDMA"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_DisableReceiveDMA`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveDMA(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLERECEIVEFIFO
- `name`: "FCUART_HWA_DisableReceiveFIFO"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_DisableReceiveFIFO`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveFIFO(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLERECEIVEINTERRUPT
- `name`: "FCUART_HWA_DisableReceiveInterrupt"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_DisableReceiveInterrupt`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLETRANSMITCOMPLETEINTERRUPT
- `name`: "FCUART_HWA_DisableTransmitCompleteInterrupt"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_DisableTransmitCompleteInterrupt`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLETRANSMITINTERRUPT
- `name`: "FCUART_HWA_DisableTransmitInterrupt"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_DisableTransmitInterrupt`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLEBREAKDETECTINTERRUPT
- `name`: "FCUART_HWA_EnableBreakDetectInterrupt"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `FCUART_HWA_EnableBreakDetectInterrupt`."
- `anchors`:
  - `p35`: "LOCAL_INLINE void FCUART_HWA_EnableBreakDetectInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLEERRORINTERRUPT
- `name`: "FCUART_HWA_EnableErrorInterrupt"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_EnableErrorInterrupt`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLEIDLEINTERRUPT
- `name`: "FCUART_HWA_EnableIdleInterrupt"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `FCUART_HWA_EnableIdleInterrupt`."
- `anchors`:
  - `p36`: "LOCAL_INLINE void FCUART_HWA_EnableIdleInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLERECEIVEACTIVEINTERRUPT
- `name`: "FCUART_HWA_EnableReceiveActiveInterrupt"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `FCUART_HWA_EnableReceiveActiveInterrupt`."
- `anchors`:
  - `p36`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLERECEIVEDMA
- `name`: "FCUART_HWA_EnableReceiveDMA"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_EnableReceiveDMA`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveDMA(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLERECEIVEFIFO
- `name`: "FCUART_HWA_EnableReceiveFIFO"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_EnableReceiveFIFO`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveFIFO(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLERECEIVEINTERRUPT
- `name`: "FCUART_HWA_EnableReceiveInterrupt"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_EnableReceiveInterrupt`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLETRANSMITCOMPLETEINTERRUPT
- `name`: "FCUART_HWA_EnableTransmitCompleteInterrupt"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_EnableTransmitCompleteInterrupt`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLETRANSMITINTERRUPT
- `name`: "FCUART_HWA_EnableTransmitInterrupt"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_EnableTransmitInterrupt`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETDATA
- `name`: "FCUART_HWA_GetData"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_GetData`."
- `anchors`:
  - `p34`: "LOCAL_INLINE uint8 FCUART_HWA_GetData(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETDATAREGSTATUS
- `name`: "FCUART_HWA_GetDataRegStatus"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_GetDataRegStatus`."
- `anchors`:
  - `p34`: "LOCAL_INLINE uint32 FCUART_HWA_GetDataRegStatus(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETINTERRUPTSTATUS
- `name`: "FCUART_HWA_GetInterruptStatus"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_GetInterruptStatus`."
- `anchors`:
  - `p27`: "FCUART_HWA_GetInterruptStatus(FCUART_Type"
- `aliases`: []

### API-FCUART-HWA-GETRECEIVEACTIVEINTERRUPTSTATUS
- `name`: "FCUART_HWA_GetReceiveActiveInterruptStatus"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `FCUART_HWA_GetReceiveActiveInterruptStatus`."
- `anchors`:
  - `p36`: "LOCAL_INLINE uint32 FCUART_HWA_GetReceiveActiveInterruptStatus(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETSTATUS
- `name`: "FCUART_HWA_GetStatus"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_GetStatus`."
- `anchors`:
  - `p27`: "LOCAL_INLINE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### API-FCUART-HWA-READSTAT
- `name`: "FCUART_HWA_ReadSTAT"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_ReadSTAT`."
- `anchors`:
  - `p32`: "LOCAL_INLINE uint32 FCUART_HWA_ReadSTAT(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-SENDBREAKFIELD
- `name`: "FCUART_HWA_SendBreakField"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `FCUART_HWA_SendBreakField`."
- `anchors`:
  - `p35`: "LOCAL_INLINE void FCUART_HWA_SendBreakField(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-SETBAUD
- `name`: "FCUART_HWA_SetBaud"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_SetBaud`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-SETBITMODEANDPARITY
- `name`: "FCUART_HWA_SetBitModeAndParity"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_SetBitModeAndParity`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetBitModeAndParity(FCUART_Type *pUart, FCUART_BitModeType eBitMode,"
- `aliases`: []

### API-FCUART-HWA-SETBREAKDELIMITER
- `name`: "FCUART_HWA_SetBreakDelimiter"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_SetBreakDelimiter`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `aliases`: []

### API-FCUART-HWA-SETBREAKLENGTH
- `name`: "FCUART_HWA_SetBreakLength"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `FCUART_HWA_SetBreakLength`."
- `anchors`:
  - `p35`: "LOCAL_INLINE void FCUART_HWA_SetBreakLength(FCUART_Type *pUart, Lin_BreakLengthType eBreakLen)"
- `aliases`: []

### API-FCUART-HWA-SETCTRL
- `name`: "FCUART_HWA_SetCtrl"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_SetCtrl`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetCtrl(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-SETDATA
- `name`: "FCUART_HWA_SetData"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_SetData`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)"
- `aliases`: []

### API-FCUART-HWA-SETFIFO
- `name`: "FCUART_HWA_SetFifo"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_SetFifo`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetFifo(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-SETIDLECONFIG
- `name`: "FCUART_HWA_SetIdleConfig"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `FCUART_HWA_SetIdleConfig`."
- `anchors`:
  - `p36`: "LOCAL_INLINE void FCUART_HWA_SetIdleConfig(FCUART_Type *pUart, Lin_IdleConfigType eType)"
- `aliases`: []

### API-FCUART-HWA-SETMATCH
- `name`: "FCUART_HWA_SetMatch"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_SetMatch`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_SetMatch(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-SETWATERMARK
- `name`: "FCUART_HWA_SetWaterMark"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_SetWaterMark`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-SOFTWARERESET
- `name`: "FCUART_HWA_SoftwareReset"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `FCUART_HWA_SoftwareReset`."
- `anchors`:
  - `p35`: "LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-STARTRECEIVE
- `name`: "FCUART_HWA_StartReceive"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_StartReceive`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_StartReceive(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-STARTTRANSMIT
- `name`: "FCUART_HWA_StartTransmit"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_StartTransmit`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_StartTransmit(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-WRITECLESARSTAT
- `name`: "FCUART_HWA_WriteClesarSTAT"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_WriteClesarSTAT`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_WriteClesarSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-LIN-LL-CHANNELINIT
- `name`: "Lin_LL_ChannelInit"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Lin_LL_ChannelInit`."
- `anchors`:
  - `p24`: "void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `aliases`: []

### API-LIN-LL-CHECKWAKEUP
- `name`: "Lin_LL_CheckWakeup"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Lin_LL_CheckWakeup`."
- `anchors`:
  - `p24`: "Std_ReturnType Lin_LL_CheckWakeup(uint8 Channel)"
- `aliases`: []

### API-LIN-LL-ERRORINTERRUPTHANDLER
- `name`: "Lin_LL_ErrorInterruptHandler"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Lin_LL_ErrorInterruptHandler`."
- `anchors`:
  - `p27`: "void Lin_LL_ErrorInterruptHandler(const uint8 u8Module)"
- `aliases`: []

### API-LIN-LL-GETSTATUS
- `name`: "Lin_LL_GetStatus"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Lin_LL_GetStatus`."
- `anchors`:
  - `p24`: "Lin_StatusType Lin_LL_GetStatus(const uint8 u8Channel, uint8 *pu8LinSdu)"
- `aliases`: []

### API-LIN-LL-GOTOSLEEP
- `name`: "Lin_LL_GoToSleep"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Lin_LL_GoToSleep`."
- `anchors`:
  - `p25`: "Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)"
- `aliases`: []

### API-LIN-LL-GOTOSLEEPINTERNAL
- `name`: "Lin_LL_GoToSleepInternal"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Lin_LL_GoToSleepInternal`."
- `anchors`:
  - `p25`: "Std_ReturnType Lin_LL_GoToSleepInternal(uint8 u8Channel, uint8 u8Module)"
- `aliases`: []

### API-LIN-LL-IDLEINTERRUPTHANDLER
- `name`: "Lin_LL_IdleInterruptHandler"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Lin_LL_IdleInterruptHandler`."
- `anchors`:
  - `p27`: "void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)"
- `aliases`: []

### API-LIN-LL-INTERRUPTSOURCESLAVE
- `name`: "Lin_LL_InterruptSourceSlave"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Lin_LL_InterruptSourceSlave`."
- `anchors`:
  - `p26`: "void Lin_LL_InterruptSourceSlave(uint8 u8Module, uint8 u8Channel, uint32 u32Data)"
- `aliases`: []

### API-LIN-LL-RXDATAREADYHANDLER
- `name`: "Lin_LL_RxDataReadyHandler"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Lin_LL_RxDataReadyHandler`."
- `anchors`:
  - `p26`: "void Lin_LL_RxDataReadyHandler(uint8 u8Module, uint8 u8Channel)"
- `aliases`: []

### API-LIN-LL-SENDHEADER
- `name`: "Lin_LL_SendHeader"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Lin_LL_SendHeader`."
- `anchors`:
  - `p25`: "Std_ReturnType Lin_LL_SendHeader(uint8 u8Channel,uint8 u8Module, const Lin_PduType *pPduInfoPtr)"
- `aliases`: []

### API-LIN-LL-TXRXINTERRUPTHANDLER
- `name`: "Lin_LL_TxRxInterruptHandler"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Lin_LL_TxRxInterruptHandler`."
- `anchors`:
  - `p26`: "void Lin_LL_TxRxInterruptHandler(const uint8 u8Module);"
- `aliases`: []

### API-LIN-LL-WAKEUP
- `name`: "Lin_LL_WakeUp"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Lin_LL_WakeUp`."
- `anchors`:
  - `p26`: "void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)"
- `aliases`: []

### API-LIN-LL-WAKEUPINTERNAL
- `name`: "Lin_LL_WakeupInternal"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Lin_LL_WakeupInternal`."
- `anchors`:
  - `p26`: "void Lin_LL_WakeupInternal(uint8 u8Channel, uint8 u8Module)"
- `aliases`: []

### API-LIN-WAKEUP-2
- `name`: "Lin_Wakeup"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `Lin_Wakeup`."
- `anchors`:
  - `p22`: "Std_ReturnType Lin_Wakeup(uint8 Channel)"
- `aliases`: []

### API-INTERRUPT
- `name`: "Interrupt"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `Interrupt`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-LIN-GOTOSLEEPINTERNAL-2
- `name`: "Lin_GotoSleepInternal"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Lin_GotoSleepInternal`."
- `anchors`:
  - `p25`: "Lin_GotoSleepInternal ()"
- `aliases`: []

### API-LIN-WAKEUPINTERNAL-2
- `name`: "Lin_WakeUpInternal"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Lin_WakeUpInternal`."
- `anchors`:
  - `p10`: "API Service ID for Lin_WakeUpInternal()."
- `aliases`: []

### API-CHECKWAKEUP
- `name`: "CheckWakeup"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `CheckWakeup`."
- `anchors`:
  - `p24`: "Std_ReturnType Lin_LL_CheckWakeup(uint8 Channel)"
- `aliases`: []

### API-CONTROLLER
- `name`: "Controller"
- `type`: `api`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "api index entry for `Controller`."
- `anchors`:
  - `p42`: "This container contains the configuration (parameters) of the LIN Controller(s)"
- `aliases`: []

### API-FIELD
- `name`: "Field"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "api index entry for `Field`."
- `anchors`:
  - `p11`: "Interrupt Errors conditions. Inconsistent Synch Field."
- `aliases`: []

### API-HARDWAREABSRACT
- `name`: "HardWareAbsract"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `HardWareAbsract`."
- `anchors`:
  - `p24`: "This function initializes hardware channel through HardWareAbsract(HWA)."
- `aliases`: []

### API-TRANSMITTER
- `name`: "Transmitter"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Transmitter`."
- `anchors`:
  - `p5`: "Features of the FC Universal Asynchronous Receiver Transmitter (FCUART) module include:"
- `aliases`: []

### CFG-LIN-GENERALTYPES
- `name`: "Lin_GeneralTypes"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,6,7,14,16`
- `brief`: "config index entry for `Lin_GeneralTypes`."
- `anchors`:
  - `p3`: "Enums in Lin_GeneralTypes.h................................................................................................................…"
  - `p6`: "The content of Lin_GeneralTypes.h shall be protected by a LIN_GENERAL_TYPES define."
  - `p7`: "source tree. For implementation all Lin_GeneralTypes.h related types in the documents"
  - `p14`: "Enums in Lin_GeneralTypes.h"
  - `p16`: "Typedefs in Lin_GeneralTypes.h"
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,46,48`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "CommonPublishedInformation ................................................................................................................…"
  - `p46`: "CommonPublishedInformation"
  - `p48`: "CommonPublishedInformation"
- `aliases`: []

### CFG-LINCHANNEL
- `name`: "LinChannel"
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7,41`
- `brief`: "config index entry for `LinChannel`."
- `anchors`:
  - `p7`: "LinChannel and LinTrcvChannel of one communication channel shall all reference the"
  - `p41`: "LinChannel"
- `aliases`: []

### CFG-LINCHANNELWAKEUPSUPPORT
- `name`: "LinChannelWakeupSupport"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14,43`
- `brief`: "config index entry for `LinChannelWakeupSupport`."
- `anchors`:
  - `p14`: "None EcuMWakeUpSource was referred when LinChannelWakeupSupport is disable"
  - `p43`: "LinChannelWakeupSupport"
- `aliases`: []

### CFG-LINDEMEVENTPARAMETERREFS
- `name`: "LinDemEventParameterRefs"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,46`
- `brief`: "config index entry for `LinDemEventParameterRefs`."
- `anchors`:
  - `p4`: "LinDemEventParameterRefs ..................................................................................................................…"
  - `p46`: "LinDemEventParameterRefs"
- `aliases`: []

### CFG-LINGENERAL
- `name`: "LinGeneral"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,44`
- `brief`: "config index entry for `LinGeneral`."
- `anchors`:
  - `p4`: "LinGeneral ................................................................................................................................…"
  - `p44`: "LinGeneral"
- `aliases`: []

### CFG-LINGLOBALCONFIG
- `name`: "LinGlobalConfig"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,41`
- `brief`: "config index entry for `LinGlobalConfig`."
- `anchors`:
  - `p4`: "LinGlobalConfig ...........................................................................................................................…"
  - `p41`: "LinGlobalConfig"
- `aliases`: []

### CFG-DEMEVENTPARAMETER
- `name`: "DemEventParameter"
- `type`: `config`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "config index entry for `DemEventParameter`."
- `anchors`:
  - `p46`: "LinDemEventParameterRefs"
- `aliases`: []

### CFG-LINCHANNELBAUDRATE
- `name`: "LinChannelBaudRate"
- `type`: `config`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "config index entry for `LinChannelBaudRate`."
- `anchors`:
  - `p42`: "LinChannelBaudRate"
- `aliases`: []

### CFG-LINCHANNELECUMWAKEUPSOURCE
- `name`: "LinChannelEcuMWakeupSource"
- `type`: `config`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "config index entry for `LinChannelEcuMWakeupSource`."
- `anchors`:
  - `p43`: "LinChannelEcuMWakeupSource"
- `aliases`: []

### CFG-LINCHANNELECUCPARTITIONREF
- `name`: "LinChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "config index entry for `LinChannelEcucPartitionRef`."
- `anchors`:
  - `p44`: "LinChannelEcucPartitionRef"
- `aliases`: []

### CFG-LINCHANNELID
- `name`: "LinChannelId"
- `type`: `config`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "config index entry for `LinChannelId`."
- `anchors`:
  - `p42`: "LinChannelId"
- `aliases`: []

### CFG-LINHWCHANNEL
- `name`: "LinHwChannel"
- `type`: `config`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "config index entry for `LinHwChannel`."
- `anchors`:
  - `p43`: "LinHwChannel"
- `aliases`: []

### CFG-DEMEVENTID
- `name`: "DemEventId"
- `type`: `config`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "config index entry for `DemEventId`."
- `anchors`:
  - `p46`: "DemEventParameter's DemEventId symbolic value. The standardized errors are provided in this"
- `aliases`: []

### CFG-LINCHANNELWAKEUPSRC
- `name`: "LinChannelWakeUpSrc"
- `type`: `config`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "config index entry for `LinChannelWakeUpSrc`."
- `anchors`:
  - `p17`: "Uint32 LinChannelWakeUpSrc"
- `aliases`: []

### CFG-LINTRCVCHANNEL
- `name`: "LinTrcvChannel"
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "config index entry for `LinTrcvChannel`."
- `anchors`:
  - `p7`: "LinChannel and LinTrcvChannel of one communication channel shall all reference the"
- `aliases`: []

### CFG-LIN-CONFIGPTR
- `name`: "Lin_ConfigPtr"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Lin_ConfigPtr`."
- `anchors`:
  - `p13`: "Init variable Lin_ConfigPtr"
- `aliases`: []

### CFG-LIN-FCUART-PCONFIG
- `name`: "Lin_FCUart_pConfig"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Lin_FCUart_pConfig`."
- `anchors`:
  - `p14`: "Init variable Lin_FCUart_pConfig"
- `aliases`: []

### MACRO-LOCAL-INLINE
- `name`: "LOCAL_INLINE"
- `type`: `macro`
- `primary_page`: `27`
- `physical_pages`: `27,28,29,30,31,32,33,34,35,36,37`
- `brief`: "macro index entry for `LOCAL_INLINE`."
- `anchors`:
  - `p27`: "LOCAL_INLINE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
  - `p28`: "LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `aliases`: []

### MACRO-AUTOSAR-ECUC
- `name`: "AUTOSAR_ECUC"
- `type`: `macro`
- `primary_page`: `42`
- `physical_pages`: `42,43,44,45,46`
- `brief`: "macro index entry for `AUTOSAR_ECUC`."
- `anchors`:
  - `p42`: "AUTOSAR_ECUC"
  - `p43`: "AUTOSAR_ECUC"
  - `p44`: "AUTOSAR_ECUC"
  - `p45`: "AUTOSAR_ECUC"
  - `p46`: "AUTOSAR_ECUC"
- `aliases`: []

### MACRO-LIN-E-TIMEOUT
- `name`: "LIN_E_TIMEOUT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,13,46`
- `brief`: "macro index entry for `LIN_E_TIMEOUT`."
- `anchors`:
  - `p9`: "#define LIN_E_TIMEOUT ((uint8)0x06U)"
  - `p13`: "Number of loops before returning LIN_E_TIMEOUT. This define was enable when the platform has only one interrupt"
  - `p46`: "LIN_E_TIMEOUT"
- `aliases`: []

### MACRO-LIN-CH-OPERATIONAL
- `name`: "LIN_CH_OPERATIONAL"
- `type`: `macro`
- `primary_page`: `22`
- `physical_pages`: `22,23,26`
- `brief`: "macro index entry for `LIN_CH_OPERATIONAL`."
- `anchors`:
  - `p22`: "channel in LIN_CH_OPERATIONAL state."
  - `p23`: "Wake up the Lin channel. This function shall put the LIN channel in LIN_CH_OPERATIONAL state without"
  - `p26`: "This function shall send a wake up signal to the LIN bus and put the Lin channel in LIN_CH_OPERATIONAL"
- `aliases`: []

### MACRO-LIN-CH-SLEEP-STATE
- `name`: "LIN_CH_SLEEP_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,19`
- `brief`: "macro index entry for `LIN_CH_SLEEP_STATE`."
- `anchors`:
  - `p10`: "#define LIN_CH_SLEEP_STATE ((uint8)0x02U)"
  - `p19`: "transition in LIN_CH_SLEEP_STATE shall be done after the completion of the sleep command"
- `aliases`: []

### MACRO-LIN-UNINIT
- `name`: "LIN_UNINIT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "macro index entry for `LIN_UNINIT`."
- `anchors`:
  - `p10`: "#define LIN_UNINIT ((uint8)0x01U)"
  - `p13`: "#define LIN_DRIVER_STATUS_UNINIT_ARRAY {LIN_UNINIT}"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13,14`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p13`: "#define LIN_CONFIGPTR_UNINIT_ARRAY {NULL_PTR}"
  - `p14`: "#define LIN_CORE_CONFIGPTR_UINIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13,14`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p13`: "#define LIN_DEV_ERROR_DETECT (STD_OFF)"
  - `p14`: "#define LIN_FRAME_TIMEOUT_DISABLE (STD_OFF)"
- `aliases`: []

### MACRO-LIN-CH-SLEEP
- `name`: "LIN_CH_SLEEP"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,20`
- `brief`: "macro index entry for `LIN_CH_SLEEP`."
- `anchors`:
  - `p15`: "LIN_CH_SLEEP= 10U"
  - `p20`: "Stops any ongoing transmission, sets the channel state to LIN_CH_SLEEP and put the LIN hardware unit"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,40`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 40"
  - `p40`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-LEN-DELIMITER-2BITS
- `name`: "LEN_DELIMITER_2BITS"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16,43`
- `brief`: "macro index entry for `LEN_DELIMITER_2BITS`."
- `anchors`:
  - `p16`: "LEN_DELIMITER_2BITS = 1U"
  - `p43`: "LEN_DELIMITER_2BITS"
- `aliases`: []

### MACRO-LIN-BIT-ERROR
- `name`: "LIN_BIT_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_BIT_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_BIT_ERROR ((uint8)0x01U)"
- `aliases`: []

### MACRO-LIN-BREAK-DELIMITER-ERROR
- `name`: "LIN_BREAK_DELIMITER_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_BREAK_DELIMITER_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_BREAK_DELIMITER_ERROR ((uint8)0x04U)"
- `aliases`: []

### MACRO-LIN-BUFFER-OVER-RUN-ERROR
- `name`: "LIN_BUFFER_OVER_RUN_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_BUFFER_OVER_RUN_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_BUFFER_OVER_RUN_ERROR ((uint8)0x07U)"
- `aliases`: []

### MACRO-LIN-BUFFER-UNDER-RUN-ERROR
- `name`: "LIN_BUFFER_UNDER_RUN_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_BUFFER_UNDER_RUN_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_BUFFER_UNDER_RUN_ERROR ((uint8)0x0AU)"
- `aliases`: []

### MACRO-LIN-CHECKSUM-ERROR
- `name`: "LIN_CHECKSUM_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_CHECKSUM_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_CHECKSUM_ERROR ((uint8)0x02U)"
- `aliases`: []

### MACRO-LIN-CHECKWAKEUP-ID
- `name`: "LIN_CHECKWAKEUP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_CHECKWAKEUP_ID`."
- `anchors`:
  - `p9`: "#define LIN_CHECKWAKEUP_ID ((uint8)0xAU)"
- `aliases`: []

### MACRO-LIN-CH-NOT-READY-STATE
- `name`: "LIN_CH_NOT_READY_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_CH_NOT_READY_STATE`."
- `anchors`:
  - `p10`: "#define LIN_CH_NOT_READY_STATE ((uint8)0x04U)"
- `aliases`: []

### MACRO-LIN-CH-OPERATIONAL-STATE
- `name`: "LIN_CH_OPERATIONAL_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_CH_OPERATIONAL_STATE`."
- `anchors`:
  - `p10`: "#define LIN_CH_OPERATIONAL_STATE ((uint8)0x03U)"
- `aliases`: []

### MACRO-LIN-CH-READY-STATE
- `name`: "LIN_CH_READY_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_CH_READY_STATE`."
- `anchors`:
  - `p10`: "#define LIN_CH_READY_STATE ((uint8)0x05U)"
- `aliases`: []

### MACRO-LIN-CH-RECEIVE-NOTHING-STATE
- `name`: "LIN_CH_RECEIVE_NOTHING_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_CH_RECEIVE_NOTHING_STATE`."
- `anchors`:
  - `p10`: "#define LIN_CH_RECEIVE_NOTHING_STATE ((uint8)0x08U)"
- `aliases`: []

### MACRO-LIN-CH-SLEEP-PENDING
- `name`: "LIN_CH_SLEEP_PENDING"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_CH_SLEEP_PENDING`."
- `anchors`:
  - `p10`: "#define LIN_CH_SLEEP_PENDING ((uint8)0x01U)"
- `aliases`: []

### MACRO-LIN-DEV-ERROR-DETECT
- `name`: "LIN_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_DEV_ERROR_DETECT`."
- `anchors`:
  - `p13`: "#define LIN_DEV_ERROR_DETECT (STD_OFF)"
- `aliases`: []

### MACRO-LIN-DISABLE-DEM-REPORT-ERROR-STATUS
- `name`: "LIN_DISABLE_DEM_REPORT_ERROR_STATUS"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_DISABLE_DEM_REPORT_ERROR_STATUS`."
- `anchors`:
  - `p14`: "#define LIN_DISABLE_DEM_REPORT_ERROR_STATUS (STD_ON)"
- `aliases`: []

### MACRO-LIN-E-ALREADY-INITIALIZED
- `name`: "LIN_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p9`: "#define LIN_E_ALREADY_INITIALIZED ((uint8)0x07U)"
- `aliases`: []

### MACRO-LIN-E-INVALID-CHANNEL
- `name`: "LIN_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `LIN_E_INVALID_CHANNEL`."
- `anchors`:
  - `p8`: "#define LIN_E_INVALID_CHANNEL ((uint8)0x02U)"
- `aliases`: []

### MACRO-LIN-E-INVALID-POINTER
- `name`: "LIN_E_INVALID_POINTER"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_E_INVALID_POINTER`."
- `anchors`:
  - `p9`: "#define LIN_E_INVALID_POINTER ((uint8)0x03U)"
- `aliases`: []

### MACRO-LIN-E-PARAM-POINTER
- `name`: "LIN_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_E_PARAM_POINTER`."
- `anchors`:
  - `p9`: "#define LIN_E_PARAM_POINTER ((uint8)0x05U)"
- `aliases`: []

### MACRO-LIN-E-STATE-TRANSITION
- `name`: "LIN_E_STATE_TRANSITION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_E_STATE_TRANSITION`."
- `anchors`:
  - `p9`: "#define LIN_E_STATE_TRANSITION ((uint8)0x04U)"
- `aliases`: []

### MACRO-LIN-E-UNINIT
- `name`: "LIN_E_UNINIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `LIN_E_UNINIT`."
- `anchors`:
  - `p8`: "#define LIN_E_UNINIT ((uint8)0x00U)"
- `aliases`: []

### MACRO-LIN-FCUART-6-ISR-USED
- `name`: "LIN_FCUART_6_ISR_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_FCUART_6_ISR_USED`."
- `anchors`:
  - `p14`: "#define LIN_FCUART_6_ISR_USED (STD_ON)"
- `aliases`: []

### MACRO-LIN-FCUART-UNALLOCATEDPAR-CORE-ID
- `name`: "LIN_FCUART_UNALLOCATEDPAR_CORE_ID"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_FCUART_UNALLOCATEDPAR_CORE_ID`."
- `anchors`:
  - `p14`: "#define LIN_FCUART_UNALLOCATEDPAR_CORE_ID ((uint32)0U)"
- `aliases`: []

### MACRO-LIN-FRAME-TIMEOUT-DISABLE
- `name`: "LIN_FRAME_TIMEOUT_DISABLE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_FRAME_TIMEOUT_DISABLE`."
- `anchors`:
  - `p14`: "#define LIN_FRAME_TIMEOUT_DISABLE (STD_OFF)"
- `aliases`: []

### MACRO-LIN-FRAMING-ERROR
- `name`: "LIN_FRAMING_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_FRAMING_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_FRAMING_ERROR ((uint8)0x06U)"
- `aliases`: []

### MACRO-LIN-GETSTATUS-ID
- `name`: "LIN_GETSTATUS_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_GETSTATUS_ID`."
- `anchors`:
  - `p9`: "#define LIN_GETSTATUS_ID ((uint8)0x8U)"
- `aliases`: []

### MACRO-LIN-GOTOSLEEPINTERNAL-ID
- `name`: "LIN_GOTOSLEEPINTERNAL_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_GOTOSLEEPINTERNAL_ID`."
- `anchors`:
  - `p9`: "#define LIN_GOTOSLEEPINTERNAL_ID ((uint8)0x9U)"
- `aliases`: []

### MACRO-LIN-GOTOSLEEP-ID
- `name`: "LIN_GOTOSLEEP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_GOTOSLEEP_ID`."
- `anchors`:
  - `p9`: "#define LIN_GOTOSLEEP_ID ((uint8)0x6U)"
- `aliases`: []

### MACRO-LIN-IDENTIFIER-PARITY-ERROR
- `name`: "LIN_IDENTIFIER_PARITY_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_IDENTIFIER_PARITY_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_IDENTIFIER_PARITY_ERROR ((uint8)0x05U)"
- `aliases`: []

### MACRO-LIN-INIT
- `name`: "LIN_INIT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_INIT`."
- `anchors`:
  - `p10`: "#define LIN_INIT ((uint8)0x02U)"
- `aliases`: []

### MACRO-LIN-INIT-ID
- `name`: "LIN_INIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_INIT_ID`."
- `anchors`:
  - `p9`: "#define LIN_INIT_ID ((uint8)0x0U)"
- `aliases`: []

### MACRO-LIN-INSTANCE-ID
- `name`: "LIN_INSTANCE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `LIN_INSTANCE_ID`."
- `anchors`:
  - `p8`: "#define LIN_INSTANCE_ID ((uint8)0U)"
- `aliases`: []

### MACRO-LIN-MULTICORE-SUPPORT
- `name`: "LIN_MULTICORE_SUPPORT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_MULTICORE_SUPPORT`."
- `anchors`:
  - `p14`: "#define LIN_MULTICORE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-LIN-NOISE-ERROR
- `name`: "LIN_NOISE_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_NOISE_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_NOISE_ERROR ((uint8)0x08U)"
- `aliases`: []

### MACRO-LIN-NONE-ECUM-WAKEUP-SOURCE-REF
- `name`: "LIN_NONE_ECUM_WAKEUP_SOURCE_REF"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_NONE_ECUM_WAKEUP_SOURCE_REF`."
- `anchors`:
  - `p14`: "#define LIN_NONE_ECUM_WAKEUP_SOURCE_REF (uint32)0U"
- `aliases`: []

### MACRO-LIN-NO-ERROR
- `name`: "LIN_NO_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_NO_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_NO_ERROR ((uint8)0x00U)"
- `aliases`: []

### MACRO-LIN-PARTIONS-NB
- `name`: "LIN_PARTIONS_NB"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_PARTIONS_NB`."
- `anchors`:
  - `p13`: "#define LIN_PARTIONS_NB ((uint32)1U)"
- `aliases`: []

### MACRO-LIN-PRECOMPILE-SUPPORT
- `name`: "LIN_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p14`: "#define LIN_PRECOMPILE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-LIN-RX-COMPLETE-STATE
- `name`: "LIN_RX_COMPLETE_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_RX_COMPLETE_STATE`."
- `anchors`:
  - `p10`: "#define LIN_RX_COMPLETE_STATE ((uint8)0x07U)"
- `aliases`: []

### MACRO-LIN-RX-ONGOING-STATE
- `name`: "LIN_RX_ONGOING_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_RX_ONGOING_STATE`."
- `anchors`:
  - `p10`: "#define LIN_RX_ONGOING_STATE ((uint8)0x09U)"
- `aliases`: []

### MACRO-LIN-SENDFRAME-ID
- `name`: "LIN_SENDFRAME_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_SENDFRAME_ID`."
- `anchors`:
  - `p9`: "#define LIN_SENDFRAME_ID ((uint8)0x4U)"
- `aliases`: []

### MACRO-LIN-SYNCH-FIELD-ERROR
- `name`: "LIN_SYNCH_FIELD_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_SYNCH_FIELD_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_SYNCH_FIELD_ERROR ((uint8)0x03U)"
- `aliases`: []

### MACRO-LIN-TIMEOUT-ERROR
- `name`: "LIN_TIMEOUT_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_TIMEOUT_ERROR`."
- `anchors`:
  - `p11`: "#define LIN_TIMEOUT_ERROR ((uint8)0x09U)"
- `aliases`: []

### MACRO-LIN-TIMEOUT-TIMES
- `name`: "LIN_TIMEOUT_TIMES"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_TIMEOUT_TIMES`."
- `anchors`:
  - `p13`: "#define LIN_TIMEOUT_TIMES ((uint32)1000U)"
- `aliases`: []

### MACRO-LIN-TX-COMPLETE-STATE
- `name`: "LIN_TX_COMPLETE_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_TX_COMPLETE_STATE`."
- `anchors`:
  - `p10`: "#define LIN_TX_COMPLETE_STATE ((uint8)0x06U)"
- `aliases`: []

### MACRO-LIN-TX-HEADER-COMPLETE-STATE
- `name`: "LIN_TX_HEADER_COMPLETE_STATE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_TX_HEADER_COMPLETE_STATE`."
- `anchors`:
  - `p10`: "#define LIN_TX_HEADER_COMPLETE_STATE ((uint8)0x10U)"
- `aliases`: []

### MACRO-LIN-TX-MASTER-RES-COMMAND
- `name`: "LIN_TX_MASTER_RES_COMMAND"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_TX_MASTER_RES_COMMAND`."
- `anchors`:
  - `p11`: "#define LIN_TX_MASTER_RES_COMMAND ((uint8)0x01U)"
- `aliases`: []

### MACRO-LIN-TX-NO-COMMAND
- `name`: "LIN_TX_NO_COMMAND"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_TX_NO_COMMAND`."
- `anchors`:
  - `p12`: "#define LIN_TX_NO_COMMAND ((uint8)0x04U)"
- `aliases`: []

### MACRO-LIN-TX-SLAVE-RES-COMMAND
- `name`: "LIN_TX_SLAVE_RES_COMMAND"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_TX_SLAVE_RES_COMMAND`."
- `anchors`:
  - `p12`: "#define LIN_TX_SLAVE_RES_COMMAND ((uint8)0x02U)"
- `aliases`: []

### MACRO-LIN-TX-SLAVE-TO-SLAVE-COMMAND
- `name`: "LIN_TX_SLAVE_TO_SLAVE_COMMAND"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_TX_SLAVE_TO_SLAVE_COMMAND`."
- `anchors`:
  - `p12`: "#define LIN_TX_SLAVE_TO_SLAVE_COMMAND ((uint8)0x05U)"
- `aliases`: []

### MACRO-LIN-TX-SLEEP-COMMAND
- `name`: "LIN_TX_SLEEP_COMMAND"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_TX_SLEEP_COMMAND`."
- `anchors`:
  - `p12`: "#define LIN_TX_SLEEP_COMMAND ((uint8)0x03U)"
- `aliases`: []

### MACRO-LIN-VERSIONINFO-ID
- `name`: "LIN_VERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_VERSIONINFO_ID`."
- `anchors`:
  - `p9`: "#define LIN_VERSIONINFO_ID ((uint8)0x1U)"
- `aliases`: []

### MACRO-LIN-VERSION-INFO-API
- `name`: "LIN_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_VERSION_INFO_API`."
- `anchors`:
  - `p13`: "#define LIN_VERSION_INFO_API (STD_OFF)"
- `aliases`: []

### MACRO-LIN-WAKEUPINTERNAL-ID
- `name`: "LIN_WAKEUPINTERNAL_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `LIN_WAKEUPINTERNAL_ID`."
- `anchors`:
  - `p10`: "#define LIN_WAKEUPINTERNAL_ID ((uint8)0xBU)"
- `aliases`: []

### MACRO-LIN-WAKEUP-ID
- `name`: "LIN_WAKEUP_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_WAKEUP_ID`."
- `anchors`:
  - `p9`: "#define LIN_WAKEUP_ID ((uint8)0x7U)"
- `aliases`: []

### MACRO-FCUART-6
- `name`: "FCUART_6"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `FCUART_6`."
- `anchors`:
  - `p14`: "#define FCUART_6 6U"
- `aliases`: []

### MACRO-LIN-AR-RELEASE-MAJOR-VERSION
- `name`: "LIN_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-LIN-AR-RELEASE-MINOR-VERSION
- `name`: "LIN_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-LIN-AR-RELEASE-REVISION-VERSION
- `name`: "LIN_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-LIN-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: "LIN_CFG_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_CFG_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_CFG_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-LIN-CFG-AR-RELEASE-MINOR-VERSION
- `name`: "LIN_CFG_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_CFG_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_CFG_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-LIN-CFG-AR-RELEASE-REVISION-VERSION
- `name`: "LIN_CFG_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_CFG_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_CFG_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-LIN-CFG-MODULE-ID
- `name`: "LIN_CFG_MODULE_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_CFG_MODULE_ID`."
- `anchors`:
  - `p12`: "#define LIN_CFG_MODULE_ID 82"
- `aliases`: []

### MACRO-LIN-CFG-SW-MAJOR-VERSION
- `name`: "LIN_CFG_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_CFG_SW_MAJOR_VERSION`."
- `anchors`:
  - `p13`: "#define LIN_CFG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-LIN-CFG-SW-MINOR-VERSION
- `name`: "LIN_CFG_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_CFG_SW_MINOR_VERSION`."
- `anchors`:
  - `p13`: "#define LIN_CFG_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-LIN-CFG-SW-PATCH-VERSION
- `name`: "LIN_CFG_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_CFG_SW_PATCH_VERSION`."
- `anchors`:
  - `p13`: "#define LIN_CFG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-LIN-CFG-VENDOR-ID
- `name`: "LIN_CFG_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_CFG_VENDOR_ID`."
- `anchors`:
  - `p12`: "#define LIN_CFG_VENDOR_ID 174"
- `aliases`: []

### MACRO-LIN-CHMAP-UNINT-ARRAY
- `name`: "LIN_CHMAP_UNINT_ARRAY"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_CHMAP_UNINT_ARRAY`."
- `anchors`:
  - `p14`: "#define LIN_CHMAP_UNINT_ARRAY {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,"
- `aliases`: []

### MACRO-LIN-CONFIGPTR-UNINIT-ARRAY
- `name`: "LIN_CONFIGPTR_UNINIT_ARRAY"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_CONFIGPTR_UNINIT_ARRAY`."
- `anchors`:
  - `p13`: "#define LIN_CONFIGPTR_UNINIT_ARRAY {NULL_PTR}"
- `aliases`: []

### MACRO-LIN-CORE-CONFIGPTR-UINIT-ARRAY
- `name`: "LIN_CORE_CONFIGPTR_UINIT_ARRAY"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_CORE_CONFIGPTR_UINIT_ARRAY`."
- `anchors`:
  - `p14`: "#define LIN_CORE_CONFIGPTR_UINIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}"
- `aliases`: []

### MACRO-LIN-DRIVER-STATUS-UNINIT-ARRAY
- `name`: "LIN_DRIVER_STATUS_UNINIT_ARRAY"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_DRIVER_STATUS_UNINIT_ARRAY`."
- `anchors`:
  - `p13`: "#define LIN_DRIVER_STATUS_UNINIT_ARRAY {LIN_UNINIT}"
- `aliases`: []

### MACRO-LIN-FCUART-MAX-MODULES
- `name`: "LIN_FCUART_MAX_MODULES"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_FCUART_MAX_MODULES`."
- `anchors`:
  - `p13`: "#define LIN_FCUART_MAX_MODULES 18U"
- `aliases`: []

### MACRO-LIN-INSTANCE-CONFIG
- `name`: "LIN_INSTANCE_CONFIG"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_INSTANCE_CONFIG`."
- `anchors`:
  - `p13`: "#define LIN_INSTANCE_CONFIG 4U"
- `aliases`: []

### MACRO-LIN-INSTANCE-COUNT
- `name`: "LIN_INSTANCE_COUNT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_INSTANCE_COUNT`."
- `anchors`:
  - `p13`: "#define LIN_INSTANCE_COUNT 18U"
- `aliases`: []

### MACRO-LIN-MAX-DATA-LENGTH
- `name`: "LIN_MAX_DATA_LENGTH"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `LIN_MAX_DATA_LENGTH`."
- `anchors`:
  - `p13`: "#define LIN_MAX_DATA_LENGTH 8U"
- `aliases`: []

### MACRO-LIN-MODULE-ID
- `name`: "LIN_MODULE_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_MODULE_ID`."
- `anchors`:
  - `p12`: "#define LIN_MODULE_ID 82"
- `aliases`: []

### MACRO-LIN-SW-MAJOR-VERSION
- `name`: "LIN_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_SW_MAJOR_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-LIN-SW-MINOR-VERSION
- `name`: "LIN_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_SW_MINOR_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-LIN-SW-PATCH-VERSION
- `name`: "LIN_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_SW_PATCH_VERSION`."
- `anchors`:
  - `p12`: "#define LIN_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-LIN-VENDOR-ID
- `name`: "LIN_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_VENDOR_ID`."
- `anchors`:
  - `p12`: "#define LIN_VENDOR_ID 174"
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p14`: "Disable Frame Timeout Feature. When NonAutosar/LinFrameTimeoutDisable == STD_ON, the LIN Master will accept"
- `aliases`: []

### MACRO-FCUART-0
- `name`: "FCUART_0"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `FCUART_0`."
- `anchors`:
  - `p43`: "FCUART_0"
- `aliases`: []

### MACRO-FCUART-INSTANCE-MAX
- `name`: "FCUART_INSTANCE_MAX"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `FCUART_INSTANCE_MAX`."
- `anchors`:
  - `p16`: "const Lin_CoreConfigType *pLin_CoreConfig[FCUART_INSTANCE_MAX]"
- `aliases`: []

### MACRO-LIN-CHANNEL-INDEX-NAME
- `name`: "LIN_CHANNEL_INDEX_NAME"
- `type`: `macro`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "macro index entry for `LIN_CHANNEL_INDEX_NAME`."
- `anchors`:
  - `p42`: "Identifies the LIN channel. Replaces LIN_CHANNEL_INDEX_NAME from the LIN SWS"
- `aliases`: []

### MACRO-LIN-CLASSIC-CS
- `name`: "LIN_CLASSIC_CS"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_CLASSIC_CS`."
- `anchors`:
  - `p14`: "LIN_CLASSIC_CS = 1U"
- `aliases`: []

### MACRO-LIN-ENHANCED-CS
- `name`: "LIN_ENHANCED_CS"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `LIN_ENHANCED_CS`."
- `anchors`:
  - `p14`: "LIN_ENHANCED_CS = 0U"
- `aliases`: []

### MACRO-LIN-FRAMERESPONSE-IGNORE
- `name`: "LIN_FRAMERESPONSE_IGNORE"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_FRAMERESPONSE_IGNORE`."
- `anchors`:
  - `p15`: "LIN_FRAMERESPONSE_IGNORE = 2U"
- `aliases`: []

### MACRO-LIN-FRAMERESPONSE-RX
- `name`: "LIN_FRAMERESPONSE_RX"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_FRAMERESPONSE_RX`."
- `anchors`:
  - `p15`: "LIN_FRAMERESPONSE_RX = 1U"
- `aliases`: []

### MACRO-LIN-FRAMERESPONSE-TX
- `name`: "LIN_FRAMERESPONSE_TX"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_FRAMERESPONSE_TX`."
- `anchors`:
  - `p15`: "LIN_FRAMERESPONSE_TX = 0U"
- `aliases`: []

### MACRO-LIN-GENERAL-TYPES
- `name`: "LIN_GENERAL_TYPES"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `LIN_GENERAL_TYPES`."
- `anchors`:
  - `p6`: "The content of Lin_GeneralTypes.h shall be protected by a LIN_GENERAL_TYPES define."
- `aliases`: []

### MACRO-LIN-GENERAL-TYPES-H
- `name`: "LIN_GENERAL_TYPES_H"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `LIN_GENERAL_TYPES_H`."
- `anchors`:
  - `p6`: "The content of Lin_GeneralTypes.h shall be protected by a LIN_GENERAL_TYPES_H define."
- `aliases`: []

### MACRO-LIN-NOT-OK
- `name`: "LIN_NOT_OK"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_NOT_OK`."
- `anchors`:
  - `p15`: "LIN_NOT_OK = 0U"
- `aliases`: []

### MACRO-LIN-OPERATIONAL
- `name`: "LIN_OPERATIONAL"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_OPERATIONAL`."
- `anchors`:
  - `p15`: "LIN_OPERATIONAL= 9U"
- `aliases`: []

### MACRO-LIN-RX-BUSY
- `name`: "LIN_RX_BUSY"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_RX_BUSY`."
- `anchors`:
  - `p15`: "LIN_RX_BUSY= 6U"
- `aliases`: []

### MACRO-LIN-RX-ERROR
- `name`: "LIN_RX_ERROR"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_RX_ERROR`."
- `anchors`:
  - `p15`: "LIN_RX_ERROR= 7U"
- `aliases`: []

### MACRO-LIN-RX-NO-RESPONSE
- `name`: "LIN_RX_NO_RESPONSE"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_RX_NO_RESPONSE`."
- `anchors`:
  - `p15`: "LIN_RX_NO_RESPONSE= 8U"
- `aliases`: []

### MACRO-LIN-RX-OK
- `name`: "LIN_RX_OK"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_RX_OK`."
- `anchors`:
  - `p15`: "LIN_RX_OK= 5U"
- `aliases`: []

### MACRO-LIN-TX-BUSY
- `name`: "LIN_TX_BUSY"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_TX_BUSY`."
- `anchors`:
  - `p15`: "LIN_TX_BUSY= 2U"
- `aliases`: []

### MACRO-LIN-TX-ERROR
- `name`: "LIN_TX_ERROR"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_TX_ERROR`."
- `anchors`:
  - `p15`: "LIN_TX_ERROR= 4U"
- `aliases`: []

### MACRO-LIN-TX-HEADER-ERROR
- `name`: "LIN_TX_HEADER_ERROR"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_TX_HEADER_ERROR`."
- `anchors`:
  - `p15`: "LIN_TX_HEADER_ERROR= 3U"
- `aliases`: []

### MACRO-LIN-TX-OK
- `name`: "LIN_TX_OK"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `LIN_TX_OK`."
- `anchors`:
  - `p15`: "LIN_TX_OK = 1U"
- `aliases`: []

### MACRO-SRS-BSW-00347
- `name`: "SRS_BSW_00347"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SRS_BSW_00347`."
- `anchors`:
  - `p6`: "to SRS_BSW_00347 with a Vendor Id (needed to distinguish LIN drivers from different"
- `aliases`: []

### MACRO-LEN-DELIMITER-1BIT
- `name`: "LEN_DELIMITER_1BIT"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `LEN_DELIMITER_1BIT`."
- `anchors`:
  - `p16`: "LEN_DELIMITER_1BIT = 0U"
- `aliases`: []

### MACRO-LEN-HIGHER-13BITS
- `name`: "LEN_HIGHER_13BITS"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `LEN_HIGHER_13BITS`."
- `anchors`:
  - `p43`: "LEN_HIGHER_13BITS"
- `aliases`: []

### MACRO-MASTER-RESPONSE
- `name`: "MASTER_RESPONSE"
- `type`: `macro`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "macro index entry for `MASTER_RESPONSE`."
- `anchors`:
  - `p25`: "Channel using information stored on PduInfoPtr pointer. If response type is MASTER_RESPONSE then"
- `aliases`: []

### TYPE-FCUART-TYPE
- `name`: "FCUART_Type"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27,28,29,30,31,32,33,34,35,36,37`
- `brief`: "type index entry for `FCUART_Type`."
- `anchors`:
  - `p27`: "LOCAL_INLINE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
  - `p28`: "LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `18`
- `physical_pages`: `18,19,20,21,22,23,24,25,26`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p18`: "Std_ReturnType Lin_CheckWakeup(uint8 Channel)"
  - `p19`: "Std_ReturnType"
  - `p20`: "Std_ReturnType"
  - `p21`: "Std_ReturnType"
  - `p22`: "Std_ReturnType"
- `aliases`: []

### TYPE-LIN-PDUTYPE
- `name`: "Lin_PduType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17,21,25`
- `brief`: "type index entry for `Lin_PduType`."
- `anchors`:
  - `p3`: "Lin_PduType ...............................................................................................................................…"
  - `p17`: "Lin_PduType"
  - `p21`: "Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr)"
  - `p25`: "Std_ReturnType Lin_LL_SendHeader(uint8 u8Channel,uint8 u8Module, const Lin_PduType *pPduInfoPtr)"
- `aliases`: []

### TYPE-LIN-STATUSTYPE
- `name`: "Lin_StatusType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,19,24,25`
- `brief`: "type index entry for `Lin_StatusType`."
- `anchors`:
  - `p15`: "Lin_StatusType"
  - `p19`: "Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
  - `p24`: "Lin_StatusType Lin_LL_GetStatus(const uint8 u8Channel, uint8 *pu8LinSdu)"
  - `p25`: "Lin_StatusType."
- `aliases`: []

### TYPE-LIN-CORECONFIGTYPE
- `name`: "Lin_CoreConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,24`
- `brief`: "type index entry for `Lin_CoreConfigType`."
- `anchors`:
  - `p3`: "Lin_CoreConfigType ........................................................................................................................…"
  - `p16`: "const Lin_CoreConfigType *pLin_CoreConfig[FCUART_INSTANCE_MAX]"
  - `p24`: "void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_CoreConfigType *pConfig)"
- `aliases`: []

### TYPE-LIN-BREAKDELIMITERTYPE
- `name`: "Lin_BreakDelimiterType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,17,31`
- `brief`: "type index entry for `Lin_BreakDelimiterType`."
- `anchors`:
  - `p16`: "Lin_BreakDelimiterType"
  - `p17`: "Lin_BreakDelimiterType eLinBreakDelimiterLen;"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_SetBreakDelimiter (FCUART_Type *pUart, Lin_BreakDelimiterType eBreakLen)"
- `aliases`: []

### TYPE-LIN-CONFIGTYPE
- `name`: "Lin_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,18`
- `brief`: "type index entry for `Lin_ConfigType`."
- `anchors`:
  - `p3`: "Lin_ConfigType ............................................................................................................................…"
  - `p16`: "Lin_ConfigType"
  - `p18`: "void Lin_Init(const Lin_ConfigType* Config)"
- `aliases`: []

### TYPE-LIN-CHANNELTYPE
- `name`: "Lin_ChannelType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,17`
- `brief`: "type index entry for `Lin_ChannelType`."
- `anchors`:
  - `p3`: "Lin_ChannelType ...........................................................................................................................…"
  - `p16`: "const Lin_ChannelType *pLinChannel"
  - `p17`: "Lin_ChannelType"
- `aliases`: []

### TYPE-FCUART-STATTYPE
- `name`: "FCUART_StatType"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27,28`
- `brief`: "type index entry for `FCUART_StatType`."
- `anchors`:
  - `p27`: "LOCAL_INLINE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
  - `p28`: "LOCAL_INLINE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### TYPE-LIN-FRAMECSMODELTYPE
- `name`: "Lin_FrameCsModelType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,17`
- `brief`: "type index entry for `Lin_FrameCsModelType`."
- `anchors`:
  - `p14`: "Lin_FrameCsModelType"
  - `p17`: "Lin_FrameCsModelType Cs"
- `aliases`: []

### TYPE-LIN-FRAMERESPONSETYPE
- `name`: "Lin_FrameResponseType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,17`
- `brief`: "type index entry for `Lin_FrameResponseType`."
- `anchors`:
  - `p15`: "Lin_FrameResponseType"
  - `p17`: "Lin_FrameResponseType Drc"
- `aliases`: []

### TYPE-LIN-FRAMEDLTYPE
- `name`: "Lin_FrameDlType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,17`
- `brief`: "type index entry for `Lin_FrameDlType`."
- `anchors`:
  - `p16`: "typedef uint8 Lin_FrameDlType"
  - `p17`: "Lin_FrameDlType Dl"
- `aliases`: []

### TYPE-LIN-FRAMEPIDTYPE
- `name`: "Lin_FramePidType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,17`
- `brief`: "type index entry for `Lin_FramePidType`."
- `anchors`:
  - `p16`: "typedef uint8 Lin_FramePidType"
  - `p17`: "Lin_FramePidType Pid"
- `aliases`: []

### TYPE-LIN-BREAKLENGTHTYPE
- `name`: "Lin_BreakLengthType"
- `type`: `type`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "type index entry for `Lin_BreakLengthType`."
- `anchors`:
  - `p35`: "LOCAL_INLINE void FCUART_HWA_SetBreakLength(FCUART_Type *pUart, Lin_BreakLengthType eBreakLen)"
- `aliases`: []

### TYPE-FCUART-BITMODETYPE
- `name`: "FCUART_BitModeType"
- `type`: `type`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "type index entry for `FCUART_BitModeType`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetBitModeAndParity(FCUART_Type *pUart, FCUART_BitModeType eBitMode,"
- `aliases`: []

### TYPE-FCUART-CTRL-IESTATYPE
- `name`: "FCUART_Ctrl_IEStaType"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "type index entry for `FCUART_Ctrl_IEStaType`."
- `anchors`:
  - `p27`: "FCUART_Ctrl_IEStaType"
- `aliases`: []

### TYPE-FCUART-PARITYTYPE
- `name`: "FCUART_ParityType"
- `type`: `type`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "type index entry for `FCUART_ParityType`."
- `anchors`:
  - `p33`: "uint8 bParityEnable, FCUART_ParityType eParityType,"
- `aliases`: []

### TYPE-LIN-IDLECONFIGTYPE
- `name`: "Lin_IdleConfigType"
- `type`: `type`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "type index entry for `Lin_IdleConfigType`."
- `anchors`:
  - `p36`: "LOCAL_INLINE void FCUART_HWA_SetIdleConfig(FCUART_Type *pUart, Lin_IdleConfigType eType)"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p23`: "void Lin_GetVersionInfo (Std_VersionInfoType* versioninfo)"
- `aliases`: []

### FILE-LIN-GENERALTYPES-H
- `name`: "Lin_GeneralTypes.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,6,7,14,16`
- `brief`: "file index entry for `Lin_GeneralTypes.h`."
- `anchors`:
  - `p3`: "Enums in Lin_GeneralTypes.h................................................................................................................…"
  - `p6`: "The content of Lin_GeneralTypes.h shall be protected by a LIN_GENERAL_TYPES define."
  - `p7`: "source tree. For implementation all Lin_GeneralTypes.h related types in the documents"
  - `p14`: "Enums in Lin_GeneralTypes.h"
  - `p16`: "Typedefs in Lin_GeneralTypes.h"
- `aliases`: []

### FILE-LIN-H
- `name`: "Lin.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,8,18`
- `brief`: "file index entry for `Lin.h`."
- `anchors`:
  - `p3`: "Macros in Lin.h ...........................................................................................................................…"
  - `p8`: "Macros in Lin.h"
  - `p18`: "Functions in Lin.h"
- `aliases`: []

### FILE-LIN-CFG-H
- `name`: "Lin_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,12,16`
- `brief`: "file index entry for `Lin_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in Lin_Cfg.h .......................................................................................................................…"
  - `p12`: "Macros in Lin_Cfg.h"
  - `p16`: "Enums in Lin_Cfg.h"
- `aliases`: []

### FILE-LIN-FCUART-H
- `name`: "Lin_FCUart.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,24`
- `brief`: "file index entry for `Lin_FCUart.h`."
- `anchors`:
  - `p3`: "Functions in Lin_FCUart.h .................................................................................................................…"
  - `p24`: "Functions in Lin_FCUart.h"
- `aliases`: []

### FILE-LIN-FCUART-REGOPS-H
- `name`: "Lin_FCUart_RegOps.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,27`
- `brief`: "file index entry for `Lin_FCUart_RegOps.h`."
- `anchors`:
  - `p3`: "Functions in Lin_FCUart_RegOps.h ..........................................................................................................…"
  - `p27`: "Functions in Lin_FCUart_RegOps.h"
- `aliases`: []

### FILE-LIN-VERSION-H
- `name`: "Lin_version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,12`
- `brief`: "file index entry for `Lin_version.h`."
- `anchors`:
  - `p3`: "Macros in Lin_version.h ...................................................................................................................…"
  - `p12`: "Macros in Lin_version.h"
- `aliases`: []

### TERM-LIN
- `name`: "LIN"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `LIN`."
- `anchors`:
  - `p1`: "LIN"
  - `p2`: "LIN"
  - `p3`: "LIN"
  - `p4`: "LIN"
  - `p5`: "LIN"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,42,43,44,45,46,47,48`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p42`: "AUTOSAR"
  - `p43`: "AUTOSAR"
  - `p44`: "AUTOSAR"
  - `p45`: "AUTOSAR"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13,14,35,44,50`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p13`: "Det"
  - `p14`: "Det"
  - `p35`: "Det"
  - `p44`: "Det"
  - `p50`: "Det"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,41,46,50`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p4`: "Dem"
  - `p41`: "Dem"
  - `p46`: "Dem"
  - `p50`: "Dem"
- `aliases`: []

### TERM-LIN-CFG
- `name`: "Lin_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,12,16`
- `brief`: "term index entry for `Lin_Cfg`."
- `anchors`:
  - `p3`: "Macros in Lin_Cfg.h .......................................................................................................................…"
  - `p12`: "Macros in Lin_Cfg.h"
  - `p16`: "Enums in Lin_Cfg.h"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13,14,50`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p13`: "Switches the Development Error Detection and Notification ON or OFF. This define was enable when the platform"
  - `p14`: "Switches the Production Error Detection and Notification OFF. Symbolic names for configured channels."
  - `p50`: "Development Error Detection box if Det is needed."
- `aliases`: []

### TERM-LINIF-MAINFUNCTION
- `name`: "LinIf_MainFunction_"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37,38`
- `brief`: "term index entry for `LinIf_MainFunction_`."
- `anchors`:
  - `p37`: "The following use case shows the transmission of a LIN frame. The first call of the LinIf_MainFunction_<ChannelId> requests"
  - `p38`: "The following use case shows the reception of a LIN frame. The first call of the LinIf_MainFunction_<ChannelId> requests"
- `aliases`: []

### TERM-LINECUCPARTITIONREF
- `name`: "LinEcucPartitionRef"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,48`
- `brief`: "term index entry for `LinEcucPartitionRef`."
- `anchors`:
  - `p4`: "LinEcucPartitionRef .......................................................................................................................…"
  - `p48`: "LinEcucPartitionRef"
- `aliases`: []

### TERM-LIN-FCUART
- `name`: "Lin_FCUart"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,24`
- `brief`: "term index entry for `Lin_FCUart`."
- `anchors`:
  - `p3`: "Functions in Lin_FCUart.h .................................................................................................................…"
  - `p24`: "Functions in Lin_FCUart.h"
- `aliases`: []

### TERM-LIN-FCUART-REGOPS
- `name`: "Lin_FCUart_RegOps"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,27`
- `brief`: "term index entry for `Lin_FCUart_RegOps`."
- `anchors`:
  - `p3`: "Functions in Lin_FCUart_RegOps.h ..........................................................................................................…"
  - `p27`: "Functions in Lin_FCUart_RegOps.h"
- `aliases`: []

### TERM-LIN-VERSION
- `name`: "Lin_version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,12`
- `brief`: "term index entry for `Lin_version`."
- `anchors`:
  - `p3`: "Macros in Lin_version.h ...................................................................................................................…"
  - `p12`: "Macros in Lin_version.h"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,5`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p5`: "MCAL"
- `aliases`: []

### TERM-LINFLEX
- `name`: "LINFlex"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `LINFlex`."
- `anchors`:
  - `p13`: "interrupt for each LINFlex channel."
- `aliases`: []

### TERM-LINMULTICORESUPPORT
- `name`: "LinMulticoreSupport"
- `type`: `term`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "term index entry for `LinMulticoreSupport`."
- `anchors`:
  - `p45`: "LinMulticoreSupport"
- `aliases`: []

### TERM-LIN-SDUPTR
- `name`: "Lin_SduPtr"
- `type`: `term`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "term index entry for `Lin_SduPtr`."
- `anchors`:
  - `p19`: "Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);"
- `aliases`: []

### TERM-LINCLOCKREF
- `name`: "LinClockRef"
- `type`: `term`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "term index entry for `LinClockRef`."
- `anchors`:
  - `p44`: "LinClockRef"
- `aliases`: []

### TERM-LINDEVERRORDETECT
- `name`: "LinDevErrorDetect"
- `type`: `term`
- `primary_page`: `44`
- `physical_pages`: `44`
- `brief`: "term index entry for `LinDevErrorDetect`."
- `anchors`:
  - `p44`: "LinDevErrorDetect"
- `aliases`: []

### TERM-LINDISABLEDEMREPORTERRORSTATUS
- `name`: "LinDisableDemReportErrorStatus"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `LinDisableDemReportErrorStatus`."
- `anchors`:
  - `p41`: "LinDisableDemReportErrorStatus"
- `aliases`: []

### TERM-LININDEX
- `name`: "LinIndex"
- `type`: `term`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "term index entry for `LinIndex`."
- `anchors`:
  - `p45`: "LinIndex"
- `aliases`: []

### TERM-LINMAXDATALENGTH
- `name`: "LinMaxDataLength"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `LinMaxDataLength`."
- `anchors`:
  - `p41`: "LinMaxDataLength"
- `aliases`: []

### TERM-LINTIMEOUTDURATION
- `name`: "LinTimeoutDuration"
- `type`: `term`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "term index entry for `LinTimeoutDuration`."
- `anchors`:
  - `p45`: "LinTimeoutDuration"
- `aliases`: []

### TERM-LINVERSIONINFOAPI
- `name`: "LinVersionInfoApi"
- `type`: `term`
- `primary_page`: `45`
- `physical_pages`: `45`
- `brief`: "term index entry for `LinVersionInfoApi`."
- `anchors`:
  - `p45`: "LinVersionInfoApi"
- `aliases`: []

### TERM-AUTOSAR-SWS-LINDRIVER
- `name`: "AUTOSAR_SWS_LINDriver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `AUTOSAR_SWS_LINDriver`."
- `anchors`:
  - `p5`: "detailed requirements, refer to the AUTOSAR_SWS_LINDriver."
- `aliases`: []

### TERM-DEM-SETEVENTSTATUS
- `name`: "Dem_SetEventStatus"
- `type`: `term`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "term index entry for `Dem_SetEventStatus`."
- `anchors`:
  - `p46`: "Dem_SetEventStatus in case the corresponding error occurs. The EventId is taken from the referenced"
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

### TERM-ECUMWAKEUPSOURCE
- `name`: "EcuMWakeUpSource"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `EcuMWakeUpSource`."
- `anchors`:
  - `p14`: "None EcuMWakeUpSource was referred when LinChannelWakeupSupport is disable"
- `aliases`: []

### TERM-LINFRAMETIMEOUTDISABLE
- `name`: "LinFrameTimeoutDisable"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `LinFrameTimeoutDisable`."
- `anchors`:
  - `p14`: "Disable Frame Timeout Feature. When NonAutosar/LinFrameTimeoutDisable == STD_ON, the LIN Master will accept"
- `aliases`: []

### TERM-LINTRCV
- `name`: "LinTrcv"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `LinTrcv`."
- `anchors`:
  - `p7`: "LinChannel and LinTrcvChannel of one communication channel shall all reference the"
- `aliases`: []

### TERM-LOCAL-INTERCONNECT-NETWORK
- `name`: "Local Interconnect Network"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Local Interconnect Network`."
- `anchors`:
  - `p1`: "Local Interconnect Network"
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

### ALIAS-LIN
- `canonical`: "LIN"
- `aliases`: ["Local Interconnect Network", "本地互连网络", "LIN module", "LIN driver", "LIN User Manual", "LIN Integration Manual", "Lin", "Lin Interface"]
- `related_ids`: ["TERM-LIN"]

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

### ALIAS-FCUART
- `canonical`: "FCUART"
- `aliases`: ["UART", "FC Universal Asynchronous Receiver Transmitter", "Lin_FCUart", "LIN hardware unit"]
- `related_ids`: []

### ALIAS-LIN-FRAME
- `canonical`: "LIN frame"
- `aliases`: ["Lin_PduType", "frame transmission", "frame reception", "Lin_SendFrame"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between LIN_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `LIN_User_Manual.pdf`
- `source_pdf_sha256`: `ccf0bc2ef2bd76c466ec61dc056cf0e265e3ce39ccb54250e5ceb1e0757e64aa`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `409`
- `technical_missing_terms_added`: `15`
- `pages_with_added_terms`: `50`
- `supplemented_missing_token_count`: `409`
- `supplemented_missing_technical_token_count`: `15`
- `supplemented_physical_pages_count`: `50`
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
  - "Address"
  - "Automatic"
  - "Both"
  - "CTS"
  - "Confidential"
  - "Configurable"
  - "DMA"
  - "Driver"
  - "Flagchip"
  - "Full"
  - "Idle"
  - "Independent"
  - "Multiple"
  - "Option"
  - "Optional"
  - "Programmable"
  - "Proprietary"
  - "RTS"
  - "Receive"
  - "Request"
  - "Stop"
  - "Three"
  - "Transmit"
  - "Watermark"
  - "abstraction"
  - "access"
  - "address"
  - "assert"
  - "asynchronous"
  - "automate"
  - "belong"
  - "bits"
  - "buffer"
  - "character"
  - "characters"
  - "check"
  - "chip"
  - "clear"
  - "comprises"
  - "configurable"
  - "connected"
  - "control"
  - "depth"
  - "detection"
  - "duplex"
  - "empty"
  - "end"
  - "flow"
  - "format"
  - "full"
  - "generate"
  - "get"
  - "handle"
  - "idle"
  - "independent"
  - "independently"
  - "input"
  - "interface"
  - "levels"
  - "line"
  - "long"
  - "mark"
  - "master"
  - "match"
  - "matching"
  - "means"
  - "methods"
  - "microcontroller"
  - "mode"
  - "modules"
  - "monitor"
  - "more"
  - "most"
  - "non"
  - "offers"
  - "operate"
  - "operation"
  - "other"
  - "output"
  - "overhead"
  - "oversampling"
  - "parity"
  - "part"
  - "performing"
  - "pins"
  - "polarity"
  - "protocol"
  - "provides"
  - "ratio"
  - "receive"
  - "receiving"
  - "reduce"
  - "request"
  - "return"
  - "separate"
  - "serial"
  - "should"
  - "special"
  - "standard"
  - "standby"
  - "start"
  - "stop"
  - "supporting"
  - "supports"
  - "tasks"
  - "than"
  - "that"
  - "they"
  - "transmit"
  - "transmitter"
  - "transmitting"
  - "upper"
  - "uses"
  - "voltage"
  - "which"
  - "zero"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "ECU"
  - "FCUARTs"
  - "Flagchip"
  - "Module"
  - "Proprietary"
  - "Therefore"
  - "Useless"
  - "Values"
  - "abbreviation"
  - "according"
  - "adapt"
  - "buffer"
  - "bytes"
  - "cannot"
  - "constraints"
  - "definitions"
  - "dependent"
  - "erroneous"
  - "even"
  - "extended"
  - "given"
  - "implement"
  - "implemented"
  - "implementer"
  - "instances"
  - "just"
  - "mode"
  - "modified"
  - "needs"
  - "operation"
  - "provide"
  - "published"
  - "queue"
  - "reducded"
  - "rules"
  - "separate"
  - "several"
  - "similar"
  - "simple"
  - "specific"
  - "standard"
  - "such"
  - "supported"
  - "temporary"
  - "that"
  - "two"
  - "units"
  - "uses"
  - "vendor"
  - "vendors"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Only"
  - "Proprietary"
  - "been"
  - "considered"
  - "implement"
  - "implemented"
  - "included"
  - "mentioned"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Already"
  - "Confidential"
  - "Flagchip"
  - "Initialized"
  - "Invalid"
  - "Proprietary"
  - "caused"
  - "current"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "State"
  - "able"
  - "been"
  - "cluster"
  - "correctly"
  - "detection"
  - "enabled"
  - "individual"
  - "initialized"
  - "into"
  - "issued"
  - "least"
  - "mode"
  - "participate"
  - "process"
  - "pulse"
  - "ready"
  - "received"
  - "receiving"
  - "stay"
  - "such"
  - "until"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Break"
  - "Confidential"
  - "Delimiter"
  - "Flagchip"
  - "Header"
  - "Identifier"
  - "Invalid"
  - "New"
  - "Noise"
  - "Parity"
  - "Proprietary"
  - "Shifter"
  - "Slave"
  - "been"
  - "buffer"
  - "byte"
  - "character"
  - "cleared"
  - "field"
  - "full"
  - "had"
  - "into"
  - "load"
  - "master"
  - "mode"
  - "modes"
  - "new"
  - "ready"
  - "received"
  - "stop"
  - "timeout"
  - "too"
  - "written"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "master"
  - "pending"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Channels"
  - "Confidential"
  - "Flagchip"
  - "Max"
  - "Proprietary"
  - "Total"
  - "available"
  - "buffer"
  - "lin"
  - "partions"
  - "returned"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Core"
  - "Enhanced"
  - "Flagchip"
  - "Link"
  - "Multicore"
  - "Proprietary"
  - "TxFrame_Maximum"
  - "Values"
  - "checksum"
  - "enabled"
  - "longer"
  - "map"
  - "models"
  - "than"
  - "that"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Erroneous"
  - "Flagchip"
  - "Framing"
  - "Header"
  - "Identifier"
  - "Mismatch"
  - "Normal"
  - "Ongoing"
  - "Overrun"
  - "Physical"
  - "Proprietary"
  - "Short"
  - "Sleep"
  - "Successful"
  - "Values"
  - "another"
  - "available"
  - "back"
  - "been"
  - "between"
  - "byte"
  - "checksum"
  - "correct"
  - "detection"
  - "enabled"
  - "far"
  - "irrelevant"
  - "least"
  - "master"
  - "mode"
  - "next"
  - "nodes"
  - "operation"
  - "parity"
  - "previous"
  - "production"
  - "read"
  - "ready"
  - "received"
  - "remote"
  - "such"
  - "transmit"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "0x3F"
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "Fields"
  - "Flagchip"
  - "Proprietary"
  - "Values"
  - "bit6"
  - "bit7"
  - "bits"
  - "core"
  - "identifier"
  - "its"
  - "out"
  - "parity"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "0x3F"
  - "ChannelCoreId"
  - "Confidential"
  - "Core"
  - "Fields"
  - "Flagchip"
  - "Proprietary"
  - "SBR"
  - "Sdu"
  - "SduPtr"
  - "bit6"
  - "bit7"
  - "bits"
  - "change"
  - "count"
  - "identifier"
  - "its"
  - "multiply"
  - "parity"
  - "u16LinBaudWaitCount"
  - "u8HwModule"
  - "u8LinChannelID"
  - "u8LinWakeUpSup"
  - "uint16"
  - "wait"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "Proprietary"
  - "been"
  - "identifies"
  - "woken"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "0x3C"
  - "Confidential"
  - "Flagchip"
  - "Gets"
  - "Proprietary"
  - "Slave"
  - "State"
  - "Status"
  - "buffer"
  - "current"
  - "initiates"
  - "instructs"
  - "master"
  - "operation"
  - "provides"
  - "regardless"
  - "responsible"
  - "returns"
  - "stops"
  - "success"
  - "successful"
  - "therefore"
  - "transmit"
  - "where"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Put"
  - "mode"
  - "operation"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Sends"
  - "direction"
  - "master"
  - "necessary"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Generates"
  - "Proprietary"
  - "pulse"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "sending"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Gets"
  - "Lin_"
  - "Proprietary"
  - "Slave"
  - "been"
  - "buffer"
  - "checks"
  - "current"
  - "identifies"
  - "mapped"
  - "memory"
  - "mode"
  - "operating"
  - "operation"
  - "provides"
  - "receive"
  - "returns"
  - "shadow"
  - "store"
  - "successful"
  - "transceiver"
  - "waked"
  - "where"
  - "which"
  - "woken"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "0x3C"
  - "Confidential"
  - "Flagchip"
  - "Initiates"
  - "Proprietary"
  - "Sends"
  - "buffer"
  - "current"
  - "enters"
  - "initiates"
  - "mapped"
  - "master"
  - "memory"
  - "mode"
  - "operation"
  - "part"
  - "receive"
  - "shadow"
  - "stops"
  - "where"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "sending"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Ctrl"
  - "Flag"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "Stat"
  - "Status"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Flag"
  - "Flagchip"
  - "Proprietary"
  - "Start"
  - "Stat"
  - "Status"
  - "clear"
  - "receive"
  - "transmit"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Complete"
  - "Confidential"
  - "Enable"
  - "Flagchip"
  - "Proprietary"
  - "Receive"
  - "Transmit"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Attach"
  - "Complete"
  - "Confidential"
  - "Ctrl"
  - "Enable"
  - "Exclude"
  - "Flagchip"
  - "Parity"
  - "Proprietary"
  - "Transmit"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Attach"
  - "Baud"
  - "Break"
  - "Confidential"
  - "Delimiter"
  - "Fifo"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Attach"
  - "Confidential"
  - "Flagchip"
  - "Match"
  - "Proprietary"
  - "WaterMark"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "DMA"
  - "Enable"
  - "Flagchip"
  - "Mode"
  - "Parity"
  - "Proprietary"
  - "Receive"
  - "Stop"
  - "Write"
  - "bits"
  - "eStopBit"
  - "even"
  - "mode"
  - "odd"
  - "read"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Enable"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "Receive"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Enable"
  - "Flagchip"
  - "Length"
  - "Proprietary"
  - "Reset"
  - "Send"
  - "detect"
  - "field"
  - "software"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "Enable"
  - "FALSE"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "TRUE"
  - "active"
  - "idle"
  - "line"
  - "receive"
  - "return"
  - "u8Data"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "CopyBuffer"
  - "Driver"
  - "Flagchip"
  - "Proprietary"
  - "Schedule"
  - "copying"
  - "delay"
  - "gets"
  - "idle"
  - "interface"
  - "line"
  - "made"
  - "next"
  - "show"
  - "that"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Driver"
  - "Flagchip"
  - "Proprietary"
  - "Schedule"
  - "delay"
  - "gets"
  - "interface"
  - "made"
  - "maximum"
  - "next"
  - "received"
  - "show"
  - "storage"
  - "that"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Name"
  - "Proprietary"
  - "Range"
  - "enumeration"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Autosar"
  - "Confidential"
  - "Defines"
  - "Flagchip"
  - "List"
  - "Name"
  - "Non"
  - "Proprietary"
  - "Reporting"
  - "boolean"
  - "global"
  - "interger"
  - "maximum"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Defines"
  - "Flagchip"
  - "Min"
  - "Proprietary"
  - "Range"
  - "Specifies"
  - "bits"
  - "fixed"
  - "integer"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "Defines"
  - "ECU"
  - "FLAGCHIP"
  - "Flagchip"
  - "Proprietary"
  - "Selects"
  - "Source"
  - "Specifies"
  - "State"
  - "bits"
  - "boolean"
  - "controller"
  - "defined"
  - "false"
  - "functionality"
  - "out"
  - "supports"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Confidential"
  - "Driver"
  - "ECU"
  - "Flagchip"
  - "Integer"
  - "Maps"
  - "Proprietary"
  - "Source"
  - "State"
  - "Unit"
  - "Variabel"
  - "controller"
  - "defined"
  - "detection"
  - "disabled"
  - "enabled"
  - "false"
  - "mapped"
  - "notification"
  - "off"
  - "partitions"
  - "single"
  - "subset"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "InstanceId"
  - "Integer"
  - "Proprietary"
  - "Range"
  - "Specifies"
  - "blocking"
  - "core"
  - "determine"
  - "disabled"
  - "enabled"
  - "false"
  - "feature"
  - "maximum"
  - "multi"
  - "present"
  - "raised"
  - "timeout"
  - "until"
  - "wait"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Contianer"
  - "FLAGCHIP"
  - "Flagchip"
  - "Major"
  - "Proprietary"
  - "Reference"
  - "about"
  - "aggregated"
  - "appropriate"
  - "caused"
  - "elements"
  - "extended"
  - "invoked"
  - "issued"
  - "modules"
  - "published"
  - "references"
  - "reported"
  - "specification"
  - "vendor"
  - "vendorspecific"
  - "versions"
  - "which"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "Major"
  - "Minor"
  - "Proprietary"
  - "appropriate"
  - "numbering"
  - "specific"
  - "specification"
  - "vendor"
  - "which"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "List"
  - "Maps"
  - "Module"
  - "Patch"
  - "Proprietary"
  - "according"
  - "available"
  - "dedicated"
  - "independent"
  - "level"
  - "list"
  - "make"
  - "modules"
  - "multiple"
  - "numbering"
  - "operate"
  - "partitions"
  - "specific"
  - "vendor"
  - "zero"

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
  - "Generate"
  - "Port"
  - "Proprietary"
  - "Reporting"
  - "Tick"
  - "enabled"
  - "example"
  - "files"
  - "pin"
  - "port"
  - "select"
  - "unchecked"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51`
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
- `physical_pages`: `2,3,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0028-001", "TBL-0029-001", "TBL-0030-001", "TBL-0031-001", "TBL-0032-001"]
- `message`: "40 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,17,33,37`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0017-001", "FIG-0033-001", "FIG-0037-001"]
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
- `pdf_page_count`: `51`
- `indexed_physical_pages_count`: `51`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `144`
- `table_index_count`: `40`
- `figure_index_count`: `54`
- `symbol_index_count`: `272`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `ccf0bc2ef2bd76c466ec61dc056cf0e265e3ce39ccb54250e5ceb1e0757e64aa`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `409`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
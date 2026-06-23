---
manifest_schema_version: "1.1"
source_pdf: "Mb_User_Manual.pdf"
source_pdf_sha256: "7ab217874fb8fc9a77c97fdd7b0fb305623101afe0a56ad7e5822d7d5225d826"
source_pdf_size_bytes: 1564013
pdf_page_count: 38
generated_at: "2026-06-19T13:04:08Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: Mb_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `Mb_User_Manual.pdf`
- `source_pdf_sha256`: `7ab217874fb8fc9a77c97fdd7b0fb305623101afe0a56ad7e5822d7d5225d826`
- `source_pdf_size_bytes`: `1564013`
- `pdf_page_count`: `38`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx Mailbox User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T13:04:08Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `44`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL Mailbox module - User Manual"
- `module_scope`: "Mailbox driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 Mailbox Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["Mailbox", "Mailbox Complex Device Driver", "vendor-specific AUTOSAR Complex Device Driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Mb", "MB", "CDD_Mb"]
- `summary`: "This 38-page user manual indexes Mailbox content across source physical pages 1-38, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["Mailbox", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx Mailbox User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Mailbox", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["CDD_Mb", "Mailbox", "FC7xxx", "CDD_Mb_Hw", "CDD_Mb_Types", "CDD_Mb_Version", "CDD_Mb_Cfg", "Mb_RingBlockType"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Mailbox Introduction"
- `path`: "Chapter 1 Mailbox Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mailbox", "message", "channel", "FC7xxx", "CDD", "AUTOSAR", "one", "multiple"]
- `anchor`: "Chapter 1 Mailbox Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 Mailbox Introduction / 1.1 Requirements"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mailbox", "message", "channel", "FC7xxx", "CDD", "AUTOSAR", "one", "multiple"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 Mailbox Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mailbox", "message", "channel", "FC7xxx", "CDD", "AUTOSAR", "one", "multiple"]
- `anchor`: "1.2"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `21`
- `printed_page_start`: `6`
- `printed_page_end`: `21`
- `keywords`: ["channel", "define", "Mailbox", "Channel", "void", "Mb_ChannelType", "CDD_Mb", "message"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Mailbox", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Mailbox", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `7`
- `physical_page_end`: `9`
- `printed_page_start`: `7`
- `printed_page_end`: `9`
- `keywords`: ["define", "Mailbox", "CDD_Mb", "STD_ON", "STD_OFF", "channel", "switch", "FC7xxx"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in CDD_Mb.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Mb.h"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["Mailbox", "CDD_Mb", "define", "channel", "invalid", "identifier", "FC7xxx", "MB_E_UNINIT"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in CDD_Mb_Version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Mb_Version.h"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["Mailbox", "define", "FC7xxx", "MB_INIT_ID", "Mb_Init", "MB_DEINIT_ID", "Mb_DeInit", "MB_SEND_DATA_ID"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in CDD_Mb_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in CDD_Mb_Cfg.h"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Mailbox", "define", "STD_ON", "STD_OFF", "switch", "FC7xxx", "MB_SW_MAJOR_VERSION", "MB_SW_MINOR_VERSION"]
- `anchor`: "2.3.3"

### SEC-002-003-004
- `source_number`: `2.3.4`
- `title`: "Macros in CDD_Mb_Hw.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_Mb_Hw.h"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Mailbox", "CDD_Mb", "define", "channel", "number", "Mb_ReturnStateType", "FC7xxx", "MB_MAX_HW_CHANNEL"]
- `anchor`: "2.3.4"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `10`
- `physical_page_end`: `11`
- `printed_page_start`: `10`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "CDD_Mb", "channel", "define", "message", "queue", "can", "receive"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enumerations in CDD_Mb.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Mb.h"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Mailbox", "CDD_Mb", "define", "channel", "number", "Mb_ReturnStateType", "FC7xxx", "MB_MAX_HW_CHANNEL"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Mb_ReturnStateType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Mb.h / 2.4.1.1 Mb_ReturnStateType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Mailbox", "CDD_Mb", "define", "channel", "number", "Mb_ReturnStateType", "FC7xxx", "MB_MAX_HW_CHANNEL"]
- `anchor`: "2.4.1.1"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enumerations in CDD_Mb_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "channel", "message", "queue", "can", "receive", "events", "issued"]
- `anchor`: "2.4.2"

### SEC-002-004-002-001
- `source_number`: `2.4.2.1`
- `title`: "Mb_CoreType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.1 Mb_CoreType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "channel", "message", "queue", "can", "receive", "events", "issued"]
- `anchor`: "2.4.2.1"

### SEC-002-004-002-002
- `source_number`: `2.4.2.2`
- `title`: "Mb_FreeChannelConfigFlagType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.2 Mb_FreeChannelConfigFlagType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "channel", "message", "queue", "can", "receive", "events", "issued"]
- `anchor`: "2.4.2.2"

### SEC-002-004-002-003
- `source_number`: `2.4.2.3`
- `title`: "Mb_ChannelModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.3 Mb_ChannelModeType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "channel", "message", "queue", "can", "receive", "events", "issued"]
- `anchor`: "2.4.2.3"

### SEC-002-004-002-004
- `source_number`: `2.4.2.4`
- `title`: "Mb_MessageQueueStateType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.4 Mb_MessageQueueStateType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "channel", "message", "queue", "can", "receive", "events", "issued"]
- `anchor`: "2.4.2.4"

### SEC-002-004-002-005
- `source_number`: `2.4.2.5`
- `title`: "Mb_ChannelStateType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.5 Mb_ChannelStateType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType", "FC7xxx"]
- `anchor`: "2.4.2.5"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Structure", "Mb_RingBlockType", "Diagram", "Data", "Fields"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Mb_RingBlockType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Mb_RingBlockType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType", "FC7xxx"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Mb_FreeChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Mb_FreeChannelConfigType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType", "FC7xxx"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Mb_MessageQueueType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Mb_MessageQueueType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType", "FC7xxx"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Mb_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Mb_ChannelConfigType", "channel", "Mb_CoreType", "Mb_ConfigType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "2.6.4"

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: "Mb_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Mb_ConfigType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Mb_ChannelConfigType", "channel", "Mb_CoreType", "Mb_ConfigType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "2.6.5"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `14`
- `physical_page_end`: `17`
- `printed_page_start`: `14`
- `printed_page_end`: `17`
- `keywords`: ["Channel", "Mailbox", "CDD_Mb", "Mb_ChannelType", "channel", "message", "void", "Returns"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in CDD_Mb.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h"
- `physical_page_start`: `14`
- `physical_page_end`: `17`
- `printed_page_start`: `14`
- `printed_page_end`: `17`
- `keywords`: ["Channel", "Mailbox", "CDD_Mb", "Mb_ChannelType", "channel", "message", "void", "Returns"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Mailbox", "CDD_Mb", "channel", "Mb_ChannelType", "void", "ConfigPtr", "DstCore", "Mb_Init"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Mb_DeInit ( void )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.2 void Mb_DeInit ( void )"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Mailbox", "CDD_Mb", "channel", "Mb_ChannelType", "void", "ConfigPtr", "DstCore", "Mb_Init"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "Mb_ReturnStateType Mb_SendData ( Mb_ChannelType Channel, Mb_CoreType DstCore, uint32 Data0,"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.3 Mb_ReturnStateType Mb_SendData ( Mb_ChannelType Channel, Mb_CoreType DstCore, uint32 Data0,"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Mailbox", "CDD_Mb", "channel", "Mb_ChannelType", "void", "ConfigPtr", "DstCore", "Mb_Init"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength", "message", "MB_RET_STATE_FAILED", "MB_RET_STATE_BUSY"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "Mb_ReturnStateType Mb_SendMessage (Mb_ChannelType Channel, uint8 *Buffer, uint32 BufferLength)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.5 Mb_ReturnStateType Mb_SendMessage (Mb_ChannelType Channel, uint8 *Buffer, uint32 BufferLength)"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength", "message", "MB_RET_STATE_FAILED", "MB_RET_STATE_BUSY"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "void Mb_GetMessage (Mb_ChannelType Channel, uint8 *ReceiveBuffer, uint32 ReceiveBufferLength)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.6 void Mb_GetMessage (Mb_ChannelType Channel, uint8 *ReceiveBuffer, uint32 ReceiveBufferLength)"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength", "message", "MB_RET_STATE_FAILED", "MB_RET_STATE_BUSY"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "Mb_MessageQueueStateType Mb_GetMessageQueueState (Mb_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.8 Mb_MessageQueueStateType Mb_GetMessageQueueState (Mb_ChannelType Channel)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "Mb_ReturnStateType Mb_ResetMessageQueue (Mb_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.9 Mb_ReturnStateType Mb_ResetMessageQueue (Mb_ChannelType Channel)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "void Mb_ResetChannel (Mb_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns", "void", "Mb_ResetChannel", "Mb_ChannelStateType"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "Mb_ChannelStateType Mb_GetChannelState (Mb_ChannelType Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.11 Mb_ChannelStateType Mb_GetChannelState (Mb_ChannelType Channel)"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns", "void", "Mb_ResetChannel", "Mb_ChannelStateType"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "void Mb_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.12 void Mb_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns", "void", "Mb_ResetChannel", "Mb_ChannelStateType"]
- `anchor`: "2.7.1.12"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in CDD_Mb_Hw.h."
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h."
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "void Mb_HL_DeInit (void)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.2 void Mb_HL_DeInit (void)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "Std_ReturnType Mb_HL_SendData(uint32 u32HwChannel, uint32 u32DstCore, uint32 u32Data0, uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.3 Std_ReturnType Mb_HL_SendData(uint32 u32HwChannel, uint32 u32DstCore, uint32 u32Data0, uint32"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "Std_ReturnType Mb_HL_DoneChannel (uint32 u32HwChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.4 Std_ReturnType Mb_HL_DoneChannel (uint32 u32HwChannel)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState", "Mb_ResetChannel", "Mb_HL_ForceUnlockChannel"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "void Mb_HL_ForceUnlockChannel(uint32 u32HwChannel)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.6 void Mb_HL_ForceUnlockChannel(uint32 u32HwChannel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState", "Mb_ResetChannel", "Mb_HL_ForceUnlockChannel"]
- `anchor`: "2.8.1.6"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `physical_page_start`: `19`
- `physical_page_end`: `21`
- `printed_page_start`: `19`
- `printed_page_end`: `21`
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "FC7xxx", "Done", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Initialization"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState", "Mb_ResetChannel", "Mb_HL_ForceUnlockChannel"]
- `anchor`: "2.9.1"

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: "De-initialization"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 De-initialization"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState", "Mb_ResetChannel", "Mb_HL_ForceUnlockChannel"]
- `anchor`: "2.9.2"

### SEC-002-009-003
- `source_number`: `2.9.3`
- `title`: "Free Channel Mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["Mailbox", "FC7xxx", "Free", "Channel", "Mode", "Automatically", "Done"]
- `anchor`: "2.9.3"

### SEC-002-009-003-001
- `source_number`: `2.9.3.1`
- `title`: "Automatically Done"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.1 Automatically Done"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["Mailbox", "FC7xxx", "Free", "Channel", "Mode", "Automatically", "Done"]
- `anchor`: "2.9.3.1"

### SEC-002-009-003-002
- `source_number`: `2.9.3.2`
- `title`: "Manually Done"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.2 Manually Done"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["Mailbox", "FC7xxx", "Manually", "Done", "Message", "Queue", "Mode"]
- `anchor`: "2.9.3.2"

### SEC-002-009-004
- `source_number`: `2.9.4`
- `title`: "Message Queue Mode"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 Message Queue Mode"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["Mailbox", "FC7xxx", "Manually", "Done", "Message", "Queue", "Mode"]
- `anchor`: "2.9.4"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `22`
- `physical_page_end`: `35`
- `printed_page_start`: `22`
- `printed_page_end`: `35`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "Mailbox", "Origin", "SymbolicNameValue", "BOOLEAN"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["Mailbox", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `23`
- `physical_page_end`: `35`
- `printed_page_start`: `23`
- `printed_page_end`: `35`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "Mailbox", "Origin", "SymbolicNameValue", "BOOLEAN"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["Mailbox", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx", "Variable", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "MbConfigSet"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet"
- `physical_page_start`: `24`
- `physical_page_end`: `29`
- `printed_page_start`: `24`
- `printed_page_end`: `29`
- `keywords`: ["Variable", "Mailbox", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue", "channel"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "MbMaxChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild", "MbConfigSet", "INTEGER", "SymbolicNameValue"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "MbGetSpinLockTimeout"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.2 MbGetSpinLockTimeout"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild", "MbConfigSet", "INTEGER", "SymbolicNameValue"]
- `anchor`: "3.2.2.2"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "MbChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel"
- `physical_page_start`: `24`
- `physical_page_end`: `29`
- `printed_page_start`: `24`
- `printed_page_end`: `29`
- `keywords`: ["Variable", "Mailbox", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue", "channel"]
- `anchor`: "3.2.2.3"

### SEC-003-002-002-003-02
- `source_number`: `3.2.2.3.1.1`
- `title`: "MbChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "3.2.2.3.1.1"

### SEC-003-002-002-003-03
- `source_number`: `3.2.2.3.2`
- `title`: "MbChannelMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.2 MbChannelMode"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "3.2.2.3.2"

### SEC-003-002-002-003-04
- `source_number`: `3.2.2.3.3`
- `title`: "MbHwChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.3 MbHwChannel"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "3.2.2.3.3"

### SEC-003-002-002-003-05
- `source_number`: `3.2.2.3.4`
- `title`: "MbChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.4 MbChannelEcucPartitionRef"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.4"

### SEC-003-002-002-003-06
- `source_number`: `3.2.2.3.5`
- `title`: "MbFreeChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel"
- `physical_page_start`: `26`
- `physical_page_end`: `27`
- `printed_page_start`: `26`
- `printed_page_end`: `27`
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "Origin", "BOOLEAN", "SymbolicNameValue"]
- `anchor`: "3.2.2.3.5"

### SEC-003-002-002-003-07
- `source_number`: `3.2.2.3.5.1`
- `title`: "MbChannelAutoDone"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.5.1"

### SEC-003-002-002-003-08
- `source_number`: `3.2.2.3.5.2`
- `title`: "MbChannelReqToCore0"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.2 MbChannelReqToCore0"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.5.2"

### SEC-003-002-002-003-09
- `source_number`: `3.2.2.3.5.3`
- `title`: "MbChannelReqToCore1"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.3 MbChannelReqToCore1"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "BOOLEAN", "MbChannelReqToCore1", "Enable", "disable", "channel"]
- `anchor`: "3.2.2.3.5.3"

### SEC-003-002-002-003-10
- `source_number`: `3.2.2.3.5.4`
- `title`: "MbChannelReqToCore2"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.4 MbChannelReqToCore2"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "BOOLEAN", "MbChannelReqToCore1", "Enable", "disable", "channel"]
- `anchor`: "3.2.2.3.5.4"

### SEC-003-002-002-003-11
- `source_number`: `3.2.2.3.5.5`
- `title`: "MbChannelDoneToCore0"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.5 MbChannelDoneToCore0"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "BOOLEAN", "MbChannelReqToCore1", "Enable", "disable", "channel"]
- `anchor`: "3.2.2.3.5.5"

### SEC-003-002-002-003-12
- `source_number`: `3.2.2.3.5.6`
- `title`: "MbChannelDoneToCore1"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.6 MbChannelDoneToCore1"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "BOOLEAN", "MbChannelReqToCore1", "Enable", "disable", "channel"]
- `anchor`: "3.2.2.3.5.6"

### SEC-003-002-002-003-13
- `source_number`: `3.2.2.3.5.7`
- `title`: "MbChannelDoneToCore2"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.5.7"

### SEC-003-002-002-003-14
- `source_number`: `3.2.2.3.5.8`
- `title`: "MbRequestNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.8 MbRequestNotification"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.5.8"

### SEC-003-002-002-003-15
- `source_number`: `3.2.2.3.5.9`
- `title`: "MbDoneNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.9 MbDoneNotification"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.5.9"

### SEC-003-002-002-003-16
- `source_number`: `3.2.2.3.6`
- `title`: "MbMessageQueue"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue"
- `physical_page_start`: `28`
- `physical_page_end`: `29`
- `printed_page_start`: `28`
- `printed_page_end`: `29`
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue", "MbMsgBlockNum"]
- `anchor`: "3.2.2.3.6"

### SEC-003-002-002-003-17
- `source_number`: `3.2.2.3.6.1`
- `title`: "MbMsgSender"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.1 MbMsgSender"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.3.6.1"

### SEC-003-002-002-003-18
- `source_number`: `3.2.2.3.6.2`
- `title`: "MbMsgReceiver"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "3.2.2.3.6.2"

### SEC-003-002-002-003-19
- `source_number`: `3.2.2.3.6.3`
- `title`: "MbMsgBlockNum"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.3 MbMsgBlockNum"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "3.2.2.3.6.3"

### SEC-003-002-002-003-20
- `source_number`: `3.2.2.3.6.4`
- `title`: "MbMsgBlockNum"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.4 MbMsgBlockNum"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "3.2.2.3.6.4"

### SEC-003-002-002-003-21
- `source_number`: `3.2.2.3.6.5`
- `title`: "MbReceivedNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.5 MbReceivedNotification"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "3.2.2.3.6.5"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "MbGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "MbDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-002
- `source_number`: `3.2.3.2`
- `title`: "MbMulticoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.2 MbMulticoreSupport"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect"]
- `anchor`: "3.2.3.2"

### SEC-003-002-003-001-02
- `source_number`: `3.2.3.1`
- `title`: "MbDisableRuntimeErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDisableRuntimeErrorDetect"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect"]
- `anchor`: "3.2.3.1 MbDisableRuntimeErrorDetect"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "MbOptionalApis"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Mailbox", "Variable", "BOOLEAN", "SymbolicNameValue", "Origin", "MbOptionalApis", "Screenshot", "Properties"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "MbDeInitApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.1 MbDeInitApi"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Mailbox", "Variable", "BOOLEAN", "SymbolicNameValue", "Origin", "MbOptionalApis", "Screenshot", "Properties"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "MbFreeChannelApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.2 MbFreeChannelApi"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Mailbox", "Variable", "BOOLEAN", "SymbolicNameValue", "Origin", "MbOptionalApis", "Screenshot", "Properties"]
- `anchor`: "3.2.4.2"

### SEC-003-002-004-003
- `source_number`: `3.2.4.3`
- `title`: "MbMessageQueueApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.3 MbMessageQueueApi"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Mailbox", "Variable", "BOOLEAN", "SymbolicNameValue", "Origin", "MbOptionalApis", "Screenshot", "Properties"]
- `anchor`: "3.2.4.3"

### SEC-003-002-004-004
- `source_number`: `3.2.4.4`
- `title`: "MbResetChannelApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.4 MbResetChannelApi"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["Mailbox", "SymbolicNameValue", "Variable", "BOOLEAN", "MbResetChannelApi", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.4"

### SEC-003-002-004-005
- `source_number`: `3.2.4.5`
- `title`: "MbGetChannelStatusApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.5 MbGetChannelStatusApi"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["Mailbox", "SymbolicNameValue", "Variable", "BOOLEAN", "MbResetChannelApi", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.5"

### SEC-003-002-004-006
- `source_number`: `3.2.4.6`
- `title`: "MbGetVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.6 MbGetVersionInfoApi"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["Mailbox", "SymbolicNameValue", "Variable", "BOOLEAN", "MbResetChannelApi", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.6"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation"
- `physical_page_start`: `32`
- `physical_page_end`: `35`
- `printed_page_start`: `32`
- `printed_page_end`: `35`
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "Origin", "INTEGER_LABEL"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "3.2.5.1"

### SEC-003-002-005-002
- `source_number`: `3.2.5.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.2 ArReleaseMinorVersion"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "3.2.5.2"

### SEC-003-002-005-003
- `source_number`: `3.2.5.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.3 ArReleaseRevisionVersion"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "3.2.5.3"

### SEC-003-002-005-004
- `source_number`: `3.2.5.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.4 SwMajorVersion"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "3.2.5.4"

### SEC-003-002-005-005
- `source_number`: `3.2.5.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot"]
- `anchor`: "3.2.5.5"

### SEC-003-002-005-006
- `source_number`: `3.2.5.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.6 SwPatchVersion"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot"]
- `anchor`: "3.2.5.6"

### SEC-003-002-005-007
- `source_number`: `3.2.5.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.7 ModuleId"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot"]
- `anchor`: "3.2.5.7"

### SEC-003-002-005-008
- `source_number`: `3.2.5.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.8 VendorId"
- `physical_page_start`: `34`
- `physical_page_end`: `35`
- `printed_page_start`: `34`
- `printed_page_end`: `35`
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "FC7xxx", "SwMinorVersion", "specific"]
- `anchor`: "3.2.5.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `36`
- `physical_page_end`: `38`
- `printed_page_start`: `36`
- `printed_page_end`: `38`
- `keywords`: ["Mailbox", "channel", "FC7xxx", "Select", "which", "Configure", "MbChannel", "receive"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["Mailbox", "channel", "FC7xxx", "MbMulticoreSupport", "MbChannel", "EcuC", "physical", "When"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "Mailbox Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `physical_page_start`: `36`
- `physical_page_end`: `38`
- `printed_page_start`: `36`
- `printed_page_end`: `38`
- `keywords`: ["Mailbox", "channel", "FC7xxx", "Select", "which", "Configure", "MbChannel", "receive"]
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
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 Mailbox Introduction ....................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2", "Containers and Variables ..........................................................................…", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT .....................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 Mailbox Introduction / 1.1 Requirements"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 1 Mailbox Introduction", "1.1", "Requirements", "Mailbox (Mb) is a Complex Device Driver (CDD), so there are no AUTOSAR requirements regarding this…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "None"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Mb.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.3", "Macros", "2.3.1", "Macros in CDD_Mb.h"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Mb_Version.h"
- `content_types`: ["text", "table"]
- `anchors`: ["#define MB_INIT_ID 0x00U", "API service ID for Mb_Init function.", "#define MB_DEINIT_ID 0x01U", "API service ID for Mb_DeInit function."]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in CDD_Mb_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define MB_SW_MAJOR_VERSION 0", "#define MB_SW_MINOR_VERSION 6", "#define MB_SW_PATCH_VERSION 0", "#define MB_VENDOR_ID 174"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Mb.h / 2.4.1.1 Mb_ReturnStateType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define MB_MAX_HW_CHANNEL (XU)", "Maximum number of Mailbox hardware channel.", "#define MB_MAX_HW_INTR_CHANNEL (XU)", "Maximum number of Mailbox hardware interrupt channel."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.1 Mb_CoreType"
- `content_types`: ["text", "table"]
- `anchors`: ["MB_RET_STATE_FULL", "The message queue is full.", "MB_RET_STATE_EMPTY", "The message queue is empty."]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.5 Mb_ChannelStateType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.4.2.5", "Mb_ChannelStateType", "Enumeration", "Mb_ChannelStateType"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Data Fields", "Mb_CoreType SenderCore", "The sender of messages."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Mb_FreeChannelConfigType * pFreeChannel", "The general configuration of channe The specific configuration of channels configured as a free", "channel.", "Mb_MessageQueueType * pMessageQueue"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Data0", "The DATA0 to be sent.", "Data1", "The DATA1 to be sent."]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Channel", "The channel to be cleared.", "Returns", "MB_RET_STATE_SUCCESS The operation is successful."]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.8", "Hardware Functions", "2.8.1", "Functions in CDD_Mb_Hw.h."]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Returns", "E_OK", "Done successful", "E_NOT_OK"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.1 Automatically Done"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3", "Free Channel Mode", "2.9.3.1", "Automatically Done"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.2 Manually Done"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3.2", "Manually Done", "2.9.4", "Message Queue Mode"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The container inclusion relation is shown as below:"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Type", "Variable: enumeration", "Label", "Config Variant"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["3.2.2.3.4", "MbChannelEcucPartitionRef", "Variable", "MbChannelEcucPartitionRef"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.3 MbChannelReqToCore1"
- `content_types`: ["text"]
- `anchors`: ["SymbolicNameValue", "false", "3.2.2.3.5.3", "MbChannelReqToCore1"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["3.2.2.3.5.7", "MbChannelDoneToCore2", "Variable", "MbChannelDoneToCore2"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "Select the core responsible for sending messages.", "Screenshot", "Properties"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Description", "Notification function for receiving message.", "Screenshot", "Properties"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.1 MbDeInitApi"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Type", "Variable: BOOLEAN", "Origin", "FLAGCHIP"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.4 MbResetChannelApi"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["SymbolicNameValue", "false", "3.2.4.4", "MbResetChannelApi"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.5.1", "ArReleaseMajorVersion", "Variable", "ArReleaseMajorVersion"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.5.5", "SwMinorVersion", "Variable", "SwMinorVersion"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.8 VendorId"
- `content_types`: ["text"]
- `anchors`: ["physical_page 35"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1)"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["", "Enable: Channel will automatically done after receive a request.", "", "Disable: Channel needs to be manually done."]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["c)", "Input the timeout for acquiring a spin lock", "d)", "Enable or disable the development error detection."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx Mailbox User Manual"
- `keywords`: ["Mailbox", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx Mailbox User Manual; Revision History; 0.1"
- `keywords`: ["Mailbox", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
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
- `summary`: "Table of Contents: FC7xxx Mailbox User Manual; Table of Contents; Revision History .................................................................................................................................................. 2"
- `keywords`: ["CDD_Mb", "Mailbox", "CDD_Mb_Hw", "CDD_Mb_Types", "FC7xxx", "CDD_Mb_Version", "CDD_Mb_Cfg", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 Mailbox Introduction ............................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx Mailbox User Manual; 3.2; Containers and Variables .............................................................................................................................. 23"
- `keywords`: ["Mailbox", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "MbConfigSet", "MbGeneral", "MbOptionalApis", "CommonPublishedInformation", "Guides", "Item", "Constraint"]
- `anchors`:
  - `p4`: "3.2"
  - `p4`: "Containers and Variables ..................................................................................................................…"
  - `p4`: "3.2.1"
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 23"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 Mailbox Introduction / 1.1 Requirements"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 Mailbox Introduction / 1.1 Requirements: FC7xxx Mailbox User Manual; Chapter 1 Mailbox Introduction; 1.1"
- `keywords`: ["Mailbox", "message", "channel", "FC7xxx", "CDD", "AUTOSAR", "one", "multiple", "cores", "can"]
- `anchors`:
  - `p5`: "Chapter 1 Mailbox Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirements"
  - `p5`: "Mailbox (Mb) is a Complex Device Driver (CDD), so there are no AUTOSAR requirements regarding this module. It has vendor"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx Mailbox User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["Mailbox", "FC7xxx", "Rejected", "Structure"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "Rejected Requirements"
  - `p6`: "None"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Mb.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Mb.h: FC7xxx Mailbox User Manual; 2.3; Macros"
- `keywords`: ["Mailbox", "CDD_Mb", "define", "channel", "invalid", "identifier", "FC7xxx", "MB_E_UNINIT", "MB_E_ALREADY_INITIALIZED", "MB_E_PARAM_CONFIG"]
- `anchors`:
  - `p7`: "2.3"
  - `p7`: "Macros"
  - `p7`: "2.3.1"
  - `p7`: "Macros in CDD_Mb.h"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Mb_Version.h"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Mb_Version.h: FC7xxx Mailbox User Manual; #define MB_INIT_ID 0x00U; API service ID for Mb_Init function."
- `keywords`: ["Mailbox", "define", "FC7xxx", "MB_INIT_ID", "Mb_Init", "MB_DEINIT_ID", "Mb_DeInit", "MB_SEND_DATA_ID", "Mb_SendData", "MB_DONE_CHANNEL_ID"]
- `anchors`:
  - `p8`: "#define MB_INIT_ID 0x00U"
  - `p8`: "API service ID for Mb_Init function."
  - `p8`: "#define MB_DEINIT_ID 0x01U"
  - `p8`: "API service ID for Mb_DeInit function."

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in CDD_Mb_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in CDD_Mb_Cfg.h: FC7xxx Mailbox User Manual; #define MB_SW_MAJOR_VERSION 0; #define MB_SW_MINOR_VERSION 6"
- `keywords`: ["Mailbox", "define", "STD_ON", "STD_OFF", "switch", "FC7xxx", "MB_SW_MAJOR_VERSION", "MB_SW_MINOR_VERSION", "MB_SW_PATCH_VERSION", "MB_VENDOR_ID"]
- `anchors`:
  - `p9`: "#define MB_SW_MAJOR_VERSION 0"
  - `p9`: "#define MB_SW_MINOR_VERSION 6"
  - `p9`: "#define MB_SW_PATCH_VERSION 0"
  - `p9`: "#define MB_VENDOR_ID 174"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Mb.h / 2.4.1.1 Mb_ReturnStateType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Mb.h / 2.4.1.1 Mb_ReturnStateType: FC7xxx Mailbox User Manual; #define MB_MAX_HW_CHANNEL (XU); Maximum number of Mailbox hardware channel."
- `keywords`: ["Mailbox", "CDD_Mb", "define", "channel", "number", "Mb_ReturnStateType", "FC7xxx", "MB_MAX_HW_CHANNEL", "Maximum", "MB_MAX_HW_INTR_CHANNEL"]
- `anchors`:
  - `p10`: "#define MB_MAX_HW_CHANNEL (XU)"
  - `p10`: "Maximum number of Mailbox hardware channel."
  - `p10`: "#define MB_MAX_HW_INTR_CHANNEL (XU)"
  - `p10`: "Maximum number of Mailbox hardware interrupt channel."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.1 Mb_CoreType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.1 Mb_CoreType: FC7xxx Mailbox User Manual; MB_RET_STATE_FULL; The message queue is full."
- `keywords`: ["Mailbox", "channel", "message", "queue", "can", "receive", "events", "issued", "Mb_CoreType", "Enumeration"]
- `anchors`:
  - `p11`: "MB_RET_STATE_FULL"
  - `p11`: "The message queue is full."
  - `p11`: "MB_RET_STATE_EMPTY"
  - `p11`: "The message queue is empty."

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.5 Mb_ChannelStateType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.5 Mb_ChannelStateType: FC7xxx Mailbox User Manual; 2.4.2.5; Mb_ChannelStateType"
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType", "FC7xxx", "MB_CHANNEL_IDLE", "MB_CHANNEL_BUSY"]
- `anchors`:
  - `p12`: "2.4.2.5"
  - `p12`: "Mb_ChannelStateType"
  - `p12`: "Enumeration"
  - `p12`: "Mb_ChannelStateType"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType: FC7xxx Mailbox User Manual; Diagram; Data Fields"
- `keywords`: ["Mailbox", "Mb_ChannelConfigType", "channel", "Mb_CoreType", "Mb_ConfigType", "FC7xxx", "Diagram", "Data", "Fields", "SenderCore"]
- `anchors`:
  - `p13`: "Diagram"
  - `p13`: "Data Fields"
  - `p13`: "Mb_CoreType SenderCore"
  - `p13`: "The sender of messages."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr ): FC7xxx Mailbox User Manual; Mb_FreeChannelConfigType * pFreeChannel; The general configuration of channe The specific configuration of channels configured as a free"
- `keywords`: ["Mailbox", "CDD_Mb", "channel", "Mb_ChannelType", "void", "ConfigPtr", "DstCore", "Mb_Init", "Mb_ConfigType", "Mb_DeInit"]
- `anchors`:
  - `p14`: "Mb_FreeChannelConfigType * pFreeChannel"
  - `p14`: "The general configuration of channe The specific configuration of channels configured as a free"
  - `p14`: "channel."
  - `p14`: "Mb_MessageQueueType * pMessageQueue"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel ): FC7xxx Mailbox User Manual; Data0; The DATA0 to be sent."
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength", "message", "MB_RET_STATE_FAILED", "MB_RET_STATE_BUSY", "channel", "void"]
- `anchors`:
  - `p15`: "Data0"
  - `p15`: "The DATA0 to be sent."
  - `p15`: "Data1"
  - `p15`: "The DATA1 to be sent."

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel ): FC7xxx Mailbox User Manual; Diagram; Parameters"
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType", "Mb_GetMessageQueueState", "Mb_ReturnStateType"]
- `anchors`:
  - `p16`: "Diagram"
  - `p16`: "Parameters"
  - `p16`: "Parameter"
  - `p16`: "Description"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel): FC7xxx Mailbox User Manual; Channel; The channel to be cleared."
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns", "void", "Mb_ResetChannel", "Mb_ChannelStateType", "Mb_GetChannelState", "Mb_GetVersionInfo"]
- `anchors`:
  - `p17`: "Channel"
  - `p17`: "The channel to be cleared."
  - `p17`: "Returns"
  - `p17`: "MB_RET_STATE_SUCCESS The operation is successful."

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag): FC7xxx Mailbox User Manual; 2.8; Hardware Functions"
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init", "u16ChannelDoneFlag", "Diagram"]
- `anchors`:
  - `p18`: "2.8"
  - `p18`: "Hardware Functions"
  - `p18`: "2.8.1"
  - `p18`: "Functions in CDD_Mb_Hw.h."

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel): FC7xxx Mailbox User Manual; Returns; E_OK"
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState", "Mb_ResetChannel", "Mb_HL_ForceUnlockChannel", "FC7xxx", "Returns"]
- `anchors`:
  - `p19`: "Returns"
  - `p19`: "E_OK"
  - `p19`: "Done successful"
  - `p19`: "E_NOT_OK"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.1 Automatically Done"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.1 Automatically Done: FC7xxx Mailbox User Manual; 2.9.3; Free Channel Mode"
- `keywords`: ["Mailbox", "FC7xxx", "Free", "Channel", "Mode", "Automatically", "Done"]
- `anchors`:
  - `p20`: "2.9.3"
  - `p20`: "Free Channel Mode"
  - `p20`: "2.9.3.1"
  - `p20`: "Automatically Done"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.2 Manually Done"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.2 Manually Done: FC7xxx Mailbox User Manual; 2.9.3.2; Manually Done"
- `keywords`: ["Mailbox", "FC7xxx", "Manually", "Done", "Message", "Queue", "Mode"]
- `anchors`:
  - `p21`: "2.9.3.2"
  - `p21`: "Manually Done"
  - `p21`: "2.9.4"
  - `p21`: "Message Queue Mode"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation: FC7xxx Mailbox User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["Mailbox", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown", "below"]
- `anchors`:
  - `p22`: "Chapter 3 Tresos Configuration Items"
  - `p22`: "3.1"
  - `p22`: "Container Inclusion Relation"
  - `p22`: "The container inclusion relation is shown as below:"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT: FC7xxx Mailbox User Manual; 3.2; Containers and Variables"
- `keywords`: ["Mailbox", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx", "Variable", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p23`: "3.2"
  - `p23`: "Containers and Variables"
  - `p23`: "3.2.1"
  - `p23`: "IMPLEMENTATION_CONFIG_VARIANT"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel: FC7xxx Mailbox User Manual; Type; Variable: enumeration"
- `keywords`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild", "MbConfigSet", "INTEGER", "SymbolicNameValue", "MbGetSpinLockTimeout", "FC7xxx"]
- `anchors`:
  - `p24`: "Type"
  - `p24`: "Variable: enumeration"
  - `p24`: "Label"
  - `p24`: "Config Variant"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId: FC7xxx Mailbox User Manual; Screenshot; Properties"
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel", "INTEGER", "MbChannelMode"]
- `anchors`:
  - `p25`: "Screenshot"
  - `p25`: "Properties"
  - `p25`: "Property"
  - `p25`: "Value"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone: FC7xxx Mailbox User Manual; 3.2.2.3.4; MbChannelEcucPartitionRef"
- `keywords`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot", "Properties", "Property", "Origin", "MbFreeChannel", "MbChannelAutoDone"]
- `anchors`:
  - `p26`: "3.2.2.3.4"
  - `p26`: "MbChannelEcucPartitionRef"
  - `p26`: "Variable"
  - `p26`: "MbChannelEcucPartitionRef"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.3 MbChannelReqToCore1"
- `content_types`: ["text"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.3 MbChannelReqToCore1: FC7xxx Mailbox User Manual; SymbolicNameValue; false"
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "BOOLEAN", "MbChannelReqToCore1", "Enable", "disable", "channel", "Screenshot", "Properties"]
- `anchors`:
  - `p27`: "SymbolicNameValue"
  - `p27`: "false"
  - `p27`: "3.2.2.3.5.3"
  - `p27`: "MbChannelReqToCore1"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2: FC7xxx Mailbox User Manual; 3.2.2.3.5.7; MbChannelDoneToCore2"
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin", "MbRequestNotification", "NAME"]
- `anchors`:
  - `p28`: "3.2.2.3.5.7"
  - `p28`: "MbChannelDoneToCore2"
  - `p28`: "Variable"
  - `p28`: "MbChannelDoneToCore2"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver: FC7xxx Mailbox User Manual; Description; Select the core responsible for sending messages."
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin", "ASPathDataOfSchema", "AUTOSAR"]
- `anchors`:
  - `p29`: "Description"
  - `p29`: "Select the core responsible for sending messages."
  - `p29`: "Screenshot"
  - `p29`: "Properties"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect: FC7xxx Mailbox User Manual; Description; Notification function for receiving message."
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect", "BOOLEAN", "MbMulticoreSupport"]
- `anchors`:
  - `p30`: "Description"
  - `p30`: "Notification function for receiving message."
  - `p30`: "Screenshot"
  - `p30`: "Properties"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.1 MbDeInitApi"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.1 MbDeInitApi: FC7xxx Mailbox User Manual; Type; Variable: BOOLEAN"
- `keywords`: ["Mailbox", "Variable", "BOOLEAN", "SymbolicNameValue", "Origin", "MbOptionalApis", "Screenshot", "Properties", "Property", "MbDeInitApi"]
- `anchors`:
  - `p31`: "Type"
  - `p31`: "Variable: BOOLEAN"
  - `p31`: "Origin"
  - `p31`: "FLAGCHIP"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.4 MbResetChannelApi"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.4 MbResetChannelApi: FC7xxx Mailbox User Manual; SymbolicNameValue; false"
- `keywords`: ["Mailbox", "SymbolicNameValue", "Variable", "BOOLEAN", "MbResetChannelApi", "Screenshot", "Properties", "Property", "MbGetChannelStatusApi", "MbGetVersionInfoApi"]
- `anchors`:
  - `p32`: "SymbolicNameValue"
  - `p32`: "false"
  - `p32`: "3.2.4.4"
  - `p32`: "MbResetChannelApi"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion: FC7xxx Mailbox User Manual; 3.2.5.1; ArReleaseMajorVersion"
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number", "implementation", "Screenshot"]
- `anchors`:
  - `p33`: "3.2.5.1"
  - `p33`: "ArReleaseMajorVersion"
  - `p33`: "Variable"
  - `p33`: "ArReleaseMajorVersion"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion: FC7xxx Mailbox User Manual; 3.2.5.5; SwMinorVersion"
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p34`: "3.2.5.5"
  - `p34`: "SwMinorVersion"
  - `p34`: "Variable"
  - `p34`: "SwMinorVersion"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.8 VendorId"
- `content_types`: ["text"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.8 VendorId: FC7xxx Mailbox User Manual"
- `keywords`: ["Mailbox", "FC7xxx"]
- `anchors`:
  - `p35`: "no body anchor extracted"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx Mailbox User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["Mailbox", "channel", "FC7xxx", "MbMulticoreSupport", "MbChannel", "EcuC", "physical", "When", "set", "Free"]
- `anchors`:
  - `p36`: "Chapter 4 Configuration Guides"
  - `p36`: "4.1"
  - `p36`: "Configuration Item Constraint"
  - `p36`: "1)"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps: FC7xxx Mailbox User Manual; Enable: Channel will automatically done after receive a request.; Disable: Channel needs to be manually done."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel", "Channel", "done"]
- `anchors`:
  - `p37`: ""
  - `p37`: "Enable: Channel will automatically done after receive a request."
  - `p37`: ""
  - `p37`: "Disable: Channel needs to be manually done."

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps: FC7xxx Mailbox User Manual; c); Input the timeout for acquiring a spin lock"
- `keywords`: ["Mailbox", "FC7xxx", "timeout", "acquiring", "spin", "lock", "Enable", "disable", "development", "error"]
- `anchors`:
  - `p38`: "c)"
  - `p38`: "Input the timeout for acquiring a spin lock"
  - `p38`: "d)"
  - `p38`: "Enable or disable the development error detection."

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
- `caption`: "Table-like content on page 4"
- `physical_pages`: `4`
- `printed_pages`: ["4"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "MbConfigSet", "MbGeneral"]
- `summary`: "Indexes table-like source content for Table-like content on page 4; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 4"
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
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Mb.h"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "CDD_Mb", "define", "channel", "invalid"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Mb_Version.h"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "define", "FC7xxx", "MB_INIT_ID", "Mb_Init"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in CDD_Mb_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "define", "STD_ON", "STD_OFF", "switch"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Mb.h / 2.4.1.1 Mb_ReturnStateType"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "CDD_Mb", "define", "channel", "number"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.1 Mb_CoreType"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "channel", "message", "queue", "can"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.5 Mb_ChannelStateType"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Mb_ChannelConfigType", "channel", "Mb_CoreType", "Mb_ConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0014-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0014-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `14`
- `printed_pages`: ["14"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "CDD_Mb", "channel", "Mb_ChannelType", "void"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Table-like content on page 15"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType"]
- `summary`: "Indexes table-like source content for Table-like content on page 19; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 19"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0022-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0024-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-001"
- `caption`: "Table-like content on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 26; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 26"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0028-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0028-001"
- `caption`: "Table-like content on page 28"
- `physical_pages`: `28`
- `printed_pages`: ["28"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 28; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 28"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0030-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0030-001"
- `caption`: "Table-like content on page 30"
- `physical_pages`: `30`
- `printed_pages`: ["30"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property"]
- `summary`: "Indexes table-like source content for Table-like content on page 30; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 30"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0036-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0036-001"
- `caption`: "Table-like content on page 36"
- `physical_pages`: `36`
- `printed_pages`: ["36"]
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "channel", "FC7xxx", "MbMulticoreSupport", "MbChannel"]
- `summary`: "Indexes table-like source content for Table-like content on page 36; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 36"
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
- `keywords`: ["CDD_Mb", "Mailbox", "CDD_Mb_Hw", "CDD_Mb_Types", "FC7xxx", "CDD_Mb_Version", "CDD_Mb_Cfg", "Mb_RingBlockType"]
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
- `keywords`: ["Mailbox", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "MbConfigSet", "MbGeneral", "MbOptionalApis", "CommonPublishedInformation", "Guides"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0006-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "Image block near 2.1 Rejected Requirements"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[36.0, 166.41, 559.3, 347.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.1 Rejected Requirements; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "Image block near 2.1 Rejected Requirements"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0006-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-002"
- `caption`: "Image block near 2.1 Rejected Requirements"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[36.0, 353.3, 530.12, 549.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.1 Rejected Requirements; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "Image block near 2.1 Rejected Requirements"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0006-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-003"
- `caption`: "Image block near 2.1 Rejected Requirements"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[36.0, 555.0, 559.3, 739.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.1 Rejected Requirements; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "Image block near 2.1 Rejected Requirements"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0012-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0012-001"
- `caption`: "Generated visual anchor: 2.4.2.5 Mb_ChannelStateType"
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in CDD_Mb_Types.h / 2.4.2.5 Mb_ChannelStateType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.4.2.5 Mb_ChannelStateType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["Mailbox", "channel", "Mb_ChannelType", "Mb_ChannelStateType", "Mb_RingBlockType", "Mb_FreeChannelConfigType", "Mb_MessageQueueType", "FC7xxx"]
- `anchor`: "2.4.2.5 Mb_ChannelStateType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0013-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-001"
- `caption`: "Image block near 2.6.4 Mb_ChannelConfigType"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType"
- `bbox`: `[112.25, 37.4, 244.93, 132.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.4 Mb_ChannelConfigType; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Mb_ChannelConfigType", "channel", "Mb_CoreType", "Mb_ConfigType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "Image block near 2.6.4 Mb_ChannelConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0013-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-002"
- `caption`: "Image block near 2.6.4 Mb_ChannelConfigType"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Mb_ChannelConfigType"
- `bbox`: `[112.25, 544.81, 538.87, 706.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.4 Mb_ChannelConfigType; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Mb_ChannelConfigType", "channel", "Mb_CoreType", "Mb_ConfigType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "Image block near 2.6.4 Mb_ChannelConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0014-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-001"
- `caption`: "Image block near 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `bbox`: `[112.5, 657.46, 364.5, 723.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "CDD_Mb", "channel", "Mb_ChannelType", "void", "ConfigPtr", "DstCore", "Mb_Init"]
- `anchor`: "Image block near 2.7.1.1 void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-001"
- `caption`: "Image block near 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `bbox`: `[112.25, 198.84, 527.0, 264.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength", "message", "MB_RET_STATE_FAILED", "MB_RET_STATE_BUSY"]
- `anchor`: "Image block near 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0015-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-002"
- `caption`: "Image block near 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `bbox`: `[112.25, 392.9, 384.5, 534.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "operation", "BufferLength", "message", "MB_RET_STATE_FAILED", "MB_RET_STATE_BUSY"]
- `anchor`: "Image block near 2.7.1.4 void Mb_DoneChannel ( Mb_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `bbox`: `[112.25, 37.4, 377.0, 141.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-002"
- `caption`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `bbox`: `[112.3, 304.59, 402.55, 370.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-003"
- `caption`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `bbox`: `[112.25, 726.84, 415.25, 754.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-004"
- `caption`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `bbox`: `[112.5, 498.9, 429.75, 564.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel ); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "message", "Mb_ChannelType", "queue", "Diagram", "Mb_GetMessageCount", "Mb_MessageQueueStateType"]
- `anchor`: "Image block near 2.7.1.7 uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `bbox`: `[112.25, 181.4, 395.0, 285.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns", "void", "Mb_ResetChannel", "Mb_ChannelStateType"]
- `anchor`: "Image block near 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-002"
- `caption`: "Image block near 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Mb.h / 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `bbox`: `[112.25, 413.71, 393.48, 479.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Channel", "Mb_ChannelType", "channel", "Returns", "void", "Mb_ResetChannel", "Mb_ChannelStateType"]
- `anchor`: "Image block near 2.7.1.10 void Mb_ResetChannel (Mb_ChannelType Channel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `bbox`: `[112.5, 714.99, 378.75, 742.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "void", "u32HwChannel", "Std_ReturnType", "u16ChannelRequestFlag", "u32DstCore", "channel", "Mb_HL_Init"]
- `anchor`: "Image block near 2.8.1.1 void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_Mb_Hw.h. / 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `bbox`: `[140.85, 523.37, 468.6, 682.37]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel); use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "u32HwChannel", "channel", "current", "Mb_ChannelStateType", "Mb_HL_GetChannelState", "Mb_ResetChannel", "Mb_HL_ForceUnlockChannel"]
- `anchor`: "Image block near 2.8.1.5 Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 2.9.3.1 Automatically Done"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.1 Automatically Done"
- `bbox`: `[164.47, 36.9, 444.97, 203.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.1 Automatically Done; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Free", "Channel", "Mode", "Automatically", "Done"]
- `anchor`: "Image block near 2.9.3.1 Automatically Done"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-002"
- `caption`: "Image block near 2.9.3.1 Automatically Done"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.1 Automatically Done"
- `bbox`: `[36.0, 252.09, 559.3, 508.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.1 Automatically Done; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Free", "Channel", "Mode", "Automatically", "Done"]
- `anchor`: "Image block near 2.9.3.1 Automatically Done"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.9.3.2 Manually Done"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.2 Manually Done"
- `bbox`: `[36.0, 53.83, 559.3, 340.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.2 Manually Done; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Manually", "Done", "Message", "Queue", "Mode"]
- `anchor`: "Image block near 2.9.3.2 Manually Done"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-002"
- `caption`: "Image block near 2.9.3.2 Manually Done"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 Free Channel Mode / 2.9.3.2 Manually Done"
- `bbox`: `[36.0, 366.44, 559.3, 744.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3.2 Manually Done; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "Manually", "Done", "Message", "Queue", "Mode"]
- `anchor`: "Image block near 2.9.3.2 Manually Done"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Generated visual anchor: 3.1 Container Inclusion Relation"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 3.1 Container Inclusion Relation; generated for retrieval because no formal figure number was detected."
- `keywords`: ["Mailbox", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown"]
- `anchor`: "3.1 Container Inclusion Relation"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[112.5, 748.18, 432.4, 768.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx", "Variable", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[36.0, 36.9, 546.65, 660.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "IMPLEMENTATION_CONFIG_VARIANT", "FC7xxx", "Variable", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 3.2.2.1 MbMaxChannel"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `bbox`: `[112.25, 219.6, 462.5, 273.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 MbMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild", "MbConfigSet", "INTEGER", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1 MbMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-002"
- `caption`: "Image block near 3.2.2.1 MbMaxChannel"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `bbox`: `[112.25, 384.23, 450.5, 408.23]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 MbMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild", "MbConfigSet", "INTEGER", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1 MbMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-003"
- `caption`: "Image block near 3.2.2.1 MbMaxChannel"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.1 MbMaxChannel"
- `bbox`: `[112.25, 555.67, 544.38, 570.07]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 MbMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMaxChannel", "MbChannel", "VariantPostBuild", "MbConfigSet", "INTEGER", "SymbolicNameValue"]
- `anchor`: "Image block near 3.2.2.1 MbMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-001"
- `caption`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `bbox`: `[112.25, 37.4, 559.3, 140.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.1.1 MbChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-002"
- `caption`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `bbox`: `[112.25, 289.15, 463.25, 310.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.1.1 MbChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-003"
- `caption`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `bbox`: `[112.25, 473.09, 455.75, 495.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.1.1 MbChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-004"
- `caption`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.1.1 MbChannelId"
- `bbox`: `[112.25, 657.78, 459.5, 681.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.1.1 MbChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "MbChannelId", "channel"]
- `anchor`: "Image block near 3.2.2.3.1.1 MbChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-001"
- `caption`: "Image block near 3.2.2.3.5.1 MbChannelAutoDone"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone"
- `bbox`: `[112.25, 106.15, 559.3, 194.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.5.1 MbChannelAutoDone; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.3.5.1 MbChannelAutoDone"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-002"
- `caption`: "Image block near 3.2.2.3.5.1 MbChannelAutoDone"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.1 MbChannelAutoDone"
- `bbox`: `[112.25, 356.79, 440.39, 406.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.5.1 MbChannelAutoDone; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "ECUC", "MbChannelEcucPartitionRef", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.3.5.1 MbChannelAutoDone"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Image block near 3.2.2.3.5.7 MbChannelDoneToCore2"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `bbox`: `[112.25, 255.96, 486.31, 281.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.5.7 MbChannelDoneToCore2; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.3.5.7 MbChannelDoneToCore2"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-002"
- `caption`: "Image block near 3.2.2.3.5.7 MbChannelDoneToCore2"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `bbox`: `[112.25, 447.65, 482.56, 469.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.5.7 MbChannelDoneToCore2; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.3.5.7 MbChannelDoneToCore2"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-003"
- `caption`: "Image block near 3.2.2.3.5.7 MbChannelDoneToCore2"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.5 MbFreeChannel / 3.2.2.3.5.7 MbChannelDoneToCore2"
- `bbox`: `[112.25, 639.1, 425.99, 659.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.5.7 MbChannelDoneToCore2; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "SymbolicNameValue", "MbChannelDoneToCore2", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.3.5.7 MbChannelDoneToCore2"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `bbox`: `[112.25, 54.83, 549.04, 79.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.6.2 MbMsgReceiver; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-002"
- `caption`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `bbox`: `[108.0, 245.27, 559.48, 265.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.6.2 MbMsgReceiver; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-003"
- `caption`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `bbox`: `[112.25, 431.52, 543.32, 450.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.6.2 MbMsgReceiver; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-004"
- `caption`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MbConfigSet / 3.2.2.3 MbChannel / 3.2.2.3.6 MbMessageQueue / 3.2.2.3.6.2 MbMsgReceiver"
- `bbox`: `[101.8, 617.66, 559.34, 637.07]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3.6.2 MbMsgReceiver; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "MbMsgBlockNum", "Screenshot", "Properties", "Property", "REFERENCE", "Origin"]
- `anchor`: "Image block near 3.2.2.3.6.2 MbMsgReceiver"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 3.2.3.1 MbDevErrorDetect"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect"
- `bbox`: `[106.3, 54.83, 559.38, 78.86]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 MbDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect"]
- `anchor`: "Image block near 3.2.3.1 MbDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-002"
- `caption`: "Image block near 3.2.3.1 MbDevErrorDetect"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 MbGeneral / 3.2.3.1 MbDevErrorDetect"
- `bbox`: `[112.25, 245.51, 421.2, 295.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 MbDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "Screenshot", "Properties", "Property", "SymbolicNameValue", "MbGeneral", "MbDevErrorDetect"]
- `anchor`: "Image block near 3.2.3.1 MbDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 3.2.4.1 MbDeInitApi"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.1 MbDeInitApi"
- `bbox`: `[112.25, 168.7, 425.71, 220.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1 MbDeInitApi; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "BOOLEAN", "SymbolicNameValue", "Origin", "MbOptionalApis", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.4.1 MbDeInitApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 3.2.4.4 MbResetChannelApi"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 MbOptionalApis / 3.2.4.4 MbResetChannelApi"
- `bbox`: `[112.25, 656.16, 423.39, 705.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.4 MbResetChannelApi; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "SymbolicNameValue", "Variable", "BOOLEAN", "MbResetChannelApi", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.4 MbResetChannelApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `bbox`: `[111.9, 89.36, 499.2, 105.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 ArReleaseMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-002"
- `caption`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `bbox`: `[112.25, 269.09, 491.09, 289.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 ArReleaseMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-003"
- `caption`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `bbox`: `[112.25, 452.72, 486.5, 469.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 ArReleaseMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-004"
- `caption`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.1 ArReleaseMajorVersion"
- `bbox`: `[112.25, 649.1, 502.2, 667.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 ArReleaseMajorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "AUTOSAR", "ArReleaseMajorVersion", "version", "number"]
- `anchor`: "Image block near 3.2.5.1 ArReleaseMajorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 3.2.5.5 SwMinorVersion"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion"
- `bbox`: `[109.5, 488.56, 490.04, 505.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.5 SwMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot"]
- `anchor`: "Image block near 3.2.5.5 SwMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-002"
- `caption`: "Image block near 3.2.5.5 SwMinorVersion"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion"
- `bbox`: `[112.25, 305.41, 491.27, 321.11]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.5 SwMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot"]
- `anchor`: "Image block near 3.2.5.5 SwMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-003"
- `caption`: "Image block near 3.2.5.5 SwMinorVersion"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation / 3.2.5.5 SwMinorVersion"
- `bbox`: `[112.25, 670.44, 486.24, 685.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.5 SwMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "vendor", "SwMinorVersion", "specific", "Screenshot"]
- `anchor`: "Image block near 3.2.5.5 SwMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 252.16, 559.3, 389.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "channel", "FC7xxx", "MbMulticoreSupport", "MbChannel", "EcuC", "physical", "When"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-002"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 441.08, 559.3, 527.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "channel", "FC7xxx", "MbMulticoreSupport", "MbChannel", "EcuC", "physical", "When"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-003"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[107.68, 579.66, 487.62, 711.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "channel", "FC7xxx", "MbMulticoreSupport", "MbChannel", "EcuC", "physical", "When"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[136.0, 76.77, 354.15, 102.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[136.0, 130.46, 516.65, 196.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-003"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[136.9, 225.7, 458.1, 278.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-004"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[136.0, 301.14, 482.85, 352.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-005"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[104.9, 408.95, 490.4, 433.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-006
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-006"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[104.9, 462.49, 490.4, 487.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-007
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-007"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[127.77, 515.43, 467.45, 538.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-008
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-008"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[127.4, 567.61, 467.66, 590.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-009
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-009"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[136.0, 613.05, 474.15, 637.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-010
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-010"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[127.4, 728.8, 467.99, 754.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "Select", "receive", "which", "core", "FC7xxx", "message", "MbChannel"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[101.13, 53.83, 550.88, 82.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "timeout", "acquiring", "spin", "lock", "Enable", "disable"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-002"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[186.27, 122.21, 408.89, 146.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "timeout", "acquiring", "spin", "lock", "Enable", "disable"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-003"
- `caption`: "Image block near 4.2 Mailbox Usage Common Steps"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Mailbox Usage Common Steps"
- `bbox`: `[88.02, 197.33, 507.22, 334.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Mailbox Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Mailbox", "FC7xxx", "timeout", "acquiring", "spin", "lock", "Enable", "disable"]
- `anchor`: "Image block near 4.2 Mailbox Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-MB-RESETCHANNEL
- `name`: "Mb_ResetChannel"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,17,19,32`
- `brief`: "api index entry for `Mb_ResetChannel`."
- `anchors`:
  - `p8`: "API service ID for Mb_ResetChannel function."
  - `p17`: "void Mb_ResetChannel (Mb_ChannelType Channel)"
  - `p19`: "Mb_GetChannelState(),Mb_ResetChannel()"
  - `p32`: "Adds / removes the service Mb_ResetChannel() from the code."
- `aliases`: []

### API-MB-DEINIT
- `name`: "Mb_DeInit"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,14,18,31`
- `brief`: "api index entry for `Mb_DeInit`."
- `anchors`:
  - `p8`: "API service ID for Mb_DeInit function."
  - `p14`: "void Mb_DeInit ( void )"
  - `p18`: "void Mb_DeInit(void)"
  - `p31`: "Adds / removes the service Mb_DeInit() from the code."
- `aliases`: []

### API-MB-DONECHANNEL
- `name`: "Mb_DoneChannel"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,15,19,31`
- `brief`: "api index entry for `Mb_DoneChannel`."
- `anchors`:
  - `p8`: "API service ID for Mb_DoneChannel function."
  - `p15`: "void Mb_DoneChannel ( Mb_ChannelType Channel )"
  - `p19`: "Mb_DoneChannel(), Mb_RequestHandle()"
  - `p31`: "Adds / removes the service Mb_DoneChannel(),Mb_SendData() from the code."
- `aliases`: []

### API-MB-SENDDATA
- `name`: "Mb_SendData"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,14,18,31`
- `brief`: "api index entry for `Mb_SendData`."
- `anchors`:
  - `p8`: "API service ID for Mb_SendData function."
  - `p14`: "Mb_ReturnStateType Mb_SendData ( Mb_ChannelType Channel, Mb_CoreType DstCore, uint32 Data0,"
  - `p18`: "Mb_SendData(),Mb_SendMessage()"
  - `p31`: "Adds / removes the service Mb_DoneChannel(),Mb_SendData() from the code."
- `aliases`: []

### API-MB-SENDMESSAGE
- `name`: "Mb_SendMessage"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,15,18,31`
- `brief`: "api index entry for `Mb_SendMessage`."
- `anchors`:
  - `p8`: "API service ID for Mb_SendMessage function."
  - `p15`: "Mb_ReturnStateType Mb_SendMessage (Mb_ChannelType Channel, uint8 *Buffer, uint32 BufferLength)"
  - `p18`: "Mb_SendData(),Mb_SendMessage()"
  - `p31`: "Mb_SendMessage(),Mb_GetMessage(),Mb_GetMessageCount(),Mb_GetMessageQueueStatus(),Mb_ResetM"
- `aliases`: []

### API-MB-GETVERSIONINFO
- `name`: "Mb_GetVersionInfo"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7,8,17,32`
- `brief`: "api index entry for `Mb_GetVersionInfo`."
- `anchors`:
  - `p7`: "API Mb_GetVersionInfo is called and the parameter versioninfo is is invalid ( e.g. NULL )."
  - `p8`: "API service ID for Mb_GetVersionInfo function."
  - `p17`: "void Mb_GetVersionInfo (Std_VersionInfoType *versioninfo)"
  - `p32`: "Adds / removes the service Mb_GetVersionInfo() from the code."
- `aliases`: []

### API-MB-GETMESSAGE
- `name`: "Mb_GetMessage"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,15,31`
- `brief`: "api index entry for `Mb_GetMessage`."
- `anchors`:
  - `p8`: "API service ID for Mb_GetMessage function."
  - `p15`: "void Mb_GetMessage (Mb_ChannelType Channel, uint8 *ReceiveBuffer, uint32 ReceiveBufferLength)"
  - `p31`: "Mb_SendMessage(),Mb_GetMessage(),Mb_GetMessageCount(),Mb_GetMessageQueueStatus(),Mb_ResetM"
- `aliases`: []

### API-MB-GETMESSAGECOUNT
- `name`: "Mb_GetMessageCount"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16,31`
- `brief`: "api index entry for `Mb_GetMessageCount`."
- `anchors`:
  - `p8`: "API service ID for Mb_GetMessageCount function."
  - `p16`: "uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
  - `p31`: "Mb_SendMessage(),Mb_GetMessage(),Mb_GetMessageCount(),Mb_GetMessageQueueStatus(),Mb_ResetM"
- `aliases`: []

### API-MB-INIT
- `name`: "Mb_Init"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,14,18`
- `brief`: "api index entry for `Mb_Init`."
- `anchors`:
  - `p8`: "API service ID for Mb_Init function."
  - `p14`: "void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
  - `p18`: "Mb_Init()"
- `aliases`: []

### API-MB-GETCHANNELSTATE
- `name`: "Mb_GetChannelState"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17,19`
- `brief`: "api index entry for `Mb_GetChannelState`."
- `anchors`:
  - `p17`: "Mb_ChannelStateType Mb_GetChannelState (Mb_ChannelType Channel)"
  - `p19`: "Mb_GetChannelState(),Mb_ResetChannel()"
- `aliases`: []

### API-MB-GETMESSAGEQUEUESTATE
- `name`: "Mb_GetMessageQueueState"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16`
- `brief`: "api index entry for `Mb_GetMessageQueueState`."
- `anchors`:
  - `p8`: "API service ID for Mb_GetMessageQueueState function."
  - `p16`: "Mb_MessageQueueStateType Mb_GetMessageQueueState (Mb_ChannelType Channel)"
- `aliases`: []

### API-MB-RESETMESSAGEQUEUE
- `name`: "Mb_ResetMessageQueue"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16`
- `brief`: "api index entry for `Mb_ResetMessageQueue`."
- `anchors`:
  - `p8`: "API service ID for Mb_ResetMessageQueue function."
  - `p16`: "Mb_ReturnStateType Mb_ResetMessageQueue (Mb_ChannelType Channel)"
- `aliases`: []

### API-MB-GETCHANNELSTATUS
- `name`: "Mb_GetChannelStatus"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,32`
- `brief`: "api index entry for `Mb_GetChannelStatus`."
- `anchors`:
  - `p8`: "API service ID for Mb_GetChannelStatus function."
  - `p32`: "Adds / removes the service Mb_GetChannelStatus() from the code."
- `aliases`: []

### API-MB-HL-DEINIT
- `name`: "Mb_HL_DeInit"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `Mb_HL_DeInit`."
- `anchors`:
  - `p18`: "void Mb_HL_DeInit (void)"
- `aliases`: []

### API-MB-HL-DONECHANNEL
- `name`: "Mb_HL_DoneChannel"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `Mb_HL_DoneChannel`."
- `anchors`:
  - `p18`: "Std_ReturnType Mb_HL_DoneChannel (uint32 u32HwChannel)"
- `aliases`: []

### API-MB-HL-FORCEUNLOCKCHANNEL
- `name`: "Mb_HL_ForceUnlockChannel"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Mb_HL_ForceUnlockChannel`."
- `anchors`:
  - `p19`: "void Mb_HL_ForceUnlockChannel(uint32 u32HwChannel)"
- `aliases`: []

### API-MB-HL-GETCHANNELSTATE
- `name`: "Mb_HL_GetChannelState"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Mb_HL_GetChannelState`."
- `anchors`:
  - `p19`: "Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `aliases`: []

### API-MB-HL-INIT
- `name`: "Mb_HL_Init"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `Mb_HL_Init`."
- `anchors`:
  - `p18`: "void Mb_HL_Init (uint16 u16ChannelRequestFlag, uint16 u16ChannelDoneFlag)"
- `aliases`: []

### API-MB-HL-SENDDATA
- `name`: "Mb_HL_SendData"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `Mb_HL_SendData`."
- `anchors`:
  - `p18`: "Std_ReturnType Mb_HL_SendData(uint32 u32HwChannel, uint32 u32DstCore, uint32 u32Data0, uint32"
- `aliases`: []

### API-MB-GETMESSAGEQUEUESTATUS
- `name`: "Mb_GetMessageQueueStatus"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `Mb_GetMessageQueueStatus`."
- `anchors`:
  - `p31`: "Mb_SendMessage(),Mb_GetMessage(),Mb_GetMessageCount(),Mb_GetMessageQueueStatus(),Mb_ResetM"
- `aliases`: []

### API-MB-REQUESTHANDLE
- `name`: "Mb_RequestHandle"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Mb_RequestHandle`."
- `anchors`:
  - `p19`: "Mb_DoneChannel(), Mb_RequestHandle()"
- `aliases`: []

### API-ESSAGEQUEUE
- `name`: "essageQueue"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `essageQueue`."
- `anchors`:
  - `p31`: "MbMessageQueueApi"
- `aliases`: []

### CFG-MBCHANNEL
- `name`: "MbChannel"
- `type`: `config`
- `primary_page`: `24`
- `physical_pages`: `24,25,36,37`
- `brief`: "config index entry for `MbChannel`."
- `anchors`:
  - `p24`: "The value for the MbMaxChannel must match with the number of MbChannel configured"
  - `p25`: "MbChannelId"
  - `p36`: "Add an object in the MbChannel tab."
  - `p37`: "Input the number of objects to be added to the MbChannel tab."
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,32`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "CommonPublishedInformation ................................................................................................................…"
  - `p32`: "CommonPublishedInformation"
- `aliases`: []

### CFG-MBCONFIGSET
- `name`: "MbConfigSet"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,24`
- `brief`: "config index entry for `MbConfigSet`."
- `anchors`:
  - `p4`: "MbConfigSet ...............................................................................................................................…"
  - `p24`: "MbConfigSet"
- `aliases`: []

### CFG-MBGENERAL
- `name`: "MbGeneral"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,30`
- `brief`: "config index entry for `MbGeneral`."
- `anchors`:
  - `p4`: "MbGeneral .................................................................................................................................…"
  - `p30`: "MbGeneral"
- `aliases`: []

### CFG-MBGETCHANNELSTATUSAPI
- `name`: "MbGetChannelStatusApi"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,32`
- `brief`: "config index entry for `MbGetChannelStatusApi`."
- `anchors`:
  - `p9`: "MbGetChannelStatusApi switch."
  - `p32`: "MbGetChannelStatusApi"
- `aliases`: []

### CFG-MBRESETCHANNELAPI
- `name`: "MbResetChannelApi"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,32`
- `brief`: "config index entry for `MbResetChannelApi`."
- `anchors`:
  - `p9`: "MbResetChannelApi switch."
  - `p32`: "MbResetChannelApi"
- `aliases`: []

### CFG-MBMAXCHANNEL
- `name`: "MbMaxChannel"
- `type`: `config`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "config index entry for `MbMaxChannel`."
- `anchors`:
  - `p24`: "MbMaxChannel"
- `aliases`: []

### CFG-MBCHANNELAUTODONE
- `name`: "MbChannelAutoDone"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `MbChannelAutoDone`."
- `anchors`:
  - `p26`: "MbChannelAutoDone"
- `aliases`: []

### CFG-MBCHANNELDONETOCORE0
- `name`: "MbChannelDoneToCore0"
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "config index entry for `MbChannelDoneToCore0`."
- `anchors`:
  - `p27`: "MbChannelDoneToCore0"
- `aliases`: []

### CFG-MBCHANNELDONETOCORE1
- `name`: "MbChannelDoneToCore1"
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "config index entry for `MbChannelDoneToCore1`."
- `anchors`:
  - `p27`: "MbChannelDoneToCore1"
- `aliases`: []

### CFG-MBCHANNELDONETOCORE2
- `name`: "MbChannelDoneToCore2"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `MbChannelDoneToCore2`."
- `anchors`:
  - `p28`: "MbChannelDoneToCore2"
- `aliases`: []

### CFG-MBCHANNELECUCPARTITIONREF
- `name`: "MbChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `MbChannelEcucPartitionRef`."
- `anchors`:
  - `p26`: "MbChannelEcucPartitionRef"
- `aliases`: []

### CFG-MBCHANNELID
- `name`: "MbChannelId"
- `type`: `config`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "config index entry for `MbChannelId`."
- `anchors`:
  - `p25`: "MbChannelId"
- `aliases`: []

### CFG-MBCHANNELMODE
- `name`: "MbChannelMode"
- `type`: `config`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "config index entry for `MbChannelMode`."
- `anchors`:
  - `p25`: "MbChannelMode"
- `aliases`: []

### CFG-MBCHANNELREQTOCORE0
- `name`: "MbChannelReqToCore0"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `MbChannelReqToCore0`."
- `anchors`:
  - `p26`: "MbChannelReqToCore0"
- `aliases`: []

### CFG-MBCHANNELREQTOCORE1
- `name`: "MbChannelReqToCore1"
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "config index entry for `MbChannelReqToCore1`."
- `anchors`:
  - `p27`: "MbChannelReqToCore1"
- `aliases`: []

### CFG-MBCHANNELREQTOCORE2
- `name`: "MbChannelReqToCore2"
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "config index entry for `MbChannelReqToCore2`."
- `anchors`:
  - `p27`: "MbChannelReqToCore2"
- `aliases`: []

### CFG-MBDONENOTIFICATION
- `name`: "MbDoneNotification"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `MbDoneNotification`."
- `anchors`:
  - `p28`: "MbDoneNotification"
- `aliases`: []

### CFG-MBFREECHANNEL
- `name`: "MbFreeChannel"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `MbFreeChannel`."
- `anchors`:
  - `p26`: "MbFreeChannel"
- `aliases`: []

### CFG-MBFREECHANNELAPI
- `name`: "MbFreeChannelApi"
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "config index entry for `MbFreeChannelApi`."
- `anchors`:
  - `p31`: "MbFreeChannelApi"
- `aliases`: []

### CFG-MBHWCHANNEL
- `name`: "MbHwChannel"
- `type`: `config`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "config index entry for `MbHwChannel`."
- `anchors`:
  - `p25`: "MbHwChannel"
- `aliases`: []

### CFG-MBRECEIVEDNOTIFICATION
- `name`: "MbReceivedNotification"
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "config index entry for `MbReceivedNotification`."
- `anchors`:
  - `p29`: "MbReceivedNotification"
- `aliases`: []

### CFG-MBREQUESTNOTIFICATION
- `name`: "MbRequestNotification"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `MbRequestNotification`."
- `anchors`:
  - `p28`: "MbRequestNotification"
- `aliases`: []

### MACRO-MB-RET-STATE-BUSY
- `name`: "MB_RET_STATE_BUSY"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,15,17`
- `brief`: "macro index entry for `MB_RET_STATE_BUSY`."
- `anchors`:
  - `p10`: "MB_RET_STATE_BUSY"
  - `p15`: "MB_RET_STATE_BUSY The channel is busy with the current operation."
  - `p17`: "MB_RET_STATE_BUSY The message queue is busy."
- `aliases`: []

### MACRO-MB-RET-STATE-FAILED
- `name`: "MB_RET_STATE_FAILED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,15,17`
- `brief`: "macro index entry for `MB_RET_STATE_FAILED`."
- `anchors`:
  - `p10`: "MB_RET_STATE_FAILED"
  - `p15`: "MB_RET_STATE_FAILED The operation is failed."
  - `p17`: "MB_RET_STATE_FAILED The operation is failed."
- `aliases`: []

### MACRO-MB-CHANNEL-BUSY
- `name`: "MB_CHANNEL_BUSY"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,17,19`
- `brief`: "macro index entry for `MB_CHANNEL_BUSY`."
- `anchors`:
  - `p12`: "MB_CHANNEL_BUSY"
  - `p17`: "MB_CHANNEL_BUSY The channel is busy."
  - `p19`: "MB_CHANNEL_BUSY"
- `aliases`: []

### MACRO-MB-CHANNEL-IDLE
- `name`: "MB_CHANNEL_IDLE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,17,19`
- `brief`: "macro index entry for `MB_CHANNEL_IDLE`."
- `anchors`:
  - `p12`: "MB_CHANNEL_IDLE"
  - `p17`: "MB_CHANNEL_IDLE The channel is idle."
  - `p19`: "MB_CHANNEL_IDLE"
- `aliases`: []

### MACRO-MB-RET-STATE-SUCCESS
- `name`: "MB_RET_STATE_SUCCESS"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,15,17`
- `brief`: "macro index entry for `MB_RET_STATE_SUCCESS`."
- `anchors`:
  - `p10`: "MB_RET_STATE_SUCCESS"
  - `p15`: "MB_RET_STATE_SUCCESS The operation is successful."
  - `p17`: "MB_RET_STATE_SUCCESS The operation is successful."
- `aliases`: []

### MACRO-INTEGER-LABEL
- `name`: "INTEGER_LABEL"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33,34`
- `brief`: "macro index entry for `INTEGER_LABEL`."
- `anchors`:
  - `p33`: "Variable : INTEGER_LABEL"
  - `p34`: "Variable : INTEGER_LABEL"
- `aliases`: []

### MACRO-MB-MESSAGE-QUEUE-EMPTY
- `name`: "MB_MESSAGE_QUEUE_EMPTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,16`
- `brief`: "macro index entry for `MB_MESSAGE_QUEUE_EMPTY`."
- `anchors`:
  - `p11`: "MB_MESSAGE_QUEUE_EMPTY"
  - `p16`: "MB_MESSAGE_QUEUE_EMPTY The message queue is empty."
- `aliases`: []

### MACRO-MB-MESSAGE-QUEUE-FULL
- `name`: "MB_MESSAGE_QUEUE_FULL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,16`
- `brief`: "macro index entry for `MB_MESSAGE_QUEUE_FULL`."
- `anchors`:
  - `p11`: "MB_MESSAGE_QUEUE_FULL"
  - `p16`: "MB_MESSAGE_QUEUE_FULL The message queue is full."
- `aliases`: []

### MACRO-MB-MESSAGE-QUEUE-HALF-FULL
- `name`: "MB_MESSAGE_QUEUE_HALF_FULL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,16`
- `brief`: "macro index entry for `MB_MESSAGE_QUEUE_HALF_FULL`."
- `anchors`:
  - `p11`: "MB_MESSAGE_QUEUE_HALF_FULL"
  - `p16`: "MB_MESSAGE_QUEUE_HALF_FULL The message queue is half full."
- `aliases`: []

### MACRO-MB-MODE-FREE
- `name`: "MB_MODE_FREE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,25`
- `brief`: "macro index entry for `MB_MODE_FREE`."
- `anchors`:
  - `p11`: "MB_MODE_FREE"
  - `p25`: "MB_MODE_FREE, MB_MODE_MESSAGE_QUEUE"
- `aliases`: []

### MACRO-MB-MODE-MESSAGE-QUEUE
- `name`: "MB_MODE_MESSAGE_QUEUE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,25`
- `brief`: "macro index entry for `MB_MODE_MESSAGE_QUEUE`."
- `anchors`:
  - `p11`: "MB_MODE_MESSAGE_QUEUE"
  - `p25`: "MB_MODE_FREE, MB_MODE_MESSAGE_QUEUE"
- `aliases`: []

### MACRO-MB-RET-STATE-FULL
- `name`: "MB_RET_STATE_FULL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,15`
- `brief`: "macro index entry for `MB_RET_STATE_FULL`."
- `anchors`:
  - `p11`: "MB_RET_STATE_FULL"
  - `p15`: "MB_RET_STATE_FULL The message queue is full."
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,23`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 23"
  - `p23`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p9`: "#define MB_DEV_ERROR_DETECT (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p9`: "#define MB_DEV_ERROR_DETECT (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-CORE-COUNT
- `name`: "MB_CORE_COUNT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_CORE_COUNT`."
- `anchors`:
  - `p10`: "#define MB_CORE_COUNT (XU)"
- `aliases`: []

### MACRO-MB-DEINIT-API
- `name`: "MB_DEINIT_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_DEINIT_API`."
- `anchors`:
  - `p9`: "#define MB_DEINIT_API (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-DEV-ERROR-DETECT
- `name`: "MB_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_DEV_ERROR_DETECT`."
- `anchors`:
  - `p9`: "#define MB_DEV_ERROR_DETECT (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-E-ALREADY-INITIALIZED
- `name`: "MB_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p7`: "#define MB_E_ALREADY_INITIALIZED ((uint8)0x0BU)"
- `aliases`: []

### MACRO-MB-E-CHANNEL-LOCKED
- `name`: "MB_E_CHANNEL_LOCKED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_CHANNEL_LOCKED`."
- `anchors`:
  - `p7`: "#define MB_E_CHANNEL_LOCKED ((uint8)0x10)"
- `aliases`: []

### MACRO-MB-E-CHANNEL-UNLOCKED
- `name`: "MB_E_CHANNEL_UNLOCKED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_CHANNEL_UNLOCKED`."
- `anchors`:
  - `p7`: "#define MB_E_CHANNEL_UNLOCKED ((uint8)0x11)"
- `aliases`: []

### MACRO-MB-E-GET-SPIN-LOCK-FAILED
- `name`: "MB_E_GET_SPIN_LOCK_FAILED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_GET_SPIN_LOCK_FAILED`."
- `anchors`:
  - `p7`: "#define MB_E_GET_SPIN_LOCK_FAILED ((uint8)0x16)"
- `aliases`: []

### MACRO-MB-E-INV-PARTITION
- `name`: "MB_E_INV_PARTITION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_INV_PARTITION`."
- `anchors`:
  - `p7`: "#define MB_E_INV_PARTITION ((uint8)0x1A)"
- `aliases`: []

### MACRO-MB-E-MESSAGE-QUEUE-BUSY
- `name`: "MB_E_MESSAGE_QUEUE_BUSY"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_MESSAGE_QUEUE_BUSY`."
- `anchors`:
  - `p7`: "#define MB_E_MESSAGE_QUEUE_BUSY ((uint8)0x15)"
- `aliases`: []

### MACRO-MB-E-MESSAGE-QUEUE-EMPTY
- `name`: "MB_E_MESSAGE_QUEUE_EMPTY"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_MESSAGE_QUEUE_EMPTY`."
- `anchors`:
  - `p7`: "#define MB_E_MESSAGE_QUEUE_EMPTY ((uint8)0x14)"
- `aliases`: []

### MACRO-MB-E-MESSAGE-QUEUE-FULL
- `name`: "MB_E_MESSAGE_QUEUE_FULL"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_MESSAGE_QUEUE_FULL`."
- `anchors`:
  - `p7`: "#define MB_E_MESSAGE_QUEUE_FULL ((uint8)0x13)"
- `aliases`: []

### MACRO-MB-E-PARAM-CHANNEL
- `name`: "MB_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_PARAM_CHANNEL`."
- `anchors`:
  - `p7`: "#define MB_E_PARAM_CHANNEL ((uint8)0x0DU)"
- `aliases`: []

### MACRO-MB-E-PARAM-CONFIG
- `name`: "MB_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_PARAM_CONFIG`."
- `anchors`:
  - `p7`: "#define MB_E_PARAM_CONFIG ((uint8)0x0CU)"
- `aliases`: []

### MACRO-MB-E-PARAM-CORE
- `name`: "MB_E_PARAM_CORE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_PARAM_CORE`."
- `anchors`:
  - `p7`: "#define MB_E_PARAM_CORE ((uint8)0x0E)"
- `aliases`: []

### MACRO-MB-E-PARAM-VINFO
- `name`: "MB_E_PARAM_VINFO"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_PARAM_VINFO`."
- `anchors`:
  - `p7`: "#define MB_E_PARAM_VINFO ((uint8)0x19)"
- `aliases`: []

### MACRO-MB-E-UNINIT
- `name`: "MB_E_UNINIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_E_UNINIT`."
- `anchors`:
  - `p7`: "#define MB_E_UNINIT ((uint8)0x0AU)"
- `aliases`: []

### MACRO-MB-FORCE-UNLOCK-CODE
- `name`: "MB_FORCE_UNLOCK_CODE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_FORCE_UNLOCK_CODE`."
- `anchors`:
  - `p10`: "#define MB_FORCE_UNLOCK_CODE (XU)"
- `aliases`: []

### MACRO-MB-FREE-CHANNEL-COUNT
- `name`: "MB_FREE_CHANNEL_COUNT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_FREE_CHANNEL_COUNT`."
- `anchors`:
  - `p10`: "#define MB_FREE_CHANNEL_COUNT (XU)"
- `aliases`: []

### MACRO-MB-GET-CHANNEL-STATUS-API
- `name`: "MB_GET_CHANNEL_STATUS_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_GET_CHANNEL_STATUS_API`."
- `anchors`:
  - `p9`: "#define MB_GET_CHANNEL_STATUS_API (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-GET-VERSION-INFO-API
- `name`: "MB_GET_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_GET_VERSION_INFO_API`."
- `anchors`:
  - `p9`: "#define MB_GET_VERSION_INFO_API (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-HW-UNUSED
- `name`: "MB_HW_UNUSED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_HW_UNUSED`."
- `anchors`:
  - `p10`: "#define MB_HW_UNUSED (0xFFU)"
- `aliases`: []

### MACRO-MB-MAX-CHANNEL
- `name`: "MB_MAX_CHANNEL"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_MAX_CHANNEL`."
- `anchors`:
  - `p10`: "#define MB_MAX_CHANNEL (XU)"
- `aliases`: []

### MACRO-MB-MAX-HW-CHANNEL
- `name`: "MB_MAX_HW_CHANNEL"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_MAX_HW_CHANNEL`."
- `anchors`:
  - `p10`: "#define MB_MAX_HW_CHANNEL (XU)"
- `aliases`: []

### MACRO-MB-MAX-HW-INTR-CHANNEL
- `name`: "MB_MAX_HW_INTR_CHANNEL"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_MAX_HW_INTR_CHANNEL`."
- `anchors`:
  - `p10`: "#define MB_MAX_HW_INTR_CHANNEL (XU)"
- `aliases`: []

### MACRO-MB-MESSAGE-QUEUE-API
- `name`: "MB_MESSAGE_QUEUE_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_MESSAGE_QUEUE_API`."
- `anchors`:
  - `p9`: "#define MB_MESSAGE_QUEUE_API (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-MESSAGE-QUEUE-COUNT
- `name`: "MB_MESSAGE_QUEUE_COUNT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_MESSAGE_QUEUE_COUNT`."
- `anchors`:
  - `p10`: "#define MB_MESSAGE_QUEUE_COUNT (XU)"
- `aliases`: []

### MACRO-MB-RESET-CHANNEL-API
- `name`: "MB_RESET_CHANNEL_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_RESET_CHANNEL_API`."
- `anchors`:
  - `p9`: "#define MB_RESET_CHANNEL_API (STD_ON/STD_OFF)"
- `aliases`: []

### MACRO-MB-SPIN-LOCK-TIMEOUT
- `name`: "MB_SPIN_LOCK_TIMEOUT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_SPIN_LOCK_TIMEOUT`."
- `anchors`:
  - `p10`: "#define MB_SPIN_LOCK_TIMEOUT (XU)"
- `aliases`: []

### MACRO-MB-AR-RELEASE-MAJOR-VERSION
- `name`: "MB_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p8`: "#define MB_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-MB-AR-RELEASE-MINOR-VERSION
- `name`: "MB_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p8`: "#define MB_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-MB-AR-RELEASE-REVISION-VERSION
- `name`: "MB_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p8`: "#define MB_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-MB-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: "MB_CFG_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p9`: "#define MB_CFG_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-MB-CFG-AR-RELEASE-MINOR-VERSION
- `name`: "MB_CFG_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p9`: "#define MB_CFG_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-MB-CFG-AR-RELEASE-REVISION-VERSION
- `name`: "MB_CFG_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p9`: "#define MB_CFG_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-MB-CFG-SW-MAJOR-VERSION
- `name`: "MB_CFG_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_SW_MAJOR_VERSION`."
- `anchors`:
  - `p9`: "#define MB_CFG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-MB-CFG-SW-MINOR-VERSION
- `name`: "MB_CFG_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_SW_MINOR_VERSION`."
- `anchors`:
  - `p9`: "#define MB_CFG_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-MB-CFG-SW-PATCH-VERSION
- `name`: "MB_CFG_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_SW_PATCH_VERSION`."
- `anchors`:
  - `p9`: "#define MB_CFG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-MB-CFG-VENDOR-ID
- `name`: "MB_CFG_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_CFG_VENDOR_ID`."
- `anchors`:
  - `p9`: "#define MB_CFG_VENDOR_ID 174"
- `aliases`: []

### MACRO-MB-DEINIT-ID
- `name`: "MB_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_DEINIT_ID`."
- `anchors`:
  - `p8`: "#define MB_DEINIT_ID 0x01U"
- `aliases`: []

### MACRO-MB-DONE-CHANNEL-ID
- `name`: "MB_DONE_CHANNEL_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_DONE_CHANNEL_ID`."
- `anchors`:
  - `p8`: "#define MB_DONE_CHANNEL_ID 0x03U"
- `aliases`: []

### MACRO-MB-GETVERSIONINFO-ID
- `name`: "MB_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_GETVERSIONINFO_ID`."
- `anchors`:
  - `p8`: "#define MB_GETVERSIONINFO_ID 0x0BU"
- `aliases`: []

### MACRO-MB-GET-CHANNEL-STATE-ID
- `name`: "MB_GET_CHANNEL_STATE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_GET_CHANNEL_STATE_ID`."
- `anchors`:
  - `p8`: "#define MB_GET_CHANNEL_STATE_ID 0x0AU"
- `aliases`: []

### MACRO-MB-GET-MESSAGE-COUNT-ID
- `name`: "MB_GET_MESSAGE_COUNT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_GET_MESSAGE_COUNT_ID`."
- `anchors`:
  - `p8`: "#define MB_GET_MESSAGE_COUNT_ID 0x06U"
- `aliases`: []

### MACRO-MB-GET-MESSAGE-ID
- `name`: "MB_GET_MESSAGE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_GET_MESSAGE_ID`."
- `anchors`:
  - `p8`: "#define MB_GET_MESSAGE_ID 0x05U"
- `aliases`: []

### MACRO-MB-GET-MESSAGE-QUEUE-STATE-ID
- `name`: "MB_GET_MESSAGE_QUEUE_STATE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_GET_MESSAGE_QUEUE_STATE_ID`."
- `anchors`:
  - `p8`: "#define MB_GET_MESSAGE_QUEUE_STATE_ID 0x07U)"
- `aliases`: []

### MACRO-MB-INIT-ID
- `name`: "MB_INIT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_INIT_ID`."
- `anchors`:
  - `p8`: "#define MB_INIT_ID 0x00U"
- `aliases`: []

### MACRO-MB-MASTER-ID-TABLE
- `name`: "MB_MASTER_ID_TABLE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MB_MASTER_ID_TABLE`."
- `anchors`:
  - `p10`: "#define MB_MASTER_ID_TABLE {X,X}"
- `aliases`: []

### MACRO-MB-MODULE-ID
- `name`: "MB_MODULE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_MODULE_ID`."
- `anchors`:
  - `p9`: "#define MB_MODULE_ID 254"
- `aliases`: []

### MACRO-MB-RESET-CHANNEL-ID
- `name`: "MB_RESET_CHANNEL_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_RESET_CHANNEL_ID`."
- `anchors`:
  - `p8`: "#define MB_RESET_CHANNEL_ID 0x09U"
- `aliases`: []

### MACRO-MB-RESET-MESSAGE-QUEUE-ID
- `name`: "MB_RESET_MESSAGE_QUEUE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_RESET_MESSAGE_QUEUE_ID`."
- `anchors`:
  - `p8`: "#define MB_RESET_MESSAGE_QUEUE_ID 0x08U"
- `aliases`: []

### MACRO-MB-SEND-DATA-ID
- `name`: "MB_SEND_DATA_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_SEND_DATA_ID`."
- `anchors`:
  - `p8`: "#define MB_SEND_DATA_ID 0x02U"
- `aliases`: []

### MACRO-MB-SEND-MESSAGE-ID
- `name`: "MB_SEND_MESSAGE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_SEND_MESSAGE_ID`."
- `anchors`:
  - `p8`: "#define MB_SEND_MESSAGE_ID 0x04U"
- `aliases`: []

### MACRO-MB-SW-MAJOR-VERSION
- `name`: "MB_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_SW_MAJOR_VERSION`."
- `anchors`:
  - `p9`: "#define MB_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-MB-SW-MINOR-VERSION
- `name`: "MB_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_SW_MINOR_VERSION`."
- `anchors`:
  - `p9`: "#define MB_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-MB-SW-PATCH-VERSION
- `name`: "MB_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_SW_PATCH_VERSION`."
- `anchors`:
  - `p9`: "#define MB_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-MB-VENDOR-ID
- `name`: "MB_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_VENDOR_ID`."
- `anchors`:
  - `p9`: "#define MB_VENDOR_ID 174"
- `aliases`: []

### MACRO-MB-CHANNEL-AUTO-DONE
- `name`: "MB_CHANNEL_AUTO_DONE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_CHANNEL_AUTO_DONE`."
- `anchors`:
  - `p11`: "MB_CHANNEL_AUTO_DONE"
- `aliases`: []

### MACRO-MB-CORE-0
- `name`: "MB_CORE_0"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_CORE_0`."
- `anchors`:
  - `p11`: "MB_CORE_0"
- `aliases`: []

### MACRO-MB-CORE-1
- `name`: "MB_CORE_1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_CORE_1`."
- `anchors`:
  - `p11`: "MB_CORE_1"
- `aliases`: []

### MACRO-MB-CORE-2
- `name`: "MB_CORE_2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_CORE_2`."
- `anchors`:
  - `p11`: "MB_CORE_2"
- `aliases`: []

### MACRO-MB-CORE-HSM
- `name`: "MB_CORE_HSM"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_CORE_HSM`."
- `anchors`:
  - `p11`: "MB_CORE_HSM"
- `aliases`: []

### MACRO-MB-FREE-CH-CFG-DONE-TO-CORE0
- `name`: "MB_FREE_CH_CFG_DONE_TO_CORE0"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_FREE_CH_CFG_DONE_TO_CORE0`."
- `anchors`:
  - `p11`: "MB_FREE_CH_CFG_DONE_TO_CORE0"
- `aliases`: []

### MACRO-MB-FREE-CH-CFG-DONE-TO-CORE1
- `name`: "MB_FREE_CH_CFG_DONE_TO_CORE1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_FREE_CH_CFG_DONE_TO_CORE1`."
- `anchors`:
  - `p11`: "MB_FREE_CH_CFG_DONE_TO_CORE1"
- `aliases`: []

### MACRO-MB-FREE-CH-CFG-DONE-TO-CORE2
- `name`: "MB_FREE_CH_CFG_DONE_TO_CORE2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_FREE_CH_CFG_DONE_TO_CORE2`."
- `anchors`:
  - `p11`: "MB_FREE_CH_CFG_DONE_TO_CORE2"
- `aliases`: []

### MACRO-MB-FREE-CH-CFG-REQ-TO-CORE0
- `name`: "MB_FREE_CH_CFG_REQ_TO_CORE0"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_FREE_CH_CFG_REQ_TO_CORE0`."
- `anchors`:
  - `p11`: "MB_FREE_CH_CFG_REQ_TO_CORE0"
- `aliases`: []

### MACRO-MB-FREE-CH-CFG-REQ-TO-CORE1
- `name`: "MB_FREE_CH_CFG_REQ_TO_CORE1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_FREE_CH_CFG_REQ_TO_CORE1`."
- `anchors`:
  - `p11`: "MB_FREE_CH_CFG_REQ_TO_CORE1"
- `aliases`: []

### MACRO-MB-FREE-CH-CFG-REQ-TO-CORE2
- `name`: "MB_FREE_CH_CFG_REQ_TO_CORE2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_FREE_CH_CFG_REQ_TO_CORE2`."
- `anchors`:
  - `p11`: "MB_FREE_CH_CFG_REQ_TO_CORE2"
- `aliases`: []

### MACRO-MB-RET-STATE-EMPTY
- `name`: "MB_RET_STATE_EMPTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_RET_STATE_EMPTY`."
- `anchors`:
  - `p11`: "MB_RET_STATE_EMPTY"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p14`: "NULL_PTR)."
- `aliases`: []

### TYPE-MB-CHANNELTYPE
- `name`: "Mb_ChannelType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,13,14,15,16,17`
- `brief`: "type index entry for `Mb_ChannelType`."
- `anchors`:
  - `p12`: "typedef uint32 Mb_ChannelType"
  - `p13`: "Mb_ChannelType tChannelCount"
  - `p14`: "Mb_ChannelType * pMbSubChannelMap"
  - `p15`: "void Mb_DoneChannel ( Mb_ChannelType Channel )"
  - `p16`: "uint32 Mb_GetMessageCount ( Mb_ChannelType Channel )"
- `aliases`: []

### TYPE-MB-RETURNSTATETYPE
- `name`: "Mb_ReturnStateType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,14,15,16`
- `brief`: "type index entry for `Mb_ReturnStateType`."
- `anchors`:
  - `p10`: "Mb_ReturnStateType"
  - `p14`: "Mb_ReturnStateType Mb_SendData ( Mb_ChannelType Channel, Mb_CoreType DstCore, uint32 Data0,"
  - `p15`: "Mb_ReturnStateType Mb_SendMessage (Mb_ChannelType Channel, uint8 *Buffer, uint32 BufferLength)"
  - `p16`: "Mb_ReturnStateType Mb_ResetMessageQueue (Mb_ChannelType Channel)"
- `aliases`: []

### TYPE-MB-CORETYPE
- `name`: "Mb_CoreType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,12,13,14`
- `brief`: "type index entry for `Mb_CoreType`."
- `anchors`:
  - `p11`: "Mb_CoreType"
  - `p12`: "void(* pRequestCallback )(Mb_ChannelType Channel, Mb_CoreType MasterCore, uint32 u32Data0,"
  - `p13`: "Mb_CoreType SenderCore"
  - `p14`: "Mb_ReturnStateType Mb_SendData ( Mb_ChannelType Channel, Mb_CoreType DstCore, uint32 Data0,"
- `aliases`: []

### TYPE-MB-CHANNELSTATETYPE
- `name`: "Mb_ChannelStateType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,17,19`
- `brief`: "type index entry for `Mb_ChannelStateType`."
- `anchors`:
  - `p12`: "Mb_ChannelStateType"
  - `p17`: "Mb_ChannelStateType Mb_GetChannelState (Mb_ChannelType Channel)"
  - `p19`: "Mb_ChannelStateType Mb_HL_GetChannelState(uint32 u32HwChannel)"
- `aliases`: []

### TYPE-MB-CONFIGTYPE
- `name`: "Mb_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13,14`
- `brief`: "type index entry for `Mb_ConfigType`."
- `anchors`:
  - `p3`: "Mb_ConfigType .............................................................................................................................…"
  - `p13`: "Mb_ConfigType"
  - `p14`: "void Mb_Init ( const Mb_ConfigType * ConfigPtr )"
- `aliases`: []

### TYPE-MB-FREECHANNELCONFIGTYPE
- `name`: "Mb_FreeChannelConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12,14`
- `brief`: "type index entry for `Mb_FreeChannelConfigType`."
- `anchors`:
  - `p3`: "Mb_FreeChannelConfigType ..................................................................................................................…"
  - `p12`: "Mb_FreeChannelConfigType"
  - `p14`: "Mb_FreeChannelConfigType * pFreeChannel"
- `aliases`: []

### TYPE-MB-MESSAGEQUEUETYPE
- `name`: "Mb_MessageQueueType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12,14`
- `brief`: "type index entry for `Mb_MessageQueueType`."
- `anchors`:
  - `p3`: "Mb_MessageQueueType........................................................................................................................…"
  - `p12`: "Mb_MessageQueueType"
  - `p14`: "Mb_MessageQueueType * pMessageQueue"
- `aliases`: []

### TYPE-MB-RINGBLOCKTYPE
- `name`: "Mb_RingBlockType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12,13`
- `brief`: "type index entry for `Mb_RingBlockType`."
- `anchors`:
  - `p3`: "Mb_RingBlockType ..........................................................................................................................…"
  - `p12`: "Mb_RingBlockType"
  - `p13`: "Mb_RingBlockType RingBlock"
- `aliases`: []

### TYPE-MB-CHANNELCONFIGTYPE
- `name`: "Mb_ChannelConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13`
- `brief`: "type index entry for `Mb_ChannelConfigType`."
- `anchors`:
  - `p3`: "Mb_ChannelConfigType ......................................................................................................................…"
  - `p13`: "Mb_ChannelConfigType"
- `aliases`: []

### TYPE-MB-MESSAGEQUEUESTATETYPE
- `name`: "Mb_MessageQueueStateType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,16`
- `brief`: "type index entry for `Mb_MessageQueueStateType`."
- `anchors`:
  - `p11`: "Mb_MessageQueueStateType"
  - `p16`: "Mb_MessageQueueStateType Mb_GetMessageQueueState (Mb_ChannelType Channel)"
- `aliases`: []

### TYPE-MB-CHANNELMODETYPE
- `name`: "Mb_ChannelModeType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,13`
- `brief`: "type index entry for `Mb_ChannelModeType`."
- `anchors`:
  - `p11`: "Mb_ChannelModeType"
  - `p13`: "Mb_ChannelModeType eChannelMode"
- `aliases`: []

### TYPE-MB-FREECHANNELCONFIGFLAGTYPE
- `name`: "Mb_FreeChannelConfigFlagType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "type index entry for `Mb_FreeChannelConfigFlagType`."
- `anchors`:
  - `p11`: "Mb_FreeChannelConfigFlagType"
  - `p12`: "Channel configuration parameters. Relevant Mb_FreeChannelConfigFlagType."
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p18`: "Std_ReturnType Mb_HL_SendData(uint32 u32HwChannel, uint32 u32DstCore, uint32 u32Data0, uint32"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p17`: "void Mb_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `aliases`: []

### FILE-CDD-MB-H
- `name`: "CDD_Mb.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,7,10,14`
- `brief`: "file index entry for `CDD_Mb.h`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb.h ........................................................................................................................…"
  - `p7`: "Macros in CDD_Mb.h"
  - `p10`: "Enumerations in CDD_Mb.h"
  - `p14`: "Functions in CDD_Mb.h"
- `aliases`: []

### FILE-CDD-MB-HW-H
- `name`: "CDD_Mb_Hw.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10,18`
- `brief`: "file index entry for `CDD_Mb_Hw.h`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb_Hw.h .....................................................................................................................…"
  - `p10`: "Macros in CDD_Mb_Hw.h"
  - `p18`: "Functions in CDD_Mb_Hw.h."
- `aliases`: []

### FILE-CDD-MB-TYPES-H
- `name`: "CDD_Mb_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,11,12`
- `brief`: "file index entry for `CDD_Mb_Types.h`."
- `anchors`:
  - `p3`: "Enumerations in CDD_Mb_Types.h .......................................................................................................... 11"
  - `p11`: "Enumerations in CDD_Mb_Types.h"
  - `p12`: "Typedefs in CDD_Mb_Types.h"
- `aliases`: []

### FILE-CDD-MB-CFG-H
- `name`: "CDD_Mb_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "file index entry for `CDD_Mb_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb_Cfg.h ....................................................................................................................…"
  - `p9`: "Macros in CDD_Mb_Cfg.h"
- `aliases`: []

### FILE-CDD-MB-VERSION-H
- `name`: "CDD_Mb_Version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,8`
- `brief`: "file index entry for `CDD_Mb_Version.h`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb_Version.h ................................................................................................................…"
  - `p8`: "Macros in CDD_Mb_Version.h"
- `aliases`: []

### TERM-MAILBOX
- `name`: "Mailbox"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `Mailbox`."
- `anchors`:
  - `p1`: "Mailbox"
  - `p2`: "Mailbox"
  - `p3`: "Mailbox"
  - `p4`: "Mailbox"
  - `p5`: "FC7xxx Mailbox User Manual"
- `aliases`: []

### TERM-MAILBOX-COMPLEX-DEVICE-DRIVER
- `name`: "Mailbox Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `Mailbox Complex Device Driver`."
- `anchors`:
  - `p1`: "Mailbox Complex Device Driver"
  - `p2`: "Mailbox Complex Device Driver"
  - `p3`: "Mailbox Complex Device Driver"
  - `p4`: "Mailbox Complex Device Driver"
  - `p5`: "Mailbox Complex Device Driver"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,26,29,33,34`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p26`: "AUTOSAR"
  - `p29`: "AUTOSAR"
  - `p33`: "AUTOSAR"
  - `p34`: "AUTOSAR"
- `aliases`: []

### TERM-CDD-MB-HW
- `name`: "CDD_Mb_Hw"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10,18`
- `brief`: "term index entry for `CDD_Mb_Hw`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb_Hw.h .....................................................................................................................…"
  - `p10`: "Macros in CDD_Mb_Hw.h"
  - `p18`: "Functions in CDD_Mb_Hw.h."
- `aliases`: []

### TERM-CDD-MB-TYPES
- `name`: "CDD_Mb_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11,12`
- `brief`: "term index entry for `CDD_Mb_Types`."
- `anchors`:
  - `p3`: "Enumerations in CDD_Mb_Types.h .......................................................................................................... 11"
  - `p11`: "Enumerations in CDD_Mb_Types.h"
  - `p12`: "Typedefs in CDD_Mb_Types.h"
- `aliases`: []

### TERM-MBDEINITAPI
- `name`: "MbDeInitApi"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,31`
- `brief`: "term index entry for `MbDeInitApi`."
- `anchors`:
  - `p9`: "MbDeInitApi switch."
  - `p31`: "MbDeInitApi"
- `aliases`: []

### TERM-MBGETVERSIONINFOAPI
- `name`: "MbGetVersionInfoApi"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,32`
- `brief`: "term index entry for `MbGetVersionInfoApi`."
- `anchors`:
  - `p9`: "MbGetVersionInfoApi switch."
  - `p32`: "MbGetVersionInfoApi"
- `aliases`: []

### TERM-MBMESSAGEQUEUEAPI
- `name`: "MbMessageQueueApi"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,31`
- `brief`: "term index entry for `MbMessageQueueApi`."
- `anchors`:
  - `p9`: "MbMessageQueueApi switch."
  - `p31`: "MbMessageQueueApi"
- `aliases`: []

### TERM-MBMULTICORESUPPORT
- `name`: "MbMulticoreSupport"
- `type`: `term`
- `primary_page`: `30`
- `physical_pages`: `30,36`
- `brief`: "term index entry for `MbMulticoreSupport`."
- `anchors`:
  - `p30`: "MbMulticoreSupport"
  - `p36`: "When MbMulticoreSupport is not enabled, the Mailbox channel can only be set to Free Mode."
- `aliases`: []

### TERM-MBOPTIONALAPIS
- `name`: "MbOptionalApis"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,31`
- `brief`: "term index entry for `MbOptionalApis`."
- `anchors`:
  - `p4`: "MbOptionalApis ............................................................................................................................…"
  - `p31`: "MbOptionalApis"
- `aliases`: []

### TERM-CDD-MB-CFG
- `name`: "CDD_Mb_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "term index entry for `CDD_Mb_Cfg`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb_Cfg.h ....................................................................................................................…"
  - `p9`: "Macros in CDD_Mb_Cfg.h"
- `aliases`: []

### TERM-CDD-MB-VERSION
- `name`: "CDD_Mb_Version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,8`
- `brief`: "term index entry for `CDD_Mb_Version`."
- `anchors`:
  - `p3`: "Macros in CDD_Mb_Version.h ................................................................................................................…"
  - `p8`: "Macros in CDD_Mb_Version.h"
- `aliases`: []

### TERM-MBMSGBLOCKNUM
- `name`: "MbMsgBlockNum"
- `type`: `term`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "term index entry for `MbMsgBlockNum`."
- `anchors`:
  - `p29`: "MbMsgBlockNum"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p30`: "Switches the Development Error Detection and Notification on or off."
- `aliases`: []

### TERM-MBDEVERRORDETECT
- `name`: "MbDevErrorDetect"
- `type`: `term`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "term index entry for `MbDevErrorDetect`."
- `anchors`:
  - `p30`: "MbDevErrorDetect"
- `aliases`: []

### TERM-MBDISABLERUNTIMEERRORDETECT
- `name`: "MbDisableRuntimeErrorDetect"
- `type`: `term`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "term index entry for `MbDisableRuntimeErrorDetect`."
- `anchors`:
  - `p30`: "3.2.3.1 MbDisableRuntimeErrorDetect"
- `aliases`: []

### TERM-MBGETSPINLOCKTIMEOUT
- `name`: "MbGetSpinLockTimeout"
- `type`: `term`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "term index entry for `MbGetSpinLockTimeout`."
- `anchors`:
  - `p24`: "MbGetSpinLockTimeout"
- `aliases`: []

### TERM-MBMESSAGEQUEUE
- `name`: "MbMessageQueue"
- `type`: `term`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "term index entry for `MbMessageQueue`."
- `anchors`:
  - `p28`: "MbMessageQueue"
- `aliases`: []

### TERM-MBMSGRECEIVER
- `name`: "MbMsgReceiver"
- `type`: `term`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "term index entry for `MbMsgReceiver`."
- `anchors`:
  - `p29`: "MbMsgReceiver"
- `aliases`: []

### TERM-MBMSGSENDER
- `name`: "MbMsgSender"
- `type`: `term`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "term index entry for `MbMsgSender`."
- `anchors`:
  - `p28`: "MbMsgSender"
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

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p30`: "Det"
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

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
- `aliases`: []

### TERM-MB-RESETM
- `name`: "Mb_ResetM"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "term index entry for `Mb_ResetM`."
- `anchors`:
  - `p31`: "Mb_SendMessage(),Mb_GetMessage(),Mb_GetMessageCount(),Mb_GetMessageQueueStatus(),Mb_ResetM"
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

### ALIAS-MAILBOX
- `canonical`: "Mailbox"
- `aliases`: ["Mailbox Complex Device Driver", "邮箱 / 多核消息通信驱动", "Mailbox module", "Mailbox driver", "Mailbox User Manual", "Mailbox Integration Manual", "Mb", "MB", "CDD_Mb", "mailbox driver", "multicore mailbox", "邮箱驱动"]
- `related_ids`: ["TERM-MAILBOX"]

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

### ALIAS-FREE-MODE
- `canonical`: "Free Mode"
- `aliases`: ["free channel mode", "Mb_SendData", "Mb_DoneChannel", "zero-copy"]
- `related_ids`: []

### ALIAS-MESSAGE-QUEUE
- `canonical`: "Message Queue"
- `aliases`: ["Mb_SendMessage", "Mb_GetMessage", "message pool", "message queue mode"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between Mb_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `Mb_User_Manual.pdf`
- `source_pdf_sha256`: `7ab217874fb8fc9a77c97fdd7b0fb305623101afe0a56ad7e5822d7d5225d826`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `194`
- `technical_missing_terms_added`: `3`
- `pages_with_added_terms`: `37`
- `supplemented_missing_token_count`: `194`
- `supplemented_missing_technical_token_count`: `3`
- `supplemented_physical_pages_count`: `37`
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
  - "Autosar"
  - "Confidential"
  - "Each"
  - "Flagchip"
  - "Proprietary"
  - "activities"
  - "allowed"
  - "between"
  - "communicate"
  - "complex"
  - "configures"
  - "custom"
  - "device"
  - "functionality"
  - "get"
  - "implemented"
  - "implements"
  - "modes"
  - "notifies"
  - "process"
  - "provides"
  - "received"
  - "receiver"
  - "send"
  - "specified"
  - "specify"
  - "synchronize"
  - "their"
  - "through"
  - "transfer"
  - "trigger"
  - "two"
  - "usage"
  - "using"
  - "where"
  - "while"
  - "words"
  - "writes"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Lock"
  - "Proprietary"
  - "Spin"
  - "already"
  - "been"
  - "calling"
  - "check"
  - "functionality"
  - "initialized"
  - "locked"
  - "mapping"
  - "partition"
  - "properly"
  - "without"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Dev"
  - "Flagchip"
  - "Proprietary"
  - "detect"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Allow"
  - "Command"
  - "Confidential"
  - "ECU"
  - "Flagchip"
  - "Master"
  - "Number"
  - "Proprietary"
  - "Values"
  - "all"
  - "disabling"
  - "each"
  - "enabling"
  - "force"
  - "interrupts"
  - "max"
  - "required"
  - "unlock"
  - "unused"
  - "wakeup"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Core0"
  - "Core1"
  - "Core2"
  - "Cores"
  - "Definition"
  - "Flagchip"
  - "Numeric"
  - "Proprietary"
  - "Values"
  - "bit"
  - "corresponding"
  - "destination"
  - "each"
  - "operates"
  - "receiver"
  - "represents"
  - "send"
  - "state"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "2.5"
  - "2.5.1"
  - "Callback"
  - "Confidential"
  - "Definition"
  - "Flagchip"
  - "Numeric"
  - "Proprietary"
  - "Values"
  - "each"
  - "memory"
  - "pBuffer"
  - "pDone"
  - "pointer"
  - "ring"
  - "size"
  - "special"
  - "state"
  - "u32BlockNum"
  - "u32BlockSize"
  - "u32ConfigFlag"
  - "u32Data1"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Callback"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "ReceiverCore"
  - "common"
  - "maximum"
  - "pChannelConfig"
  - "pReceivedCallback"
  - "partitions"
  - "receiver"
  - "ring"
  - "that"
  - "u16ChannelPartition"
  - "u16MbHwChannel"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "Pointer"
  - "Proprietary"
  - "Sending"
  - "Target"
  - "initialize"
  - "pMbHwChannelMap"
  - "requires"
  - "respective"
  - "through"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Pointer"
  - "Proprietary"
  - "Send"
  - "buffer"
  - "byte"
  - "length"
  - "send"
  - "specified"
  - "via"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Pointer"
  - "Proprietary"
  - "Receive"
  - "all"
  - "buffer"
  - "byte"
  - "get"
  - "length"
  - "state"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Force"
  - "Get"
  - "Pointer"
  - "Proprietary"
  - "get"
  - "information"
  - "reset"
  - "state"
  - "store"
  - "where"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Pointer"
  - "Proprietary"
  - "Referenced"
  - "Send"
  - "Trigger"
  - "Write"
  - "initializes"
  - "register"
  - "target"
  - "u32Data1"
  - "via"
  - "written"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Force"
  - "Get"
  - "Proprietary"
  - "Referenced"
  - "allow"
  - "state"
  - "trigger"
  - "unlock"

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

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Range"
  - "VariantPreCompile"
  - "individual"
  - "sub"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "ENUMERATION"
  - "Flagchip"
  - "List"
  - "MIN"
  - "Proprietary"
  - "Range"
  - "assigned"
  - "derived"
  - "symbolic"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Core0"
  - "EcucDefs"
  - "EcucPartition"
  - "EcucPartitionCollectio"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Ref"
  - "auto"
  - "case"
  - "mapped"
  - "partitions"
  - "referenced"
  - "subset"
  - "where"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Core0"
  - "Core1"
  - "Core2"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Core2"
  - "FUNCTION"
  - "Flagchip"
  - "Optional"
  - "Proprietary"
  - "case"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "EcucDefs"
  - "EcucPartition"
  - "EcucPartitionCollection"
  - "Flagchip"
  - "Proprietary"
  - "Range"
  - "Ref"
  - "each"
  - "size"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "Optional"
  - "Proprietary"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "all"
  - "configuring"
  - "optional"
  - "services"
  - "switches"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "about"
  - "aggregated"
  - "all"
  - "information"
  - "modules"
  - "published"
  - "versions"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Major"
  - "Minor"
  - "Proprietary"
  - "Range"
  - "appropriate"
  - "numbering"
  - "specification"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Minor"
  - "Module"
  - "Patch"
  - "Proprietary"
  - "Range"
  - "Vendor"
  - "according"
  - "dedicated"
  - "level"
  - "list"
  - "numbering"

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
  - "Each"
  - "Flagchip"
  - "Proprietary"
  - "auto"
  - "different"
  - "partition"
  - "partitions"
  - "referred"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "General"
  - "Proprietary"
  - "Request"
  - "Set"
  - "able"
  - "allowed"
  - "dones"
  - "each"
  - "functions"
  - "iii"
  - "notification"
  - "requests"
  - "send"
  - "size"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Choose"
  - "Confidential"
  - "Flagchip"
  - "Generate"
  - "Proprietary"
  - "files"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38`
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
- `physical_pages`: `2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,22,24,25,26,28,30,36`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0022-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0028-001", "TBL-0030-001", "TBL-0036-001"]
- `message`: "24 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,12,22`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0012-001", "FIG-0022-001"]
- `message`: "4 generated visual anchors have no formal source figure number."
- `recommended_action`: "Use source PDF page to inspect vector graphics or screenshots."

### WARN-0006
- `severity`: `low`
- `category`: `revision_history`
- `physical_pages`: `2`
- `affected_ids`: []
- `message`: "Revision history dates are not strictly monotonic in displayed order; this appears to be a source-document issue."
- `recommended_action`: "Preserve source revision rows and verify with document owner if version chronology matters."

### WARN-0007
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `38`
- `indexed_physical_pages_count`: `38`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `109`
- `table_index_count`: `24`
- `figure_index_count`: `69`
- `symbol_index_count`: `174`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `7ab217874fb8fc9a77c97fdd7b0fb305623101afe0a56ad7e5822d7d5225d826`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `194`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `7`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
---
manifest_schema_version: "1.1"
source_pdf: "UART_User_Manual.pdf"
source_pdf_sha256: "e8feb9374ab9c1473c110a29c8170ea1e3a5dd56b9e9029d029b765f7be20df4"
source_pdf_size_bytes: 1377871
pdf_page_count: 47
generated_at: "2026-06-19T14:31:29Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched-spi-ssi-trgsel-uart"
source_document_id: null
source_document_revision: "Rev.A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: UART_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `UART_User_Manual.pdf`
- `source_pdf_sha256`: `e8feb9374ab9c1473c110a29c8170ea1e3a5dd56b9e9029d029b765f7be20df4`
- `source_pdf_size_bytes`: `1377871`
- `pdf_page_count`: `47`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.A0`
- `visible_cover_title`: `FC7xxx UART User Manual`
- `visible_cover_revision`: `Rev.A0`
- `revision_history_latest_row`: `A1 / 2025/12/12 / Change Uart_AsyncReceive API`
- `generated_at`: `2026-06-19T14:31:29Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched-spi-ssi-trgsel-uart`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `42`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL UART module - User Manual"
- `module_scope`: "UART driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 UART Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["UART", "Universal Asynchronous Receiver/Transmitter Complex Device Driver", "Complex Device Driver / vendor-specific UART driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Uart", "CDD_Uart", "LLD_Uart", "FCUART", "Rx"]
- `summary`: "This 47-page user manual indexes UART content across source physical pages 1-47, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["UART", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx UART User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["UART", "FC7xxx", "FC7300F8MDQ", "Uart_AsyncReceive", "Date", "Add", "Change"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["UART", "CDD_Uart", "LLD_Uart", "Uart_Types", "FC7xxx", "Uart_Version", "Uart_GeneralTypes", "Uart_StateStructureType"]
- `anchor`: "Table of Contents"

### SEC-0004-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["UART", "FC7xxx", "Usage", "Channel", "Demo"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "UART Introduction"
- `path`: "Chapter 1 UART Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["UART", "Uart", "FCUART", "bit", "FC7xxx", "FIFO", "AUTOSAR", "Configurable"]
- `anchor`: "Chapter 1 UART Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 UART Introduction / 1.1 Requirements"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["UART", "Uart", "FCUART", "FIFO", "FC7xxx", "AUTOSAR", "DMA", "bit"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Design Summary"
- `path`: "Chapter 1 UART Introduction / 1.2 Design Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["UART", "Uart", "FCUART", "FIFO", "FC7xxx", "AUTOSAR", "DMA", "bit"]
- `anchor`: "1.2"

### SEC-001-003
- `source_number`: `1.3`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 UART Introduction / 1.3 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["UART", "Uart", "FCUART", "bit", "FC7xxx", "FIFO", "AUTOSAR", "Configurable"]
- `anchor`: "1.3"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `7`
- `physical_page_end`: `35`
- `printed_page_start`: `7`
- `printed_page_end`: `35`
- `keywords`: ["UART", "pUart", "void", "FCUART_Type", "LOCAL_INLINE", "const", "Returns", "HwUnit"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["UART", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["UART", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["UART", "define", "FC7xxx", "Invalid", "Uart_Types", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "channel"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in Uart_Types.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["UART", "define", "FC7xxx", "Invalid", "Uart_Types", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "channel"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in Uart_Version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Uart_Version.h"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType", "Enumeration", "characters", "Uart_StopBitCountType"]
- `anchor`: "2.3.2"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `10`
- `physical_page_end`: `12`
- `printed_page_start`: `10`
- `printed_page_end`: `12`
- `keywords`: ["UART", "Uart", "baud", "rate", "define", "Enumeration", "Values", "operation"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enums in Uart_GeneralTypes.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h"
- `physical_page_start`: `10`
- `physical_page_end`: `11`
- `printed_page_start`: `10`
- `printed_page_end`: `11`
- `keywords`: ["UART", "Uart", "baud", "rate", "define", "Enumeration", "Values", "error"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Uart_BitCountPerCharType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.1 Uart_BitCountPerCharType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType", "Enumeration", "characters", "Uart_StopBitCountType"]
- `anchor`: "2.4.1.1"

### SEC-002-004-001-002
- `source_number`: `2.4.1.2`
- `title`: "Uart_StopBitCountType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.2 Uart_StopBitCountType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType", "Enumeration", "characters", "Uart_StopBitCountType"]
- `anchor`: "2.4.1.2"

### SEC-002-004-001-003
- `source_number`: `2.4.1.3`
- `title`: "Uart_ParityModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.3 Uart_ParityModeType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType", "Enumeration", "characters", "Uart_StopBitCountType"]
- `anchor`: "2.4.1.3"

### SEC-002-004-001-004
- `source_number`: `2.4.1.4`
- `title`: "Uart_TransferType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.4 Uart_TransferType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType", "Enumeration", "characters", "Uart_StopBitCountType"]
- `anchor`: "2.4.1.4"

### SEC-002-004-001-005
- `source_number`: `2.4.1.5`
- `title`: "Uart_StatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.5 Uart_StatusType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["UART", "Uart", "baud", "rate", "error", "transfer", "DMA", "status"]
- `anchor`: "2.4.1.5"

### SEC-002-004-001-006
- `source_number`: `2.4.1.6`
- `title`: "Uart_EventType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.6 Uart_EventType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["UART", "Uart", "baud", "rate", "error", "transfer", "DMA", "status"]
- `anchor`: "2.4.1.6"

### SEC-002-004-001-007
- `source_number`: `2.4.1.7`
- `title`: "Uart_BaudrateType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.7 Uart_BaudrateType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["UART", "Uart", "baud", "rate", "error", "transfer", "DMA", "status"]
- `anchor`: "2.4.1.7"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enums in Uart_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Uart_Types.h"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["UART", "Uart", "Uart_Types", "Uart_DirectionType", "FC7xxx", "UART_BAUDRATE_460800", "baud", "rate"]
- `anchor`: "2.4.2"

### SEC-002-004-002-001
- `source_number`: `2.4.2.1`
- `title`: "Uart_DirectionType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Uart_Types.h / 2.4.2.1 Uart_DirectionType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["UART", "Uart", "Uart_Types", "Uart_DirectionType", "FC7xxx", "UART_BAUDRATE_460800", "baud", "rate"]
- `anchor`: "2.4.2.1"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["UART", "Uart", "DMA", "volatile", "Uart_StateStructureType", "Structure", "Uart_UserConfigType", "bits"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Uart_StateStructureType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Uart_StateStructureType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["UART", "volatile", "Uart_StateStructureType", "BaudRate", "Uart_StatusType", "Uart_UserConfigType", "FC7xxx", "TxBuff"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Uart_UserConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Uart_UserConfigType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["UART", "volatile", "Uart_StateStructureType", "BaudRate", "Uart_StatusType", "Uart_UserConfigType", "FC7xxx", "TxBuff"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Uart_HwConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Uart_HwConfigType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["UART", "Uart", "DMA", "bits", "channel", "Dma_InstanceType", "Uart_HwConfigType", "Uart_ChannelConfigType"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Uart_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Uart_ChannelConfigType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["UART", "Uart", "DMA", "bits", "channel", "Dma_InstanceType", "Uart_HwConfigType", "Uart_ChannelConfigType"]
- `anchor`: "2.6.4"

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: "Uart_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Uart_ConfigType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["UART", "CDD_Uart", "Uart", "Uart_ConfigType", "channel", "const", "Uart_Init", "FC7xxx"]
- `anchor`: "2.6.5"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `15`
- `physical_page_end`: `20`
- `printed_page_start`: `15`
- `printed_page_end`: `20`
- `keywords`: ["UART", "Channel", "Uart", "CDD_Uart", "Std_ReturnType", "DataBuffer", "DataSize", "channel"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in CDD_Uart.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h"
- `physical_page_start`: `15`
- `physical_page_end`: `20`
- `printed_page_start`: `15`
- `printed_page_end`: `20`
- `keywords`: ["UART", "Channel", "Uart", "CDD_Uart", "Std_ReturnType", "DataBuffer", "DataSize", "channel"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Uart_Init (const Uart_ConfigType* Config);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["UART", "CDD_Uart", "Uart", "Uart_ConfigType", "channel", "const", "Uart_Init", "FC7xxx"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Uart_Deinit(void);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.2 void Uart_Deinit(void);"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["UART", "void", "Uart_Deinit", "FC7xxx", "Diagram", "Config", "Init", "Returns"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["UART", "Std_ReturnType", "Baudrate", "Channel", "Uart_SetBaudrate", "Uart_BaudrateType", "Uart_GetBaudrate", "FC7xxx"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "Std_ReturnType Uart_GetBaudrate(uint8 Channel, uint32 *Baudrate);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.4 Std_ReturnType Uart_GetBaudrate(uint8 Channel, uint32 *Baudrate);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["UART", "Std_ReturnType", "Baudrate", "Channel", "Uart_SetBaudrate", "Uart_BaudrateType", "Uart_GetBaudrate", "FC7xxx"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["UART", "DataBuffer", "DataSize", "Channel", "TransType", "Std_ReturnType", "Uart_SetTransBuffer", "Uart_DirectionType"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "Std_ReturnType Uart_SyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32 Timeout);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.6 Std_ReturnType Uart_SyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32 Timeout);"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["UART", "DataBuffer", "DataSize", "Channel", "TransType", "Std_ReturnType", "Uart_SetTransBuffer", "Uart_DirectionType"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["UART", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "Uart_SyncReceive", "Uart_AbortTransfer", "Uart_DirectionType"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "Std_ReturnType Uart_AbortTransfer(uint8 Channel, Uart_DirectionType TransType);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.8 Std_ReturnType Uart_AbortTransfer(uint8 Channel, Uart_DirectionType TransType);"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["UART", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "Uart_SyncReceive", "Uart_AbortTransfer", "Uart_DirectionType"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "TransType", "Uart_AsyncSend"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "Std_ReturnType Uart_AsyncReceive (uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.10 Std_ReturnType Uart_AsyncReceive (uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "TransType", "Uart_AsyncSend"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "Uart_StatusType Uart_GetStatus(uint Channel, uint32 *RemainingBytesPointer, Uart_DirectionType"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.11 Uart_StatusType Uart_GetStatus(uint Channel, uint32 *RemainingBytesPointer, Uart_DirectionType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "TransType", "Uart_AsyncSend"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType", "const", "Returns", "VersionInfo"]
- `anchor`: "2.7.1.12"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `21`
- `physical_page_end`: `26`
- `printed_page_start`: `21`
- `printed_page_end`: `26`
- `keywords`: ["HwUnit", "const", "UART", "Uart_StatusType", "number", "LLD_Uart", "FCUART", "Returns"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in LLD_Uart.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h"
- `physical_page_start`: `21`
- `physical_page_end`: `26`
- `printed_page_start`: `21`
- `printed_page_end`: `26`
- `keywords`: ["HwUnit", "const", "UART", "Uart_StatusType", "number", "LLD_Uart", "FCUART", "Returns"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "void Uart_LLD_Init (const uint8 HwUnit, const Uart_UserConfigType *UserConfig)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.1 void Uart_LLD_Init (const uint8 HwUnit, const Uart_UserConfigType *UserConfig)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType", "const", "Returns", "VersionInfo"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "Uart_StatusType Uart_LLD_Deinit (const uint8 HwUnit)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.2 Uart_StatusType Uart_LLD_Deinit (const uint8 HwUnit)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType", "const", "Returns", "VersionInfo"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.3 Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["UART", "const", "HwUnit", "Uart_StatusType", "TxDataBuff", "TxDataSize", "data", "sent"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "Uart_StatusType Uart_LLD_AsyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.4 Uart_StatusType Uart_LLD_AsyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["UART", "const", "HwUnit", "Uart_StatusType", "TxDataBuff", "TxDataSize", "data", "sent"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "Uart_StatusType Uart_LLD_GetTransmitStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.5 Uart_StatusType Uart_LLD_GetTransmitStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["UART", "const", "HwUnit", "Uart_StatusType", "TxDataBuff", "TxDataSize", "data", "sent"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "RxDataBuff", "RxDataSize", "data", "Uart_LLD_AbortSendingData"]
- `anchor`: "2.8.1.6"

### SEC-002-008-001-007
- `source_number`: `2.8.1.7`
- `title`: "Uart_StatusType Uart_LLD_SyncReceive (const uint8 HwUnit, uint8 *RxDataBuff, const uint32 RxDataSize,"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.7 Uart_StatusType Uart_LLD_SyncReceive (const uint8 HwUnit, uint8 *RxDataBuff, const uint32 RxDataSize,"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "RxDataBuff", "RxDataSize", "data", "Uart_LLD_AbortSendingData"]
- `anchor`: "2.8.1.7"

### SEC-002-008-001-008
- `source_number`: `2.8.1.8`
- `title`: "Uart_StatusType Uart_LLD_AsyncReceive(const uint8 HwUnit, uint8 * RxDataBuff, const uint32"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.8 Uart_StatusType Uart_LLD_AsyncReceive(const uint8 HwUnit, uint8 * RxDataBuff, const uint32"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "RxDataBuff", "RxDataSize", "data", "Uart_LLD_AbortSendingData"]
- `anchor`: "2.8.1.8"

### SEC-002-008-001-009
- `source_number`: `2.8.1.9`
- `title`: "Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining", "DesiredBaudrate", "ClockFrequency", "Referenced"]
- `anchor`: "2.8.1.9"

### SEC-002-008-001-010
- `source_number`: `2.8.1.10`
- `title`: "Uart_StatusType Uart_LLD_AbortReceivingData (const uint8 HwUnit );"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.10 Uart_StatusType Uart_LLD_AbortReceivingData (const uint8 HwUnit );"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining", "DesiredBaudrate", "ClockFrequency", "Referenced"]
- `anchor`: "2.8.1.10"

### SEC-002-008-001-011
- `source_number`: `2.8.1.11`
- `title`: "Uart_StatusType Uart_LLD_SetBaudRate (const uint8 HwUnit, const Uart_BaudrateType"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.11 Uart_StatusType Uart_LLD_SetBaudRate (const uint8 HwUnit, const Uart_BaudrateType"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining", "DesiredBaudrate", "ClockFrequency", "Referenced"]
- `anchor`: "2.8.1.11"

### SEC-002-008-001-012
- `source_number`: `2.8.1.12`
- `title`: "void Uart_LLD_GetBaudRate (const uint8 HwUnit, uint32 * ConfiguredBaudRate);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.12 void Uart_LLD_GetBaudRate (const uint8 HwUnit, uint32 * ConfiguredBaudRate);"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining", "DesiredBaudrate", "ClockFrequency", "Referenced"]
- `anchor`: "2.8.1.12"

### SEC-002-008-001-013
- `source_number`: `2.8.1.13`
- `title`: "void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.13 void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["UART", "FCUART", "HwUnit", "const", "number", "void", "TxDataBuff", "TxDataSize"]
- `anchor`: "2.8.1.13"

### SEC-002-008-001-014
- `source_number`: `2.8.1.14`
- `title`: "void Uart_LLD_SetRxBuffer(const uint8 HwUnit, uint8 * RxDataBuff, const uint32 RxDataSize);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.14 void Uart_LLD_SetRxBuffer(const uint8 HwUnit, uint8 * RxDataBuff, const uint32 RxDataSize);"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["UART", "FCUART", "HwUnit", "const", "number", "void", "TxDataBuff", "TxDataSize"]
- `anchor`: "2.8.1.14"

### SEC-002-008-001-015
- `source_number`: `2.8.1.15`
- `title`: "void Uart_LLD_IrqHandler (const uint8 HwUnit);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.15 void Uart_LLD_IrqHandler (const uint8 HwUnit);"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["UART", "FCUART", "HwUnit", "const", "number", "void", "TxDataBuff", "TxDataSize"]
- `anchor`: "2.8.1.15"

### SEC-002-008-001-016
- `source_number`: `2.8.1.16`
- `title`: "void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma", "FC7xxx", "Referenced", "DMA"]
- `anchor`: "2.8.1.16"

### SEC-002-008-001-017
- `source_number`: `2.8.1.17`
- `title`: "void Uart_LLD_CompleteReceiveUsingDma(uint8 HwUnit);"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.17 void Uart_LLD_CompleteReceiveUsingDma(uint8 HwUnit);"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma", "FC7xxx", "Referenced", "DMA"]
- `anchor`: "2.8.1.17"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "Peripheral Functions"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions"
- `physical_page_start`: `27`
- `physical_page_end`: `34`
- `printed_page_start`: `27`
- `printed_page_end`: `34`
- `keywords`: ["pUart", "FCUART_Type", "LOCAL_INLINE", "UART", "void", "instance", "Returns", "Referenced"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Functions in Uart_RegOps.h"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h"
- `physical_page_start`: `27`
- `physical_page_end`: `34`
- `printed_page_start`: `27`
- `printed_page_end`: `34`
- `keywords`: ["pUart", "FCUART_Type", "LOCAL_INLINE", "UART", "void", "instance", "Returns", "Referenced"]
- `anchor`: "2.9.1"

### SEC-002-009-001-001
- `source_number`: `2.9.1.1`
- `title`: "LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.1 LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType", "void", "LOCAL_INLINE", "LOCAL_INUARTE"]
- `anchor`: "2.9.1.1"

### SEC-002-009-001-002
- `source_number`: `2.9.1.2`
- `title`: "LOCAL_INUARTE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.2 LOCAL_INUARTE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType", "void", "LOCAL_INLINE", "LOCAL_INUARTE"]
- `anchor`: "2.9.1.2"

### SEC-002-009-001-003
- `source_number`: `2.9.1.3`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.3 LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType", "void", "LOCAL_INLINE", "LOCAL_INUARTE"]
- `anchor`: "2.9.1.3"

### SEC-002-009-001-004
- `source_number`: `2.9.1.4`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.4 LOCAL_INLINE void FCUART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType", "void", "LOCAL_INLINE", "LOCAL_INUARTE"]
- `anchor`: "2.9.1.4"

### SEC-002-009-001-005
- `source_number`: `2.9.1.5`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.5 LOCAL_INLINE void FCUART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType", "void", "LOCAL_INLINE", "LOCAL_INUARTE"]
- `anchor`: "2.9.1.5"

### SEC-002-009-001-006
- `source_number`: `2.9.1.6`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.6 LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.6"

### SEC-002-009-001-007
- `source_number`: `2.9.1.7`
- `title`: "LOCAL_INLINE uint32 FCUART_HWA_GetCtrlReg(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.7 LOCAL_INLINE uint32 FCUART_HWA_GetCtrlReg(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.7"

### SEC-002-009-001-008
- `source_number`: `2.9.1.8`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.8 LOCAL_INLINE void FCUART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.8"

### SEC-002-009-001-009
- `source_number`: `2.9.1.9`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.9 LOCAL_INLINE void FCUART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.9"

### SEC-002-009-001-010
- `source_number`: `2.9.1.10`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.10 LOCAL_INLINE void FCUART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.10"

### SEC-002-009-001-011
- `source_number`: `2.9.1.11`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.11 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "OverSamplingRatio", "baudRateDivisor"]
- `anchor`: "2.9.1.11"

### SEC-002-009-001-012
- `source_number`: `2.9.1.12`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.12 LOCAL_INLINE void FCUART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "OverSamplingRatio", "baudRateDivisor"]
- `anchor`: "2.9.1.12"

### SEC-002-009-001-013
- `source_number`: `2.9.1.13`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetOversamplingRatio (FCUART_Type *pUart, uint32"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.13 LOCAL_INLINE void FCUART_HWA_SetOversamplingRatio (FCUART_Type *pUart, uint32"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "OverSamplingRatio", "baudRateDivisor"]
- `anchor`: "2.9.1.13"

### SEC-002-009-001-014
- `source_number`: `2.9.1.14`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBaudRateDivisor(FCUART_Type *pUart, uint32 baudRateDivisor)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.14 LOCAL_INLINE void FCUART_HWA_SetBaudRateDivisor(FCUART_Type *pUart, uint32 baudRateDivisor)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "OverSamplingRatio", "baudRateDivisor"]
- `anchor`: "2.9.1.14"

### SEC-002-009-001-015
- `source_number`: `2.9.1.15`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableBothEdgeSampling(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.15 LOCAL_INLINE void FCUART_HWA_EnableBothEdgeSampling(FCUART_Type *pUart)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "OverSamplingRatio", "baudRateDivisor"]
- `anchor`: "2.9.1.15"

### SEC-002-009-001-016
- `source_number`: `2.9.1.16`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.16 LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Parity", "instance"]
- `anchor`: "2.9.1.16"

### SEC-002-009-001-017
- `source_number`: `2.9.1.17`
- `title`: "LOCAL_INLINE void FCUART_HWA_WriteClearSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.17 LOCAL_INLINE void FCUART_HWA_WriteClearSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Parity", "instance"]
- `anchor`: "2.9.1.17"

### SEC-002-009-001-018
- `source_number`: `2.9.1.18`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetParity(FCUART_Type *pUart, Uart_ParityModeType eParityType)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.18 LOCAL_INLINE void FCUART_HWA_SetParity(FCUART_Type *pUart, Uart_ParityModeType eParityType)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Parity", "instance"]
- `anchor`: "2.9.1.18"

### SEC-002-009-001-019
- `source_number`: `2.9.1.19`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetStopBit(FCUART_Type *pUart, Uart_StopBitCountType eStopBit)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.19 LOCAL_INLINE void FCUART_HWA_SetStopBit(FCUART_Type *pUart, Uart_StopBitCountType eStopBit)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Parity", "instance"]
- `anchor`: "2.9.1.19"

### SEC-002-009-001-020
- `source_number`: `2.9.1.20`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.20 LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.20"

### SEC-002-009-001-021
- `source_number`: `2.9.1.21`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitDMA (FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.21 LOCAL_INLINE void FCUART_HWA_DisableTransmitDMA (FCUART_Type *pUart)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.21"

### SEC-002-009-001-022
- `source_number`: `2.9.1.22`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveDMA(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.22 LOCAL_INLINE void FCUART_HWA_EnableReceiveDMA(FCUART_Type *pUart)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.22"

### SEC-002-009-001-023
- `source_number`: `2.9.1.23`
- `title`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveDMA(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.23 LOCAL_INLINE void FCUART_HWA_DisableReceiveDMA(FCUART_Type *pUart)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.23"

### SEC-002-009-001-024
- `source_number`: `2.9.1.24`
- `title`: "LOCAL_INLINE void FCUART_HWA_FlushTxBuffer(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.24 LOCAL_INLINE void FCUART_HWA_FlushTxBuffer(FCUART_Type *pUart)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced"]
- `anchor`: "2.9.1.24"

### SEC-002-009-001-025
- `source_number`: `2.9.1.25`
- `title`: "LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.25 LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "data", "instance"]
- `anchor`: "2.9.1.25"

### SEC-002-009-001-026
- `source_number`: `2.9.1.26`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.26 LOCAL_INLINE void FCUART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "data", "instance"]
- `anchor`: "2.9.1.26"

### SEC-002-009-001-027
- `source_number`: `2.9.1.27`
- `title`: "LOCAL_INLINE uint8 FCUART_HWA_GetData(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.27 LOCAL_INLINE uint8 FCUART_HWA_GetData(FCUART_Type *pUart)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "data", "instance"]
- `anchor`: "2.9.1.27"

### SEC-002-009-001-028
- `source_number`: `2.9.1.28`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetR8T9(FCUART_Type *pUart, uint8 u8Data)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.28 LOCAL_INLINE void FCUART_HWA_SetR8T9(FCUART_Type *pUart, uint8 u8Data)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "data", "instance"]
- `anchor`: "2.9.1.28"

### SEC-002-009-001-029
- `source_number`: `2.9.1.29`
- `title`: "LOCAL_INLINE uint8 FCUART_HWA_GetR8T9 (FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.29 LOCAL_INLINE uint8 FCUART_HWA_GetR8T9 (FCUART_Type *pUart)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "data", "instance"]
- `anchor`: "2.9.1.29"

### SEC-002-009-001-030
- `source_number`: `2.9.1.30`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.30 LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "bEnable", "Returns"]
- `anchor`: "2.9.1.30"

### SEC-002-009-001-031
- `source_number`: `2.9.1.31`
- `title`: "LOCAL_INLINE uint8 FCUART_HWA_GetR9T8(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.31 LOCAL_INLINE uint8 FCUART_HWA_GetR9T8(FCUART_Type *pUart)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "bEnable", "Returns"]
- `anchor`: "2.9.1.31"

### SEC-002-009-001-032
- `source_number`: `2.9.1.32`
- `title`: "LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.32 LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "bEnable", "Returns"]
- `anchor`: "2.9.1.32"

### SEC-002-009-001-033
- `source_number`: `2.9.1.33`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetTxTransfer(FCUART_Type *pUart, boolean bEnable);"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.33 LOCAL_INLINE void FCUART_HWA_SetTxTransfer(FCUART_Type *pUart, boolean bEnable);"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "bEnable", "Returns"]
- `anchor`: "2.9.1.33"

### SEC-002-009-001-034
- `source_number`: `2.9.1.34`
- `title`: "LOCAL_INLINE void FCUART_HWA_SetRxTransfer(FCUART_Type *pUart, boolean bEnable);"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.34 LOCAL_INLINE void FCUART_HWA_SetRxTransfer(FCUART_Type *pUart, boolean bEnable);"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "bEnable", "Returns"]
- `anchor`: "2.9.1.34"

### SEC-002-009-001-035
- `source_number`: `2.9.1.35`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.35 LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void", "FCUART_Type", "instance", "Returns"]
- `anchor`: "2.9.1.35"

### SEC-002-009-001-036
- `source_number`: `2.9.1.36`
- `title`: "LOCAL_INLINE void FCUART_HWA_EnableHwFlowControl(FCUART_Type *pUart);"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.36 LOCAL_INLINE void FCUART_HWA_EnableHwFlowControl(FCUART_Type *pUart);"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void", "FCUART_Type", "instance", "Returns"]
- `anchor`: "2.9.1.36"

### SEC-002-009-001-037
- `source_number`: `2.9.1.37`
- `title`: "LOCAL_INLINE void FCUART_UART_HWA_EnableIdleInterrupt(FCUART_Type *pUart);"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.37 LOCAL_INLINE void FCUART_UART_HWA_EnableIdleInterrupt(FCUART_Type *pUart);"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void", "FCUART_Type", "instance", "Returns"]
- `anchor`: "2.9.1.37"

### SEC-002-009-001-038
- `source_number`: `2.9.1.38`
- `title`: "LOCAL_INLINE void FCUART_UART_HWA_SetIdleConfig(FCUART_Type *pUart, Uart_IdleCharNumType"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.38 LOCAL_INLINE void FCUART_UART_HWA_SetIdleConfig(FCUART_Type *pUart, Uart_IdleCharNumType"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void", "FCUART_Type", "instance", "Returns"]
- `anchor`: "2.9.1.38"

### SEC-002-009-001-039
- `source_number`: `2.9.1.39`
- `title`: "LOCAL_INLINE void FCUART_UART_HWA_DisableIdleInterrupt(FCUART_Type *pUart);"
- `path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.39 LOCAL_INLINE void FCUART_UART_HWA_DisableIdleInterrupt(FCUART_Type *pUart);"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void", "FCUART_Type", "instance", "Returns"]
- `anchor`: "2.9.1.39"

### SEC-002-010
- `source_number`: `2.10`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["UART", "transmission", "called", "FC7xxx", "Uart_SyncSend", "interface", "Uart_SyncReceive", "Uart_GetStatus"]
- `anchor`: "2.10"

### SEC-002-010-001
- `source_number`: `2.10.1`
- `title`: "Sychronous transmission"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Sychronous transmission"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["UART", "transmission", "called", "FC7xxx", "Uart_SyncSend", "interface", "Uart_SyncReceive", "Uart_GetStatus"]
- `anchor`: "2.10.1 Sychronous transmission"

### SEC-002-010-002
- `source_number`: `2.10.2`
- `title`: "Aynchronous transmission"
- `path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Aynchronous transmission"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["UART", "transmission", "called", "FC7xxx", "Uart_SyncSend", "interface", "Uart_SyncReceive", "Uart_GetStatus"]
- `anchor`: "2.10.2 Aynchronous transmission"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `36`
- `physical_page_end`: `45`
- `printed_page_start`: `36`
- `printed_page_end`: `45`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "Uart", "UART", "Default", "FC7xxx"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables"
- `physical_page_start`: `36`
- `physical_page_end`: `45`
- `printed_page_start`: `36`
- `printed_page_end`: `45`
- `keywords`: ["Variable", "Screenshot", "Properties", "Property", "Uart", "UART", "Default", "FC7xxx"]
- `anchor`: "3.1"

### SEC-003-001-001
- `source_number`: `3.1.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "3.1.1"

### SEC-003-001-002
- `source_number`: `3.1.2`
- `title`: "GeneralConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration"
- `physical_page_start`: `36`
- `physical_page_end`: `37`
- `printed_page_start`: `36`
- `printed_page_end`: `37`
- `keywords`: ["Uart", "UART", "Screenshot", "Properties", "Property", "Variable", "Default", "Symbolic"]
- `anchor`: "3.1.2"

### SEC-003-001-002-001
- `source_number`: `3.1.2.1`
- `title`: "UartDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "3.1.2.1"

### SEC-003-001-002-002
- `source_number`: `3.1.2.2`
- `title`: "DisableUartRuntimeErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.2 DisableUartRuntimeErrorDetect"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "3.1.2.2"

### SEC-003-001-002-003
- `source_number`: `3.1.2.3`
- `title`: "UartMulticoreEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "3.1.2.3"

### SEC-003-001-002-004
- `source_number`: `3.1.2.4`
- `title`: "UartTimeoutDuration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.4 UartTimeoutDuration"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "3.1.2.4"

### SEC-003-001-002-005
- `source_number`: `3.1.2.5`
- `title`: "UartDmaEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.5 UartDmaEnable"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "3.1.2.5"

### SEC-003-001-002-006
- `source_number`: `3.1.2.6`
- `title`: "UartVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.6 UartVersionInfoApi"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "3.1.2.6"

### SEC-003-001-002-007
- `source_number`: `3.1.2.7`
- `title`: "UartCallbackCapability"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.7 UartCallbackCapability"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "3.1.2.7"

### SEC-003-001-002-008
- `source_number`: `3.1.2.8`
- `title`: "UartCallback"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.8 UartCallback"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "3.1.2.8"

### SEC-003-001-002-009
- `source_number`: `3.1.2.9`
- `title`: "Uart ReRecive Enable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.9 Uart ReRecive Enable"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "3.1.2.9"

### SEC-003-001-003
- `source_number`: `3.1.3`
- `title`: "UartEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.3 UartEcucPartitionRef"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "3.1.3"

### SEC-003-001-004
- `source_number`: `3.1.4`
- `title`: "UartGlobalConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "3.1.4"

### SEC-003-001-004-001
- `source_number`: `3.1.4.1.1`
- `title`: "UartChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "3.1.4.1.1"

### SEC-003-001-004-001-02
- `source_number`: `3.1.4.1.2`
- `title`: "UartChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "3.1.4.1.2"

### SEC-003-001-004-001-03
- `source_number`: `3.1.4.1.3`
- `title`: "UartClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.3 UartClockRef"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "3.1.4.1.3"

### SEC-003-001-004-001-04
- `source_number`: `3.1.4.1.4`
- `title`: "UartChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.4 UartChannelEcucPartitionRef"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "3.1.4.1.4"

### SEC-003-001-005
- `source_number`: `3.1.5`
- `title`: "ModuleConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration"
- `physical_page_start`: `39`
- `physical_page_end`: `42`
- `printed_page_start`: `39`
- `printed_page_end`: `42`
- `keywords`: ["UART", "Variable", "Uart", "Screenshot", "Properties", "Property", "Default", "Reference"]
- `anchor`: "3.1.5"

### SEC-003-001-005-001
- `source_number`: `3.1.5.1`
- `title`: "UartHwChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.1 UartHwChannel"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "3.1.5.1"

### SEC-003-001-005-002
- `source_number`: `3.1.5.2`
- `title`: "DesireBaudrate"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx"]
- `anchor`: "3.1.5.2"

### SEC-003-001-005-003
- `source_number`: `3.1.5.3`
- `title`: "CustomBaudrateMantissa"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.3 CustomBaudrateMantissa"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx"]
- `anchor`: "3.1.5.3"

### SEC-003-001-005-004
- `source_number`: `3.1.5.4`
- `title`: "CustomBaudrateDivisor"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.4 CustomBaudrateDivisor"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx"]
- `anchor`: "3.1.5.4"

### SEC-003-001-005-005
- `source_number`: `3.1.5.5`
- `title`: "CustomBaudrateValue"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "3.1.5.5"

### SEC-003-001-005-006
- `source_number`: `3.1.5.6`
- `title`: "UartInteruptDmaMethod"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.6 UartInteruptDmaMethod"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "3.1.5.6"

### SEC-003-001-005-007
- `source_number`: `3.1.5.7`
- `title`: "UartDmaTxChannelRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.7 UartDmaTxChannelRef"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "3.1.5.7"

### SEC-003-001-005-008
- `source_number`: `3.1.5.8`
- `title`: "UartDmaRxChannelRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.8 UartDmaRxChannelRef"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "3.1.5.8"

### SEC-003-001-005-009
- `source_number`: `3.1.5.9`
- `title`: "UartParityType"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.9 UartParityType"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "3.1.5.9"

### SEC-003-001-005-010
- `source_number`: `3.1.5.10`
- `title`: "UartStopBitNumber"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "3.1.5.10"

### SEC-003-001-005-011
- `source_number`: `3.1.5.11`
- `title`: "UartWordLength"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.11 UartWordLength"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "3.1.5.11"

### SEC-003-001-005-012
- `source_number`: `3.1.5.12`
- `title`: "UartInternalLoopbackEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.12 UartInternalLoopbackEnable"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "3.1.5.12"

### SEC-003-001-005-013
- `source_number`: `3.1.5.13`
- `title`: "UartHardwareFlowControlEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.13 UartHardwareFlowControlEnable"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "3.1.5.13"

### SEC-003-001-005-014
- `source_number`: `3.1.5.14`
- `title`: "UartTimeoutEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "3.1.5.14"

### SEC-003-001-005-015
- `source_number`: `3.1.5.15`
- `title`: "UartIdleNumber"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.15 UartIdleNumber"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "3.1.5.15"

### SEC-003-001-006
- `source_number`: `3.1.6`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation"
- `physical_page_start`: `43`
- `physical_page_end`: `45`
- `printed_page_start`: `43`
- `printed_page_end`: `45`
- `keywords`: ["UART", "Variable", "Uart", "Screenshot", "Properties", "Property", "Integer_Label", "SymbolicNameValue"]
- `anchor`: "3.1.6"

### SEC-003-001-006-001
- `source_number`: `3.1.6.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.1 ArReleaseMajorVersion"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "3.1.6.1"

### SEC-003-001-006-002
- `source_number`: `3.1.6.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.1.6.2"

### SEC-003-001-006-003
- `source_number`: `3.1.6.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.3 ArReleaseRevisionVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.1.6.3"

### SEC-003-001-006-004
- `source_number`: `3.1.6.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.4 SwMajorVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.1.6.4"

### SEC-003-001-006-005
- `source_number`: `3.1.6.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.5 SwMinorVersion"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "3.1.6.5"

### SEC-003-001-006-006
- `source_number`: `3.1.6.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "3.1.6.6"

### SEC-003-001-006-007
- `source_number`: `3.1.6.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.7 ModuleId"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "3.1.6.7"

### SEC-003-001-006-008
- `source_number`: `3.1.6.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.8 VendorId"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "3.1.6.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `46`
- `physical_page_end`: `47`
- `printed_page_start`: `46`
- `printed_page_end`: `47`
- `keywords`: ["UART", "DMA", "FC7xxx", "Configure", "port", "UartCallback", "GeneralConfiguration", "can"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "UART Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.1 UART Usage Common Steps"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["UART", "DMA", "FC7xxx", "Configure", "enable", "required", "port", "Guides"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "UART Channel Demo"
- `path`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo"
- `physical_page_start`: `46`
- `physical_page_end`: `47`
- `printed_page_start`: `46`
- `printed_page_end`: `47`
- `keywords`: ["UART", "DMA", "FC7xxx", "Configure", "port", "UartCallback", "GeneralConfiguration", "can"]
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
- `content_types`: ["text", "toc", "table", "image", "config"]
- `anchors`: ["Table of Contents", "Chapter 1 UART Introduction .......................................................................…", "1.1", "Requirements ......................................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image"]
- `anchors`: ["4.1", "UART Usage Common Steps ...........................................................................…", "4.2", "UART Channel Demo .................................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 UART Introduction / 1.1 Requirements"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 1 UART Introduction", "1.1", "Requirements", "UART is a Complex Device Driver (CDD), so there are no AUTOSAR requirements regarding this module.…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 1 UART Introduction / 1.3 Hardware Summary"
- `content_types`: ["text", "api"]
- `anchors`: ["⚫", "Optional 13-bit break character generation / 11-bit break character detection", "⚫", "Configurable idle length detection supporting 1, 2, 4, 8, 16, 32, 64 or 128 idle characters"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "N/A"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.3", "Macros", "2.3.1", "Macros in Uart_Types.h"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define UART_E_INIT_FAILED ((uint8)0x09U)", "Invalid pointer for init function parameter.", "#define UART_E_DEINIT_FAILED ((uint8)0x10U)", "De-Init function for specific HW channel finish unsuccessfully."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.1 Uart_BitCountPerCharType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["API service ID for Uart_GetVersionInfo() function.", "#define UART_SETTRANSBUFFER_ID ((uint8)0x0BU)", "API service ID for UART_SetTransBuffer() function.", "2.3.2"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.5 Uart_StatusType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "Type of UART transfer (based on interrupts or DMA).", "Values", "Value"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Uart_Types.h / 2.4.2.1 Uart_DirectionType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["UART_BAUDRATE_460800", "The baud rate", "UART_BAUDRATE_921600", "The baud rate"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Uart_StateStructureType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.6", "Structures", "2.6.1", "Uart_StateStructureType"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Uart_HwConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Uart_StopBitCountType StopBitsCount", "Number of stop bits, 1 stop bit (default) or 2 stop bits.", "Uart_BitCountPerCharType BitCountPerChar", "Number of bits in a character (8-default, 9 or 10); for 9/10 bits chars, users must provide"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["uint32 ChannelCoreId", "Core id on which the Uart channel has been assigned", "uint32 ChannelClockFrequency", "The clock frequency configured on the given channel"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.2 void Uart_Deinit(void);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7.1.5", "void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType", "TransType);", "Function"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7.1.7", "Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32", "Timeout);", "Function"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["TransType", "Type of the transfer to be aborted. It can be either UART_SEND or", "UART_RECEIVE.", "Returns"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.3 Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.8.1.3", "Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32", "TxDataSize, const uint32 Timeout)", "Function"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Referenced", "By", "2.8.1.6", "Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Referenced", "By", "Uart_AsyncReceive()", "2.8.1.9"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.13 void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Description", "This function returns the UART baud rate.", "Parameters", "Parameter"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Referenced", "By", "N/A"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.1 LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9", "Peripheral Functions", "2.9.1", "Functions in Uart_RegOps.h"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.6 LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Returns", "N/A", "Referenced By", "N/A"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.11 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.11", "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)", "Function", "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.16 LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "pUart"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.20 LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Returns", "N/A", "Referenced By", "N/A"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.25 LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.25", "LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)", "Function", "LOCAL_INLINE void FCUART_HWA_FlushRxBuffer (FCUART_Type *pUart)"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.30 LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.30", "LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)", "Function", "LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.35 LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.9.1.35", "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);", "Function", "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Sychronous transmission"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.10", "API Sequence Diagram", "2.10.1 Sychronous transmission", "The following figure shows synchronous UART transmission. After initialization, the Uart_SyncSend i…"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Containers and Variables", "3.1.1"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `content_types`: ["text", "image"]
- `anchors`: ["3.1.2.3", "UartMulticoreEnable", "Container", "UartMulticoreEnable"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Type", "Variable: Container", "3.1.4.1.2", "UartChannelId"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["3.1.5.14", "UartTimeoutEnable", "Variable", "UartTimeoutEnable"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Origin", "FLAGCHIP", "SymbolicNameValue", "False"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Origin", "FLAGCHIP", "SymbolicNameValue", "False"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 UART Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "UART Usage Common Steps", "Basically, the UART module can be configured by following the below 3 steps:"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo"
- `content_types`: ["text", "image", "config", "figure"]
- `anchors`: ["3)", "Configure the functions of each serial port. The asynchronous mode can choose DMA or interrupt mode…", "interrupt service function is configured in UartCallback in the GeneralConfiguration container."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx UART User Manual"
- `keywords`: ["UART", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx UART User Manual; Revision History; A0"
- `keywords`: ["UART", "FC7xxx", "FC7300F8MDQ", "Uart_AsyncReceive", "Date", "Add", "Change"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx UART User Manual; Table of Contents; Chapter 1 UART Introduction ............................................................................................................................... 5"
- `keywords`: ["UART", "CDD_Uart", "LLD_Uart", "Uart_Types", "FC7xxx", "Uart_Version", "Uart_GeneralTypes", "Uart_StateStructureType", "Uart_UserConfigType", "Uart_HwConfigType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Chapter 1 UART Introduction ...............................................................................................................…"
  - `p3`: "1.1"
  - `p3`: "Requirements ..............................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image"]
- `summary`: "Table of Contents: FC7xxx UART User Manual; 4.1; UART Usage Common Steps ......................................................................................................................................... 46"
- `keywords`: ["UART", "FC7xxx", "Usage", "Channel", "Demo"]
- `anchors`:
  - `p4`: "4.1"
  - `p4`: "UART Usage Common Steps ...................................................................................................................…"
  - `p4`: "4.2"
  - `p4`: "UART Channel Demo .........................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 UART Introduction / 1.1 Requirements"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 1 UART Introduction / 1.1 Requirements: FC7xxx UART User Manual; Chapter 1 UART Introduction; 1.1"
- `keywords`: ["UART", "Uart", "FCUART", "FIFO", "FC7xxx", "AUTOSAR", "DMA", "bit", "matching", "CDD"]
- `anchors`:
  - `p5`: "Chapter 1 UART Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirements"
  - `p5`: "UART is a Complex Device Driver (CDD), so there are no AUTOSAR requirements regarding this module. It has vendor"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 1 UART Introduction / 1.3 Hardware Summary"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 UART Introduction / 1.3 Hardware Summary: FC7xxx UART User Manual; Optional 13-bit break character generation / 11-bit break character detection; Configurable idle length detection supporting 1, 2, 4, 8, 16, 32, 64 or 128 idle characters"
- `keywords`: ["UART", "FC7xxx", "RTS", "CTS", "bit", "break", "character", "detection", "idle", "send"]
- `anchors`:
  - `p6`: "⚫"
  - `p6`: "Optional 13-bit break character generation / 11-bit break character detection"
  - `p6`: "⚫"
  - `p6`: "Configurable idle length detection supporting 1, 2, 4, 8, 16, 32, 64 or 128 idle characters"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.1 Rejected Requirements: FC7xxx UART User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["UART", "FC7xxx", "Rejected", "Structure"]
- `anchors`:
  - `p7`: "Chapter 2 Software Design"
  - `p7`: "2.1"
  - `p7`: "Rejected Requirements"
  - `p7`: "N/A"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h: FC7xxx UART User Manual; 2.3; Macros"
- `keywords`: ["UART", "define", "FC7xxx", "Uart_Types", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "Invalid", "UART_E_INVALID_POINTER", "UART_E_ALREADY_INITIALIZED", "UART_E_PARAM_CONFIG"]
- `anchors`:
  - `p8`: "2.3"
  - `p8`: "Macros"
  - `p8`: "2.3.1"
  - `p8`: "Macros in Uart_Types.h"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h: FC7xxx UART User Manual; #define UART_E_INIT_FAILED ((uint8)0x09U); Invalid pointer for init function parameter."
- `keywords`: ["UART", "define", "FC7xxx", "UART_E_INIT_FAILED", "UART_E_DEINIT_FAILED", "UART_INIT_ID", "UART_Init", "UART_DEINIT_ID", "UART_DeInit", "UART_SETBAUDRATE_ID"]
- `anchors`:
  - `p9`: "#define UART_E_INIT_FAILED ((uint8)0x09U)"
  - `p9`: "Invalid pointer for init function parameter."
  - `p9`: "#define UART_E_DEINIT_FAILED ((uint8)0x10U)"
  - `p9`: "De-Init function for specific HW channel finish unsuccessfully."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.1 Uart_BitCountPerCharType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.1 Uart_BitCountPerCharType: FC7xxx UART User Manual; API service ID for Uart_GetVersionInfo() function.; #define UART_SETTRANSBUFFER_ID ((uint8)0x0BU)"
- `keywords`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType", "Enumeration", "characters", "Uart_StopBitCountType", "Uart_ParityModeType", "Uart_TransferType"]
- `anchors`:
  - `p10`: "API service ID for Uart_GetVersionInfo() function."
  - `p10`: "#define UART_SETTRANSBUFFER_ID ((uint8)0x0BU)"
  - `p10`: "API service ID for UART_SetTransBuffer() function."
  - `p10`: "2.3.2"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.5 Uart_StatusType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.5 Uart_StatusType: FC7xxx UART User Manual; Description; Type of UART transfer (based on interrupts or DMA)."
- `keywords`: ["UART", "Uart", "baud", "rate", "error", "transfer", "DMA", "status", "Values", "Uart_StatusType"]
- `anchors`:
  - `p11`: "Description"
  - `p11`: "Type of UART transfer (based on interrupts or DMA)."
  - `p11`: "Values"
  - `p11`: "Value"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Uart_Types.h / 2.4.2.1 Uart_DirectionType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Uart_Types.h / 2.4.2.1 Uart_DirectionType: FC7xxx UART User Manual; UART_BAUDRATE_460800; The baud rate"
- `keywords`: ["UART", "Uart", "Uart_Types", "Uart_DirectionType", "FC7xxx", "UART_BAUDRATE_460800", "baud", "rate", "UART_BAUDRATE_921600", "UART_BAUDRATE_1843200"]
- `anchors`:
  - `p12`: "UART_BAUDRATE_460800"
  - `p12`: "The baud rate"
  - `p12`: "UART_BAUDRATE_921600"
  - `p12`: "The baud rate"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Uart_StateStructureType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Uart_StateStructureType: FC7xxx UART User Manual; 2.6; Structures"
- `keywords`: ["UART", "volatile", "Uart_StateStructureType", "BaudRate", "Uart_StatusType", "Uart_UserConfigType", "FC7xxx", "TxBuff", "RxBuff", "TxSize"]
- `anchors`:
  - `p13`: "2.6"
  - `p13`: "Structures"
  - `p13`: "2.6.1"
  - `p13`: "Uart_StateStructureType"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Uart_HwConfigType"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Uart_HwConfigType: FC7xxx UART User Manual; Uart_StopBitCountType StopBitsCount; Number of stop bits, 1 stop bit (default) or 2 stop bits."
- `keywords`: ["UART", "Uart", "DMA", "bits", "channel", "Dma_InstanceType", "Uart_HwConfigType", "Uart_ChannelConfigType", "FC7xxx", "Uart_StopBitCountType"]
- `anchors`:
  - `p14`: "Uart_StopBitCountType StopBitsCount"
  - `p14`: "Number of stop bits, 1 stop bit (default) or 2 stop bits."
  - `p14`: "Uart_BitCountPerCharType BitCountPerChar"
  - `p14`: "Number of bits in a character (8-default, 9 or 10); for 9/10 bits chars, users must provide"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);: FC7xxx UART User Manual; uint32 ChannelCoreId; Core id on which the Uart channel has been assigned"
- `keywords`: ["UART", "CDD_Uart", "Uart", "Uart_ConfigType", "channel", "const", "Uart_Init", "FC7xxx", "ChannelCoreId", "ChannelClockFrequency"]
- `anchors`:
  - `p15`: "uint32 ChannelCoreId"
  - `p15`: "Core id on which the Uart channel has been assigned"
  - `p15`: "uint32 ChannelClockFrequency"
  - `p15`: "The clock frequency configured on the given channel"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.2 void Uart_Deinit(void);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.2 void Uart_Deinit(void);: FC7xxx UART User Manual; Diagram; Parameters"
- `keywords`: ["UART", "void", "Uart_Deinit", "FC7xxx", "Diagram", "Config", "Init", "Returns", "initializes"]
- `anchors`:
  - `p16`: "Diagram"
  - `p16`: "Parameters"
  - `p16`: "Parameter"
  - `p16`: "Description"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);: FC7xxx UART User Manual; Diagram; Parameters"
- `keywords`: ["UART", "Std_ReturnType", "Baudrate", "Channel", "Uart_SetBaudrate", "Uart_BaudrateType", "Uart_GetBaudrate", "FC7xxx", "Diagram", "Returns"]
- `anchors`:
  - `p17`: "Diagram"
  - `p17`: "Parameters"
  - `p17`: "Parameter"
  - `p17`: "Description"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType: FC7xxx UART User Manual; 2.7.1.5; void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `keywords`: ["UART", "DataBuffer", "DataSize", "Channel", "TransType", "Std_ReturnType", "Uart_SetTransBuffer", "Uart_DirectionType", "bytes", "Uart_SyncSend"]
- `anchors`:
  - `p18`: "2.7.1.5"
  - `p18`: "void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
  - `p18`: "TransType);"
  - `p18`: "Function"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32: FC7xxx UART User Manual; 2.7.1.7; Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `keywords`: ["UART", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "Uart_SyncReceive", "Uart_AbortTransfer", "Uart_DirectionType", "TransType", "FC7xxx"]
- `anchors`:
  - `p19`: "2.7.1.7"
  - `p19`: "Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
  - `p19`: "Timeout);"
  - `p19`: "Function"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);: FC7xxx UART User Manual; TransType; Type of the transfer to be aborted. It can be either UART_SEND or"
- `keywords`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "TransType", "Uart_AsyncSend", "transfer", "Returns"]
- `anchors`:
  - `p20`: "TransType"
  - `p20`: "Type of the transfer to be aborted. It can be either UART_SEND or"
  - `p20`: "UART_RECEIVE."
  - `p20`: "Returns"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);: FC7xxx UART User Manual; Diagram; Parameters"
- `keywords`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType", "const", "Returns", "VersionInfo", "Uart_UserConfigType", "UserConfig"]
- `anchors`:
  - `p21`: "Diagram"
  - `p21`: "Parameters"
  - `p21`: "Parameter"
  - `p21`: "Description"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.3 Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.3 Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32: FC7xxx UART User Manual; 2.8.1.3; Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `keywords`: ["UART", "const", "HwUnit", "Uart_StatusType", "TxDataBuff", "TxDataSize", "data", "sent", "BytesRemaining", "Uart_LLD_SyncSend"]
- `anchors`:
  - `p22`: "2.8.1.3"
  - `p22`: "Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
  - `p22`: "TxDataSize, const uint32 Timeout)"
  - `p22`: "Function"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit): FC7xxx UART User Manual; Referenced; By"
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "RxDataBuff", "RxDataSize", "data", "Uart_LLD_AbortSendingData", "blocking", "number"]
- `anchors`:
  - `p23`: "Referenced"
  - `p23`: "By"
  - `p23`: "2.8.1.6"
  - `p23`: "Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining): FC7xxx UART User Manual; Referenced; By"
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining", "DesiredBaudrate", "ClockFrequency", "Referenced", "Uart_LLD_GetReceiveStatus", "Returns"]
- `anchors`:
  - `p24`: "Referenced"
  - `p24`: "By"
  - `p24`: "Uart_AsyncReceive()"
  - `p24`: "2.8.1.9"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.13 void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.13 void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);: FC7xxx UART User Manual; Description; This function returns the UART baud rate."
- `keywords`: ["UART", "FCUART", "HwUnit", "const", "number", "void", "TxDataBuff", "TxDataSize", "RxDataBuff", "RxDataSize"]
- `anchors`:
  - `p25`: "Description"
  - `p25`: "This function returns the UART baud rate."
  - `p25`: "Parameters"
  - `p25`: "Parameter"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);: FC7xxx UART User Manual; Diagram; Referenced"
- `keywords`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma", "FC7xxx", "Referenced", "DMA", "data", "number"]
- `anchors`:
  - `p26`: "Diagram"
  - `p26`: "Referenced"
  - `p26`: "By"
  - `p26`: "N/A"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.1 LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.1 LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType): FC7xxx UART User Manual; 2.9; Peripheral Functions"
- `keywords`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType", "void", "LOCAL_INLINE", "LOCAL_INUARTE", "FCUART_StatType", "instance"]
- `anchors`:
  - `p27`: "2.9"
  - `p27`: "Peripheral Functions"
  - `p27`: "2.9.1"
  - `p27`: "Functions in Uart_RegOps.h"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.6 LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.6 LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart): FC7xxx UART User Manual; Returns; N/A"
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced", "instance", "FCUART_HWA_DisableErrorInterrupt"]
- `anchors`:
  - `p28`: "Returns"
  - `p28`: "N/A"
  - `p28`: "Referenced By"
  - `p28`: "N/A"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.11 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.11 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart): FC7xxx UART User Manual; 2.9.1.11; LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "OverSamplingRatio", "baudRateDivisor", "FCUART_HWA_DisableTransmitCompleteInterrupt", "instance"]
- `anchors`:
  - `p29`: "2.9.1.11"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
  - `p29`: "Function"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.16 LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.16 LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType: FC7xxx UART User Manual; Parameters; Parameter"
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Parity", "instance", "BitCountPerChar", "eParityType"]
- `anchors`:
  - `p30`: "Parameters"
  - `p30`: "Parameter"
  - `p30`: "Description"
  - `p30`: "pUart"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.20 LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.20 LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart): FC7xxx UART User Manual; Returns; N/A"
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "Returns", "Referenced", "DMA", "FCUART_HWA_EnableTransmitDMA"]
- `anchors`:
  - `p31`: "Returns"
  - `p31`: "N/A"
  - `p31`: "Referenced By"
  - `p31`: "N/A"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.25 LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.25 LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart): FC7xxx UART User Manual; 2.9.1.25; LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "data", "instance", "Returns", "Referenced"]
- `anchors`:
  - `p32`: "2.9.1.25"
  - `p32`: "LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
  - `p32`: "Function"
  - `p32`: "LOCAL_INLINE void FCUART_HWA_FlushRxBuffer (FCUART_Type *pUart)"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.30 LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.30 LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data): FC7xxx UART User Manual; 2.9.1.30; LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `keywords`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void", "instance", "bEnable", "Returns", "Referenced", "FCUART_HWA_SetR9T8"]
- `anchors`:
  - `p33`: "2.9.1.30"
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
  - `p33`: "Function"
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.35 LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.35 LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);: FC7xxx UART User Manual; 2.9.1.35; LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `keywords`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void", "FCUART_Type", "instance", "Returns", "Referenced", "FCUART_HWA_EnableHwFlowControl"]
- `anchors`:
  - `p34`: "2.9.1.35"
  - `p34`: "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
  - `p34`: "Function"
  - `p34`: "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Sychronous transmission"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Sychronous transmission: FC7xxx UART User Manual; 2.10; API Sequence Diagram"
- `keywords`: ["UART", "transmission", "called", "FC7xxx", "Uart_SyncSend", "interface", "Uart_SyncReceive", "Uart_GetStatus", "UART_STATUS_SUCCESS", "shows"]
- `anchors`:
  - `p35`: "2.10"
  - `p35`: "API Sequence Diagram"
  - `p35`: "2.10.1 Sychronous transmission"
  - `p35`: "The following figure shows synchronous UART transmission. After initialization, the Uart_SyncSend interface is called to"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect: FC7xxx UART User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration", "UartDevErrorDetect", "OFF"]
- `anchors`:
  - `p36`: "Chapter 3 Tresos Configuration Items"
  - `p36`: "3.1"
  - `p36`: "Containers and Variables"
  - `p36`: "3.1.1"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable: FC7xxx UART User Manual; 3.1.2.3; UartMulticoreEnable"
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property", "Default", "UartDmaEnable"]
- `anchors`:
  - `p37`: "3.1.2.3"
  - `p37`: "UartMulticoreEnable"
  - `p37`: "Container"
  - `p37`: "UartMulticoreEnable"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel: FC7xxx UART User Manual; Properties; Property"
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive", "UartEcucPartitionRef", "UartGlobalConfig"]
- `anchors`:
  - `p38`: "Properties"
  - `p38`: "Property"
  - `p38`: "Value"
  - `p38`: "Type"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId: FC7xxx UART User Manual; Type; Variable: Container"
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property", "UartClockRef", "ASPathDataOfSchema"]
- `anchors`:
  - `p39`: "Type"
  - `p39`: "Variable: Container"
  - `p39`: "3.1.4.1.2"
  - `p39`: "UartChannelId"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate: FC7xxx UART User Manual; Properties; Property"
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx", "Properties", "Property"]
- `anchors`:
  - `p40`: "Properties"
  - `p40`: "Property"
  - `p40`: "Value"
  - `p40`: "Type"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue: FC7xxx UART User Manual; Properties; Property"
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod", "UART_USING_INTERRUPTS", "UartDmaTxChannelRef"]
- `anchors`:
  - `p41`: "Properties"
  - `p41`: "Property"
  - `p41`: "Value"
  - `p41`: "Type"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber: FC7xxx UART User Manual; Properties; Property"
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot", "UART_ONE_STOP_BIT", "UartWordLength"]
- `anchors`:
  - `p42`: "Properties"
  - `p42`: "Property"
  - `p42`: "Value"
  - `p42`: "Type"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable: FC7xxx UART User Manual; 3.1.5.14; UartTimeoutEnable"
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber", "UART_IDLE_CHARACTER_1", "CommonPublishedInformation"]
- `anchors`:
  - `p43`: "3.1.5.14"
  - `p43`: "UartTimeoutEnable"
  - `p43`: "Variable"
  - `p43`: "UartTimeoutEnable"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion: FC7xxx UART User Manual; Origin; FLAGCHIP"
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number", "AUTOSAR", "implementation"]
- `anchors`:
  - `p44`: "Origin"
  - `p44`: "FLAGCHIP"
  - `p44`: "SymbolicNameValue"
  - `p44`: "False"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion: FC7xxx UART User Manual; Origin; FLAGCHIP"
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId", "VendorId", "FC7xxx"]
- `anchors`:
  - `p45`: "Origin"
  - `p45`: "FLAGCHIP"
  - `p45`: "SymbolicNameValue"
  - `p45`: "False"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 UART Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 UART Usage Common Steps: FC7xxx UART User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["UART", "DMA", "FC7xxx", "Configure", "enable", "required", "port", "Guides", "Usage", "Basically"]
- `anchors`:
  - `p46`: "Chapter 4 Configuration Guides"
  - `p46`: "4.1"
  - `p46`: "UART Usage Common Steps"
  - `p46`: "Basically, the UART module can be configured by following the below 3 steps:"

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo"
- `content_types`: ["text", "image", "config", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo: FC7xxx UART User Manual; 3); Configure the functions of each serial port. The asynchronous mode can choose DMA or interrupt mode. The"
- `keywords`: ["UART", "FC7xxx", "DMA", "UartCallback", "GeneralConfiguration", "mode", "interrupt", "Configure", "each", "serial"]
- `anchors`:
  - `p47`: "3)"
  - `p47`: "Configure the functions of each serial port. The asynchronous mode can choose DMA or interrupt mode. The"
  - `p47`: "interrupt service function is configured in UartCallback in the GeneralConfiguration container."

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
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Rejected Requirement table-like panels; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Rejected Requirement table-like panels"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0005-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0005-001"
- `caption`: "Table-like content on page 5"
- `physical_pages`: `5`
- `printed_pages`: ["5"]
- `section_path`: "Chapter 1 UART Introduction / 1.1 Requirements"
- `bbox`: `None`
- `key_fields`: ["UART", "Uart", "FCUART", "FIFO", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `bbox`: `None`
- `key_fields`: ["UART", "define", "FC7xxx", "Uart_Types", "UART_E_UNINIT"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Uart_Types.h"
- `bbox`: `None`
- `key_fields`: ["UART", "define", "FC7xxx", "UART_E_INIT_FAILED", "UART_E_DEINIT_FAILED"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.1 Uart_BitCountPerCharType"
- `bbox`: `None`
- `key_fields`: ["UART", "define", "data", "bit", "Uart_BitCountPerCharType"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in Uart_GeneralTypes.h / 2.4.1.5 Uart_StatusType"
- `bbox`: `None`
- `key_fields`: ["UART", "Uart", "baud", "rate", "error"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in Uart_Types.h / 2.4.2.1 Uart_DirectionType"
- `bbox`: `None`
- `key_fields`: ["UART", "Uart", "Uart_Types", "Uart_DirectionType", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Uart_StateStructureType"
- `bbox`: `None`
- `key_fields`: ["UART", "volatile", "Uart_StateStructureType", "BaudRate", "Uart_StatusType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Uart_HwConfigType"
- `bbox`: `None`
- `key_fields`: ["UART", "Uart", "DMA", "bits", "channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 14; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 14"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `bbox`: `None`
- `key_fields`: ["UART", "CDD_Uart", "Uart", "Uart_ConfigType", "channel"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0016-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-001"
- `caption`: "Table-like content on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.2 void Uart_Deinit(void);"
- `bbox`: `None`
- `key_fields`: ["UART", "void", "Uart_Deinit", "FC7xxx", "Diagram"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `bbox`: `None`
- `key_fields`: ["UART", "Std_ReturnType", "Baudrate", "Channel", "Uart_SetBaudrate"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `bbox`: `None`
- `key_fields`: ["UART", "DataBuffer", "DataSize", "Channel", "TransType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `bbox`: `None`
- `key_fields`: ["UART", "Std_ReturnType", "Channel", "DataBuffer", "DataSize"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `bbox`: `None`
- `key_fields`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `bbox`: `None`
- `key_fields`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0022-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-001"
- `caption`: "Table-like content on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.3 Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `bbox`: `None`
- `key_fields`: ["UART", "const", "HwUnit", "Uart_StatusType", "TxDataBuff"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `bbox`: `None`
- `key_fields`: ["UART", "HwUnit", "const", "Uart_StatusType", "RxDataBuff"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `bbox`: `None`
- `key_fields`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.13 void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "HwUnit", "const", "number"]
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
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `bbox`: `None`
- `key_fields`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.1 LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "FCUART_Type", "eStatusType"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.6 LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.11 LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.16 LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.20 LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.25 LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "FCUART_Type"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.30 LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `bbox`: `None`
- `key_fields`: ["UART", "pUart", "LOCAL_INLINE", "FCUART_Type", "void"]
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
- `section_path`: "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Uart_RegOps.h / 2.9.1.35 LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `bbox`: `None`
- `key_fields`: ["UART", "FCUART", "pUart", "LOCAL_INLINE", "void"]
- `summary`: "Indexes table-like source content for Table-like content on page 34; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 34"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0036-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0036-001"
- `caption`: "Table-like content on page 36"
- `physical_pages`: `36`
- `printed_pages`: ["36"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `bbox`: `None`
- `key_fields`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 36; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 36"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0038-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0038-001"
- `caption`: "Table-like content on page 38"
- `physical_pages`: `38`
- `printed_pages`: ["38"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `bbox`: `None`
- `key_fields`: ["Uart", "UART", "Variable", "Properties", "Property"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `bbox`: `None`
- `key_fields`: ["Uart", "UART", "Screenshot", "ECUC", "Variable"]
- `summary`: "Indexes table-like source content for Table-like content on page 39; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 39"
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
- `keywords`: ["UART", "CDD_Uart", "LLD_Uart", "Uart_Types", "FC7xxx", "Uart_Version", "Uart_GeneralTypes", "Uart_StateStructureType"]
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
- `keywords`: ["UART", "FC7xxx", "Usage", "Channel", "Demo"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0007-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0007-001"
- `caption`: "Generated visual anchor: 2.1 Rejected Requirements"
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.1 Rejected Requirements; generated for retrieval because no formal figure number was detected."
- `keywords`: ["UART", "FC7xxx", "Rejected", "Structure"]
- `anchor`: "2.1 Rejected Requirements"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0013-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-001"
- `caption`: "Generated visual anchor: 2.6.1 Uart_StateStructureType"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Uart_StateStructureType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.1 Uart_StateStructureType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["UART", "volatile", "Uart_StateStructureType", "BaudRate", "Uart_StatusType", "Uart_UserConfigType", "FC7xxx", "TxBuff"]
- `anchor`: "2.6.1 Uart_StateStructureType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0014-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-001"
- `caption`: "Generated visual anchor: 2.6.3 Uart_HwConfigType"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Uart_HwConfigType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.3 Uart_HwConfigType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["UART", "Uart", "DMA", "bits", "channel", "Dma_InstanceType", "Uart_HwConfigType", "Uart_ChannelConfigType"]
- `anchor`: "2.6.3 Uart_HwConfigType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-001"
- `caption`: "Generated visual anchor: 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);; generated for retrieval because no formal figure number was detected."
- `keywords`: ["UART", "CDD_Uart", "Uart", "Uart_ConfigType", "channel", "const", "Uart_Init", "FC7xxx"]
- `anchor`: "2.7.1.1 void Uart_Init (const Uart_ConfigType* Config);"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Generated visual anchor: 2.7.1.2 void Uart_Deinit(void);"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.2 void Uart_Deinit(void);"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.7.1.2 void Uart_Deinit(void);; generated for retrieval because no formal figure number was detected."
- `keywords`: ["UART", "void", "Uart_Deinit", "FC7xxx", "Diagram", "Config", "Init", "Returns"]
- `anchor`: "2.7.1.2 void Uart_Deinit(void);"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `bbox`: `[116.35, 367.65, 534.42, 502.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Std_ReturnType", "Baudrate", "Channel", "Uart_SetBaudrate", "Uart_BaudrateType", "Uart_GetBaudrate", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-002"
- `caption`: "Image block near 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `bbox`: `[116.3, 641.14, 331.06, 697.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Std_ReturnType", "Baudrate", "Channel", "Uart_SetBaudrate", "Uart_BaudrateType", "Uart_GetBaudrate", "FC7xxx"]
- `anchor`: "Image block near 2.7.1.3 Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `bbox`: `[116.3, 167.49, 376.65, 274.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType; use the source PDF page for exact visual details."
- `keywords`: ["UART", "DataBuffer", "DataSize", "Channel", "TransType", "Std_ReturnType", "Uart_SetTransBuffer", "Uart_DirectionType"]
- `anchor`: "Image block near 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `bbox`: `[116.3, 486.33, 553.65, 659.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType; use the source PDF page for exact visual details."
- `keywords`: ["UART", "DataBuffer", "DataSize", "Channel", "TransType", "Std_ReturnType", "Uart_SetTransBuffer", "Uart_DirectionType"]
- `anchor`: "Image block near 2.7.1.5 void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `bbox`: `[116.3, 146.05, 553.65, 321.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "Uart_SyncReceive", "Uart_AbortTransfer", "Uart_DirectionType"]
- `anchor`: "Image block near 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-002"
- `caption`: "Image block near 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `bbox`: `[116.3, 487.08, 553.65, 743.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "Uart_SyncReceive", "Uart_AbortTransfer", "Uart_DirectionType"]
- `anchor`: "Image block near 2.7.1.7 Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `bbox`: `[116.3, 159.55, 553.65, 258.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "TransType", "Uart_AsyncSend"]
- `anchor`: "Image block near 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-002"
- `caption`: "Image block near 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `bbox`: `[116.3, 414.39, 553.65, 570.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "Std_ReturnType", "Channel", "DataBuffer", "DataSize", "TransType", "Uart_AsyncSend"]
- `anchor`: "Image block near 2.7.1.9 Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `bbox`: `[116.3, 36.99, 353.53, 130.89]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType", "const", "Returns", "VersionInfo"]
- `anchor`: "Image block near 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-002"
- `caption`: "Image block near 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_Uart.h / 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `bbox`: `[116.3, 286.93, 366.85, 316.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "LLD_Uart", "Uart", "HwUnit", "Uart_StatusType", "const", "Returns", "VersionInfo"]
- `anchor`: "Image block near 2.7.1.12 void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `bbox`: `[116.3, 36.99, 296.59, 156.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit); use the source PDF page for exact visual details."
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "RxDataBuff", "RxDataSize", "data", "Uart_LLD_AbortSendingData"]
- `anchor`: "Image block near 2.8.1.6 Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `bbox`: `[116.3, 216.8, 351.48, 370.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining); use the source PDF page for exact visual details."
- `keywords`: ["UART", "HwUnit", "const", "Uart_StatusType", "BytesRemaining", "DesiredBaudrate", "ClockFrequency", "Referenced"]
- `anchor`: "Image block near 2.8.1.9 Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-001"
- `caption`: "Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `bbox`: `[116.3, 36.99, 553.65, 388.89]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma", "FC7xxx", "Referenced", "DMA"]
- `anchor`: "Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-002"
- `caption`: "Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `bbox`: `[116.3, 538.43, 553.65, 564.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma", "FC7xxx", "Referenced", "DMA"]
- `anchor`: "Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-003"
- `caption`: "Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in LLD_Uart.h / 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `bbox`: `[116.3, 686.87, 553.65, 750.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);; use the source PDF page for exact visual details."
- `keywords`: ["UART", "HwUnit", "void", "Uart_LLD_CompleteSendUsingDma", "Uart_LLD_CompleteReceiveUsingDma", "FC7xxx", "Referenced", "DMA"]
- `anchor`: "Image block near 2.8.1.16 void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 2.10.1 Sychronous transmission"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Sychronous transmission"
- `bbox`: `[125.15, 116.24, 469.63, 358.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.1 Sychronous transmission; use the source PDF page for exact visual details."
- `keywords`: ["UART", "transmission", "called", "FC7xxx", "Uart_SyncSend", "interface", "Uart_SyncReceive", "Uart_GetStatus"]
- `anchor`: "Image block near 2.10.1 Sychronous transmission"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-002"
- `caption`: "Image block near 2.10.1 Sychronous transmission"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Sychronous transmission"
- `bbox`: `[165.65, 455.96, 429.0, 723.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.10.1 Sychronous transmission; use the source PDF page for exact visual details."
- `keywords`: ["UART", "transmission", "called", "FC7xxx", "Uart_SyncSend", "interface", "Uart_SyncReceive", "Uart_GetStatus"]
- `anchor`: "Image block near 2.10.1 Sychronous transmission"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `bbox`: `[116.3, 172.91, 404.25, 192.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.1 UartDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-002"
- `caption`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `bbox`: `[116.3, 375.8, 553.65, 425.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.1 UartDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-003"
- `caption`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `bbox`: `[116.3, 527.33, 479.77, 545.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.1 UartDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-004"
- `caption`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.1 UartDevErrorDetect"
- `bbox`: `[116.3, 679.28, 379.55, 707.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.1 UartDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "VariantPostBuild", "GeneralConfiguration"]
- `anchor`: "Image block near 3.1.2.1 UartDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `bbox`: `[116.3, 95.72, 553.65, 119.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.3 UartMulticoreEnable; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `bbox`: `[116.3, 268.71, 553.65, 288.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.3 UartMulticoreEnable; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-003"
- `caption`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `bbox`: `[116.3, 421.96, 522.31, 449.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.3 UartMulticoreEnable; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-004"
- `caption`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `bbox`: `[116.3, 583.97, 359.73, 608.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.3 UartMulticoreEnable; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-005"
- `caption`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.2 GeneralConfiguration / 3.1.2.3 UartMulticoreEnable"
- `bbox`: `[116.3, 758.41, 553.65, 785.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.2.3 UartMulticoreEnable; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "Variable", "UartTimeoutDuration", "UartMulticoreEnable", "Properties", "Property"]
- `anchor`: "Image block near 3.1.2.3 UartMulticoreEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 3.1.4.1.1 UartChannel"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `bbox`: `[116.3, 169.99, 553.65, 194.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.1 UartChannel; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "Image block near 3.1.4.1.1 UartChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-002"
- `caption`: "Image block near 3.1.4.1.1 UartChannel"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `bbox`: `[116.3, 296.46, 385.95, 315.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.1 UartChannel; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "Image block near 3.1.4.1.1 UartChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-003"
- `caption`: "Image block near 3.1.4.1.1 UartChannel"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `bbox`: `[116.3, 436.11, 398.98, 489.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.1 UartChannel; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "Image block near 3.1.4.1.1 UartChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-004"
- `caption`: "Image block near 3.1.4.1.1 UartChannel"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `bbox`: `[116.3, 625.68, 553.65, 647.48]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.1 UartChannel; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "Image block near 3.1.4.1.1 UartChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-005"
- `caption`: "Image block near 3.1.4.1.1 UartChannel"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel"
- `bbox`: `[116.3, 749.81, 553.65, 773.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.1 UartChannel; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Variable", "Properties", "Property", "Screenshot", "UartCallback", "ReRecive"]
- `anchor`: "Image block near 3.1.4.1.1 UartChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 3.1.4.1.2 UartChannelId"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `bbox`: `[116.3, 122.18, 419.36, 147.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.2 UartChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "Image block near 3.1.4.1.2 UartChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-002"
- `caption`: "Image block near 3.1.4.1.2 UartChannelId"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `bbox`: `[116.3, 296.62, 553.65, 314.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.2 UartChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "Image block near 3.1.4.1.2 UartChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-003"
- `caption`: "Image block near 3.1.4.1.2 UartChannelId"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `bbox`: `[116.3, 463.06, 491.88, 485.86]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.2 UartChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "Image block near 3.1.4.1.2 UartChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-004"
- `caption`: "Image block near 3.1.4.1.2 UartChannelId"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `bbox`: `[116.3, 621.44, 421.33, 663.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.2 UartChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "Image block near 3.1.4.1.2 UartChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-005"
- `caption`: "Image block near 3.1.4.1.2 UartChannelId"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.4 UartGlobalConfig / 3.1.4.1.1 UartChannel / 3.1.4.1.2 UartChannelId"
- `bbox`: `[116.3, 765.06, 553.65, 785.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.4.1.2 UartChannelId; use the source PDF page for exact visual details."
- `keywords`: ["Uart", "UART", "Screenshot", "ECUC", "Variable", "UartChannelId", "Properties", "Property"]
- `anchor`: "Image block near 3.1.4.1.2 UartChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 3.1.5.2 DesireBaudrate"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate"
- `bbox`: `[116.3, 216.3, 553.65, 238.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.2 DesireBaudrate; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx"]
- `anchor`: "Image block near 3.1.5.2 DesireBaudrate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 3.1.5.2 DesireBaudrate"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate"
- `bbox`: `[116.3, 603.88, 553.65, 625.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.2 DesireBaudrate; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx"]
- `anchor`: "Image block near 3.1.5.2 DesireBaudrate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-003"
- `caption`: "Image block near 3.1.5.2 DesireBaudrate"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.2 DesireBaudrate"
- `bbox`: `[116.3, 758.88, 553.65, 781.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.2 DesireBaudrate; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "FCUART_1", "DesireBaudrate", "UART_BAUDRATE_9600", "CustomBaudrateMantissa", "CustomBaudrateDivisor", "FC7xxx"]
- `anchor`: "Image block near 3.1.5.2 DesireBaudrate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `bbox`: `[116.3, 169.99, 553.65, 189.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.5 CustomBaudrateValue; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-002"
- `caption`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `bbox`: `[116.3, 323.59, 553.65, 342.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.5 CustomBaudrateValue; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-003"
- `caption`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `bbox`: `[116.3, 476.6, 553.65, 494.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.5 CustomBaudrateValue; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-004"
- `caption`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `bbox`: `[116.3, 608.29, 553.65, 623.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.5 CustomBaudrateValue; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-005"
- `caption`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.5 CustomBaudrateValue"
- `bbox`: `[116.3, 752.93, 553.65, 775.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.5 CustomBaudrateValue; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Screenshot", "DMA", "CustomBaudrateValue", "UartInteruptDmaMethod"]
- `anchor`: "Image block near 3.1.5.5 CustomBaudrateValue"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 3.1.5.10 UartStopBitNumber"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `bbox`: `[116.3, 169.99, 553.65, 190.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.10 UartStopBitNumber; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "Image block near 3.1.5.10 UartStopBitNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-002"
- `caption`: "Image block near 3.1.5.10 UartStopBitNumber"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `bbox`: `[116.3, 324.49, 553.65, 348.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.10 UartStopBitNumber; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "Image block near 3.1.5.10 UartStopBitNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-003"
- `caption`: "Image block near 3.1.5.10 UartStopBitNumber"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `bbox`: `[116.3, 528.31, 487.81, 557.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.10 UartStopBitNumber; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "Image block near 3.1.5.10 UartStopBitNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-004"
- `caption`: "Image block near 3.1.5.10 UartStopBitNumber"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.10 UartStopBitNumber"
- `bbox`: `[116.3, 691.81, 351.2, 720.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.10 UartStopBitNumber; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "Properties", "Property", "Default", "UART_DISABLED_PARITY", "UartStopBitNumber", "Screenshot"]
- `anchor`: "Image block near 3.1.5.10 UartStopBitNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `bbox`: `[116.3, 105.74, 551.97, 131.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.14 UartTimeoutEnable; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-002"
- `caption`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `bbox`: `[116.3, 265.44, 553.65, 285.34]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.14 UartTimeoutEnable; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-003"
- `caption`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `bbox`: `[116.3, 544.92, 444.8, 604.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.14 UartTimeoutEnable; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-004"
- `caption`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.5 ModuleConfiguration / 3.1.5.14 UartTimeoutEnable"
- `bbox`: `[116.3, 721.99, 513.8, 748.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.5.14 UartTimeoutEnable; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Uart", "Variable", "UartTimeoutEnable", "Screenshot", "Properties", "Property", "UartIdleNumber"]
- `anchor`: "Image block near 3.1.5.14 UartTimeoutEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-001"
- `caption`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 169.49, 510.8, 191.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-002"
- `caption`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 356.87, 519.8, 382.37]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-003"
- `caption`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 547.25, 516.66, 569.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-004"
- `caption`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 734.63, 523.42, 757.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "Variable", "SymbolicNameValue", "Integer_Label", "Origin", "ArReleaseMinorVersion", "version", "number"]
- `anchor`: "Image block near 3.1.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 3.1.6.6 SwPatchVersion"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion"
- `bbox`: `[116.3, 169.49, 512.07, 189.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "Image block near 3.1.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-002"
- `caption`: "Image block near 3.1.6.6 SwPatchVersion"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion"
- `bbox`: `[116.3, 339.13, 510.8, 361.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "Image block near 3.1.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-003"
- `caption`: "Image block near 3.1.6.6 SwPatchVersion"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Containers and Variables / 3.1.6 CommonPublishedInformation / 3.1.6.6 SwPatchVersion"
- `bbox`: `[116.3, 511.51, 483.6, 526.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["UART", "SymbolicNameValue", "Variable", "Integer_Label", "Origin", "Default", "SwPatchVersion", "ModuleId"]
- `anchor`: "Image block near 3.1.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-001"
- `caption`: "Image block near 4.1 UART Usage Common Steps"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 UART Usage Common Steps"
- `bbox`: `[36.0, 230.58, 559.3, 486.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 UART Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["UART", "DMA", "FC7xxx", "Configure", "enable", "required", "port", "Guides"]
- `anchor`: "Image block near 4.1 UART Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-002"
- `caption`: "Image block near 4.1 UART Usage Common Steps"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 UART Usage Common Steps"
- `bbox`: `[36.0, 514.52, 559.3, 713.42]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 UART Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["UART", "DMA", "FC7xxx", "Configure", "enable", "required", "port", "Guides"]
- `anchor`: "Image block near 4.1 UART Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-001"
- `caption`: "Image block near 4.2 UART Channel Demo"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo"
- `bbox`: `[36.0, 36.49, 559.3, 287.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 UART Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["UART", "FC7xxx", "DMA", "UartCallback", "GeneralConfiguration", "mode", "interrupt", "Configure"]
- `anchor`: "Image block near 4.2 UART Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-002"
- `caption`: "Image block near 4.2 UART Channel Demo"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo"
- `bbox`: `[36.0, 330.26, 559.3, 581.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 UART Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["UART", "FC7xxx", "DMA", "UartCallback", "GeneralConfiguration", "mode", "interrupt", "Configure"]
- `anchor`: "Image block near 4.2 UART Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-003"
- `caption`: "Image block near 4.2 UART Channel Demo"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 UART Channel Demo"
- `bbox`: `[36.0, 587.16, 559.3, 725.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 UART Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["UART", "FC7xxx", "DMA", "UartCallback", "GeneralConfiguration", "mode", "interrupt", "Configure"]
- `anchor`: "Image block near 4.2 UART Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-UART-ABORTTRANSFER
- `name`: "Uart_AbortTransfer"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,19,23,24`
- `brief`: "api index entry for `Uart_AbortTransfer`."
- `anchors`:
  - `p9`: "API service ID for Uart_AbortTransfer() function."
  - `p19`: "Std_ReturnType Uart_AbortTransfer(uint8 Channel, Uart_DirectionType TransType);"
  - `p23`: "Uart_AbortTransfer()"
  - `p24`: "Uart_AbortTransfer()"
- `aliases`: []

### API-STRING
- `name`: "String"
- `type`: `api`
- `primary_page`: `40`
- `physical_pages`: `40,41,42,43`
- `brief`: "api index entry for `String`."
- `anchors`:
  - `p40`: "Variable: String(Range)"
  - `p41`: "Variable: String(Range)"
  - `p42`: "Variable: String(Range)"
  - `p43`: "Variable: String(Range)"
- `aliases`: []

### API-UART-GETVERSIONINFO
- `name`: "Uart_GetVersionInfo"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,21,37`
- `brief`: "api index entry for `Uart_GetVersionInfo`."
- `anchors`:
  - `p10`: "API service ID for Uart_GetVersionInfo() function."
  - `p21`: "void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
  - `p37`: "Switches the Uart_GetVersionInfo function ON or OFF."
- `aliases`: []

### API-UART-SYNCRECEIVE
- `name`: "Uart_SyncReceive"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19,23,35`
- `brief`: "api index entry for `Uart_SyncReceive`."
- `anchors`:
  - `p19`: "Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
  - `p23`: "Uart_SyncReceive()"
  - `p35`: "send data, and the Uart_SyncReceive interface is called to receive data."
- `aliases`: []

### API-UART-SYNCSEND
- `name`: "Uart_SyncSend"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18,22,35`
- `brief`: "api index entry for `Uart_SyncSend`."
- `anchors`:
  - `p18`: "Std_ReturnType Uart_SyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32 Timeout);"
  - `p22`: "Uart_SyncSend()"
  - `p35`: "The following figure shows synchronous UART transmission. After initialization, the Uart_SyncSend interface is called to"
- `aliases`: []

### API-UART-ASYNCRECEIVE
- `name`: "Uart_AsyncReceive"
- `type`: `api`
- `primary_page`: `2`
- `physical_pages`: `2,20,24`
- `brief`: "api index entry for `Uart_AsyncReceive`."
- `anchors`:
  - `p2`: "Change Uart_AsyncReceive API"
  - `p20`: "Std_ReturnType Uart_AsyncReceive (uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
  - `p24`: "Uart_AsyncReceive()"
- `aliases`: []

### API-UART-ASYNCSEND
- `name`: "Uart_AsyncSend"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20,22`
- `brief`: "api index entry for `Uart_AsyncSend`."
- `anchors`:
  - `p20`: "Std_ReturnType Uart_AsyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize);"
  - `p22`: "Uart_AsyncSend()"
- `aliases`: []

### API-UART-SETTRANSBUFFER
- `name`: "Uart_SetTransBuffer"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18,25`
- `brief`: "api index entry for `Uart_SetTransBuffer`."
- `anchors`:
  - `p18`: "void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
  - `p25`: "Uart_SetTransBuffer()"
- `aliases`: []

### API-UART-DEINIT
- `name`: "Uart_Deinit"
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: `16,21`
- `brief`: "api index entry for `Uart_Deinit`."
- `anchors`:
  - `p16`: "void Uart_Deinit(void);"
  - `p21`: "Uart_Deinit()"
- `aliases`: []

### API-UART-GETBAUDRATE
- `name`: "Uart_GetBaudrate"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17,25`
- `brief`: "api index entry for `Uart_GetBaudrate`."
- `anchors`:
  - `p17`: "Std_ReturnType Uart_GetBaudrate(uint8 Channel, uint32 *Baudrate);"
  - `p25`: "Uart_GetBaudrate()"
- `aliases`: []

### API-UART-INIT
- `name`: "Uart_Init"
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15,21`
- `brief`: "api index entry for `Uart_Init`."
- `anchors`:
  - `p15`: "void Uart_Init (const Uart_ConfigType* Config);"
  - `p21`: "Uart_Init()"
- `aliases`: []

### API-UART-SETBAUDRATE
- `name`: "Uart_SetBaudrate"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17,24`
- `brief`: "api index entry for `Uart_SetBaudrate`."
- `anchors`:
  - `p17`: "Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
  - `p24`: "Uart_SetBaudrate()"
- `aliases`: []

### API-UART-GETSTATUS
- `name`: "Uart_GetStatus"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20,35`
- `brief`: "api index entry for `Uart_GetStatus`."
- `anchors`:
  - `p20`: "Uart_StatusType Uart_GetStatus(uint Channel, uint32 *RemainingBytesPointer, Uart_DirectionType"
  - `p35`: "interface is called, and Uart_GetStatus is called to obtain the current status. When the status is UART_STATUS_SUCCESS, it"
- `aliases`: []

### API-INTERRUPT
- `name`: "Interrupt"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,28`
- `brief`: "api index entry for `Interrupt`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
  - `p28`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLEHWFLOWCONTROL
- `name`: "FCUART_HWA_EnableHwFlowControl"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_EnableHwFlowControl`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_EnableHwFlowControl(FCUART_Type *pUart);"
- `aliases`: []

### API-FCUART-HWA-ENABLETRANSMITDMA
- `name`: "FCUART_HWA_EnableTransmitDMA"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_EnableTransmitDMA`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-CLEARSTATUS
- `name`: "FCUART_HWA_ClearStatus"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_ClearStatus`."
- `anchors`:
  - `p27`: "LOCAL_INUARTE void FCUART_HWA_ClearStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### API-FCUART-HWA-DISABLEERRORINTERRUPT
- `name`: "FCUART_HWA_DisableErrorInterrupt"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_DisableErrorInterrupt`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLERECEIVEDMA
- `name`: "FCUART_HWA_DisableReceiveDMA"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_DisableReceiveDMA`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveDMA(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLERECEIVEINTERRUPT
- `name`: "FCUART_HWA_DisableReceiveInterrupt"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_DisableReceiveInterrupt`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void FCUART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLETRANSMITCOMPLETEINTERRUPT
- `name`: "FCUART_HWA_DisableTransmitCompleteInterrupt"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_DisableTransmitCompleteInterrupt`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-DISABLETRANSMITINTERRUPT
- `name`: "FCUART_HWA_DisableTransmitInterrupt"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_DisableTransmitInterrupt`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLEBOTHEDGESAMPLING
- `name`: "FCUART_HWA_EnableBothEdgeSampling"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_EnableBothEdgeSampling`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_EnableBothEdgeSampling(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLEERRORINTERRUPT
- `name`: "FCUART_HWA_EnableErrorInterrupt"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_EnableErrorInterrupt`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void FCUART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLELOOPMODE
- `name`: "FCUART_HWA_EnableLoopMode"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_EnableLoopMode`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `aliases`: []

### API-FCUART-HWA-ENABLERECEIVEDMA
- `name`: "FCUART_HWA_EnableReceiveDMA"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_EnableReceiveDMA`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveDMA(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLERECEIVEINTERRUPT
- `name`: "FCUART_HWA_EnableReceiveInterrupt"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_EnableReceiveInterrupt`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLETRANSMITCOMPLETEINTERRUPT
- `name`: "FCUART_HWA_EnableTransmitCompleteInterrupt"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_EnableTransmitCompleteInterrupt`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-ENABLETRANSMITINTERRUPT
- `name`: "FCUART_HWA_EnableTransmitInterrupt"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_EnableTransmitInterrupt`."
- `anchors`:
  - `p28`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-FLUSHRXBUFFER
- `name`: "FCUART_HWA_FlushRxBuffer"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_FlushRxBuffer`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_FlushRxBuffer(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-FLUSHTXBUFFER
- `name`: "FCUART_HWA_FlushTxBuffer"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_FlushTxBuffer`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_FlushTxBuffer(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETCTRLREG
- `name`: "FCUART_HWA_GetCtrlReg"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "api index entry for `FCUART_HWA_GetCtrlReg`."
- `anchors`:
  - `p28`: "LOCAL_INLINE uint32 FCUART_HWA_GetCtrlReg(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-GETDATA
- `name`: "FCUART_HWA_GetData"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_GetData`."
- `anchors`:
  - `p32`: "LOCAL_INLINE uint8 FCUART_HWA_GetData(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETR8T9
- `name`: "FCUART_HWA_GetR8T9"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_GetR8T9`."
- `anchors`:
  - `p32`: "LOCAL_INLINE uint8 FCUART_HWA_GetR8T9 (FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETR9T8
- `name`: "FCUART_HWA_GetR9T8"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_GetR9T8`."
- `anchors`:
  - `p33`: "LOCAL_INLINE uint8 FCUART_HWA_GetR9T8(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-GETSTATUS
- `name`: "FCUART_HWA_GetStatus"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `FCUART_HWA_GetStatus`."
- `anchors`:
  - `p27`: "LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### API-FCUART-HWA-SETBAUD
- `name`: "FCUART_HWA_SetBaud"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_SetBaud`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-HWA-SETBAUDRATEDIVISOR
- `name`: "FCUART_HWA_SetBaudRateDivisor"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_SetBaudRateDivisor`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_SetBaudRateDivisor(FCUART_Type *pUart, uint32 baudRateDivisor)"
- `aliases`: []

### API-FCUART-HWA-SETBITCOUNTPERCHAR
- `name`: "FCUART_HWA_SetBitCountPerChar"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_SetBitCountPerChar`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `aliases`: []

### API-FCUART-HWA-SETDATA
- `name`: "FCUART_HWA_SetData"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_SetData`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)"
- `aliases`: []

### API-FCUART-HWA-SETOVERSAMPLINGRATIO
- `name`: "FCUART_HWA_SetOversamplingRatio"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `FCUART_HWA_SetOversamplingRatio`."
- `anchors`:
  - `p29`: "LOCAL_INLINE void FCUART_HWA_SetOversamplingRatio (FCUART_Type *pUart, uint32"
- `aliases`: []

### API-FCUART-HWA-SETPARITY
- `name`: "FCUART_HWA_SetParity"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_SetParity`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetParity(FCUART_Type *pUart, Uart_ParityModeType eParityType)"
- `aliases`: []

### API-FCUART-HWA-SETR8T9
- `name`: "FCUART_HWA_SetR8T9"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `FCUART_HWA_SetR8T9`."
- `anchors`:
  - `p32`: "LOCAL_INLINE void FCUART_HWA_SetR8T9(FCUART_Type *pUart, uint8 u8Data)"
- `aliases`: []

### API-FCUART-HWA-SETR9T8
- `name`: "FCUART_HWA_SetR9T8"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_SetR9T8`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)"
- `aliases`: []

### API-FCUART-HWA-SETRXTRANSFER
- `name`: "FCUART_HWA_SetRxTransfer"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_SetRxTransfer`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetRxTransfer(FCUART_Type *pUart, boolean bEnable);"
- `aliases`: []

### API-FCUART-HWA-SETSTOPBIT
- `name`: "FCUART_HWA_SetStopBit"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_SetStopBit`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetStopBit(FCUART_Type *pUart, Uart_StopBitCountType eStopBit)"
- `aliases`: []

### API-FCUART-HWA-SETTXTRANSFER
- `name`: "FCUART_HWA_SetTxTransfer"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_SetTxTransfer`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SetTxTransfer(FCUART_Type *pUart, boolean bEnable);"
- `aliases`: []

### API-FCUART-HWA-SOFTWARERESET
- `name`: "FCUART_HWA_SoftwareReset"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `FCUART_HWA_SoftwareReset`."
- `anchors`:
  - `p33`: "LOCAL_INLINE void FCUART_HWA_SoftwareReset(FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-HWA-WRITECLEARSTAT
- `name`: "FCUART_HWA_WriteClearSTAT"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `FCUART_HWA_WriteClearSTAT`."
- `anchors`:
  - `p30`: "LOCAL_INLINE void FCUART_HWA_WriteClearSTAT(FCUART_Type *pUart, uint32 u32Value)"
- `aliases`: []

### API-FCUART-UART-HWA-SETIDLECONFIG
- `name`: "FCUART_UART_HWA_SetIdleConfig"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_UART_HWA_SetIdleConfig`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_UART_HWA_SetIdleConfig(FCUART_Type *pUart, Uart_IdleCharNumType"
- `aliases`: []

### API-UART-LLD-ABORTRECEIVINGDATA
- `name`: "Uart_LLD_AbortReceivingData"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Uart_LLD_AbortReceivingData`."
- `anchors`:
  - `p24`: "Uart_StatusType Uart_LLD_AbortReceivingData (const uint8 HwUnit );"
- `aliases`: []

### API-UART-LLD-ABORTSENDINGDATA
- `name`: "Uart_LLD_AbortSendingData"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `Uart_LLD_AbortSendingData`."
- `anchors`:
  - `p23`: "Uart_StatusType Uart_LLD_AbortSendingData (const uint8 HwUnit)"
- `aliases`: []

### API-UART-LLD-ASYNCRECEIVE
- `name`: "Uart_LLD_AsyncReceive"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `Uart_LLD_AsyncReceive`."
- `anchors`:
  - `p23`: "Uart_StatusType Uart_LLD_AsyncReceive(const uint8 HwUnit, uint8 * RxDataBuff, const uint32"
- `aliases`: []

### API-UART-LLD-ASYNCSEND
- `name`: "Uart_LLD_AsyncSend"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `Uart_LLD_AsyncSend`."
- `anchors`:
  - `p22`: "Uart_StatusType Uart_LLD_AsyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `aliases`: []

### API-UART-LLD-COMPLETERECEIVEUSINGDMA
- `name`: "Uart_LLD_CompleteReceiveUsingDma"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Uart_LLD_CompleteReceiveUsingDma`."
- `anchors`:
  - `p26`: "void Uart_LLD_CompleteReceiveUsingDma(uint8 HwUnit);"
- `aliases`: []

### API-UART-LLD-COMPLETESENDUSINGDMA
- `name`: "Uart_LLD_CompleteSendUsingDma"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Uart_LLD_CompleteSendUsingDma`."
- `anchors`:
  - `p26`: "void Uart_LLD_CompleteSendUsingDma( uint8 HwUnit);"
- `aliases`: []

### API-UART-LLD-DEINIT
- `name`: "Uart_LLD_Deinit"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `Uart_LLD_Deinit`."
- `anchors`:
  - `p21`: "Uart_StatusType Uart_LLD_Deinit (const uint8 HwUnit)"
- `aliases`: []

### API-UART-LLD-GETBAUDRATE
- `name`: "Uart_LLD_GetBaudRate"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Uart_LLD_GetBaudRate`."
- `anchors`:
  - `p24`: "void Uart_LLD_GetBaudRate (const uint8 HwUnit, uint32 * ConfiguredBaudRate);"
- `aliases`: []

### API-UART-LLD-GETRECEIVESTATUS
- `name`: "Uart_LLD_GetReceiveStatus"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Uart_LLD_GetReceiveStatus`."
- `anchors`:
  - `p24`: "Uart_StatusType Uart_LLD_GetReceiveStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `aliases`: []

### API-UART-LLD-GETTRANSMITSTATUS
- `name`: "Uart_LLD_GetTransmitStatus"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `Uart_LLD_GetTransmitStatus`."
- `anchors`:
  - `p22`: "Uart_StatusType Uart_LLD_GetTransmitStatus (const uint8 HwUnit, uint32 *BytesRemaining)"
- `aliases`: []

### API-UART-LLD-INIT
- `name`: "Uart_LLD_Init"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `Uart_LLD_Init`."
- `anchors`:
  - `p21`: "void Uart_LLD_Init (const uint8 HwUnit, const Uart_UserConfigType *UserConfig)"
- `aliases`: []

### API-UART-LLD-IRQHANDLER
- `name`: "Uart_LLD_IrqHandler"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Uart_LLD_IrqHandler`."
- `anchors`:
  - `p25`: "void Uart_LLD_IrqHandler (const uint8 HwUnit);"
- `aliases`: []

### API-UART-LLD-SETBAUDRATE
- `name`: "Uart_LLD_SetBaudRate"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Uart_LLD_SetBaudRate`."
- `anchors`:
  - `p24`: "Uart_StatusType Uart_LLD_SetBaudRate (const uint8 HwUnit, const Uart_BaudrateType"
- `aliases`: []

### API-UART-LLD-SETRXBUFFER
- `name`: "Uart_LLD_SetRxBuffer"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Uart_LLD_SetRxBuffer`."
- `anchors`:
  - `p25`: "void Uart_LLD_SetRxBuffer(const uint8 HwUnit, uint8 * RxDataBuff, const uint32 RxDataSize);"
- `aliases`: []

### API-UART-LLD-SETTXBUFFER
- `name`: "Uart_LLD_SetTxBuffer"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Uart_LLD_SetTxBuffer`."
- `anchors`:
  - `p25`: "void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `aliases`: []

### API-UART-LLD-SYNCRECEIVE
- `name`: "Uart_LLD_SyncReceive"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `Uart_LLD_SyncReceive`."
- `anchors`:
  - `p23`: "Uart_StatusType Uart_LLD_SyncReceive (const uint8 HwUnit, uint8 *RxDataBuff, const uint32 RxDataSize,"
- `aliases`: []

### API-UART-LLD-SYNCSEND
- `name`: "Uart_LLD_SyncSend"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `Uart_LLD_SyncSend`."
- `anchors`:
  - `p22`: "Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `aliases`: []

### API-FCUART-HWA-DISABLEHWFLOWCONTROL
- `name`: "FCUART_HWA_DisableHwFlowControl"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_HWA_DisableHwFlowControl`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_DisableHwFlowControl(UART_Type *pUart);"
- `aliases`: []

### API-FCUART-HWA-DISABLETRANSMITDMA
- `name`: "FCUART_HWA_DisableTransmitDMA"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `FCUART_HWA_DisableTransmitDMA`."
- `anchors`:
  - `p31`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitDMA (FCUART_Type *pUart)"
- `aliases`: []

### API-FCUART-UART-HWA-DISABLEIDLEINTERRUPT
- `name`: "FCUART_UART_HWA_DisableIdleInterrupt"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_UART_HWA_DisableIdleInterrupt`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_UART_HWA_DisableIdleInterrupt(FCUART_Type *pUart);"
- `aliases`: []

### API-FCUART-UART-HWA-ENABLEIDLEINTERRUPT
- `name`: "FCUART_UART_HWA_EnableIdleInterrupt"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `FCUART_UART_HWA_EnableIdleInterrupt`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_UART_HWA_EnableIdleInterrupt(FCUART_Type *pUart);"
- `aliases`: []

### API-UART-ASYNCRECEIVE-2
- `name`: "UART_AsyncReceive"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_AsyncReceive`."
- `anchors`:
  - `p9`: "API service ID for UART_AsyncReceive() function."
- `aliases`: []

### API-UART-ASYNCSEND-2
- `name`: "UART_AsyncSend"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_AsyncSend`."
- `anchors`:
  - `p9`: "API service ID for UART_AsyncSend() function."
- `aliases`: []

### API-UART-DEINIT-2
- `name`: "UART_DeInit"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_DeInit`."
- `anchors`:
  - `p9`: "API service ID for UART_DeInit() function."
- `aliases`: []

### API-UART-GETBAUDRATE-2
- `name`: "UART_GetBaudrate"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_GetBaudrate`."
- `anchors`:
  - `p9`: "API service ID for UART_GetBaudrate() function."
- `aliases`: []

### API-UART-GETSTATUS-2
- `name`: "UART_GetStatus"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_GetStatus`."
- `anchors`:
  - `p9`: "API service ID for UART_GetStatus() function."
- `aliases`: []

### API-UART-INIT-2
- `name`: "UART_Init"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_Init`."
- `anchors`:
  - `p9`: "API service ID for UART_Init() function"
- `aliases`: []

### API-UART-SETBAUDRATE-2
- `name`: "UART_SetBaudrate"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_SetBaudrate`."
- `anchors`:
  - `p9`: "API service ID for UART_SetBaudrate() function."
- `aliases`: []

### API-UART-SETTRANSBUFFER-2
- `name`: "UART_SetTransBuffer"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `UART_SetTransBuffer`."
- `anchors`:
  - `p10`: "API service ID for UART_SetTransBuffer() function."
- `aliases`: []

### API-UART-SYNCRECEIVE-2
- `name`: "UART_SyncReceive"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_SyncReceive`."
- `anchors`:
  - `p9`: "API service ID for UART_SyncReceive() function."
- `aliases`: []

### API-UART-SYNCSEND-2
- `name`: "UART_SyncSend"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `UART_SyncSend`."
- `anchors`:
  - `p9`: "API service ID for UART_SyncSend() function."
- `aliases`: []

### API-CONTROLLER
- `name`: "Controller"
- `type`: `api`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "api index entry for `Controller`."
- `anchors`:
  - `p38`: "This container contains the configuration (parameters) of the Uart Controller(s)."
- `aliases`: []

### API-INTEGER
- `name`: "Integer"
- `type`: `api`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "api index entry for `Integer`."
- `anchors`:
  - `p39`: "Integer(Range)"
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

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,43`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p3`: "CommonPublishedInformation ................................................................................................................…"
  - `p43`: "CommonPublishedInformation"
- `aliases`: []

### CFG-UARTCHANNELID
- `name`: "UartChannelId"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14,39`
- `brief`: "config index entry for `UartChannelId`."
- `anchors`:
  - `p14`: "UartChannelId"
  - `p39`: "UartChannelId"
- `aliases`: []

### CFG-UARTGLOBALCONFIG
- `name`: "UartGlobalConfig"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,38`
- `brief`: "config index entry for `UartGlobalConfig`."
- `anchors`:
  - `p3`: "UartGlobalConfig ..........................................................................................................................…"
  - `p38`: "UartGlobalConfig"
- `aliases`: []

### CFG-UARTHWCHANNEL
- `name`: "UartHwChannel"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14,39`
- `brief`: "config index entry for `UartHwChannel`."
- `anchors`:
  - `p14`: "uint32 UartHwChannel"
  - `p39`: "UartHwChannel"
- `aliases`: []

### CFG-UART-GENERALTYPES
- `name`: "Uart_GeneralTypes"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "config index entry for `Uart_GeneralTypes`."
- `anchors`:
  - `p3`: "Enums in Uart_GeneralTypes.h ..............................................................................................................…"
  - `p10`: "Enums in Uart_GeneralTypes.h"
- `aliases`: []

### CFG-UARTCHANNEL
- `name`: "UartChannel"
- `type`: `config`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "config index entry for `UartChannel`."
- `anchors`:
  - `p38`: "UartChannel"
- `aliases`: []

### CFG-UARTCHANNELECUCPARTITIONREF
- `name`: "UartChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "config index entry for `UartChannelEcucPartitionRef`."
- `anchors`:
  - `p39`: "UartChannelEcucPartitionRef"
- `aliases`: []

### CFG-UARTDMARXCHANNELREF
- `name`: "UartDmaRxChannelRef"
- `type`: `config`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "config index entry for `UartDmaRxChannelRef`."
- `anchors`:
  - `p41`: "UartDmaRxChannelRef"
- `aliases`: []

### CFG-UARTDMATXCHANNELREF
- `name`: "UartDmaTxChannelRef"
- `type`: `config`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "config index entry for `UartDmaTxChannelRef`."
- `anchors`:
  - `p41`: "UartDmaTxChannelRef"
- `aliases`: []

### CFG-MCUCLOCKSETTINGCONFIG
- `name`: "McuClockSettingConfig"
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "config index entry for `McuClockSettingConfig`."
- `anchors`:
  - `p39`: "uration/McuClockSettingConfig/McuClockReferencePoint"
- `aliases`: []

### CFG-MCUMODULECONFIG
- `name`: "McuModuleConfig"
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "config index entry for `McuModuleConfig`."
- `anchors`:
  - `p39`: "ASPathDataOfSchema:/AUTOSAR/EcucDefs/Mcu/McuModuleConfig"
- `aliases`: []

### CFG-RXDMACHANNEL
- `name`: "RxDMAChannel"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `RxDMAChannel`."
- `anchors`:
  - `p14`: "uint32 RxDMAChannel"
- `aliases`: []

### CFG-TXDMACHANNEL
- `name`: "TxDMAChannel"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `TxDMAChannel`."
- `anchors`:
  - `p14`: "uint32 TxDMAChannel"
- `aliases`: []

### CFG-UARTCHANNELCONFIG
- `name`: "UartChannelConfig"
- `type`: `config`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "config index entry for `UartChannelConfig`."
- `anchors`:
  - `p15`: "const Uart_HwConfigType * UartChannelConfig"
- `aliases`: []

### MACRO-LOCAL-INLINE
- `name`: "LOCAL_INLINE"
- `type`: `macro`
- `primary_page`: `27`
- `physical_pages`: `27,28,29,30,31,32,33,34`
- `brief`: "macro index entry for `LOCAL_INLINE`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void FCUART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)"
  - `p28`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `aliases`: []

### MACRO-UART-RECEIVE
- `name`: "UART_RECEIVE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,20,21`
- `brief`: "macro index entry for `UART_RECEIVE`."
- `anchors`:
  - `p12`: "UART_RECEIVE"
  - `p20`: "UART_RECEIVE."
  - `p21`: "The type of trasfer in discussion (UART_SEND or UART_RECEIVE)."
- `aliases`: []

### MACRO-UART-SEND
- `name`: "UART_SEND"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,20,21`
- `brief`: "macro index entry for `UART_SEND`."
- `anchors`:
  - `p12`: "UART_SEND"
  - `p20`: "Type of the transfer to be aborted. It can be either UART_SEND or"
  - `p21`: "The type of trasfer in discussion (UART_SEND or UART_RECEIVE)."
- `aliases`: []

### MACRO-UART-8-BITS-PER-CHAR
- `name`: "UART_8_BITS_PER_CHAR"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_8_BITS_PER_CHAR`."
- `anchors`:
  - `p10`: "UART_8_BITS_PER_CHAR"
  - `p42`: "UART_8_BITS_PER_CHAR"
- `aliases`: []

### MACRO-UART-BAUDRATE-9600
- `name`: "UART_BAUDRATE_9600"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_9600`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_9600"
  - `p40`: "UART_BAUDRATE_9600"
- `aliases`: []

### MACRO-UART-DISABLED-PARITY
- `name`: "UART_DISABLED_PARITY"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_DISABLED_PARITY`."
- `anchors`:
  - `p10`: "UART_DISABLED_PARITY"
  - `p42`: "UART_DISABLED_PARITY"
- `aliases`: []

### MACRO-UART-ONE-STOP-BIT
- `name`: "UART_ONE_STOP_BIT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_ONE_STOP_BIT`."
- `anchors`:
  - `p10`: "UART_ONE_STOP_BIT"
  - `p42`: "UART_ONE_STOP_BIT"
- `aliases`: []

### MACRO-UART-USING-INTERRUPTS
- `name`: "UART_USING_INTERRUPTS"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,41`
- `brief`: "macro index entry for `UART_USING_INTERRUPTS`."
- `anchors`:
  - `p11`: "UART_USING_INTERRUPTS"
  - `p41`: "UART_USING_INTERRUPTS"
- `aliases`: []

### MACRO-UART-10-BITS-PER-CHAR
- `name`: "UART_10_BITS_PER_CHAR"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_10_BITS_PER_CHAR`."
- `anchors`:
  - `p10`: "UART_10_BITS_PER_CHAR"
  - `p42`: "UART_10_BITS_PER_CHAR]"
- `aliases`: []

### MACRO-UART-7-BITS-PER-CHAR
- `name`: "UART_7_BITS_PER_CHAR"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_7_BITS_PER_CHAR`."
- `anchors`:
  - `p10`: "UART_7_BITS_PER_CHAR"
  - `p42`: "[UART_7_BITS_PER_CHAR,"
- `aliases`: []

### MACRO-UART-9-BITS-PER-CHAR
- `name`: "UART_9_BITS_PER_CHAR"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_9_BITS_PER_CHAR`."
- `anchors`:
  - `p10`: "UART_9_BITS_PER_CHAR"
  - `p42`: "UART_9_BITS_PER_CHAR,"
- `aliases`: []

### MACRO-UART-BAUDRATE-115200
- `name`: "UART_BAUDRATE_115200"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_115200`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_115200"
  - `p40`: "UART_BAUDRATE_115200,"
- `aliases`: []

### MACRO-UART-BAUDRATE-1200
- `name`: "UART_BAUDRATE_1200"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_1200`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_1200"
  - `p40`: "UART_BAUDRATE_1200,"
- `aliases`: []

### MACRO-UART-BAUDRATE-14400
- `name`: "UART_BAUDRATE_14400"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_14400`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_14400"
  - `p40`: "UART_BAUDRATE_14400,"
- `aliases`: []

### MACRO-UART-BAUDRATE-1843200
- `name`: "UART_BAUDRATE_1843200"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,40`
- `brief`: "macro index entry for `UART_BAUDRATE_1843200`."
- `anchors`:
  - `p12`: "UART_BAUDRATE_1843200"
  - `p40`: "UART_BAUDRATE_1843200]"
- `aliases`: []

### MACRO-UART-BAUDRATE-19200
- `name`: "UART_BAUDRATE_19200"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_19200`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_19200"
  - `p40`: "UART_BAUDRATE_19200,"
- `aliases`: []

### MACRO-UART-BAUDRATE-230400
- `name`: "UART_BAUDRATE_230400"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_230400`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_230400"
  - `p40`: "UART_BAUDRATE_230400,"
- `aliases`: []

### MACRO-UART-BAUDRATE-2400
- `name`: "UART_BAUDRATE_2400"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_2400`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_2400"
  - `p40`: "UART_BAUDRATE_2400,"
- `aliases`: []

### MACRO-UART-BAUDRATE-28800
- `name`: "UART_BAUDRATE_28800"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_28800`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_28800"
  - `p40`: "UART_BAUDRATE_28800,"
- `aliases`: []

### MACRO-UART-BAUDRATE-38400
- `name`: "UART_BAUDRATE_38400"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_38400`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_38400"
  - `p40`: "UART_BAUDRATE_38400,"
- `aliases`: []

### MACRO-UART-BAUDRATE-460800
- `name`: "UART_BAUDRATE_460800"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,40`
- `brief`: "macro index entry for `UART_BAUDRATE_460800`."
- `anchors`:
  - `p12`: "UART_BAUDRATE_460800"
  - `p40`: "UART_BAUDRATE_460800,"
- `aliases`: []

### MACRO-UART-BAUDRATE-4800
- `name`: "UART_BAUDRATE_4800"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_4800`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_4800"
  - `p40`: "UART_BAUDRATE_4800,"
- `aliases`: []

### MACRO-UART-BAUDRATE-57600
- `name`: "UART_BAUDRATE_57600"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_57600`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_57600"
  - `p40`: "UART_BAUDRATE_57600,"
- `aliases`: []

### MACRO-UART-BAUDRATE-7200
- `name`: "UART_BAUDRATE_7200"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `UART_BAUDRATE_7200`."
- `anchors`:
  - `p11`: "UART_BAUDRATE_7200"
  - `p40`: "UART_BAUDRATE_7200,"
- `aliases`: []

### MACRO-UART-BAUDRATE-921600
- `name`: "UART_BAUDRATE_921600"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,40`
- `brief`: "macro index entry for `UART_BAUDRATE_921600`."
- `anchors`:
  - `p12`: "UART_BAUDRATE_921600"
  - `p40`: "UART_BAUDRATE_921600,"
- `aliases`: []

### MACRO-UART-EVEN-PARITY
- `name`: "UART_EVEN_PARITY"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_EVEN_PARITY`."
- `anchors`:
  - `p10`: "UART_EVEN_PARITY"
  - `p42`: "[UART_DISABLED_PARITY, UART_EVEN_PARITY, UART_ODD_PARITY]"
- `aliases`: []

### MACRO-UART-ODD-PARITY
- `name`: "UART_ODD_PARITY"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_ODD_PARITY`."
- `anchors`:
  - `p10`: "UART_ODD_PARITY"
  - `p42`: "[UART_DISABLED_PARITY, UART_EVEN_PARITY, UART_ODD_PARITY]"
- `aliases`: []

### MACRO-UART-STATUS-SUCCESS
- `name`: "UART_STATUS_SUCCESS"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,35`
- `brief`: "macro index entry for `UART_STATUS_SUCCESS`."
- `anchors`:
  - `p11`: "UART_STATUS_SUCCESS"
  - `p35`: "interface is called, and Uart_GetStatus is called to obtain the current status. When the status is UART_STATUS_SUCCESS, it"
- `aliases`: []

### MACRO-UART-TWO-STOP-BIT
- `name`: "UART_TWO_STOP_BIT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,42`
- `brief`: "macro index entry for `UART_TWO_STOP_BIT`."
- `anchors`:
  - `p10`: "UART_TWO_STOP_BIT"
  - `p42`: "[UART_ONE_STOP_BIT, UART_TWO_STOP_BIT]"
- `aliases`: []

### MACRO-UART-USING-DMA
- `name`: "UART_USING_DMA"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,41`
- `brief`: "macro index entry for `UART_USING_DMA`."
- `anchors`:
  - `p11`: "UART_USING_DMA"
  - `p41`: "[UART_USING_INTERRUPTS, UART_USING_DMA]"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `3`
- `physical_pages`: `3,36`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p3`: "IMPLEMENTATION_CONFIG_VARIANT .............................................................................................................…"
  - `p36`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-FCUART-1
- `name`: "FCUART_1"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_1`."
- `anchors`:
  - `p40`: "FCUART_1"
- `aliases`: []

### MACRO-LOCAL-INUARTE
- `name`: "LOCAL_INUARTE"
- `type`: `macro`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "macro index entry for `LOCAL_INUARTE`."
- `anchors`:
  - `p27`: "LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### MACRO-UART-ABORTTRANSFER-ID
- `name`: "UART_ABORTTRANSFER_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_ABORTTRANSFER_ID`."
- `anchors`:
  - `p9`: "#define UART_ABORTTRANSFER_ID ((uint8)0x08U)"
- `aliases`: []

### MACRO-UART-ASYNCRECEIVE-ID
- `name`: "UART_ASYNCRECEIVE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_ASYNCRECEIVE_ID`."
- `anchors`:
  - `p9`: "#define UART_ASYNCRECEIVE_ID ((uint8)0x07U)"
- `aliases`: []

### MACRO-UART-ASYNCSEND-ID
- `name`: "UART_ASYNCSEND_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_ASYNCSEND_ID`."
- `anchors`:
  - `p9`: "#define UART_ASYNCSEND_ID ((uint8)0x05U)"
- `aliases`: []

### MACRO-UART-DEINIT-ID
- `name`: "UART_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_DEINIT_ID`."
- `anchors`:
  - `p9`: "#define UART_DEINIT_ID ((uint8)0x01U)"
- `aliases`: []

### MACRO-UART-E-ALREADY-INITIALIZED
- `name`: "UART_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p8`: "#define UART_E_ALREADY_INITIALIZED ((uint8)0x04U)"
- `aliases`: []

### MACRO-UART-E-CHANNEL-BUSY
- `name`: "UART_E_CHANNEL_BUSY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_CHANNEL_BUSY`."
- `anchors`:
  - `p8`: "#define UART_E_CHANNEL_BUSY ((uint8)0x06U)"
- `aliases`: []

### MACRO-UART-E-DEINIT-FAILED
- `name`: "UART_E_DEINIT_FAILED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_E_DEINIT_FAILED`."
- `anchors`:
  - `p9`: "#define UART_E_DEINIT_FAILED ((uint8)0x10U)"
- `aliases`: []

### MACRO-UART-E-INIT-FAILED
- `name`: "UART_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_E_INIT_FAILED`."
- `anchors`:
  - `p9`: "#define UART_E_INIT_FAILED ((uint8)0x09U)"
- `aliases`: []

### MACRO-UART-E-INVALID-CHANNEL
- `name`: "UART_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_INVALID_CHANNEL`."
- `anchors`:
  - `p8`: "#define UART_E_INVALID_CHANNEL ((uint8)0x02U)"
- `aliases`: []

### MACRO-UART-E-INVALID-PARAMETER
- `name`: "UART_E_INVALID_PARAMETER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_INVALID_PARAMETER`."
- `anchors`:
  - `p8`: "#define UART_E_INVALID_PARAMETER ((uint8)0x07U)"
- `aliases`: []

### MACRO-UART-E-INVALID-POINTER
- `name`: "UART_E_INVALID_POINTER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_INVALID_POINTER`."
- `anchors`:
  - `p8`: "#define UART_E_INVALID_POINTER ((uint8)0x03U)"
- `aliases`: []

### MACRO-UART-E-PARAM-CONFIG
- `name`: "UART_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_PARAM_CONFIG`."
- `anchors`:
  - `p8`: "#define UART_E_PARAM_CONFIG ((uint8)0x05U)"
- `aliases`: []

### MACRO-UART-E-TIMEOUT
- `name`: "UART_E_TIMEOUT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_TIMEOUT`."
- `anchors`:
  - `p8`: "#define UART_E_TIMEOUT ((uint8)0x08U)"
- `aliases`: []

### MACRO-UART-E-UNINIT
- `name`: "UART_E_UNINIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `UART_E_UNINIT`."
- `anchors`:
  - `p8`: "#define UART_E_UNINIT ((uint8)0x01U)"
- `aliases`: []

### MACRO-UART-GETBAUDRATE-ID
- `name`: "UART_GETBAUDRATE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_GETBAUDRATE_ID`."
- `anchors`:
  - `p9`: "#define UART_GETBAUDRATE_ID ((uint8)0x03U)"
- `aliases`: []

### MACRO-UART-GETSTATUS-ID
- `name`: "UART_GETSTATUS_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_GETSTATUS_ID`."
- `anchors`:
  - `p9`: "#define UART_GETSTATUS_ID ((uint8)0x09U)"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-1
- `name`: "UART_IDLE_CHARACTER_1"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_1`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_1"
- `aliases`: []

### MACRO-UART-INIT-ID
- `name`: "UART_INIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_INIT_ID`."
- `anchors`:
  - `p9`: "#define UART_INIT_ID ((uint8)0x00U)"
- `aliases`: []

### MACRO-UART-SETBAUDRATE-ID
- `name`: "UART_SETBAUDRATE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_SETBAUDRATE_ID`."
- `anchors`:
  - `p9`: "#define UART_SETBAUDRATE_ID ((uint8)0x02U)"
- `aliases`: []

### MACRO-UART-SETTRANSBUFFER-ID
- `name`: "UART_SETTRANSBUFFER_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_SETTRANSBUFFER_ID`."
- `anchors`:
  - `p10`: "#define UART_SETTRANSBUFFER_ID ((uint8)0x0BU)"
- `aliases`: []

### MACRO-UART-SYNCRECEIVE-ID
- `name`: "UART_SYNCRECEIVE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_SYNCRECEIVE_ID`."
- `anchors`:
  - `p9`: "#define UART_SYNCRECEIVE_ID ((uint8)0x06U)"
- `aliases`: []

### MACRO-UART-SYNCSEND-ID
- `name`: "UART_SYNCSEND_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_SYNCSEND_ID`."
- `anchors`:
  - `p9`: "#define UART_SYNCSEND_ID ((uint8)0x04U)"
- `aliases`: []

### MACRO-UART-VERSIONINFO-ID
- `name`: "UART_VERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_VERSIONINFO_ID`."
- `anchors`:
  - `p9`: "#define UART_VERSIONINFO_ID ((uint8)0x0AU)"
- `aliases`: []

### MACRO-UART-AR-RELEASE-MAJOR-VERSION
- `name`: "UART_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p10`: "#define UART_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-UART-AR-RELEASE-MINOR-VERSION
- `name`: "UART_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p10`: "#define UART_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-UART-AR-RELEASE-REVISION-VERSION
- `name`: "UART_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p10`: "#define UART_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-UART-MODULE-ID
- `name`: "UART_MODULE_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_MODULE_ID`."
- `anchors`:
  - `p10`: "#define UART_MODULE_ID 255"
- `aliases`: []

### MACRO-UART-SW-MAJOR-VERSION
- `name`: "UART_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_SW_MAJOR_VERSION`."
- `anchors`:
  - `p10`: "#define UART_SW_MAJOR_VERSION 1"
- `aliases`: []

### MACRO-UART-SW-MINOR-VERSION
- `name`: "UART_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_SW_MINOR_VERSION`."
- `anchors`:
  - `p10`: "#define UART_SW_MINOR_VERSION 0"
- `aliases`: []

### MACRO-UART-SW-PATCH-VERSION
- `name`: "UART_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_SW_PATCH_VERSION`."
- `anchors`:
  - `p10`: "#define UART_SW_PATCH_VERSION 3"
- `aliases`: []

### MACRO-UART-VENDOR-ID
- `name`: "UART_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_VENDOR_ID`."
- `anchors`:
  - `p10`: "#define UART_VENDOR_ID 174"
- `aliases`: []

### MACRO-FCUART-0
- `name`: "FCUART_0"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_0`."
- `anchors`:
  - `p40`: "[FCUART_0, FCUART_1, FCUART_2, FCUART_3, FCUART_4, FCUART_5,"
- `aliases`: []

### MACRO-FCUART-10
- `name`: "FCUART_10"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_10`."
- `anchors`:
  - `p40`: "FCUART_10,"
- `aliases`: []

### MACRO-FCUART-11
- `name`: "FCUART_11"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_11`."
- `anchors`:
  - `p40`: "FCUART_11,"
- `aliases`: []

### MACRO-FCUART-12
- `name`: "FCUART_12"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_12`."
- `anchors`:
  - `p40`: "FCUART_12,"
- `aliases`: []

### MACRO-FCUART-13
- `name`: "FCUART_13"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_13`."
- `anchors`:
  - `p40`: "FCUART_13,"
- `aliases`: []

### MACRO-FCUART-14
- `name`: "FCUART_14"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_14`."
- `anchors`:
  - `p40`: "FCUART_14,"
- `aliases`: []

### MACRO-FCUART-15
- `name`: "FCUART_15"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_15`."
- `anchors`:
  - `p40`: "FCUART_15,"
- `aliases`: []

### MACRO-FCUART-16
- `name`: "FCUART_16"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_16`."
- `anchors`:
  - `p40`: "FCUART_16, FCUART_17]"
- `aliases`: []

### MACRO-FCUART-17
- `name`: "FCUART_17"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_17`."
- `anchors`:
  - `p40`: "FCUART_16, FCUART_17]"
- `aliases`: []

### MACRO-FCUART-2
- `name`: "FCUART_2"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_2`."
- `anchors`:
  - `p40`: "[FCUART_0, FCUART_1, FCUART_2, FCUART_3, FCUART_4, FCUART_5,"
- `aliases`: []

### MACRO-FCUART-3
- `name`: "FCUART_3"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_3`."
- `anchors`:
  - `p40`: "[FCUART_0, FCUART_1, FCUART_2, FCUART_3, FCUART_4, FCUART_5,"
- `aliases`: []

### MACRO-FCUART-4
- `name`: "FCUART_4"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_4`."
- `anchors`:
  - `p40`: "[FCUART_0, FCUART_1, FCUART_2, FCUART_3, FCUART_4, FCUART_5,"
- `aliases`: []

### MACRO-FCUART-5
- `name`: "FCUART_5"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_5`."
- `anchors`:
  - `p40`: "[FCUART_0, FCUART_1, FCUART_2, FCUART_3, FCUART_4, FCUART_5,"
- `aliases`: []

### MACRO-FCUART-6
- `name`: "FCUART_6"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_6`."
- `anchors`:
  - `p40`: "FCUART_6,"
- `aliases`: []

### MACRO-FCUART-7
- `name`: "FCUART_7"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_7`."
- `anchors`:
  - `p40`: "FCUART_7,"
- `aliases`: []

### MACRO-FCUART-8
- `name`: "FCUART_8"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_8`."
- `anchors`:
  - `p40`: "FCUART_8,"
- `aliases`: []

### MACRO-FCUART-9
- `name`: "FCUART_9"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `FCUART_9`."
- `anchors`:
  - `p40`: "FCUART_9,"
- `aliases`: []

### MACRO-UART-BAUDRATE-CUSTOM
- `name`: "UART_BAUDRATE_CUSTOM"
- `type`: `macro`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "macro index entry for `UART_BAUDRATE_CUSTOM`."
- `anchors`:
  - `p40`: "[UART_BAUDRATE_CUSTOM,"
- `aliases`: []

### MACRO-UART-CH-MAX-CONFIG
- `name`: "UART_CH_MAX_CONFIG"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `UART_CH_MAX_CONFIG`."
- `anchors`:
  - `p15`: "const Uart_ChannelConfigType * Configs [UART_CH_MAX_CONFIG]"
- `aliases`: []

### MACRO-UART-EVENT-END-TRANSFER
- `name`: "UART_EVENT_END_TRANSFER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_EVENT_END_TRANSFER`."
- `anchors`:
  - `p11`: "UART_EVENT_END_TRANSFER"
- `aliases`: []

### MACRO-UART-EVENT-ERROR
- `name`: "UART_EVENT_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_EVENT_ERROR`."
- `anchors`:
  - `p11`: "UART_EVENT_ERROR"
- `aliases`: []

### MACRO-UART-EVENT-RX-FULL
- `name`: "UART_EVENT_RX_FULL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_EVENT_RX_FULL`."
- `anchors`:
  - `p11`: "UART_EVENT_RX_FULL"
- `aliases`: []

### MACRO-UART-EVENT-TX-EMPTY
- `name`: "UART_EVENT_TX_EMPTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_EVENT_TX_EMPTY`."
- `anchors`:
  - `p11`: "UART_EVENT_TX_EMPTY"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-128
- `name`: "UART_IDLE_CHARACTER_128"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_128`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_128]"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-16
- `name`: "UART_IDLE_CHARACTER_16"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_16`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_16,"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-2
- `name`: "UART_IDLE_CHARACTER_2"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_2`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_2,"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-32
- `name`: "UART_IDLE_CHARACTER_32"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_32`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_32,"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-4
- `name`: "UART_IDLE_CHARACTER_4"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_4`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_4,"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-64
- `name`: "UART_IDLE_CHARACTER_64"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_64`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_64,"
- `aliases`: []

### MACRO-UART-IDLE-CHARACTER-8
- `name`: "UART_IDLE_CHARACTER_8"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `UART_IDLE_CHARACTER_8`."
- `anchors`:
  - `p43`: "UART_IDLE_CHARACTER_8,"
- `aliases`: []

### MACRO-UART-PARITY-DISABLED
- `name`: "UART_PARITY_DISABLED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_PARITY_DISABLED`."
- `anchors`:
  - `p10`: "UART_PARITY_DISABLED"
- `aliases`: []

### MACRO-UART-PARITY-EVEN
- `name`: "UART_PARITY_EVEN"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_PARITY_EVEN`."
- `anchors`:
  - `p10`: "UART_PARITY_EVEN"
- `aliases`: []

### MACRO-UART-PARITY-ODD
- `name`: "UART_PARITY_ODD"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_PARITY_ODD`."
- `anchors`:
  - `p10`: "UART_PARITY_ODD"
- `aliases`: []

### MACRO-UART-STATUS-ABORTED
- `name`: "UART_STATUS_ABORTED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_ABORTED`."
- `anchors`:
  - `p11`: "UART_STATUS_ABORTED"
- `aliases`: []

### MACRO-UART-STATUS-BUSY
- `name`: "UART_STATUS_BUSY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_BUSY`."
- `anchors`:
  - `p11`: "UART_STATUS_BUSY"
- `aliases`: []

### MACRO-UART-STATUS-DMA-ERROR
- `name`: "UART_STATUS_DMA_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_DMA_ERROR`."
- `anchors`:
  - `p11`: "UART_STATUS_DMA_ERROR"
- `aliases`: []

### MACRO-UART-STATUS-ERROR
- `name`: "UART_STATUS_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_ERROR`."
- `anchors`:
  - `p11`: "UART_STATUS_ERROR"
- `aliases`: []

### MACRO-UART-STATUS-FRAMING-ERROR
- `name`: "UART_STATUS_FRAMING_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_FRAMING_ERROR`."
- `anchors`:
  - `p11`: "UART_STATUS_FRAMING_ERROR"
- `aliases`: []

### MACRO-UART-STATUS-NOISE-ERROR
- `name`: "UART_STATUS_NOISE_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_NOISE_ERROR`."
- `anchors`:
  - `p11`: "UART_STATUS_NOISE_ERROR"
- `aliases`: []

### MACRO-UART-STATUS-PARITY-ERROR
- `name`: "UART_STATUS_PARITY_ERROR"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_PARITY_ERROR`."
- `anchors`:
  - `p11`: "UART_STATUS_PARITY_ERROR"
- `aliases`: []

### MACRO-UART-STATUS-RX-OVERRUN
- `name`: "UART_STATUS_RX_OVERRUN"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_RX_OVERRUN`."
- `anchors`:
  - `p11`: "UART_STATUS_RX_OVERRUN"
- `aliases`: []

### MACRO-UART-STATUS-TIMEOUT
- `name`: "UART_STATUS_TIMEOUT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_TIMEOUT`."
- `anchors`:
  - `p11`: "UART_STATUS_TIMEOUT"
- `aliases`: []

### MACRO-UART-STATUS-TX-UNDERRUN
- `name`: "UART_STATUS_TX_UNDERRUN"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_STATUS_TX_UNDERRUN`."
- `anchors`:
  - `p11`: "UART_STATUS_TX_UNDERRUN"
- `aliases`: []

### MACRO-UART-STOPBIT-NUM-1
- `name`: "UART_STOPBIT_NUM_1"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_STOPBIT_NUM_1`."
- `anchors`:
  - `p10`: "UART_STOPBIT_NUM_1"
- `aliases`: []

### MACRO-UART-STOPBIT-NUM-2
- `name`: "UART_STOPBIT_NUM_2"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `UART_STOPBIT_NUM_2`."
- `anchors`:
  - `p10`: "UART_STOPBIT_NUM_2"
- `aliases`: []

### MACRO-UART-TEXT-SECTION
- `name`: "UART_TEXT_SECTION"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `UART_TEXT_SECTION`."
- `anchors`:
  - `p14`: "Pointer to the UART_TEXT_SECTION void Uart_configuration structure."
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p38`: "NULL_PTR"
- `aliases`: []

### TYPE-FCUART-TYPE
- `name`: "FCUART_Type"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27,28,29,30,31,32,33,34`
- `brief`: "type index entry for `FCUART_Type`."
- `anchors`:
  - `p27`: "LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
  - `p28`: "LOCAL_INLINE void FCUART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)"
  - `p29`: "LOCAL_INLINE void FCUART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
  - `p31`: "LOCAL_INLINE void FCUART_HWA_EnableTransmitDMA(FCUART_Type *pUart)"
- `aliases`: []

### TYPE-UART-STATUSTYPE
- `name`: "Uart_StatusType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,13,20,21,22,23,24`
- `brief`: "type index entry for `Uart_StatusType`."
- `anchors`:
  - `p11`: "Uart_StatusType"
  - `p13`: "volatile Uart_StatusType TransmitStatus"
  - `p20`: "Uart_StatusType Uart_GetStatus(uint Channel, uint32 *RemainingBytesPointer, Uart_DirectionType"
  - `p21`: "Uart_StatusType"
  - `p22`: "Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,18,19,20`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p17`: "Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
  - `p18`: "Std_ReturnType Uart_SyncSend(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32 Timeout);"
  - `p19`: "Std_ReturnType Uart_SyncReceive(uint8 Channel, const uint8 *DataBuffer, uint32 DataSize, uint32"
  - `p20`: "Std_ReturnType"
- `aliases`: []

### TYPE-UART-DIRECTIONTYPE
- `name`: "Uart_DirectionType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,18,19,20`
- `brief`: "type index entry for `Uart_DirectionType`."
- `anchors`:
  - `p12`: "Uart_DirectionType"
  - `p18`: "void Uart_SetTransBuffer(uint8 Channel, uint8 *DataBuffer, uint32 DataSize, Uart_DirectionType"
  - `p19`: "Std_ReturnType Uart_AbortTransfer(uint8 Channel, Uart_DirectionType TransType);"
  - `p20`: "Uart_StatusType Uart_GetStatus(uint Channel, uint32 *RemainingBytesPointer, Uart_DirectionType"
- `aliases`: []

### TYPE-UART-USERCONFIGTYPE
- `name`: "Uart_UserConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13,14,21`
- `brief`: "type index entry for `Uart_UserConfigType`."
- `anchors`:
  - `p3`: "Uart_UserConfigType .......................................................................................................................…"
  - `p13`: "Uart_UserConfigType"
  - `p14`: "const Uart_UserConfigType * UserConfig"
  - `p21`: "void Uart_LLD_Init (const uint8 HwUnit, const Uart_UserConfigType *UserConfig)"
- `aliases`: []

### TYPE-UART-BAUDRATETYPE
- `name`: "Uart_BaudrateType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,17,24`
- `brief`: "type index entry for `Uart_BaudrateType`."
- `anchors`:
  - `p11`: "Uart_BaudrateType"
  - `p17`: "Std_ReturnType Uart_SetBaudrate(uint8 Channel, Uart_BaudrateType Baudrate);"
  - `p24`: "Uart_StatusType Uart_LLD_SetBaudRate (const uint8 HwUnit, const Uart_BaudrateType"
- `aliases`: []

### TYPE-UART-BITCOUNTPERCHARTYPE
- `name`: "Uart_BitCountPerCharType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,14,30`
- `brief`: "type index entry for `Uart_BitCountPerCharType`."
- `anchors`:
  - `p10`: "Uart_BitCountPerCharType"
  - `p14`: "Uart_BitCountPerCharType BitCountPerChar"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetBitCountPerChar(FCUART_Type *pUart, Uart_BitCountPerCharType"
- `aliases`: []

### TYPE-UART-PARITYMODETYPE
- `name`: "Uart_ParityModeType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13,30`
- `brief`: "type index entry for `Uart_ParityModeType`."
- `anchors`:
  - `p10`: "Uart_ParityModeType"
  - `p13`: "Uart_ParityModeType ParityMode"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetParity(FCUART_Type *pUart, Uart_ParityModeType eParityType)"
- `aliases`: []

### TYPE-UART-STOPBITCOUNTTYPE
- `name`: "Uart_StopBitCountType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,14,30`
- `brief`: "type index entry for `Uart_StopBitCountType`."
- `anchors`:
  - `p10`: "Uart_StopBitCountType"
  - `p14`: "Uart_StopBitCountType StopBitsCount"
  - `p30`: "LOCAL_INLINE void FCUART_HWA_SetStopBit(FCUART_Type *pUart, Uart_StopBitCountType eStopBit)"
- `aliases`: []

### TYPE-UART-CHANNELCONFIGTYPE
- `name`: "Uart_ChannelConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,14,15`
- `brief`: "type index entry for `Uart_ChannelConfigType`."
- `anchors`:
  - `p3`: "Uart_ChannelConfigType ....................................................................................................................…"
  - `p14`: "Uart_ChannelConfigType"
  - `p15`: "const Uart_ChannelConfigType * Configs [UART_CH_MAX_CONFIG]"
- `aliases`: []

### TYPE-UART-HWCONFIGTYPE
- `name`: "Uart_HwConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,14,15`
- `brief`: "type index entry for `Uart_HwConfigType`."
- `anchors`:
  - `p3`: "Uart_HwConfigType .........................................................................................................................…"
  - `p14`: "Uart_HwConfigType"
  - `p15`: "const Uart_HwConfigType * UartChannelConfig"
- `aliases`: []

### TYPE-UART-STATESTRUCTURETYPE
- `name`: "Uart_StateStructureType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13,14`
- `brief`: "type index entry for `Uart_StateStructureType`."
- `anchors`:
  - `p3`: "Uart_StateStructureType ...................................................................................................................…"
  - `p13`: "Uart_StateStructureType"
  - `p14`: "Uart_StateStructureType * StateStruct"
- `aliases`: []

### TYPE-UART-CONFIGTYPE
- `name`: "Uart_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,15`
- `brief`: "type index entry for `Uart_ConfigType`."
- `anchors`:
  - `p3`: "Uart_ConfigType ...........................................................................................................................…"
  - `p15`: "Uart_ConfigType"
- `aliases`: []

### TYPE-UART-EVENTTYPE
- `name`: "Uart_EventType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "type index entry for `Uart_EventType`."
- `anchors`:
  - `p11`: "Uart_EventType"
  - `p12`: "typedef void(* Uart_CallbackType) (const uint8 HwInstance, const Uart_EventType Event)"
- `aliases`: []

### TYPE-UART-IDLECHARNUMTYPE
- `name`: "Uart_IdleCharNumType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,34`
- `brief`: "type index entry for `Uart_IdleCharNumType`."
- `anchors`:
  - `p14`: "Uart_IdleCharNumType IdleCharNum"
  - `p34`: "LOCAL_INLINE void FCUART_UART_HWA_SetIdleConfig(FCUART_Type *pUart, Uart_IdleCharNumType"
- `aliases`: []

### TYPE-UART-TRANSFERTYPE
- `name`: "Uart_TransferType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,14`
- `brief`: "type index entry for `Uart_TransferType`."
- `anchors`:
  - `p10`: "Uart_TransferType"
  - `p14`: "Uart_TransferType TransferType"
- `aliases`: []

### TYPE-UART-CALLBACKTYPE
- `name`: "Uart_CallbackType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,14`
- `brief`: "type index entry for `Uart_CallbackType`."
- `anchors`:
  - `p12`: "typedef void(* Uart_CallbackType) (const uint8 HwInstance, const Uart_EventType Event)"
  - `p14`: "Uart_CallbackType Callback"
- `aliases`: []

### TYPE-FCUART-STATTYPE
- `name`: "FCUART_StatType"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "type index entry for `FCUART_StatType`."
- `anchors`:
  - `p27`: "LOCAL_INUARTE uint32 FCUART_HWA_GetStatus(FCUART_Type *pUart, FCUART_StatType eStatusType)"
- `aliases`: []

### TYPE-UART-TYPE
- `name`: "UART_Type"
- `type`: `type`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "type index entry for `UART_Type`."
- `anchors`:
  - `p34`: "LOCAL_INLINE void FCUART_HWA_EnableLoopMode(FCUART_Type *pUart);"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p21`: "void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);"
- `aliases`: []

### TYPE-UARTPARITYTYPE
- `name`: "UartParityType"
- `type`: `type`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "type index entry for `UartParityType`."
- `anchors`:
  - `p41`: "UartParityType"
- `aliases`: []

### FILE-UART-TYPES-H
- `name`: "Uart_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,8,12`
- `brief`: "file index entry for `Uart_Types.h`."
- `anchors`:
  - `p3`: "Macros in Uart_Types.h ....................................................................................................................…"
  - `p8`: "Macros in Uart_Types.h"
  - `p12`: "Enums in Uart_Types.h"
- `aliases`: []

### FILE-CDD-UART-H
- `name`: "CDD_Uart.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,15`
- `brief`: "file index entry for `CDD_Uart.h`."
- `anchors`:
  - `p3`: "Functions in CDD_Uart.h ...................................................................................................................…"
  - `p15`: "Functions in CDD_Uart.h"
- `aliases`: []

### FILE-LLD-UART-H
- `name`: "LLD_Uart.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "file index entry for `LLD_Uart.h`."
- `anchors`:
  - `p3`: "Functions in LLD_Uart.h ...................................................................................................................…"
  - `p21`: "Functions in LLD_Uart.h"
- `aliases`: []

### FILE-UART-GENERALTYPES-H
- `name`: "Uart_GeneralTypes.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "file index entry for `Uart_GeneralTypes.h`."
- `anchors`:
  - `p3`: "Enums in Uart_GeneralTypes.h ..............................................................................................................…"
  - `p10`: "Enums in Uart_GeneralTypes.h"
- `aliases`: []

### FILE-UART-REGOPS-H
- `name`: "Uart_RegOps.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,27`
- `brief`: "file index entry for `Uart_RegOps.h`."
- `anchors`:
  - `p3`: "Functions in Uart_RegOps.h.................................................................................................................…"
  - `p27`: "Functions in Uart_RegOps.h"
- `aliases`: []

### FILE-UART-VERSION-H
- `name`: "Uart_Version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "file index entry for `Uart_Version.h`."
- `anchors`:
  - `p3`: "Macros in Uart_Version.h ..................................................................................................................…"
  - `p10`: "Macros in Uart_Version.h"
- `aliases`: []

### TERM-UART
- `name`: "UART"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `UART`."
- `anchors`:
  - `p1`: "UART"
  - `p2`: "UART"
  - `p3`: "UART"
  - `p4`: "UART"
  - `p5`: "UART"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,38,39,41,42,43,44,45`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p38`: "AUTOSAR"
  - `p39`: "AUTOSAR"
  - `p41`: "AUTOSAR"
  - `p42`: "AUTOSAR"
- `aliases`: []

### TERM-UART-TYPES
- `name`: "Uart_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,8,12`
- `brief`: "term index entry for `Uart_Types`."
- `anchors`:
  - `p3`: "Macros in Uart_Types.h ....................................................................................................................…"
  - `p8`: "Macros in Uart_Types.h"
  - `p12`: "Enums in Uart_Types.h"
- `aliases`: []

### TERM-RXDATABUFF
- `name`: "RxDataBuff"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23,25`
- `brief`: "term index entry for `RxDataBuff`."
- `anchors`:
  - `p23`: "Uart_StatusType Uart_LLD_SyncReceive (const uint8 HwUnit, uint8 *RxDataBuff, const uint32 RxDataSize,"
  - `p25`: "void Uart_LLD_SetRxBuffer(const uint8 HwUnit, uint8 * RxDataBuff, const uint32 RxDataSize);"
- `aliases`: []

### TERM-RXDATASIZE
- `name`: "RxDataSize"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23,25`
- `brief`: "term index entry for `RxDataSize`."
- `anchors`:
  - `p23`: "Uart_StatusType Uart_LLD_SyncReceive (const uint8 HwUnit, uint8 *RxDataBuff, const uint32 RxDataSize,"
  - `p25`: "void Uart_LLD_SetRxBuffer(const uint8 HwUnit, uint8 * RxDataBuff, const uint32 RxDataSize);"
- `aliases`: []

### TERM-TXDATABUFF
- `name`: "TxDataBuff"
- `type`: `term`
- `primary_page`: `22`
- `physical_pages`: `22,25`
- `brief`: "term index entry for `TxDataBuff`."
- `anchors`:
  - `p22`: "Uart_StatusType Uart_LLD_SyncSend (const uint8 HwUnit, const uint8 *TxDataBuff, const uint32"
  - `p25`: "void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `aliases`: []

### TERM-TXDATASIZE
- `name`: "TxDataSize"
- `type`: `term`
- `primary_page`: `22`
- `physical_pages`: `22,25`
- `brief`: "term index entry for `TxDataSize`."
- `anchors`:
  - `p22`: "TxDataSize, const uint32 Timeout)"
  - `p25`: "void Uart_LLD_SetTxBuffer(const uint8 HwUnit, const uint8 * TxDataBuff, const uint32 TxDataSize);"
- `aliases`: []

### TERM-UARTCALLBACK
- `name`: "UartCallback"
- `type`: `term`
- `primary_page`: `38`
- `physical_pages`: `38,47`
- `brief`: "term index entry for `UartCallback`."
- `anchors`:
  - `p38`: "UartCallback"
  - `p47`: "interrupt service function is configured in UartCallback in the GeneralConfiguration container."
- `aliases`: []

### TERM-UARTECUCPARTITIONREF
- `name`: "UartEcucPartitionRef"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,38`
- `brief`: "term index entry for `UartEcucPartitionRef`."
- `anchors`:
  - `p3`: "UartEcucPartitionRef.......................................................................................................................…"
  - `p38`: "UartEcucPartitionRef"
- `aliases`: []

### TERM-UART-REGOPS
- `name`: "Uart_RegOps"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,27`
- `brief`: "term index entry for `Uart_RegOps`."
- `anchors`:
  - `p3`: "Functions in Uart_RegOps.h.................................................................................................................…"
  - `p27`: "Functions in Uart_RegOps.h"
- `aliases`: []

### TERM-UART-VERSION
- `name`: "Uart_Version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "term index entry for `Uart_Version`."
- `anchors`:
  - `p3`: "Macros in Uart_Version.h ..................................................................................................................…"
  - `p10`: "Macros in Uart_Version.h"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,46`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p4`: "Dem"
  - `p46`: "Dem"
- `aliases`: []

### TERM-UARTTIMEOUTDURATION
- `name`: "UartTimeoutDuration"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `UartTimeoutDuration`."
- `anchors`:
  - `p37`: "UartTimeoutDuration"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p36`: "Switches the Development Error Detection and Notification ON or OFF."
- `aliases`: []

### TERM-UARTCALLBACKCAPABILITY
- `name`: "UartCallbackCapability"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `UartCallbackCapability`."
- `anchors`:
  - `p37`: "UartCallbackCapability"
- `aliases`: []

### TERM-UARTCLOCKREF
- `name`: "UartClockRef"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `UartClockRef`."
- `anchors`:
  - `p39`: "UartClockRef"
- `aliases`: []

### TERM-UARTDEVERRORDETECT
- `name`: "UartDevErrorDetect"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `UartDevErrorDetect`."
- `anchors`:
  - `p36`: "UartDevErrorDetect"
- `aliases`: []

### TERM-UARTDMAENABLE
- `name`: "UartDmaEnable"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `UartDmaEnable`."
- `anchors`:
  - `p37`: "UartDmaEnable"
- `aliases`: []

### TERM-UARTHARDWAREFLOWCONTROLENABLE
- `name`: "UartHardwareFlowControlEnable"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "term index entry for `UartHardwareFlowControlEnable`."
- `anchors`:
  - `p42`: "UartHardwareFlowControlEnable"
- `aliases`: []

### TERM-UARTIDLENUMBER
- `name`: "UartIdleNumber"
- `type`: `term`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "term index entry for `UartIdleNumber`."
- `anchors`:
  - `p43`: "UartIdleNumber"
- `aliases`: []

### TERM-UARTINTERNALLOOPBACKENABLE
- `name`: "UartInternalLoopbackEnable"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "term index entry for `UartInternalLoopbackEnable`."
- `anchors`:
  - `p42`: "UartInternalLoopbackEnable"
- `aliases`: []

### TERM-UARTINTERUPTDMAMETHOD
- `name`: "UartInteruptDmaMethod"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `UartInteruptDmaMethod`."
- `anchors`:
  - `p41`: "UartInteruptDmaMethod"
- `aliases`: []

### TERM-UARTMULTICOREENABLE
- `name`: "UartMulticoreEnable"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `UartMulticoreEnable`."
- `anchors`:
  - `p37`: "UartMulticoreEnable"
- `aliases`: []

### TERM-UARTSTOPBITNUMBER
- `name`: "UartStopBitNumber"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "term index entry for `UartStopBitNumber`."
- `anchors`:
  - `p42`: "UartStopBitNumber"
- `aliases`: []

### TERM-UARTTIMEOUTENABLE
- `name`: "UartTimeoutEnable"
- `type`: `term`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "term index entry for `UartTimeoutEnable`."
- `anchors`:
  - `p43`: "UartTimeoutEnable"
- `aliases`: []

### TERM-UARTVERSIONINFOAPI
- `name`: "UartVersionInfoApi"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `UartVersionInfoApi`."
- `anchors`:
  - `p37`: "UartVersionInfoApi"
- `aliases`: []

### TERM-UARTWORDLENGTH
- `name`: "UartWordLength"
- `type`: `term`
- `primary_page`: `42`
- `physical_pages`: `42`
- `brief`: "term index entry for `UartWordLength`."
- `anchors`:
  - `p42`: "UartWordLength"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p36`: "Det"
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
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p1`: "MCAL"
- `aliases`: []

### TERM-MCUCLOCKREFERENCEPOINT
- `name`: "McuClockReferencePoint"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `McuClockReferencePoint`."
- `anchors`:
  - `p39`: "uration/McuClockSettingConfig/McuClockReferencePoint"
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

### TERM-RXBUFF
- `name`: "RxBuff"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `RxBuff`."
- `anchors`:
  - `p13`: "uint8 * RxBuff"
- `aliases`: []

### TERM-RXSIZE
- `name`: "RxSize"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `RxSize`."
- `anchors`:
  - `p13`: "volatile uint32 RxSize"
- `aliases`: []

### TERM-TXBUFF
- `name`: "TxBuff"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `TxBuff`."
- `anchors`:
  - `p13`: "TxBuff"
- `aliases`: []

### TERM-TXSIZE
- `name`: "TxSize"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `TxSize`."
- `anchors`:
  - `p13`: "volatile uint32 TxSize"
- `aliases`: []

### TERM-UART-CONFIGURATION
- `name`: "Uart_configuration"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Uart_configuration`."
- `anchors`:
  - `p14`: "Pointer to the UART_TEXT_SECTION void Uart_configuration structure."
- `aliases`: []

### TERM-UNIVERSAL-ASYNCHRONOUS-RECEIVER-TRANSMITTER-COMPLEX-DEVICE-D
- `name`: "Universal Asynchronous Receiver/Transmitter Complex Device Driver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Universal Asynchronous Receiver/Transmitter Complex Device Driver`."
- `anchors`:
  - `p5`: "Universal Asynchronous Receiver/Transmitter Complex Device Driver"
- `aliases`: []

## 9. Search Aliases

### ALIAS-UART
- `canonical`: "UART"
- `aliases`: ["Universal Asynchronous Receiver/Transmitter Complex Device Driver", "UART 通用异步收发器复杂驱动", "UART module", "UART driver", "UART User Manual", "UART Integration Manual", "Uart", "FCUART", "Universal Asynchronous Receiver/Transmitter", "serial port", "串口", "UART驱动"]
- `related_ids`: ["TERM-UART"]

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

### ALIAS-UART-ASYNC-RECEIVE
- `canonical`: "UART async receive"
- `aliases`: ["Uart_AsyncReceive", "AsyncReceive", "asynchronous receive", "receive notification", "异步接收"]
- `related_ids`: []

### ALIAS-UART-CHANNEL
- `canonical`: "UART channel"
- `aliases`: ["UartChannel", "Uart_ChannelConfigType", "UartGlobalConfig", "baud rate", "RX/TX channel"]
- `related_ids`: []

### ALIAS-UART-HARDWARE
- `canonical`: "UART hardware"
- `aliases`: ["LLD_Uart", "Uart_RegOps", "FCUART", "FIFO", "Rx", "Tx"]
- `related_ids`: []


## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between UART_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `UART_User_Manual.pdf`
- `source_pdf_sha256`: `e8feb9374ab9c1473c110a29c8170ea1e3a5dd56b9e9029d029b765f7be20df4`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `365`
- `technical_missing_terms_added`: `11`
- `pages_with_added_terms`: `46`
- `supplemented_missing_token_count`: `365`
- `supplemented_missing_technical_token_count`: `11`
- `supplemented_physical_pages_count`: `46`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "support"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Typedefs"

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
  - "Autosar"
  - "Both"
  - "Confidential"
  - "Continuous"
  - "FCUART0"
  - "Flagchip"
  - "Full"
  - "ISR"
  - "Idle"
  - "Independent"
  - "Multiple"
  - "NRZ"
  - "Option"
  - "Programmable"
  - "Proprietary"
  - "Receive"
  - "Stop"
  - "Support"
  - "Three"
  - "Transmit"
  - "Watermark"
  - "access"
  - "address"
  - "after"
  - "alternate"
  - "application"
  - "assert"
  - "communication"
  - "complex"
  - "configurable"
  - "core"
  - "defined"
  - "depth"
  - "device"
  - "duplex"
  - "empty"
  - "environment"
  - "errors"
  - "features"
  - "format"
  - "implemented"
  - "implementing"
  - "implements"
  - "independent"
  - "input"
  - "line"
  - "manager"
  - "manner"
  - "mark"
  - "match"
  - "methods"
  - "monitor"
  - "multi"
  - "non"
  - "other"
  - "output"
  - "overhead"
  - "oversampling"
  - "parity"
  - "part"
  - "performs"
  - "peripheral"
  - "polarity"
  - "protocol"
  - "provides"
  - "rates"
  - "ratio"
  - "real"
  - "receiver"
  - "receiving"
  - "reduce"
  - "reports"
  - "request"
  - "requests"
  - "return"
  - "separate"
  - "settings"
  - "software"
  - "standard"
  - "standby"
  - "support"
  - "supports"
  - "that"
  - "time"
  - "transmit"
  - "transmitters"
  - "transmitting"
  - "uses"
  - "using"
  - "wakeup"
  - "zero"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Request"
  - "clear"
  - "control"
  - "flow"
  - "support"

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
  - "Proprietary"
  - "already"
  - "busy"
  - "coreid"
  - "initialized"
  - "occured"
  - "therefore"
  - "value"
  - "wrong"

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
  - "check"
  - "parity"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Define"
  - "Events"
  - "Flagchip"
  - "Framing"
  - "Noise"
  - "Proprietary"
  - "buffer"
  - "busy"
  - "callback"
  - "during"
  - "empty"
  - "ending"
  - "enum"
  - "failure"
  - "full"
  - "occured"
  - "overrun"
  - "perform"
  - "success"
  - "supported"
  - "timeout"
  - "trigger"
  - "underrun"
  - "values"
  - "will"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Typedefs"
  - "all"
  - "features"
  - "peripherals"
  - "receiving"
  - "sending"
  - "support"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Baud"
  - "BaudOverSamplingRatio"
  - "BaudRateDivisor"
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "IsRxBusy"
  - "IsTxBusy"
  - "Over"
  - "Proprietary"
  - "ReceiveStatus"
  - "Status"
  - "True"
  - "active"
  - "already"
  - "being"
  - "belongs"
  - "buffer"
  - "disabled"
  - "divisor"
  - "even"
  - "indicates"
  - "initialized"
  - "last"
  - "odd"
  - "ratio"
  - "received"
  - "remaining"
  - "sampling"
  - "that"
  - "transmit"
  - "transmitted"
  - "value"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "Proprietary"
  - "all"
  - "appropriate"
  - "brings"
  - "buffers"
  - "char"
  - "detect"
  - "eRxDmaInstance"
  - "eTxDmaInstance"
  - "field"
  - "handle"
  - "ignored"
  - "information"
  - "invoke"
  - "subsequent"
  - "supported"
  - "together"
  - "will"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "Initializes"
  - "Partition"
  - "PartitionCoreId"
  - "Proprietary"
  - "core"
  - "level"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Proprietary"
  - "Retrieves"
  - "addressed"
  - "baudrate"
  - "communication"
  - "currently"
  - "location"
  - "memory"
  - "returned"
  - "set"
  - "value"
  - "where"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Buffer"
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Proprietary"
  - "Starts"
  - "Transmission"
  - "addressed"
  - "buffer"
  - "continuous"
  - "cycles"
  - "new"
  - "size"
  - "timeout"
  - "transfers"
  - "transmit"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Aborts"
  - "Buffer"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Starts"
  - "addressed"
  - "buffer"
  - "cycles"
  - "going"
  - "located"
  - "reception"
  - "size"
  - "timeout"
  - "where"
  - "will"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Buffer"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Starts"
  - "addressed"
  - "buffer"
  - "located"
  - "previous"
  - "received"
  - "size"
  - "where"
  - "will"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "Proprietary"
  - "Shuts"
  - "addressed"
  - "disabling"
  - "down"
  - "information"
  - "receiver"
  - "remaining"
  - "storing"
  - "transmitter"
  - "where"
  - "will"
  - "written"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Non"
  - "Proprietary"
  - "Send"
  - "Sends"
  - "Size"
  - "active"
  - "application"
  - "buffer"
  - "byte"
  - "duplex"
  - "enables"
  - "full"
  - "get"
  - "iately"
  - "immed"
  - "know"
  - "means"
  - "method"
  - "microseconds"
  - "multiple"
  - "non"
  - "out"
  - "perform"
  - "polling"
  - "populated"
  - "previous"
  - "saves"
  - "sync"
  - "that"
  - "through"
  - "transmit"
  - "transmitting"
  - "unit"
  - "using"
  - "value"
  - "when"
  - "whether"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Gets"
  - "Non"
  - "Proprietary"
  - "Receive"
  - "Size"
  - "Terminates"
  - "application"
  - "buffer"
  - "byte"
  - "cycles"
  - "duplex"
  - "early"
  - "enables"
  - "frame"
  - "full"
  - "get"
  - "immediately"
  - "know"
  - "means"
  - "method"
  - "multiple"
  - "need"
  - "non"
  - "per"
  - "perform"
  - "polling"
  - "received"
  - "receiving"
  - "reception"
  - "saves"
  - "sync"
  - "that"
  - "timeout"
  - "unit"
  - "using"
  - "when"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Clock"
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Frequency"
  - "Proprietary"
  - "Terminates"
  - "active"
  - "desired"
  - "early"
  - "filled"
  - "need"
  - "non"
  - "previous"
  - "received"
  - "still"
  - "that"
  - "value"
  - "whether"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Sets"
  - "buffer"
  - "containing"
  - "destination"
  - "handler"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Complete"
  - "Confidential"
  - "Finish"
  - "Flagchip"
  - "Proprietary"
  - "completing"
  - "disabling"
  - "dma"
  - "process"
  - "receiving"
  - "requests"
  - "sending"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Disable"
  - "Exclude"
  - "Flag"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "Receive"
  - "STAT"
  - "Stat"
  - "Status"
  - "flag"
  - "value"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Complete"
  - "Confidential"
  - "Ctrl"
  - "Disable"
  - "Exclude"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "Transmit"
  - "mask"
  - "register"
  - "specified"
  - "value"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Baud"
  - "Both"
  - "Complete"
  - "Confidential"
  - "Disable"
  - "Edge"
  - "Flagchip"
  - "OSR"
  - "Proprietary"
  - "SBR"
  - "Sampling"
  - "Set"
  - "Sets"
  - "Transmit"
  - "Written"
  - "division"
  - "modulo"
  - "oversampling"
  - "ratio"
  - "register"
  - "value"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Both"
  - "Clear"
  - "Confidential"
  - "Edge"
  - "Flagchip"
  - "Proprietary"
  - "STAT"
  - "Sampling"
  - "Set"
  - "Specifies"
  - "Write"
  - "Written"
  - "_ParityModeType"
  - "char"
  - "disable"
  - "enabled"
  - "even"
  - "odd"
  - "parity"
  - "per"
  - "register"
  - "value"
  - "whether"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Disable"
  - "Fifo"
  - "Flagchip"
  - "Proprietary"
  - "Receive"
  - "Transmit"
  - "register"
  - "value"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Fifo"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "R8T9"
  - "Set"
  - "register"
  - "value"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Proprietary"
  - "R8T9"
  - "R9T8"
  - "Reset"
  - "Set"
  - "Transfer"
  - "cmd"
  - "disable"
  - "false"
  - "fcuart"
  - "software"
  - "value"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Disable"
  - "Flagchip"
  - "Idle"
  - "Proprietary"
  - "Set"
  - "control"
  - "eIdleCharNum"
  - "flow"
  - "loop"
  - "value"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "general"
  - "indicates"
  - "reception"
  - "successful"
  - "transmit"
  - "usage"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Autosar"
  - "Confidential"
  - "Flagchip"
  - "Name"
  - "Non"
  - "Proprietary"
  - "VariantPreCompile"
  - "enumeration"
  - "global"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Name"
  - "Proprietary"
  - "Specifies"
  - "That"
  - "able"
  - "available"
  - "communication"
  - "completion"
  - "core"
  - "enabled"
  - "errors"
  - "feature"
  - "integer"
  - "loop"
  - "loops"
  - "make"
  - "mapping"
  - "maximum"
  - "means"
  - "multi"
  - "multiple"
  - "order"
  - "partition"
  - "partitions"
  - "raised"
  - "reception"
  - "reporting"
  - "sending"
  - "timeout"
  - "until"
  - "wait"
  - "will"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "EcuC"
  - "EcucPartition"
  - "EcucPartitionCollec"
  - "Flagchip"
  - "Name"
  - "Proprietary"
  - "asynchronously"
  - "destination"
  - "global"
  - "packet"
  - "receives"
  - "receiving"
  - "resets"
  - "tion"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "EcuC"
  - "EcucPartition"
  - "EcucPartitionCollec"
  - "Flagchip"
  - "Identifies"
  - "MCU"
  - "Maps"
  - "Module"
  - "Proprietary"
  - "Selects"
  - "baudrate"
  - "configure"
  - "destination"
  - "into"
  - "mapped"
  - "one"
  - "partition"
  - "partitions"
  - "referenced"
  - "set"
  - "single"
  - "subset"
  - "tion"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Identifies"
  - "Proprietary"
  - "baudrate"
  - "custom"
  - "desire"
  - "value"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "AsyncSend"
  - "Confidential"
  - "Configures"
  - "Dma"
  - "DmaChannelConfig"
  - "DmaConfigSet"
  - "Flagchip"
  - "Identifies"
  - "Mcal"
  - "Proprietary"
  - "baudrate"
  - "custom"
  - "maHwUnit"
  - "mechanism"
  - "parity"
  - "set"
  - "value"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Minor"
  - "Name"
  - "Proprietary"
  - "appropriate"
  - "checks"
  - "control"
  - "enables"
  - "false"
  - "flow"
  - "loopback"
  - "specification"
  - "word"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "Configures"
  - "Flagchip"
  - "Major"
  - "Name"
  - "Proprietary"
  - "about"
  - "aggregated"
  - "all"
  - "appropriate"
  - "checks"
  - "enables"
  - "false"
  - "flag"
  - "information"
  - "modules"
  - "published"
  - "received"
  - "set"
  - "specification"
  - "that"
  - "versions"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Implementation"
  - "Major"
  - "Minor"
  - "Name"
  - "Note"
  - "Proprietary"
  - "Specific"
  - "appropriate"
  - "numbering"
  - "specification"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
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
  - "numbering"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Generate"
  - "Port"
  - "Proprietary"
  - "Set"
  - "configurations"
  - "configure"
  - "corresponding"
  - "files"
  - "follows"
  - "general"
  - "need"
  - "pin"
  - "you"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47`
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
- `physical_pages`: `2,3,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0005-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0028-001", "TBL-0029-001", "TBL-0030-001", "TBL-0031-001", "TBL-0032-001", "TBL-0033-001"]
- `message`: "34 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,7,13,14,15,16`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0007-001", "FIG-0013-001", "FIG-0014-001", "FIG-0015-001", "FIG-0016-001"]
- `message`: "7 generated visual anchors have no formal source figure number."
- `recommended_action`: "Use source PDF page to inspect vector graphics or screenshots."

### WARN-0006
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

### WARN-0007
- `severity`: `medium`
- `category`: `revision_history`
- `physical_pages`: `1,2`
- `affected_ids`: []
- `message`: "Visible cover revision is Rev.A0 while Revision History includes an A1 row dated 2025/12/12. Manifest preserves the source content and SHA256 without reconciling this inconsistency."
- `recommended_action`: "Use source PDF page 1 and page 2 to confirm the intended revision before relying on revision-specific API behavior such as Uart_AsyncReceive."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `47`
- `indexed_physical_pages_count`: `47`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `155`
- `table_index_count`: `34`
- `figure_index_count`: `71`
- `symbol_index_count`: `274`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `e8feb9374ab9c1473c110a29c8170ea1e3a5dd56b9e9029d029b765f7be20df4`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `365`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `7`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
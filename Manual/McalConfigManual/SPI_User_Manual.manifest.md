---
manifest_schema_version: "1.1"
source_pdf: "SPI_User_Manual.pdf"
source_pdf_sha256: "ed9b859820d7e9c4850a557b04229274ce6a2c130468cf501dfb170da83fef54"
source_pdf_size_bytes: 5819761
pdf_page_count: 79
generated_at: "2026-06-19T14:31:17Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched-spi-ssi-trgsel-uart"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: SPI_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `SPI_User_Manual.pdf`
- `source_pdf_sha256`: `ed9b859820d7e9c4850a557b04229274ce6a2c130468cf501dfb170da83fef54`
- `source_pdf_size_bytes`: `5819761`
- `pdf_page_count`: `79`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx SPI User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T14:31:17Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched-spi-ssi-trgsel-uart`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `58`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL SPI module - User Manual"
- `module_scope`: "SPI driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 SPI Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["SPI", "Serial Peripheral Interface Handler/Driver", "AUTOSAR_SWS_SPIHandlerDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Spi", "FCSpi", "FCSPi", "FCSPI", "SchM_Spi"]
- `summary`: "This 79-page user manual indexes SPI content across source physical pages 1-79, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["SPI", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx SPI User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["SPI", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SPI", "Spi", "FC7xxx", "Spi_version", "Spi_Cfg", "Spi_ChnlAttrsType", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SPI", "Spi", "FC7xxx", "Spi_version", "Spi_Cfg", "Spi_ChnlAttrsType", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "Table of Contents"

### SEC-0004-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SPI", "Spi", "AsyncTransmit", "FC7xxx", "Spi_FCSpi", "LEVEL", "SyncTransmit", "IMPLEMENTATION_CONFIG_VARIANT"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "SPI Introduction"
- `path`: "Chapter 1 SPI Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SPI", "Handler", "ECU", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_SPIHandlerDriver", "SWS", "could"]
- `anchor`: "Chapter 1 SPI Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 SPI Introduction / 1.1 Requirements"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SPI", "Handler", "ECU", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_SPIHandlerDriver", "SWS", "could"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 SPI Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SPI", "Handler", "ECU", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_SPIHandlerDriver", "SWS", "could"]
- `anchor`: "1.2"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `51`
- `printed_page_start`: `6`
- `printed_page_end`: `51`
- `keywords`: ["SPI", "define", "Sequence", "Job", "Diagram", "FC7xxx", "void", "FCSPI"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.1 File Structure"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SPI", "Spi", "FC7xxx", "SPI_PHYUNIT_SYNC_U8", "Structure", "define", "Indicates", "unit"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.2 Macros"
- `physical_page_start`: `6`
- `physical_page_end`: `13`
- `printed_page_start`: `6`
- `printed_page_end`: `13`
- `keywords`: ["define", "SPI", "Spi", "STD_OFF", "STD_ON", "FC7xxx", "mode", "called"]
- `anchor`: "2.2"

### SEC-002-002-001
- `source_number`: `2.2.1`
- `title`: "Macros in Spi.h"
- `path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `physical_page_start`: `6`
- `physical_page_end`: `8`
- `printed_page_start`: `6`
- `printed_page_end`: `8`
- `keywords`: ["SPI", "define", "Spi", "called", "wrong", "FC7xxx", "unit", "SPI_GETSTATUS_ID"]
- `anchor`: "2.2.1"

### SEC-002-002-002
- `source_number`: `2.2.2`
- `title`: "Macros in Spi_version.h"
- `path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.2 Macros in Spi_version.h"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SPI", "define", "FC7xxx", "SPI_SYNCTRANSMIT_ID", "SPI_GETHWUNITSTATUS_ID", "SPI_CANCEL_ID", "SPI_SETASYNCMODE_ID", "SPI_MAINFUNCTION_HANDLING_ID"]
- `anchor`: "2.2.2"

### SEC-002-002-003
- `source_number`: `2.2.3`
- `title`: "Macros in Spi_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `physical_page_start`: `10`
- `physical_page_end`: `13`
- `printed_page_start`: `10`
- `printed_page_end`: `13`
- `keywords`: ["define", "SPI", "STD_OFF", "STD_ON", "OFF", "Defines", "FC7xxx", "Switches"]
- `anchor`: "2.2.3"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.3 Enums"
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["SPI", "Spi", "Job", "has", "typedef", "Enumeration", "Values", "transmission"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Enumerations in Spi.h"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h"
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["SPI", "Spi", "Job", "has", "typedef", "Enumeration", "Values", "transmission"]
- `anchor`: "2.3.1"

### SEC-002-003-001-001
- `source_number`: `2.3.1.1`
- `title`: "Spi_JobResultType"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.1 Spi_JobResultType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi", "has", "transmission", "last", "Job", "Spi_JobResultType", "Enumeration"]
- `anchor`: "2.3.1.1"

### SEC-002-003-001-002
- `source_number`: `2.3.1.2`
- `title`: "Spi_SeqResultType"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.2 Spi_SeqResultType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi", "has", "transmission", "last", "Job", "Spi_JobResultType", "Enumeration"]
- `anchor`: "2.3.1.2"

### SEC-002-003-001-003
- `source_number`: `2.3.1.3`
- `title`: "Spi_AsyncModeType"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.3 Spi_AsyncModeType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi", "has", "transmission", "last", "Job", "Spi_JobResultType", "Enumeration"]
- `anchor`: "2.3.1.3"

### SEC-002-003-001-004
- `source_number`: `2.3.1.4`
- `title`: "SPI_MasterSlaveModeType"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.4 SPI_MasterSlaveModeType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi", "has", "transmission", "last", "Job", "Spi_JobResultType", "Enumeration"]
- `anchor`: "2.3.1.4"

### SEC-002-003-001-005
- `source_number`: `2.3.1.5`
- `title`: "SPI_IbEbBufferType"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.5 SPI_IbEbBufferType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["SPI", "Spi", "typedef", "SPI_IbEbBufferType", "buffer", "Spi_StatusType", "Spi_DataBufferType", "Specifies"]
- `anchor`: "2.3.1.5"

### SEC-002-003-001-006
- `source_number`: `2.3.1.6`
- `title`: "Spi_StatusType"
- `path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.6 Spi_StatusType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["SPI", "Spi", "typedef", "SPI_IbEbBufferType", "buffer", "Spi_StatusType", "Spi_DataBufferType", "Specifies"]
- `anchor`: "2.3.1.6"

### SEC-002-005
- `source_number`: `2.5`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.5 Structures"
- `physical_page_start`: `16`
- `physical_page_end`: `24`
- `printed_page_start`: `16`
- `printed_page_end`: `24`
- `keywords`: ["SPI", "FCSPI", "Structure", "Data", "structure", "Diagram", "Fields", "const"]
- `anchor`: "2.5"

### SEC-002-005-001
- `source_number`: `2.5.1`
- `title`: "Spi_ChnlAttrsType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Spi_ChnlAttrsType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["SPI", "FCSPI", "attributes", "Spi_ChnlAttrsType", "SpiCoreUse", "CoreID", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "2.5.1"

### SEC-002-005-002
- `source_number`: `2.5.2`
- `title`: "SPI_ChannelsAttrsType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.2 SPI_ChannelsAttrsType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["SPI", "FCSPI", "attributes", "Spi_ChnlAttrsType", "SpiCoreUse", "CoreID", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "2.5.2"

### SEC-002-005-003
- `source_number`: `2.5.3`
- `title`: "Spi_DeviceAttrType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.3 Spi_DeviceAttrType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["SPI", "FCSPI", "attributes", "Spi_ChnlAttrsType", "SpiCoreUse", "CoreID", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "2.5.3"

### SEC-002-005-004
- `source_number`: `2.5.4`
- `title`: "Spi_ExDevicesAttrsType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType", "FC7xxx", "Structure", "structure"]
- `anchor`: "2.5.4"

### SEC-002-005-005
- `source_number`: `2.5.5`
- `title`: "Spi_SeqCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.5 Spi_SeqCfgType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType", "FC7xxx", "Structure", "structure"]
- `anchor`: "2.5.5"

### SEC-002-005-006
- `source_number`: `2.5.6`
- `title`: "Spi_SeqsCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.6 Spi_SeqsCfgType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType", "FC7xxx", "Structure", "structure"]
- `anchor`: "2.5.6"

### SEC-002-005-007
- `source_number`: `2.5.7`
- `title`: "Spi_SeqStatType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["SPI", "Spi_SeqCfgType", "Spi_SeqStatType", "Spi_JobStatType", "FC7xxx", "const", "SequenceCfg", "sequence"]
- `anchor`: "2.5.7"

### SEC-002-005-008
- `source_number`: `2.5.8`
- `title`: "Spi_JobStatType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.8 Spi_JobStatType"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["SPI", "Spi_SeqCfgType", "Spi_SeqStatType", "Spi_JobStatType", "FC7xxx", "const", "SequenceCfg", "sequence"]
- `anchor`: "2.5.8"

### SEC-002-005-009
- `source_number`: `2.5.9`
- `title`: "Spi_JobCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SPI", "Spi_JobCfgType", "FC7xxx", "Spi_JobResultType", "eJobResult", "Spi_SeqStateType", "pAsyncCurSeqStat", "Spi_JobType"]
- `anchor`: "2.5.9"

### SEC-002-005-010
- `source_number`: `2.5.10`
- `title`: "Spi_JobsCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.10 Spi_JobsCfgType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["SPI", "Spi_PfnNotifyType", "tExternalDev", "Spi_JobsCfgType", "FC7xxx", "Spi_ChannelType", "pcChnlsArray", "pfnJobEndNotify"]
- `anchor`: "2.5.10"

### SEC-002-005-011
- `source_number`: `2.5.11`
- `title`: "Spi_ChannelbufferType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.11 Spi_ChannelbufferType"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SPI", "Spi_ChannelbufferType", "Spi_DataBufferType", "Spi_ChannelStateType", "FC7xxx", "Diagram", "Data", "Fields"]
- `anchor`: "2.5.11"

### SEC-002-005-012
- `source_number`: `2.5.12`
- `title`: "Spi_ChannelStateType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.12 Spi_ChannelStateType"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SPI", "Spi_ChannelbufferType", "Spi_DataBufferType", "Spi_ChannelStateType", "FC7xxx", "Diagram", "Data", "Fields"]
- `anchor`: "2.5.12"

### SEC-002-005-013
- `source_number`: `2.5.13`
- `title`: "Spi_ChnlCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx", "Structure", "structure", "channel"]
- `anchor`: "2.5.13"

### SEC-002-005-014
- `source_number`: `2.5.14`
- `title`: "Spi_ChannelsCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.14 Spi_ChannelsCfgType"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx", "Structure", "structure", "channel"]
- `anchor`: "2.5.14"

### SEC-002-005-015
- `source_number`: `2.5.15`
- `title`: "Spi_HwUnitCfgType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.15 Spi_HwUnitCfgType"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx", "Structure", "structure", "channel"]
- `anchor`: "2.5.15"

### SEC-002-005-016
- `source_number`: `2.5.16`
- `title`: "Spi_HwUnitsConfigType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["FCSPI", "SPI", "DMA", "Spi_HwUnitsConfigType", "Spi_HwScheduleQueueType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "2.5.16"

### SEC-002-005-017
- `source_number`: `2.5.17`
- `title`: "Spi_HwScheduleQueueType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.17 Spi_HwScheduleQueueType"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["FCSPI", "SPI", "DMA", "Spi_HwUnitsConfigType", "Spi_HwScheduleQueueType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "2.5.17"

### SEC-002-005-018
- `source_number`: `2.5.18`
- `title`: "Spi_ChnJobSeqHwStateType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.18 Spi_ChnJobSeqHwStateType"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["SPI", "FCSPI", "state", "Spi_ChnJobSeqHwStateType", "Spi_ConfigType", "FC7xxx", "queue", "each"]
- `anchor`: "2.5.18"

### SEC-002-005-019
- `source_number`: `2.5.19`
- `title`: "Spi_ConfigType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.19 Spi_ConfigType"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["SPI", "FCSPI", "state", "Spi_ChnJobSeqHwStateType", "Spi_ConfigType", "FC7xxx", "queue", "each"]
- `anchor`: "2.5.19"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.6 API Functions"
- `physical_page_start`: `25`
- `physical_page_end`: `30`
- `printed_page_start`: `25`
- `printed_page_end`: `30`
- `keywords`: ["SPI", "Std_ReturnType", "FCSPI", "Spi", "Diagram", "Returns", "Sequence", "void"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Functions in Spi.h"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h"
- `physical_page_start`: `25`
- `physical_page_end`: `30`
- `printed_page_start`: `25`
- `printed_page_end`: `30`
- `keywords`: ["SPI", "Std_ReturnType", "FCSPI", "Spi", "Diagram", "Returns", "Sequence", "void"]
- `anchor`: "2.6.1"

### SEC-002-006-001-001
- `source_number`: `2.6.1.1`
- `title`: "void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["SPI", "FCSPI", "Spi", "const", "defined", "Pointer", "ConfigPtr", "Number"]
- `anchor`: "2.6.1.1"

### SEC-002-006-001-002
- `source_number`: `2.6.1.2`
- `title`: "Std_ReturnType Spi_DeInit(void)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.2 Std_ReturnType Spi_DeInit(void)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["SPI", "FCSPI", "Spi", "const", "defined", "Pointer", "ConfigPtr", "Number"]
- `anchor`: "2.6.1.2"

### SEC-002-006-001-003
- `source_number`: `2.6.1.3`
- `title`: "Spi_StatusType Spi_GetStatus(void)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType"]
- `anchor`: "2.6.1.3"

### SEC-002-006-001-004
- `source_number`: `2.6.1.4`
- `title`: "Spi_JobResultType Spi_GetJobResult(Spi_JobType Job)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.4 Spi_JobResultType Spi_GetJobResult(Spi_JobType Job)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType"]
- `anchor`: "2.6.1.4"

### SEC-002-006-001-005
- `source_number`: `2.6.1.5`
- `title`: "Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.5 Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType"]
- `anchor`: "2.6.1.5"

### SEC-002-006-001-006
- `source_number`: `2.6.1.6`
- `title`: "Std_ReturnType Spi_AsyncTransmit(Spi_SequenceType Sequence)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.6 Std_ReturnType Spi_AsyncTransmit(Spi_SequenceType Sequence)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType"]
- `anchor`: "2.6.1.6"

### SEC-002-006-001-007
- `source_number`: `2.6.1.7`
- `title`: "void Spi_MainFunction_Handling(void)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SPI", "void", "Spi_MainFunction_Handling", "Spi_AfterOneJobTransferDone", "SPI_JobParamsType", "pcJobCfg", "FC7xxx", "ISR"]
- `anchor`: "2.6.1.7"

### SEC-002-006-001-008
- `source_number`: `2.6.1.8`
- `title`: "void Spi_AfterOneJobTransferDone (const SPI_JobParamsType *pcJobCfg)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.8 void Spi_AfterOneJobTransferDone (const SPI_JobParamsType *pcJobCfg)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SPI", "void", "Spi_MainFunction_Handling", "Spi_AfterOneJobTransferDone", "SPI_JobParamsType", "pcJobCfg", "FC7xxx", "ISR"]
- `anchor`: "2.6.1.8"

### SEC-002-006-001-009
- `source_number`: `2.6.1.9`
- `title`: "void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SPI", "Std_ReturnType", "Spi_ChannelType", "Channel", "Spi_DataBufferType", "DataBufferPtr", "Diagram", "Returns"]
- `anchor`: "2.6.1.9"

### SEC-002-006-001-010
- `source_number`: `2.6.1.10`
- `title`: "Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.10 Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SPI", "Std_ReturnType", "Spi_ChannelType", "Channel", "Spi_DataBufferType", "DataBufferPtr", "Diagram", "Returns"]
- `anchor`: "2.6.1.10"

### SEC-002-006-001-011
- `source_number`: `2.6.1.11`
- `title`: "Std_ReturnType Spi_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType *DataBufferPointer)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.11 Std_ReturnType Spi_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType *DataBufferPointer)"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SPI", "Std_ReturnType", "Spi_ChannelType", "Channel", "Spi_DataBufferType", "DataBufferPtr", "Diagram", "Returns"]
- `anchor`: "2.6.1.11"

### SEC-002-006-001-012
- `source_number`: `2.6.1.12`
- `title`: "Std_ReturnType"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.12 Std_ReturnType"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType", "Sequence", "data", "SrcDataBufferPtr"]
- `anchor`: "2.6.1.12"

### SEC-002-006-001-013
- `source_number`: `2.6.1.13`
- `title`: "Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.13 Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType", "Sequence", "data", "SrcDataBufferPtr"]
- `anchor`: "2.6.1.13"

### SEC-002-006-001-014
- `source_number`: `2.6.1.14`
- `title`: "Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.14 Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType", "Sequence", "data", "SrcDataBufferPtr"]
- `anchor`: "2.6.1.14"

### SEC-002-006-001-015
- `source_number`: `2.6.1.15`
- `title`: "void Spi_Cancel(Spi_SequenceType Sequence)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.15 void Spi_Cancel(Spi_SequenceType Sequence)"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType", "Sequence", "data", "SrcDataBufferPtr"]
- `anchor`: "2.6.1.15"

### SEC-002-006-001-016
- `source_number`: `2.6.1.16`
- `title`: "Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["SPI", "Std_ReturnType", "AsyncMode", "Spi_AsyncModeType", "tHwUnit", "Spi_SetAsyncMode", "mode", "SPI_POLLING_MODE"]
- `anchor`: "2.6.1.16"

### SEC-002-006-001-017
- `source_number`: `2.6.1.17`
- `title`: "Std_ReturnType SPI_SetHwAsyncMode(Spi_HWUnitType tHwUnit, Spi_AsyncModeType AsyncMode)"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.17 Std_ReturnType SPI_SetHwAsyncMode(Spi_HWUnitType tHwUnit, Spi_AsyncModeType AsyncMode)"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["SPI", "Std_ReturnType", "AsyncMode", "Spi_AsyncModeType", "tHwUnit", "Spi_SetAsyncMode", "mode", "SPI_POLLING_MODE"]
- `anchor`: "2.6.1.17"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "Driver Functions"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions"
- `physical_page_start`: `31`
- `physical_page_end`: `37`
- `printed_page_start`: `31`
- `printed_page_end`: `37`
- `keywords`: ["FCSPI", "SPI", "void", "Spi", "tVirHwUnit", "Diagram", "which", "Returns"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Spi_FCSpi.h"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h"
- `physical_page_start`: `31`
- `physical_page_end`: `37`
- `printed_page_start`: `31`
- `printed_page_end`: `37`
- `keywords`: ["FCSPI", "SPI", "void", "Spi", "tVirHwUnit", "Diagram", "which", "Returns"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCSPI", "SPI", "tVirHwUnit", "SpiCoreID", "void", "Spi_HWUnitType", "Spi_LL_Init", "Spi_LL_DeInit"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Spi_LL_DeInit(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.2 void Spi_LL_DeInit(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCSPI", "SPI", "tVirHwUnit", "SpiCoreID", "void", "Spi_HWUnitType", "Spi_LL_Init", "Spi_LL_DeInit"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "void Spi_LL_JobTransfer (const Spi_JobCfgType * pcJobCfg)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.3 void Spi_LL_JobTransfer (const Spi_JobCfgType * pcJobCfg)"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["FCSPI", "SPI", "tVirHwUnit", "SpiCoreID", "void", "Spi_HWUnitType", "Spi_LL_Init", "Spi_LL_DeInit"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SPI", "FCSPI", "Spi", "tVirHwUnit", "Spi_HWUnitType", "AsyncMode", "void", "Spi_LL_IrqConfig"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "void Spi_LL_IrqPoll(Spi_HWUnitType tVirHwUnit)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.5 void Spi_LL_IrqPoll(Spi_HWUnitType tVirHwUnit)"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SPI", "FCSPI", "Spi", "tVirHwUnit", "Spi_HWUnitType", "AsyncMode", "void", "Spi_LL_IrqConfig"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["FCSPI", "SPI", "pDevState", "u8HwInstIdx", "Spi_LL_IsrFifoRx", "Spi_DeviceStateType", "FC7xxx", "tVirHwUnit"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["SPI", "FCSPI", "pDevState", "DMA", "Spi_DeviceStateType", "void", "Spi_LL_IsrDmaTx", "ISR"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "void Spi_LL_IsrDmaRx (Spi_DeviceStateType * pDevState)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.8 void Spi_LL_IsrDmaRx (Spi_DeviceStateType * pDevState)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["SPI", "FCSPI", "pDevState", "DMA", "Spi_DeviceStateType", "void", "Spi_LL_IsrDmaTx", "ISR"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType", "SpiCoreID", "pDevState", "void"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "Std_ReturnType Spi_LL_SyncTransfer (Spi_SequenceType Sequence , uint8 SpiCoreID)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.10 Std_ReturnType Spi_LL_SyncTransfer (Spi_SequenceType Sequence , uint8 SpiCoreID)"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType", "SpiCoreID", "pDevState", "void"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.11 void"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType", "SpiCoreID", "pDevState", "void"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["SPI", "jobs", "sequence", "Std_ReturnType", "Spi_LinkJobsToSequence", "Spi_SequenceType", "Spi_SeqCfgType", "its"]
- `anchor`: "2.7.1.12"

### SEC-002-007-001-013
- `source_number`: `2.7.1.13`
- `title`: "void Spi_StartFirstJobScheduleNext(Spi_HwScheduleQueueType *pHWUnitQueue)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.13 void Spi_StartFirstJobScheduleNext(Spi_HwScheduleQueueType *pHWUnitQueue)"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["SPI", "jobs", "sequence", "Std_ReturnType", "Spi_LinkJobsToSequence", "Spi_SequenceType", "Spi_SeqCfgType", "its"]
- `anchor`: "2.7.1.13"

### SEC-002-007-001-014
- `source_number`: `2.7.1.14`
- `title`: "void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["SPI", "Spi", "tRemainCnt", "Spi_UnlinkRemainJobsInSeq", "Spi_JobType", "Spi_SeqCfgType", "FC7xxx", "pHWUnitQueue"]
- `anchor`: "2.7.1.14"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram"
- `physical_page_start`: `38`
- `physical_page_end`: `51`
- `printed_page_start`: `38`
- `printed_page_end`: `51`
- `keywords`: ["SPI", "Job", "Sequence", "Channels", "belong", "Jobs", "FC7xxx", "Many"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Initialization"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Initialization"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["SPI", "FC7xxx", "DeInit", "Sequence", "Diagram", "Initialization", "Modes", "Transitions"]
- `anchor`: "2.8.1"

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: "Modes Transitions"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Modes Transitions"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["SPI", "FC7xxx", "DeInit", "Sequence", "Diagram", "Initialization", "Modes", "Transitions"]
- `anchor`: "2.8.2"

### SEC-002-008-003
- `source_number`: `2.8.3`
- `title`: "Write/AsyncTransmit/Read (IB)"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB)"
- `physical_page_start`: `39`
- `physical_page_end`: `43`
- `printed_page_start`: `39`
- `printed_page_end`: `43`
- `keywords`: ["SPI", "Job", "Sequence", "Channels", "belong", "FC7xxx", "which", "Jobs"]
- `anchor`: "2.8.3"

### SEC-002-008-003-001
- `source_number`: `2.8.3.1`
- `title`: "One Channel, One Job Then One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.1 One Channel, One Job Then One Sequence"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB", "FC7xxx"]
- `anchor`: "2.8.3.1"

### SEC-002-008-003-002
- `source_number`: `2.8.3.2`
- `title`: "Many Channels, One Job Then One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.2 Many Channels, One Job Then One Sequence"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB", "FC7xxx"]
- `anchor`: "2.8.3.2"

### SEC-002-008-003-003
- `source_number`: `2.8.3.3`
- `title`: "Many Channels, Many Jobs and One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `physical_page_start`: `40`
- `physical_page_end`: `41`
- `printed_page_start`: `40`
- `printed_page_end`: `41`
- `keywords`: ["SPI", "FC7xxx", "Jobs", "Channels", "Sequence", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB"]
- `anchor`: "2.8.3.3"

### SEC-002-008-003-004
- `source_number`: `2.8.3.4`
- `title`: "Many Channels, Many Jobs and Many Sequences"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `physical_page_start`: `42`
- `physical_page_end`: `43`
- `printed_page_start`: `42`
- `printed_page_end`: `43`
- `keywords`: ["SPI", "FC7xxx", "Channels", "belong", "which", "Many", "Jobs", "Spi_WriteIB"]
- `anchor`: "2.8.3.4"

### SEC-002-008-004
- `source_number`: `2.8.4`
- `title`: "Setup/AsyncTransmit (EB)"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB)"
- `physical_page_start`: `44`
- `physical_page_end`: `48`
- `printed_page_start`: `44`
- `printed_page_end`: `48`
- `keywords`: ["SPI", "Job", "Sequence", "Channels", "belong", "FC7xxx", "which", "One"]
- `anchor`: "2.8.4"

### SEC-002-008-004-001
- `source_number`: `2.8.4.1`
- `title`: "One Channel, One Job Then One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.1 One Channel, One Job Then One Sequence"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_SetupEB", "Spi_AsyncTransmit", "FC7xxx", "AsyncTransmit"]
- `anchor`: "2.8.4.1"

### SEC-002-008-004-002
- `source_number`: `2.8.4.2`
- `title`: "Many Channels, One Job Then One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.2 Many Channels, One Job Then One Sequence"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_SetupEB", "Spi_AsyncTransmit", "FC7xxx", "AsyncTransmit"]
- `anchor`: "2.8.4.2"

### SEC-002-008-004-003
- `source_number`: `2.8.4.3`
- `title`: "Many Channels, Many Jobs and One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `physical_page_start`: `45`
- `physical_page_end`: `46`
- `printed_page_start`: `45`
- `printed_page_end`: `46`
- `keywords`: ["SPI", "FC7xxx", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_AsyncTransmit", "Job"]
- `anchor`: "2.8.4.3"

### SEC-002-008-004-004
- `source_number`: `2.8.4.4`
- `title`: "Many Channels, Many Jobs and Many Sequences"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `physical_page_start`: `47`
- `physical_page_end`: `48`
- `printed_page_start`: `47`
- `printed_page_end`: `48`
- `keywords`: ["SPI", "FC7xxx", "Channels", "Job", "belong", "which", "Many", "Spi_SetupEB"]
- `anchor`: "2.8.4.4"

### SEC-002-008-004-005
- `source_number`: `2.8.4.5`
- `title`: "Mixed Jobs Transmission"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.5 Mixed Jobs Transmission"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["SPI", "Jobs", "Channels", "SyncTransmit", "FC7xxx", "priority", "LEVEL", "Sequence"]
- `anchor`: "2.8.4.5"

### SEC-002-008-005
- `source_number`: `2.8.5`
- `title`: "LEVEL 0 SyncTransmit Diagrams"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams"
- `physical_page_start`: `49`
- `physical_page_end`: `51`
- `printed_page_start`: `49`
- `printed_page_end`: `51`
- `keywords`: ["SPI", "Jobs", "Channels", "Sequence", "belong", "FC7xxx", "priority", "SyncTransmit"]
- `anchor`: "2.8.5"

### SEC-002-008-005-001
- `source_number`: `2.8.5.1`
- `title`: "Write/SyncTransmit/Read (IB): Many Channels, Many Jobs and One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.1 Write/SyncTransmit/Read (IB): Many Channels, Many Jobs and One Sequence"
- `physical_page_start`: `49`
- `physical_page_end`: `49`
- `printed_page_start`: `49`
- `printed_page_end`: `49`
- `keywords`: ["SPI", "Jobs", "Channels", "SyncTransmit", "FC7xxx", "priority", "LEVEL", "Sequence"]
- `anchor`: "2.8.5.1"

### SEC-002-008-005-002
- `source_number`: `2.8.5.2`
- `title`: "Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `physical_page_start`: `50`
- `physical_page_end`: `51`
- `printed_page_start`: `50`
- `printed_page_end`: `51`
- `keywords`: ["SPI", "FC7xxx", "SyncTransmit", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_SyncTransmit"]
- `anchor`: "2.8.5.2"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `52`
- `physical_page_end`: `75`
- `printed_page_start`: `52`
- `printed_page_end`: `75`
- `keywords`: ["Screenshot", "Properties", "Variable", "Property", "SPI", "Origin", "AUTOSAR_ECUC", "Default"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `52`
- `physical_page_end`: `52`
- `printed_page_start`: `52`
- `printed_page_end`: `52`
- `keywords`: ["SPI", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `53`
- `physical_page_end`: `59`
- `printed_page_start`: `53`
- `printed_page_end`: `59`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "Variable", "AUTOSAR_ECUC", "SCK", "PCS"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `53`
- `physical_page_end`: `53`
- `printed_page_start`: `53`
- `printed_page_end`: `53`
- `keywords`: ["SPI", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPreCompile", "SpiDriver", "FC7xxx", "VariantLinkTime", "VariantPostBuild", "AUTOSAR"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "SpiDriver"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver"
- `physical_page_start`: `53`
- `physical_page_end`: `59`
- `printed_page_start`: `53`
- `printed_page_end`: `59`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "Variable", "AUTOSAR_ECUC", "SCK", "PCS"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "SpiMaxChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "SpiMaxJob"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.2 SpiMaxJob"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "3.2.2.2"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "SpiMaxSequence"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.3 SpiMaxSequence"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "3.2.2.3"

### SEC-003-002-002-004
- `source_number`: `3.2.2.4`
- `title`: "SpiChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.4 SpiChannel"
- `physical_page_start`: `54`
- `physical_page_end`: `54`
- `printed_page_start`: `54`
- `printed_page_end`: `54`
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "3.2.2.4"

### SEC-003-002-002-005
- `source_number`: `3.2.2.5`
- `title`: "SpiChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "3.2.2.5"

### SEC-003-002-002-006
- `source_number`: `3.2.2.6`
- `title`: "SpiChannelType"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.6 SpiChannelType"
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "3.2.2.6"

### SEC-003-002-002-007
- `source_number`: `3.2.2.7`
- `title`: "SpiDataWidth"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.7 SpiDataWidth"
- `physical_page_start`: `55`
- `physical_page_end`: `55`
- `printed_page_start`: `55`
- `printed_page_end`: `55`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "3.2.2.7"

### SEC-003-002-002-008
- `source_number`: `3.2.2.8`
- `title`: "SpiDefaultData"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "3.2.2.8"

### SEC-003-002-002-009
- `source_number`: `3.2.2.9`
- `title`: "SpiEbMaxLength"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.9 SpiEbMaxLength"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "3.2.2.9"

### SEC-003-002-002-010
- `source_number`: `3.2.2.10`
- `title`: "SpiIbNBuffers"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.10 SpiIbNBuffers"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "3.2.2.10"

### SEC-003-002-002-011
- `source_number`: `3.2.2.11`
- `title`: "SpiTransferStart"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.11 SpiTransferStart"
- `physical_page_start`: `56`
- `physical_page_end`: `56`
- `printed_page_start`: `56`
- `printed_page_end`: `56`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "3.2.2.11"

### SEC-003-002-002-012
- `source_number`: `3.2.2.12`
- `title`: "SpiChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "3.2.2.12"

### SEC-003-002-002-013
- `source_number`: `3.2.2.13`
- `title`: "SpiExternalDevice"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.13 SpiExternalDevice"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "3.2.2.13"

### SEC-003-002-002-014
- `source_number`: `3.2.2.14`
- `title`: "SpiSlaveMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.14 SpiSlaveMode"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "3.2.2.14"

### SEC-003-002-002-015
- `source_number`: `3.2.2.15`
- `title`: "SpiBaudrate"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.15 SpiBaudrate"
- `physical_page_start`: `57`
- `physical_page_end`: `57`
- `printed_page_start`: `57`
- `printed_page_end`: `57`
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "3.2.2.15"

### SEC-003-002-002-016
- `source_number`: `3.2.2.16`
- `title`: "SpiCsIdentifier"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "3.2.2.16"

### SEC-003-002-002-017
- `source_number`: `3.2.2.17`
- `title`: "SpiCsPolarity"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.17 SpiCsPolarity"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "3.2.2.17"

### SEC-003-002-002-018
- `source_number`: `3.2.2.18`
- `title`: "SpiCsSelection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.18 SpiCsSelection"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "3.2.2.18"

### SEC-003-002-002-019
- `source_number`: `3.2.2.19`
- `title`: "SpiDataShiftEdge"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.19 SpiDataShiftEdge"
- `physical_page_start`: `58`
- `physical_page_end`: `58`
- `printed_page_start`: `58`
- `printed_page_end`: `58`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "3.2.2.19"

### SEC-003-002-002-020
- `source_number`: `3.2.2.20`
- `title`: "SpiEnableCs"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.20"

### SEC-003-002-002-021
- `source_number`: `3.2.2.21`
- `title`: "SpiHwUnit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.21 SpiHwUnit"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.21"

### SEC-003-002-002-022
- `source_number`: `3.2.2.22`
- `title`: "SpiShiftClockIdleLevel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.22 SpiShiftClockIdleLevel"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.22"

### SEC-003-002-002-023
- `source_number`: `3.2.2.23`
- `title`: "SpiTimeClk2Cs"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.23 SpiTimeClk2Cs"
- `physical_page_start`: `59`
- `physical_page_end`: `59`
- `printed_page_start`: `59`
- `printed_page_end`: `59`
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.23"

### SEC-000-001
- `source_number`: `0.000001`
- `title`: "3.2.2.24"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.24"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "0.000001"

### SEC-000-001-02
- `source_number`: `0.000001`
- `title`: "3.2.2.25"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.25"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "0.000001"

### SEC-000-001-03
- `source_number`: `0.000001`
- `title`: "3.2.2.26"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26"
- `physical_page_start`: `60`
- `physical_page_end`: `66`
- `printed_page_start`: `60`
- `printed_page_end`: `66`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "PCS", "SCK", "AUTOSAR_ECUC", "Origin"]
- `anchor`: "0.000001"

### SEC-003-002-002-027
- `source_number`: `3.2.2.27`
- `title`: "SpiPinConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `physical_page_start`: `60`
- `physical_page_end`: `60`
- `printed_page_start`: `60`
- `printed_page_end`: `60`
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "3.2.2.27"

### SEC-003-002-002-028
- `source_number`: `3.2.2.28`
- `title`: "SpiDeviceEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC"]
- `anchor`: "3.2.2.28"

### SEC-003-002-002-029
- `source_number`: `3.2.2.29`
- `title`: "SpiJob"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.29 SpiJob"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC"]
- `anchor`: "3.2.2.29"

### SEC-003-002-002-030
- `source_number`: `3.2.2.30`
- `title`: "SpiJobEndNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.30 SpiJobEndNotification"
- `physical_page_start`: `61`
- `physical_page_end`: `61`
- `printed_page_start`: `61`
- `printed_page_end`: `61`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC"]
- `anchor`: "3.2.2.30"

### SEC-003-002-002-031
- `source_number`: `3.2.2.31`
- `title`: "SpiJobStartNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.31"

### SEC-003-002-002-032
- `source_number`: `3.2.2.32`
- `title`: "SpiJobId"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.32 SpiJobId"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.32"

### SEC-003-002-002-033
- `source_number`: `3.2.2.33`
- `title`: "SpiJobPriority"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.33 SpiJobPriority"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.33"

### SEC-003-002-002-034
- `source_number`: `3.2.2.34`
- `title`: "SpiDeviceAssignment"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.34 SpiDeviceAssignment"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.34"

### SEC-003-002-002-035
- `source_number`: `3.2.2.35`
- `title`: "SpiChannelList"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.35 SpiChannelList"
- `physical_page_start`: `62`
- `physical_page_end`: `62`
- `printed_page_start`: `62`
- `printed_page_end`: `62`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "3.2.2.35"

### SEC-003-002-002-036
- `source_number`: `3.2.2.36`
- `title`: "SpiChannelIndex"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "3.2.2.36"

### SEC-003-002-002-037
- `source_number`: `3.2.2.37`
- `title`: "SpiChannelAssignment"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.37 SpiChannelAssignment"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "3.2.2.37"

### SEC-003-002-002-038
- `source_number`: `3.2.2.38`
- `title`: "SpiSequence"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.38 SpiSequence"
- `physical_page_start`: `63`
- `physical_page_end`: `63`
- `printed_page_start`: `63`
- `printed_page_end`: `63`
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "3.2.2.38"

### SEC-003-002-002-039
- `source_number`: `3.2.2.39`
- `title`: "SpiInterruptibleSequence"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification"]
- `anchor`: "3.2.2.39"

### SEC-003-002-002-040
- `source_number`: `3.2.2.40`
- `title`: "SpiSeqEndNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.40 SpiSeqEndNotification"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification"]
- `anchor`: "3.2.2.40"

### SEC-003-002-002-041
- `source_number`: `3.2.2.41`
- `title`: "SpiSequenceId"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.41 SpiSequenceId"
- `physical_page_start`: `64`
- `physical_page_end`: `64`
- `printed_page_start`: `64`
- `printed_page_end`: `64`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification"]
- `anchor`: "3.2.2.41"

### SEC-003-002-002-042
- `source_number`: `3.2.2.42`
- `title`: "SpiJobAssignment"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "3.2.2.42"

### SEC-003-002-002-043
- `source_number`: `3.2.2.43`
- `title`: "SpiHwUnitSynchronous"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.43 SpiHwUnitSynchronous"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "3.2.2.43"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "SpiGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral"
- `physical_page_start`: `65`
- `physical_page_end`: `66`
- `printed_page_start`: `65`
- `printed_page_end`: `66`
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "AUTOSAR_ECUC", "ECUC", "SpiHwUnitSynchronous", "Variable"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "SpiMulticoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.1 SpiMulticoreSupport"
- `physical_page_start`: `65`
- `physical_page_end`: `65`
- `printed_page_start`: `65`
- `printed_page_end`: `65`
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-002
- `source_number`: `3.2.3.2`
- `title`: "SpiKernelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "3.2.3.2"

### SEC-003-002-003-003
- `source_number`: `3.2.3.3`
- `title`: "SpiLevelDelivered"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.3 SpiLevelDelivered"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "3.2.3.3"

### SEC-003-002-003-004
- `source_number`: `3.2.3.4`
- `title`: "SpiChannelBuffersAllowed"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.4 SpiChannelBuffersAllowed"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "3.2.3.4"

### SEC-003-002-003-005
- `source_number`: `3.2.3.5`
- `title`: "SpiMainFunctionPeriod"
- `path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.5 SpiMainFunctionPeriod"
- `physical_page_start`: `66`
- `physical_page_end`: `66`
- `printed_page_start`: `66`
- `printed_page_end`: `66`
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "3.2.3.5"

### SEC-000-001-04
- `source_number`: `0.01`
- `title`: "3.2.3.6"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6"
- `physical_page_start`: `67`
- `physical_page_end`: `75`
- `printed_page_start`: `67`
- `printed_page_end`: `75`
- `keywords`: ["Variable", "SPI", "Screenshot", "Properties", "Property", "Origin", "SymbolicNameValue", "Spi"]
- `anchor`: "0.01"

### SEC-003-002-003-007
- `source_number`: `3.2.3.7`
- `title`: "SpiTransmitTimeout"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["SPI", "SymbolicNameValue", "Origin", "AUTOSAR_ECUC", "SpiTransmitTimeoutClockRef", "Variable", "Screenshot", "Properties"]
- `anchor`: "3.2.3.7"

### SEC-003-002-003-008
- `source_number`: `3.2.3.8`
- `title`: "SpiGlobalDmaEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.8 SpiGlobalDmaEnable"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["SPI", "SymbolicNameValue", "Origin", "AUTOSAR_ECUC", "SpiTransmitTimeoutClockRef", "Variable", "Screenshot", "Properties"]
- `anchor`: "3.2.3.8"

### SEC-003-002-003-009
- `source_number`: `3.2.3.9`
- `title`: "SpiInterruptibleSeqAllowed"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.9 SpiInterruptibleSeqAllowed"
- `physical_page_start`: `67`
- `physical_page_end`: `67`
- `printed_page_start`: `67`
- `printed_page_end`: `67`
- `keywords`: ["SPI", "SymbolicNameValue", "Origin", "AUTOSAR_ECUC", "SpiTransmitTimeoutClockRef", "Variable", "Screenshot", "Properties"]
- `anchor`: "3.2.3.9"

### SEC-003-002-003-010
- `source_number`: `3.2.3.10`
- `title`: "SpiSupportConcurrentSyncTransmit"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.10 SpiSupportConcurrentSyncTransmit"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["SPI", "BOOLEAN", "AUTOSAR_ECUC", "Origin", "Default", "OFF", "SpiSupportConcurrentSyncTransmit", "Screenshot"]
- `anchor`: "3.2.3.10"

### SEC-003-002-003-011
- `source_number`: `3.2.3.11`
- `title`: "SpiDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.11 SpiDevErrorDetect"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["SPI", "BOOLEAN", "AUTOSAR_ECUC", "Origin", "Default", "OFF", "SpiSupportConcurrentSyncTransmit", "Screenshot"]
- `anchor`: "3.2.3.11"

### SEC-003-002-003-012
- `source_number`: `3.2.3.12`
- `title`: "SpiHwStatusApi"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.12 SpiHwStatusApi"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["SPI", "BOOLEAN", "AUTOSAR_ECUC", "Origin", "Default", "OFF", "SpiSupportConcurrentSyncTransmit", "Screenshot"]
- `anchor`: "3.2.3.12"

### SEC-003-002-003-013
- `source_number`: `3.2.3.13`
- `title`: "SpiCancelApi"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.13 SpiCancelApi"
- `physical_page_start`: `68`
- `physical_page_end`: `68`
- `printed_page_start`: `68`
- `printed_page_end`: `68`
- `keywords`: ["SPI", "BOOLEAN", "AUTOSAR_ECUC", "Origin", "Default", "OFF", "SpiSupportConcurrentSyncTransmit", "Screenshot"]
- `anchor`: "3.2.3.13"

### SEC-003-002-003-014
- `source_number`: `3.2.3.14`
- `title`: "SpiVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "3.2.3.14"

### SEC-003-002-003-015
- `source_number`: `3.2.3.15`
- `title`: "SpiDeviceEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.15 SpiDeviceEcucPartitionRef"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "3.2.3.15"

### SEC-003-002-003-016
- `source_number`: `3.2.3.16`
- `title`: "SpiHwUnit"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.16 SpiHwUnit"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "3.2.3.16"

### SEC-003-002-003-017
- `source_number`: `3.2.3.17`
- `title`: "SpiHwUnitMode"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.17 SpiHwUnitMode"
- `physical_page_start`: `69`
- `physical_page_end`: `69`
- `printed_page_start`: `69`
- `printed_page_end`: `69`
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "3.2.3.17"

### SEC-003-002-003-018
- `source_number`: `3.2.3.18`
- `title`: "SpiSyncOrAsync"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property", "Origin", "SPI_MASTER", "SpiSyncOrAsync"]
- `anchor`: "3.2.3.18"

### SEC-003-002-003-019
- `source_number`: `3.2.3.19`
- `title`: "SpiHwUnitClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.19 SpiHwUnitClockRef"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property", "Origin", "SPI_MASTER", "SpiSyncOrAsync"]
- `anchor`: "3.2.3.19"

### SEC-003-002-003-020
- `source_number`: `3.2.3.20`
- `title`: "SpiAsyncMethod"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.20 SpiAsyncMethod"
- `physical_page_start`: `70`
- `physical_page_end`: `70`
- `printed_page_start`: `70`
- `printed_page_end`: `70`
- `keywords`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property", "Origin", "SPI_MASTER", "SpiSyncOrAsync"]
- `anchor`: "3.2.3.20"

### SEC-003-002-003-021
- `source_number`: `3.2.3.21`
- `title`: "SpiTxDmaChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "3.2.3.21"

### SEC-003-002-003-022
- `source_number`: `3.2.3.22`
- `title`: "SpiRxDmaChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.22 SpiRxDmaChannel"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "3.2.3.22"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "SpiDemEventParameterRefs"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.4 SpiDemEventParameterRefs"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "SPI_E_HARDWARE_ERROR"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.4 SpiDemEventParameterRefs / 3.2.4.1 SPI_E_HARDWARE_ERROR"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "SPI_E_TIMEOUT_ERROR"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.4 SpiDemEventParameterRefs / 3.2.4.2 SPI_E_TIMEOUT_ERROR"
- `physical_page_start`: `71`
- `physical_page_end`: `71`
- `printed_page_start`: `71`
- `printed_page_end`: `71`
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "3.2.4.2"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "SpiPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "SpiMaxHwUnit"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "3.2.5.1"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation"
- `physical_page_start`: `72`
- `physical_page_end`: `73`
- `printed_page_start`: `72`
- `printed_page_end`: `73`
- `keywords`: ["SPI", "Variable", "Screenshot", "Properties", "SymbolicNameValue", "Property", "Origin", "INTEGER_LABEL"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.1 ArReleaseMajorVersion"
- `physical_page_start`: `72`
- `physical_page_end`: `72`
- `printed_page_start`: `72`
- `printed_page_end`: `72`
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.3 ArReleaseRevisionVersion"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.4 SwMajorVersion"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.5 SwMinorVersion"
- `physical_page_start`: `73`
- `physical_page_end`: `73`
- `printed_page_start`: `73`
- `printed_page_end`: `73`
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "3.2.6.5"

### SEC-003-002-006-006
- `source_number`: `3.2.6.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.6"

### SEC-003-002-006-007
- `source_number`: `3.2.6.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.7 ModuleId"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.7"

### SEC-003-002-006-008
- `source_number`: `3.2.6.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.8 VendorId"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.8"

### SEC-003-002-007
- `source_number`: `3.2.7`
- `title`: "SpiExtendedFeatures"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures"
- `physical_page_start`: `74`
- `physical_page_end`: `75`
- `printed_page_start`: `74`
- `printed_page_end`: `75`
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "Screenshot", "Properties", "Property", "Origin", "INTEGER_LABEL"]
- `anchor`: "3.2.7"

### SEC-003-002-007-001
- `source_number`: `3.2.7.1`
- `title`: "SpiAllowBigSizeCollections"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.1 SpiAllowBigSizeCollections"
- `physical_page_start`: `74`
- `physical_page_end`: `74`
- `printed_page_start`: `74`
- `printed_page_end`: `74`
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.7.1"

### SEC-003-002-007-002
- `source_number`: `3.2.7.2`
- `title`: "SpiEnableHWUnitAsyncMode"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["SPI", "Variable", "SpiEnableHWUnitAsyncMode", "SymbolicNameValue", "SpiJobStartNotificationEnable", "SpiDisableDemReportErrorStatus", "FC7xxx", "SpiLevelDelivered"]
- `anchor`: "3.2.7.2"

### SEC-003-002-007-003
- `source_number`: `3.2.7.3`
- `title`: "SpiJobStartNotificationEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.3 SpiJobStartNotificationEnable"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["SPI", "Variable", "SpiEnableHWUnitAsyncMode", "SymbolicNameValue", "SpiJobStartNotificationEnable", "SpiDisableDemReportErrorStatus", "FC7xxx", "SpiLevelDelivered"]
- `anchor`: "3.2.7.3"

### SEC-003-002-007-004
- `source_number`: `3.2.7.4`
- `title`: "SpiDisableDemReportErrorStatus"
- `path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.4 SpiDisableDemReportErrorStatus"
- `physical_page_start`: `75`
- `physical_page_end`: `75`
- `printed_page_start`: `75`
- `printed_page_end`: `75`
- `keywords`: ["SPI", "Variable", "SpiEnableHWUnitAsyncMode", "SymbolicNameValue", "SpiJobStartNotificationEnable", "SpiDisableDemReportErrorStatus", "FC7xxx", "SpiLevelDelivered"]
- `anchor`: "3.2.7.4"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `76`
- `physical_page_end`: `79`
- `printed_page_start`: `76`
- `printed_page_end`: `79`
- `keywords`: ["SPI", "FCSPI", "tab", "FC7xxx", "Configure", "LEVEL", "AUTOSAR", "SpiLevelDelivered"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `76`
- `physical_page_end`: `76`
- `printed_page_start`: `76`
- `printed_page_end`: `76`
- `keywords`: ["SPI", "LEVEL", "FC7xxx", "AUTOSAR", "SpiLevelDelivered", "NULL_PTR", "SpiInterruptibleSeqAllowed", "SpiInterruptibleSequence"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "SPI Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `physical_page_start`: `77`
- `physical_page_end`: `79`
- `printed_page_start`: `77`
- `printed_page_end`: `79`
- `keywords`: ["SPI", "FCSPI", "tab", "FC7xxx", "Configure", "configured", "SpiChannel", "Jobs"]
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
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table", "image"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 SPI Introduction ........................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["2.6", "API Functions .....................................................................................…", "2.6.1", "Functions in Spi.h ................................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 SPI Introduction / 1.1 Requirements"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 SPI Introduction", "1.1", "Requirements", "The design of this module follows the specifications of the SPI driver specified in AUTOSAR Classic…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "File Structure", "2.2"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define SPI_PHYUNIT_ASYNC_U8 ((uint8)0)", "Indicates the HW unit is configured as Async mode.", "#define SPI_E_PARAM_CHANNEL ((uint8)0x0Au)", "Function called with wrong parameter of channel."]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define SPI_E_SEQ_EMPTY ((uint8)0x5Cu)", "Sequence is empty.", "#define SPI_E_JOB_EMPTY ((uint8)0x5Du)", "Job is empty."]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.2 Macros in Spi_version.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define SPI_SYNCTRANSMIT_ID ((uint8) 0x0Au)", "SPI syncs transmit function ID.", "#define SPI_GETHWUNITSTATUS_ID ((uint8) 0x0Bu)", "SPI gets HW status function ID."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.2.3", "Macros in Spi_Cfg.h", "#define SPI _CFG_AR_RELEASE_MAJOR_VERSION 4", "#define SPI _CFG_AR_RELEASE_MINOR_VERSION 6"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB 0u", "Only the internal buffer is allowed for channel.", "#define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_EB 1u", "Only the external buffer is allowed for channel."]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define CSIB0 ((uint8)0u)", "#define CSIB1 ((uint8)1u)", "#define CSIB2 ((uint8)2u)", "Defines the peripherals used throughout the configuration(s)."]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["#define SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE (STD_ON)", "Define whether this chip support continuous mode when sampling on the second edge", "#define SPI_VARIANT_PRECOMPILE (0)", "#define SPI_VARIANT_POSTBUILD (1)"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.1 Spi_JobResultType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.3", "Enums", "2.3.1", "Enumerations in Spi.h"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.5 SPI_IbEbBufferType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.3.1.5", "SPI_IbEbBufferType", "Enumeration", "SPI_IbEbBufferType"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Spi_ChnlAttrsType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["typedef void (*Spi_PfnNotifyType) (void)", "Sequence end notification handler type.", "2.5", "Structures"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["2.5.4", "Spi_ExDevicesAttrsType", "Structure", "Spi_ExDevicesAttrsType"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Diagram", "Data Fields", "const Spi_SeqCfgType * SequenceCfg", "2.5.7"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Diagram", "Data Fields", "Spi_JobResultType eJobResult", "Job Result"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.10 Spi_JobsCfgType"
- `content_types`: ["text", "table"]
- `anchors`: ["Number of channels in the job .", "const Spi_ChannelType *pcChnlsArray", "Channel index list .", "Spi_PfnNotifyType pfnJobEndNotify"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.11 Spi_ChannelbufferType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Diagram", "Data Fields", "const Spi_JobCfgType * JobCfg", "2.5.11"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["2.5.13", "Spi_ChnlCfgType", "Structure", "Spi_ChnlCfgType"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Diagram", "Data Fields", "uint8 u8HwInstIdx", "SPI hardware module index of chip"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.18 Spi_ChnJobSeqHwStateType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Array of job id in queue to be scheduled, header node for each priority level.", "Spi_JobType aSchedJobsLastNode [SPI_JOB_PRIORITY_LEVELS_COUNT]", "Array of job id in queue to be scheduled, tail node for each priority level.", "Spi_StatusType Status"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Diagram", "Data Fields", "uint16 u16MaxExternalDevice", "Number of external devices defined in the configuration"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "This function de-initializes the SPI driver.", "Diagram", "Parameters"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.6.1.7", "void Spi_MainFunction_Handling(void)", "Function", "void Spi_MainFunction_Handling(void)"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.12 Std_ReturnType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "Channel"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7", "Driver Functions", "2.7.1", "Functions in Spi_FCSpi.h"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.7.1.7", "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)", "Function", "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["pDevState", "Specifies which FCSPI peripheral is used", "Returns", "N/A"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Initialization"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.8", "API Sequence Diagram", "2.8.1", "Initialization"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.1 One Channel, One Job Then One Sequence"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.8.3", "Write/AsyncTransmit/Read (IB)", "2.8.3.1", "One Channel, One Job Then One Sequence"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.8.3.3", "Many Channels, Many Jobs and One Sequence", "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB cal…", "transmission of linked Jobs."]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 41"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.8.3.4", "Many Channels, Many Jobs and Many Sequences", "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB cal…", "transmission. Write or Read steps could be skipped when Jobs are just reading or writing respective…"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 43"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.1 One Channel, One Job Then One Sequence"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.8.4", "Setup/AsyncTransmit (EB)", "2.8.4.1", "One Channel, One Job Then One Sequence"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.8.4.3", "Many Channels, Many Jobs and One Sequence", "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for a Sequ…", "linked Jobs. Write or Read accesses are \"User Dependent\" and could be skipped when Job is just read…"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 46"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.8.4.4", "Many Channels, Many Jobs and Many Sequences", "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for Sequen…", "Write or Read accesses are \"User Dependent\" and could be skipped when Job is just reading or writin…"]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 48"]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.5 Mixed Jobs Transmission"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.8.4.5", "Mixed Jobs Transmission", "All kind of mixed Jobs transmission is possible according to the Channels configuration and the pri…", "Sequences."]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "api", "figure"]
- `anchors`: ["2.8.5.2", "Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence", "The following sequence diagram shows an example of Spi_SetupEB / Spi_SyncTransmit calls for a Seque…", "linked Jobs. Write or Read accesses are \"User Dependent\" and could be skipped when Job is just read…"]

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 51"]

### PAGE-0052
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation"]

### PAGE-0053
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0054
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.2.1", "SpiMaxChannel", "Variable", "SpiMaxChannel"]

### PAGE-0055
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0056
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Origin", "AUTOSAR_ECUC", "Default", "3.2.2.8"]

### PAGE-0057
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.2.12", "SpiChannelEcucPartitionRef", "Variable", "SpiChannelEcucPartitionRef"]

### PAGE-0058
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0059
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0060
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["range of values from 0 up to 0.0001 Sec.", "Screenshot", "Properties", "Property"]

### PAGE-0061
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["a range of values from 0 up to 0.01 Sec.", "Screenshot", "Properties", "Property"]

### PAGE-0062
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["3.2.2.31", "SpiJobStartNotification", "Variable", "SpiJobStartNotification"]

### PAGE-0063
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0064
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0065
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2.2.42", "SpiJobAssignment", "List", "SpiJobAssignment"]

### PAGE-0066
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `content_types`: ["text", "image"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0067
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["Type", "FLOAT", "Origin", "AUTOSAR_ECUC"]

### PAGE-0068
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.10 SpiSupportConcurrentSyncTransmit"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Type", "BOOLEAN", "Origin", "AUTOSAR_ECUC"]

### PAGE-0069
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.3.14", "SpiVersionInfoApi", "Variable", "SpiVersionInfoApi"]

### PAGE-0070
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0071
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["3.2.3.21", "SpiTxDmaChannel", "Variable", "SpiTxDmaChannel"]

### PAGE-0072
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0073
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.6.2", "ArReleaseMinorVersion", "Variable", "ArReleaseMinorVersion"]

### PAGE-0074
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.6.6", "SwPatchVersion", "Variable", "SwPatchVersion"]

### PAGE-0075
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["3.2.7.2", "SpiEnableHWUnitAsyncMode", "Variable", "SpiEnableHWUnitAsyncMode"]

### PAGE-0076
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1)"]

### PAGE-0077
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["4.2", "SPI Usage Common Steps", "Basically, the SPI module could be configured by following the below steps:", "1)"]

### PAGE-0078
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["4)", "Configure the FCSPI Hardware unit used in the tab \"SpiHwUnit\".", "5)", "Configure external devices in the tab \"SpiExternalDevice\" according to the features of devices comm…"]

### PAGE-0079
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["7)", "Generate configuration files."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx SPI User Manual"
- `keywords`: ["SPI", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx SPI User Manual; Revision History; 0.1"
- `keywords`: ["SPI", "MCAL", "FC7xxx", "FC7240", "Date", "Added"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table", "image"]
- `summary`: "Revision History: FC7xxx SPI User Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["SPI", "Spi", "FC7xxx", "Spi_version", "Spi_Cfg", "Spi_ChnlAttrsType", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 SPI Introduction ................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Table of Contents: FC7xxx SPI User Manual; 2.6; API Functions ................................................................................................................................................. 25"
- `keywords`: ["SPI", "Spi", "AsyncTransmit", "FC7xxx", "Spi_FCSpi", "LEVEL", "SyncTransmit", "IMPLEMENTATION_CONFIG_VARIANT", "SpiDriver", "SpiGeneral"]
- `anchors`:
  - `p4`: "2.6"
  - `p4`: "API Functions .............................................................................................................................…"
  - `p4`: "2.6.1"
  - `p4`: "Functions in Spi.h ........................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 SPI Introduction / 1.1 Requirements"
- `content_types`: ["text"]
- `summary`: "Chapter 1 SPI Introduction / 1.1 Requirements: FC7xxx SPI User Manual; Chapter 1 SPI Introduction; 1.1"
- `keywords`: ["SPI", "Handler", "ECU", "FC7xxx", "AUTOSAR", "AUTOSAR_SWS_SPIHandlerDriver", "SWS", "could", "provides", "specification"]
- `anchors`:
  - `p5`: "Chapter 1 SPI Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirements"
  - `p5`: "The design of this module follows the specifications of the SPI driver specified in AUTOSAR Classic Platform Release 4.6.0. For"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h: FC7xxx SPI User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["SPI", "Spi", "FC7xxx", "SPI_PHYUNIT_SYNC_U8", "Structure", "define", "Indicates", "unit", "configured", "mode"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "File Structure"
  - `p6`: "2.2"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h: FC7xxx SPI User Manual; #define SPI_PHYUNIT_ASYNC_U8 ((uint8)0); Indicates the HW unit is configured as Async mode."
- `keywords`: ["SPI", "define", "called", "wrong", "unit", "FC7xxx", "SPI_PHYUNIT_ASYNC_U8", "SPI_E_PARAM_CHANNEL", "SPI_E_PARAM_JOB", "SPI_E_PARAM_SEQ"]
- `anchors`:
  - `p7`: "#define SPI_PHYUNIT_ASYNC_U8 ((uint8)0)"
  - `p7`: "Indicates the HW unit is configured as Async mode."
  - `p7`: "#define SPI_E_PARAM_CHANNEL ((uint8)0x0Au)"
  - `p7`: "Function called with wrong parameter of channel."

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h: FC7xxx SPI User Manual; #define SPI_E_SEQ_EMPTY ((uint8)0x5Cu); Sequence is empty."
- `keywords`: ["SPI", "define", "SPI_GETSTATUS_ID", "gets", "FC7xxx", "SPI_E_SEQ_EMPTY", "SPI_E_JOB_EMPTY", "SPI_E_PARAM_POINTER", "NULL_PTR", "SPI_INIT_ID"]
- `anchors`:
  - `p8`: "#define SPI_E_SEQ_EMPTY ((uint8)0x5Cu)"
  - `p8`: "Sequence is empty."
  - `p8`: "#define SPI_E_JOB_EMPTY ((uint8)0x5Du)"
  - `p8`: "Job is empty."

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.2 Macros in Spi_version.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.2 Macros in Spi_version.h: FC7xxx SPI User Manual; #define SPI_SYNCTRANSMIT_ID ((uint8) 0x0Au); SPI syncs transmit function ID."
- `keywords`: ["SPI", "define", "FC7xxx", "SPI_SYNCTRANSMIT_ID", "SPI_GETHWUNITSTATUS_ID", "SPI_CANCEL_ID", "SPI_SETASYNCMODE_ID", "SPI_MAINFUNCTION_HANDLING_ID", "SPI_SETHWUNITASYNCMODE_ID", "SPI_JOB_PRIORITY_LEVELS_COUNT"]
- `anchors`:
  - `p9`: "#define SPI_SYNCTRANSMIT_ID ((uint8) 0x0Au)"
  - `p9`: "SPI syncs transmit function ID."
  - `p9`: "#define SPI_GETHWUNITSTATUS_ID ((uint8) 0x0Bu)"
  - `p9`: "SPI gets HW status function ID."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h: FC7xxx SPI User Manual; 2.2.3; Macros in Spi_Cfg.h"
- `keywords`: ["SPI", "define", "OFF", "STD_OFF", "Switches", "STD_ON", "FC7xxx", "Spi_Cfg", "SPI_MAX_PARTITIONS", "SPI_MULTICORE_ENABLED"]
- `anchors`:
  - `p10`: "2.2.3"
  - `p10`: "Macros in Spi_Cfg.h"
  - `p10`: "#define SPI _CFG_AR_RELEASE_MAJOR_VERSION 4"
  - `p10`: "#define SPI _CFG_AR_RELEASE_MINOR_VERSION 6"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h: FC7xxx SPI User Manual; #define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB 0u; Only the internal buffer is allowed for channel."
- `keywords`: ["SPI", "define", "Handler", "LEVEL", "SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB", "SPI_DELIVER_LEVEL_2", "STD_ON", "FC7xxx", "allowed", "SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_EB"]
- `anchors`:
  - `p11`: "#define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB 0u"
  - `p11`: "Only the internal buffer is allowed for channel."
  - `p11`: "#define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_EB 1u"
  - `p11`: "Only the external buffer is allowed for channel."

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h: FC7xxx SPI User Manual; #define CSIB0 ((uint8)0u); #define CSIB1 ((uint8)1u)"
- `keywords`: ["SPI", "define", "STD_OFF", "STD_ON", "CSIB0", "CSIB1", "CSIB2", "mode", "HWUnits", "FC7xxx"]
- `anchors`:
  - `p12`: "#define CSIB0 ((uint8)0u)"
  - `p12`: "#define CSIB1 ((uint8)1u)"
  - `p12`: "#define CSIB2 ((uint8)2u)"
  - `p12`: "Defines the peripherals used throughout the configuration(s)."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h: FC7xxx SPI User Manual; #define SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE (STD_ON); Define whether this chip support continuous mode when sampling on the second edge"
- `keywords`: ["SPI", "define", "STD_ON", "Defines", "Spi_SyncTransmit", "SPI_VARIANT_POSTBUILD", "STD_OFF", "SPI_WAIT_LOOP_TICKS", "FC7xxx", "SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE"]
- `anchors`:
  - `p13`: "#define SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE (STD_ON)"
  - `p13`: "Define whether this chip support continuous mode when sampling on the second edge"
  - `p13`: "#define SPI_VARIANT_PRECOMPILE (0)"
  - `p13`: "#define SPI_VARIANT_POSTBUILD (1)"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.1 Spi_JobResultType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.1 Spi_JobResultType: FC7xxx SPI User Manual; 2.3; Enums"
- `keywords`: ["SPI", "Spi", "has", "transmission", "last", "Job", "Spi_JobResultType", "Enumeration", "Values", "been"]
- `anchors`:
  - `p14`: "2.3"
  - `p14`: "Enums"
  - `p14`: "2.3.1"
  - `p14`: "Enumerations in Spi.h"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.5 SPI_IbEbBufferType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.5 SPI_IbEbBufferType: FC7xxx SPI User Manual; 2.3.1.5; SPI_IbEbBufferType"
- `keywords`: ["SPI", "Spi", "typedef", "SPI_IbEbBufferType", "buffer", "Spi_StatusType", "Spi_DataBufferType", "Specifies", "identification", "FC7xxx"]
- `anchors`:
  - `p15`: "2.3.1.5"
  - `p15`: "SPI_IbEbBufferType"
  - `p15`: "Enumeration"
  - `p15`: "SPI_IbEbBufferType"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Spi_ChnlAttrsType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Spi_ChnlAttrsType: FC7xxx SPI User Manual; typedef void (*Spi_PfnNotifyType) (void); Sequence end notification handler type."
- `keywords`: ["SPI", "FCSPI", "attributes", "Spi_ChnlAttrsType", "SpiCoreUse", "CoreID", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType", "FC7xxx", "Spi_PfnNotifyType"]
- `anchors`:
  - `p16`: "typedef void (*Spi_PfnNotifyType) (void)"
  - `p16`: "Sequence end notification handler type."
  - `p16`: "2.5"
  - `p16`: "Structures"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType: FC7xxx SPI User Manual; 2.5.4; Spi_ExDevicesAttrsType"
- `keywords`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType", "FC7xxx", "Structure", "structure", "Spi_DeviceAttrType", "DeviceAttrsCfg"]
- `anchors`:
  - `p17`: "2.5.4"
  - `p17`: "Spi_ExDevicesAttrsType"
  - `p17`: "Structure"
  - `p17`: "Spi_ExDevicesAttrsType"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType: FC7xxx SPI User Manual; Diagram; Data Fields"
- `keywords`: ["SPI", "Spi_SeqCfgType", "Spi_SeqStatType", "Spi_JobStatType", "FC7xxx", "const", "SequenceCfg", "sequence", "Spi_SeqResultType", "eSeqResult"]
- `anchors`:
  - `p18`: "Diagram"
  - `p18`: "Data Fields"
  - `p18`: "const Spi_SeqCfgType * SequenceCfg"
  - `p18`: "2.5.7"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType: FC7xxx SPI User Manual; Diagram; Data Fields"
- `keywords`: ["SPI", "Spi_JobCfgType", "FC7xxx", "Spi_JobResultType", "eJobResult", "Spi_SeqStateType", "pAsyncCurSeqStat", "Spi_JobType", "tAsyncNextWaitSchedJobIdx", "Spi_ChannelType"]
- `anchors`:
  - `p19`: "Diagram"
  - `p19`: "Data Fields"
  - `p19`: "Spi_JobResultType eJobResult"
  - `p19`: "Job Result"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.10 Spi_JobsCfgType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.10 Spi_JobsCfgType: FC7xxx SPI User Manual; Number of channels in the job .; const Spi_ChannelType *pcChnlsArray"
- `keywords`: ["SPI", "Spi_PfnNotifyType", "tExternalDev", "Spi_JobsCfgType", "FC7xxx", "Spi_ChannelType", "pcChnlsArray", "pfnJobEndNotify", "Job", "pfStartNotification"]
- `anchors`:
  - `p20`: "Number of channels in the job ."
  - `p20`: "const Spi_ChannelType *pcChnlsArray"
  - `p20`: "Channel index list ."
  - `p20`: "Spi_PfnNotifyType pfnJobEndNotify"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.11 Spi_ChannelbufferType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.11 Spi_ChannelbufferType: FC7xxx SPI User Manual; Diagram; Data Fields"
- `keywords`: ["SPI", "Spi_ChannelbufferType", "Spi_DataBufferType", "Spi_ChannelStateType", "FC7xxx", "Diagram", "Data", "Fields", "Spi_JobCfgType", "JobCfg"]
- `anchors`:
  - `p21`: "Diagram"
  - `p21`: "Data Fields"
  - `p21`: "const Spi_JobCfgType * JobCfg"
  - `p21`: "2.5.11"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType: FC7xxx SPI User Manual; 2.5.13; Spi_ChnlCfgType"
- `keywords`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx", "Structure", "structure", "channel", "Data", "Spi_IbEbBufferType"]
- `anchors`:
  - `p22`: "2.5.13"
  - `p22`: "Spi_ChnlCfgType"
  - `p22`: "Structure"
  - `p22`: "Spi_ChnlCfgType"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType: FC7xxx SPI User Manual; Diagram; Data Fields"
- `keywords`: ["FCSPI", "SPI", "DMA", "Spi_HwUnitsConfigType", "Spi_HwScheduleQueueType", "FC7xxx", "Diagram", "Data", "Fields", "u8HwInstIdx"]
- `anchors`:
  - `p23`: "Diagram"
  - `p23`: "Data Fields"
  - `p23`: "uint8 u8HwInstIdx"
  - `p23`: "SPI hardware module index of chip"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.18 Spi_ChnJobSeqHwStateType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.18 Spi_ChnJobSeqHwStateType: FC7xxx SPI User Manual; Array of job id in queue to be scheduled, header node for each priority level.; Spi_JobType aSchedJobsLastNode [SPI_JOB_PRIORITY_LEVELS_COUNT]"
- `keywords`: ["SPI", "FCSPI", "state", "Spi_ChnJobSeqHwStateType", "Spi_ConfigType", "FC7xxx", "queue", "each", "Spi_JobType", "aSchedJobsLastNode"]
- `anchors`:
  - `p24`: "Array of job id in queue to be scheduled, header node for each priority level."
  - `p24`: "Spi_JobType aSchedJobsLastNode [SPI_JOB_PRIORITY_LEVELS_COUNT]"
  - `p24`: "Array of job id in queue to be scheduled, tail node for each priority level."
  - `p24`: "Spi_StatusType Status"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr): FC7xxx SPI User Manual; Diagram; Data Fields"
- `keywords`: ["SPI", "FCSPI", "Spi", "const", "defined", "Pointer", "ConfigPtr", "Number", "Array", "Spi_Init"]
- `anchors`:
  - `p25`: "Diagram"
  - `p25`: "Data Fields"
  - `p25`: "uint16 u16MaxExternalDevice"
  - `p25`: "Number of external devices defined in the configuration"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void): FC7xxx SPI User Manual; Description; This function de-initializes the SPI driver."
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType", "Spi_SeqResultType", "Spi_GetStatus"]
- `anchors`:
  - `p26`: "Description"
  - `p26`: "This function de-initializes the SPI driver."
  - `p26`: "Diagram"
  - `p26`: "Parameters"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.7 void Spi_MainFunction_Handling(void): FC7xxx SPI User Manual; 2.6.1.7; void Spi_MainFunction_Handling(void)"
- `keywords`: ["SPI", "void", "Spi_MainFunction_Handling", "Spi_AfterOneJobTransferDone", "SPI_JobParamsType", "pcJobCfg", "FC7xxx", "ISR", "const", "asynchronously"]
- `anchors`:
  - `p27`: "2.6.1.7"
  - `p27`: "void Spi_MainFunction_Handling(void)"
  - `p27`: "Function"
  - `p27`: "void Spi_MainFunction_Handling(void)"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo): FC7xxx SPI User Manual; Diagram; Parameters"
- `keywords`: ["SPI", "Std_ReturnType", "Spi_ChannelType", "Channel", "Spi_DataBufferType", "DataBufferPtr", "Diagram", "Returns", "Spi_GetVersionInfo", "Std_VersionInfoType"]
- `anchors`:
  - `p28`: "Diagram"
  - `p28`: "Parameters"
  - `p28`: "Parameter"
  - `p28`: "Description"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.12 Std_ReturnType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.12 Std_ReturnType: FC7xxx SPI User Manual; Parameters; Parameter"
- `keywords`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType", "Sequence", "data", "SrcDataBufferPtr", "DesDataBufferPtr", "Spi_StatusType"]
- `anchors`:
  - `p29`: "Parameters"
  - `p29`: "Parameter"
  - `p29`: "Description"
  - `p29`: "Channel"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode): FC7xxx SPI User Manual; Diagram; Parameters"
- `keywords`: ["SPI", "Std_ReturnType", "AsyncMode", "Spi_AsyncModeType", "tHwUnit", "Spi_SetAsyncMode", "mode", "SPI_POLLING_MODE", "SPI_INTERRUPT_MODE", "SPI_SetHwAsyncMode"]
- `anchors`:
  - `p30`: "Diagram"
  - `p30`: "Parameters"
  - `p30`: "Parameter"
  - `p30`: "Description"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID): FC7xxx SPI User Manual; 2.7; Driver Functions"
- `keywords`: ["FCSPI", "SPI", "tVirHwUnit", "SpiCoreID", "void", "Spi_HWUnitType", "Spi_LL_Init", "Spi_LL_DeInit", "Spi_LL_JobTransfer", "Spi_JobCfgType"]
- `anchors`:
  - `p31`: "2.7"
  - `p31`: "Driver Functions"
  - `p31`: "2.7.1"
  - `p31`: "Functions in Spi_FCSpi.h"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode): FC7xxx SPI User Manual; Diagram; Parameters"
- `keywords`: ["SPI", "FCSPI", "Spi", "tVirHwUnit", "Spi_HWUnitType", "AsyncMode", "void", "Spi_LL_IrqConfig", "Spi_AsyncModeType", "Spi_LL_IrqPoll"]
- `anchors`:
  - `p32`: "Diagram"
  - `p32`: "Parameters"
  - `p32`: "Parameter"
  - `p32`: "Description"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx): FC7xxx SPI User Manual; Diagram; Parameters"
- `keywords`: ["FCSPI", "SPI", "pDevState", "u8HwInstIdx", "Spi_LL_IsrFifoRx", "Spi_DeviceStateType", "FC7xxx", "tVirHwUnit", "Specifies", "which"]
- `anchors`:
  - `p33`: "Diagram"
  - `p33`: "Parameters"
  - `p33`: "Parameter"
  - `p33`: "Description"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState): FC7xxx SPI User Manual; 2.7.1.7; void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `keywords`: ["SPI", "FCSPI", "pDevState", "DMA", "Spi_DeviceStateType", "void", "Spi_LL_IsrDmaTx", "ISR", "Spi_LL_IsrDmaRx", "FC7xxx"]
- `anchors`:
  - `p34`: "2.7.1.7"
  - `p34`: "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
  - `p34`: "Function"
  - `p34`: "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence): FC7xxx SPI User Manual; pDevState; Specifies which FCSPI peripheral is used"
- `keywords`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType", "SpiCoreID", "pDevState", "void", "Spi_LL_SlaveModeCancel", "Spi_LL_SyncTransfer"]
- `anchors`:
  - `p35`: "pDevState"
  - `p35`: "Specifies which FCSPI peripheral is used"
  - `p35`: "Returns"
  - `p35`: "N/A"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq): FC7xxx SPI User Manual; Diagram; Parameters"
- `keywords`: ["SPI", "jobs", "sequence", "Std_ReturnType", "Spi_LinkJobsToSequence", "Spi_SequenceType", "Spi_SeqCfgType", "its", "Spi_StartFirstJobScheduleNext", "Spi_HwScheduleQueueType"]
- `anchors`:
  - `p36`: "Diagram"
  - `p36`: "Parameters"
  - `p36`: "Parameter"
  - `p36`: "Description"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq): FC7xxx SPI User Manual; Diagram; Parameters"
- `keywords`: ["SPI", "Spi", "tRemainCnt", "Spi_UnlinkRemainJobsInSeq", "Spi_JobType", "Spi_SeqCfgType", "FC7xxx", "pHWUnitQueue", "AsyncMode", "SPI_UNINIT"]
- `anchors`:
  - `p37`: "Diagram"
  - `p37`: "Parameters"
  - `p37`: "Parameter"
  - `p37`: "Description"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Initialization"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Initialization: FC7xxx SPI User Manual; 2.8; API Sequence Diagram"
- `keywords`: ["SPI", "FC7xxx", "DeInit", "Sequence", "Diagram", "Initialization", "Modes", "Transitions", "sequence", "diagram"]
- `anchors`:
  - `p38`: "2.8"
  - `p38`: "API Sequence Diagram"
  - `p38`: "2.8.1"
  - `p38`: "Initialization"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.1 One Channel, One Job Then One Sequence"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.1 One Channel, One Job Then One Sequence: FC7xxx SPI User Manual; 2.8.3; Write/AsyncTransmit/Read (IB)"
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB", "FC7xxx", "Write", "AsyncTransmit"]
- `anchors`:
  - `p39`: "2.8.3"
  - `p39`: "Write/AsyncTransmit/Read (IB)"
  - `p39`: "2.8.3.1"
  - `p39`: "One Channel, One Job Then One Sequence"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence: FC7xxx SPI User Manual; 2.8.3.3; Many Channels, Many Jobs and One Sequence"
- `keywords`: ["SPI", "Jobs", "FC7xxx", "Channels", "Sequence", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB", "belong", "Many"]
- `anchors`:
  - `p40`: "2.8.3.3"
  - `p40`: "Many Channels, Many Jobs and One Sequence"
  - `p40`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p40`: "transmission of linked Jobs."

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence: FC7xxx SPI User Manual"
- `keywords`: ["SPI", "FC7xxx"]
- `anchors`:
  - `p41`: "no body anchor extracted"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences: FC7xxx SPI User Manual; 2.8.3.4; Many Channels, Many Jobs and Many Sequences"
- `keywords`: ["SPI", "Channels", "belong", "which", "FC7xxx", "Many", "Jobs", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB"]
- `anchors`:
  - `p42`: "2.8.3.4"
  - `p42`: "Many Channels, Many Jobs and Many Sequences"
  - `p42`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for Sequences"
  - `p42`: "transmission. Write or Read steps could be skipped when Jobs are just reading or writing respectively."

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences: FC7xxx SPI User Manual"
- `keywords`: ["SPI", "FC7xxx"]
- `anchors`:
  - `p43`: "no body anchor extracted"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.1 One Channel, One Job Then One Sequence"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.1 One Channel, One Job Then One Sequence: FC7xxx SPI User Manual; 2.8.4; Setup/AsyncTransmit (EB)"
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_SetupEB", "Spi_AsyncTransmit", "FC7xxx", "AsyncTransmit", "Channel", "only"]
- `anchors`:
  - `p44`: "2.8.4"
  - `p44`: "Setup/AsyncTransmit (EB)"
  - `p44`: "2.8.4.1"
  - `p44`: "One Channel, One Job Then One Sequence"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence: FC7xxx SPI User Manual; 2.8.4.3; Many Channels, Many Jobs and One Sequence"
- `keywords`: ["SPI", "FC7xxx", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_AsyncTransmit", "Job", "belong", "Many"]
- `anchors`:
  - `p45`: "2.8.4.3"
  - `p45`: "Many Channels, Many Jobs and One Sequence"
  - `p45`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for a Sequence transmission of"
  - `p45`: "linked Jobs. Write or Read accesses are \"User Dependent\" and could be skipped when Job is just reading or writing"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence: FC7xxx SPI User Manual"
- `keywords`: ["SPI", "FC7xxx"]
- `anchors`:
  - `p46`: "no body anchor extracted"

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences: FC7xxx SPI User Manual; 2.8.4.4; Many Channels, Many Jobs and Many Sequences"
- `keywords`: ["SPI", "Channels", "Job", "belong", "which", "FC7xxx", "Many", "Spi_SetupEB", "Spi_AsyncTransmit", "priority"]
- `anchors`:
  - `p47`: "2.8.4.4"
  - `p47`: "Many Channels, Many Jobs and Many Sequences"
  - `p47`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for Sequences transmission."
  - `p47`: "Write or Read accesses are \"User Dependent\" and could be skipped when Job is just reading or writing respectively."

### SEG-0048
- `physical_pages`: `48`
- `printed_pages`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences: FC7xxx SPI User Manual"
- `keywords`: ["SPI", "FC7xxx"]
- `anchors`:
  - `p48`: "no body anchor extracted"

### SEG-0049
- `physical_pages`: `49`
- `printed_pages`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.5 Mixed Jobs Transmission"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.5 Mixed Jobs Transmission: FC7xxx SPI User Manual; 2.8.4.5; Mixed Jobs Transmission"
- `keywords`: ["SPI", "Jobs", "Channels", "SyncTransmit", "FC7xxx", "priority", "LEVEL", "Sequence", "Spi_WriteIB", "Spi_SyncTransmit"]
- `anchors`:
  - `p49`: "2.8.4.5"
  - `p49`: "Mixed Jobs Transmission"
  - `p49`: "All kind of mixed Jobs transmission is possible according to the Channels configuration and the priority requirement inside"
  - `p49`: "Sequences."

### SEG-0050
- `physical_pages`: `50`
- `printed_pages`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence: FC7xxx SPI User Manual; 2.8.5.2; Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `keywords`: ["SPI", "FC7xxx", "SyncTransmit", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_SyncTransmit", "Job", "belong"]
- `anchors`:
  - `p50`: "2.8.5.2"
  - `p50`: "Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
  - `p50`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_SyncTransmit calls for a Sequence transmission of"
  - `p50`: "linked Jobs. Write or Read accesses are \"User Dependent\" and could be skipped when Job is just reading or writing"

### SEG-0051
- `physical_pages`: `51`
- `printed_pages`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence: FC7xxx SPI User Manual"
- `keywords`: ["SPI", "FC7xxx"]
- `anchors`:
  - `p51`: "no body anchor extracted"

### SEG-0052
- `physical_pages`: `52`
- `printed_pages`: `52`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation: FC7xxx SPI User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["SPI", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `anchors`:
  - `p52`: "Chapter 3 Tresos Configuration Items"
  - `p52`: "3.1"
  - `p52`: "Container Inclusion Relation"

### SEG-0053
- `physical_pages`: `53`
- `printed_pages`: `53`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT: FC7xxx SPI User Manual; 3.2; Containers and Variables"
- `keywords`: ["SPI", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPreCompile", "SpiDriver", "FC7xxx", "VariantLinkTime", "VariantPostBuild", "AUTOSAR", "Variable", "Screenshot"]
- `anchors`:
  - `p53`: "3.2"
  - `p53`: "Containers and Variables"
  - `p53`: "3.2.1"
  - `p53`: "IMPLEMENTATION_CONFIG_VARIANT"

### SEG-0054
- `physical_pages`: `54`
- `printed_pages`: `54`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel: FC7xxx SPI User Manual; 3.2.2.1; SpiMaxChannel"
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence", "SpiChannel", "FC7xxx"]
- `anchors`:
  - `p54`: "3.2.2.1"
  - `p54`: "SpiMaxChannel"
  - `p54`: "Variable"
  - `p54`: "SpiMaxChannel"

### SEG-0055
- `physical_pages`: `55`
- `printed_pages`: `55`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId: FC7xxx SPI User Manual; Screenshot; Properties"
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER", "SpiDataWidth", "FC7xxx"]
- `anchors`:
  - `p55`: "Screenshot"
  - `p55`: "Properties"
  - `p55`: "Property"
  - `p55`: "Value"

### SEG-0056
- `physical_pages`: `56`
- `printed_pages`: `56`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData: FC7xxx SPI User Manual; Origin; AUTOSAR_ECUC"
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data", "Screenshot", "Properties"]
- `anchors`:
  - `p56`: "Origin"
  - `p56`: "AUTOSAR_ECUC"
  - `p56`: "Default"
  - `p56`: "3.2.2.8"

### SEG-0057
- `physical_pages`: `57`
- `printed_pages`: `57`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef: FC7xxx SPI User Manual; 3.2.2.12; SpiChannelEcucPartitionRef"
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate", "FC7xxx", "Variable"]
- `anchors`:
  - `p57`: "3.2.2.12"
  - `p57`: "SpiChannelEcucPartitionRef"
  - `p57`: "Variable"
  - `p57`: "SpiChannelEcucPartitionRef"

### SEG-0058
- `physical_pages`: `58`
- `printed_pages`: `58`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier: FC7xxx SPI User Manual; Properties; Property"
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable", "Screenshot", "SpiCsPolarity"]
- `anchors`:
  - `p58`: "Properties"
  - `p58`: "Property"
  - `p58`: "Value"
  - `p58`: "Type"

### SEG-0059
- `physical_pages`: `59`
- `printed_pages`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs: FC7xxx SPI User Manual; Properties; Property"
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin", "LEADING", "SpiEnableCs"]
- `anchors`:
  - `p59`: "Properties"
  - `p59`: "Property"
  - `p59`: "Value"
  - `p59`: "Type"

### SEG-0060
- `physical_pages`: `60`
- `printed_pages`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig: FC7xxx SPI User Manual; range of values from 0 up to 0.0001 Sec.; Screenshot"
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties", "Property", "Origin"]
- `anchors`:
  - `p60`: "range of values from 0 up to 0.0001 Sec."
  - `p60`: "Screenshot"
  - `p60`: "Properties"
  - `p60`: "Property"

### SEG-0061
- `physical_pages`: `61`
- `printed_pages`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef: FC7xxx SPI User Manual; a range of values from 0 up to 0.01 Sec.; Screenshot"
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC", "SpiJob", "SpiJobEndNotification"]
- `anchors`:
  - `p61`: "a range of values from 0 up to 0.01 Sec."
  - `p61`: "Screenshot"
  - `p61`: "Properties"
  - `p61`: "Property"

### SEG-0062
- `physical_pages`: `62`
- `printed_pages`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification: FC7xxx SPI User Manual; 3.2.2.31; SpiJobStartNotification"
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin", "SpiJobId", "INTEGER"]
- `anchors`:
  - `p62`: "3.2.2.31"
  - `p62`: "SpiJobStartNotification"
  - `p62`: "Variable"
  - `p62`: "SpiJobStartNotification"

### SEG-0063
- `physical_pages`: `63`
- `printed_pages`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex: FC7xxx SPI User Manual; Screenshot; Properties"
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties", "Property", "MAP"]
- `anchors`:
  - `p63`: "Screenshot"
  - `p63`: "Properties"
  - `p63`: "Property"
  - `p63`: "Value"

### SEG-0064
- `physical_pages`: `64`
- `printed_pages`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence: FC7xxx SPI User Manual; Screenshot; Properties"
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification", "SpiSequenceId", "FC7xxx"]
- `anchors`:
  - `p64`: "Screenshot"
  - `p64`: "Properties"
  - `p64`: "Property"
  - `p64`: "Value"

### SEG-0065
- `physical_pages`: `65`
- `printed_pages`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment: FC7xxx SPI User Manual; 3.2.2.42; SpiJobAssignment"
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP", "SpiJob", "SpiDriver"]
- `anchors`:
  - `p65`: "3.2.2.42"
  - `p65`: "SpiJobAssignment"
  - `p65`: "List"
  - `p65`: "SpiJobAssignment"

### SEG-0066
- `physical_pages`: `66`
- `printed_pages`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef: FC7xxx SPI User Manual; Properties; Property"
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef", "Screenshot", "SpiLevelDelivered"]
- `anchors`:
  - `p66`: "Properties"
  - `p66`: "Property"
  - `p66`: "Value"
  - `p66`: "Type"

### SEG-0067
- `physical_pages`: `67`
- `printed_pages`: `67`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout: FC7xxx SPI User Manual; Type; FLOAT"
- `keywords`: ["SPI", "SymbolicNameValue", "Origin", "AUTOSAR_ECUC", "SpiTransmitTimeoutClockRef", "Variable", "Screenshot", "Properties", "Property", "SpiTransmitTimeout"]
- `anchors`:
  - `p67`: "Type"
  - `p67`: "FLOAT"
  - `p67`: "Origin"
  - `p67`: "AUTOSAR_ECUC"

### SEG-0068
- `physical_pages`: `68`
- `printed_pages`: `68`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.10 SpiSupportConcurrentSyncTransmit"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.10 SpiSupportConcurrentSyncTransmit: FC7xxx SPI User Manual; Type; BOOLEAN"
- `keywords`: ["SPI", "BOOLEAN", "AUTOSAR_ECUC", "Origin", "Default", "OFF", "SpiSupportConcurrentSyncTransmit", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p68`: "Type"
  - `p68`: "BOOLEAN"
  - `p68`: "Origin"
  - `p68`: "AUTOSAR_ECUC"

### SEG-0069
- `physical_pages`: `69`
- `printed_pages`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi: FC7xxx SPI User Manual; 3.2.3.14; SpiVersionInfoApi"
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx", "Spi_GetVersionInfo", "OFF"]
- `anchors`:
  - `p69`: "3.2.3.14"
  - `p69`: "SpiVersionInfoApi"
  - `p69`: "Variable"
  - `p69`: "SpiVersionInfoApi"

### SEG-0070
- `physical_pages`: `70`
- `printed_pages`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync: FC7xxx SPI User Manual; Properties; Property"
- `keywords`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property", "Origin", "SPI_MASTER", "SpiSyncOrAsync", "SPI_TRANSMIT_SYNCHRONOUSLY", "SpiHwUnitClockRef"]
- `anchors`:
  - `p70`: "Properties"
  - `p70`: "Property"
  - `p70`: "Value"
  - `p70`: "Type"

### SEG-0071
- `physical_pages`: `71`
- `printed_pages`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel: FC7xxx SPI User Manual; 3.2.3.21; SpiTxDmaChannel"
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties", "Property", "CHOICE"]
- `anchors`:
  - `p71`: "3.2.3.21"
  - `p71`: "SpiTxDmaChannel"
  - `p71`: "Variable"
  - `p71`: "SpiTxDmaChannel"

### SEG-0072
- `physical_pages`: `72`
- `printed_pages`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit: FC7xxx SPI User Manual; Screenshot; Properties"
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion", "FC7xxx", "Property"]
- `anchors`:
  - `p72`: "Screenshot"
  - `p72`: "Properties"
  - `p72`: "Property"
  - `p72`: "Value"

### SEG-0073
- `physical_pages`: `73`
- `printed_pages`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion: FC7xxx SPI User Manual; 3.2.6.2; ArReleaseMinorVersion"
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR", "implementation", "Screenshot"]
- `anchors`:
  - `p73`: "3.2.6.2"
  - `p73`: "ArReleaseMinorVersion"
  - `p73`: "Variable"
  - `p73`: "ArReleaseMinorVersion"

### SEG-0074
- `physical_pages`: `74`
- `printed_pages`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion: FC7xxx SPI User Manual; 3.2.6.6; SwPatchVersion"
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property", "Origin", "ModuleId"]
- `anchors`:
  - `p74`: "3.2.6.6"
  - `p74`: "SwPatchVersion"
  - `p74`: "Variable"
  - `p74`: "SwPatchVersion"

### SEG-0075
- `physical_pages`: `75`
- `printed_pages`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.2 SpiEnableHWUnitAsyncMode: FC7xxx SPI User Manual; 3.2.7.2; SpiEnableHWUnitAsyncMode"
- `keywords`: ["SPI", "Variable", "SpiEnableHWUnitAsyncMode", "SymbolicNameValue", "SpiJobStartNotificationEnable", "SpiDisableDemReportErrorStatus", "FC7xxx", "SpiLevelDelivered", "Spi_SetHWUnitAsyncMode", "HWUnitto"]
- `anchors`:
  - `p75`: "3.2.7.2"
  - `p75`: "SpiEnableHWUnitAsyncMode"
  - `p75`: "Variable"
  - `p75`: "SpiEnableHWUnitAsyncMode"

### SEG-0076
- `physical_pages`: `76`
- `printed_pages`: `76`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx SPI User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["SPI", "LEVEL", "FC7xxx", "AUTOSAR", "SpiLevelDelivered", "NULL_PTR", "SpiInterruptibleSeqAllowed", "SpiInterruptibleSequence", "Notification", "sequence"]
- `anchors`:
  - `p76`: "Chapter 4 Configuration Guides"
  - `p76`: "4.1"
  - `p76`: "Configuration Item Constraint"
  - `p76`: "1)"

### SEG-0077
- `physical_pages`: `77`
- `printed_pages`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps: FC7xxx SPI User Manual; 4.2; SPI Usage Common Steps"
- `keywords`: ["SPI", "FC7xxx", "configured", "Configure", "tab", "SpiChannel", "Jobs", "SpiJob", "SpiSequence", "channels"]
- `anchors`:
  - `p77`: "4.2"
  - `p77`: "SPI Usage Common Steps"
  - `p77`: "Basically, the SPI module could be configured by following the below steps:"
  - `p77`: "1)"

### SEG-0078
- `physical_pages`: `78`
- `printed_pages`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps: FC7xxx SPI User Manual; 4); Configure the FCSPI Hardware unit used in the tab \"SpiHwUnit\"."
- `keywords`: ["SPI", "FCSPI", "FC7xxx", "tab", "SpiHwUnit", "SpiExternalDevice", "Configure", "devices", "unit", "external"]
- `anchors`:
  - `p78`: "4)"
  - `p78`: "Configure the FCSPI Hardware unit used in the tab \"SpiHwUnit\"."
  - `p78`: "5)"
  - `p78`: "Configure external devices in the tab \"SpiExternalDevice\" according to the features of devices communicating with"

### SEG-0079
- `physical_pages`: `79`
- `printed_pages`: `79`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps: FC7xxx SPI User Manual; 7); Generate configuration files."
- `keywords`: ["SPI", "FC7xxx", "Generate"]
- `anchors`:
  - `p79`: "7)"
  - `p79`: "Generate configuration files."

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
- `section_path`: "Revision History"
- `bbox`: `None`
- `key_fields`: ["Revision", "Date", "Changes"]
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
- `key_fields`: ["SPI", "Spi", "AsyncTransmit", "FC7xxx", "Spi_FCSpi"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi", "FC7xxx", "SPI_PHYUNIT_SYNC_U8", "Structure"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Table-like content on page 7"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "called", "wrong", "unit"]
- `summary`: "Indexes table-like source content for Table-like content on page 7; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 7"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Table-like content on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "SPI_GETSTATUS_ID", "gets", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 8; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 8"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.2 Macros in Spi_version.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "FC7xxx", "SPI_SYNCTRANSMIT_ID", "SPI_GETHWUNITSTATUS_ID"]
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
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "OFF", "STD_OFF", "Switches"]
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
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "Handler", "LEVEL", "SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB"]
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
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "STD_OFF", "STD_ON", "CSIB0"]
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
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["SPI", "define", "STD_ON", "Defines", "Spi_SyncTransmit"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.1 Spi_JobResultType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi", "has", "transmission", "last"]
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
- `section_path`: "Chapter 2 Software Design / 2.3 Enums / 2.3.1 Enumerations in Spi.h / 2.3.1.5 SPI_IbEbBufferType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi", "typedef", "SPI_IbEbBufferType", "buffer"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Spi_ChnlAttrsType"
- `bbox`: `None`
- `key_fields`: ["SPI", "FCSPI", "attributes", "Spi_ChnlAttrsType", "SpiCoreUse"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi_SeqCfgType", "Spi_SeqStatType", "Spi_JobStatType", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi_JobCfgType", "FC7xxx", "Spi_JobResultType", "eJobResult"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.10 Spi_JobsCfgType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi_PfnNotifyType", "tExternalDev", "Spi_JobsCfgType", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.11 Spi_ChannelbufferType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi_ChannelbufferType", "Spi_DataBufferType", "Spi_ChannelStateType", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType"
- `bbox`: `None`
- `key_fields`: ["FCSPI", "SPI", "DMA", "Spi_HwUnitsConfigType", "Spi_HwScheduleQueueType"]
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
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.18 Spi_ChnJobSeqHwStateType"
- `bbox`: `None`
- `key_fields`: ["SPI", "FCSPI", "state", "Spi_ChnJobSeqHwStateType", "Spi_ConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 24; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 24"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `bbox`: `None`
- `key_fields`: ["SPI", "FCSPI", "Spi", "const", "defined"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0026-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0026-001"
- `caption`: "Table-like content on page 26"
- `physical_pages`: `26`
- `printed_pages`: ["26"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `bbox`: `None`
- `key_fields`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `bbox`: `None`
- `key_fields`: ["SPI", "void", "Spi_MainFunction_Handling", "Spi_AfterOneJobTransferDone", "SPI_JobParamsType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `bbox`: `None`
- `key_fields`: ["SPI", "Std_ReturnType", "Spi_ChannelType", "Channel", "Spi_DataBufferType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.12 Std_ReturnType"
- `bbox`: `None`
- `key_fields`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `bbox`: `None`
- `key_fields`: ["SPI", "Std_ReturnType", "AsyncMode", "Spi_AsyncModeType", "tHwUnit"]
- `summary`: "Indexes table-like source content for Table-like content on page 30; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 30"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0031-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0031-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `31`
- `printed_pages`: ["31"]
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `bbox`: `None`
- `key_fields`: ["FCSPI", "SPI", "tVirHwUnit", "SpiCoreID", "void"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0032-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0032-001"
- `caption`: "Table-like content on page 32"
- `physical_pages`: `32`
- `printed_pages`: ["32"]
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `bbox`: `None`
- `key_fields`: ["SPI", "FCSPI", "Spi", "tVirHwUnit", "Spi_HWUnitType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `bbox`: `None`
- `key_fields`: ["FCSPI", "SPI", "pDevState", "u8HwInstIdx", "Spi_LL_IsrFifoRx"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `bbox`: `None`
- `key_fields`: ["SPI", "FCSPI", "pDevState", "DMA", "Spi_DeviceStateType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `bbox`: `None`
- `key_fields`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `bbox`: `None`
- `key_fields`: ["SPI", "jobs", "sequence", "Std_ReturnType", "Spi_LinkJobsToSequence"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `bbox`: `None`
- `key_fields`: ["SPI", "Spi", "tRemainCnt", "Spi_UnlinkRemainJobsInSeq", "Spi_JobType"]
- `summary`: "Indexes table-like source content for Table-like content on page 37; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 37"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0052-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0052-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `52`
- `printed_pages`: ["52"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `None`
- `key_fields`: ["SPI", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0053-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0053-001"
- `caption`: "Table-like content on page 53"
- `physical_pages`: `53`
- `printed_pages`: ["53"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `None`
- `key_fields`: ["SPI", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPreCompile", "SpiDriver", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 53; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 53"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0055-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0055-001"
- `caption`: "Table-like content on page 55"
- `physical_pages`: `55`
- `printed_pages`: ["55"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `bbox`: `None`
- `key_fields`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `bbox`: `None`
- `key_fields`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER"]
- `summary`: "Indexes table-like source content for Table-like content on page 56; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 56"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0058-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0058-001"
- `caption`: "Table-like content on page 58"
- `physical_pages`: `58`
- `printed_pages`: ["58"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `bbox`: `None`
- `key_fields`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin"]
- `summary`: "Indexes table-like source content for Table-like content on page 58; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 58"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0059-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0059-001"
- `caption`: "Table-like content on page 59"
- `physical_pages`: `59`
- `printed_pages`: ["59"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs"
- `bbox`: `None`
- `key_fields`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION"]
- `summary`: "Indexes table-like source content for Table-like content on page 59; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 59"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0060-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0060-001"
- `caption`: "Table-like content on page 60"
- `physical_pages`: `60`
- `printed_pages`: ["60"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `bbox`: `None`
- `key_fields`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `bbox`: `None`
- `key_fields`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT"]
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
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `bbox`: `None`
- `key_fields`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 62; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 62"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0065-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0065-001"
- `caption`: "Table-like content on page 65"
- `physical_pages`: `65`
- `printed_pages`: ["65"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `bbox`: `None`
- `key_fields`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral"]
- `summary`: "Indexes table-like source content for Table-like content on page 65; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 65"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0070-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0070-001"
- `caption`: "Table-like content on page 70"
- `physical_pages`: `70`
- `printed_pages`: ["70"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync"
- `bbox`: `None`
- `key_fields`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property"]
- `summary`: "Indexes table-like source content for Table-like content on page 70; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 70"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0072-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0072-001"
- `caption`: "Table-like content on page 72"
- `physical_pages`: `72`
- `printed_pages`: ["72"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `bbox`: `None`
- `key_fields`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation"]
- `summary`: "Indexes table-like source content for Table-like content on page 72; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 72"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0076-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0076-001"
- `caption`: "Table-like content on page 76"
- `physical_pages`: `76`
- `printed_pages`: ["76"]
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `None`
- `key_fields`: ["SPI", "LEVEL", "FC7xxx", "AUTOSAR", "SpiLevelDelivered"]
- `summary`: "Indexes table-like source content for Table-like content on page 76; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 76"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

### FIG-0003-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0003-001"
- `caption`: "Generated visual anchor: Revision History"
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Revision History"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around Revision History; generated for retrieval because no formal figure number was detected."
- `keywords`: ["SPI", "Spi", "FC7xxx", "Spi_version", "Spi_Cfg", "Spi_ChnlAttrsType", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "Revision History"
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
- `keywords`: ["SPI", "Spi", "AsyncTransmit", "FC7xxx", "Spi_FCSpi", "LEVEL", "SyncTransmit", "IMPLEMENTATION_CONFIG_VARIANT"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0006-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "Image block near 2.2.1 Macros in Spi.h"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `bbox`: `[36.0, 122.76, 559.3, 287.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.2.1 Macros in Spi.h; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "FC7xxx", "SPI_PHYUNIT_SYNC_U8", "Structure", "define", "Indicates", "unit"]
- `anchor`: "Image block near 2.2.1 Macros in Spi.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0006-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-002"
- `caption`: "Image block near 2.2.1 Macros in Spi.h"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `bbox`: `[36.0, 293.91, 559.3, 427.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.2.1 Macros in Spi.h; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "FC7xxx", "SPI_PHYUNIT_SYNC_U8", "Structure", "define", "Indicates", "unit"]
- `anchor`: "Image block near 2.2.1 Macros in Spi.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0006-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-003"
- `caption`: "Image block near 2.2.1 Macros in Spi.h"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.1 Macros in Spi.h"
- `bbox`: `[36.0, 433.97, 559.3, 665.42]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.2.1 Macros in Spi.h; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "FC7xxx", "SPI_PHYUNIT_SYNC_U8", "Structure", "define", "Indicates", "unit"]
- `anchor`: "Image block near 2.2.1 Macros in Spi.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0013-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-001"
- `caption`: "Generated visual anchor: 2.2.3 Macros in Spi_Cfg.h"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.2 Macros / 2.2.3 Macros in Spi_Cfg.h"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.3 Macros in Spi_Cfg.h; generated for retrieval because no formal figure number was detected."
- `keywords`: ["SPI", "define", "STD_ON", "Defines", "Spi_SyncTransmit", "SPI_VARIANT_POSTBUILD", "STD_OFF", "SPI_WAIT_LOOP_TICKS"]
- `anchor`: "2.2.3 Macros in Spi_Cfg.h"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 2.5.1 Spi_ChnlAttrsType"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Spi_ChnlAttrsType"
- `bbox`: `[264.9, 407.06, 406.65, 502.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.1 Spi_ChnlAttrsType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "attributes", "Spi_ChnlAttrsType", "SpiCoreUse", "CoreID", "SPI_ChannelsAttrsType", "Spi_DeviceAttrType"]
- `anchor`: "Image block near 2.5.1 Spi_ChnlAttrsType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.5.4 Spi_ExDevicesAttrsType"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType"
- `bbox`: `[267.27, 92.03, 404.27, 187.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.4 Spi_ExDevicesAttrsType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType", "FC7xxx", "Structure", "structure"]
- `anchor`: "Image block near 2.5.4 Spi_ExDevicesAttrsType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-002"
- `caption`: "Image block near 2.5.4 Spi_ExDevicesAttrsType"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.4 Spi_ExDevicesAttrsType"
- `bbox`: `[267.98, 283.44, 403.58, 378.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.4 Spi_ExDevicesAttrsType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_ExDevicesAttrsType", "Spi_SeqCfgType", "Spi_JobType", "Spi_SeqsCfgType", "FC7xxx", "Structure", "structure"]
- `anchor`: "Image block near 2.5.4 Spi_ExDevicesAttrsType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.5.7 Spi_SeqStatType"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType"
- `bbox`: `[267.98, 37.4, 403.58, 200.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.7 Spi_SeqStatType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_SeqCfgType", "Spi_SeqStatType", "Spi_JobStatType", "FC7xxx", "const", "SequenceCfg", "sequence"]
- `anchor`: "Image block near 2.5.7 Spi_SeqStatType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 2.5.7 Spi_SeqStatType"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.7 Spi_SeqStatType"
- `bbox`: `[206.5, 296.11, 465.05, 470.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.7 Spi_SeqStatType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_SeqCfgType", "Spi_SeqStatType", "Spi_JobStatType", "FC7xxx", "const", "SequenceCfg", "sequence"]
- `anchor`: "Image block near 2.5.7 Spi_SeqStatType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.5.9 Spi_JobCfgType"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType"
- `bbox`: `[206.5, 37.4, 465.05, 278.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.9 Spi_JobCfgType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_JobCfgType", "FC7xxx", "Spi_JobResultType", "eJobResult", "Spi_SeqStateType", "pAsyncCurSeqStat", "Spi_JobType"]
- `anchor`: "Image block near 2.5.9 Spi_JobCfgType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-002"
- `caption`: "Image block near 2.5.9 Spi_JobCfgType"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.9 Spi_JobCfgType"
- `bbox`: `[112.25, 458.9, 509.65, 767.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.9 Spi_JobCfgType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_JobCfgType", "FC7xxx", "Spi_JobResultType", "eJobResult", "Spi_SeqStateType", "pAsyncCurSeqStat", "Spi_JobType"]
- `anchor`: "Image block near 2.5.9 Spi_JobCfgType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.5.11 Spi_ChannelbufferType"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.11 Spi_ChannelbufferType"
- `bbox`: `[137.07, 37.4, 534.47, 412.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.11 Spi_ChannelbufferType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_ChannelbufferType", "Spi_DataBufferType", "Spi_ChannelStateType", "FC7xxx", "Diagram", "Data", "Fields"]
- `anchor`: "Image block near 2.5.11 Spi_ChannelbufferType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 2.5.13 Spi_ChnlCfgType"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType"
- `bbox`: `[137.07, 92.03, 534.47, 187.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.13 Spi_ChnlCfgType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx", "Structure", "structure", "channel"]
- `anchor`: "Image block near 2.5.13 Spi_ChnlCfgType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-002"
- `caption`: "Image block near 2.5.13 Spi_ChnlCfgType"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.13 Spi_ChnlCfgType"
- `bbox`: `[137.07, 469.76, 534.47, 632.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.13 Spi_ChnlCfgType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi_ChnlCfgType", "Spi_ChannelsCfgType", "Spi_HwUnitCfgType", "FC7xxx", "Structure", "structure", "channel"]
- `anchor`: "Image block near 2.5.13 Spi_ChnlCfgType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.5.16 Spi_HwUnitsConfigType"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType"
- `bbox`: `[272.9, 37.4, 398.65, 132.8]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.16 Spi_HwUnitsConfigType; use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "DMA", "Spi_HwUnitsConfigType", "Spi_HwScheduleQueueType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "Image block near 2.5.16 Spi_HwUnitsConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 2.5.16 Spi_HwUnitsConfigType"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.16 Spi_HwUnitsConfigType"
- `bbox`: `[271.73, 449.0, 399.83, 611.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.16 Spi_HwUnitsConfigType; use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "DMA", "Spi_HwUnitsConfigType", "Spi_HwScheduleQueueType", "FC7xxx", "Diagram", "Data"]
- `anchor`: "Image block near 2.5.16 Spi_HwUnitsConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 2.5.18 Spi_ChnJobSeqHwStateType"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.18 Spi_ChnJobSeqHwStateType"
- `bbox`: `[112.25, 200.66, 559.3, 463.01]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.18 Spi_ChnJobSeqHwStateType; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "state", "Spi_ChnJobSeqHwStateType", "Spi_ConfigType", "FC7xxx", "queue", "each"]
- `anchor`: "Image block near 2.5.18 Spi_ChnJobSeqHwStateType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-001"
- `caption`: "Image block near 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `bbox`: `[112.25, 37.4, 559.3, 155.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "Spi", "const", "defined", "Pointer", "ConfigPtr", "Number"]
- `anchor`: "Image block near 2.6.1.1 void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-001"
- `caption`: "Image block near 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `bbox`: `[112.25, 54.83, 459.7, 139.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.3 Spi_StatusType Spi_GetStatus(void); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType"]
- `anchor`: "Image block near 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-002"
- `caption`: "Image block near 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `bbox`: `[112.25, 667.58, 559.3, 732.48]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.3 Spi_StatusType Spi_GetStatus(void); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Sequence", "Std_ReturnType", "Spi_SequenceType", "Diagram", "Returns", "Spi_StatusType", "Spi_JobResultType"]
- `anchor`: "Image block near 2.6.1.3 Spi_StatusType Spi_GetStatus(void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-001"
- `caption`: "Image block near 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `bbox`: `[112.25, 112.15, 559.3, 431.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.7 void Spi_MainFunction_Handling(void); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "void", "Spi_MainFunction_Handling", "Spi_AfterOneJobTransferDone", "SPI_JobParamsType", "pcJobCfg", "FC7xxx", "ISR"]
- `anchor`: "Image block near 2.6.1.7 void Spi_MainFunction_Handling(void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Image block near 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `bbox`: `[112.25, 37.4, 559.3, 327.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Std_ReturnType", "Spi_ChannelType", "Channel", "Spi_DataBufferType", "DataBufferPtr", "Diagram", "Returns"]
- `anchor`: "Image block near 2.6.1.9 void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Generated visual anchor: 2.6.1.12 Std_ReturnType"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.12 Std_ReturnType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.1.12 Std_ReturnType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["SPI", "Std_ReturnType", "Channel", "Spi_DataBufferType", "Spi_SequenceType", "Sequence", "data", "SrcDataBufferPtr"]
- `anchor`: "2.6.1.12 Std_ReturnType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in Spi.h / 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `bbox`: `[112.25, 37.4, 559.25, 285.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Std_ReturnType", "AsyncMode", "Spi_AsyncModeType", "tHwUnit", "Spi_SetAsyncMode", "mode", "SPI_POLLING_MODE"]
- `anchor`: "Image block near 2.6.1.16 Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `bbox`: `[112.25, 141.67, 364.25, 283.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID); use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "tVirHwUnit", "SpiCoreID", "void", "Spi_HWUnitType", "Spi_LL_Init", "Spi_LL_DeInit"]
- `anchor`: "Image block near 2.7.1.1 void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `bbox`: `[112.25, 37.39, 545.3, 311.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "Spi", "tVirHwUnit", "Spi_HWUnitType", "AsyncMode", "void", "Spi_LL_IrqConfig"]
- `anchor`: "Image block near 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-002"
- `caption`: "Image block near 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `bbox`: `[112.25, 456.4, 559.3, 528.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "Spi", "tVirHwUnit", "Spi_HWUnitType", "AsyncMode", "void", "Spi_LL_IrqConfig"]
- `anchor`: "Image block near 2.7.1.4 void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `bbox`: `[112.25, 37.39, 559.3, 293.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx); use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "pDevState", "u8HwInstIdx", "Spi_LL_IsrFifoRx", "Spi_DeviceStateType", "FC7xxx", "tVirHwUnit"]
- `anchor`: "Image block near 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-002"
- `caption`: "Image block near 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `bbox`: `[112.25, 422.06, 559.3, 683.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx); use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "pDevState", "u8HwInstIdx", "Spi_LL_IsrFifoRx", "Spi_DeviceStateType", "FC7xxx", "tVirHwUnit"]
- `anchor`: "Image block near 2.7.1.6 void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `bbox`: `[112.25, 89.21, 559.3, 363.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "pDevState", "DMA", "Spi_DeviceStateType", "void", "Spi_LL_IsrDmaTx", "ISR"]
- `anchor`: "Image block near 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-002"
- `caption`: "Image block near 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `bbox`: `[112.25, 491.72, 559.3, 760.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "pDevState", "DMA", "Spi_DeviceStateType", "void", "Spi_LL_IsrDmaTx", "ISR"]
- `anchor`: "Image block near 2.7.1.7 void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `bbox`: `[112.25, 147.52, 559.3, 386.02]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence); use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType", "SpiCoreID", "pDevState", "void"]
- `anchor`: "Image block near 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-002"
- `caption`: "Image block near 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `bbox`: `[112.25, 514.09, 411.45, 541.69]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence); use the source PDF page for exact visual details."
- `keywords`: ["FCSPI", "SPI", "Spi_SequenceType", "Sequence", "Std_ReturnType", "SpiCoreID", "pDevState", "void"]
- `anchor`: "Image block near 2.7.1.9 void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `bbox`: `[112.25, 37.39, 559.3, 269.89]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "jobs", "sequence", "Std_ReturnType", "Spi_LinkJobsToSequence", "Spi_SequenceType", "Spi_SeqCfgType", "its"]
- `anchor`: "Image block near 2.7.1.12 Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `bbox`: `[112.25, 37.4, 559.3, 267.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "tRemainCnt", "Spi_UnlinkRemainJobsInSeq", "Spi_JobType", "Spi_SeqCfgType", "FC7xxx", "pHWUnitQueue"]
- `anchor`: "Image block near 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 2 Software Design / 2.7 Driver Functions / 2.7.1 Functions in Spi_FCSpi.h / 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `bbox`: `[112.25, 398.62, 559.3, 458.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq); use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "tRemainCnt", "Spi_UnlinkRemainJobsInSeq", "Spi_JobType", "Spi_SeqCfgType", "FC7xxx", "pHWUnitQueue"]
- `anchor`: "Image block near 2.7.1.14 void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 2.8.1 Initialization"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Initialization"
- `bbox`: `[106.3, 83.36, 503.08, 255.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1 Initialization; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "DeInit", "Sequence", "Diagram", "Initialization", "Modes", "Transitions"]
- `anchor`: "Image block near 2.8.1 Initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-002"
- `caption`: "Image block near 2.8.1 Initialization"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Initialization"
- `bbox`: `[36.0, 303.76, 559.24, 750.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1 Initialization; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "DeInit", "Sequence", "Diagram", "Initialization", "Modes", "Transitions"]
- `anchor`: "Image block near 2.8.1 Initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 2.8.3.1 One Channel, One Job Then One Sequence"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.1 One Channel, One Job Then One Sequence"
- `bbox`: `[36.0, 159.35, 559.25, 662.45]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.1 One Channel, One Job Then One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB", "FC7xxx"]
- `anchor`: "Image block near 2.8.3.1 One Channel, One Job Then One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `bbox`: `[36.0, 36.9, 559.3, 579.65]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Jobs", "FC7xxx", "Channels", "Sequence", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB"]
- `anchor`: "Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `bbox`: `[70.9, 705.27, 524.28, 768.17]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Jobs", "FC7xxx", "Channels", "Sequence", "Spi_WriteIB", "Spi_AsyncTransmit", "Spi_ReadIB"]
- `anchor`: "Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `bbox`: `[36.0, 36.9, 559.3, 769.7]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx"]
- `anchor`: "Image block near 2.8.3.3 Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `bbox`: `[70.9, 196.4, 524.33, 275.25]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.4 Many Channels, Many Jobs and Many Sequences; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Channels", "belong", "which", "FC7xxx", "Many", "Jobs", "Spi_WriteIB"]
- `anchor`: "Image block near 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.3 Write/AsyncTransmit/Read (IB) / 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `bbox`: `[68.13, 36.9, 527.15, 796.3]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.3.4 Many Channels, Many Jobs and Many Sequences; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx"]
- `anchor`: "Image block near 2.8.3.4 Many Channels, Many Jobs and Many Sequences"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-001"
- `caption`: "Image block near 2.8.4.1 One Channel, One Job Then One Sequence"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.1 One Channel, One Job Then One Sequence"
- `bbox`: `[36.0, 159.35, 559.3, 577.55]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.1 One Channel, One Job Then One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_SetupEB", "Spi_AsyncTransmit", "FC7xxx", "AsyncTransmit"]
- `anchor`: "Image block near 2.8.4.1 One Channel, One Job Then One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-002"
- `caption`: "Image block near 2.8.4.1 One Channel, One Job Then One Sequence"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.1 One Channel, One Job Then One Sequence"
- `bbox`: `[70.9, 680.24, 524.37, 729.59]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.1 One Channel, One Job Then One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Job", "Sequence", "One", "Spi_SetupEB", "Spi_AsyncTransmit", "FC7xxx", "AsyncTransmit"]
- `anchor`: "Image block near 2.8.4.1 One Channel, One Job Then One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `bbox`: `[36.0, 36.9, 559.3, 592.05]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_AsyncTransmit", "Job"]
- `anchor`: "Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-002"
- `caption`: "Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `bbox`: `[70.9, 711.67, 524.07, 762.72]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_AsyncTransmit", "Job"]
- `anchor`: "Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-001"
- `caption`: "Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `bbox`: `[36.0, 36.89, 559.3, 744.74]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx"]
- `anchor`: "Image block near 2.8.4.3 Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-001"
- `caption`: "Image block near 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `bbox`: `[36.0, 173.46, 489.35, 250.26]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.4 Many Channels, Many Jobs and Many Sequences; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Channels", "Job", "belong", "which", "FC7xxx", "Many", "Spi_SetupEB"]
- `anchor`: "Image block near 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-001"
- `caption`: "Image block near 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `bbox`: `[36.0, 36.9, 548.05, 806.8]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.4 Many Channels, Many Jobs and Many Sequences; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx"]
- `anchor`: "Image block near 2.8.4.4 Many Channels, Many Jobs and Many Sequences"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-001"
- `caption`: "Image block near 2.8.4.5 Mixed Jobs Transmission"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.4 Setup/AsyncTransmit (EB) / 2.8.4.5 Mixed Jobs Transmission"
- `bbox`: `[36.0, 278.97, 489.36, 343.47]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.4.5 Mixed Jobs Transmission; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Jobs", "Channels", "SyncTransmit", "FC7xxx", "priority", "LEVEL", "Sequence"]
- `anchor`: "Image block near 2.8.4.5 Mixed Jobs Transmission"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-001"
- `caption`: "Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `bbox`: `[36.0, 36.9, 559.3, 537.15]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "SyncTransmit", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_SyncTransmit"]
- `anchor`: "Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-002"
- `caption`: "Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `bbox`: `[70.9, 656.77, 524.01, 707.12]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "SyncTransmit", "Channels", "Jobs", "Sequence", "Spi_SetupEB", "Spi_SyncTransmit"]
- `anchor`: "Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0051-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0051-001"
- `caption`: "Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `physical_page`: `51`
- `printed_page`: `51`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.5 LEVEL 0 SyncTransmit Diagrams / 2.8.5.2 Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `bbox`: `[36.0, 36.9, 559.3, 541.65]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx"]
- `anchor`: "Image block near SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0052-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0052-001"
- `caption`: "Image block near 3.1 Container Inclusion Relation"
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `[94.85, 122.77, 500.45, 192.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1 Container Inclusion Relation; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `anchor`: "Image block near 3.1 Container Inclusion Relation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0052-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0052-002"
- `caption`: "Image block near 3.1 Container Inclusion Relation"
- `physical_page`: `52`
- `printed_page`: `52`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `[73.25, 199.27, 522.05, 586.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1 Container Inclusion Relation; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `anchor`: "Image block near 3.1 Container Inclusion Relation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-001"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[66.35, 36.9, 528.95, 385.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPreCompile", "SpiDriver", "FC7xxx", "VariantLinkTime", "VariantPostBuild", "AUTOSAR"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-002"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[112.25, 473.33, 409.67, 494.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPreCompile", "SpiDriver", "FC7xxx", "VariantLinkTime", "VariantPostBuild", "AUTOSAR"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0053-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0053-003"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `53`
- `printed_page`: `53`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[112.25, 694.12, 365.02, 733.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPreCompile", "SpiDriver", "FC7xxx", "VariantLinkTime", "VariantPostBuild", "AUTOSAR"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0054-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0054-001"
- `caption`: "Image block near 3.2.2.1 SpiMaxChannel"
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel"
- `bbox`: `[112.25, 106.15, 524.01, 123.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 SpiMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "Image block near 3.2.2.1 SpiMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0054-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0054-002"
- `caption`: "Image block near 3.2.2.1 SpiMaxChannel"
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel"
- `bbox`: `[112.25, 285.94, 492.05, 303.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 SpiMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "Image block near 3.2.2.1 SpiMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0054-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0054-003"
- `caption`: "Image block near 3.2.2.1 SpiMaxChannel"
- `physical_page`: `54`
- `printed_page`: `54`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.1 SpiMaxChannel"
- `bbox`: `[112.25, 465.88, 499.2, 483.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 SpiMaxChannel; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "configured", "INTEGER", "AUTOSAR_ECUC", "SymbolicNameValue", "SpiMaxChannel", "SpiMaxJob", "SpiMaxSequence"]
- `anchor`: "Image block near 3.2.2.1 SpiMaxChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-001"
- `caption`: "Image block near 3.2.2.5 SpiChannelId"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `bbox`: `[112.25, 37.4, 559.3, 233.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SpiChannelId; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "Image block near 3.2.2.5 SpiChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-002"
- `caption`: "Image block near 3.2.2.5 SpiChannelId"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `bbox`: `[112.25, 379.45, 508.81, 401.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SpiChannelId; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "Image block near 3.2.2.5 SpiChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-003"
- `caption`: "Image block near 3.2.2.5 SpiChannelId"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `bbox`: `[112.25, 546.55, 517.67, 564.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SpiChannelId; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "Image block near 3.2.2.5 SpiChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0055-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0055-004"
- `caption`: "Image block near 3.2.2.5 SpiChannelId"
- `physical_page`: `55`
- `printed_page`: `55`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.5 SpiChannelId"
- `bbox`: `[112.25, 726.63, 474.51, 744.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SpiChannelId; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiChannelId", "Screenshot", "Properties", "Property", "SymbolicNameValue", "INTEGER"]
- `anchor`: "Image block near 3.2.2.5 SpiChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-001"
- `caption`: "Image block near 3.2.2.8 SpiDefaultData"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `bbox`: `[112.25, 147.52, 460.8, 164.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.8 SpiDefaultData; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "Image block near 3.2.2.8 SpiDefaultData"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-002"
- `caption`: "Image block near 3.2.2.8 SpiDefaultData"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `bbox`: `[112.25, 329.15, 465.34, 344.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.8 SpiDefaultData; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "Image block near 3.2.2.8 SpiDefaultData"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-003"
- `caption`: "Image block near 3.2.2.8 SpiDefaultData"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `bbox`: `[112.25, 489.66, 472.94, 508.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.8 SpiDefaultData; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "Image block near 3.2.2.8 SpiDefaultData"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0056-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0056-004"
- `caption`: "Image block near 3.2.2.8 SpiDefaultData"
- `physical_page`: `56`
- `printed_page`: `56`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.8 SpiDefaultData"
- `bbox`: `[112.25, 653.46, 472.75, 672.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.8 SpiDefaultData; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Origin", "Default", "INTEGER", "SpiDefaultData", "Variable", "data"]
- `anchor`: "Image block near 3.2.2.8 SpiDefaultData"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-001"
- `caption`: "Image block near 3.2.2.12 SpiChannelEcucPartitionRef"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef"
- `bbox`: `[112.25, 114.83, 559.3, 129.53]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.12 SpiChannelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "Image block near 3.2.2.12 SpiChannelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-002"
- `caption`: "Image block near 3.2.2.12 SpiChannelEcucPartitionRef"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef"
- `bbox`: `[112.25, 257.15, 552.93, 452.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.12 SpiChannelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "Image block near 3.2.2.12 SpiChannelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0057-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0057-003"
- `caption`: "Image block near 3.2.2.12 SpiChannelEcucPartitionRef"
- `physical_page`: `57`
- `printed_page`: `57`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.12 SpiChannelEcucPartitionRef"
- `bbox`: `[112.25, 760.68, 462.88, 777.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.12 SpiChannelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiChannelEcucPartitionRef", "Screenshot", "AUTOSAR_ECUC", "SpiExternalDevice", "SpiJob", "SpiSlaveMode", "SpiBaudrate"]
- `anchor`: "Image block near 3.2.2.12 SpiChannelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-001"
- `caption`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `bbox`: `[112.25, 182.4, 458.73, 199.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.16 SpiCsIdentifier; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-002"
- `caption`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `bbox`: `[112.25, 345.0, 471.0, 363.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.16 SpiCsIdentifier; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-003"
- `caption`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `bbox`: `[112.25, 559.82, 453.26, 579.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.16 SpiCsIdentifier; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0058-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0058-004"
- `caption`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `physical_page`: `58`
- `printed_page`: `58`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.16 SpiCsIdentifier"
- `bbox`: `[112.25, 760.39, 462.59, 776.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.16 SpiCsIdentifier; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "Origin", "Default", "SpiCsIdentifier", "Variable"]
- `anchor`: "Image block near 3.2.2.16 SpiCsIdentifier"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-001"
- `caption`: "Image block near 3.2.2.20 SpiEnableCs"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs"
- `bbox`: `[112.25, 431.09, 471.05, 450.89]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.20 SpiEnableCs; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.20 SpiEnableCs"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0059-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0059-002"
- `caption`: "Image block near 3.2.2.20 SpiEnableCs"
- `physical_page`: `59`
- `printed_page`: `59`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SpiDriver / 3.2.2.20 SpiEnableCs"
- `bbox`: `[112.25, 578.96, 466.2, 598.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.20 SpiEnableCs; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SCK", "PCS", "AUTOSAR_ECUC", "ENUMERATION", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.20 SpiEnableCs"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-001"
- `caption`: "Image block near 3.2.2.27 SpiPinConfig"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `bbox`: `[112.25, 54.83, 462.65, 75.83]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.27 SpiPinConfig; use the source PDF page for exact visual details."
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.27 SpiPinConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-002"
- `caption`: "Image block near 3.2.2.27 SpiPinConfig"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `bbox`: `[112.25, 237.97, 456.05, 255.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.27 SpiPinConfig; use the source PDF page for exact visual details."
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.27 SpiPinConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-003"
- `caption`: "Image block near 3.2.2.27 SpiPinConfig"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `bbox`: `[112.25, 417.92, 461.4, 436.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.27 SpiPinConfig; use the source PDF page for exact visual details."
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.27 SpiPinConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0060-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0060-004"
- `caption`: "Image block near 3.2.2.27 SpiPinConfig"
- `physical_page`: `60`
- `printed_page`: `60`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig"
- `bbox`: `[112.25, 582.12, 465.05, 600.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.27 SpiPinConfig; use the source PDF page for exact visual details."
- `keywords`: ["PCS", "SCK", "SPI", "AUTOSAR_ECUC", "FLOAT", "SpiTimeCs2Clk", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.27 SpiPinConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-001"
- `caption`: "Image block near 3.2.2.28 SpiDeviceEcucPartitionRef"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `bbox`: `[112.25, 54.83, 463.25, 74.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.28 SpiDeviceEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.2.28 SpiDeviceEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-002"
- `caption`: "Image block near 3.2.2.28 SpiDeviceEcucPartitionRef"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `bbox`: `[112.25, 288.39, 559.3, 396.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.28 SpiDeviceEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.2.28 SpiDeviceEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0061-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0061-003"
- `caption`: "Image block near 3.2.2.28 SpiDeviceEcucPartitionRef"
- `physical_page`: `61`
- `printed_page`: `61`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.28 SpiDeviceEcucPartitionRef"
- `bbox`: `[112.25, 687.15, 404.45, 706.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.28 SpiDeviceEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "Property", "SIN_INPUT_SOUT_OUTPUT", "SpiDeviceEcucPartitionRef", "MAP", "AUTOSAR_ECUC"]
- `anchor`: "Image block near 3.2.2.28 SpiDeviceEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-001"
- `caption`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `bbox`: `[112.25, 112.15, 401.35, 130.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.31 SpiJobStartNotification; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-002"
- `caption`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `bbox`: `[112.25, 276.74, 424.08, 293.18]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.31 SpiJobStartNotification; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-003"
- `caption`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `bbox`: `[112.25, 420.8, 419.63, 438.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.31 SpiJobStartNotification; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0062-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0062-004"
- `caption`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `physical_page`: `62`
- `printed_page`: `62`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.31 SpiJobStartNotification"
- `bbox`: `[112.25, 587.7, 559.3, 600.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.31 SpiJobStartNotification; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "SpiJobStartNotification", "Variable", "Screenshot", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.2.31 SpiJobStartNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0063-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0063-001"
- `caption`: "Image block near 3.2.2.36 SpiChannelIndex"
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex"
- `bbox`: `[112.25, 37.4, 559.3, 213.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.36 SpiChannelIndex; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.36 SpiChannelIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0063-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0063-002"
- `caption`: "Image block near 3.2.2.36 SpiChannelIndex"
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex"
- `bbox`: `[112.25, 341.71, 482.17, 364.18]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.36 SpiChannelIndex; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.36 SpiChannelIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0063-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0063-003"
- `caption`: "Image block near 3.2.2.36 SpiChannelIndex"
- `physical_page`: `63`
- `printed_page`: `63`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.36 SpiChannelIndex"
- `bbox`: `[112.25, 491.78, 428.3, 515.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.36 SpiChannelIndex; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiChannelIndex", "AUTOSAR_ECUC", "SpiChannelAssignment", "SpiSequence", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.36 SpiChannelIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-001"
- `caption`: "Image block near 3.2.2.39 SpiInterruptibleSequence"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence"
- `bbox`: `[112.25, 37.4, 559.3, 218.09]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.39 SpiInterruptibleSequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification"]
- `anchor`: "Image block near 3.2.2.39 SpiInterruptibleSequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-002"
- `caption`: "Image block near 3.2.2.39 SpiInterruptibleSequence"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence"
- `bbox`: `[112.25, 510.16, 401.46, 529.29]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.39 SpiInterruptibleSequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification"]
- `anchor`: "Image block near 3.2.2.39 SpiInterruptibleSequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0064-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0064-003"
- `caption`: "Image block near 3.2.2.39 SpiInterruptibleSequence"
- `physical_page`: `64`
- `printed_page`: `64`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.39 SpiInterruptibleSequence"
- `bbox`: `[112.25, 674.42, 427.25, 694.22]`
- `image_type`: "diagram"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.39 SpiInterruptibleSequence; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Screenshot", "Properties", "Property", "SpiInterruptibleSequence", "REFERENCE", "SpiSeqEndNotification"]
- `anchor`: "Image block near 3.2.2.39 SpiInterruptibleSequence"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0065-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0065-001"
- `caption`: "Image block near 3.2.2.42 SpiJobAssignment"
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `bbox`: `[112.25, 89.21, 559.3, 282.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.42 SpiJobAssignment; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "Image block near 3.2.2.42 SpiJobAssignment"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0065-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0065-002"
- `caption`: "Image block near 3.2.2.42 SpiJobAssignment"
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `bbox`: `[112.25, 410.77, 415.8, 429.37]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.42 SpiJobAssignment; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "Image block near 3.2.2.42 SpiJobAssignment"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0065-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0065-003"
- `caption`: "Image block near 3.2.2.42 SpiJobAssignment"
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `bbox`: `[112.25, 612.18, 368.45, 651.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.42 SpiJobAssignment; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "Image block near 3.2.2.42 SpiJobAssignment"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0065-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0065-004"
- `caption`: "Image block near 3.2.2.42 SpiJobAssignment"
- `physical_page`: `65`
- `printed_page`: `65`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.2.27 SpiPinConfig / 3.2.2.42 SpiJobAssignment"
- `bbox`: `[112.25, 744.62, 547.85, 772.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.42 SpiJobAssignment; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiHwUnitSynchronous", "SpiJobAssignment", "Screenshot", "SpiGeneral", "SpiMulticoreSupport", "FC7xxx", "MAP"]
- `anchor`: "Image block near 3.2.2.42 SpiJobAssignment"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0066-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0066-001"
- `caption`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `bbox`: `[112.25, 216.27, 559.3, 237.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.2 SpiKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0066-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0066-002"
- `caption`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `bbox`: `[112.25, 382.38, 558.52, 399.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.2 SpiKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0066-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0066-003"
- `caption`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `bbox`: `[112.25, 545.38, 558.52, 562.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.2 SpiKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0066-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0066-004"
- `caption`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `physical_page`: `66`
- `printed_page`: `66`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.000001 3.2.2.26 / 3.2.3 SpiGeneral / 3.2.3.2 SpiKernelEcucPartitionRef"
- `bbox`: `[112.25, 743.26, 544.85, 760.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.2 SpiKernelEcucPartitionRef; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "AUTOSAR_ECUC", "Properties", "Property", "ECUC", "Origin", "Default", "SpiKernelEcucPartitionRef"]
- `anchor`: "Image block near 3.2.3.2 SpiKernelEcucPartitionRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0067-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0067-001"
- `caption`: "Image block near 3.2.3.7 SpiTransmitTimeout"
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout"
- `bbox`: `[112.25, 182.4, 559.3, 202.53]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.7 SpiTransmitTimeout; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SymbolicNameValue", "Origin", "AUTOSAR_ECUC", "SpiTransmitTimeoutClockRef", "Variable", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.7 SpiTransmitTimeout"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0067-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0067-002"
- `caption`: "Image block near 3.2.3.7 SpiTransmitTimeout"
- `physical_page`: `67`
- `printed_page`: `67`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout"
- `bbox`: `[112.25, 365.88, 559.3, 382.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.7 SpiTransmitTimeout; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SymbolicNameValue", "Origin", "AUTOSAR_ECUC", "SpiTransmitTimeoutClockRef", "Variable", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.7 SpiTransmitTimeout"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0068-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0068-001"
- `caption`: "Image block near 3.2.3.10 SpiSupportConcurrentSyncTransmit"
- `physical_page`: `68`
- `printed_page`: `68`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.10 SpiSupportConcurrentSyncTransmit"
- `bbox`: `[112.25, 671.22, 436.8, 686.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.10 SpiSupportConcurrentSyncTransmit; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "BOOLEAN", "AUTOSAR_ECUC", "Origin", "Default", "OFF", "SpiSupportConcurrentSyncTransmit", "Screenshot"]
- `anchor`: "Image block near 3.2.3.10 SpiSupportConcurrentSyncTransmit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0069-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0069-001"
- `caption`: "Image block near 3.2.3.14 SpiVersionInfoApi"
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi"
- `bbox`: `[112.25, 268.59, 505.18, 443.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.14 SpiVersionInfoApi; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "Image block near 3.2.3.14 SpiVersionInfoApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0069-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0069-002"
- `caption`: "Image block near 3.2.3.14 SpiVersionInfoApi"
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi"
- `bbox`: `[112.25, 572.0, 560.18, 647.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.14 SpiVersionInfoApi; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "Image block near 3.2.3.14 SpiVersionInfoApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0069-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0069-003"
- `caption`: "Image block near 3.2.3.14 SpiVersionInfoApi"
- `physical_page`: `69`
- `printed_page`: `69`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.14 SpiVersionInfoApi"
- `bbox`: `[112.25, 758.38, 389.4, 782.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.14 SpiVersionInfoApi; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SpiVersionInfoApi", "Screenshot", "AUTOSAR_ECUC", "MAP", "SpiHwUnit", "SpiHwUnitMode", "FC7xxx"]
- `anchor`: "Image block near 3.2.3.14 SpiVersionInfoApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0070-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0070-001"
- `caption`: "Image block near 3.2.3.18 SpiSyncOrAsync"
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync"
- `bbox`: `[112.25, 234.21, 464.45, 256.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.18 SpiSyncOrAsync; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property", "Origin", "SPI_MASTER", "SpiSyncOrAsync"]
- `anchor`: "Image block near 3.2.3.18 SpiSyncOrAsync"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0070-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0070-002"
- `caption`: "Image block near 3.2.3.18 SpiSyncOrAsync"
- `physical_page`: `70`
- `printed_page`: `70`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.18 SpiSyncOrAsync"
- `bbox`: `[112.25, 453.73, 559.3, 472.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.18 SpiSyncOrAsync; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "SymbolicNameValue", "ENUMERATION", "Properties", "Property", "Origin", "SPI_MASTER", "SpiSyncOrAsync"]
- `anchor`: "Image block near 3.2.3.18 SpiSyncOrAsync"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0071-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0071-001"
- `caption`: "Image block near 3.2.3.21 SpiTxDmaChannel"
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel"
- `bbox`: `[112.25, 90.71, 535.25, 112.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.21 SpiTxDmaChannel; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.21 SpiTxDmaChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0071-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0071-002"
- `caption`: "Image block near 3.2.3.21 SpiTxDmaChannel"
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel"
- `bbox`: `[112.25, 258.41, 539.4, 281.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.21 SpiTxDmaChannel; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.21 SpiTxDmaChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0071-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0071-003"
- `caption`: "Image block near 3.2.3.21 SpiTxDmaChannel"
- `physical_page`: `71`
- `printed_page`: `71`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.3.7 SpiTransmitTimeout / 3.2.3.21 SpiTxDmaChannel"
- `bbox`: `[112.25, 446.48, 395.72, 486.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.21 SpiTxDmaChannel; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Spi", "REFERENCE", "SpiTxDmaChannel", "Variable", "DMA", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.21 SpiTxDmaChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0072-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0072-001"
- `caption`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `bbox`: `[112.25, 37.4, 405.25, 58.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SpiMaxHwUnit; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0072-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0072-002"
- `caption`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `bbox`: `[112.25, 205.92, 372.07, 245.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SpiMaxHwUnit; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0072-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0072-003"
- `caption`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `bbox`: `[112.25, 537.9, 405.89, 583.25]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SpiMaxHwUnit; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0072-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0072-004"
- `caption`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `physical_page`: `72`
- `printed_page`: `72`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.5 SpiPublishedInformation / 3.2.5.1 SpiMaxHwUnit"
- `bbox`: `[112.25, 660.84, 495.66, 676.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SpiMaxHwUnit; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Screenshot", "Properties", "SymbolicNameValue", "SpiPublishedInformation", "SpiMaxHwUnit", "CommonPublishedInformation", "ArReleaseMajorVersion"]
- `anchor`: "Image block near 3.2.5.1 SpiMaxHwUnit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-001"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[112.25, 89.21, 439.8, 106.61]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-002"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[112.25, 269.25, 444.65, 287.25]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-003"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[112.25, 468.52, 451.29, 484.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0073-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0073-004"
- `caption`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `physical_page`: `73`
- `printed_page`: `73`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.2 ArReleaseMinorVersion"
- `bbox`: `[112.25, 663.95, 477.2, 681.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "INTEGER_LABEL", "SymbolicNameValue", "ArReleaseMinorVersion", "version", "number", "AUTOSAR"]
- `anchor`: "Image block near 3.2.6.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-001"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[112.25, 106.38, 452.36, 123.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-002"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[112.25, 286.03, 441.05, 303.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0074-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0074-003"
- `caption`: "Image block near 3.2.6.6 SwPatchVersion"
- `physical_page`: `74`
- `printed_page`: `74`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.6 CommonPublishedInformation / 3.2.6.6 SwPatchVersion"
- `bbox`: `[112.25, 467.91, 490.25, 484.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 SwPatchVersion; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "SymbolicNameValue", "INTEGER_LABEL", "SwPatchVersion", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.6 SwPatchVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0075-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0075-001"
- `caption`: "Image block near 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `bbox`: `[112.25, 146.02, 405.94, 165.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 SpiEnableHWUnitAsyncMode; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "SpiEnableHWUnitAsyncMode", "SymbolicNameValue", "SpiJobStartNotificationEnable", "SpiDisableDemReportErrorStatus", "FC7xxx", "SpiLevelDelivered"]
- `anchor`: "Image block near 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0075-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0075-002"
- `caption`: "Image block near 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `physical_page`: `75`
- `printed_page`: `75`
- `section_path`: "Chapter 3 Tresos Configuration Items / 0.01 3.2.3.6 / 3.2.7 SpiExtendedFeatures / 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `bbox`: `[112.25, 508.81, 402.45, 528.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 SpiEnableHWUnitAsyncMode; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "Variable", "SpiEnableHWUnitAsyncMode", "SymbolicNameValue", "SpiJobStartNotificationEnable", "SpiDisableDemReportErrorStatus", "FC7xxx", "SpiLevelDelivered"]
- `anchor`: "Image block near 3.2.7.2 SpiEnableHWUnitAsyncMode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0076-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0076-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 162.64, 559.3, 386.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "LEVEL", "FC7xxx", "AUTOSAR", "SpiLevelDelivered", "NULL_PTR", "SpiInterruptibleSeqAllowed", "SpiInterruptibleSequence"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0076-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0076-002"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `76`
- `printed_page`: `76`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 455.35, 559.3, 680.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "LEVEL", "FC7xxx", "AUTOSAR", "SpiLevelDelivered", "NULL_PTR", "SpiInterruptibleSeqAllowed", "SpiInterruptibleSequence"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-001"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[127.57, 36.9, 467.36, 216.24]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "configured", "Configure", "tab", "SpiChannel", "Jobs", "SpiJob"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-002"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[36.0, 312.06, 559.3, 372.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "configured", "Configure", "tab", "SpiChannel", "Jobs", "SpiJob"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-003"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[36.0, 430.98, 559.3, 517.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "configured", "Configure", "tab", "SpiChannel", "Jobs", "SpiJob"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-004"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[99.23, 523.88, 495.98, 655.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "configured", "Configure", "tab", "SpiChannel", "Jobs", "SpiJob"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0077-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0077-005"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `77`
- `printed_page`: `77`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[36.0, 707.6, 559.3, 786.55]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "configured", "Configure", "tab", "SpiChannel", "Jobs", "SpiJob"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0078-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0078-001"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[127.57, 36.89, 467.69, 168.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "FC7xxx", "tab", "SpiHwUnit", "SpiExternalDevice", "Configure", "devices"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0078-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0078-002"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[36.0, 220.52, 559.3, 351.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "FC7xxx", "tab", "SpiHwUnit", "SpiExternalDevice", "Configure", "devices"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0078-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0078-003"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `78`
- `printed_page`: `78`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[36.0, 420.73, 559.3, 492.98]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FCSPI", "FC7xxx", "tab", "SpiHwUnit", "SpiExternalDevice", "Configure", "devices"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0079-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0079-001"
- `caption`: "Image block near 4.2 SPI Usage Common Steps"
- `physical_page`: `79`
- `printed_page`: `79`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 SPI Usage Common Steps"
- `bbox`: `[36.0, 36.9, 559.3, 286.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 SPI Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["SPI", "FC7xxx", "Generate"]
- `anchor`: "Image block near 4.2 SPI Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-SPI-ASYNCTRANSMIT
- `name`: "Spi_AsyncTransmit"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26,39,40,42,44,45,47`
- `brief`: "api index entry for `Spi_AsyncTransmit`."
- `anchors`:
  - `p26`: "Std_ReturnType Spi_AsyncTransmit(Spi_SequenceType Sequence)"
  - `p39`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p40`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p42`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for Sequences"
  - `p44`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for a Sequence transmission"
- `aliases`: []

### API-SPI-SYNCTRANSMIT
- `name`: "Spi_SyncTransmit"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13,29,49,50,68`
- `brief`: "api index entry for `Spi_SyncTransmit`."
- `anchors`:
  - `p13`: "in Spi_SyncTransmit()."
  - `p29`: "Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence)"
  - `p49`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_SyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p50`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_SyncTransmit calls for a Sequence transmission of"
  - `p68`: "Specifies whether concurrent Spi_SyncTransmit() calls for different sequences shall be configurable."
- `aliases`: []

### API-SPI-READIB
- `name`: "Spi_ReadIB"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,39,40,42,49`
- `brief`: "api index entry for `Spi_ReadIB`."
- `anchors`:
  - `p28`: "Std_ReturnType Spi_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType *DataBufferPointer)"
  - `p39`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p40`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p42`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for Sequences"
  - `p49`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_SyncTransmit / Spi_ReadIB calls for a Sequence"
- `aliases`: []

### API-SPI-SETUPEB
- `name`: "Spi_SetupEB"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29,44,45,47,50`
- `brief`: "api index entry for `Spi_SetupEB`."
- `anchors`:
  - `p29`: "Spi_SetupEB(Spi_ChannelType"
  - `p44`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for a Sequence transmission"
  - `p45`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for a Sequence transmission of"
  - `p47`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_AsyncTransmit calls for Sequences transmission."
  - `p50`: "The following sequence diagram shows an example of Spi_SetupEB / Spi_SyncTransmit calls for a Sequence transmission of"
- `aliases`: []

### API-SPI-WRITEIB
- `name`: "Spi_WriteIB"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,39,40,42,49`
- `brief`: "api index entry for `Spi_WriteIB`."
- `anchors`:
  - `p28`: "Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr)"
  - `p39`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p40`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for a Sequence"
  - `p42`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_AsyncTransmit / Spi_ReadIB calls for Sequences"
  - `p49`: "The following sequence diagram shows an example of Spi_WriteIB / Spi_SyncTransmit / Spi_ReadIB calls for a Sequence"
- `aliases`: []

### API-SPI-CANCEL
- `name`: "Spi_Cancel"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,29,68`
- `brief`: "api index entry for `Spi_Cancel`."
- `anchors`:
  - `p10`: "Switches the Spi_Cancel function ON or OFF."
  - `p29`: "void Spi_Cancel(Spi_SequenceType Sequence)"
  - `p68`: "Switches the Spi_Cancel function ON or OFF."
- `aliases`: []

### API-SPI-GETHWUNITSTATUS
- `name`: "Spi_GetHWUnitStatus"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,29,68`
- `brief`: "api index entry for `Spi_GetHWUnitStatus`."
- `anchors`:
  - `p10`: "Switches the Spi_GetHWUnitStatus function ON or OFF."
  - `p29`: "Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit)"
  - `p68`: "Switches the Spi_GetHWUnitStatus function ON or OFF."
- `aliases`: []

### API-READ
- `name`: "Read"
- `type`: `api`
- `primary_page`: `4`
- `physical_pages`: `4,39,49`
- `brief`: "api index entry for `Read`."
- `anchors`:
  - `p4`: "Write/AsyncTransmit/Read (IB) .............................................................................................................…"
  - `p39`: "Write/AsyncTransmit/Read (IB)"
  - `p49`: "Write/SyncTransmit/Read (IB): Many Channels, Many Jobs and One Sequence"
- `aliases`: []

### API-SPI-GETVERSIONINFO
- `name`: "Spi_GetVersionInfo"
- `type`: `api`
- `primary_page`: `28`
- `physical_pages`: `28,69`
- `brief`: "api index entry for `Spi_GetVersionInfo`."
- `anchors`:
  - `p28`: "void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
  - `p69`: "Switches the Spi_GetVersionInfo function ON or OFF."
- `aliases`: []

### API-SPI-INIT
- `name`: "Spi_Init"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25,31`
- `brief`: "api index entry for `Spi_Init`."
- `anchors`:
  - `p25`: "void Spi_Init(const Spi_ConfigType *ConfigPtr)"
  - `p31`: "Spi_Init"
- `aliases`: []

### API-SPI-MAINFUNCTION-HANDLING
- `name`: "Spi_MainFunction_Handling"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27,66`
- `brief`: "api index entry for `Spi_MainFunction_Handling`."
- `anchors`:
  - `p27`: "void Spi_MainFunction_Handling(void)"
  - `p66`: "This parameter defines the cycle time of the function Spi_MainFunction_Handling in seconds."
- `aliases`: []

### API-ASYNCTRANSMIT
- `name`: "AsyncTransmit"
- `type`: `api`
- `primary_page`: `4`
- `physical_pages`: `4,44`
- `brief`: "api index entry for `AsyncTransmit`."
- `anchors`:
  - `p4`: "Write/AsyncTransmit/Read (IB) .............................................................................................................…"
  - `p44`: "Setup/AsyncTransmit (EB)"
- `aliases`: []

### API-JOB
- `name`: "Job"
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15,37`
- `brief`: "api index entry for `Job`."
- `anchors`:
  - `p15`: "Is performing an SPI Job (transmit)."
  - `p37`: "void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `aliases`: []

### API-SPI-SETHWASYNCMODE
- `name`: "SPI_SetHwAsyncMode"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `SPI_SetHwAsyncMode`."
- `anchors`:
  - `p30`: "Std_ReturnType SPI_SetHwAsyncMode(Spi_HWUnitType tHwUnit, Spi_AsyncModeType AsyncMode)"
- `aliases`: []

### API-SPI-AFTERONEJOBTRANSFERDONE
- `name`: "Spi_AfterOneJobTransferDone"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `Spi_AfterOneJobTransferDone`."
- `anchors`:
  - `p27`: "void Spi_AfterOneJobTransferDone (const SPI_JobParamsType *pcJobCfg)"
- `aliases`: []

### API-SPI-DEINIT
- `name`: "Spi_DeInit"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `Spi_DeInit`."
- `anchors`:
  - `p25`: "Std_ReturnType Spi_DeInit(void)"
- `aliases`: []

### API-SPI-GETJOBRESULT
- `name`: "Spi_GetJobResult"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Spi_GetJobResult`."
- `anchors`:
  - `p26`: "Spi_JobResultType Spi_GetJobResult(Spi_JobType Job)"
- `aliases`: []

### API-SPI-GETSEQUENCERESULT
- `name`: "Spi_GetSequenceResult"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Spi_GetSequenceResult`."
- `anchors`:
  - `p26`: "Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence)"
- `aliases`: []

### API-SPI-GETSTATUS
- `name`: "Spi_GetStatus"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `Spi_GetStatus`."
- `anchors`:
  - `p26`: "Spi_StatusType Spi_GetStatus(void)"
- `aliases`: []

### API-SPI-LL-DEINIT
- `name`: "Spi_LL_DeInit"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `Spi_LL_DeInit`."
- `anchors`:
  - `p31`: "void Spi_LL_DeInit(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `aliases`: []

### API-SPI-LL-INIT
- `name`: "Spi_LL_Init"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `Spi_LL_Init`."
- `anchors`:
  - `p31`: "void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `aliases`: []

### API-SPI-LL-IRQCONFIG
- `name`: "Spi_LL_IrqConfig"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `Spi_LL_IrqConfig`."
- `anchors`:
  - `p32`: "void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `aliases`: []

### API-SPI-LL-IRQPOLL
- `name`: "Spi_LL_IrqPoll"
- `type`: `api`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "api index entry for `Spi_LL_IrqPoll`."
- `anchors`:
  - `p32`: "void Spi_LL_IrqPoll(Spi_HWUnitType tVirHwUnit)"
- `aliases`: []

### API-SPI-LL-ISRDMARX
- `name`: "Spi_LL_IsrDmaRx"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `Spi_LL_IsrDmaRx`."
- `anchors`:
  - `p34`: "void Spi_LL_IsrDmaRx (Spi_DeviceStateType * pDevState)"
- `aliases`: []

### API-SPI-LL-ISRDMATX
- `name`: "Spi_LL_IsrDmaTx"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `Spi_LL_IsrDmaTx`."
- `anchors`:
  - `p34`: "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `aliases`: []

### API-SPI-LL-ISRFIFORX
- `name`: "Spi_LL_IsrFifoRx"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `Spi_LL_IsrFifoRx`."
- `anchors`:
  - `p33`: "void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
- `aliases`: []

### API-SPI-LL-JOBTRANSFER
- `name`: "Spi_LL_JobTransfer"
- `type`: `api`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "api index entry for `Spi_LL_JobTransfer`."
- `anchors`:
  - `p31`: "void Spi_LL_JobTransfer (const Spi_JobCfgType * pcJobCfg)"
- `aliases`: []

### API-SPI-LL-SLAVEMODECANCEL
- `name`: "Spi_LL_SlaveModeCancel"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `Spi_LL_SlaveModeCancel`."
- `anchors`:
  - `p35`: "void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `aliases`: []

### API-SPI-LL-SYNCTRANSFER
- `name`: "Spi_LL_SyncTransfer"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `Spi_LL_SyncTransfer`."
- `anchors`:
  - `p35`: "Std_ReturnType Spi_LL_SyncTransfer (Spi_SequenceType Sequence , uint8 SpiCoreID)"
- `aliases`: []

### API-SPI-LINKJOBSTOSEQUENCE
- `name`: "Spi_LinkJobsToSequence"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `Spi_LinkJobsToSequence`."
- `anchors`:
  - `p36`: "Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
- `aliases`: []

### API-SPI-SCHEDULEJOBSONHWUNIT
- `name`: "Spi_ScheduleJobsOnHwUnit"
- `type`: `api`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "api index entry for `Spi_ScheduleJobsOnHwUnit`."
- `anchors`:
  - `p35`: "Spi_ScheduleJobsOnHwUnit(Spi_HwScheduleQueueType"
- `aliases`: []

### API-SPI-SETASYNCMODE
- `name`: "Spi_SetAsyncMode"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `Spi_SetAsyncMode`."
- `anchors`:
  - `p30`: "Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `aliases`: []

### API-SPI-STARTFIRSTJOBSCHEDULENEXT
- `name`: "Spi_StartFirstJobScheduleNext"
- `type`: `api`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "api index entry for `Spi_StartFirstJobScheduleNext`."
- `anchors`:
  - `p36`: "void Spi_StartFirstJobScheduleNext(Spi_HwScheduleQueueType *pHWUnitQueue)"
- `aliases`: []

### API-SPI-UNLINKREMAINJOBSINSEQ
- `name`: "Spi_UnlinkRemainJobsInSeq"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `Spi_UnlinkRemainJobsInSeq`."
- `anchors`:
  - `p37`: "void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `aliases`: []

### API-SPI-SETHWUNITASYNCMODE
- `name`: "Spi_SetHWUnitAsyncMode"
- `type`: `api`
- `primary_page`: `75`
- `physical_pages`: `75`
- `brief`: "api index entry for `Spi_SetHWUnitAsyncMode`."
- `anchors`:
  - `p75`: "\"Spi_SetHWUnitAsyncMode()\" will be enabled ,which can set each HWUnitto asyncronous mode (POLLING"
- `aliases`: []

### API-COMPILE
- `name`: "Compile"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `Compile`."
- `anchors`:
  - `p13`: "Defines the use of Pre-Compile(PC) support."
- `aliases`: []

### API-SELECT
- `name`: "Select"
- `type`: `api`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "api index entry for `Select`."
- `anchors`:
  - `p58`: "This parameter is the symbolic name to identify the Chip Select (CS) allocated to this Job."
- `aliases`: []

### API-SYNCTRANSMIT
- `name`: "SyncTransmit"
- `type`: `api`
- `primary_page`: `50`
- `physical_pages`: `50`
- `brief`: "api index entry for `SyncTransmit`."
- `anchors`:
  - `p50`: "Setup/SyncTransmit (EB): Many Channels, Many Jobs and One Sequence"
- `aliases`: []

### CFG-SPIGENERAL
- `name`: "SpiGeneral"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,65,72`
- `brief`: "config index entry for `SpiGeneral`."
- `anchors`:
  - `p4`: "SpiGeneral ................................................................................................................................…"
  - `p65`: "SpiGeneral"
  - `p72`: "SPI Handler/Driver module. We calculate the count of SpiGeneral/SpiPhyUnit/* instead."
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,72`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "CommonPublishedInformation ................................................................................................................…"
  - `p72`: "CommonPublishedInformation"
- `aliases`: []

### CFG-SPICHANNEL
- `name`: "SpiChannel"
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: `54,77`
- `brief`: "config index entry for `SpiChannel`."
- `anchors`:
  - `p54`: "SpiChannel"
  - `p77`: "Configure SPI channels in the tab \"SpiChannel\"."
- `aliases`: []

### CFG-SPIDEMEVENTPARAMETERREFS
- `name`: "SpiDemEventParameterRefs"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,71`
- `brief`: "config index entry for `SpiDemEventParameterRefs`."
- `anchors`:
  - `p4`: "SpiDemEventParameterRefs ..................................................................................................................…"
  - `p71`: "SpiDemEventParameterRefs"
- `aliases`: []

### CFG-SPIINTERRUPTIBLESEQALLOWED
- `name`: "SpiInterruptibleSeqAllowed"
- `type`: `config`
- `primary_page`: `67`
- `physical_pages`: `67,76`
- `brief`: "config index entry for `SpiInterruptibleSeqAllowed`."
- `anchors`:
  - `p67`: "SpiInterruptibleSeqAllowed"
  - `p76`: "If the interruptible sequence is needed, you should enable the item \"SpiInterruptibleSeqAllowed\" in the tab"
- `aliases`: []

### CFG-SPIINTERRUPTIBLESEQUENCE
- `name`: "SpiInterruptibleSequence"
- `type`: `config`
- `primary_page`: `64`
- `physical_pages`: `64,76`
- `brief`: "config index entry for `SpiInterruptibleSequence`."
- `anchors`:
  - `p64`: "SpiInterruptibleSequence"
  - `p76`: "\"General\" first, then enable the item \"SpiInterruptibleSequence\" for the specific sequence."
- `aliases`: []

### CFG-SPIJOBSTARTNOTIFICATION
- `name`: "SpiJobStartNotification"
- `type`: `config`
- `primary_page`: `62`
- `physical_pages`: `62,75`
- `brief`: "config index entry for `SpiJobStartNotification`."
- `anchors`:
  - `p62`: "SpiJobStartNotification"
  - `p75`: "SpiJobStartNotificationEnable"
- `aliases`: []

### CFG-SPIPUBLISHEDINFORMATION
- `name`: "SpiPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,72`
- `brief`: "config index entry for `SpiPublishedInformation`."
- `anchors`:
  - `p4`: "SpiPublishedInformation ...................................................................................................................…"
  - `p72`: "SpiPublishedInformation"
- `aliases`: []

### CFG-MCUCLOCKSETTINGCONFIG
- `name`: "McuClockSettingConfig"
- `type`: `config`
- `primary_page`: `67`
- `physical_pages`: `67,70`
- `brief`: "config index entry for `McuClockSettingConfig`."
- `anchors`:
  - `p67`: "on/McuClockSettingConfig/McuClockReferencePoint"
  - `p70`: "on/McuClockSettingConfig/McuClockReferencePoint"
- `aliases`: []

### CFG-MCUMODULECONFIGURATI
- `name`: "McuModuleConfigurati"
- `type`: `config`
- `primary_page`: `67`
- `physical_pages`: `67,70`
- `brief`: "config index entry for `McuModuleConfigurati`."
- `anchors`:
  - `p67`: "ASPathDataOfSchema:/AUTOSAR/EcucDefs/Mcu/McuModuleConfigurati"
  - `p70`: "ASPathDataOfSchema:/AUTOSAR/EcucDefs/Mcu/McuModuleConfigurati"
- `aliases`: []

### CFG-SPICHANNELID
- `name`: "SpiChannelId"
- `type`: `config`
- `primary_page`: `55`
- `physical_pages`: `55`
- `brief`: "config index entry for `SpiChannelId`."
- `anchors`:
  - `p55`: "SpiChannelId"
- `aliases`: []

### CFG-SPICHANNELASSIGNMENT
- `name`: "SpiChannelAssignment"
- `type`: `config`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "config index entry for `SpiChannelAssignment`."
- `anchors`:
  - `p63`: "SpiChannelAssignment"
- `aliases`: []

### CFG-SPICHANNELBUFFERSALLOWED
- `name`: "SpiChannelBuffersAllowed"
- `type`: `config`
- `primary_page`: `66`
- `physical_pages`: `66`
- `brief`: "config index entry for `SpiChannelBuffersAllowed`."
- `anchors`:
  - `p66`: "SpiChannelBuffersAllowed"
- `aliases`: []

### CFG-SPICHANNELECUCPARTITIONREF
- `name`: "SpiChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `57`
- `physical_pages`: `57`
- `brief`: "config index entry for `SpiChannelEcucPartitionRef`."
- `anchors`:
  - `p57`: "SpiChannelEcucPartitionRef"
- `aliases`: []

### CFG-SPICHANNELINDEX
- `name`: "SpiChannelIndex"
- `type`: `config`
- `primary_page`: `63`
- `physical_pages`: `63`
- `brief`: "config index entry for `SpiChannelIndex`."
- `anchors`:
  - `p63`: "SpiChannelIndex"
- `aliases`: []

### CFG-SPICHANNELLIST
- `name`: "SpiChannelList"
- `type`: `config`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "config index entry for `SpiChannelList`."
- `anchors`:
  - `p62`: "SpiChannelList"
- `aliases`: []

### CFG-SPIJOBENDNOTIFICATION
- `name`: "SpiJobEndNotification"
- `type`: `config`
- `primary_page`: `61`
- `physical_pages`: `61`
- `brief`: "config index entry for `SpiJobEndNotification`."
- `anchors`:
  - `p61`: "SpiJobEndNotification"
- `aliases`: []

### CFG-SPIJOBSTARTNOTIFICATIONENABLE
- `name`: "SpiJobStartNotificationEnable"
- `type`: `config`
- `primary_page`: `75`
- `physical_pages`: `75`
- `brief`: "config index entry for `SpiJobStartNotificationEnable`."
- `anchors`:
  - `p75`: "SpiJobStartNotificationEnable"
- `aliases`: []

### CFG-SPIMAXCHANNEL
- `name`: "SpiMaxChannel"
- `type`: `config`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "config index entry for `SpiMaxChannel`."
- `anchors`:
  - `p54`: "SpiMaxChannel"
- `aliases`: []

### CFG-SPIRXDMACHANNEL
- `name`: "SpiRxDmaChannel"
- `type`: `config`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "config index entry for `SpiRxDmaChannel`."
- `anchors`:
  - `p71`: "SpiRxDmaChannel"
- `aliases`: []

### CFG-SPISEQENDNOTIFICATION
- `name`: "SpiSeqEndNotification"
- `type`: `config`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "config index entry for `SpiSeqEndNotification`."
- `anchors`:
  - `p64`: "SpiSeqEndNotification"
- `aliases`: []

### CFG-SPITXDMACHANNEL
- `name`: "SpiTxDmaChannel"
- `type`: `config`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "config index entry for `SpiTxDmaChannel`."
- `anchors`:
  - `p71`: "SpiTxDmaChannel"
- `aliases`: []

### CFG-DEMEVENTPARAMETER
- `name`: "DemEventParameter"
- `type`: `config`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "config index entry for `DemEventParameter`."
- `anchors`:
  - `p71`: "SpiDemEventParameterRefs"
- `aliases`: []

### CFG-SPIPINCONFIG
- `name`: "SpiPinConfig"
- `type`: `config`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "config index entry for `SpiPinConfig`."
- `anchors`:
  - `p60`: "SpiPinConfig"
- `aliases`: []

### MACRO-AUTOSAR-ECUC
- `name`: "AUTOSAR_ECUC"
- `type`: `macro`
- `primary_page`: `54`
- `physical_pages`: `54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,71,72`
- `brief`: "macro index entry for `AUTOSAR_ECUC`."
- `anchors`:
  - `p54`: "AUTOSAR_ECUC"
  - `p55`: "AUTOSAR_ECUC"
  - `p56`: "AUTOSAR_ECUC"
  - `p57`: "AUTOSAR_ECUC"
  - `p58`: "AUTOSAR_ECUC"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8,61,62,64,76`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p8`: "The parameter version info is NULL_PTR."
  - `p61`: "NULL_PTR"
  - `p62`: "NULL_PTR"
  - `p64`: "NULL_PTR"
  - `p76`: "Therefore, please make sure that \"SpiLevelDelivered\" is set to 1 /2 and Notification pointer must not be NULL_PTR."
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,11,12,13`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p10`: "#define SPI_CANCEL_API (STD_ON)"
  - `p11`: "#define SPI_ASYNC_DRIVER (STD_ON)"
  - `p12`: "#define FCSPI_1_ENABLED (STD_ON)"
  - `p13`: "#define SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE (STD_ON)"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,12,13`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p10`: "#define SPI_MULTICORE_ENABLED (STD_OFF)"
  - `p12`: "#define FCSPI_0_ENABLED (STD_OFF)"
  - `p13`: "#define SPI_PRECOMPILE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-INTEGER-LABEL
- `name`: "INTEGER_LABEL"
- `type`: `macro`
- `primary_page`: `72`
- `physical_pages`: `72,73,74`
- `brief`: "macro index entry for `INTEGER_LABEL`."
- `anchors`:
  - `p72`: "Variable : INTEGER_LABEL"
  - `p73`: "Variable : INTEGER_LABEL"
  - `p74`: "Variable : INTEGER_LABEL"
- `aliases`: []

### MACRO-SPI-MASTER
- `name`: "SPI_MASTER"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,69,70`
- `brief`: "macro index entry for `SPI_MASTER`."
- `anchors`:
  - `p14`: "SPI_MASTER = 0"
  - `p69`: "Select between SPI_MASTER and SPI_SLAVE modes."
  - `p70`: "SPI_MASTER"
- `aliases`: []

### MACRO-SPI-JOB-PRIORITY-LEVELS-COUNT
- `name`: "SPI_JOB_PRIORITY_LEVELS_COUNT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,23,24`
- `brief`: "macro index entry for `SPI_JOB_PRIORITY_LEVELS_COUNT`."
- `anchors`:
  - `p9`: "#define SPI_JOB_PRIORITY_LEVELS_COUNT 4"
  - `p23`: "Spi_JobType aSchedJobsFirstNode [SPI_JOB_PRIORITY_LEVELS_COUNT]"
  - `p24`: "Spi_JobType aSchedJobsLastNode [SPI_JOB_PRIORITY_LEVELS_COUNT]"
- `aliases`: []

### MACRO-SPI-SLAVE
- `name`: "SPI_SLAVE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,69,70`
- `brief`: "macro index entry for `SPI_SLAVE`."
- `anchors`:
  - `p14`: "SPI_SLAVE = 1"
  - `p69`: "Select between SPI_MASTER and SPI_SLAVE modes."
  - `p70`: "SPI_SLAVE"
- `aliases`: []

### MACRO-SIN-INPUT-SOUT-OUTPUT
- `name`: "SIN_INPUT_SOUT_OUTPUT"
- `type`: `macro`
- `primary_page`: `61`
- `physical_pages`: `61,62`
- `brief`: "macro index entry for `SIN_INPUT_SOUT_OUTPUT`."
- `anchors`:
  - `p61`: "SIN_INPUT_SOUT_OUTPUT"
  - `p62`: "SIN_INPUT_SOUT_OUTPUT"
- `aliases`: []

### MACRO-SPI-CHANNEL-MAX-COUNT
- `name`: "SPI_CHANNEL_MAX_COUNT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,24`
- `brief`: "macro index entry for `SPI_CHANNEL_MAX_COUNT`."
- `anchors`:
  - `p11`: "#define SPI_CHANNEL_MAX_COUNT (4u)"
  - `p24`: "Spi_ChannelStateType aChnlStats[SPI_CHANNEL_MAX_COUNT]"
- `aliases`: []

### MACRO-SPI-HW-MODULE-MAX-COUNT
- `name`: "SPI_HW_MODULE_MAX_COUNT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,24`
- `brief`: "macro index entry for `SPI_HW_MODULE_MAX_COUNT`."
- `anchors`:
  - `p12`: "#define SPI_HW_MODULE_MAX_COUNT (1u)"
  - `p24`: "Spi_HwScheduleQueueType aHwUnitSchedQueue [SPI_HW_MODULE_MAX_COUNT]"
- `aliases`: []

### MACRO-SPI-INTERRUPT-MODE
- `name`: "SPI_INTERRUPT_MODE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,30`
- `brief`: "macro index entry for `SPI_INTERRUPT_MODE`."
- `anchors`:
  - `p14`: "SPI_INTERRUPT_MODE = 1"
  - `p30`: "SPI_INTERRUPT_MODE)"
- `aliases`: []

### MACRO-SPI-JOB-MAX-COUNT
- `name`: "SPI_JOB_MAX_COUNT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,24`
- `brief`: "macro index entry for `SPI_JOB_MAX_COUNT`."
- `anchors`:
  - `p11`: "#define SPI_JOB_MAX_COUNT (3u)"
  - `p24`: "Spi_JobStatType aJobStats[SPI_JOB_MAX_COUNT]"
- `aliases`: []

### MACRO-SPI-LEVEL-DELIVERED
- `name`: "SPI_LEVEL_DELIVERED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,67`
- `brief`: "macro index entry for `SPI_LEVEL_DELIVERED`."
- `anchors`:
  - `p11`: "#define SPI_LEVEL_DELIVERED (SPI_DELIVER_LEVEL_2)"
  - `p67`: "SPI_LEVEL_DELIVERED value."
- `aliases`: []

### MACRO-SPI-POLLING-MODE
- `name`: "SPI_POLLING_MODE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,30`
- `brief`: "macro index entry for `SPI_POLLING_MODE`."
- `anchors`:
  - `p14`: "SPI_POLLING_MODE = 0"
  - `p30`: "(SPI_POLLING_MODE"
- `aliases`: []

### MACRO-SPI-SEQUENCE-MAX-COUNT
- `name`: "SPI_SEQUENCE_MAX_COUNT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,24`
- `brief`: "macro index entry for `SPI_SEQUENCE_MAX_COUNT`."
- `anchors`:
  - `p11`: "#define SPI_SEQUENCE_MAX_COUNT (3u)"
  - `p24`: "Spi_SeqStatType aSeqStats[SPI_SEQUENCE_MAX_COUNT]"
- `aliases`: []

### MACRO-SPI-BUSY
- `name`: "SPI_BUSY"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,37`
- `brief`: "macro index entry for `SPI_BUSY`."
- `anchors`:
  - `p15`: "SPI_BUSY = 2"
  - `p37`: "SPI_BUSY"
- `aliases`: []

### MACRO-SPI-IDLE
- `name`: "SPI_IDLE"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,37`
- `brief`: "macro index entry for `SPI_IDLE`."
- `anchors`:
  - `p15`: "SPI_IDLE = 1"
  - `p37`: "SPI_IDLE"
- `aliases`: []

### MACRO-SPI-UNINIT
- `name`: "SPI_UNINIT"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15,37`
- `brief`: "macro index entry for `SPI_UNINIT`."
- `anchors`:
  - `p15`: "SPI_UNINIT = 0"
  - `p37`: "SPI_UNINIT"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,53`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 53"
  - `p53`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-SPI-GETSTATUS-ID
- `name`: "SPI_GETSTATUS_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_GETSTATUS_ID`."
- `anchors`:
  - `p8`: "#define SPI_GETSTATUS_ID ((uint8)0x05u)"
- `aliases`: []

### MACRO-SPI-VARIANT-POSTBUILD
- `name`: "SPI_VARIANT_POSTBUILD"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_VARIANT_POSTBUILD`."
- `anchors`:
  - `p13`: "#define SPI_VARIANT_POSTBUILD (1)"
- `aliases`: []

### MACRO-SPI-CHANNEL-BUFFER-TYPE-FLAG-ONLY-IB
- `name`: "SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB`."
- `anchors`:
  - `p11`: "#define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB 0u"
- `aliases`: []

### MACRO-SPI-DELIVER-LEVEL-2
- `name`: "SPI_DELIVER_LEVEL_2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_DELIVER_LEVEL_2`."
- `anchors`:
  - `p11`: "#define SPI_DELIVER_LEVEL_2 0x02u"
- `aliases`: []

### MACRO-SPI-WAIT-LOOP-TICKS
- `name`: "SPI_WAIT_LOOP_TICKS"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_WAIT_LOOP_TICKS`."
- `anchors`:
  - `p13`: "#define SPI_WAIT_LOOP_TICKS 23u"
- `aliases`: []

### MACRO-FCSPI-0-ENABLED
- `name`: "FCSPI_0_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_0_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_0_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-FCSPI-1-ENABLED
- `name`: "FCSPI_1_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_1_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_1_ENABLED (STD_ON)"
- `aliases`: []

### MACRO-FCSPI-1-HWUNIT
- `name`: "FCSPI_1_HWUNIT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_1_HWUNIT`."
- `anchors`:
  - `p12`: "#define FCSPI_1_HWUNIT (CSIB0)"
- `aliases`: []

### MACRO-FCSPI-2-ENABLED
- `name`: "FCSPI_2_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_2_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_2_ENABLED (STD_ON)"
- `aliases`: []

### MACRO-FCSPI-2-HWUNIT
- `name`: "FCSPI_2_HWUNIT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_2_HWUNIT`."
- `anchors`:
  - `p12`: "#define FCSPI_2_HWUNIT (CSIB1)"
- `aliases`: []

### MACRO-FCSPI-3-ENABLED
- `name`: "FCSPI_3_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_3_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_3_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-FCSPI-4-ENABLED
- `name`: "FCSPI_4_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_4_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_4_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-FCSPI-5-ENABLED
- `name`: "FCSPI_5_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_5_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_5_ENABLED (STD_ON)"
- `aliases`: []

### MACRO-FCSPI-5-HWUNIT
- `name`: "FCSPI_5_HWUNIT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_5_HWUNIT`."
- `anchors`:
  - `p12`: "#define FCSPI_5_HWUNIT (CSIB2)"
- `aliases`: []

### MACRO-FCSPI-6-ENABLED
- `name`: "FCSPI_6_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_6_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_6_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-FCSPI-7-ENABLED
- `name`: "FCSPI_7_ENABLED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_7_ENABLED`."
- `anchors`:
  - `p12`: "#define FCSPI_7_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-SPI-ASYNCTRANSMIT-ID
- `name`: "SPI_ASYNCTRANSMIT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_ASYNCTRANSMIT_ID`."
- `anchors`:
  - `p8`: "#define SPI_ASYNCTRANSMIT_ID ((uint8)0x03u)"
- `aliases`: []

### MACRO-SPI-ASYNC-DRIVER
- `name`: "SPI_ASYNC_DRIVER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_ASYNC_DRIVER`."
- `anchors`:
  - `p11`: "#define SPI_ASYNC_DRIVER (STD_ON)"
- `aliases`: []

### MACRO-SPI-CANCEL-API
- `name`: "SPI_CANCEL_API"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_CANCEL_API`."
- `anchors`:
  - `p10`: "#define SPI_CANCEL_API (STD_ON)"
- `aliases`: []

### MACRO-SPI-CANCEL-ID
- `name`: "SPI_CANCEL_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_CANCEL_ID`."
- `anchors`:
  - `p9`: "#define SPI_CANCEL_ID ((uint8) 0x0Cu)"
- `aliases`: []

### MACRO-SPI-CHANNEL-BUFFERS-ALLOWED
- `name`: "SPI_CHANNEL_BUFFERS_ALLOWED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_CHANNEL_BUFFERS_ALLOWED`."
- `anchors`:
  - `p11`: "#define SPI_CHANNEL_BUFFERS_ALLOWED (SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_IB)"
- `aliases`: []

### MACRO-SPI-CONFIG-VARIANT
- `name`: "SPI_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_CONFIG_VARIANT`."
- `anchors`:
  - `p13`: "#define SPI_CONFIG_VARIANT (SPI_VARIANT_POSTBUILD)"
- `aliases`: []

### MACRO-SPI-DATA-RW-16-BITS-PER-UNIT
- `name`: "SPI_DATA_RW_16_BITS_PER_UNIT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_DATA_RW_16_BITS_PER_UNIT`."
- `anchors`:
  - `p13`: "#define SPI_DATA_RW_16_BITS_PER_UNIT ((uint8)2)"
- `aliases`: []

### MACRO-SPI-DATA-RW-32-BITS-PER-UNIT
- `name`: "SPI_DATA_RW_32_BITS_PER_UNIT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_DATA_RW_32_BITS_PER_UNIT`."
- `anchors`:
  - `p13`: "#define SPI_DATA_RW_32_BITS_PER_UNIT ((uint8)4)"
- `aliases`: []

### MACRO-SPI-DATA-RW-8-BITS-PER-UNIT
- `name`: "SPI_DATA_RW_8_BITS_PER_UNIT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_DATA_RW_8_BITS_PER_UNIT`."
- `anchors`:
  - `p13`: "#define SPI_DATA_RW_8_BITS_PER_UNIT ((uint8)1)"
- `aliases`: []

### MACRO-SPI-DEINIT-ID
- `name`: "SPI_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_DEINIT_ID`."
- `anchors`:
  - `p8`: "#define SPI_DEINIT_ID ((uint8) 0x01u)"
- `aliases`: []

### MACRO-SPI-DEM-ENABLE
- `name`: "SPI_DEM_ENABLE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SPI_DEM_ENABLE`."
- `anchors`:
  - `p12`: "#define SPI_DEM_ENABLE (STD_OFF )"
- `aliases`: []

### MACRO-SPI-DET-ENABLE
- `name`: "SPI_DET_ENABLE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_DET_ENABLE`."
- `anchors`:
  - `p10`: "#define SPI_DET_ENABLE (STD_OFF)"
- `aliases`: []

### MACRO-SPI-DMA-USED
- `name`: "SPI_DMA_USED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_DMA_USED`."
- `anchors`:
  - `p13`: "#define SPI_DMA_USED (STD_ON)"
- `aliases`: []

### MACRO-SPI-E-ALREADY-INITIALIZED
- `name`: "SPI_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p7`: "#define SPI_E_ALREADY_INITIALIZED ((uint8)0x4Au)"
- `aliases`: []

### MACRO-SPI-E-CONFIG-OUT-OF-RANGE
- `name`: "SPI_E_CONFIG_OUT_OF_RANGE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_CONFIG_OUT_OF_RANGE`."
- `anchors`:
  - `p7`: "#define SPI_E_CONFIG_OUT_OF_RANGE ((uint8)0x5Au)"
- `aliases`: []

### MACRO-SPI-E-HARDWARE-ERROR
- `name`: "SPI_E_HARDWARE_ERROR"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `SPI_E_HARDWARE_ERROR`."
- `anchors`:
  - `p71`: "SPI_E_HARDWARE_ERROR"
- `aliases`: []

### MACRO-SPI-E-JOB-EMPTY
- `name`: "SPI_E_JOB_EMPTY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_E_JOB_EMPTY`."
- `anchors`:
  - `p8`: "#define SPI_E_JOB_EMPTY ((uint8)0x5Du)"
- `aliases`: []

### MACRO-SPI-E-PARAM-CHANNEL
- `name`: "SPI_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_CHANNEL`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_CHANNEL ((uint8)0x0Au)"
- `aliases`: []

### MACRO-SPI-E-PARAM-CONFIG
- `name`: "SPI_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_CONFIG`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_CONFIG ((uint8)0x0Fu)"
- `aliases`: []

### MACRO-SPI-E-PARAM-EB-UNIT
- `name`: "SPI_E_PARAM_EB_UNIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_EB_UNIT`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_EB_UNIT ((uint8)0x5Bu)"
- `aliases`: []

### MACRO-SPI-E-PARAM-JOB
- `name`: "SPI_E_PARAM_JOB"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_JOB`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_JOB ((uint8)0x0Bu)"
- `aliases`: []

### MACRO-SPI-E-PARAM-LENGTH
- `name`: "SPI_E_PARAM_LENGTH"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_LENGTH`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_LENGTH ((uint8)0x0Du)"
- `aliases`: []

### MACRO-SPI-E-PARAM-POINTER
- `name`: "SPI_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_E_PARAM_POINTER`."
- `anchors`:
  - `p8`: "#define SPI_E_PARAM_POINTER ((uint8)0x10u)"
- `aliases`: []

### MACRO-SPI-E-PARAM-SEQ
- `name`: "SPI_E_PARAM_SEQ"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_SEQ`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_SEQ ((uint8)0x0Cu)"
- `aliases`: []

### MACRO-SPI-E-PARAM-UNIT
- `name`: "SPI_E_PARAM_UNIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_PARAM_UNIT`."
- `anchors`:
  - `p7`: "#define SPI_E_PARAM_UNIT ((uint8)0x0Eu)"
- `aliases`: []

### MACRO-SPI-E-SEQ-EMPTY
- `name`: "SPI_E_SEQ_EMPTY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_E_SEQ_EMPTY`."
- `anchors`:
  - `p8`: "#define SPI_E_SEQ_EMPTY ((uint8)0x5Cu)"
- `aliases`: []

### MACRO-SPI-E-SEQ-IN-PROCESS
- `name`: "SPI_E_SEQ_IN_PROCESS"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_SEQ_IN_PROCESS`."
- `anchors`:
  - `p7`: "#define SPI_E_SEQ_IN_PROCESS ((uint8)0x3Au)"
- `aliases`: []

### MACRO-SPI-E-SEQ-PENDING
- `name`: "SPI_E_SEQ_PENDING"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_SEQ_PENDING`."
- `anchors`:
  - `p7`: "#define SPI_E_SEQ_PENDING ((uint8)0x2Au)"
- `aliases`: []

### MACRO-SPI-E-TIMEOUT-ERROR
- `name`: "SPI_E_TIMEOUT_ERROR"
- `type`: `macro`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "macro index entry for `SPI_E_TIMEOUT_ERROR`."
- `anchors`:
  - `p71`: "SPI_E_TIMEOUT_ERROR"
- `aliases`: []

### MACRO-SPI-E-UNINIT
- `name`: "SPI_E_UNINIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_E_UNINIT`."
- `anchors`:
  - `p7`: "#define SPI_E_UNINIT ((uint8)0x1Au)"
- `aliases`: []

### MACRO-SPI-GETHWUNITSTATUS-ID
- `name`: "SPI_GETHWUNITSTATUS_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_GETHWUNITSTATUS_ID`."
- `anchors`:
  - `p9`: "#define SPI_GETHWUNITSTATUS_ID ((uint8) 0x0Bu)"
- `aliases`: []

### MACRO-SPI-GETJOBRESULT-ID
- `name`: "SPI_GETJOBRESULT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_GETJOBRESULT_ID`."
- `anchors`:
  - `p8`: "#define SPI_GETJOBRESULT_ID ((uint8)0x07u)"
- `aliases`: []

### MACRO-SPI-GETSEQUENCERESULT-ID
- `name`: "SPI_GETSEQUENCERESULT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_GETSEQUENCERESULT_ID`."
- `anchors`:
  - `p8`: "#define SPI_GETSEQUENCERESULT_ID ((uint8)0x08u)"
- `aliases`: []

### MACRO-SPI-GETVERSIONINFO-ID
- `name`: "SPI_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_GETVERSIONINFO_ID`."
- `anchors`:
  - `p8`: "#define SPI_GETVERSIONINFO_ID ((uint8)0x09u)"
- `aliases`: []

### MACRO-SPI-GET-VERSION-INFO-API-SUPPORT
- `name`: "SPI_GET_VERSION_INFO_API_SUPPORT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_GET_VERSION_INFO_API_SUPPORT`."
- `anchors`:
  - `p10`: "#define SPI_GET_VERSION_INFO_API_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-SPI-HWUNIT-ASYNC-MODE
- `name`: "SPI_HWUNIT_ASYNC_MODE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_HWUNIT_ASYNC_MODE`."
- `anchors`:
  - `p13`: "#define SPI_HWUNIT_ASYNC_MODE (STD_ON)"
- `aliases`: []

### MACRO-SPI-HW-STATUS-API
- `name`: "SPI_HW_STATUS_API"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_HW_STATUS_API`."
- `anchors`:
  - `p10`: "#define SPI_HW_STATUS_API (STD_ON)"
- `aliases`: []

### MACRO-SPI-INIT-ID
- `name`: "SPI_INIT_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_INIT_ID`."
- `anchors`:
  - `p8`: "#define SPI_INIT_ID ((uint8) 0x00u)"
- `aliases`: []

### MACRO-SPI-INTERRUPTIBLE-SEQ-ALLOWED
- `name`: "SPI_INTERRUPTIBLE_SEQ_ALLOWED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_INTERRUPTIBLE_SEQ_ALLOWED`."
- `anchors`:
  - `p10`: "#define SPI_INTERRUPTIBLE_SEQ_ALLOWED (STD_OFF)"
- `aliases`: []

### MACRO-SPI-MAINFUNCTION-HANDLING-ID
- `name`: "SPI_MAINFUNCTION_HANDLING_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_MAINFUNCTION_HANDLING_ID`."
- `anchors`:
  - `p9`: "#define SPI_MAINFUNCTION_HANDLING_ID ((uint8)0x10u)"
- `aliases`: []

### MACRO-SPI-MAX-PARTITIONS
- `name`: "SPI_MAX_PARTITIONS"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_MAX_PARTITIONS`."
- `anchors`:
  - `p10`: "#define SPI_MAX_PARTITIONS (1U)"
- `aliases`: []

### MACRO-SPI-MORE-THAN-256-SEQ-JOB-CHAN-SUPPORT
- `name`: "SPI_MORE_THAN_256_SEQ_JOB_CHAN_SUPPORT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_MORE_THAN_256_SEQ_JOB_CHAN_SUPPORT`."
- `anchors`:
  - `p13`: "#define SPI_MORE_THAN_256_SEQ_JOB_CHAN_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-SPI-MULTICORE-ENABLED
- `name`: "SPI_MULTICORE_ENABLED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_MULTICORE_ENABLED`."
- `anchors`:
  - `p10`: "#define SPI_MULTICORE_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-SPI-PHYUNIT-ASYNC-U8
- `name`: "SPI_PHYUNIT_ASYNC_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_PHYUNIT_ASYNC_U8`."
- `anchors`:
  - `p7`: "#define SPI_PHYUNIT_ASYNC_U8 ((uint8)0)"
- `aliases`: []

### MACRO-SPI-PHYUNIT-SYNC-U8
- `name`: "SPI_PHYUNIT_SYNC_U8"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SPI_PHYUNIT_SYNC_U8`."
- `anchors`:
  - `p6`: "#define SPI_PHYUNIT_SYNC_U8 ((uint8)1)"
- `aliases`: []

### MACRO-SPI-PRECOMPILE-SUPPORT
- `name`: "SPI_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p13`: "#define SPI_PRECOMPILE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-SPI-READIB-ID
- `name`: "SPI_READIB_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_READIB_ID`."
- `anchors`:
  - `p8`: "#define SPI_READIB_ID ((uint8)0x04u)"
- `aliases`: []

### MACRO-SPI-SETASYNCMODE-ID
- `name`: "SPI_SETASYNCMODE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_SETASYNCMODE_ID`."
- `anchors`:
  - `p9`: "#define SPI_SETASYNCMODE_ID ((uint8) 0x0Du)"
- `aliases`: []

### MACRO-SPI-SETHWUNITASYNCMODE-ID
- `name`: "SPI_SETHWUNITASYNCMODE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_SETHWUNITASYNCMODE_ID`."
- `anchors`:
  - `p9`: "#define SPI_SETHWUNITASYNCMODE_ID ((uint8)0x80u)"
- `aliases`: []

### MACRO-SPI-SLAVE-MODE-SUPPORT
- `name`: "SPI_SLAVE_MODE_SUPPORT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SPI_SLAVE_MODE_SUPPORT`."
- `anchors`:
  - `p12`: "#define SPI_SLAVE_MODE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-SPI-SPURIOUS-CORE-ID-U32
- `name`: "SPI_SPURIOUS_CORE_ID_U32"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SPI_SPURIOUS_CORE_ID_U32`."
- `anchors`:
  - `p10`: "#define SPI_SPURIOUS_CORE_ID_U32 ((uint32)0UL)"
- `aliases`: []

### MACRO-SPI-SUPPORT-CONCURRENT-SYNC-TRANSMIT
- `name`: "SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT`."
- `anchors`:
  - `p13`: "#define SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT (STD_OFF)"
- `aliases`: []

### MACRO-SPI-SUP-CONT-EN-SECOND-EDGE-SAMPLE
- `name`: "SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE`."
- `anchors`:
  - `p13`: "#define SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE (STD_ON)"
- `aliases`: []

### MACRO-SPI-SYNCTRANSMIT-ID
- `name`: "SPI_SYNCTRANSMIT_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_SYNCTRANSMIT_ID`."
- `anchors`:
  - `p9`: "#define SPI_SYNCTRANSMIT_ID ((uint8) 0x0Au)"
- `aliases`: []

### MACRO-SPI-SYNC-DRIVER
- `name`: "SPI_SYNC_DRIVER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_SYNC_DRIVER`."
- `anchors`:
  - `p11`: "#define SPI_SYNC_DRIVER (STD_ON)"
- `aliases`: []

### MACRO-SPI-TIMEOUT-COUNTER
- `name`: "SPI_TIMEOUT_COUNTER"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_TIMEOUT_COUNTER`."
- `anchors`:
  - `p13`: "#define SPI_TIMEOUT_COUNTER ((sint32)(( 12000000u) / SPI_WAIT_LOOP_TICKS))"
- `aliases`: []

### MACRO-SPI-TRANSMIT-SYNCHRONOUSLY
- `name`: "SPI_TRANSMIT_SYNCHRONOUSLY"
- `type`: `macro`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "macro index entry for `SPI_TRANSMIT_SYNCHRONOUSLY`."
- `anchors`:
  - `p70`: "SPI_TRANSMIT_SYNCHRONOUSLY"
- `aliases`: []

### MACRO-SPI-VARIANT-LINKTIME
- `name`: "SPI_VARIANT_LINKTIME"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_VARIANT_LINKTIME`."
- `anchors`:
  - `p13`: "#define SPI_VARIANT_LINKTIME (2)"
- `aliases`: []

### MACRO-SPI-VARIANT-PRECOMPILE
- `name`: "SPI_VARIANT_PRECOMPILE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `SPI_VARIANT_PRECOMPILE`."
- `anchors`:
  - `p13`: "#define SPI_VARIANT_PRECOMPILE (0)"
- `aliases`: []

### MACRO-SPI-WRITEIB-ID
- `name`: "SPI_WRITEIB_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_WRITEIB_ID`."
- `anchors`:
  - `p8`: "#define SPI_WRITEIB_ID ((uint8)0x02u)"
- `aliases`: []

### MACRO-FCSPI-1-OFFSET
- `name`: "FCSPI_1_OFFSET"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_1_OFFSET`."
- `anchors`:
  - `p12`: "#define FCSPI_1_OFFSET 1u"
- `aliases`: []

### MACRO-FCSPI-2-OFFSET
- `name`: "FCSPI_2_OFFSET"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_2_OFFSET`."
- `anchors`:
  - `p12`: "#define FCSPI_2_OFFSET 2u"
- `aliases`: []

### MACRO-FCSPI-5-OFFSET
- `name`: "FCSPI_5_OFFSET"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `FCSPI_5_OFFSET`."
- `anchors`:
  - `p12`: "#define FCSPI_5_OFFSET 5u"
- `aliases`: []

### MACRO-SPI-AR-RELEASE-MAJOR-VERSION
- `name`: "SPI_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SPI_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p9`: "#define SPI_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-SPI-CHANNEL-BUFFER-TYPE-FLAG-IB-EB-BOTH
- `name`: "SPI_CHANNEL_BUFFER_TYPE_FLAG_IB_EB_BOTH"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_CHANNEL_BUFFER_TYPE_FLAG_IB_EB_BOTH`."
- `anchors`:
  - `p11`: "#define SPI_CHANNEL_BUFFER_TYPE_FLAG_IB_EB_BOTH 2u"
- `aliases`: []

### MACRO-SPI-CHANNEL-BUFFER-TYPE-FLAG-ONLY-EB
- `name`: "SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_EB"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_EB`."
- `anchors`:
  - `p11`: "#define SPI_CHANNEL_BUFFER_TYPE_FLAG_ONLY_EB 1u"
- `aliases`: []

### MACRO-SPI-DELIVER-LEVEL-0
- `name`: "SPI_DELIVER_LEVEL_0"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_DELIVER_LEVEL_0`."
- `anchors`:
  - `p11`: "#define SPI_DELIVER_LEVEL_0 0x00u"
- `aliases`: []

### MACRO-SPI-DELIVER-LEVEL-1
- `name`: "SPI_DELIVER_LEVEL_1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_DELIVER_LEVEL_1`."
- `anchors`:
  - `p11`: "#define SPI_DELIVER_LEVEL_1 0x01u"
- `aliases`: []

### MACRO-SPI-MODE-ASYNC-DMA
- `name`: "SPI_MODE_ASYNC_DMA"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SPI_MODE_ASYNC_DMA`."
- `anchors`:
  - `p12`: "#define SPI_MODE_ASYNC_DMA 2u"
- `aliases`: []

### MACRO-SPI-MODE-ASYNC-FIFO
- `name`: "SPI_MODE_ASYNC_FIFO"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SPI_MODE_ASYNC_FIFO`."
- `anchors`:
  - `p12`: "#define SPI_MODE_ASYNC_FIFO 1u"
- `aliases`: []

### MACRO-SPI-MODE-SYNC
- `name`: "SPI_MODE_SYNC"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SPI_MODE_SYNC`."
- `anchors`:
  - `p12`: "#define SPI_MODE_SYNC 0u"
- `aliases`: []

### MACRO-CS-VIA-PERIPHERAL-ENGINE
- `name`: "CS_VIA_PERIPHERAL_ENGINE"
- `type`: `macro`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "macro index entry for `CS_VIA_PERIPHERAL_ENGINE`."
- `anchors`:
  - `p58`: "CS_VIA_PERIPHERAL_ENGINE"
- `aliases`: []

### MACRO-SIN-INPUT-OUTPUT
- `name`: "SIN_INPUT_OUTPUT"
- `type`: `macro`
- `primary_page`: `61`
- `physical_pages`: `61`
- `brief`: "macro index entry for `SIN_INPUT_OUTPUT`."
- `anchors`:
  - `p61`: "SIN_INPUT_OUTPUT"
- `aliases`: []

### MACRO-SOUT-INPUT-OUTPUT
- `name`: "SOUT_INPUT_OUTPUT"
- `type`: `macro`
- `primary_page`: `61`
- `physical_pages`: `61`
- `brief`: "macro index entry for `SOUT_INPUT_OUTPUT`."
- `anchors`:
  - `p61`: "SOUT_INPUT_OUTPUT"
- `aliases`: []

### MACRO-SOUT-INPUT-SIN-OUTPUT
- `name`: "SOUT_INPUT_SIN_OUTPUT"
- `type`: `macro`
- `primary_page`: `61`
- `physical_pages`: `61`
- `brief`: "macro index entry for `SOUT_INPUT_SIN_OUTPUT`."
- `anchors`:
  - `p61`: "SOUT_INPUT_SIN_OUTPUT"
- `aliases`: []

### MACRO-SPI-JOB-FAILED
- `name`: "SPI_JOB_FAILED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_JOB_FAILED`."
- `anchors`:
  - `p14`: "SPI_JOB_FAILED = 2"
- `aliases`: []

### MACRO-SPI-JOB-OK
- `name`: "SPI_JOB_OK"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_JOB_OK`."
- `anchors`:
  - `p14`: "SPI_JOB_OK = 0"
- `aliases`: []

### MACRO-SPI-JOB-PENDING
- `name`: "SPI_JOB_PENDING"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_JOB_PENDING`."
- `anchors`:
  - `p14`: "SPI_JOB_PENDING = 1"
- `aliases`: []

### MACRO-SPI-JOB-QUEUED
- `name`: "SPI_JOB_QUEUED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_JOB_QUEUED`."
- `anchors`:
  - `p14`: "SPI_JOB_QUEUED = 3"
- `aliases`: []

### MACRO-SPI-SEQ-CANCELLED
- `name`: "SPI_SEQ_CANCELLED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_SEQ_CANCELLED`."
- `anchors`:
  - `p14`: "SPI_SEQ_CANCELLED =3"
- `aliases`: []

### MACRO-SPI-SEQ-FAILED
- `name`: "SPI_SEQ_FAILED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_SEQ_FAILED`."
- `anchors`:
  - `p14`: "SPI_SEQ_FAILED =2"
- `aliases`: []

### MACRO-SPI-SEQ-OK
- `name`: "SPI_SEQ_OK"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_SEQ_OK`."
- `anchors`:
  - `p14`: "SPI_SEQ_OK = 0"
- `aliases`: []

### MACRO-SPI-SEQ-PENDING
- `name`: "SPI_SEQ_PENDING"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `SPI_SEQ_PENDING`."
- `anchors`:
  - `p14`: "SPI_SEQ_PENDING =1"
- `aliases`: []

### MACRO-SPI-TRANSMIT-ASYNCHRONOUSLY
- `name`: "SPI_TRANSMIT_ASYNCHRONOUSLY"
- `type`: `macro`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "macro index entry for `SPI_TRANSMIT_ASYNCHRONOUSLY`."
- `anchors`:
  - `p70`: "SPI_TRANSMIT_ASYNCHRONOUSLY"
- `aliases`: []

### MACRO-CS-VIA-GPIO
- `name`: "CS_VIA_GPIO"
- `type`: `macro`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "macro index entry for `CS_VIA_GPIO`."
- `anchors`:
  - `p58`: "CS_VIA_GPIO"
- `aliases`: []

### TYPE-SPI-JOBTYPE
- `name`: "Spi_JobType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,17,18,19,23,24,25,26,35,37`
- `brief`: "type index entry for `Spi_JobType`."
- `anchors`:
  - `p15`: "typedef uint32 Spi_JobType"
  - `p17`: "Spi_JobType tNumJobs"
  - `p18`: "Spi_JobType tLeftJobs"
  - `p19`: "Spi_JobType tAsyncNextWaitSchedJobIdx"
  - `p23`: "Spi_JobType aSchedJobsFirstNode [SPI_JOB_PRIORITY_LEVELS_COUNT]"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `25`
- `physical_pages`: `25,26,28,29,30,35,36`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p25`: "Std_ReturnType Spi_DeInit(void)"
  - `p26`: "Std_ReturnType"
  - `p28`: "Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr)"
  - `p29`: "Std_ReturnType"
  - `p30`: "Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
- `aliases`: []

### TYPE-SPI-SEQUENCETYPE
- `name`: "Spi_SequenceType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,25,26,29,35,36`
- `brief`: "type index entry for `Spi_SequenceType`."
- `anchors`:
  - `p15`: "typedef uint32 Spi_SequenceType"
  - `p25`: "Spi_SequenceType tSpiMaxValidSeq"
  - `p26`: "Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence)"
  - `p29`: "Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence)"
  - `p35`: "void Spi_LL_SlaveModeCancel (Spi_SequenceType Sequence)"
- `aliases`: []

### TYPE-SPI-HWUNITTYPE
- `name`: "Spi_HWUnitType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,20,29,30,31,32`
- `brief`: "type index entry for `Spi_HWUnitType`."
- `anchors`:
  - `p15`: "typedef uint8 Spi_HWUnitType"
  - `p20`: "Spi_HWUnitType tVirHwModuleIdx"
  - `p29`: "Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit)"
  - `p30`: "Std_ReturnType SPI_SetHwAsyncMode(Spi_HWUnitType tHwUnit, Spi_AsyncModeType AsyncMode)"
  - `p31`: "void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
- `aliases`: []

### TYPE-SPI-CHANNELTYPE
- `name`: "Spi_ChannelType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,19,20,25,28,29`
- `brief`: "type index entry for `Spi_ChannelType`."
- `anchors`:
  - `p15`: "typedef uint32 Spi_ChannelType"
  - `p19`: "Spi_ChannelType tChnlCntOfJob"
  - `p20`: "const Spi_ChannelType *pcChnlsArray"
  - `p25`: "Spi_ChannelType tSpiMaxValidChnl"
  - `p28`: "Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr)"
- `aliases`: []

### TYPE-SPI-SEQCFGTYPE
- `name`: "Spi_SeqCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17,18,36,37`
- `brief`: "type index entry for `Spi_SeqCfgType`."
- `anchors`:
  - `p3`: "Spi_SeqCfgType ............................................................................................................................…"
  - `p17`: "Spi_SeqCfgType"
  - `p18`: "const Spi_SeqCfgType * SequenceCfg"
  - `p36`: "Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq)"
  - `p37`: "void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)"
- `aliases`: []

### TYPE-SPI-HWSCHEDULEQUEUETYPE
- `name`: "Spi_HwScheduleQueueType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,23,24,35,36`
- `brief`: "type index entry for `Spi_HwScheduleQueueType`."
- `anchors`:
  - `p3`: "2.5.17 Spi_HwScheduleQueueType ............................................................................................................…"
  - `p23`: "Spi_HwScheduleQueueType"
  - `p24`: "Spi_HwScheduleQueueType aHwUnitSchedQueue [SPI_HW_MODULE_MAX_COUNT]"
  - `p35`: "Spi_ScheduleJobsOnHwUnit(Spi_HwScheduleQueueType"
  - `p36`: "void Spi_StartFirstJobScheduleNext(Spi_HwScheduleQueueType *pHWUnitQueue)"
- `aliases`: []

### TYPE-SPI-JOBCFGTYPE
- `name`: "Spi_JobCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,19,21,31,35`
- `brief`: "type index entry for `Spi_JobCfgType`."
- `anchors`:
  - `p3`: "Spi_JobCfgType ............................................................................................................................…"
  - `p19`: "Spi_JobCfgType"
  - `p21`: "const Spi_JobCfgType * JobCfg"
  - `p31`: "void Spi_LL_JobTransfer (const Spi_JobCfgType * pcJobCfg)"
  - `p35`: "Spi_JobCfgType *pcJobPrm)"
- `aliases`: []

### TYPE-SPI-DATABUFFERTYPE
- `name`: "Spi_DataBufferType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,21,28,29`
- `brief`: "type index entry for `Spi_DataBufferType`."
- `anchors`:
  - `p15`: "typedef uint8 Spi_DataBufferType"
  - `p21`: "Spi_DataBufferType *pSpiTxBuf"
  - `p28`: "Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr)"
  - `p29`: "Spi_DataBufferType"
- `aliases`: []

### TYPE-SPI-STATUSTYPE
- `name`: "Spi_StatusType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,24,26,29`
- `brief`: "type index entry for `Spi_StatusType`."
- `anchors`:
  - `p15`: "Spi_StatusType"
  - `p24`: "Spi_StatusType Status"
  - `p26`: "Spi_StatusType Spi_GetStatus(void)"
  - `p29`: "Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit)"
- `aliases`: []

### TYPE-SPI-CHANNELSTATETYPE
- `name`: "Spi_ChannelStateType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,21,22,24`
- `brief`: "type index entry for `Spi_ChannelStateType`."
- `anchors`:
  - `p3`: "2.5.12 Spi_ChannelStateType ...............................................................................................................…"
  - `p21`: "Spi_ChannelStateType"
  - `p22`: "Spi_ChannelStateType *pChannelState"
  - `p24`: "Spi_ChannelStateType aChnlStats[SPI_CHANNEL_MAX_COUNT]"
- `aliases`: []

### TYPE-SPI-JOBSTATTYPE
- `name`: "Spi_JobStatType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,18,20,24`
- `brief`: "type index entry for `Spi_JobStatType`."
- `anchors`:
  - `p3`: "Spi_JobStatType............................................................................................................................…"
  - `p18`: "Spi_JobStatType"
  - `p20`: "Spi_JobStatType *pJobState"
  - `p24`: "Spi_JobStatType aJobStats[SPI_JOB_MAX_COUNT]"
- `aliases`: []

### TYPE-SPI-NUMBEROFDATATYPE
- `name`: "Spi_NumberOfDataType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,21,22,29`
- `brief`: "type index entry for `Spi_NumberOfDataType`."
- `anchors`:
  - `p15`: "typedef uint16 Spi_NumberOfDataType"
  - `p21`: "Spi_NumberOfDataType tTransferByteCnt"
  - `p22`: "Spi_NumberOfDataType tChnlByteCnt"
  - `p29`: "Spi_DataBufferType *DesDataBufferPtr, Spi_NumberOfDataType Length)"
- `aliases`: []

### TYPE-SPI-ASYNCMODETYPE
- `name`: "Spi_AsyncModeType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,30,32`
- `brief`: "type index entry for `Spi_AsyncModeType`."
- `anchors`:
  - `p14`: "Spi_AsyncModeType"
  - `p30`: "Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType AsyncMode)"
  - `p32`: "void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)"
- `aliases`: []

### TYPE-SPI-JOBRESULTTYPE
- `name`: "Spi_JobResultType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,19,26`
- `brief`: "type index entry for `Spi_JobResultType`."
- `anchors`:
  - `p14`: "Spi_JobResultType"
  - `p19`: "Spi_JobResultType eJobResult"
  - `p26`: "Spi_JobResultType Spi_GetJobResult(Spi_JobType Job)"
- `aliases`: []

### TYPE-SPI-SEQRESULTTYPE
- `name`: "Spi_SeqResultType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,18,26`
- `brief`: "type index entry for `Spi_SeqResultType`."
- `anchors`:
  - `p14`: "Spi_SeqResultType"
  - `p18`: "Spi_SeqResultType eSeqResult"
  - `p26`: "Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence)"
- `aliases`: []

### TYPE-SPI-CONFIGTYPE
- `name`: "Spi_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,24,25`
- `brief`: "type index entry for `Spi_ConfigType`."
- `anchors`:
  - `p3`: "2.5.19 Spi_ConfigType .....................................................................................................................…"
  - `p24`: "Spi_ConfigType"
  - `p25`: "void Spi_Init(const Spi_ConfigType *ConfigPtr)"
- `aliases`: []

### TYPE-SPI-CHANNELSATTRSTYPE
- `name`: "SPI_ChannelsAttrsType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,25`
- `brief`: "type index entry for `SPI_ChannelsAttrsType`."
- `anchors`:
  - `p3`: "SPI_ChannelsAttrsType .....................................................................................................................…"
  - `p16`: "SPI_ChannelsAttrsType"
  - `p25`: "const SPI_ChannelsAttrsType * ChannelAttrsConfig"
- `aliases`: []

### TYPE-SPI-CHANNELBUFFERTYPE
- `name`: "Spi_ChannelbufferType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,21,22`
- `brief`: "type index entry for `Spi_ChannelbufferType`."
- `anchors`:
  - `p3`: "2.5.11 Spi_ChannelbufferType ..............................................................................................................…"
  - `p21`: "Spi_ChannelbufferType"
  - `p22`: "Spi_ChannelbufferType * pcChnlTxRxBuffer"
- `aliases`: []

### TYPE-SPI-CHANNELSCFGTYPE
- `name`: "Spi_ChannelsCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,22,25`
- `brief`: "type index entry for `Spi_ChannelsCfgType`."
- `anchors`:
  - `p3`: "2.5.14 Spi_ChannelsCfgType ................................................................................................................…"
  - `p22`: "Spi_ChannelsCfgType"
  - `p25`: "const Spi_ChannelsCfgType * ChannelConfig"
- `aliases`: []

### TYPE-SPI-DEVICEATTRTYPE
- `name`: "Spi_DeviceAttrType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16,17`
- `brief`: "type index entry for `Spi_DeviceAttrType`."
- `anchors`:
  - `p3`: "Spi_DeviceAttrType ........................................................................................................................…"
  - `p16`: "Spi_DeviceAttrType"
  - `p17`: "const Spi_DeviceAttrType * DeviceAttrsCfg"
- `aliases`: []

### TYPE-SPI-EXDEVICESATTRSTYPE
- `name`: "Spi_ExDevicesAttrsType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17,20`
- `brief`: "type index entry for `Spi_ExDevicesAttrsType`."
- `anchors`:
  - `p3`: "Spi_ExDevicesAttrsType ....................................................................................................................…"
  - `p17`: "Spi_ExDevicesAttrsType"
  - `p20`: "const Spi_ExDevicesAttrsType * pcDeviceAttrs"
- `aliases`: []

### TYPE-SPI-HWUNITSCONFIGTYPE
- `name`: "Spi_HwUnitsConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,23,25`
- `brief`: "type index entry for `Spi_HwUnitsConfigType`."
- `anchors`:
  - `p3`: "2.5.16 Spi_HwUnitsConfigType ..............................................................................................................…"
  - `p23`: "Spi_HwUnitsConfigType"
  - `p25`: "const Spi_HwUnitsConfigType * HWUnitConfig"
- `aliases`: []

### TYPE-SPI-JOBSCFGTYPE
- `name`: "Spi_JobsCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,20,25`
- `brief`: "type index entry for `Spi_JobsCfgType`."
- `anchors`:
  - `p3`: "2.5.10 Spi_JobsCfgType ....................................................................................................................…"
  - `p20`: "Spi_JobsCfgType"
  - `p25`: "const Spi_JobsCfgType * JobConfig"
- `aliases`: []

### TYPE-SPI-PFNNOTIFYTYPE
- `name`: "Spi_PfnNotifyType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,17,20`
- `brief`: "type index entry for `Spi_PfnNotifyType`."
- `anchors`:
  - `p16`: "typedef void (*Spi_PfnNotifyType) (void)"
  - `p17`: "Spi_PfnNotifyType pfnSeqEndNotify"
  - `p20`: "Spi_PfnNotifyType pfnJobEndNotify"
- `aliases`: []

### TYPE-SPI-SEQSTATTYPE
- `name`: "Spi_SeqStatType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,18,24`
- `brief`: "type index entry for `Spi_SeqStatType`."
- `anchors`:
  - `p3`: "Spi_SeqStatType ...........................................................................................................................…"
  - `p18`: "Spi_SeqStatType"
  - `p24`: "Spi_SeqStatType aSeqStats[SPI_SEQUENCE_MAX_COUNT]"
- `aliases`: []

### TYPE-SPI-DEVICESTATETYPE
- `name`: "Spi_DeviceStateType"
- `type`: `type`
- `primary_page`: `33`
- `physical_pages`: `33,34`
- `brief`: "type index entry for `Spi_DeviceStateType`."
- `anchors`:
  - `p33`: "void Spi_LL_IsrFifoRx (Spi_DeviceStateType * pDevState, uint8 u8HwInstIdx)"
  - `p34`: "void Spi_LL_IsrDmaTx (Spi_DeviceStateType * pDevState)"
- `aliases`: []

### TYPE-SPI-CHNLATTRSTYPE
- `name`: "Spi_ChnlAttrsType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,16`
- `brief`: "type index entry for `Spi_ChnlAttrsType`."
- `anchors`:
  - `p3`: "Spi_ChnlAttrsType .........................................................................................................................…"
  - `p16`: "Spi_ChnlAttrsType"
- `aliases`: []

### TYPE-SPI-MASTERSLAVEMODETYPE
- `name`: "SPI_MasterSlaveModeType"
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,23`
- `brief`: "type index entry for `SPI_MasterSlaveModeType`."
- `anchors`:
  - `p14`: "SPI_MasterSlaveModeType"
  - `p23`: "SPI_MasterSlaveModeType eSpiPhyUnitMode"
- `aliases`: []

### TYPE-SPI-CHNJOBSEQHWSTATETYPE
- `name`: "Spi_ChnJobSeqHwStateType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,24`
- `brief`: "type index entry for `Spi_ChnJobSeqHwStateType`."
- `anchors`:
  - `p3`: "2.5.18 Spi_ChnJobSeqHwStateType ...........................................................................................................…"
  - `p24`: "Spi_ChnJobSeqHwStateType"
- `aliases`: []

### TYPE-SPI-CHNLCFGTYPE
- `name`: "Spi_ChnlCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,22`
- `brief`: "type index entry for `Spi_ChnlCfgType`."
- `anchors`:
  - `p3`: "2.5.13 Spi_ChnlCfgType.....................................................................................................................…"
  - `p22`: "Spi_ChnlCfgType"
- `aliases`: []

### TYPE-SPI-HWUNITCFGTYPE
- `name`: "Spi_HwUnitCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,22`
- `brief`: "type index entry for `Spi_HwUnitCfgType`."
- `anchors`:
  - `p3`: "2.5.15 Spi_HwUnitCfgType ..................................................................................................................…"
  - `p22`: "Spi_HwUnitCfgType"
- `aliases`: []

### TYPE-SPI-SEQSCFGTYPE
- `name`: "Spi_SeqsCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `brief`: "type index entry for `Spi_SeqsCfgType`."
- `anchors`:
  - `p3`: "Spi_SeqsCfgType ...........................................................................................................................…"
  - `p17`: "Spi_SeqsCfgType"
- `aliases`: []

### TYPE-SPI-EXTERNALDEVITYPE
- `name`: "Spi_ExternalDeviType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,20`
- `brief`: "type index entry for `Spi_ExternalDeviType`."
- `anchors`:
  - `p15`: "typedef uint8 Spi_ExternalDeviType"
  - `p20`: "Spi_ExternalDeviType tExternalDev"
- `aliases`: []

### TYPE-SPI-IBEBBUFFERTYPE
- `name`: "SPI_IbEbBufferType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "type index entry for `SPI_IbEbBufferType`."
- `anchors`:
  - `p15`: "SPI_IbEbBufferType"
- `aliases`: []

### TYPE-SPI-JOBPARAMSTYPE
- `name`: "SPI_JobParamsType"
- `type`: `type`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "type index entry for `SPI_JobParamsType`."
- `anchors`:
  - `p27`: "void Spi_AfterOneJobTransferDone (const SPI_JobParamsType *pcJobCfg)"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p28`: "void Spi_GetVersionInfo (Std_VersionInfoType *versioninfo)"
- `aliases`: []

### TYPE-SPI-CHNLCFGTYPE-2
- `name`: "SPI_ChnlCfgType"
- `type`: `type`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "type index entry for `SPI_ChnlCfgType`."
- `anchors`:
  - `p22`: "const SPI_ChnlCfgType * ChannelCfg"
- `aliases`: []

### TYPE-SPI-DEVICESTATETYPE-2
- `name`: "SPI_DeviceStateType"
- `type`: `type`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "type index entry for `SPI_DeviceStateType`."
- `anchors`:
  - `p34`: "void Spi_LL_IsrDmaRx (SPI_DeviceStateType * pDevState)"
- `aliases`: []

### TYPE-SPI-EXDEVICESATTRSTYPE-2
- `name`: "SPI_ExDevicesAttrsType"
- `type`: `type`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "type index entry for `SPI_ExDevicesAttrsType`."
- `anchors`:
  - `p25`: "const SPI_ExDevicesAttrsType *ExDeviceConfig"
- `aliases`: []

### TYPE-SPI-HWUNITCFGTYPE-2
- `name`: "SPI_HwUnitCfgType"
- `type`: `type`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "type index entry for `SPI_HwUnitCfgType`."
- `anchors`:
  - `p23`: "const SPI_HwUnitCfgType * HwUnitCfg"
- `aliases`: []

### TYPE-SPI-SEQSCFGTYPE-2
- `name`: "SPI_SeqsCfgType"
- `type`: `type`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "type index entry for `SPI_SeqsCfgType`."
- `anchors`:
  - `p25`: "const SPI_SeqsCfgType * SequenceConfig"
- `aliases`: []

### TYPE-SPICHANNELTYPE
- `name`: "SpiChannelType"
- `type`: `type`
- `primary_page`: `55`
- `physical_pages`: `55`
- `brief`: "type index entry for `SpiChannelType`."
- `anchors`:
  - `p55`: "SpiChannelType"
- `aliases`: []

### TYPE-SPI-IBEBBUFFERTYPE-2
- `name`: "Spi_IbEbBufferType"
- `type`: `type`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "type index entry for `Spi_IbEbBufferType`."
- `anchors`:
  - `p22`: "Spi_IbEbBufferType eBufferType"
- `aliases`: []

### TYPE-SPI-SEQSTATETYPE
- `name`: "Spi_SeqStateType"
- `type`: `type`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "type index entry for `Spi_SeqStateType`."
- `anchors`:
  - `p19`: "Spi_SeqStateType *pAsyncCurSeqStat"
- `aliases`: []

### FILE-SPI-H
- `name`: "Spi.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,4,6,14,15,25`
- `brief`: "file index entry for `Spi.h`."
- `anchors`:
  - `p3`: "Macros in Spi.h ...........................................................................................................................…"
  - `p4`: "Functions in Spi.h ........................................................................................................................…"
  - `p6`: "Macros in Spi.h"
  - `p14`: "Enumerations in Spi.h"
  - `p15`: "Typedefs in Spi.h"
- `aliases`: []

### FILE-SPI-CFG-H
- `name`: "Spi_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "file index entry for `Spi_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in Spi_Cfg.h .......................................................................................................................…"
  - `p10`: "Macros in Spi_Cfg.h"
- `aliases`: []

### FILE-SPI-FCSPI-H
- `name`: "Spi_FCSpi.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4,31`
- `brief`: "file index entry for `Spi_FCSpi.h`."
- `anchors`:
  - `p4`: "Functions in Spi_FCSpi.h ..................................................................................................................…"
  - `p31`: "Functions in Spi_FCSpi.h"
- `aliases`: []

### FILE-SPI-VERSION-H
- `name`: "Spi_version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "file index entry for `Spi_version.h`."
- `anchors`:
  - `p3`: "Macros in Spi_version.h ...................................................................................................................…"
  - `p9`: "Macros in Spi_version.h"
- `aliases`: []

### TERM-SPI
- `name`: "SPI"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `SPI`."
- `anchors`:
  - `p1`: "SPI"
  - `p2`: "SPI"
  - `p3`: "SPI"
  - `p4`: "SPI"
  - `p5`: "SPI"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,53,54,55,56,57,58,59,60,61`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p53`: "AUTOSAR"
  - `p54`: "AUTOSAR"
  - `p55`: "AUTOSAR"
  - `p56`: "AUTOSAR"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,7,11,15,21,22,29,44,45,47`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p4`: "EB tresos"
  - `p7`: "EB tresos"
  - `p11`: "EB tresos"
  - `p15`: "EB tresos"
  - `p21`: "EB tresos"
- `aliases`: []

### TERM-SPICOREUSE
- `name`: "SpiCoreUse"
- `type`: `term`
- `primary_page`: `16`
- `physical_pages`: `16,17,20,22,23,25`
- `brief`: "term index entry for `SpiCoreUse`."
- `anchors`:
  - `p16`: "uint32 SpiCoreUse"
  - `p17`: "uint32 SpiCoreUse"
  - `p20`: "uint32 SpiCoreUse"
  - `p22`: "uint32 SpiCoreUse"
  - `p23`: "uint32 SpiCoreUse"
- `aliases`: []

### TERM-SPIJOB
- `name`: "SpiJob"
- `type`: `term`
- `primary_page`: `57`
- `physical_pages`: `57,61,65,77`
- `brief`: "term index entry for `SpiJob`."
- `anchors`:
  - `p57`: "The communication settings of an external device. Closely linked to SpiJob."
  - `p61`: "SpiJob"
  - `p65`: "SpiJobAssignment"
  - `p77`: "Configure SPI Jobs in the tab \"SpiJob\" and assign channels configured in Step 1 to adequate Jobs."
- `aliases`: []

### TERM-SPIHWUNIT
- `name`: "SpiHwUnit"
- `type`: `term`
- `primary_page`: `59`
- `physical_pages`: `59,69,78`
- `brief`: "term index entry for `SpiHwUnit`."
- `anchors`:
  - `p59`: "SpiHwUnit"
  - `p69`: "SpiHwUnit"
  - `p78`: "Configure the FCSPI Hardware unit used in the tab \"SpiHwUnit\"."
- `aliases`: []

### TERM-SPIDRIVER
- `name`: "SpiDriver"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,53,65`
- `brief`: "term index entry for `SpiDriver`."
- `anchors`:
  - `p4`: "SpiDriver .................................................................................................................................…"
  - `p53`: "SpiDriver"
  - `p65`: "If SpiHwUnitSynchronous is set to SYNCHRONOUS, the SpiJob uses its containing SpiDriver in a"
- `aliases`: []

### TERM-SPILEVELDELIVERED
- `name`: "SpiLevelDelivered"
- `type`: `term`
- `primary_page`: `66`
- `physical_pages`: `66,75,76`
- `brief`: "term index entry for `SpiLevelDelivered`."
- `anchors`:
  - `p66`: "SpiLevelDelivered"
  - `p75`: "SpiLevelDelivered=2"
  - `p76`: "Therefore, please make sure that \"SpiLevelDelivered\" is set to 1 /2 and Notification pointer must not be NULL_PTR."
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,71,75`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p4`: "Dem"
  - `p71`: "Dem"
  - `p75`: "Dem"
- `aliases`: []

### TERM-SPICOREID
- `name`: "SpiCoreID"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31,35`
- `brief`: "term index entry for `SpiCoreID`."
- `anchors`:
  - `p31`: "void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)"
  - `p35`: "Std_ReturnType Spi_LL_SyncTransfer (Spi_SequenceType Sequence , uint8 SpiCoreID)"
- `aliases`: []

### TERM-SPIDEVICEECUCPARTITIONREF
- `name`: "SpiDeviceEcucPartitionRef"
- `type`: `term`
- `primary_page`: `61`
- `physical_pages`: `61,69`
- `brief`: "term index entry for `SpiDeviceEcucPartitionRef`."
- `anchors`:
  - `p61`: "SpiDeviceEcucPartitionRef"
  - `p69`: "SpiDeviceEcucPartitionRef"
- `aliases`: []

### TERM-SPIENABLECS
- `name`: "SpiEnableCs"
- `type`: `term`
- `primary_page`: `58`
- `physical_pages`: `58,59`
- `brief`: "term index entry for `SpiEnableCs`."
- `anchors`:
  - `p58`: "When the Chip select handling is enabled (see SpiEnableCs), then this parameter specifies if the chip select"
  - `p59`: "SpiEnableCs"
- `aliases`: []

### TERM-SPIEXTERNALDEVICE
- `name`: "SpiExternalDevice"
- `type`: `term`
- `primary_page`: `57`
- `physical_pages`: `57,78`
- `brief`: "term index entry for `SpiExternalDevice`."
- `anchors`:
  - `p57`: "SpiExternalDevice"
  - `p78`: "Configure external devices in the tab \"SpiExternalDevice\" according to the features of devices communicating with"
- `aliases`: []

### TERM-SPISEQUENCE
- `name`: "SpiSequence"
- `type`: `term`
- `primary_page`: `63`
- `physical_pages`: `63,77`
- `brief`: "term index entry for `SpiSequence`."
- `anchors`:
  - `p63`: "SpiSequence"
  - `p77`: "Configure SPI Sequences in the tab \"SpiSequence\" and assign Jobs configured in Step 2 to adequate Sequences."
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12,68`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p12`: "Switches the Production Error Detection and Notification OFF."
  - `p68`: "Switches the Development Error Detection and Notification ON or OFF."
- `aliases`: []

### TERM-MCUCLOCKREFERENCEPOINT
- `name`: "McuClockReferencePoint"
- `type`: `term`
- `primary_page`: `67`
- `physical_pages`: `67,70`
- `brief`: "term index entry for `McuClockReferencePoint`."
- `anchors`:
  - `p67`: "on/McuClockSettingConfig/McuClockReferencePoint"
  - `p70`: "on/McuClockSettingConfig/McuClockReferencePoint"
- `aliases`: []

### TERM-SPIEXTENDEDFEATURES
- `name`: "SpiExtendedFeatures"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,74`
- `brief`: "term index entry for `SpiExtendedFeatures`."
- `anchors`:
  - `p4`: "SpiExtendedFeatures .......................................................................................................................…"
  - `p74`: "SpiExtendedFeatures"
- `aliases`: []

### TERM-SPIPHYUNIT
- `name`: "SpiPhyUnit"
- `type`: `term`
- `primary_page`: `59`
- `physical_pages`: `59,72`
- `brief`: "term index entry for `SpiPhyUnit`."
- `anchors`:
  - `p59`: "CSIBn references the n-th logical unit configured in SpiPhyUnit container. For example: CSIB0 references"
  - `p72`: "SPI Handler/Driver module. We calculate the count of SpiGeneral/SpiPhyUnit/* instead."
- `aliases`: []

### TERM-SPI-CFG
- `name`: "Spi_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "term index entry for `Spi_Cfg`."
- `anchors`:
  - `p3`: "Macros in Spi_Cfg.h .......................................................................................................................…"
  - `p10`: "Macros in Spi_Cfg.h"
- `aliases`: []

### TERM-SPI-FCSPI
- `name`: "Spi_FCSpi"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,31`
- `brief`: "term index entry for `Spi_FCSpi`."
- `anchors`:
  - `p4`: "Functions in Spi_FCSpi.h ..................................................................................................................…"
  - `p31`: "Functions in Spi_FCSpi.h"
- `aliases`: []

### TERM-SPI-VERSION
- `name`: "Spi_version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "term index entry for `Spi_version`."
- `anchors`:
  - `p3`: "Macros in Spi_version.h ...................................................................................................................…"
  - `p9`: "Macros in Spi_version.h"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12,68`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p12`: "Det"
  - `p68`: "Det"
- `aliases`: []

### TERM-SPIENABLEHWUNITASYNCMODE
- `name`: "SpiEnableHWUnitAsyncMode"
- `type`: `term`
- `primary_page`: `75`
- `physical_pages`: `75`
- `brief`: "term index entry for `SpiEnableHWUnitAsyncMode`."
- `anchors`:
  - `p75`: "SpiEnableHWUnitAsyncMode"
- `aliases`: []

### TERM-SPIHWUNITSYNCHRONOUS
- `name`: "SpiHwUnitSynchronous"
- `type`: `term`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "term index entry for `SpiHwUnitSynchronous`."
- `anchors`:
  - `p65`: "SpiHwUnitSynchronous"
- `aliases`: []

### TERM-SPITIMECS2CLK
- `name`: "SpiTimeCs2Clk"
- `type`: `term`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "term index entry for `SpiTimeCs2Clk`."
- `anchors`:
  - `p60`: "SpiTimeCs2Clk"
- `aliases`: []

### TERM-SPIALLOWBIGSIZECOLLECTIONS
- `name`: "SpiAllowBigSizeCollections"
- `type`: `term`
- `primary_page`: `74`
- `physical_pages`: `74`
- `brief`: "term index entry for `SpiAllowBigSizeCollections`."
- `anchors`:
  - `p74`: "SpiAllowBigSizeCollections"
- `aliases`: []

### TERM-SPIASYNCMETHOD
- `name`: "SpiAsyncMethod"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `SpiAsyncMethod`."
- `anchors`:
  - `p70`: "SpiAsyncMethod"
- `aliases`: []

### TERM-SPIBAUDRATE
- `name`: "SpiBaudrate"
- `type`: `term`
- `primary_page`: `57`
- `physical_pages`: `57`
- `brief`: "term index entry for `SpiBaudrate`."
- `anchors`:
  - `p57`: "SpiBaudrate"
- `aliases`: []

### TERM-SPICANCELAPI
- `name`: "SpiCancelApi"
- `type`: `term`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "term index entry for `SpiCancelApi`."
- `anchors`:
  - `p68`: "SpiCancelApi"
- `aliases`: []

### TERM-SPICSCONTINOUS
- `name`: "SpiCsContinous"
- `type`: `term`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "term index entry for `SpiCsContinous`."
- `anchors`:
  - `p60`: "SpiCsContinous"
- `aliases`: []

### TERM-SPICSIDENTIFIER
- `name`: "SpiCsIdentifier"
- `type`: `term`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "term index entry for `SpiCsIdentifier`."
- `anchors`:
  - `p58`: "SpiCsIdentifier"
- `aliases`: []

### TERM-SPICSPOLARITY
- `name`: "SpiCsPolarity"
- `type`: `term`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "term index entry for `SpiCsPolarity`."
- `anchors`:
  - `p58`: "SpiCsPolarity"
- `aliases`: []

### TERM-SPICSSELECTION
- `name`: "SpiCsSelection"
- `type`: `term`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "term index entry for `SpiCsSelection`."
- `anchors`:
  - `p58`: "SpiCsSelection"
- `aliases`: []

### TERM-SPIDATASHIFTEDGE
- `name`: "SpiDataShiftEdge"
- `type`: `term`
- `primary_page`: `58`
- `physical_pages`: `58`
- `brief`: "term index entry for `SpiDataShiftEdge`."
- `anchors`:
  - `p58`: "SpiDataShiftEdge"
- `aliases`: []

### TERM-SPIDATAWIDTH
- `name`: "SpiDataWidth"
- `type`: `term`
- `primary_page`: `55`
- `physical_pages`: `55`
- `brief`: "term index entry for `SpiDataWidth`."
- `anchors`:
  - `p55`: "SpiDataWidth"
- `aliases`: []

### TERM-SPIDEFAULTDATA
- `name`: "SpiDefaultData"
- `type`: `term`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "term index entry for `SpiDefaultData`."
- `anchors`:
  - `p56`: "SpiDefaultData"
- `aliases`: []

### TERM-SPIDEVERRORDETECT
- `name`: "SpiDevErrorDetect"
- `type`: `term`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "term index entry for `SpiDevErrorDetect`."
- `anchors`:
  - `p68`: "SpiDevErrorDetect"
- `aliases`: []

### TERM-SPIDEVICEASSIGNMENT
- `name`: "SpiDeviceAssignment"
- `type`: `term`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "term index entry for `SpiDeviceAssignment`."
- `anchors`:
  - `p62`: "SpiDeviceAssignment"
- `aliases`: []

### TERM-SPIDISABLEDEMREPORTERRORSTATUS
- `name`: "SpiDisableDemReportErrorStatus"
- `type`: `term`
- `primary_page`: `75`
- `physical_pages`: `75`
- `brief`: "term index entry for `SpiDisableDemReportErrorStatus`."
- `anchors`:
  - `p75`: "SpiDisableDemReportErrorStatus"
- `aliases`: []

### TERM-SPIEBMAXLENGTH
- `name`: "SpiEbMaxLength"
- `type`: `term`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "term index entry for `SpiEbMaxLength`."
- `anchors`:
  - `p56`: "SpiEbMaxLength"
- `aliases`: []

### TERM-SPIGLOBALDMAENABLE
- `name`: "SpiGlobalDmaEnable"
- `type`: `term`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "term index entry for `SpiGlobalDmaEnable`."
- `anchors`:
  - `p67`: "SpiGlobalDmaEnable"
- `aliases`: []

### TERM-SPIHWSTATUSAPI
- `name`: "SpiHwStatusApi"
- `type`: `term`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "term index entry for `SpiHwStatusApi`."
- `anchors`:
  - `p68`: "SpiHwStatusApi"
- `aliases`: []

### TERM-SPIHWUNITCLOCKREF
- `name`: "SpiHwUnitClockRef"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `SpiHwUnitClockRef`."
- `anchors`:
  - `p70`: "SpiHwUnitClockRef"
- `aliases`: []

### TERM-SPIHWUNITMODE
- `name`: "SpiHwUnitMode"
- `type`: `term`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "term index entry for `SpiHwUnitMode`."
- `anchors`:
  - `p69`: "SpiHwUnitMode"
- `aliases`: []

### TERM-SPIIBNBUFFERS
- `name`: "SpiIbNBuffers"
- `type`: `term`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "term index entry for `SpiIbNBuffers`."
- `anchors`:
  - `p56`: "SpiIbNBuffers"
- `aliases`: []

### TERM-SPIJOBASSIGNMENT
- `name`: "SpiJobAssignment"
- `type`: `term`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "term index entry for `SpiJobAssignment`."
- `anchors`:
  - `p65`: "SpiJobAssignment"
- `aliases`: []

### TERM-SPIJOBID
- `name`: "SpiJobId"
- `type`: `term`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "term index entry for `SpiJobId`."
- `anchors`:
  - `p62`: "SpiJobId"
- `aliases`: []

### TERM-SPIJOBPRIORITY
- `name`: "SpiJobPriority"
- `type`: `term`
- `primary_page`: `62`
- `physical_pages`: `62`
- `brief`: "term index entry for `SpiJobPriority`."
- `anchors`:
  - `p62`: "SpiJobPriority"
- `aliases`: []

### TERM-SPIKERNELECUCPARTITIONREF
- `name`: "SpiKernelEcucPartitionRef"
- `type`: `term`
- `primary_page`: `66`
- `physical_pages`: `66`
- `brief`: "term index entry for `SpiKernelEcucPartitionRef`."
- `anchors`:
  - `p66`: "SpiKernelEcucPartitionRef"
- `aliases`: []

### TERM-SPIMAINFUNCTIONPERIOD
- `name`: "SpiMainFunctionPeriod"
- `type`: `term`
- `primary_page`: `66`
- `physical_pages`: `66`
- `brief`: "term index entry for `SpiMainFunctionPeriod`."
- `anchors`:
  - `p66`: "SpiMainFunctionPeriod"
- `aliases`: []

### TERM-SPIMAXHWUNIT
- `name`: "SpiMaxHwUnit"
- `type`: `term`
- `primary_page`: `72`
- `physical_pages`: `72`
- `brief`: "term index entry for `SpiMaxHwUnit`."
- `anchors`:
  - `p72`: "SpiMaxHwUnit"
- `aliases`: []

### TERM-SPIMAXJOB
- `name`: "SpiMaxJob"
- `type`: `term`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "term index entry for `SpiMaxJob`."
- `anchors`:
  - `p54`: "SpiMaxJob"
- `aliases`: []

### TERM-SPIMAXSEQUENCE
- `name`: "SpiMaxSequence"
- `type`: `term`
- `primary_page`: `54`
- `physical_pages`: `54`
- `brief`: "term index entry for `SpiMaxSequence`."
- `anchors`:
  - `p54`: "SpiMaxSequence"
- `aliases`: []

### TERM-SPIMULTICORESUPPORT
- `name`: "SpiMulticoreSupport"
- `type`: `term`
- `primary_page`: `65`
- `physical_pages`: `65`
- `brief`: "term index entry for `SpiMulticoreSupport`."
- `anchors`:
  - `p65`: "SpiMulticoreSupport"
- `aliases`: []

### TERM-SPISEQUENCEID
- `name`: "SpiSequenceId"
- `type`: `term`
- `primary_page`: `64`
- `physical_pages`: `64`
- `brief`: "term index entry for `SpiSequenceId`."
- `anchors`:
  - `p64`: "SpiSequenceId"
- `aliases`: []

### TERM-SPISHIFTCLOCKIDLELEVEL
- `name`: "SpiShiftClockIdleLevel"
- `type`: `term`
- `primary_page`: `59`
- `physical_pages`: `59`
- `brief`: "term index entry for `SpiShiftClockIdleLevel`."
- `anchors`:
  - `p59`: "SpiShiftClockIdleLevel"
- `aliases`: []

### TERM-SPISLAVEMODE
- `name`: "SpiSlaveMode"
- `type`: `term`
- `primary_page`: `57`
- `physical_pages`: `57`
- `brief`: "term index entry for `SpiSlaveMode`."
- `anchors`:
  - `p57`: "SpiSlaveMode"
- `aliases`: []

### TERM-SPISUPPORTCONCURRENTSYNCTRANSMIT
- `name`: "SpiSupportConcurrentSyncTransmit"
- `type`: `term`
- `primary_page`: `68`
- `physical_pages`: `68`
- `brief`: "term index entry for `SpiSupportConcurrentSyncTransmit`."
- `anchors`:
  - `p68`: "SpiSupportConcurrentSyncTransmit"
- `aliases`: []

### TERM-SPISYNCORASYNC
- `name`: "SpiSyncOrAsync"
- `type`: `term`
- `primary_page`: `70`
- `physical_pages`: `70`
- `brief`: "term index entry for `SpiSyncOrAsync`."
- `anchors`:
  - `p70`: "SpiSyncOrAsync"
- `aliases`: []

### TERM-SPITIMECLK2CS
- `name`: "SpiTimeClk2Cs"
- `type`: `term`
- `primary_page`: `59`
- `physical_pages`: `59`
- `brief`: "term index entry for `SpiTimeClk2Cs`."
- `anchors`:
  - `p59`: "SpiTimeClk2Cs"
- `aliases`: []

### TERM-SPITIMECS2CS
- `name`: "SpiTimeCs2Cs"
- `type`: `term`
- `primary_page`: `60`
- `physical_pages`: `60`
- `brief`: "term index entry for `SpiTimeCs2Cs`."
- `anchors`:
  - `p60`: "SpiTimeCs2Cs"
- `aliases`: []

### TERM-SPITRANSFERSTART
- `name`: "SpiTransferStart"
- `type`: `term`
- `primary_page`: `56`
- `physical_pages`: `56`
- `brief`: "term index entry for `SpiTransferStart`."
- `anchors`:
  - `p56`: "SpiTransferStart"
- `aliases`: []

### TERM-SPITRANSMITTIMEOUT
- `name`: "SpiTransmitTimeout"
- `type`: `term`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "term index entry for `SpiTransmitTimeout`."
- `anchors`:
  - `p67`: "SpiTransmitTimeoutClockRef"
- `aliases`: []

### TERM-SPITRANSMITTIMEOUTCLOCKREF
- `name`: "SpiTransmitTimeoutClockRef"
- `type`: `term`
- `primary_page`: `67`
- `physical_pages`: `67`
- `brief`: "term index entry for `SpiTransmitTimeoutClockRef`."
- `anchors`:
  - `p67`: "SpiTransmitTimeoutClockRef"
- `aliases`: []

### TERM-SPIVERSIONINFOAPI
- `name`: "SpiVersionInfoApi"
- `type`: `term`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "term index entry for `SpiVersionInfoApi`."
- `anchors`:
  - `p69`: "SpiVersionInfoApi"
- `aliases`: []

### TERM-AUTOSAR-SWS-SPIHANDLERDRIVER
- `name`: "AUTOSAR_SWS_SPIHandlerDriver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `AUTOSAR_SWS_SPIHandlerDriver`."
- `anchors`:
  - `p5`: "detailed requirements, refer to the AUTOSAR_SWS_SPIHandlerDriver."
- `aliases`: []

### TERM-DEM-REPORTERRORSTATUS
- `name`: "Dem_ReportErrorStatus"
- `type`: `term`
- `primary_page`: `71`
- `physical_pages`: `71`
- `brief`: "term index entry for `Dem_ReportErrorStatus`."
- `anchors`:
  - `p71`: "Dem_ReportErrorStatus API in case the corresponding error occurs."
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

### TERM-SERIAL-PERIPHERAL-INTERFACE-HANDLER-DRIVER
- `name`: "Serial Peripheral Interface Handler/Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Serial Peripheral Interface Handler/Driver`."
- `anchors`:
  - `p1`: "Serial Peripheral Interface Handler/Driver"
- `aliases`: []

### TERM-SPIECUCPARTITIONREF
- `name`: "SpiEcucPartitionRef"
- `type`: `term`
- `primary_page`: `69`
- `physical_pages`: `69`
- `brief`: "term index entry for `SpiEcucPartitionRef`."
- `anchors`:
  - `p69`: "SpiEcucPartitionRef"
- `aliases`: []

### TERM-SPI-JOBTYP
- `name`: "Spi_JobTyp"
- `type`: `term`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "term index entry for `Spi_JobTyp`."
- `anchors`:
  - `p18`: "const Spi_JobTyp *pcCurJobIdxPointer"
- `aliases`: []

## 9. Search Aliases

### ALIAS-SPI
- `canonical`: "SPI"
- `aliases`: ["Serial Peripheral Interface Handler/Driver", "SPI 串行外设接口驱动", "SPI module", "SPI driver", "SPI User Manual", "SPI Integration Manual", "Spi", "Serial Peripheral Interface", "SPI Handler Driver", "FCSPI", "FCSpi", "SPI总线", "SPI驱动"]
- `related_ids`: ["TERM-SPI"]

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

### ALIAS-SPI-CHANNEL-JOB-SEQUENCE
- `canonical`: "SPI channel/job/sequence"
- `aliases`: ["SpiChannel", "SpiJob", "SpiSequence", "Spi_JobCfgType", "Spi_SeqCfgType", "channel/job/sequence", "通道/作业/序列"]
- `related_ids`: []

### ALIAS-SPI-BUFFERS
- `canonical`: "SPI buffers"
- `aliases`: ["IB", "EB", "internal buffer", "external buffer", "Spi_WriteIB", "Spi_SetupEB", "Spi_ReadIB"]
- `related_ids`: []

### ALIAS-SPI-ASYNC-SYNC
- `canonical`: "SPI async/sync"
- `aliases`: ["Spi_AsyncTransmit", "Spi_SyncTransmit", "AsyncTransmit", "SyncTransmit", "synchronous", "asynchronous"]
- `related_ids`: []


## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between SPI_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `SPI_User_Manual.pdf`
- `source_pdf_sha256`: `ed9b859820d7e9c4850a557b04229274ce6a2c130468cf501dfb170da83fef54`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `461`
- `technical_missing_terms_added`: `32`
- `pages_with_added_terms`: `78`
- `supplemented_missing_token_count`: `461`
- `supplemented_missing_technical_token_count`: `32`
- `supplemented_physical_pages_count`: `78`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.3"
  - "0.4"
  - "1.0"
  - "3.0"
  - "4.0"
  - "Confidential"
  - "Flagchip"
  - "Initial"
  - "Proprietary"
  - "release"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "2.4"
  - "2.4.1"
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
  - "Main"
  - "Mapping"
  - "Proprietary"
  - "access"
  - "allow"
  - "also"
  - "behavior"
  - "best"
  - "bubuseshat"
  - "buses"
  - "combined"
  - "configure"
  - "connected"
  - "controls"
  - "covers"
  - "depending"
  - "describes"
  - "directly"
  - "driving"
  - "fit"
  - "functionalities"
  - "functionality"
  - "general"
  - "includes"
  - "located"
  - "mechanism"
  - "microcontroller"
  - "monolithic"
  - "much"
  - "multiple"
  - "needs"
  - "objectives"
  - "one"
  - "optimization"
  - "other"
  - "part"
  - "provide"
  - "required"
  - "selected"
  - "services"
  - "several"
  - "single"
  - "software"
  - "static"
  - "take"
  - "users"
  - "via"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Sync"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Synchronous"
  - "already"
  - "assigned"
  - "busy"
  - "exceeds"
  - "initialization"
  - "initialized"
  - "pending"
  - "precompile"
  - "resource"
  - "running"
  - "service"
  - "sizes"
  - "uninitialized"
  - "while"
  - "without"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "0x06"
  - "Confidential"
  - "Flagchip"
  - "Init"
  - "Proprietary"
  - "get"
  - "reads"
  - "result"
  - "service"
  - "writes"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Unit"
  - "_AR_RELEASE_MINOR_VERSION"
  - "_AR_RELEASE_REVISION_VERSION"
  - "_MODULE_ID"
  - "_SW_MAJOR_VERSION"
  - "_SW_MINOR_VERSION"
  - "_SW_PATCH_VERSION"
  - "_VENDOR_ID"
  - "cancels"
  - "levels"
  - "main"
  - "sets"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Information"
  - "Interruptible"
  - "Proprietary"
  - "Version"
  - "_CFG_AR_RELEASE_REVISION_VERSION"
  - "_CFG_MODULE_ID"
  - "_CFG_SW_MAJOR_VERSION"
  - "_CFG_SW_MINOR_VERSION"
  - "_CFG_SW_PATCH_VERSION"
  - "_CFG_VENDOR_ID"
  - "functionality"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Asynchronous"
  - "Basic"
  - "Buffers"
  - "Confidential"
  - "Enhanced"
  - "Flagchip"
  - "Proprietary"
  - "Selects"
  - "Simple"
  - "Support"
  - "Synchronous"
  - "Total"
  - "both"
  - "delivered"
  - "functionalities"
  - "functionality"
  - "manages"
  - "maximum"
  - "scalable"
  - "selected"
  - "supported"
  - "usage"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Physical"
  - "Proprietary"
  - "disabled"
  - "operation"
  - "salve"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Allows"
  - "Autosar"
  - "CPU"
  - "Confidential"
  - "Flagchip"
  - "Loops"
  - "MCU"
  - "Proprietary"
  - "allows"
  - "bit"
  - "clock"
  - "consumed"
  - "cycles"
  - "dual"
  - "during"
  - "forbids"
  - "frame"
  - "loop"
  - "made"
  - "memory"
  - "one"
  - "per"
  - "precompile"
  - "selected"
  - "simultaneous"
  - "threads"
  - "timeout"
  - "transfers"
  - "using"
  - "variant"
  - "variants"
  - "wait"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Level"
  - "Master"
  - "Proprietary"
  - "Slave"
  - "accepted"
  - "actual"
  - "buses"
  - "canceled"
  - "disabled"
  - "ensured"
  - "failed"
  - "finished"
  - "handled"
  - "interrupt"
  - "interrupts"
  - "mechanism"
  - "operation"
  - "polling"
  - "related"
  - "selected"
  - "started"
  - "successfully"
  - "while"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "2.4"
  - "2.4.1"
  - "Confidential"
  - "Contains"
  - "External"
  - "Flagchip"
  - "Not"
  - "Proprietary"
  - "application"
  - "currently"
  - "defining"
  - "designated"
  - "elements"
  - "enumeration"
  - "initialized"
  - "microcontroller"
  - "transmitting"
  - "usable"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "CCR"
  - "CMD"
  - "ChannelAttrsCfg"
  - "Confidential"
  - "Device"
  - "FCR"
  - "Flagchip"
  - "Proprietary"
  - "TCR"
  - "TR_CTRLs"
  - "control"
  - "holds"
  - "idle"
  - "manage"
  - "register"
  - "setting"
  - "timing"
  - "u32CFGR1"
  - "u32CLK_CFG"
  - "u32ChnlFIFOWTM"
  - "u32ChnlTRCTRL"
  - "u32TR_CTRL"
  - "u8DataAccessed"
  - "width"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "Count"
  - "External"
  - "Flagchip"
  - "Proprietary"
  - "all"
  - "configure"
  - "holds"
  - "indicating"
  - "one"
  - "pcJobsArray"
  - "u8Interruptible"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "JobIndexList"
  - "Position"
  - "Proprietary"
  - "Seq"
  - "manage"
  - "pcSpiSeqCfg"
  - "pending"
  - "transmitted"
  - "yet"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "all"
  - "completely"
  - "next"
  - "parameters"
  - "waiting"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Implementation"
  - "LLD"
  - "Priority"
  - "Proprietary"
  - "Unit"
  - "cached"
  - "field"
  - "offset"
  - "referencing"
  - "s8Priority"
  - "sint8"
  - "start"
  - "u32Hwoffset"
  - "virtual"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Actual"
  - "Buffer"
  - "Confidential"
  - "Enabled"
  - "Flagchip"
  - "Proprietary"
  - "Transfer"
  - "Transmit"
  - "address"
  - "changeable"
  - "manage"
  - "pSpiRxBuf"
  - "size"
  - "u8DefaultTransFlag"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Buffer"
  - "Confidential"
  - "Descriptor"
  - "Flagchip"
  - "Implementation"
  - "Proprietary"
  - "Transmit"
  - "field"
  - "holds"
  - "length"
  - "parameters"
  - "referencing"
  - "u32DefaultTransData"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "Flagchip"
  - "Master"
  - "Mode"
  - "PhyUnit"
  - "Proprietary"
  - "Slave"
  - "Sync"
  - "all"
  - "flag"
  - "highest"
  - "holds"
  - "indicating"
  - "s8MaxSchedJobPriority"
  - "scheduling"
  - "sint8"
  - "u16UseDma"
  - "u8RxDmaChannel"
  - "u8SyncOrAsync"
  - "u8TxDmaChannel"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "HwUnit"
  - "Proprietary"
  - "holds"
  - "parameters"
  - "scheduling"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "LLD"
  - "Proprietary"
  - "initialization"
  - "instances"
  - "tSpiMaxValidJob"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "given"
  - "request"
  - "result"
  - "returns"
  - "service"
  - "triggers"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "after"
  - "appropriate"
  - "call"
  - "interrupts"
  - "poll"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Writes"
  - "given"
  - "information"
  - "into"
  - "location"
  - "memory"
  - "puts"
  - "reads"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Service"
  - "bus"
  - "cancelation"
  - "given"
  - "hold"
  - "location"
  - "memory"
  - "need"
  - "received"
  - "request"
  - "setup"
  - "synchronously"
  - "transmitted"
  - "written"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "busses"
  - "given"
  - "handled"
  - "operating"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initialize"
  - "Proprietary"
  - "Referenced"
  - "Target"
  - "all"
  - "bus"
  - "core"
  - "initialize"
  - "operated"
  - "send"
  - "sets"
  - "through"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Activate"
  - "Confidential"
  - "Flagchip"
  - "IRQ"
  - "Proprietary"
  - "RX_FIFO_Interrupt"
  - "TX_FIFO_Interrupt"
  - "deactivate"
  - "functions"
  - "interrupt"
  - "operation"
  - "polling"
  - "register"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "ISRs"
  - "Proprietary"
  - "RDF"
  - "TDF"
  - "instance"
  - "units"
  - "working"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Cancel"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Transfer"
  - "canceled"
  - "fcspi"
  - "given"
  - "going"
  - "pQueue"
  - "pi_HwScheduleQueueType"
  - "schedule"
  - "slave"
  - "synchronously"
  - "tJob"
  - "working"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "E_NOT_OK"
  - "E_OK"
  - "Flagchip"
  - "Indicating"
  - "Proprietary"
  - "all"
  - "does"
  - "given"
  - "interrupt"
  - "lock"
  - "mark"
  - "other"
  - "pQueue"
  - "performed"
  - "polling"
  - "ready"
  - "share"
  - "shares"
  - "some"
  - "starts"
  - "successfully"
  - "tJob"
  - "transfer"
  - "transmitted"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Dma"
  - "Flagchip"
  - "Indicating"
  - "Not"
  - "Proprietary"
  - "Unit"
  - "currently"
  - "indicating"
  - "initialized"
  - "interrupt"
  - "polling"
  - "release"
  - "scheduling"
  - "transmitting"
  - "usable"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Init"
  - "Proprietary"
  - "call"
  - "running"
  - "transition"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Proprietary"
  - "belongs"
  - "composed"
  - "many"
  - "one"
  - "step"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Lower"
  - "Proprietary"
  - "These"
  - "higher"
  - "same"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Low"
  - "Proprietary"
  - "These"
  - "belongs"
  - "high"
  - "higher"
  - "same"

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
  - "Example"
  - "Flagchip"
  - "Proprietary"
  - "belongs"
  - "composed"
  - "many"
  - "one"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Lower"
  - "Proprietary"
  - "These"
  - "higher"
  - "same"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Low"
  - "Proprietary"
  - "These"
  - "belongs"
  - "high"
  - "higher"
  - "same"

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
  - "Example"
  - "Flagchip"
  - "Lower"
  - "Proprietary"
  - "These"
  - "appropriate"
  - "higher"
  - "knows"
  - "methods"
  - "same"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Lower"
  - "Proprietary"
  - "These"
  - "higher"
  - "same"

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
  - "Label"
  - "Proprietary"
  - "Range"
  - "Variant"
  - "enumeration"
  - "parameters"
  - "sub"

### TEXTSUP-PAGE-0054
- `physical_page`: `54`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Reference"
  - "Timeout"
  - "during"
  - "failure"
  - "false"
  - "gathered"
  - "report"
  - "reported"
  - "stage"
  - "tools"

### TEXTSUP-PAGE-0055
- `physical_page`: `55`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "NAME"
  - "Proprietary"
  - "Range"
  - "SYMBOLIC"
  - "false"
  - "functions"
  - "transmitted"
  - "width"

### TEXTSUP-PAGE-0056
- `physical_page`: `56`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "LSB"
  - "MSB"
  - "Proprietary"
  - "Range"
  - "bit"
  - "elements"
  - "maximum"
  - "size"
  - "starting"
  - "transmitted"

### TEXTSUP-PAGE-0057
- `physical_page`: `57`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "MHz"
  - "Maps"
  - "Proprietary"
  - "access"
  - "allows"
  - "baudrate"
  - "false"
  - "limit"
  - "multiple"
  - "partition"
  - "point"
  - "tools"
  - "using"
  - "view"
  - "zero"

### TEXTSUP-PAGE-0058
- `physical_page`: `58`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "HIGH"
  - "LOW"
  - "PCS0"
  - "Proprietary"
  - "Range"
  - "STRING"
  - "active"
  - "automatically"
  - "engine"
  - "general"
  - "handled"
  - "polarity"
  - "purpose"
  - "ripheral"
  - "shift"
  - "via"

### TEXTSUP-PAGE-0059
- `physical_page`: `59`
- `additional_text_terms`:
  - "Confidential"
  - "Delay"
  - "Flagchip"
  - "HIGH"
  - "LOW"
  - "Proprietary"
  - "Range"
  - "TRAILING"
  - "Timing"
  - "allows"
  - "clock"
  - "disables"
  - "enables"
  - "functions"
  - "idle"
  - "microcontroller"
  - "shift"
  - "tLag"

### TEXTSUP-PAGE-0060
- `physical_page`: `60`
- `additional_text_terms`:
  - "Between"
  - "Confidential"
  - "Delay"
  - "FALSE"
  - "Flagchip"
  - "Proprietary"
  - "Range"
  - "TRUE"
  - "Timing"
  - "Transfers"
  - "allows"
  - "asserted"
  - "assertions"
  - "clock"
  - "determines"
  - "field"
  - "frame"
  - "keep"
  - "tDT"
  - "tLead"
  - "transfers"

### TEXTSUP-PAGE-0061
- `physical_page`: `61`
- `additional_text_terms`:
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "MIN"
  - "Maps"
  - "NAME"
  - "Proprietary"
  - "Range"
  - "access"
  - "amongst"
  - "configure"
  - "connection"
  - "done"
  - "limit"
  - "multiple"
  - "one"
  - "others"
  - "partitions"
  - "special"
  - "zero"

### TEXTSUP-PAGE-0062
- `physical_page`: `62`
- `additional_text_terms`:
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "NAME"
  - "Priority"
  - "Proprietary"
  - "Reference"
  - "References"
  - "SPI093"
  - "accordingly"
  - "functions"
  - "highest"
  - "lowest"
  - "their"
  - "within"

### TEXTSUP-PAGE-0063
- `physical_page`: `63`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Min"
  - "Proprietary"
  - "Reference"
  - "several"
  - "within"

### TEXTSUP-PAGE-0064
- `physical_page`: `64`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Min"
  - "Proprietary"
  - "allows"
  - "another"
  - "one"
  - "suspended"

### TEXTSUP-PAGE-0065
- `physical_page`: `65`
- `additional_text_terms`:
  - "ASYNCHRONOUS"
  - "Confidential"
  - "Flagchip"
  - "Min"
  - "Proprietary"
  - "Range"
  - "Reference"
  - "That"
  - "available"
  - "core"
  - "feature"
  - "manner"
  - "mapping"
  - "means"
  - "multi"
  - "multiple"
  - "partition"
  - "partitions"

### TEXTSUP-PAGE-0066
- `physical_page`: `66`
- `additional_text_terms`:
  - "Buffers"
  - "Confidential"
  - "Editable"
  - "FALSE"
  - "Flagchip"
  - "Maps"
  - "NONE"
  - "Proprietary"
  - "Reference"
  - "Selects"
  - "Since"
  - "available"
  - "certain"
  - "core"
  - "delivered"
  - "false"
  - "functionality"
  - "implemetion"
  - "kernel"
  - "mapped"
  - "multi"
  - "one"
  - "option"
  - "partition"
  - "partitions"
  - "referenced"
  - "scalable"
  - "subset"
  - "supported"
  - "supports"
  - "usage"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0067
- `physical_page`: `67`
- `additional_text_terms`:
  - "CPU"
  - "Confidential"
  - "Flagchip"
  - "Interruptible"
  - "MCU"
  - "Proprietary"
  - "REF"
  - "Reference"
  - "Timeout"
  - "clock"
  - "depends"
  - "false"
  - "frame"
  - "functionality"
  - "into"
  - "method"
  - "microseconds"
  - "one"
  - "transferring"
  - "wait"

### TEXTSUP-PAGE-0068
- `physical_page`: `68`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "TRUE"
  - "false"

### TEXTSUP-PAGE-0069
- `physical_page`: `69`
- `additional_text_terms`:
  - "Bus"
  - "Confidential"
  - "Flagchip"
  - "Logical"
  - "Maps"
  - "Physical"
  - "Proprietary"
  - "available"
  - "false"
  - "mapping"
  - "multiple"
  - "partition"
  - "partitions"
  - "zero"

### TEXTSUP-PAGE-0070
- `physical_page`: `70`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "HwUnit"
  - "MCU"
  - "Proprietary"
  - "Range"
  - "Ref"
  - "Reference"
  - "Transfer"
  - "clock"
  - "false"
  - "into"
  - "method"
  - "periperal"
  - "transfers"

### TEXTSUP-PAGE-0071
- `physical_page`: `71`
- `additional_text_terms`:
  - "Confidential"
  - "DMAChannel"
  - "FC7300FXXX"
  - "Flagchip"
  - "Mcl"
  - "MclConfigSet"
  - "NAME"
  - "Proprietary"
  - "Ref"
  - "Reference"
  - "SYMBOLIC"
  - "Timeout"
  - "elements"
  - "failure"
  - "false"
  - "invoked"
  - "receive"
  - "report"
  - "reported"
  - "transive"
  - "using"

### TEXTSUP-PAGE-0072
- `physical_page`: `72`
- `additional_text_terms`:
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Major"
  - "NAME"
  - "Proprietary"
  - "Range"
  - "SYMBOLIC"
  - "about"
  - "aggregated"
  - "all"
  - "appropriate"
  - "available"
  - "busses"
  - "false"
  - "handled"
  - "holding"
  - "information"
  - "microcontroller"
  - "modules"
  - "parameters"
  - "published"
  - "units"
  - "vendor"
  - "versions"

### TEXTSUP-PAGE-0073
- `physical_page`: `73`
- `additional_text_terms`:
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "Major"
  - "Minor"
  - "Proprietary"
  - "Range"
  - "appropriate"
  - "false"
  - "numbering"
  - "vendor"

### TEXTSUP-PAGE-0074
- `physical_page`: `74`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "Module"
  - "Patch"
  - "Proprietary"
  - "Range"
  - "Vendor"
  - "allow"
  - "dedicated"
  - "false"
  - "feature"
  - "more"
  - "numbering"
  - "than"
  - "vendor"

### TEXTSUP-PAGE-0075
- `physical_page`: `75`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Reporting"
  - "false"
  - "independently"
  - "setting"

### TEXTSUP-PAGE-0076
- `physical_page`: `76`
- `additional_text_terms`:
  - "According"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Specification"
  - "valid"

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
  - "Enable"
  - "Flagchip"
  - "Proprietary"
  - "buses"
  - "items"
  - "necessary"

### TEXTSUP-PAGE-0079
- `physical_page`: `79`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79`
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
- `physical_pages`: `2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0028-001", "TBL-0029-001", "TBL-0030-001", "TBL-0031-001", "TBL-0032-001"]
- `message`: "48 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,13,29`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0013-001", "FIG-0029-001"]
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
- `pdf_page_count`: `79`
- `indexed_physical_pages_count`: `79`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `187`
- `table_index_count`: `48`
- `figure_index_count`: `142`
- `symbol_index_count`: `304`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `ed9b859820d7e9c4850a557b04229274ce6a2c130468cf501dfb170da83fef54`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `461`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `7`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
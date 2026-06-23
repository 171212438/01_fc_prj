---
manifest_schema_version: "1.1"
source_pdf: "CRC_User_Manual.pdf"
source_pdf_sha256: "aae4be580e0900b868ed66b929e36a6ff5c1cf2c5587806fd8a09bc6dc7fe6aa"
source_pdf_size_bytes: 2189435
pdf_page_count: 43
generated_at: "2026-06-19T23:50:45Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.8.0-file-library-best-effort"
source_file_library_id: "file_000000001f3c720b9441545d079c83ef"
source_file_created_at: "2026-06-19T09:10:38Z"
source_file_modified_at: "2026-06-19T09:10:38Z"
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
manifest_role: "structured retrieval index; not a replacement for source PDF original content"
overall_status: "pass_with_warnings"
---

# PDF Manifest: CRC_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is a structured retrieval index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the local PDF bytes differ from the source identity recorded below.

## 1. Document Metadata

- `source_pdf`: `CRC_User_Manual.pdf`
- `source_pdf_sha256`: `aae4be580e0900b868ed66b929e36a6ff5c1cf2c5587806fd8a09bc6dc7fe6aa`
- `source_pdf_size_bytes`: `2189435`
- `pdf_page_count`: `43`
- `source_file_library_id`: `file_000000001f3c720b9441545d079c83ef`
- `source_file_created_at`: `2026-06-19T09:10:38Z`
- `source_file_modified_at`: `2026-06-19T09:10:38Z`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx CRC User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0; Added support for FC7240`
- `generated_at`: `2026-06-19T23:50:45Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.8.0-file-library-best-effort`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `47`
- `ocr_status`: `not_run_text_layer_available_in_file_library_snippets`
- `text_extraction_engine`: `File Library parsed text snippets + local pypdf 6.10.0 text-layer supplement`
- `image_extraction_policy`: `index observed visual/diagram/screenshot anchors; do not OCR screenshots by default`
- `page_numbering_policy`: `physical_page is 1-based PDF page index; printed_page is a source-visible footer label only`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL CRC module - User Manual"
- `module_scope`: "CRC requirement tracing, hardware summary, software design, rejected requirements, macros/enums/structures, API/hardware/software functions, sequence diagrams, Tresos configuration items and configuration guides."
- `key_chapters`: ["Chapter 1 CRC Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["CRC", "Crc_CalculateCRC8", "Crc_CalculateCRC16", "Crc_CalculateCRC32", "Crc_CalculateCRC64", "CrcProtocolType", "CrcCalculationType", "CrcChannelConfig", "AUTOSAR_SWS_CRCLibrary"]
- `summary`: "This 43-page user manual Manifest indexes all physical pages 1-43, including CRC APIs, hardware helper functions, sequence diagrams, Tresos configuration parameters and common configuration steps."
- `retrieval_note`: "For exact API signatures, parameters, returns and screenshot details, use the Manifest anchor to open the indicated source PDF physical page."

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["CRC", "FC7xxx", "User Manual", "Rev.0.6"]
- `anchor`: "FC7xxx CRC User Manual"
- `range_confidence`: `0.82`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["CRC", "revision", "MCAL V0.6.0", "FC7240"]
- `anchor`: "Revision History"
- `range_confidence`: `0.95`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["CRC", "contents", "API", "configuration", "Tresos"]
- `anchor`: "Table of Contents"
- `range_confidence`: `0.96`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "CRC Introduction"
- `path`: "Chapter 1 CRC Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["AUTOSAR_SWS_CRCLibrary", "hardware summary", "CRC instances"]
- `anchor`: "Chapter 1 CRC Introduction"
- `range_confidence`: `0.96`

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirement Tracing"
- `path`: "Chapter 1 CRC Introduction / 1.1 Requirement Tracing"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["AUTOSAR Classic Platform Release 4.6.0", "AUTOSAR_SWS_CRCLibrary"]
- `anchor`: "1.1 Requirement Tracing"
- `range_confidence`: `0.96`

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 CRC Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["FC7300F8MDT", "FC7300F4MDD", "FC7300F4MDS", "FC7240F2MDS"]
- `anchor`: "1.2 Hardware Summary"
- `range_confidence`: `0.94`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `28`
- `printed_page_start`: `6`
- `printed_page_end`: `28`
- `keywords`: ["software design", "API", "macros", "enums", "structures", "sequence diagram"]
- `anchor`: "Chapter 2 Software Design"
- `range_confidence`: `0.95`

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SWS_Crc_00065", "Crc_CalculateCRC64", "hardware limitation"]
- `anchor`: "2.1 Rejected Requirements"
- `range_confidence`: `0.96`

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `6`
- `physical_page_end`: `7`
- `printed_page_start`: `6`
- `printed_page_end`: `7`
- `keywords`: ["Crc.c", "Crc_Hw.c", "Crc_RunTime.h", "Crc_Lookup_Tables.h"]
- `anchor`: "2.2 File Structure"
- `range_confidence`: `0.9`

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `8`
- `physical_page_end`: `11`
- `printed_page_start`: `8`
- `printed_page_end`: `11`
- `keywords`: ["Crc.h", "Crc_Version.h", "Crc_Cfg.h", "macro"]
- `anchor`: "2.3 Macros"
- `range_confidence`: `0.92`

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["Crc_Types.h", "Crc_RegOps.h", "enum"]
- `anchor`: "2.4 Enums"
- `range_confidence`: `0.92`

### SEC-002-005
- `source_number`: `2.5`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.5 Structures"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Crc_InitType", "CRC_ChannelConfiguration", "Crc_ConfigType"]
- `anchor`: "2.5 Structures"
- `range_confidence`: `0.94`

### SEC-002-006
- `source_number`: `2.6`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.6 API Functions"
- `physical_page_start`: `15`
- `physical_page_end`: `20`
- `printed_page_start`: `15`
- `printed_page_end`: `20`
- `keywords`: ["Crc_CalculateCRC8", "Crc_CalculateCRC16", "Crc_CalculateCRC32", "Crc_GetVersionInfo"]
- `anchor`: "2.6 API Functions"
- `range_confidence`: `0.94`

### SEC-002-007
- `source_number`: `2.7`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `physical_page_start`: `20`
- `physical_page_end`: `22`
- `printed_page_start`: `20`
- `printed_page_end`: `22`
- `keywords`: ["Crc_Hw_Init", "CRC_SetInputData", "CRC_GetCrcResult", "CRC_SetSeed"]
- `anchor`: "2.7 Hardware Functions"
- `range_confidence`: `0.93`

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Software Functions"
- `path`: "Chapter 2 Software Design / 2.8 Software Functions"
- `physical_page_start`: `22`
- `physical_page_end`: `24`
- `printed_page_start`: `22`
- `printed_page_end`: `24`
- `keywords`: ["Crc_Lookup_Tables.h", "Crc_RunTime.h", "Crc_TableCalculateCRC8"]
- `anchor`: "2.8 Software Functions"
- `range_confidence`: `0.93`

### SEC-002-009
- `source_number`: `2.9`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `physical_page_start`: `25`
- `physical_page_end`: `28`
- `printed_page_start`: `25`
- `printed_page_end`: `28`
- `keywords`: ["sequence diagram", "Crc_CalculateCRC8", "Crc_CalculateCRC64"]
- `anchor`: "2.9 API Sequence Diagram"
- `range_confidence`: `0.92`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `29`
- `physical_page_end`: `40`
- `printed_page_start`: `29`
- `printed_page_end`: `40`
- `keywords`: ["Tresos", "configuration", "CrcGeneral", "CrcChannelConfig"]
- `anchor`: "Chapter 3 Tresos Configuration Items"
- `range_confidence`: `0.95`

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `29`
- `physical_page_end`: `31`
- `printed_page_start`: `29`
- `printed_page_end`: `31`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "CrcGeneral", "CrcChannelConfig", "CommonPublishedInformation"]
- `anchor`: "3.1 Container Inclusion Relation"
- `range_confidence`: `0.94`

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `31`
- `physical_page_end`: `40`
- `printed_page_start`: `31`
- `printed_page_end`: `40`
- `keywords`: ["CrcDetectError", "CrcVersionInfoApi", "CrcMultiCoreEnable", "CrcProtocolType"]
- `anchor`: "3.2 Containers and Variables"
- `range_confidence`: `0.93`

### SEC-003-003
- `source_number`: `3.3`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.3 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `31`
- `physical_page_end`: `40`
- `printed_page_start`: `31`
- `printed_page_end`: `40`
- `keywords`: ["CrcGeneral", "CrcChannelConfig", "CrcEcucPartitionRef", "CommonPublishedInformation"]
- `anchor`: "3.3 IMPLEMENTATION_CONFIG_VARIANT"
- `range_confidence`: `0.93`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `41`
- `physical_page_end`: `43`
- `printed_page_start`: `41`
- `printed_page_end`: `43`
- `keywords`: ["configuration guide", "calculation type", "hardware CRC", "generate configuration files"]
- `anchor`: "Chapter 4 Configuration Guides"
- `range_confidence`: `0.94`

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["hardware CRC", "8-bit", "64-bit", "16-bit", "32-bit"]
- `anchor`: "4.1 Configuration Item Constraint"
- `range_confidence`: `0.95`

### SEC-004-002
- `source_number`: `4.2`
- `title`: "CRC Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 CRC Usage Common Steps"
- `physical_page_start`: `41`
- `physical_page_end`: `43`
- `printed_page_start`: `41`
- `printed_page_end`: `43`
- `keywords`: ["Crc Channels Configuration", "protocol type", "calculation type", "Generate Project"]
- `anchor`: "4.2 CRC Usage Common Steps"
- `range_confidence`: `0.93`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `logical_page`: `null`
- `section_path`: "Cover"
- `section_id`: `SEC-0001-COVER`
- `content_types`: ["text", "cover"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["physical_page 1"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `logical_page`: `null`
- `section_path`: "Revision History"
- `section_id`: `SEC-0002-REVISION-HISTORY`
- `content_types`: ["text", "revision_history", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Revision History", "0.1 2023/12/15 Initial release", "0.6 2023/03/29 Updated for MCAL V0.6.0"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `logical_page`: `null`
- `section_path`: "Table of Contents"
- `section_id`: `SEC-0003-TOC`
- `content_types`: ["text", "toc"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Table of Contents", "Chapter 1 CRC Introduction . 5", "Chapter 2 Software Design . 6"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `logical_page`: `null`
- `section_path`: "Table of Contents"
- `section_id`: `SEC-0003-TOC`
- `content_types`: ["text", "toc"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 3 Tresos Configuration Items . 29", "Chapter 4 Configuration Guides. 41"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `logical_page`: `null`
- `section_path`: "Chapter 1 CRC Introduction / 1.1 Requirement Tracing"
- `section_id`: `SEC-001-001`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 1 CRC Introduction", "AUTOSAR Classic Platform Release 4.6.0", "AUTOSAR_SWS_CRCLibrary"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `section_id`: `SEC-002-001`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Rejected Requirement 4 SWS_Crc_00065", "There are no platforms supporting Crc64 Hardware calculation"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `section_id`: `SEC-002-002`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.2 File Structure"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros"
- `section_id`: `SEC-002-003`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.3 Macros"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros"
- `section_id`: `SEC-002-003`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.3 Macros"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros"
- `section_id`: `SEC-002-003`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.3 Macros"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros"
- `section_id`: `SEC-002-003`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.3 Macros"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums"
- `section_id`: `SEC-002-004`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.4 Enums"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums"
- `section_id`: `SEC-002-004`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.4 Enums"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures"
- `section_id`: `SEC-002-005`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["2.5 Structures"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `section_id`: `SEC-002-006`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.6 API Functions"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `section_id`: `SEC-002-006`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.6 API Functions"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `section_id`: `SEC-002-006`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.6 API Functions"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `section_id`: `SEC-002-006`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["Crc_CalculateCRC16ARC", "CRC16 ARC result", "Crc_CalculateCRC32"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `section_id`: `SEC-002-006`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.6 API Functions"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `section_id`: `SEC-002-007`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.7 Hardware Functions"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `section_id`: `SEC-002-007`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.7 Hardware Functions"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `section_id`: `SEC-002-007`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["CRC_SetSeed", "Crc_TableCalculateCRC8", "CRC result calculated by hardware"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.8 Software Functions"
- `section_id`: `SEC-002-008`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.8 Software Functions"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.8 Software Functions"
- `section_id`: `SEC-002-008`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.8 Software Functions"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `section_id`: `SEC-002-009`
- `content_types`: ["text", "api", "table", "figure"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.9 API Sequence Diagram"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `section_id`: `SEC-002-009`
- `content_types`: ["text", "api", "table", "figure"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.9 API Sequence Diagram"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `section_id`: `SEC-002-009`
- `content_types`: ["text", "api", "table", "figure"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.9 API Sequence Diagram"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `section_id`: `SEC-002-009`
- `content_types`: ["text", "api", "table", "figure"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["2.9 API Sequence Diagram"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.1 Container Inclusion Relation"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.1.2 CrcGeneral", "3.1.3 CrcChannelConfig"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.1 Container Inclusion Relation"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["CrcProtocolType", "CRC_PROTOCOL_16BIT_CCITT_FALSE", "CRC_PROTOCOL_64BIT_ECMA"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `section_id`: `SEC-003-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["3.2 Containers and Variables"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `section_id`: `SEC-004-001`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["Hardware CRC do not support 8-bit (except FC7240) and 64-bit CRC", "CRC Usage Common Steps"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 CRC Usage Common Steps"
- `section_id`: `SEC-004-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["4.2 CRC Usage Common Steps"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 CRC Usage Common Steps"
- `section_id`: `SEC-004-002`
- `content_types`: ["text", "configuration"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`: ["4.2 CRC Usage Common Steps"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Indexes CRC USER source physical page(s) 1 under Cover. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p1`: "physical_page 1"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Indexes CRC USER source physical page(s) 2 under Revision History. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p2`: "Revision History"

### SEG-0003-0004
- `physical_pages`: `3-4`
- `printed_pages`: `3-4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc"]
- `summary`: "Indexes CRC USER source physical page(s) 3-4 under Table of Contents. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p4`: "Chapter 3 Tresos Configuration Items . 29"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 CRC Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 5 under Chapter 1 CRC Introduction / 1.1 Requirement Tracing. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p5`: "Chapter 1 CRC Introduction"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 6 under Chapter 2 Software Design / 2.1 Rejected Requirements. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p6`: "Rejected Requirement 4 SWS_Crc_00065"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 7 under Chapter 2 Software Design / 2.2 File Structure. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p7`: "2.2 File Structure"

### SEG-0008-0010
- `physical_pages`: `8-10`
- `printed_pages`: `8-10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 8-10 under Chapter 2 Software Design / 2.3 Macros. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p8`: "2.3 Macros"
  - `p9`: "2.3 Macros"
  - `p10`: "2.3 Macros"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 11 under Chapter 2 Software Design / 2.3 Macros. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p11`: "2.3 Macros"

### SEG-0012-0013
- `physical_pages`: `12-13`
- `printed_pages`: `12-13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 12-13 under Chapter 2 Software Design / 2.4 Enums. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p12`: "2.4 Enums"
  - `p13`: "2.4 Enums"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures"
- `content_types`: ["text"]
- `summary`: "Indexes CRC USER source physical page(s) 14 under Chapter 2 Software Design / 2.5 Structures. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p14`: "2.5 Structures"

### SEG-0015-0017
- `physical_pages`: `15-17`
- `printed_pages`: `15-17`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `content_types`: ["text", "api", "table"]
- `summary`: "Indexes CRC USER source physical page(s) 15-17 under Chapter 2 Software Design / 2.6 API Functions. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p15`: "2.6 API Functions"
  - `p16`: "2.6 API Functions"
  - `p17`: "2.6 API Functions"

### SEG-0018-0019
- `physical_pages`: `18-19`
- `printed_pages`: `18-19`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `content_types`: ["text", "api", "table"]
- `summary`: "Indexes CRC USER source physical page(s) 18-19 under Chapter 2 Software Design / 2.6 API Functions. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p18`: "Crc_CalculateCRC16ARC"
  - `p19`: "2.6 API Functions"

### SEG-0020-0022
- `physical_pages`: `20-22`
- `printed_pages`: `20-22`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `content_types`: ["text", "api", "table"]
- `summary`: "Indexes CRC USER source physical page(s) 20-22 under Chapter 2 Software Design / 2.7 Hardware Functions. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p20`: "2.7 Hardware Functions"
  - `p21`: "2.7 Hardware Functions"
  - `p22`: "CRC_SetSeed"

### SEG-0023-0024
- `physical_pages`: `23-24`
- `printed_pages`: `23-24`
- `section_path`: "Chapter 2 Software Design / 2.8 Software Functions"
- `content_types`: ["text", "api", "table"]
- `summary`: "Indexes CRC USER source physical page(s) 23-24 under Chapter 2 Software Design / 2.8 Software Functions. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p23`: "2.8 Software Functions"
  - `p24`: "2.8 Software Functions"

### SEG-0025-0027
- `physical_pages`: `25-27`
- `printed_pages`: `25-27`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `content_types`: ["text", "api", "table", "figure"]
- `summary`: "Indexes CRC USER source physical page(s) 25-27 under Chapter 2 Software Design / 2.9 API Sequence Diagram. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p25`: "2.9 API Sequence Diagram"
  - `p26`: "2.9 API Sequence Diagram"
  - `p27`: "2.9 API Sequence Diagram"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `content_types`: ["text", "api", "table", "figure"]
- `summary`: "Indexes CRC USER source physical page(s) 28 under Chapter 2 Software Design / 2.9 API Sequence Diagram. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p28`: "2.9 API Sequence Diagram"

### SEG-0029-0031
- `physical_pages`: `29-31`
- `printed_pages`: `29-31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "configuration"]
- `summary`: "Indexes CRC USER source physical page(s) 29-31 under Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`:
  - `p29`: "3.1 Container Inclusion Relation"
  - `p30`: "3.1.2 CrcGeneral"
  - `p31`: "3.1 Container Inclusion Relation"

### SEG-0032-0034
- `physical_pages`: `32-34`
- `printed_pages`: `32-34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `content_types`: ["text", "configuration"]
- `summary`: "Indexes CRC USER source physical page(s) 32-34 under Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`:
  - `p32`: "3.2 Containers and Variables"
  - `p33`: "3.2 Containers and Variables"
  - `p34`: "3.2 Containers and Variables"

### SEG-0035-0037
- `physical_pages`: `35-37`
- `printed_pages`: `35-37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `content_types`: ["text", "configuration"]
- `summary`: "Indexes CRC USER source physical page(s) 35-37 under Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`:
  - `p35`: "3.2 Containers and Variables"
  - `p36`: "CrcProtocolType"
  - `p37`: "3.2 Containers and Variables"

### SEG-0038-0040
- `physical_pages`: `38-40`
- `printed_pages`: `38-40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `content_types`: ["text", "configuration"]
- `summary`: "Indexes CRC USER source physical page(s) 38-40 under Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`:
  - `p38`: "3.2 Containers and Variables"
  - `p39`: "3.2 Containers and Variables"
  - `p40`: "3.2 Containers and Variables"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "configuration"]
- `summary`: "Indexes CRC USER source physical page(s) 41 under Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`:
  - `p41`: "Hardware CRC do not support 8-bit (except FC7240) and 64-bit CRC"

### SEG-0042-0043
- `physical_pages`: `42-43`
- `printed_pages`: `42-43`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 CRC Usage Common Steps"
- `content_types`: ["text", "configuration"]
- `summary`: "Indexes CRC USER source physical page(s) 42-43 under Chapter 4 Configuration Guides / 4.2 CRC Usage Common Steps. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Tresos", "configuration", "container", "ECUC"]
- `anchors`:
  - `p42`: "4.2 CRC Usage Common Steps"
  - `p43`: "4.2 CRC Usage Common Steps"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: [2]
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `bbox`: `null`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Revision history includes 0.1 initial release and 0.6 MCAL V0.6.0 / FC7240 update."
- `anchor`: "0.6 2023/03/29 Updated for MCAL V0.6.0"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.93`
- `quality_flags`: ["revision_date_order_unusual"]

### TBL-0003-0004
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0003-0004"
- `caption`: "Table of Contents"
- `physical_pages`: [3, 4]
- `printed_pages`: `3, 4`
- `section_path`: "Table of Contents"
- `bbox`: `null`
- `key_fields`: ["Chapter", "Section", "Physical page"]
- `summary`: "Source-visible contents list chapters 1-4 and detailed sections for software design, configuration and guides."
- `anchor`: "Chapter 4 Configuration Guides. 41"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.96`
- `quality_flags`: ["toc_spans_pages"]

### TBL-0006-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0006-001"
- `caption`: "Rejected Requirement SWS_Crc_00065"
- `physical_pages`: [6]
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `null`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes rejected requirement for Crc_CalculateCRC64 hardware reentrancy due to hardware limitation."
- `anchor`: "Rejected Requirement 4 SWS_Crc_00065"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.92`
- `quality_flags`: []

### TBL-0015-0020
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0015-0020"
- `caption`: "CRC API Function Specifications"
- `physical_pages`: [15, 16, 17, 18, 19, 20]
- `printed_pages`: `15, 16, 17, 18, 19, 20`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "Function specification tables for Crc_CalculateCRC* and Crc_GetVersionInfo APIs."
- `anchor`: "uint32 Crc_CalculateCRC32"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.78`
- `quality_flags`: ["multi_page_api_tables", "not_full_cell_export"]

### TBL-0020-0022
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0020-0022"
- `caption`: "CRC Hardware Function Specifications"
- `physical_pages`: [20, 21, 22]
- `printed_pages`: `20, 21, 22`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `bbox`: `null`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters", "Returns", "Referenced By"]
- `summary`: "Hardware helper function specification tables including Crc_Hw_Init, CRC_SetInputData, CRC_GetCrcResult and CRC_SetSeed."
- `anchor`: "CRC_SetSeed"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.78`
- `quality_flags`: ["multi_page_api_tables", "not_full_cell_export"]

### TBL-0031-0040
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0031-0040"
- `caption`: "CRC Tresos Configuration Parameters"
- `physical_pages`: [31, 32, 33, 34, 35, 36, 37, 38, 39, 40]
- `printed_pages`: `31, 32, 33, 34, 35, 36, 37, 38, 39, 40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `bbox`: `null`
- `key_fields`: ["Label", "Description", "Multiplicity", "Type", "Origin", "Default value"]
- `summary`: "Configuration parameter tables for CrcGeneral, CrcChannelConfig, CrcEcucPartitionRef and CommonPublishedInformation."
- `anchor`: "CrcProtocolType"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.72`
- `quality_flags`: ["configuration_tables_not_fully_reconstructed"]

## 7. Figure / Image Index

### FIG-0006-001
- `source_figure_number`: `null`
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "CRC file structure diagram"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `null`
- `image_type`: "dependency_diagram"
- `semantic_description`: "Shows source/header dependencies for Crc.c and Crc_Hw.c, including Crc.h, Crc_Hw.h, Crc_RunTime.h, Crc_Types.h and memory-map headers."
- `keywords`: ["Crc.c", "Crc_Hw.c", "file structure", "dependency"]
- `anchor`: "2.2 File Structure"
- `confidence`: `0.78`
- `quality_flags`: ["generated_figure_id", "visual_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: `null`
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Crc_CalculateCRC16ARC API sequence diagram"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions"
- `bbox`: `null`
- `image_type`: "sequence_diagram"
- `semantic_description`: "Shows Crc_CalculateCRC16ARC flow through CRC_GetCrcResult, Crc_Hw_Init, CRC_SetSeed, CRC_SetInputData, CRC_SetCalcData_U8, Crc_SWCalculateCRC16 and Crc_TableCalculateCRC16."
- `keywords`: ["Crc_CalculateCRC16ARC", "CRC_SetSeed", "Crc_Hw_Init", "sequence"]
- `anchor`: "Crc_CalculateCRC16ARC"
- `confidence`: `0.82`
- `quality_flags`: ["generated_figure_id"]

### FIG-0022-001
- `source_figure_number`: `null`
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "CRC hardware helper function diagrams"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `bbox`: `null`
- `image_type`: "call_graph_diagram"
- `semantic_description`: "Visual diagrams for CRC_GetCrcResult and CRC_SetSeed hardware helper functions."
- `keywords`: ["CRC_GetCrcResult", "CRC_SetSeed", "hardware", "diagram"]
- `anchor`: "CRC_SetSeed"
- `confidence`: `0.78`
- `quality_flags`: ["generated_figure_id"]

### FIG-0029-001
- `source_figure_number`: `null`
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "CRC container inclusion relation"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `null`
- `image_type`: "configuration_diagram"
- `semantic_description`: "Shows CRC configuration container inclusion relation including IMPLEMENTATION_CONFIG_VARIANT, CrcGeneral, CrcChannelConfig and CommonPublishedInformation."
- `keywords`: ["CrcGeneral", "CrcChannelConfig", "Container Inclusion Relation"]
- `anchor`: "3.1 Container Inclusion Relation"
- `confidence`: `0.76`
- `quality_flags`: ["generated_figure_id", "visual_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: `null`
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "CRC hardware calculation configuration screenshots"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `null`
- `image_type`: "screenshot"
- `semantic_description`: "Screenshots show Crc Channels Configuration, protocol type, calculation type and hardware instance settings for CRC hardware calculation."
- `keywords`: ["Crc Channels Configuration", "Calculation Type", "Hardware Instance", "protocol"]
- `anchor`: "Hardware CRC do not support 8-bit"
- `confidence`: `0.72`
- `quality_flags`: ["screenshot_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### REQ-AUTOSAR-SWS-CRCLIBRARY
- `name`: "AUTOSAR_SWS_CRCLibrary"
- `type`: "requirement"
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 1 CRC Introduction / 1.1 Requirement Tracing"]
- `brief`: "AUTOSAR CRC library requirements reference."
- `anchors`: ["p5: refer to the AUTOSAR_SWS_CRCLibrary"]
- `aliases`: ["CRC SWS", "AUTOSAR CRC Library"]

### REQ-SWS-CRC-00065
- `name`: "SWS_Crc_00065"
- `type`: "requirement"
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "Rejected requirement for Crc_CalculateCRC64 hardware reentrancy because hardware CRC64 is unsupported."
- `anchors`: ["p6: Rejected Requirement 4 SWS_Crc_00065"]
- `aliases`: ["CRC64 hardware reentrancy requirement"]

### API-CRC-CALCULATECHANNEL
- `name`: "Crc_CalculateChannel"
- `type`: "api"
- `primary_page`: `15`
- `physical_pages`: [15, 11]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 6 Error Report / 6.1 Det"]
- `brief`: "Channel-oriented CRC calculation API."
- `anchors`: ["p15: Crc_CalculateChannel", "p11: Crc_CalculateChannel CRC_E_ALREADY_INITIALIZED"]
- `aliases`: ["calculate CRC channel"]

### API-CRC-CALCULATECRC8
- `name`: "Crc_CalculateCRC8"
- `type`: "api"
- `primary_page`: `15`
- `physical_pages`: [15, 25, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC8 result; calculation mode configurable as table, runtime or hardware where supported."
- `anchors`: ["p15: Crc_CalculateCRC8", "p41: Crc_CalculateCRC8"]
- `aliases`: ["CRC8", "SAE J1850 CRC8"]

### API-CRC-CALCULATECRC8H2F
- `name`: "Crc_CalculateCRC8H2F"
- `type`: "api"
- `primary_page`: `16`
- `physical_pages`: [16, 25, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC8H2F result."
- `anchors`: ["p16: Crc_CalculateCRC8H2F", "p41: Crc_CalculateCRC8H2F"]
- `aliases`: ["CRC8 H2F"]

### API-CRC-CALCULATECRC16
- `name`: "Crc_CalculateCRC16"
- `type`: "api"
- `primary_page`: `17`
- `physical_pages`: [17, 26, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC16 CCITT_FALSE result."
- `anchors`: ["p17: Crc_CalculateCRC16", "p41: Crc_CalculateCRC16"]
- `aliases`: ["CRC16 CCITT_FALSE"]

### API-CRC-CALCULATECRC16ARC
- `name`: "Crc_CalculateCRC16ARC"
- `type`: "api"
- `primary_page`: `18`
- `physical_pages`: [18, 26, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC16 ARC result."
- `anchors`: ["p18: Crc_CalculateCRC16ARC", "p18: CRC16 ARC result"]
- `aliases`: ["CRC16 ARC"]

### API-CRC-CALCULATECRC32
- `name`: "Crc_CalculateCRC32"
- `type`: "api"
- `primary_page`: `18`
- `physical_pages`: [18, 27, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC32 Ethernet result."
- `anchors`: ["p18: Crc_CalculateCRC32", "p18: CRC32 (Ethernet) result"]
- `aliases`: ["CRC32 Ethernet"]

### API-CRC-CALCULATECRC32P4
- `name`: "Crc_CalculateCRC32P4"
- `type`: "api"
- `primary_page`: `19`
- `physical_pages`: [19, 27, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC32 P4/E2E result."
- `anchors`: ["p19: Crc_CalculateCRC32P4", "p41: Crc_CalculateCRC32P4"]
- `aliases`: ["CRC32 P4", "E2E P4 CRC"]

### API-CRC-CALCULATECRC64
- `name`: "Crc_CalculateCRC64"
- `type`: "api"
- `primary_page`: `20`
- `physical_pages`: [20, 28, 41]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions", "Chapter 2 Software Design / 2.9 API Sequence Diagram", "Chapter 4 Configuration Guides"]
- `brief`: "Calculates CRC64 ECMA result; hardware mode is not supported according to constraints/rejected requirement."
- `anchors`: ["p20: Crc_CalculateCRC64", "p41: Crc_CalculateCRC64"]
- `aliases`: ["CRC64 ECMA"]

### API-CRC-GETVERSIONINFO
- `name`: "Crc_GetVersionInfo"
- `type`: "api"
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.6 API Functions"]
- `brief`: "Returns CRC module version information."
- `anchors`: ["p20: Crc_GetVersionInfo"]
- `aliases`: ["CRC version info"]

### API-CRC-HW-INIT
- `name`: "Crc_Hw_Init"
- `type`: "api"
- `primary_page`: `20`
- `physical_pages`: [20, 22]
- `section_paths`: ["Chapter 2 Software Design / 2.7 Hardware Functions"]
- `brief`: "Initializes CRC hardware instance configuration."
- `anchors`: ["p20: Crc_Hw_Init", "p22: Crc_Hw_Init()"]
- `aliases`: ["CRC hardware init"]

### API-CRC-SETINPUTDATA
- `name`: "CRC_SetInputData"
- `type`: "api"
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 2 Software Design / 2.7 Hardware Functions"]
- `brief`: "Sets input data for CRC hardware calculation."
- `anchors`: ["p21: CRC_SetInputData"]
- `aliases`: ["set CRC input data"]

### API-CRC-GETCRCRESULT
- `name`: "CRC_GetCrcResult"
- `type`: "api"
- `primary_page`: `21`
- `physical_pages`: [21, 22]
- `section_paths`: ["Chapter 2 Software Design / 2.7 Hardware Functions"]
- `brief`: "Returns CRC result calculated by hardware."
- `anchors`: ["p22: CRC result calculated by hardware"]
- `aliases`: ["get CRC result"]

### API-CRC-SETSEED
- `name`: "CRC_SetSeed"
- `type`: "api"
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.7 Hardware Functions"]
- `brief`: "Sets CRC hardware seed value."
- `anchors`: ["p22: void CRC_SetSeed(uint8 u8Instance, uint32 u32SeedVal)"]
- `aliases`: ["CRC seed", "seed value"]

### API-CRC-TABLECALCULATECRC8
- `name`: "Crc_TableCalculateCRC8"
- `type`: "api"
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Software Functions"]
- `brief`: "Table lookup CRC8 calculation helper for CRC8 and CRC8H2F."
- `anchors`: ["p22: Crc_TableCalculateCRC8"]
- `aliases`: ["lookup table CRC8"]

### CFG-CRCPROTOCOLTYPE
- `name`: "CrcProtocolType"
- `type`: "config"
- `primary_page`: `36`
- `physical_pages`: [36]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"]
- `brief`: "CRC channel protocol type with values such as CRC_PROTOCOL_8BIT_SAE_J1850 and CRC_PROTOCOL_64BIT_ECMA."
- `anchors`: ["p36: CrcProtocolType"]
- `aliases`: ["CRC protocol type"]

### CFG-CRCCALCULATIONTYPE
- `name`: "CrcCalculationType"
- `type`: "config"
- `primary_page`: `41`
- `physical_pages`: [30, 41]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation", "Chapter 4 Configuration Guides"]
- `brief`: "CRC calculation type setting controlling table, runtime or hardware calculation."
- `anchors`: ["p41: calculation type (table, runtime, hardware)"]
- `aliases`: ["Calculation Type", "CRC calculation mode"]

### CFG-CRCHARDWARECONFIG
- `name`: "CrcHardwareConfig"
- `type`: "config"
- `primary_page`: `30`
- `physical_pages`: [30, 41]
- `section_paths`: ["Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `brief`: "Hardware configuration container used for CRC hardware instance selection."
- `anchors`: ["p30: CrcHardwareConfig", "p41: Hardware Instance"]
- `aliases`: ["CRC hardware config"]

## 9. Search Aliases

### ALIAS-AUTOSAR
- `canonical`: "AUTOSAR"
- `aliases`: ["AUTOSAR Classic Platform", "AUTOSAR CP", "汽车开放系统架构", "AUTOSAR 4.6.0"]
- `related_ids`: ["TERM-AUTOSAR"]

### ALIAS-MCAL
- `canonical`: "MCAL"
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "底层驱动", "AUTOSAR MCAL"]
- `related_ids`: ["TERM-MCAL"]

### ALIAS-EB-TRESOS
- `canonical`: "EB tresos"
- `aliases`: ["Tresos", "EB Tresos Studio", "EB tresos Studio", "配置工具", "Tresos configuration"]
- `related_ids`: ["TERM-EB-TRESOS"]

### ALIAS-DET
- `canonical`: "Det"
- `aliases`: ["Development Error Tracer", "development error detection", "开发错误检测", "DET error"]
- `related_ids`: ["TERM-DET"]

### ALIAS-DEM
- `canonical`: "Dem"
- `aliases`: ["Diagnostic Event Manager", "诊断事件管理", "DEM event"]
- `related_ids`: ["TERM-DEM"]

### ALIAS-MEMMAP
- `canonical`: "MemMap"
- `aliases`: ["memory map", "START_SEC", "STOP_SEC", "linker section", "内存段"]
- `related_ids`: ["TERM-MEMMAP"]

### ALIAS-CRC
- `canonical`: "CRC"
- `aliases`: ["Cyclic Redundancy Check", "CRC library", "CRC module", "循环冗余校验"]
- `related_ids`: ["TERM-CRC"]

### ALIAS-CRCPROTOCOLTYPE
- `canonical`: "CrcProtocolType"
- `aliases`: ["protocol type", "CRC protocol", "CRC_PROTOCOL_8BIT_SAE_J1850", "CRC_PROTOCOL_64BIT_ECMA"]
- `related_ids`: ["CFG-CRCPROTOCOLTYPE"]

### ALIAS-CRCCALCULATIONTYPE
- `canonical`: "CrcCalculationType"
- `aliases`: ["calculation type", "runtime calculation", "table lookup", "hardware calculation", "CRC计算方式"]
- `related_ids`: ["CFG-CRCCALCULATIONTYPE"]

## 9A. Text-Layer Search Supplement

- `purpose`: "Adds page-level PDF text-layer tokens that were not already present in the structured manifest, so keyword retrieval can distinguish absence from manifest omission."
- `source`: `local pypdf text extraction from CRC_User_Manual.pdf`
- `source_pdf_sha256`: `aae4be580e0900b868ed66b929e36a6ff5c1cf2c5587806fd8a09bc6dc7fe6aa`
- `generated_at`: `2026-06-20T07:37:19Z`
- `unique_missing_terms_added`: `500`
- `technical_missing_terms_added`: `193`
- `pages_with_added_terms`: `42`
- `search_boundary`: "Terms here improve retrieval recall only; use the source PDF page for authoritative wording, tables and diagrams."

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "2.3.1"
  - "2.3.2"
  - "2.3.3"
  - "2.4.1"
  - "2.4.2"
  - "2.5.1"
  - "2.5.2"
  - "2.5.3"
  - "2.6.1"
  - "2.7.1"
  - "2.8.1"
  - "2.8.2"
  - "2.9.1"
  - "2.9.2"
  - "2.9.3"
  - "2.9.4"
  - "2.9.5"
  - "2.9.6"
  - "2.9.7"
  - "3.1.1"
  - "Confidential"
  - "Enumerations"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "3.1.4"
  - "3.3.1"
  - "3.3.2"
  - "3.3.3"
  - "3.3.4"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "CPU"
  - "Confidential"
  - "Flagchip"
  - "Option"
  - "Programmable"
  - "Proprietary"
  - "Support"
  - "The"
  - "byte"
  - "circuit"
  - "complement"
  - "driver"
  - "features"
  - "final"
  - "following"
  - "follows"
  - "interface"
  - "one"
  - "operation"
  - "output"
  - "polynomial"
  - "programmable"
  - "programming"
  - "register"
  - "shift"
  - "specifications"
  - "specified"
  - "swap"
  - "two"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "ensure"
  - "implementer"
  - "implementing"
  - "locking"
  - "mechanism"
  - "performed"
  - "shall"
  - "then"
  - "within"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "0x01"
  - "0x02"
  - "0x03"
  - "0x04"
  - "0x05"
  - "0x06"
  - "0x07"
  - "0x08"
  - "0x0A"
  - "0x0B"
  - "0x0C"
  - "0x0E"
  - "2.3.1"
  - "CRC_CALCULATECHANNEL_ID"
  - "CRC_CALCULATECRC16ARC_ID"
  - "CRC_CALCULATECRC16_ID"
  - "CRC_CALCULATECRC32P4_ID"
  - "CRC_CALCULATECRC32_ID"
  - "CRC_CALCULATECRC64_ID"
  - "CRC_CALCULATECRC8H2F_ID"
  - "CRC_CALCULATECRC8_ID"
  - "CRC_E_INIT_PARTITION"
  - "CRC_E_INVALID_CHANNEL"
  - "CRC_E_INVALID_POINTER"
  - "CRC_GETVERSIONINFO_ID"
  - "Confidential"
  - "Crc_SetChannelCalculate"
  - "Flagchip"
  - "NULL"
  - "Proprietary"
  - "The"
  - "called"
  - "calls"
  - "core"
  - "define"
  - "identifier"
  - "incorrect"
  - "pointer"
  - "service"
  - "wrong"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "2.3.2"
  - "2.3.3"
  - "CRC_AR_RELEASE_MAJOR_VERSION"
  - "CRC_AR_RELEASE_MINOR_VERSION"
  - "CRC_AR_RELEASE_REVISION_VERSION"
  - "CRC_CALCULATECHANNEL"
  - "CRC_CFG_AR_RELEASE_MAJOR_VERSION"
  - "CRC_CFG_AR_RELEASE_MINOR_VERSION"
  - "CRC_CFG_AR_RELEASE_REVISION_VERSION"
  - "CRC_CFG_MODULE_ID"
  - "CRC_CFG_SW_MAJOR_VERSION"
  - "CRC_CFG_SW_MINOR_VERSION"
  - "CRC_CFG_SW_PATCH_VERSION"
  - "CRC_CFG_VENDOR_ID"
  - "CRC_CRC8H2F_USED"
  - "CRC_CRC8_USED"
  - "CRC_MODULE_ID"
  - "CRC_SW_MAJOR_VERSION"
  - "CRC_SW_MINOR_VERSION"
  - "CRC_SW_PATCH_VERSION"
  - "CRC_VENDOR_ID"
  - "Confidential"
  - "Crc_SetChannelCalculate"
  - "Flagchip"
  - "Proprietary"
  - "STD_ON"
  - "Switch"
  - "autosar"
  - "define"
  - "enabling"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "CRC_CRC16ARC_USED"
  - "CRC_CRC16_USED"
  - "CRC_CRC32P4_USED"
  - "CRC_CRC32_USED"
  - "CRC_CRC64_USED"
  - "CRC_DEV_ERROR_DETECT"
  - "CRC_GET_VERSION_INFO_API"
  - "CRC_HW_INSTANCE_0"
  - "CRC_HW_INSTANCE_1"
  - "CRC_INSTANCE_COUNT_U8"
  - "CRC_MUTILCORE_SUPPORT"
  - "Confidential"
  - "Flagchip"
  - "Number"
  - "Proprietary"
  - "STD_OFF"
  - "STD_ON"
  - "Switch"
  - "autosar"
  - "define"
  - "enabling"
  - "indicate"
  - "multicore"
  - "platform"
  - "that"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "CRC_16BIT_ARC"
  - "CRC_16BIT_CCITT_FALSE"
  - "CRC_32BIT_E2E_P4"
  - "CRC_32BIT_ETHERNET"
  - "CRC_64BIT_ECMA"
  - "CRC_8BIT_H2F"
  - "CRC_8BIT_SAE_J1850"
  - "CRC_TABLE_CALCULATION"
  - "Confidential"
  - "Crc16ARCInstanceCoreID"
  - "Crc16ARCMode"
  - "Crc16InstanceCoreID"
  - "Crc16Mode"
  - "Crc32InstanceCoreID"
  - "Crc32Mode"
  - "Crc32P4InstanceCoreID"
  - "Crc32P4Mode"
  - "Crc64Mode"
  - "Crc8H2FMode"
  - "Crc8Mode"
  - "Flagchip"
  - "Proprietary"
  - "When"
  - "core"
  - "define"
  - "disabled"
  - "distribute"
  - "enabled"
  - "multicore"
  - "uses"
  - "which"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "2.4.1"
  - "CRC_BIT_INVALID"
  - "CRC_BitWidthType"
  - "CRC_NUM_LOGIC_CHANNEL_MAX"
  - "CRC_WIDTH_16BIT"
  - "CRC_WIDTH_32BIT"
  - "CRC_WIDTH_64BIT"
  - "CRC_WIDTH_8BIT"
  - "Confidential"
  - "Crc16ARCInstance"
  - "Crc16ARCMode"
  - "Crc16Instance"
  - "Crc16Mode"
  - "Crc32Instance"
  - "Crc32Mode"
  - "Crc32P4Instance"
  - "Crc32P4Mode"
  - "Crc8H2FInstance"
  - "Crc8H2FMode"
  - "Crc8Instance"
  - "Crc8Mode"
  - "CrcConf_CrcChannelConfig_CrcChannelConfig_0"
  - "Crc_StandardType"
  - "Enumeration"
  - "Enumerations"
  - "Flagchip"
  - "Proprietary"
  - "Tab"
  - "The"
  - "Value"
  - "Values"
  - "When"
  - "Width"
  - "channels"
  - "configured"
  - "contains"
  - "define"
  - "otherwise"
  - "platform"
  - "uses"
  - "width"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "0x04C11DB7"
  - "0x1021"
  - "0x1D"
  - "0x2F"
  - "0x8005"
  - "0xF4ACFB13"
  - "0xFFFF"
  - "0xFFFFFFFF"
  - "2.4.1"
  - "2.4.2"
  - "CCITT16"
  - "CCITT32"
  - "CRC_PROTOCOL_16BIT_ARC"
  - "CRC_PROTOCOL_32BIT_E2E_P4"
  - "CRC_PROTOCOL_32BIT_ETHERNET"
  - "CRC_PROTOCOL_8BIT_H2F"
  - "CRC_ReadDataFXORType"
  - "CRC_ReadDataSwapType"
  - "CRC_WriteCommondType"
  - "CRC_WriteDataSwapType"
  - "Confidential"
  - "Enumeration"
  - "Enumerations"
  - "Flagchip"
  - "Invert"
  - "Polynomial"
  - "Profile"
  - "Proprietary"
  - "READ_DATASWAP_BIT"
  - "READ_DATASWAP_BIT_BYTE"
  - "READ_DATASWAP_BYTE"
  - "READ_DATASWAP_NONE"
  - "READ_DATA_FXOR"
  - "READ_DATA_NORMAL"
  - "The"
  - "Value"
  - "Values"
  - "WRITE_DATASWAP_BIT"
  - "WRITE_DATASWAP_BIT_BYTE"
  - "WRITE_DATASWAP_BYTE"
  - "WRITE_DATASWAP_NONE"
  - "bits"
  - "both"
  - "code"
  - "command"
  - "complement"
  - "crc"
  - "none"
  - "read"
  - "reading"
  - "swap"
  - "write"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "2.5.1"
  - "2.5.2"
  - "2.5.3"
  - "CRC_BitWidthType"
  - "CRC_ReadDataFXORType"
  - "CRC_ReadDataSwapType"
  - "CRC_WriteDataSwapType"
  - "Confidential"
  - "Crc_CalculationType"
  - "Crc_ProtocolType"
  - "Data"
  - "Defines"
  - "FTU"
  - "Fields"
  - "Flagchip"
  - "InitialSeedValue"
  - "PolynomValue"
  - "Proprietary"
  - "The"
  - "WRITE_COMMAND_DATA"
  - "WRITE_COMMAND_SEED"
  - "byte"
  - "choosen"
  - "chooses"
  - "counter"
  - "crc"
  - "eBitWidth"
  - "eCalType"
  - "eProtocolType"
  - "eReadDataFXOR"
  - "eReadDataSwap"
  - "eWriteDataSwap"
  - "force"
  - "ignore"
  - "infomation"
  - "inverse"
  - "output"
  - "read"
  - "sCrcInitType"
  - "safe"
  - "should"
  - "stopped"
  - "swap"
  - "uint64"
  - "width"
  - "works"
  - "write"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "2.6.1"
  - "Confidential"
  - "ConfigPtr"
  - "CrcLength"
  - "CrcPartitionMappingPtr"
  - "CrcStartValue"
  - "Crc_SetChannelCalculate"
  - "Data"
  - "Defines"
  - "FALSE"
  - "Fields"
  - "Flagchip"
  - "Input"
  - "IsFirstCall"
  - "Length"
  - "Multicore"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "TRUE"
  - "The"
  - "Value"
  - "algorithm"
  - "block"
  - "boolean"
  - "chosen"
  - "configured"
  - "const"
  - "crc"
  - "crcDataPtr"
  - "current"
  - "ignore"
  - "initialization"
  - "interpreted"
  - "known"
  - "nNumChannels"
  - "pCrcChannelsConfig"
  - "pCrcData"
  - "partion"
  - "previous"
  - "reentrant"
  - "results"
  - "return"
  - "selected"
  - "service"
  - "shall"
  - "start"
  - "starts"
  - "that"
  - "uint64"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "2.6.1"
  - "Confidential"
  - "CrcStartValue"
  - "Crc_DataPtr"
  - "Crc_IsFirstCall"
  - "Crc_Length"
  - "Crc_StartValue16"
  - "Crc_StartValue8"
  - "Crc_StartValue8H2F"
  - "Data"
  - "FALSE"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "TRUE"
  - "Value"
  - "algorithm"
  - "block"
  - "boolean"
  - "calculates"
  - "chosen"
  - "const"
  - "crcDataPtr"
  - "ignore"
  - "initialization"
  - "interpreted"
  - "known"
  - "previous"
  - "return"
  - "starts"
  - "uint16"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "2.6.1"
  - "CCITT"
  - "Confidential"
  - "CrcStartValue"
  - "Crc_DataPtr"
  - "Crc_IsFirstCall"
  - "Crc_Length"
  - "Crc_StartValue16"
  - "Data"
  - "FALSE"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "TRUE"
  - "Value"
  - "algorithm"
  - "block"
  - "boolean"
  - "calculates"
  - "chosen"
  - "const"
  - "crcDataPtr"
  - "ignore"
  - "initialization"
  - "interpreted"
  - "known"
  - "previous"
  - "return"
  - "starts"
  - "uint16"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "2.6.1"
  - "Confidential"
  - "CrcStartValue"
  - "Crc_DataPtr"
  - "Crc_IsFirstCall"
  - "Crc_Length"
  - "Crc_StartValue16"
  - "Crc_StartValue32"
  - "Data"
  - "FALSE"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "TRUE"
  - "Value"
  - "algorithm"
  - "block"
  - "boolean"
  - "chosen"
  - "const"
  - "crcDataPtr"
  - "ignore"
  - "initialization"
  - "interpreted"
  - "known"
  - "previous"
  - "return"
  - "starts"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "2.6.1"
  - "Confidential"
  - "CrcStartValue"
  - "Crc_DataPtr"
  - "Crc_IsFirstCall"
  - "Crc_Length"
  - "Crc_StartValue32"
  - "Data"
  - "FALSE"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "TRUE"
  - "Value"
  - "algorithm"
  - "block"
  - "boolean"
  - "chosen"
  - "const"
  - "crcDataPtr"
  - "ignore"
  - "initialization"
  - "interpreted"
  - "known"
  - "previous"
  - "return"
  - "starts"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "2.6.1"
  - "2.7.1"
  - "Confidential"
  - "CrcStartValue"
  - "Crc_DataPtr"
  - "Crc_IsFirstCall"
  - "Crc_Length"
  - "Crc_StartValue64"
  - "Data"
  - "Driver"
  - "FALSE"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Return"
  - "Start"
  - "Std_VersionInfoType"
  - "TRUE"
  - "Value"
  - "Versioninfo"
  - "algorithm"
  - "block"
  - "boolean"
  - "chosen"
  - "const"
  - "crcDataPtr"
  - "ignore"
  - "initialization"
  - "initializes"
  - "interpreted"
  - "known"
  - "level"
  - "output"
  - "pInitCfg"
  - "pointer"
  - "previous"
  - "return"
  - "starts"
  - "uint64"
  - "variable"
  - "versioninfo"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "2.7.1"
  - "Confidential"
  - "Crc_Init"
  - "Crc_SetChannelCalculate"
  - "Driver"
  - "Flagchip"
  - "Input"
  - "Parameter"
  - "Proprietary"
  - "Stop"
  - "const"
  - "initialize"
  - "initializes"
  - "level"
  - "pData"
  - "pInitCfg"
  - "pointer"
  - "u32DataSize"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "2.7.1"
  - "2.8.1"
  - "Calculate"
  - "Confidential"
  - "Crc_Cal"
  - "Crc_DataPtr"
  - "Crc_Length"
  - "Crc_ProtocolType"
  - "Crc_SetChannelCalculate"
  - "Data"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Lookup"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Seed"
  - "Set"
  - "Start"
  - "algorithm"
  - "block"
  - "const"
  - "crcDataPtr"
  - "culateCRC32P4"
  - "eType"
  - "pin"
  - "starts"
  - "u8CrcLastResult"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "2.8.1"
  - "CRC16ARC"
  - "CRC32E2E_P4"
  - "CRC32ETHERNET"
  - "CRC64ECMA"
  - "Calculate"
  - "Confidential"
  - "Crc_DataPtr"
  - "Crc_Length"
  - "Crc_ProtocolType"
  - "Crc_TableCalculateCRC32"
  - "Crc_TableCalculateCRC64"
  - "Data"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Lookup"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "algorithm"
  - "bits"
  - "block"
  - "const"
  - "crcDataPtr"
  - "eType"
  - "final"
  - "sProtocolCrc16"
  - "sProtocolCrc32"
  - "sProtocolCrc64"
  - "starts"
  - "u16CrcLastResult"
  - "u16CrcResult"
  - "u32CrcLastResult"
  - "u32CrcResult"
  - "u64CrcLastResult"
  - "u64CrcResult"
  - "uint16"
  - "uint64"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "2.8.2"
  - "CRC16ARC"
  - "CRC32E2E_P4"
  - "CRC32ETHERNET"
  - "Calculate"
  - "Confidential"
  - "Crc_DataPtr"
  - "Crc_Length"
  - "Crc_RunTimeCalculateCRC16"
  - "Crc_RunTimeCalculateCRC32"
  - "Crc_RunTimeCalculateCRC8"
  - "Data"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "The"
  - "algorithm"
  - "bits"
  - "block"
  - "const"
  - "crcDataPtr"
  - "final"
  - "polynomial"
  - "sProtocolCrc16"
  - "starts"
  - "u16CrcLastResult"
  - "u32CrcLastResult"
  - "u32Polynomial"
  - "u8CrcLastResult"
  - "u8Polynomial"
  - "uint16"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "2.8.2"
  - "2.9.1"
  - "2.9.2"
  - "CRC32E2E_P4"
  - "CRC32ETHERNET"
  - "CRC64ECMA"
  - "Calculate"
  - "Confidential"
  - "Crc_DataPtr"
  - "Crc_Length"
  - "Crc_RunTimeCalculateCRC64"
  - "Data"
  - "Flagchip"
  - "Input"
  - "Length"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "The"
  - "algorithm"
  - "bits"
  - "block"
  - "call"
  - "const"
  - "crcDataPtr"
  - "final"
  - "following"
  - "performed"
  - "polynomial"
  - "starts"
  - "synchronous"
  - "synchronously"
  - "u32Polynomial"
  - "u64CrcLastResult"
  - "u64Polynomial"
  - "uint64"
  - "within"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "2.9.3"
  - "2.9.4"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "The"
  - "call"
  - "following"
  - "performed"
  - "synchronous"
  - "synchronously"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "2.9.5"
  - "2.9.6"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "The"
  - "call"
  - "following"
  - "performed"
  - "synchronous"
  - "synchronously"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "2.9.7"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "The"
  - "call"
  - "following"
  - "performed"
  - "synchronous"
  - "synchronously"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "3.1.1"
  - "And"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "The"
  - "containers"
  - "each"
  - "following"
  - "follows"
  - "has"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "3.1.4"
  - "3.3.1"
  - "AUTOSAR_ECUC"
  - "BOOLEAN"
  - "Confidential"
  - "Driver"
  - "ENUMERATION"
  - "Flagchip"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Range"
  - "Screenshot"
  - "Switches"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "Variant"
  - "VariantPreCompile"
  - "contains"
  - "notification"
  - "off"
  - "wide"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "3.3.1"
  - "AUTOSAR_ECUC"
  - "BOOLEAN"
  - "CRC_8_HARDWARE"
  - "CRC_8_RUNTIME"
  - "CRC_8_TABLE"
  - "CRC_HW_INSTANCE_0"
  - "CRC_HW_INSTANCE_None"
  - "Confidential"
  - "Crc8"
  - "Crc8HwInstance"
  - "Crc8Mode"
  - "ENUMERATION"
  - "FLAGCHIP"
  - "Flagchip"
  - "Identifies"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Range"
  - "Screenshot"
  - "Switch"
  - "Switches"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "indicate"
  - "methods"
  - "multicore"
  - "off"
  - "one"
  - "select"
  - "that"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "3.3.1"
  - "AUTOSAR_ECUC"
  - "CCITT"
  - "CRC_16_HARDWARE"
  - "CRC_16_RUNTIME"
  - "CRC_16_TABLE"
  - "CRC_8H2F_HARDWARE"
  - "CRC_8H2F_RUNTIME"
  - "CRC_8H2F_TABLE"
  - "CRC_HW_INSTANCE_0"
  - "CRC_HW_INSTANCE_1"
  - "CRC_HW_INSTANCE_None"
  - "Confidential"
  - "Crc16"
  - "Crc16HwInstance"
  - "Crc16Mode"
  - "Crc8H2F"
  - "Crc8H2FHwInstance"
  - "Crc8H2FMode"
  - "ENUMERATION"
  - "FLAGCHIP"
  - "Flagchip"
  - "Identifies"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Range"
  - "Screenshot"
  - "Switch"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "methods"
  - "one"
  - "polynomial"
  - "select"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "3.3.1"
  - "802.3"
  - "AUTOSAR_ECUC"
  - "CRC_16ARC_HARDWARE"
  - "CRC_16ARC_RUNTIME"
  - "CRC_16ARC_TABLE"
  - "CRC_32_HARDWARE"
  - "CRC_32_RUNTIME"
  - "CRC_32_TABLE"
  - "CRC_HW_INSTANCE_0"
  - "CRC_HW_INSTANCE_1"
  - "CRC_HW_INSTANCE_None"
  - "Confidential"
  - "Crc16ARC"
  - "Crc16ARCHwInstance"
  - "Crc16ARCMode"
  - "Crc32"
  - "Crc32HwInstance"
  - "Crc32Mode"
  - "ENUMERATION"
  - "FLAGCHIP"
  - "Flagchip"
  - "IEEE"
  - "Identifies"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Range"
  - "Screenshot"
  - "Standard"
  - "Switch"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "methods"
  - "one"
  - "polynomial"
  - "select"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "3.3.1"
  - "AUTOSAR_ECUC"
  - "CRC_32P4_HARDWARE"
  - "CRC_32P4_RUNTIME"
  - "CRC_32P4_TABLE"
  - "CRC_64_HARDWARE"
  - "CRC_64_RUNTIME"
  - "CRC_64_TABLE"
  - "CRC_HW_INSTANCE_0"
  - "CRC_HW_INSTANCE_1"
  - "CRC_HW_INSTANCE_None"
  - "Confidential"
  - "Crc32P4"
  - "Crc32P4HwInstance"
  - "Crc32P4Mode"
  - "Crc64Mode"
  - "CrcInstance0PartitionRef"
  - "ENUMERATION"
  - "FLAGCHIP"
  - "Flagchip"
  - "Identifies"
  - "Maps"
  - "Profile"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Range"
  - "Screenshot"
  - "Switch"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "driver"
  - "instance0"
  - "make"
  - "methods"
  - "modules"
  - "one"
  - "partition"
  - "partitions"
  - "select"
  - "zero"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "3.3.1"
  - "3.3.2"
  - "CRC_PROTOCOL_16BIT_ARC"
  - "CRC_PROTOCOL_32BIT_E2E_P4"
  - "CRC_PROTOCOL_32BIT_ETHERNET"
  - "CRC_PROTOCOL_8BIT_H2F"
  - "Confidential"
  - "CrcInstance0PartitionRef"
  - "CrcInstance1PartitionRef"
  - "Defualt"
  - "ENUMERATION"
  - "FLAGCHIP"
  - "Flagchip"
  - "Identifies"
  - "MAP"
  - "Maps"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Protocol"
  - "REFERENCE"
  - "Range"
  - "Screenshot"
  - "Symbolic"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "driver"
  - "each"
  - "generated"
  - "individual"
  - "instance1"
  - "make"
  - "modules"
  - "names"
  - "one"
  - "partition"
  - "partitions"
  - "will"
  - "zero"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "3.3.2"
  - "AUTOSAR_ECUC"
  - "CRC_HARDWARE_CALCULATION"
  - "CRC_RUNTIME_CALCULATION"
  - "CRC_TABLE_CALCULATION"
  - "Confidential"
  - "CrcHwInstance"
  - "CrcLogicChannelName"
  - "CrcPartitionRefOfChannel"
  - "ENUMERATION"
  - "FLAGCHIP"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Identifies"
  - "Maps"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "REFERENCE"
  - "Range"
  - "STRING"
  - "Screenshot"
  - "Select"
  - "The"
  - "Value"
  - "Variable"
  - "access"
  - "contains"
  - "driver"
  - "limit"
  - "mapped"
  - "one"
  - "partition"
  - "partitions"
  - "referenced"
  - "subset"
  - "unit"
  - "zero"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "3.3.3"
  - "3.3.4"
  - "ArReleaseMajorVersion"
  - "ArReleaseMinorVersion"
  - "CRC_HW_INSTANCE_0"
  - "CRC_HW_INSTANCE_1"
  - "Confidential"
  - "ENUMERATION"
  - "Ecuc"
  - "FLAGCHIP"
  - "Flagchip"
  - "INTEGER_LABEL"
  - "Major"
  - "Minor"
  - "Partition"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Range"
  - "Ref"
  - "Screenshot"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "about"
  - "aggregated"
  - "appropriate"
  - "contains"
  - "implementation"
  - "modules"
  - "published"
  - "vendor"
  - "versions"
  - "which"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "3.3.4"
  - "ArReleaseRevisionVersion"
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "INTEGER_LABEL"
  - "Major"
  - "Minor"
  - "Patch"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Screenshot"
  - "SwMajorVersion"
  - "SwMinorVersion"
  - "SwPatchVersion"
  - "SymbolicNameValue"
  - "The"
  - "Value"
  - "Variable"
  - "appropriate"
  - "implementation"
  - "level"
  - "numbering"
  - "specific"
  - "vendor"
  - "which"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "3.3.4"
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "INTEGER_LABEL"
  - "List"
  - "Module"
  - "ModuleId"
  - "Properties"
  - "Property"
  - "Proprietary"
  - "Screenshot"
  - "SymbolicNameValue"
  - "Value"
  - "Variable"
  - "Vendor"
  - "VendorId"
  - "dedicated"
  - "implementation"
  - "vendor"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Add"
  - "Basically"
  - "Compared"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Tab"
  - "Users"
  - "assign"
  - "calculations"
  - "channelconfig"
  - "channels"
  - "choosing"
  - "configure"
  - "configured"
  - "control"
  - "core"
  - "different"
  - "distribute"
  - "enabled"
  - "following"
  - "general"
  - "implement"
  - "method"
  - "methods"
  - "multicore"
  - "multiple"
  - "object"
  - "one"
  - "same"
  - "second"
  - "specify"
  - "supports"
  - "tab"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Configure"
  - "EcucPartitions"
  - "Enable"
  - "Flagchip"
  - "Proprietary"
  - "Skip"
  - "allocate"
  - "disable"
  - "each"
  - "multicore"
  - "step"
  - "tab"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-GLOBAL-SOURCE-BYTES
- `severity`: "info"
- `category`: "source_integrity"
- `physical_pages`: []
- `affected_ids`: ["Document Metadata", "SELF-CHECK-SUMMARY"]
- `message`: "Local PDF bytes are available; SHA256, file size, encryption state and link annotation count were patched from the local source PDF."
- `recommended_action`: "Treat this Manifest as stale if local CRC_User_Manual.pdf SHA256 differs from aae4be580e0900b868ed66b929e36a6ff5c1cf2c5587806fd8a09bc6dc7fe6aa."

### WARN-0002-REVISION-DATE
- `severity`: "low"
- `category`: "revision_history"
- `physical_pages`: [2]
- `affected_ids`: ["TBL-0002-001"]
- `message`: "Revision row 0.6 shows date 2023/03/29 after 0.1 dated 2023/12/15; this appears chronologically unusual in the source-visible revision history."
- `recommended_action`: "Verify revision chronology against the source PDF before using it for release decisions."

### WARN-GLOBAL-OCR
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43]
- `affected_ids`: []
- `message`: "File Library returned an extractable text layer; OCR was not executed."
- `recommended_action`: "Use source PDF rendering for visual verification of screenshots, diagrams and complex tables."

### WARN-GLOBAL-FIGURES
- `severity`: "medium"
- `category`: "figure_extraction"
- `physical_pages`: [6, 18, 22, 29, 41, 42, 43]
- `affected_ids`: ["FIG-*"]
- `message`: "Figure/image entries are navigation aids created from visible page context; screenshots were not OCR-verified."
- `recommended_action`: "Verify screenshot text and diagram labels in the source PDF before relying on them."

## 11. Self Check Report

### SELF-CHECK-SUMMARY
- `source_pdf`: "CRC_User_Manual.pdf"
- `pdf_page_count`: `43`
- `indexed_physical_pages_count`: `43`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `page_coverage_status`: `pass`
- `section_range_status`: `pass`
- `invalid_section_ranges`: []
- `duplicate_ids`: []
- `entries_without_physical_page`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `source_pdf_sha256`: "aae4be580e0900b868ed66b929e36a6ff5c1cf2c5587806fd8a09bc6dc7fe6aa"
- `source_pdf_size_bytes`: `2189435`
- `source_integrity_status`: `pass`
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T07:37:19Z`
- `text_layer_search_supplement_terms`: `500`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `4`
- `overall_status`: "pass_with_warnings"

### SELF-CHECK-NOTES
- `page_numbering`: "All locator fields use 1-based PDF physical pages as primary keys; printed_page is auxiliary."
- `source_freshness_rule`: "Regenerate this Manifest when the source PDF SHA256 can be computed locally and differs from this Manifest, or when page count / visible revision changes."
- `manifest_scope`: "This Manifest indexes the source PDF and intentionally avoids long verbatim excerpts."

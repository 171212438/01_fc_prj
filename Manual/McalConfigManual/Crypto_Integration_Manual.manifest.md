---
manifest_schema_version: "1.1"
source_pdf: "Crypto_Integration_Manual.pdf"
source_pdf_sha256: "e9a095779a6016b450681438dc26f886c30ce49257ef7d1674660e503e47f776"
source_pdf_size_bytes: 102490831
pdf_page_count: 16
generated_at: "2026-06-20T07:45:21Z"
generator_name: "codex-local-pdf-manifest-generator"
generator_version: "1.1-local-pypdf-pdfinfo"
source_document_revision: "Rev.A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
manifest_role: "structured retrieval index; not a replacement for source PDF original content"
overall_status: "pass_with_warnings"
---

# PDF Manifest: Crypto_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is a structured retrieval index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the local PDF bytes differ from the source identity recorded below.

## 1. Document Metadata

- `source_pdf`: `Crypto_Integration_Manual.pdf`
- `source_pdf_sha256`: `e9a095779a6016b450681438dc26f886c30ce49257ef7d1674660e503e47f776`
- `source_pdf_size_bytes`: `102490831`
- `pdf_page_count`: `16`
- `source_document_revision`: `Rev.A0`
- `visible_cover_title`: `FC7xxx Crypto Integration Manual`
- `visible_cover_revision`: `Rev.A0`
- `revision_history_latest_row`: `A0 / Echris Zhang / 2025/01/22 / Initial version`
- `generated_at`: `2026-06-20T07:45:21Z`
- `generator_name`: `codex-local-pdf-manifest-generator`
- `generator_version`: `1.1-local-pypdf-pdfinfo`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `23`
- `pdf_embedded_image_pages`: `16`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `local pypdf 6.10.0 text extraction + pdfinfo + sampled pdftoppm rendering`
- `image_extraction_policy`: `index observed image anchors; do not OCR embedded images by default`
- `page_numbering_policy`: `physical_page is 1-based PDF page index; printed_page is a source-visible footer label only`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL Crypto module - Integration Manual"
- `module_scope`: "Crypto integration dependencies, build inputs, EB tresos plug-in setup, memory map sections, SchM exclusive areas, ISR mapping, DET error reporting, function-call expectations, macros and integration steps."
- `key_chapters`: ["Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 6 Error Report", "Chapter 9 Integration Steps"]
- `key_terms`: ["Crypto", "Mcu", "Mailbox", "Common", "Dem", "Rte", "Det", "SchM", "MB_IRQHandler", "HSM0_IRQHandler", "CRYPTO_E_UNINIT", "AUTOSAR_OS_NOT_USED"]
- `summary`: "This 16-page integration manual Manifest indexes all physical pages 1-16, emphasizing Crypto build dependencies/files, memory sections, exclusive areas, ISR mapping, DET errors and integration steps."
- `retrieval_note`: "Use Page Locator Map first, then Table/Term/API indexes for symbol, error and memory-section lookups."

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["Crypto", "FC7xxx", "Integration", "Rev.A0"]
- `anchor`: "FC7xxx Crypto Integration Manual"
- `range_confidence`: `0.9`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Crypto", "revision", "A0", "2025/01/22"]
- `anchor`: "Revision History"
- `range_confidence`: `0.96`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["contents", "building", "memory", "ISR", "error report", "integration steps"]
- `anchor`: "Table of Contents"
- `range_confidence`: `0.96`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Crypto", "integration requirements"]
- `anchor`: "Chapter 1 Introduction"
- `range_confidence`: `0.95`

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Crypto", "integration requirements"]
- `anchor`: "1.1 Introduction"
- `range_confidence`: `0.95`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["dependencies", "compile", "plug-ins", "Crypto_Hsm.c", "Crypto_Cfg.c"]
- `anchor`: "Chapter 2 Building"
- `range_confidence`: `0.94`

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mcu", "Mailbox", "Common", "Dem", "Rte", "Det"]
- `anchor`: "2.1 Dependencies on Other Modules"
- `range_confidence`: `0.94`

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Crypto_Hsm.c", "Crypto_KeyManagement.c", "Crypto_LLD.c", "Crypto_Cfg.h", "SchM_Crypto.h"]
- `anchor`: "2.2 Files Required for Compile"
- `range_confidence`: `0.92`

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["EB tresos", "plug-ins", "Crypto", "generated source"]
- `anchor`: "2.3 Add Plug-ins"
- `range_confidence`: `0.9`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["memory map", "CRYPTO_START_SEC", "CRYPTO_STOP_SEC", "MemMap"]
- `anchor`: "Chapter 3 Memory"
- `range_confidence`: `0.94`

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["CRYPTO_START_SEC_CONFIG_DATA_8", "CRYPTO_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"]
- `anchor`: "3.1 Sections in Memory Map"
- `range_confidence`: `0.94`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["SchM", "exclusive area", "Crypto_ScheduleJob", "Crypto_LLD_ProcessRngReq"]
- `anchor`: "Chapter 4 Exclusive Area"
- `range_confidence`: `0.94`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["ISR", "Mailbox", "MB_IRQHandler", "HSM0_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"
- `range_confidence`: `0.94`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["Det", "CRYPTO_E_UNINIT", "CRYPTO_E_PARAM_HANDLE", "CRYPTO_E_PARAM_POINTER"]
- `anchor`: "Chapter 6 Error Report"
- `range_confidence`: `0.94`

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["Crypto_Init", "Crypto_ProcessJob", "CRYPTO_E_STATE_TRANSITION", "CRYPTO_E_PARAM_VALUE"]
- `anchor`: "6.1 Det"
- `range_confidence`: `0.94`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["startup", "shutdown", "wake-up", "runtime", "Crypto_Init", "Null_Ptr"]
- `anchor`: "Chapter 7 Function Calls"
- `range_confidence`: `0.92`

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Crypto_Init", "Null_Ptr"]
- `anchor`: "7.1 Function Calls during Startup"
- `range_confidence`: `0.92`

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Shutdown", "None"]
- `anchor`: "7.2 Function Calls during Shutdown"
- `range_confidence`: `0.92`

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Wake-up", "None"]
- `anchor`: "7.3 Function Calls during Wake-up"
- `range_confidence`: `0.92`

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Runtime", "None"]
- `anchor`: "7.4 Function Calls during Runtime"
- `range_confidence`: `0.92`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Notification", "Callback", "Callout", "Macros", "AUTOSAR_OS_NOT_USED"]
- `anchor`: "Chapter 8 Other Requirements"
- `range_confidence`: `0.92`

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Notification", "Callback", "Callout", "None"]
- `anchor`: "8.1 Notification, Callback, Callout"
- `range_confidence`: `0.92`

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mcal.h", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE", "MAILBOX_ISR"]
- `anchor`: "8.2 Macros"
- `range_confidence`: `0.92`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["configuration files", "memory sections", "interrupt notification", "dependent modules"]
- `anchor`: "Chapter 9 Integration Steps"
- `range_confidence`: `0.92`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `logical_page`: `null`
- `section_path`: "Cover"
- `section_id`: `SEC-0001-COVER`
- `content_types`: ["text", "cover", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Rev.A0"]
- `anchors`: ["FC7xxx Crypto Integration Manual"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `logical_page`: `null`
- `section_path`: "Revision History"
- `section_id`: `SEC-0002-REVISION-HISTORY`
- `content_types`: ["text", "revision_history", "table", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Revision History", "A0", "2025/01/22"]
- `anchors`: ["Revision History", "A0 Echris Zhang 2025/01/22 Initial version"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `logical_page`: `null`
- `section_path`: "Table of Contents"
- `section_id`: `SEC-0003-TOC`
- `content_types`: ["text", "toc", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Table of Contents", "Building", "Memory", "ISR", "Error Report"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction", "Chapter 9 Integration Steps"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `logical_page`: `null`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `section_id`: `SEC-001-001`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Introduction", "integration requirements"]
- `anchors`: ["Chapter 1 Introduction", "integration requirements for the Crypto module"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Building"
- `section_id`: `SEC-002`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "dependencies", "Mcu", "Mailbox", "Common", "Dem", "Rte", "Det", "files"]
- `anchors`: ["Module configuration dependency", "Crypto module files", "MCAL/Src/Crypto/Src/Crypto_Hsm.c"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `section_id`: `SEC-002-003`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Crypto_Cfg", "SchM_Crypto", "EB tresos", "plug-ins"]
- `anchors`: ["_MCAL_XXXX_generateXXXX/src/Crypto_Cfg.c", "2.3 Add Plug-ins", "EB tresos plug-ins"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "table", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Memory Map", "CRYPTO_START_SEC", "CONFIG_DATA", "CONST", "VAR_NO_INIT"]
- `anchors`: ["Chapter 3 Memory", "CRYPTO_START_SEC_CONFIG_DATA_8", "CRYPTO_START_SEC_VAR_INIT_BOOLEAN"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "table", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "NO_CACHEABLE", "SHAREABLE", "VAR_INIT", "VAR_NO_INIT"]
- `anchors`: ["CRYPTO_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "CRYPTO_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Exclusive Area"
- `section_id`: `SEC-004`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Exclusive Area", "SchM", "Crypto_KeyManagement", "Crypto_LLD"]
- `anchors`: ["Chapter 4 Exclusive Area", "Crypto_ScheduleJob", "Crypto_LLD_ProcessMacGenReq"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Exclusive Area"
- `section_id`: `SEC-004`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Exclusive Area", "Crypto_LLD_ProcessMacVerifReq", "Crypto_LLD_ProcessRngReq"]
- `anchors`: ["Crypto_LLD_ProcessMacVerifReq", "Crypto_LLD_ProcessEccSignVeriReq", "Crypto_LLD_ProcessRngReq"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `logical_page`: `null`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `section_id`: `SEC-005`
- `content_types`: ["text", "table", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "ISR", "Mailbox", "MB_IRQHandler", "HSM0_IRQHandler", "NVIC"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "MB_IRQHandler", "HSM0_IRQHandler"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `logical_page`: `null`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `section_id`: `SEC-006-001`
- `content_types`: ["text", "table", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "DET", "CRYPTO_E_UNINIT", "CRYPTO_E_PARAM_HANDLE", "CRYPTO_E_PARAM_POINTER"]
- `anchors`: ["Chapter 6 Error Report", "Crypto_Init", "CRYPTO_E_STATE_TRANSITION"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `logical_page`: `null`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `section_id`: `SEC-006-001`
- `content_types`: ["text", "table", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "DET", "Crypto_CertificateParse", "Crypto_CertificateVerify"]
- `anchors`: ["Crypto_KeyExchangeCalcSecret", "Crypto_CertificateVerify", "CRYPTO_E_PARAM_POINTER"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `logical_page`: `null`
- `section_path`: "Chapter 7 Function Calls"
- `section_id`: `SEC-007`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Function Calls", "Startup", "Crypto_Init", "Null_Ptr"]
- `anchors`: ["Chapter 7 Function Calls", "Crypto_Init(Null_Ptr)", "Function Calls during Runtime"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `logical_page`: `null`
- `section_path`: "Chapter 8 Other Requirements"
- `section_id`: `SEC-008`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Other Requirements", "Macros", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE"]
- `anchors`: ["Chapter 8 Other Requirements", "AUTOSAR_OS_NOT_USED", "MB_IRQHandler"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `logical_page`: `null`
- `section_path`: "Chapter 9 Integration Steps"
- `section_id`: `SEC-009`
- `content_types`: ["text", "embedded_image"]
- `keywords`: ["Crypto", "FC7xxx", "AUTOSAR", "MCAL", "Integration", "Integration Steps", "configuration files", "memory sections", "interrupt notification"]
- `anchors`: ["Chapter 9 Integration Steps", "Configure the Crypto module", "Build the Crypto module"]

## 5. Page Segment Index

### SEG-001
- `section_id`: `SEC-001`
- `section_path`: "Chapter 1 Introduction"
- `physical_pages`: [4]
- `primary_keywords`: ["Crypto", "integration requirements"]

### SEG-001-001
- `section_id`: `SEC-001-001`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_pages`: [4]
- `primary_keywords`: ["Crypto", "integration requirements"]

### SEG-002
- `section_id`: `SEC-002`
- `section_path`: "Chapter 2 Building"
- `physical_pages`: [5, 6]
- `primary_keywords`: ["dependencies", "compile", "plug-ins", "Crypto_Hsm.c", "Crypto_Cfg.c"]

### SEG-002-001
- `section_id`: `SEC-002-001`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_pages`: [5]
- `primary_keywords`: ["Mcu", "Mailbox", "Common", "Dem", "Rte", "Det"]

### SEG-002-002
- `section_id`: `SEC-002-002`
- `section_path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_pages`: [5, 6]
- `primary_keywords`: ["Crypto_Hsm.c", "Crypto_KeyManagement.c", "Crypto_LLD.c", "Crypto_Cfg.h", "SchM_Crypto.h"]

### SEG-002-003
- `section_id`: `SEC-002-003`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_pages`: [6]
- `primary_keywords`: ["EB tresos", "plug-ins", "Crypto", "generated source"]

### SEG-003
- `section_id`: `SEC-003`
- `section_path`: "Chapter 3 Memory"
- `physical_pages`: [7, 8]
- `primary_keywords`: ["memory map", "CRYPTO_START_SEC", "CRYPTO_STOP_SEC", "MemMap"]

### SEG-003-001
- `section_id`: `SEC-003-001`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_pages`: [7, 8]
- `primary_keywords`: ["CRYPTO_START_SEC_CONFIG_DATA_8", "CRYPTO_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"]

### SEG-004
- `section_id`: `SEC-004`
- `section_path`: "Chapter 4 Exclusive Area"
- `physical_pages`: [9, 10]
- `primary_keywords`: ["SchM", "exclusive area", "Crypto_ScheduleJob", "Crypto_LLD_ProcessRngReq"]

### SEG-005
- `section_id`: `SEC-005`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_pages`: [11]
- `primary_keywords`: ["ISR", "Mailbox", "MB_IRQHandler", "HSM0_IRQHandler"]

### SEG-006
- `section_id`: `SEC-006`
- `section_path`: "Chapter 6 Error Report"
- `physical_pages`: [12, 13]
- `primary_keywords`: ["Det", "CRYPTO_E_UNINIT", "CRYPTO_E_PARAM_HANDLE", "CRYPTO_E_PARAM_POINTER"]

### SEG-006-001
- `section_id`: `SEC-006-001`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_pages`: [12, 13]
- `primary_keywords`: ["Crypto_Init", "Crypto_ProcessJob", "CRYPTO_E_STATE_TRANSITION", "CRYPTO_E_PARAM_VALUE"]

### SEG-007
- `section_id`: `SEC-007`
- `section_path`: "Chapter 7 Function Calls"
- `physical_pages`: [14]
- `primary_keywords`: ["startup", "shutdown", "wake-up", "runtime", "Crypto_Init", "Null_Ptr"]

### SEG-007-001
- `section_id`: `SEC-007-001`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_pages`: [14]
- `primary_keywords`: ["Crypto_Init", "Null_Ptr"]

### SEG-007-002
- `section_id`: `SEC-007-002`
- `section_path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_pages`: [14]
- `primary_keywords`: ["Shutdown", "None"]

### SEG-007-003
- `section_id`: `SEC-007-003`
- `section_path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_pages`: [14]
- `primary_keywords`: ["Wake-up", "None"]

### SEG-007-004
- `section_id`: `SEC-007-004`
- `section_path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_pages`: [14]
- `primary_keywords`: ["Runtime", "None"]

### SEG-008
- `section_id`: `SEC-008`
- `section_path`: "Chapter 8 Other Requirements"
- `physical_pages`: [15]
- `primary_keywords`: ["Notification", "Callback", "Callout", "Macros", "AUTOSAR_OS_NOT_USED"]

### SEG-008-001
- `section_id`: `SEC-008-001`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_pages`: [15]
- `primary_keywords`: ["Notification", "Callback", "Callout", "None"]

### SEG-008-002
- `section_id`: `SEC-008-002`
- `section_path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_pages`: [15]
- `primary_keywords`: ["Mcal.h", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE", "MAILBOX_ISR"]

### SEG-009
- `section_id`: `SEC-009`
- `section_path`: "Chapter 9 Integration Steps"
- `physical_pages`: [16]
- `primary_keywords`: ["configuration files", "memory sections", "interrupt notification", "dependent modules"]

## 6. Table Index

### TBL-0002-001
- `title`: "Revision History"
- `physical_pages`: [2]
- `section_id`: `SEC-0002-REVISION-HISTORY`
- `columns`: ["Revision", "Author", "Date", "Changes"]
- `key_rows`: ["A0 / Echris Zhang / 2025/01/22 / Initial version"]
- `table_confidence`: `0.95`

### TBL-0003-001
- `title`: "Table of Contents"
- `physical_pages`: [3]
- `section_id`: `SEC-0003-TOC`
- `columns`: ["Section", "Title", "Page"]
- `key_rows`: ["Chapter 1 Introduction / 4", "Chapter 9 Integration Steps / 16"]
- `table_confidence`: `0.92`

### TBL-0007-0008
- `title`: "Sections in Memory Map"
- `physical_pages`: [7, 8]
- `section_id`: `SEC-003-001`
- `columns`: ["Section Name", "Section Type", "Description"]
- `indexed_section_symbols_count`: `68`
- `key_rows`: ["CRYPTO_START_SEC_CONFIG_DATA_8 / Variables", "CRYPTO_START_SEC_CODE / Code", "CRYPTO_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE / shareable variables"]
- `table_confidence`: `0.90`

### TBL-0011-001
- `title`: "Interrupt Service Routine (ISR)"
- `physical_pages`: [11]
- `section_id`: `SEC-005`
- `columns`: ["Instance", "Interrupt Name", "IRQ Number"]
- `key_rows`: ["Mailbox / MB_IRQHandler / 30", "HSM / HSM0_IRQHandler / 40"]
- `table_confidence`: `0.95`

### TBL-0012-0013
- `title`: "DET Error Report"
- `physical_pages`: [12, 13]
- `section_id`: `SEC-006-001`
- `columns`: ["Function Name", "Error Type"]
- `indexed_function_symbols_count`: `45`
- `indexed_error_symbols`: ["CRYPTO_E_INIT_FAILED", "CRYPTO_E_PARAM_HANDLE", "CRYPTO_E_PARAM_POINTER", "CRYPTO_E_PARAM_VALUE", "CRYPTO_E_STATE_TRANSITION", "CRYPTO_E_UNINIT"]
- `table_confidence`: `0.92`

## 7. Figure / Image Index

### FIG-GLOBAL-IMAGE-XOBJECT
- `title`: "Repeated embedded image resource"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
- `description`: "Each page contains one embedded image object, likely shared page decoration/header/footer artwork; searchable text is available separately in the PDF text layer."
- `visual_review`: "Sample-rendered pages 1, 7 and 12 with pdftoppm; cover, memory map table and DET table were readable."
- `confidence`: `0.75`

## 8. Term / API / Config / Requirement Index

### FILES-CRYPTO-COMPILE
- `title`: "Crypto compile and generated files"
- `physical_pages`: [5, 6]
- `terms`:
  - "CDD_Mb_Types.h"
  - "Crypto.c"
  - "Crypto_Cfg.h"
  - "Crypto_KeyManagement.c"
  - "Crypto_LLD.c"
  - "Dem.h"
  - "Det.h"
  - "MCAL/Src/Crypto/Src/Crypto.c"
  - "MCAL/Src/Crypto/Src/Crypto_Hsm.c"
  - "MCAL/Src/Crypto/Src/Crypto_KeyManagement.c"
  - "MCAL/Src/Crypto/Src/Crypto_LLD.c"
  - "MCAL/Src/Crypto/Src/Crypto_Level0Api.c"
  - "MCAL/Src/Crypto/Src/Crypto_Level1Api.c"
  - "MCAL/Src/Crypto/Src/Crypto_Level2Api.c"
  - "MCAL/Src/Crypto/Src/Crypto_Level3Api.c"
  - "MCAL/Src/Crypto/Src/Crypto_LevelNApi.c"
  - "MCAL/Src/Crypto/Src/Csm.c"
  - "MCAL/Src/Crypto/include/Crypto.h"
  - "MCAL/Src/Crypto/include/Crypto_Hsm.h"
  - "MCAL/Src/Crypto/include/Crypto_KeyManagement.h"
  - "MCAL/Src/Crypto/include/Crypto_LLD.h"
  - "MCAL/Src/Crypto/include/Crypto_Lenel0Api.h"
  - "MCAL/Src/Crypto/include/Crypto_Lenel1Api.h"
  - "MCAL/Src/Crypto/include/Crypto_Lenel2Api.h"
  - "MCAL/Src/Crypto/include/Crypto_Lenel3Api.h"
  - "MCAL/Src/Crypto/include/Crypto_LenelNApi.h"
  - "MCAL/Src/Crypto/include/Crypto_MemMap.h"
  - "MCAL/Src/Crypto/include/Crypto_Version.h"
  - "MCAL/Src/Crypto/include/Csm_Cbk.h"
  - "MCAL/Src/Crypto/include/Csm_Types.h"
  - "Mcal.h"
  - "Mcu_Pcc.h"
  - "SchM_Crypto.h"
  - "_MCAL/Src/Common/include/Mcal.h"
  - "_MCAL/Src/Common/include/arm_cortex_asm.h"
  - "_MCAL_XXXX_generateXXXX/src/Crypto_Cfg.c"

### MEMMAP-CRYPTO-SECTIONS
- `title`: "Crypto memory section symbols"
- `physical_pages`: [7, 8]
- `terms`:
  - "CRYPTO_START_SEC_CODE"
  - "CRYPTO_START_SEC_CODE_AC"
  - "CRYPTO_START_SEC_CONFIG_DATA_16"
  - "CRYPTO_START_SEC_CONFIG_DATA_32"
  - "CRYPTO_START_SEC_CONFIG_DATA_8"
  - "CRYPTO_START_SEC_CONFIG_DATA_UNSPECIFIED"
  - "CRYPTO_START_SEC_CONST_16"
  - "CRYPTO_START_SEC_CONST_32"
  - "CRYPTO_START_SEC_CONST_8"
  - "CRYPTO_START_SEC_CONST_BOOLEAN"
  - "CRYPTO_START_SEC_CONST_UNSPECIFIED"
  - "CRYPTO_START_SEC_RAMCODE"
  - "CRYPTO_START_SEC_VAR_INIT_16"
  - "CRYPTO_START_SEC_VAR_INIT_16_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_INIT_32"
  - "CRYPTO_START_SEC_VAR_INIT_32_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_INIT_8"
  - "CRYPTO_START_SEC_VAR_INIT_8_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_INIT_BOOLEAN"
  - "CRYPTO_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED"
  - "CRYPTO_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_NO_INIT_16"
  - "CRYPTO_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_NO_INIT_32"
  - "CRYPTO_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_NO_INIT_8"
  - "CRYPTO_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_NO_INIT_BOOLEAN"
  - "CRYPTO_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE"
  - "CRYPTO_START_SEC_VAR_NO_INIT_UNSPECIFIED"
  - "CRYPTO_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_CODE"
  - "CRYPTO_STOP_SEC_CODE_AC"
  - "CRYPTO_STOP_SEC_CONFIG_DATA_16"
  - "CRYPTO_STOP_SEC_CONFIG_DATA_32"
  - "CRYPTO_STOP_SEC_CONFIG_DATA_8"
  - "CRYPTO_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
  - "CRYPTO_STOP_SEC_CONST_16"
  - "CRYPTO_STOP_SEC_CONST_32"
  - "CRYPTO_STOP_SEC_CONST_8"
  - "CRYPTO_STOP_SEC_CONST_BOOLEAN"
  - "CRYPTO_STOP_SEC_CONST_UNSPECIFIED"
  - "CRYPTO_STOP_SEC_RAMCODE"
  - "CRYPTO_STOP_SEC_VAR_INIT_16"
  - "CRYPTO_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_INIT_32"
  - "CRYPTO_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_INIT_8"
  - "CRYPTO_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_INIT_BOOLEAN"
  - "CRYPTO_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED"
  - "CRYPTO_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_16"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_32"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_8"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
  - "CRYPTO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"

### API-CRYPTO-FUNCTIONS
- `title`: "Crypto API/function symbols mentioned by integration topics"
- `physical_pages`: [9, 10, 12, 13, 14]
- `terms`:
  - "Crypto_CancelJob"
  - "Crypto_CertificateParse"
  - "Crypto_CertificateVerify"
  - "Crypto_Cfg"
  - "Crypto_Hsm"
  - "Crypto_Init"
  - "Crypto_KeyCopy"
  - "Crypto_KeyDerive"
  - "Crypto_KeyElementCopy"
  - "Crypto_KeyElementGet"
  - "Crypto_KeyElementIdsGet"
  - "Crypto_KeyElementSet"
  - "Crypto_KeyExchangeCalcPubVal"
  - "Crypto_KeyExchangeCalcSecret"
  - "Crypto_KeyGenerate"
  - "Crypto_KeyManagement"
  - "Crypto_KeySetValid"
  - "Crypto_LLD"
  - "Crypto_LLD_Aes_DecryptProcess"
  - "Crypto_LLD_Aes_EncryptProcess"
  - "Crypto_LLD_ProcessEccSignVeriReq"
  - "Crypto_LLD_ProcessMacGenReq"
  - "Crypto_LLD_ProcessMacVerifReq"
  - "Crypto_LLD_ProcessMd5Req"
  - "Crypto_LLD_ProcessRngReq"
  - "Crypto_LLD_ProcessRsaSignVeriReq"
  - "Crypto_LLD_ProcessSm3Req"
  - "Crypto_LLD_SM4_DecryptProcess"
  - "Crypto_LLD_SM4_EncryptProcess"
  - "Crypto_Lenel0Api"
  - "Crypto_Lenel1Api"
  - "Crypto_Lenel2Api"
  - "Crypto_Lenel3Api"
  - "Crypto_LenelNApi"
  - "Crypto_Level0Api"
  - "Crypto_Level1Api"
  - "Crypto_Level2Api"
  - "Crypto_Level3Api"
  - "Crypto_LevelNApi"
  - "Crypto_MemMap"
  - "Crypto_ProcessJob"
  - "Crypto_RandomSeed"
  - "Crypto_ScheduleJob"
  - "Crypto_SimpleProcessJob"
  - "Crypto_Version"

### ERR-CRYPTO-DET
- `title`: "Crypto DET error symbols"
- `physical_pages`: [12, 13]
- `terms`:
  - "CRYPTO_E_INIT_FAILED"
  - "CRYPTO_E_PARAM_HANDLE"
  - "CRYPTO_E_PARAM_POINTER"
  - "CRYPTO_E_PARAM_VALUE"
  - "CRYPTO_E_STATE_TRANSITION"
  - "CRYPTO_E_UNINIT"

### ISR-CRYPTO-MAILBOX-HSM
- `title`: "Crypto ISR/vector symbols"
- `physical_pages`: [11, 15]
- `terms`:
  - "HSM0_IRQHandler"
  - "ISR(MAILBOX_ISR)"
  - "MAILBOX_ISR"
  - "MB_IRQHandler"

### MACRO-CRYPTO-OS-VECTOR
- `title`: "Crypto OS/vector integration macros"
- `physical_pages`: [14, 15]
- `terms`:
  - "AUTOSAR_OS_NOT_USED"
  - "Null_Ptr"
  - "USE_SW_VECTOR_MODE"

## 9. Search Aliases

### ALIAS-AUTOSAR
- `canonical`: "AUTOSAR"
- `aliases`: ["AUTOSAR MCAL", "AUTOSAR_OS_NOT_USED", "OS not used"]
- `related_ids`: ["MACRO-CRYPTO-OS-VECTOR"]

### ALIAS-MCAL
- `canonical`: "MCAL"
- `aliases`: ["Mcal.h", "MCAL/Src/Crypto", "generated MCAL files"]
- `related_ids`: ["FILES-CRYPTO-COMPILE"]

### ALIAS-EB-TRESOS
- `canonical`: "EB tresos"
- `aliases`: ["Tresos", "plug-ins", "EB/tresos/plugins", "configuration generation"]
- `related_ids`: ["SEC-002-003"]

### ALIAS-DET
- `canonical`: "DET"
- `aliases`: ["development error detection", "CRYPTO_E_UNINIT", "CRYPTO_E_PARAM_HANDLE"]
- `related_ids`: ["ERR-CRYPTO-DET"]

### ALIAS-DEM
- `canonical`: "DEM"
- `aliases`: ["production relevant error status", "Dem.h"]
- `related_ids`: ["SEC-002-001"]

### ALIAS-SCHM
- `canonical`: "SchM"
- `aliases`: ["Schedule Manager", "exclusive area", "SchM_Crypto.h"]
- `related_ids`: ["SEC-004"]

### ALIAS-MEMMAP
- `canonical`: "MemMap"
- `aliases`: ["memory sections", "CRYPTO_START_SEC", "CRYPTO_STOP_SEC", "Crypto_MemMap.h"]
- `related_ids`: ["MEMMAP-CRYPTO-SECTIONS"]

### ALIAS-CRYPTO
- `canonical`: "Crypto"
- `aliases`: ["Crypto module", "Csm", "HSM", "Crypto_LLD"]
- `related_ids`: ["API-CRYPTO-FUNCTIONS"]

### ALIAS-MAILBOX-HSM
- `canonical`: "Mailbox/HSM interrupts"
- `aliases`: ["MB_IRQHandler", "HSM0_IRQHandler", "MAILBOX_ISR"]
- `related_ids`: ["ISR-CRYPTO-MAILBOX-HSM"]

## 9A. Text-Layer Search Supplement

- `purpose`: "Adds page-level PDF text-layer tokens that were not already present in the structured manifest, so keyword retrieval can distinguish absence from manifest omission."
- `source`: `local pypdf text extraction from Crypto_Integration_Manual.pdf`
- `source_pdf_sha256`: `e9a095779a6016b450681438dc26f886c30ce49257ef7d1674660e503e47f776`
- `generated_at`: `2026-06-20T07:45:21Z`
- `unique_missing_terms_added`: `98`
- `technical_missing_terms_added`: `4`
- `pages_with_added_terms`: `15`
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
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "describes"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "APIs"
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "MCU"
  - "Proprietary"
  - "basic"
  - "channels"
  - "chip"
  - "choose"
  - "clock"
  - "code"
  - "common"
  - "communicating"
  - "cores"
  - "enabling"
  - "initialization"
  - "initialize"
  - "initializing"
  - "mailbox"
  - "necessary"
  - "needs"
  - "other"
  - "parts"
  - "point"
  - "protect"
  - "provides"
  - "reference"
  - "some"
  - "type"
  - "unprotect"
  - "use"
  - "user"
  - "which"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Copy"
  - "EB_Plugins"
  - "Flagchip"
  - "Proprietary"
  - "Set"
  - "Studio"
  - "add"
  - "configure"
  - "developed"
  - "eclipse"
  - "file"
  - "folder"
  - "generate"
  - "location"
  - "needs"
  - "output"
  - "use"
  - "user"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "Proprietary"
  - "Start"
  - "These"
  - "aligned"
  - "bit"
  - "boolean"
  - "bss"
  - "cleared"
  - "code"
  - "data"
  - "have"
  - "initialized"
  - "never"
  - "read"
  - "rodata"
  - "stop"
  - "which"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "These"
  - "aligned"
  - "bit"
  - "bss"
  - "cacheable"
  - "cleared"
  - "code"
  - "data"
  - "have"
  - "initialized"
  - "never"
  - "which"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Manger"
  - "Proprietary"
  - "The"
  - "critical"
  - "driver"
  - "entering"
  - "exiting"
  - "following"
  - "regions"
  - "services"
  - "using"

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
  - "FC7300"
  - "Flagchip"
  - "For"
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
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "The"
  - "called"
  - "need"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Please"
  - "Proprietary"
  - "case"
  - "check"
  - "define"
  - "defined"
  - "definitions"
  - "details"
  - "example"
  - "extern"
  - "file"
  - "need"
  - "needs"
  - "user"
  - "various"
  - "void"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "appropriate"
  - "chapter"
  - "details"
  - "file"
  - "generate"
  - "linker"
  - "locations"
  - "other"
  - "please"
  - "refer"
  - "their"

## 10. Quality Warnings

### WARN-GLOBAL-SOURCE-BYTES
- `severity`: "info"
- `category`: "source_integrity"
- `physical_pages`: []
- `affected_ids`: ["Document Metadata", "SELF-CHECK-SUMMARY"]
- `message`: "Local PDF bytes are available; SHA256, file size, encryption state and link annotation count were recorded from the adjacent source PDF."
- `recommended_action`: "Treat this Manifest as stale if local Crypto_Integration_Manual.pdf SHA256 differs from e9a095779a6016b450681438dc26f886c30ce49257ef7d1674660e503e47f776."

### WARN-GLOBAL-OCR
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
- `affected_ids`: []
- `message`: "A usable PDF text layer was extracted locally; OCR was not executed."
- `recommended_action`: "Use source PDF rendering for visual verification of screenshots, diagrams and complex tables."

### WARN-GLOBAL-IMAGE-XOBJECTS
- `severity`: "info"
- `category`: "image_extraction"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
- `affected_ids`: ["FIG-GLOBAL-IMAGE-XOBJECT"]
- `message`: "Every page contains an embedded image object; sampled rendering indicates the searchable text layer still carries the visible technical text."
- `recommended_action`: "If relying on logos, screenshots or non-text visuals, inspect the source PDF rendering directly."

### WARN-0005-0006-SOURCE-TYPO
- `severity`: "low"
- `category`: "source_visible_text"
- `physical_pages`: [5, 6]
- `affected_ids`: ["FILES-CRYPTO-COMPILE"]
- `message`: "The source-visible include paths contain Crypto_Lenel*Api.h spellings and a spaced generated include path; this Manifest preserves those tokens for retrieval rather than normalizing them."
- `recommended_action`: "Verify spelling against the delivered MCAL tree before editing build scripts or include lists."

## 11. Self Check Report

### SELF-CHECK-SUMMARY
- `source_pdf`: "Crypto_Integration_Manual.pdf"
- `pdf_page_count`: `16`
- `indexed_physical_pages_count`: `16`
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
- `source_pdf_sha256`: "e9a095779a6016b450681438dc26f886c30ce49257ef7d1674660e503e47f776"
- `source_pdf_size_bytes`: `102490831`
- `source_integrity_status`: `pass`
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T07:45:21Z`
- `text_layer_search_supplement_terms`: `98`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `4`
- `overall_status`: "pass_with_warnings"

### SELF-CHECK-NOTES
- `page_numbering`: "All locator fields use 1-based PDF physical pages as primary keys; printed_page is auxiliary."
- `source_freshness_rule`: "Regenerate this Manifest when the source PDF SHA256 differs from this Manifest, or when page count / visible revision changes."
- `manifest_scope`: "This Manifest indexes the source PDF and intentionally avoids long verbatim excerpts."

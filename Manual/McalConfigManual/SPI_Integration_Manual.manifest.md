---
manifest_schema_version: "1.1"
source_pdf: "SPI_Integration_Manual.pdf"
source_pdf_sha256: "48d135a941d52af16b1e8985dccf35ac79d355a3374cb95af42b7ee7f9f4bb89"
source_pdf_size_bytes: 1097033
pdf_page_count: 15
generated_at: "2026-06-19T14:31:14Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched-spi-ssi-trgsel-uart"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: SPI_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `SPI_Integration_Manual.pdf`
- `source_pdf_sha256`: `48d135a941d52af16b1e8985dccf35ac79d355a3374cb95af42b7ee7f9f4bb89`
- `source_pdf_size_bytes`: `1097033`
- `pdf_page_count`: `15`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx SPI Integration Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T14:31:14Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched-spi-ssi-trgsel-uart`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL SPI module - Integration Manual"
- `module_scope`: "SPI module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["SPI", "Serial Peripheral Interface Handler/Driver", "AUTOSAR_SWS_SPIHandlerDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Spi", "FCSpi", "FCSPi", "FCSPI", "SchM_Spi"]
- `summary`: "This 15-page integration manual indexes SPI content across source physical pages 1-15, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["SPI", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx SPI Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["SPI", "MCAL", "FC7xxx", "FC7240", "Integration", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SPI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SPI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SPI", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SPI", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["SPI", "Spi", "SCK", "SIN", "SOUT", "SchM_Spi", "Src", "include"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Spi", "SPI", "SCK", "SIN", "SOUT", "Src", "include", "provides"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Spi", "SPI", "SCK", "SIN", "SOUT", "Src", "include", "provides"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SPI", "SchM_Spi", "Spi", "ins", "tresos", "plug", "folder", "FC7xxx"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SPI", "These", "all", "sections", "which", "UNSPECIFIED", "initialized", "code"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SPI", "These", "all", "sections", "which", "UNSPECIFIED", "initialized", "code"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SPI", "Spi", "exclusive", "area", "Spi_AfterOneJobTransferDone", "Spi_SyncTransmit", "FC7xxx", "SchM"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SPI", "Interrupt", "IRQ", "NVIC", "FCSPI0", "FCSPI0_IRQHandler", "FCSPI1", "FCSPI1_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["SPI", "SPI_E_UNINIT", "SPI_E_PARAM_CONFIG", "SPI_E_PARAM_UNIT", "SPI_E_SEQ_PENDING", "SPI_E_PARAM_SEQ", "SPI_E_PARAM_CHANNEL", "FC7xxx"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SPI", "SPI_E_UNINIT", "SPI_E_PARAM_CONFIG", "SPI_E_PARAM_UNIT", "SPI_E_PARAM_CHANNEL", "SPI_E_PARAM_SEQ", "SPI_E_SEQ_PENDING", "SPI_E_PARAM_EB_UNIT"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SPI", "SPI_E_UNINIT", "SPI_E_PARAM_UNIT", "SPI_E_SEQ_PENDING", "SPI_E_SEQ_IN_PROCESS", "SPI_E_PARAM_CONFIG", "SPI_SetHwAsyncMode", "FC7xxx"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr", "Integration", "need", "called"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr", "Integration", "need", "called"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr", "Integration", "need", "called"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr", "Integration", "need", "called"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr", "Integration", "need", "called"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FCSPI_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FCSPI_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SPI", "Spi_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FCSPI_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["SPI", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
- `anchor`: "Chapter 9 Integration Steps"

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
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 Introduction ............................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the SPI module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 2 Building", "2.1", "Dependencies on Other Modules", "Module configuration dependency"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Det module files:", "Det.h", "Rte module files:", "SchM_Spi.h"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 3 Memory", "3.1", "Sections in Memory Map", "Section Name"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Section Name", "Section Type", "Description", "SPI_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "SPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the SPI driver:", "Spi.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID For FC7300)"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `anchors`: ["SPI_E_SEQ_IN_PROCESS;", "Spi_GetHWUnitStatus", "SPI_E_UNINIT;", "SPI_E_PARAM_UNIT;"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API need be called is SPI_Init(Null_Ptr);"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the SPI module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx SPI Integration Manual"
- `keywords`: ["SPI", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx SPI Integration Manual; Revision History; 0.1"
- `keywords`: ["SPI", "MCAL", "FC7xxx", "FC7240", "Integration", "Date", "Added"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `summary`: "Revision History: FC7xxx SPI Integration Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["SPI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 Introduction ....................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx SPI Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["SPI", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the SPI module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx SPI Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Spi", "SPI", "SCK", "SIN", "SOUT", "Src", "include", "provides", "Spi_FCSpi", "Spi_Cfg"]
- `anchors`:
  - `p5`: "Chapter 2 Building"
  - `p5`: "2.1"
  - `p5`: "Dependencies on Other Modules"
  - `p5`: "Module configuration dependency"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx SPI Integration Manual; Det module files:; Det.h"
- `keywords`: ["SPI", "SchM_Spi", "Spi", "ins", "tresos", "plug", "folder", "FC7xxx", "EB_Plugins", "Det"]
- `anchors`:
  - `p6`: "Det module files:"
  - `p6`: "Det.h"
  - `p6`: "Rte module files:"
  - `p6`: "SchM_Spi.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx SPI Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["SPI", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
- `anchors`:
  - `p7`: "Chapter 3 Memory"
  - `p7`: "3.1"
  - `p7`: "Sections in Memory Map"
  - `p7`: "Section Name"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx SPI Integration Manual; Section Name; Section Type"
- `keywords`: ["SPI", "These", "SPI_START_SEC_VAR", "SPI_STOP_SEC_VAR", "initialized", "code", "UNSPECIFIED", "all", "sections", "which"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "SPI_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx SPI Integration Manual; Chapter 4 Exclusive Area; SPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["SPI", "Spi", "exclusive", "area", "Spi_AfterOneJobTransferDone", "Spi_SyncTransmit", "FC7xxx", "SchM", "Spi_ScheduleJobsOnHwUnit", "Spi_WriteIB"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "SPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the SPI driver:"
  - `p9`: "Spi.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx SPI Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["SPI", "Interrupt", "IRQ", "NVIC", "FCSPI0", "FCSPI0_IRQHandler", "FCSPI1", "FCSPI1_IRQHandler", "FCSPI2", "FCSPI2_IRQHandler"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p10`: "Instance"
  - `p10`: "Interrupt Name"
  - `p10`: "IRQ Number (NVIC Interrupt ID For FC7300)"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx SPI Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["SPI", "SPI_E_UNINIT", "SPI_E_PARAM_CONFIG", "SPI_E_PARAM_UNIT", "SPI_E_PARAM_CHANNEL", "SPI_E_PARAM_SEQ", "SPI_E_SEQ_PENDING", "SPI_E_PARAM_EB_UNIT", "FC7xxx", "Spi_Init"]
- `anchors`:
  - `p11`: "Chapter 6 Error Report"
  - `p11`: "6.1"
  - `p11`: "Det"
  - `p11`: "Function Name"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx SPI Integration Manual; SPI_E_SEQ_IN_PROCESS;; Spi_GetHWUnitStatus"
- `keywords`: ["SPI", "SPI_E_UNINIT", "SPI_E_PARAM_UNIT", "SPI_E_SEQ_PENDING", "SPI_E_SEQ_IN_PROCESS", "SPI_E_PARAM_CONFIG", "SPI_SetHwAsyncMode", "FC7xxx", "Spi_GetHWUnitStatus", "Spi_Cancel"]
- `anchors`:
  - `p12`: "SPI_E_SEQ_IN_PROCESS;"
  - `p12`: "Spi_GetHWUnitStatus"
  - `p12`: "SPI_E_UNINIT;"
  - `p12`: "SPI_E_PARAM_UNIT;"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx SPI Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr", "Integration", "need", "called"]
- `anchors`:
  - `p13`: "Chapter 7 Function Calls"
  - `p13`: "7.1"
  - `p13`: "Function Calls during Startup"
  - `p13`: "The API need be called is SPI_Init(Null_Ptr);"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx SPI Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["SPI", "Spi_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FCSPI_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FCSPI0_IRQHandler", "Notification"]
- `anchors`:
  - `p14`: "Chapter 8 Other Requirements"
  - `p14`: "8.1"
  - `p14`: "Notification, Callback, Callout"
  - `p14`: "Notification"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx SPI Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["SPI", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p15`: "Chapter 9 Integration Steps"
  - `p15`: "1)"
  - `p15`: "Configure the SPI module and generate configuration files (please refer to Building chapter for details)"
  - `p15`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 220.98]`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes a table or table-like region related to Revision History."
- `anchor`: "Revision History"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

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

### TBL-0005-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0005-001"
- `caption`: "Table-like content on page 5"
- `physical_pages`: `5`
- `printed_pages`: ["5"]
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `bbox`: `None`
- `key_fields`: ["Spi", "SPI", "SCK", "SIN", "SOUT"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Table-like content on page 6"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `bbox`: `None`
- `key_fields`: ["SPI", "SchM_Spi", "Spi", "ins", "tresos"]
- `summary`: "Indexes table-like source content for Table-like content on page 6; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 6"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 123.12, 564.72, 787.14]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 37.27, 564.72, 700.74]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 102.48, 564.72, 259.38]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID For FC730…"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 10."
- `anchor`: "Table-like region on page 10"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0010-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-002"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 282.84, 564.72, 404.82]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID For FC724…"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 10."
- `anchor`: "Table-like region on page 10"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 772.76]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like region on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.58, 37.0, 564.74, 226.04]`
- `key_fields`: ["SPI_E_SEQ_IN_PROCESS;"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-002"
- `caption`: "Table-like region on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.58, 270.22, 564.74, 357.44]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like content on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["SPI", "Calls", "FC7xxx", "SPI_Init", "Null_Ptr"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-FCSPI0-IRQHANDLER
- `name`: "FCSPI0_IRQHandler"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,14`
- `brief`: "api index entry for `FCSPI0_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI0_IRQHandler"
  - `p14`: "void FCSPI0_IRQHandler(void)"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 5 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p10`: "IRQ Number (NVIC Interrupt ID For FC7300)"
- `aliases`: []

### API-SPI-INIT
- `name`: "SPI_Init"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `SPI_Init`."
- `anchors`:
  - `p13`: "The API need be called is SPI_Init(Null_Ptr);"
- `aliases`: []

### API-CODE
- `name`: "Code"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "api index entry for `Code`."
- `anchors`:
  - `p7`: "Code"
- `aliases`: []

### API-MANGER
- `name`: "Manger"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `Manger`."
- `anchors`:
  - `p9`: "SPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### MACRO-SPI-E-UNINIT
- `name`: "SPI_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `SPI_E_UNINIT`."
- `anchors`:
  - `p11`: "SPI_E_UNINIT;"
  - `p12`: "SPI_E_UNINIT;"
- `aliases`: []

### MACRO-SPI-E-PARAM-CONFIG
- `name`: "SPI_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `SPI_E_PARAM_CONFIG`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_CONFIG;"
  - `p12`: "SPI_E_PARAM_CONFIG;"
- `aliases`: []

### MACRO-SPI-E-PARAM-UNIT
- `name`: "SPI_E_PARAM_UNIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `SPI_E_PARAM_UNIT`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_UNIT;"
  - `p12`: "SPI_E_PARAM_UNIT;"
- `aliases`: []

### MACRO-SPI-E-SEQ-PENDING
- `name`: "SPI_E_SEQ_PENDING"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `SPI_E_SEQ_PENDING`."
- `anchors`:
  - `p11`: "SPI_E_SEQ_PENDING;"
  - `p12`: "SPI_E_SEQ_PENDING;"
- `aliases`: []

### MACRO-SPI-E-PARAM-SEQ
- `name`: "SPI_E_PARAM_SEQ"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `SPI_E_PARAM_SEQ`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_SEQ;"
  - `p12`: "SPI_E_PARAM_SEQ;"
- `aliases`: []

### MACRO-SPI-E-PARAM-CHANNEL
- `name`: "SPI_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_PARAM_CHANNEL`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_CHANNEL;"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR
- `name`: "SPI_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR
- `name`: "SPI_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-FCSPI-0-ISR
- `name`: "FCSPI_0_ISR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `FCSPI_0_ISR`."
- `anchors`:
  - `p14`: "extern ISR(FCSPI_0_ISR);"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p14`: "AUTOSAR_OS_NOT_USED need defined."
- `aliases`: []

### MACRO-SPI-E-PARAM-EB-UNIT
- `name`: "SPI_E_PARAM_EB_UNIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_PARAM_EB_UNIT`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_EB_UNIT;"
- `aliases`: []

### MACRO-SPI-E-SEQ-IN-PROCESS
- `name`: "SPI_E_SEQ_IN_PROCESS"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `SPI_E_SEQ_IN_PROCESS`."
- `anchors`:
  - `p12`: "SPI_E_SEQ_IN_PROCESS;"
- `aliases`: []

### MACRO-SPI-START-SEC-CODE
- `name`: "SPI_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CODE`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CODE"
- `aliases`: []

### MACRO-SPI-START-SEC-CODE-AC
- `name`: "SPI_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-SPI-START-SEC-CONFIG-DATA-16
- `name`: "SPI_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-SPI-START-SEC-CONFIG-DATA-32
- `name`: "SPI_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-SPI-START-SEC-CONFIG-DATA-8
- `name`: "SPI_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-SPI-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "SPI_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-SPI-START-SEC-CONST-16
- `name`: "SPI_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONST_16"
- `aliases`: []

### MACRO-SPI-START-SEC-CONST-32
- `name`: "SPI_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONST_32"
- `aliases`: []

### MACRO-SPI-START-SEC-CONST-8
- `name`: "SPI_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONST_8"
- `aliases`: []

### MACRO-SPI-START-SEC-CONST-BOOLEAN
- `name`: "SPI_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-INIT-SHAREABLE-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-16
- `name`: "SPI_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-32
- `name`: "SPI_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-8
- `name`: "SPI_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-SHAREABLE-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-START-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CODE
- `name`: "SPI_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CODE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CODE-AC
- `name`: "SPI_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONFIG-DATA-16
- `name`: "SPI_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONFIG-DATA-32
- `name`: "SPI_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONFIG-DATA-8
- `name`: "SPI_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONST-16
- `name`: "SPI_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONST-32
- `name`: "SPI_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONST-8
- `name`: "SPI_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-SPI-STOP-SEC-CONST-BOOLEAN
- `name`: "SPI_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-INIT-SHAREABLE-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-16
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-32
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-8
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-SHAREABLE-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE"
- `aliases`: []

### MACRO-SPI-STOP-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SPI-E-ALREADY-INITIALIZED
- `name`: "SPI_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "SPI_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-SPI-E-CONFIG-OUT-OF-RANGE
- `name`: "SPI_E_CONFIG_OUT_OF_RANGE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_CONFIG_OUT_OF_RANGE`."
- `anchors`:
  - `p11`: "SPI_E_CONFIG_OUT_OF_RANGE;"
- `aliases`: []

### MACRO-SPI-E-JOB-EMPTY
- `name`: "SPI_E_JOB_EMPTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_JOB_EMPTY`."
- `anchors`:
  - `p11`: "SPI_E_JOB_EMPTY;"
- `aliases`: []

### MACRO-SPI-E-PARAM-JOB
- `name`: "SPI_E_PARAM_JOB"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_PARAM_JOB`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_JOB;"
- `aliases`: []

### MACRO-SPI-E-PARAM-LENGTH
- `name`: "SPI_E_PARAM_LENGTH"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_PARAM_LENGTH`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_LENGTH;"
- `aliases`: []

### MACRO-SPI-E-PARAM-POINTER
- `name`: "SPI_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "SPI_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-SPI-E-SEQ-EMPTY
- `name`: "SPI_E_SEQ_EMPTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SPI_E_SEQ_EMPTY`."
- `anchors`:
  - `p11`: "SPI_E_SEQ_EMPTY;"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p14`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p14`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to"
- `aliases`: []

### MEM-SPI-START-SEC-VAR
- `name`: "SPI_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR
- `name`: "SPI_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SPI-START-SEC
- `name`: "SPI_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-SPI-START-SEC-CONST
- `name`: "SPI_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-SPI-START-SEC-CONST-UNSPECIFIED
- `name`: "SPI_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SPI_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-SPI-START-SEC-RAMCODE
- `name`: "SPI_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "SPI_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-INIT-16
- `name`: "SPI_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-INIT-32
- `name`: "SPI_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-INIT-8
- `name`: "SPI_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-INIT-BOOLEAN
- `name`: "SPI_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "SPI_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "SPI_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-NO-INIT
- `name`: "SPI_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SPI-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SPI_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SPI-STOP-SEC
- `name`: "SPI_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-SPI-STOP-SEC-CONST
- `name`: "SPI_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-SPI-STOP-SEC-CONST-UNSPECIFIED
- `name`: "SPI_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-SPI-STOP-SEC-RAMCODE
- `name`: "SPI_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-INIT-16
- `name`: "SPI_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-INIT-32
- `name`: "SPI_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-INIT-8
- `name`: "SPI_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "SPI_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "SPI_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "SPI_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-NO-INIT
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SPI-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SPI_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-SPI-CFG-H
- `name`: "Spi_Cfg.h"
- `type`: `file`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "file index entry for `Spi_Cfg.h`."
- `anchors`:
  - `p14`: "Spi_Cfg.h. The user need implement the notification in any file which includes Spi_Cfg.h."
- `aliases`: []

### FILE-DEM-H
- `name`: "Dem.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Dem.h`."
- `anchors`:
  - `p6`: "Dem.h"
- `aliases`: []

### FILE-DET-H
- `name`: "Det.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Det.h`."
- `anchors`:
  - `p6`: "Det.h"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p14`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-SPI-H
- `name`: "SchM_Spi.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Spi.h`."
- `anchors`:
  - `p6`: "SchM_Spi.h"
- `aliases`: []

### FILE-SPI-C
- `name`: "Spi.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Spi.c`."
- `anchors`:
  - `p9`: "Spi.c:"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-H
- `name`: "_MCAL/Src/Common/include/Compiler.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Compiler.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILERDEFINITION-H
- `name`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/CompilerDefinition.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MCAL-H
- `name`: "_MCAL/Src/Common/include/Mcal.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mcal.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mcal.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: "_MCAL/Src/Common/include/Platform_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Platform_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Platform_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-STD-TYPES-H
- `name`: "_MCAL/Src/Common/include/Std_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Std_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-SPI-SRC-SPI-C
- `name`: "_MCAL/Src/Spi/Src/Spi.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/Src/Spi.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/Src/Spi.c"
- `aliases`: []

### FILE-MCAL-SRC-SPI-SRC-SPI-FCSPI-C
- `name`: "_MCAL/Src/Spi/Src/Spi_FCSpi.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/Src/Spi_FCSpi.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/Src/Spi_FCSpi.c"
- `aliases`: []

### FILE-MCAL-SRC-SPI-SRC-SPI-FCSPI-IRQ-C
- `name`: "_MCAL/Src/Spi/Src/Spi_FCSpi_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/Src/Spi_FCSpi_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/Src/Spi_FCSpi_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-SPI-INCLUDE-SPI-H
- `name`: "_MCAL/Src/Spi/include/Spi.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/include/Spi.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi.h"
- `aliases`: []

### FILE-MCAL-SRC-SPI-INCLUDE-SPI-FCSPI-H
- `name`: "_MCAL/Src/Spi/include/Spi_FCSpi.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/include/Spi_FCSpi.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_FCSpi.h"
- `aliases`: []

### FILE-MCAL-SRC-SPI-INCLUDE-SPI-MEMMAP-H
- `name`: "_MCAL/Src/Spi/include/Spi_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/include/Spi_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-SPI-INCLUDE-SPI-REGOPS-H
- `name`: "_MCAL/Src/Spi/include/Spi_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/include/Spi_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-SPI-INCLUDE-SPI-VERSION-H
- `name`: "_MCAL/Src/Spi/include/Spi_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Spi/include/Spi_Version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_Version.h"
- `aliases`: []

### FILE-MCAL-XXXX-GENERATEXXXX-SRC-SPI-PBCFG-C
- `name`: "_MCAL_XXXX_generateXXXX/src/Spi_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_XXXX_generateXXXX/src/Spi_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_XXXX_generateXXXX/src/Spi_PBcfg.c"
- `aliases`: []

### FILE-INCLUDE-SPI-CFG-H
- `name`: "include/Spi_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `include/Spi_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_XXXX_generateXXXX /include/Spi_Cfg.h"
- `aliases`: []

### FILE-SRC-SPI-CFG-C
- `name`: "src/Spi_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `src/Spi_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_XXXX_generateXXXX /src/Spi_Cfg.c"
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

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,12`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p5`: "Dem"
  - `p6`: "Dem"
  - `p12`: "Dem"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,11`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p11`: "Det"
- `aliases`: []

### TERM-SPI-SYNCTRANSMIT
- `name`: "Spi_SyncTransmit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11,12`
- `brief`: "term index entry for `Spi_SyncTransmit`."
- `anchors`:
  - `p9`: "Spi_SyncTransmit : exclusive area 1"
  - `p11`: "Spi_SyncTransmit"
  - `p12`: "Spi_SyncTransmit"
- `aliases`: []

### TERM-SPI-ASYNCTRANSMIT
- `name`: "Spi_AsyncTransmit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11,12`
- `brief`: "term index entry for `Spi_AsyncTransmit`."
- `anchors`:
  - `p9`: "Spi_AsyncTransmit : exclusive area 5"
  - `p11`: "Spi_AsyncTransmit"
  - `p12`: "Spi_AsyncTransmit"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,5,6`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p5`: "MCAL"
  - `p6`: "MCAL"
- `aliases`: []

### TERM-SPI-CFG
- `name`: "Spi_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,14`
- `brief`: "term index entry for `Spi_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_XXXX_generateXXXX /src/Spi_Cfg.c"
  - `p14`: "Spi_Cfg.h. The user need implement the notification in any file which includes Spi_Cfg.h."
- `aliases`: []

### TERM-SPI-INIT
- `name`: "Spi_Init"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "term index entry for `Spi_Init`."
- `anchors`:
  - `p11`: "Spi_Init"
  - `p12`: "Spi_Init"
- `aliases`: []

### TERM-SPI-WRITEIB
- `name`: "Spi_WriteIB"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Spi_WriteIB`."
- `anchors`:
  - `p9`: "Spi_WriteIB: exclusive area 4"
  - `p11`: "Spi_WriteIB"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,11`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p6`: "EB tresos"
  - `p11`: "EB tresos"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p5`: "Rte"
  - `p6`: "Rte"
- `aliases`: []

### TERM-SPI-AFTERONEJOBTRANSFERDONE
- `name`: "Spi_AfterOneJobTransferDone"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Spi_AfterOneJobTransferDone`."
- `anchors`:
  - `p9`: "Spi_AfterOneJobTransferDone : exclusive area 4"
- `aliases`: []

### TERM-FCSPI1-IRQHANDLER
- `name`: "FCSPI1_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI1_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI1_IRQHandler"
- `aliases`: []

### TERM-FCSPI2-IRQHANDLER
- `name`: "FCSPI2_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI2_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI2_IRQHandler"
- `aliases`: []

### TERM-FCSPI3-IRQHANDLER
- `name`: "FCSPI3_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI3_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI3_IRQHandler"
- `aliases`: []

### TERM-FCSPI4-IRQHANDLER
- `name`: "FCSPI4_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI4_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI4_IRQHandler"
- `aliases`: []

### TERM-FCSPI5-IRQHANDLER
- `name`: "FCSPI5_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI5_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI5_IRQHandler"
- `aliases`: []

### TERM-SPI-SETHWASYNCMODE
- `name`: "SPI_SetHwAsyncMode"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `SPI_SetHwAsyncMode`."
- `anchors`:
  - `p12`: "SPI_SetHwAsyncMode"
- `aliases`: []

### TERM-SPI-FCSPI
- `name`: "Spi_FCSpi"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Spi_FCSpi`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/Src/Spi_FCSpi.c"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p14`: "AUTOSAR"
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p6`: "Copy the SPI module(_MCAL/EB_Plugins/eclipse/plugins/Spi) folder to EB tresos plug-ins (EB/tresos/plugins/) folder."
- `aliases`: []

### TERM-FCSPI6-IRQHANDLER
- `name`: "FCSPI6_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI6_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI6_IRQHandler"
- `aliases`: []

### TERM-FCSPI7-IRQHANDLER
- `name`: "FCSPI7_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCSPI7_IRQHandler`."
- `anchors`:
  - `p10`: "FCSPI7_IRQHandler"
- `aliases`: []

### TERM-SCHM-SPI
- `name`: "SchM_Spi"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Spi`."
- `anchors`:
  - `p6`: "SchM_Spi.h"
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

### TERM-SPI-CANCEL
- `name`: "Spi_Cancel"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Spi_Cancel`."
- `anchors`:
  - `p12`: "Spi_Cancel"
- `aliases`: []

### TERM-SPI-DEINIT
- `name`: "Spi_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_DeInit`."
- `anchors`:
  - `p11`: "Spi_DeInit"
- `aliases`: []

### TERM-SPI-FCSPI-IRQ
- `name`: "Spi_FCSpi_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Spi_FCSpi_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/Src/Spi_FCSpi_Irq.c"
- `aliases`: []

### TERM-SPI-GETHWUNITSTATUS
- `name`: "Spi_GetHWUnitStatus"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Spi_GetHWUnitStatus`."
- `anchors`:
  - `p12`: "Spi_GetHWUnitStatus"
- `aliases`: []

### TERM-SPI-GETJOBRESULT
- `name`: "Spi_GetJobResult"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_GetJobResult`."
- `anchors`:
  - `p11`: "Spi_GetJobResult"
- `aliases`: []

### TERM-SPI-GETSEQUENCERESULT
- `name`: "Spi_GetSequenceResult"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_GetSequenceResult`."
- `anchors`:
  - `p11`: "Spi_GetSequenceResult"
- `aliases`: []

### TERM-SPI-GETSTATUS
- `name`: "Spi_GetStatus"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_GetStatus`."
- `anchors`:
  - `p11`: "Spi_GetStatus"
- `aliases`: []

### TERM-SPI-GETVERSIONINFO
- `name`: "Spi_GetVersionInfo"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_GetVersionInfo`."
- `anchors`:
  - `p11`: "Spi_GetVersionInfo"
- `aliases`: []

### TERM-SPI-MEMMAP
- `name`: "Spi_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Spi_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_MemMap.h"
- `aliases`: []

### TERM-SPI-PBCFG
- `name`: "Spi_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Spi_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_XXXX_generateXXXX/src/Spi_PBcfg.c"
- `aliases`: []

### TERM-SPI-READIB
- `name`: "Spi_ReadIB"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_ReadIB`."
- `anchors`:
  - `p11`: "Spi_ReadIB"
- `aliases`: []

### TERM-SPI-REGOPS
- `name`: "Spi_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Spi_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_RegOps.h"
- `aliases`: []

### TERM-SPI-SCHEDULEJOBSONHWUNIT
- `name`: "Spi_ScheduleJobsOnHwUnit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Spi_ScheduleJobsOnHwUnit`."
- `anchors`:
  - `p9`: "Spi_ScheduleJobsOnHwUnit : exclusive area 3"
- `aliases`: []

### TERM-SPI-SETASYNCMODE
- `name`: "Spi_SetAsyncMode"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Spi_SetAsyncMode`."
- `anchors`:
  - `p12`: "Spi_SetAsyncMode"
- `aliases`: []

### TERM-SPI-SETUPEB
- `name`: "Spi_SetupEB"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Spi_SetupEB`."
- `anchors`:
  - `p11`: "Spi_SetupEB"
- `aliases`: []

### TERM-SPI-VERSION
- `name`: "Spi_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Spi_Version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Spi/include/Spi_Version.h"
- `aliases`: []

### TERM-STD-TYPES
- `name`: "Std_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Std_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Std_Types.h"
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
- `purpose`: `Close keyword lookup gaps between SPI_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `SPI_Integration_Manual.pdf`
- `source_pdf_sha256`: `48d135a941d52af16b1e8985dccf35ac79d355a3374cb95af42b7ee7f9f4bb89`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `80`
- `technical_missing_terms_added`: `7`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `80`
- `supplemented_missing_technical_token_count`: `7`
- `supplemented_physical_pages_count`: `14`
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
  - "APIs"
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "MCU"
  - "Mcu"
  - "PCSx"
  - "Port"
  - "Proprietary"
  - "basic"
  - "build"
  - "buses"
  - "chip"
  - "choose"
  - "clock"
  - "common"
  - "configurations"
  - "configured"
  - "detection"
  - "each"
  - "enabling"
  - "first"
  - "initialization"
  - "initialize"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "parts"
  - "pin"
  - "pins"
  - "point"
  - "port"
  - "production"
  - "protect"
  - "reference"
  - "relevant"
  - "reporting"
  - "should"
  - "some"
  - "status"
  - "unprotect"
  - "use"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Set"
  - "add"
  - "configure"
  - "developed"
  - "first"
  - "header"
  - "location"
  - "output"
  - "use"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "Proprietary"
  - "Start"
  - "Variables"
  - "boolean"
  - "bss"
  - "cleared"
  - "never"
  - "read"
  - "rodata"
  - "startup"
  - "stop"
  - "variables"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "bss"
  - "cacheable"
  - "cleared"
  - "never"
  - "shareable"
  - "startup"
  - "variables"

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
  - "define"
  - "example"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "linker"
  - "locations"
  - "modules"
  - "other"
  - "their"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15`
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
- `physical_pages`: `3,5,6,10,10,11,12,12,13`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0010-001", "TBL-0010-002", "TBL-0011-001", "TBL-0012-001", "TBL-0012-002", "TBL-0013-001"]
- `message`: "9 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `revision_history`
- `physical_pages`: `2`
- `affected_ids`: []
- `message`: "Revision history dates are not strictly monotonic in displayed order; this appears to be a source-document issue."
- `recommended_action`: "Preserve source revision rows and verify with document owner if version chronology matters."

### WARN-0006
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `15`
- `indexed_physical_pages_count`: `15`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `26`
- `table_index_count`: `12`
- `figure_index_count`: `0`
- `symbol_index_count`: `170`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `48d135a941d52af16b1e8985dccf35ac79d355a3374cb95af42b7ee7f9f4bb89`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `80`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
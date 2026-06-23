---
manifest_schema_version: "1.1"
source_pdf: "OSPI_Integration_Manual.pdf"
source_pdf_sha256: "8b8f8f22920cad744db074f26aed3669de4e906cfe8304d426e51a5911d5d687"
source_pdf_size_bytes: 947261
pdf_page_count: 14
generated_at: "2026-06-19T13:25:59Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: OSPI_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `OSPI_Integration_Manual.pdf`
- `source_pdf_sha256`: `8b8f8f22920cad744db074f26aed3669de4e906cfe8304d426e51a5911d5d687`
- `source_pdf_size_bytes`: `947261`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx OSPI Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/12/15 / Initial release`
- `generated_at`: `2026-06-19T13:25:59Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL OSPI module - Integration Manual"
- `module_scope`: "OSPI module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["OSPI", "Octal Serial Peripheral Interface / HyperBus Complex Device Driver", "Vendor-specific CDD / AUTOSAR Classic Platform guidance", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Ospi", "CDD_Ospi", "LLD_Ospi", "HyperBus", "LUT"]
- `summary`: "This 14-page integration manual indexes OSPI content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["OSPI", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx OSPI Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["OSPI", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["OSPI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["OSPI", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["OSPI", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["OSPI", "Ospi", "DMA", "CDD_Ospi", "LLD_Ospi", "Src", "include", "provides"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["OSPI", "Ospi", "DMA", "CDD_Ospi", "LLD_Ospi", "Src", "include", "provides"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["OSPI", "Ospi", "DMA", "CDD_Ospi", "LLD_Ospi", "Src", "include", "provides"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["OSPI", "Ospi", "ins", "plug", "folder", "FC7xxx", "Compiler_Cfg", "CompilerDefinition"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["OSPI", "These", "OSPI_START_SEC_VAR", "OSPI_STOP_SEC_VAR", "FC7xxx", "all", "sections", "which"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["OSPI", "These", "OSPI_START_SEC_VAR", "OSPI_STOP_SEC_VAR", "FC7xxx", "all", "sections", "which"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["OSPI", "LLD_Ospi", "Ospi", "FC7xxx", "SchM", "OSPI_LLD_UpdateLUT", "critical", "regions"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["OSPI", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "OSPI0", "OSPI_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OSPI", "OSPI_E_UNINIT", "OSPI_E_PARAM_POINTER", "OSPI_E_PARAM_OUTRANGE", "FC7xxx", "Ospi_Init", "OSPI_E_ALREADY_INITIALIZED", "Ospi_DeInit"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OSPI", "OSPI_E_UNINIT", "OSPI_E_PARAM_POINTER", "OSPI_E_PARAM_OUTRANGE", "FC7xxx", "Ospi_Init", "OSPI_E_ALREADY_INITIALIZED", "Ospi_DeInit"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OSPI", "OSPI_E_UNINIT", "OSPI_E_PARAM_POINTER", "OSPI_E_PARAM_OUTRANGE", "FC7xxx", "Ospi_Init", "OSPI_E_ALREADY_INITIALIZED", "Ospi_DeInit"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType", "pConfigPtr", "Integration", "needs"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType", "pConfigPtr", "Integration", "needs"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType", "pConfigPtr", "Integration", "needs"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType", "pConfigPtr", "Integration", "needs"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType", "pConfigPtr", "Integration", "needs"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["OSPI", "AUTOSAR_OS_NOT_USED", "ISR", "Ospi_IsrTransferError", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "OSPI_IRQHandler"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["OSPI", "AUTOSAR_OS_NOT_USED", "ISR", "Ospi_IsrTransferError", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "OSPI_IRQHandler"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["OSPI", "AUTOSAR_OS_NOT_USED", "ISR", "Ospi_IsrTransferError", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "OSPI_IRQHandler"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OSPI", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "api"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction ............................................................................…", "1.1", "Introduction ......................................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the OSPI module."]

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
- `anchors`: ["_MCAL/Src/Common/include/Compiler_Cfg.h", "_MCAL/Src/Common/include/CompilerDefinition.h", "Det module files:", "Det.h"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "OSPI_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "OSPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the Ospi driver:", "LLD_Ospi.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs be called is Ospi_Init(const Ospi_ConfigType *pConfigPtr);"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the OSPI module and generate configuration files (please refer to Building chapter for de…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx OSPI Integration Manual"
- `keywords`: ["OSPI", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx OSPI Integration Manual; Revision History; 0.1"
- `keywords`: ["OSPI", "FC7xxx", "Integration", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "api"]
- `summary`: "Table of Contents: FC7xxx OSPI Integration Manual; Table of Contents; Chapter 1 Introduction ....................................................................................................................................... 4"
- `keywords`: ["OSPI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Chapter 1 Introduction ....................................................................................................................…"
  - `p3`: "1.1"
  - `p3`: "Introduction ..............................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx OSPI Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["OSPI", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the OSPI module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx OSPI Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["OSPI", "Ospi", "DMA", "CDD_Ospi", "LLD_Ospi", "Src", "include", "provides", "MCU", "CDD_Ospi_Cfg"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx OSPI Integration Manual; _MCAL/Src/Common/include/Compiler_Cfg.h; _MCAL/Src/Common/include/CompilerDefinition.h"
- `keywords`: ["OSPI", "Ospi", "ins", "plug", "folder", "FC7xxx", "Compiler_Cfg", "CompilerDefinition", "SchM_Ospi", "EB_Plugins"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
  - `p6`: "Det module files:"
  - `p6`: "Det.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx OSPI Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["OSPI", "These", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE", "OSPI_START_SEC_VAR_"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx OSPI Integration Manual; Section Name; Section Type"
- `keywords`: ["OSPI", "OSPI_START_SEC_VAR", "OSPI_STOP_SEC_VAR", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "OSPI_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx OSPI Integration Manual; Chapter 4 Exclusive Area; OSPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["OSPI", "LLD_Ospi", "Ospi", "FC7xxx", "SchM", "OSPI_LLD_UpdateLUT", "critical", "regions", "Integration", "Exclusive"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "OSPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the Ospi driver:"
  - `p9`: "LLD_Ospi.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx OSPI Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["OSPI", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "OSPI0", "OSPI_IRQHandler", "Integration", "Routine"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p10`: "Instance"
  - `p10`: "Interrupt Name"
  - `p10`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx OSPI Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["OSPI", "OSPI_E_UNINIT", "OSPI_E_PARAM_POINTER", "OSPI_E_PARAM_OUTRANGE", "FC7xxx", "Ospi_Init", "OSPI_E_ALREADY_INITIALIZED", "Ospi_DeInit", "Ospi_SetFlashConfig", "Ospi_UpdateLUT"]
- `anchors`:
  - `p11`: "Chapter 6 Error Report"
  - `p11`: "6.1"
  - `p11`: "Det"
  - `p11`: "Function Name"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx OSPI Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType", "pConfigPtr", "Integration", "needs", "called", "const"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"
  - `p12`: "7.1"
  - `p12`: "Function Calls during Startup"
  - `p12`: "The API needs be called is Ospi_Init(const Ospi_ConfigType *pConfigPtr);"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx OSPI Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["OSPI", "AUTOSAR_OS_NOT_USED", "ISR", "Ospi_IsrTransferError", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "OSPI_IRQHandler", "Notification", "Callback"]
- `anchors`:
  - `p13`: "Chapter 8 Other Requirements"
  - `p13`: "8.1"
  - `p13`: "Notification, Callback, Callout"
  - `p13`: "Notification"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx OSPI Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["OSPI", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the OSPI module and generate configuration files (please refer to Building chapter for details)."
  - `p14`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 141.54]`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes a table or table-like region related to Revision History."
- `anchor`: "Revision History"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0003-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0003-001"
- `caption`: "Table-like content on page 3"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["OSPI", "Calls", "FC7xxx", "ISR", "Integration"]
- `summary`: "Indexes table-like source content for Table-like content on page 3; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 3"
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
- `key_fields`: ["OSPI", "Ospi", "DMA", "CDD_Ospi", "LLD_Ospi"]
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
- `key_fields`: ["OSPI", "Ospi", "ins", "plug", "folder"]
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
- `bbox`: `[30.6, 37.27, 564.72, 156.78]`
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
- `bbox`: `[30.6, 102.48, 564.72, 137.22]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
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
- `bbox`: `[30.6, 123.1, 564.72, 537.08]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like content on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["OSPI", "Calls", "FC7xxx", "Ospi_Init", "Ospi_ConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-OSPI-IRQHANDLER
- `name`: "OSPI_IRQHandler"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "api index entry for `OSPI_IRQHandler`."
- `anchors`:
  - `p10`: "OSPI_IRQHandler"
  - `p13`: "void OSPI_IRQHandler(void)"
- `aliases`: []

### API-OSPI-INIT
- `name`: "Ospi_Init"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "api index entry for `Ospi_Init`."
- `anchors`:
  - `p11`: "Ospi_Init"
  - `p12`: "The API needs be called is Ospi_Init(const Ospi_ConfigType *pConfigPtr);"
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

### API-OSPI-ISRTRANSFERERROR
- `name`: "Ospi_IsrTransferError"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `Ospi_IsrTransferError`."
- `anchors`:
  - `p13`: "extern ISR(Ospi_IsrTransferError);"
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
  - `p9`: "OSPI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p10`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-OSPI-SETFLASHCONFIG
- `name`: "Ospi_SetFlashConfig"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Ospi_SetFlashConfig`."
- `anchors`:
  - `p11`: "Ospi_SetFlashConfig"
- `aliases`: []

### MACRO-OSPI-E-UNINIT
- `name`: "OSPI_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OSPI_E_UNINIT`."
- `anchors`:
  - `p11`: "OSPI_E_UNINIT"
- `aliases`: []

### MACRO-OSPI-E-PARAM-POINTER
- `name`: "OSPI_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OSPI_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "OSPI_E_PARAM_POINTER"
- `aliases`: []

### MACRO-OSPI-E-PARAM-OUTRANGE
- `name`: "OSPI_E_PARAM_OUTRANGE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OSPI_E_PARAM_OUTRANGE`."
- `anchors`:
  - `p11`: "OSPI_E_PARAM_OUTRANGE"
- `aliases`: []

### MACRO-OSPI-START-SEC-VAR
- `name`: "OSPI_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OSPI_START_SEC_VAR`."
- `anchors`:
  - `p8`: "OSPI_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-VAR
- `name`: "OSPI_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OSPI_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "OSPI_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p13`: "AUTOSAR_OS_NOT_USED need defined."
- `aliases`: []

### MACRO-OSPI-START-SEC-CODE
- `name`: "OSPI_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CODE`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CODE"
- `aliases`: []

### MACRO-OSPI-START-SEC-CODE-AC
- `name`: "OSPI_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONFIG-DATA-16
- `name`: "OSPI_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONFIG-DATA-32
- `name`: "OSPI_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONFIG-DATA-8
- `name`: "OSPI_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "OSPI_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONST-16
- `name`: "OSPI_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONST_16"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONST-32
- `name`: "OSPI_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONST_32"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONST-8
- `name`: "OSPI_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONST_8"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONST-BOOLEAN
- `name`: "OSPI_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-OSPI-START-SEC-CONST-UNSPECIFIED
- `name`: "OSPI_START_SEC_CONST_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONST_UNSPECIFIED"
- `aliases`: []

### MACRO-OSPI-START-SEC-VAR-NO-INIT-16
- `name`: "OSPI_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-OSPI-START-SEC-VAR-NO-INIT-32
- `name`: "OSPI_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-OSPI-START-SEC-VAR-NO-INIT-8
- `name`: "OSPI_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-OSPI-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "OSPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-OSPI-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "OSPI_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CODE
- `name`: "OSPI_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CODE"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CODE-AC
- `name`: "OSPI_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONFIG-DATA-16
- `name`: "OSPI_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONFIG-DATA-32
- `name`: "OSPI_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONFIG-DATA-8
- `name`: "OSPI_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "OSPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONST-16
- `name`: "OSPI_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONST-32
- `name`: "OSPI_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONST-8
- `name`: "OSPI_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONST-BOOLEAN
- `name`: "OSPI_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-CONST-UNSPECIFIED
- `name`: "OSPI_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONST_UNSPECIFIED"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-VAR-NO-INIT-16
- `name`: "OSPI_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-VAR-NO-INIT-32
- `name`: "OSPI_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-VAR-NO-INIT-8
- `name`: "OSPI_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "OSPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-OSPI-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "OSPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OSPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-OSPI-E-ALREADY-INITIALIZED
- `name`: "OSPI_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OSPI_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "OSPI_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-OSPI-E-INVALID-CHANNEL
- `name`: "OSPI_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OSPI_E_INVALID_CHANNEL`."
- `anchors`:
  - `p11`: "OSPI_E_INVALID_CHANNEL"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p13`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", the user shall implement the"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p13`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to"
- `aliases`: []

### TYPE-OSPI-CONFIGTYPE
- `name`: "Ospi_ConfigType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "type index entry for `Ospi_ConfigType`."
- `anchors`:
  - `p12`: "The API needs be called is Ospi_Init(const Ospi_ConfigType *pConfigPtr);"
- `aliases`: []

### MEM-OSPI-START-SEC-VAR
- `name`: "OSPI_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-OSPI-STOP-SEC-VAR
- `name`: "OSPI_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-OSPI-START-SEC
- `name`: "OSPI_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_START_SEC_`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-OSPI-START-SEC-RAMCODE
- `name`: "OSPI_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-OSPI-START-SEC-VAR-INIT-16
- `name`: "OSPI_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OSPI_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "OSPI_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-OSPI-START-SEC-VAR-INIT-32
- `name`: "OSPI_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OSPI_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "OSPI_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-OSPI-START-SEC-VAR-INIT-8
- `name`: "OSPI_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-OSPI-START-SEC-VAR-INIT-BOOLEAN
- `name`: "OSPI_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-OSPI-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "OSPI_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OSPI_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "OSPI_START_SEC_VAR _INIT_UNSPECIFIED"
- `aliases`: []

### MEM-OSPI-STOP-SEC
- `name`: "OSPI_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-OSPI-STOP-SEC-RAMCODE
- `name`: "OSPI_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-OSPI-STOP-SEC-VAR-INIT-16
- `name`: "OSPI_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "OSPI_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-OSPI-STOP-SEC-VAR-INIT-32
- `name`: "OSPI_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "OSPI_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-OSPI-STOP-SEC-VAR-INIT-8
- `name`: "OSPI_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-OSPI-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "OSPI_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OSPI_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-OSPI-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "OSPI_STOP_SEC_VAR _INIT_UNSPECIFIED"
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

### FILE-LLD-OSPI-C
- `name`: "LLD_Ospi.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `LLD_Ospi.c`."
- `anchors`:
  - `p9`: "LLD_Ospi.c:"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p13`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-OSPI-MEMMAP-H
- `name`: "Ospi_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `Ospi_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include Ospi_MemMap.h"
- `aliases`: []

### FILE-SCHM-OSPI-H
- `name`: "SchM_Ospi.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Ospi.h`."
- `anchors`:
  - `p6`: "SchM_Ospi.h"
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
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/CompilerDefinition.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler_Cfg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
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

### FILE-MCAL-SRC-OSPI-SRC-CDD-OSPI-C
- `name`: "_MCAL/Src/Ospi/Src/CDD_Ospi.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/Src/CDD_Ospi.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/Src/CDD_Ospi.c"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-SRC-CDD-OSPI-IRQ-C
- `name`: "_MCAL/Src/Ospi/Src/CDD_Ospi_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/Src/CDD_Ospi_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/Src/CDD_Ospi_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-SRC-LLD-OSPI-C
- `name`: "_MCAL/Src/Ospi/Src/LLD_Ospi.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/Src/LLD_Ospi.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/Src/LLD_Ospi.c"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-INCLUDE-CDD-OSPI-H
- `name`: "_MCAL/Src/Ospi/include/CDD_Ospi.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/include/CDD_Ospi.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/CDD_Ospi.h"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-INCLUDE-LLD-OSP-H
- `name`: "_MCAL/Src/Ospi/include/LLD_Osp.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/include/LLD_Osp.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/LLD_Osp.h"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-INCLUDE-OSPI-HW-H
- `name`: "_MCAL/Src/Ospi/include/Ospi_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/include/Ospi_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/Ospi_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-INCLUDE-OSPI-REG-H
- `name`: "_MCAL/Src/Ospi/include/Ospi_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/include/Ospi_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/Ospi_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-OSPI-INCLUDE-OSPI-VERSION-H
- `name`: "_MCAL/Src/Ospi/include/Ospi_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ospi/include/Ospi_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/Ospi_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-OSPI-CFG-H
- `name`: "_MCAL_generate/include/CDD_Ospi_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_Ospi_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Ospi_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-OSPI-CFG-C
- `name`: "_MCAL_generate/src/CDD_Ospi_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Ospi_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Ospi_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-OSPI-PBCFG-C
- `name`: "_MCAL_generate/src/CDD_Ospi_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Ospi_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Ospi_PBcfg.c"
- `aliases`: []

### TERM-OSPI
- `name`: "OSPI"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `OSPI`."
- `anchors`:
  - `p1`: "OSPI"
  - `p2`: "OSPI"
  - `p3`: "OSPI"
  - `p4`: "OSPI"
  - `p5`: "OSPI"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,11`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p5`: "Dem"
  - `p6`: "Dem"
  - `p11`: "Dem"
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

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p5`: "MCAL"
  - `p6`: "MCAL"
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

### TERM-CDD-OSPI-CFG
- `name`: "CDD_Ospi_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Ospi_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Ospi_Cfg.c"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p13`: "AUTOSAR"
- `aliases`: []

### TERM-CDD-OSPI-IRQ
- `name`: "CDD_Ospi_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Ospi_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/Src/CDD_Ospi_Irq.c"
- `aliases`: []

### TERM-CDD-OSPI-PBCFG
- `name`: "CDD_Ospi_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Ospi_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Ospi_PBcfg.c"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p6`: "EB tresos"
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p6`: "Copy the OSPI module(_MCAL/EB_Plugins/eclipse/plugins/Ospi) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-OSPI-LLD-UPDATELUT
- `name`: "OSPI_LLD_UpdateLUT"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `OSPI_LLD_UpdateLUT`."
- `anchors`:
  - `p9`: "OSPI_LLD_UpdateLUT: exclusive area 0"
- `aliases`: []

### TERM-OCTAL-SERIAL-PERIPHERAL-INTERFACE-HYPERBUS-COMPLEX-DEVICE-DR
- `name`: "Octal Serial Peripheral Interface / HyperBus Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Octal Serial Peripheral Interface / HyperBus Complex Device Driver`."
- `anchors`:
  - `p1`: "Octal Serial Peripheral Interface / HyperBus Complex Device Driver"
- `aliases`: []

### TERM-OSPI-DEINIT
- `name`: "Ospi_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_DeInit`."
- `anchors`:
  - `p11`: "Ospi_DeInit"
- `aliases`: []

### TERM-OSPI-GETSTATUS
- `name`: "Ospi_GetStatus"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_GetStatus`."
- `anchors`:
  - `p11`: "Ospi_GetStatus"
- `aliases`: []

### TERM-OSPI-HW
- `name`: "Ospi_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ospi_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/Ospi_Hw.h"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDDMAINIT
- `name`: "Ospi_HyperBusSyncCommandDmaInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandDmaInit`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandDmaInit"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDDMAREAD
- `name`: "Ospi_HyperBusSyncCommandDmaRead"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandDmaRead`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandDmaRead"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDDMAWRITE
- `name`: "Ospi_HyperBusSyncCommandDmaWrite"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandDmaWrite`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandDmaWrite"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDREAD
- `name`: "Ospi_HyperBusSyncCommandRead"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandRead`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandRead"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDSETRXFIFOWATERMARK
- `name`: "Ospi_HyperBusSyncCommandSetRxFifoWatermark"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandSetRxFifoWatermark`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandSetRxFifoWatermark"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDSETTXFIFOWATERMARK
- `name`: "Ospi_HyperBusSyncCommandSetTxFifoWatermark"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandSetTxFifoWatermark`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandSetTxFifoWatermark"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDWRITE
- `name`: "Ospi_HyperBusSyncCommandWrite"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandWrite`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandWrite"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDEENABLERXDMA
- `name`: "Ospi_HyperBusSyncCommandeEnableRxDma"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandeEnableRxDma`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandeEnableRxDma"
- `aliases`: []

### TERM-OSPI-HYPERBUSSYNCCOMMANDEENABLETXDMA
- `name`: "Ospi_HyperBusSyncCommandeEnableTxDma"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_HyperBusSyncCommandeEnableTxDma`."
- `anchors`:
  - `p11`: "Ospi_HyperBusSyncCommandeEnableTxDma"
- `aliases`: []

### TERM-OSPI-MEMMAP
- `name`: "Ospi_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ospi_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include Ospi_MemMap.h"
- `aliases`: []

### TERM-OSPI-REG
- `name`: "Ospi_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ospi_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/Ospi_Reg.h"
- `aliases`: []

### TERM-OSPI-UPDATELUT
- `name`: "Ospi_UpdateLUT"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ospi_UpdateLUT`."
- `anchors`:
  - `p11`: "Ospi_UpdateLUT"
- `aliases`: []

### TERM-OSPI-VERSION
- `name`: "Ospi_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ospi_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ospi/include/Ospi_version.h"
- `aliases`: []

### TERM-SCHM-OSPI
- `name`: "SchM_Ospi"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Ospi`."
- `anchors`:
  - `p6`: "SchM_Ospi.h"
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

### ALIAS-OSPI
- `canonical`: "OSPI"
- `aliases`: ["Octal Serial Peripheral Interface / HyperBus Complex Device Driver", "OSPI / HyperBus 复杂设备驱动", "OSPI module", "OSPI driver", "OSPI User Manual", "OSPI Integration Manual", "Ospi", "CDD_Ospi", "Octal SPI", "Octal Serial Peripheral Interface", "OSPI模块"]
- `related_ids`: ["TERM-OSPI"]

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

### ALIAS-HYPERBUS
- `canonical`: "HyperBus"
- `aliases`: ["HyperBus hardware peripheral", "HyperFlash", "HyperRAM", "HyperBusSyncCommandRead", "HyperBusSyncCommandWrite"]
- `related_ids`: []

### ALIAS-OSPI-LUT
- `canonical`: "OSPI LUT"
- `aliases`: ["Ospi_UpdateLUT", "lookup table", "LUT", "command sequence"]
- `related_ids`: []

### ALIAS-OSPI-DMA
- `canonical`: "OSPI DMA"
- `aliases`: ["OspiDMAConfig", "DMA channel reference", "DMA transfer", "OSPI DMA配置"]
- `related_ids`: []

### ALIAS-OSPI-TRANSFER
- `canonical`: "OSPI transfer"
- `aliases`: ["Ospi_HyperBusSyncCommandRead", "Ospi_HyperBusSyncCommandWrite", "SyncRead", "SyncWrite", "SyncReceive"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between OSPI_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `OSPI_Integration_Manual.pdf`
- `source_pdf_sha256`: `8b8f8f22920cad744db074f26aed3669de4e906cfe8304d426e51a5911d5d687`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `72`
- `technical_missing_terms_added`: `6`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `72`
- `supplemented_missing_technical_token_count`: `6`
- `supplemented_physical_pages_count`: `13`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

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

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "APIs"
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "Mcu"
  - "Port"
  - "Proprietary"
  - "RWDS"
  - "SCK"
  - "basic"
  - "build"
  - "buses"
  - "chip"
  - "choose"
  - "clock"
  - "common"
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
  - "relevant"
  - "reporting"
  - "should"
  - "some"
  - "status"
  - "unprotect"
  - "variant"

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
  - "tools"

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
  - "initialized"
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
  - "startup"

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
  - "define"
  - "example"
  - "notification"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "linker"
  - "locations"
  - "modules"
  - "notification"
  - "other"
  - "their"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14`
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
- `physical_pages`: `3,5,6,10,11,12`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001"]
- `message`: "6 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

### WARN-CUSTOM-TOC-0001
- `severity`: `medium`
- `category`: `toc_page_numbering`
- `physical_pages`: `3`
- `affected_ids`: []
- `message`: "Visible table of contents contains anomalous page labels such as 101/112/123/134/145 for chapters that are physically on pages 10-14."
- `recommended_action`: "Use `physical_page` fields and generated section/page locators rather than raw TOC page labels."

### WARN-0006
- `severity`: `medium`
- `category`: `toc_page_number_anomaly`
- `physical_pages`: `3`
- `affected_ids`: ["SEC-005", "SEC-006", "SEC-007", "SEC-008", "SEC-009"]
- `message`: "Visible TOC page references for later chapters contain abnormal concatenated values such as 101, 112, 123, 134 and 145 even though the PDF has 14 physical pages; Manifest section ranges use 1-based physical_page locators instead."
- `recommended_action`: "Use physical_page, Page Locator Map and anchors instead of the printed TOC page numbers for this PDF."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `14`
- `indexed_physical_pages_count`: `14`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `25`
- `table_index_count`: `9`
- `figure_index_count`: `0`
- `symbol_index_count`: `123`
- `alias_index_count`: `11`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `8b8f8f22920cad744db074f26aed3669de4e906cfe8304d426e51a5911d5d687`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `72`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `7`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
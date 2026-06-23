---
manifest_schema_version: "1.1"
source_pdf: "OCU_Integeration_Manual.pdf"
source_pdf_sha256: "c0f4bc94a53c2ca91cc5641305cfaeaaaaef69823955948e6c1db42c9e68204f"
source_pdf_size_bytes: 920765
pdf_page_count: 14
generated_at: "2026-06-19T13:25:57Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: OCU_Integeration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `OCU_Integeration_Manual.pdf`
- `source_pdf_sha256`: `c0f4bc94a53c2ca91cc5641305cfaeaaaaef69823955948e6c1db42c9e68204f`
- `source_pdf_size_bytes`: `920765`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx OCU Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/10/20 / Initial release for MCAL V0.3.0`
- `generated_at`: `2026-06-19T13:25:57Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL OCU module - Manual"
- `module_scope`: "OCU driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["OCU", "Output Compare Unit Driver", "AUTOSAR_SWS_OCUDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Ocu", "FTU", "Ftu", "Ocu_Ftu", "OcuChannel"]
- `summary`: "This 14-page manual indexes OCU content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["OCU", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx OCU Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["OCU", "FC7xxx", "MCAL", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["OCU", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["OCU", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["OCU", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["OCU", "Ocu", "Ocu_Ftu", "Src", "include", "src", "tresos", "FC7xxx"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Ocu", "OCU", "Ocu_Ftu", "Src", "include", "provides", "src", "Ocu_Hw"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Ocu", "OCU", "Ocu_Ftu", "Src", "include", "provides", "src", "Ocu_Hw"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["OCU", "tresos", "Src", "ins", "folder", "FC7xxx", "include", "Compiler_Cfg"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["OCU", "These", "UNSPECIFIED", "OCU_START_SEC_VAR", "OCU_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["OCU", "These", "UNSPECIFIED", "OCU_START_SEC_VAR", "OCU_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["OCU", "Ocu_Ftu", "Ocu", "exclusive", "area", "Ocu_ClearBitChState", "FC7xxx", "SchM"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["OCU", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0", "FTU0_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OCU", "OCU_E_UNINIT", "OCU_E_PARAM_INVALID_CHANNEL", "OCU_E_PARAM_INVALID_STATE", "OCU_E_PARAM_NO_PIN", "OCU_E_NO_VALID_NOTIF", "FC7xxx", "Ocu_Init"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OCU", "OCU_E_UNINIT", "OCU_E_PARAM_INVALID_CHANNEL", "OCU_E_PARAM_INVALID_STATE", "OCU_E_PARAM_NO_PIN", "OCU_E_NO_VALID_NOTIF", "FC7xxx", "Ocu_Init"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["OCU", "OCU_E_UNINIT", "OCU_E_PARAM_INVALID_CHANNEL", "OCU_E_PARAM_INVALID_STATE", "OCU_E_PARAM_NO_PIN", "OCU_E_NO_VALID_NOTIF", "FC7xxx", "Ocu_Init"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["OCU", "Ocu_PBCfg", "void", "AUTOSAR_OS_NOT_USED", "ISR", "OCU_FTU_0_ISR", "FC7xxx", "NULL_PTR"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["OCU", "Ocu_PBCfg", "void", "AUTOSAR_OS_NOT_USED", "ISR", "OCU_FTU_0_ISR", "FC7xxx", "NULL_PTR"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["OCU", "Ocu_PBCfg", "void", "AUTOSAR_OS_NOT_USED", "ISR", "OCU_FTU_0_ISR", "FC7xxx", "NULL_PTR"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["OCU", "FC7xxx", "Please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 Introduction ............................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the OCU module."]

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
- `anchors`: ["_MCAL/Src/Common/include/Compiler.h", "_MCAL/Src/Common/include/Compiler_Cfg.h", "_MCAL/Src/Common/include/CompilerDefinition.h", "_MCAL/Src/Common/src/Ftu_Common.c"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "OCU_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "OCU module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the OCU driver:", ""]

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
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs be called is OCU_Init(ConfigPtr)."]

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
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the OCU module and generate configuration files (Please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx OCU Integration Manual"
- `keywords`: ["OCU", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx OCU Integration Manual; Revision History; 0.1"
- `keywords`: ["OCU", "FC7xxx", "MCAL", "Integration", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `summary`: "Table of Contents: FC7xxx OCU Integration Manual; Table of Contents; Revision History .................................................................................................................................................. 2"
- `keywords`: ["OCU", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx OCU Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["OCU", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the OCU module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx OCU Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Ocu", "OCU", "Ocu_Ftu", "Src", "include", "provides", "src", "Ocu_Hw", "FC7xxx", "dependency"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx OCU Integration Manual; _MCAL/Src/Common/include/Compiler.h; _MCAL/Src/Common/include/Compiler_Cfg.h"
- `keywords`: ["OCU", "tresos", "Src", "ins", "folder", "FC7xxx", "include", "Compiler_Cfg", "CompilerDefinition", "Ftu_Common"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler.h"
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
  - `p6`: "_MCAL/Src/Common/src/Ftu_Common.c"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx OCU Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["OCU", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx OCU Integration Manual; Section Name; Section Type"
- `keywords`: ["OCU", "OCU_START_SEC_VAR", "OCU_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "OCU_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx OCU Integration Manual; Chapter 4 Exclusive Area; OCU module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["OCU", "Ocu_Ftu", "Ocu", "exclusive", "area", "Ocu_ClearBitChState", "FC7xxx", "SchM", "Ocu_SetBitChState", "Ocu_Ftu_StartChannel"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "OCU module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the OCU driver:"
  - `p9`: ""

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx OCU Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["OCU", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0", "FTU0_IRQHandler", "FTU1", "FTU1_IRQHandler"]
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
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx OCU Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["OCU", "OCU_E_UNINIT", "OCU_E_PARAM_INVALID_CHANNEL", "OCU_E_PARAM_INVALID_STATE", "OCU_E_PARAM_NO_PIN", "OCU_E_NO_VALID_NOTIF", "FC7xxx", "Ocu_Init", "OCU_E_ALREADY_INITIALIZED", "OCU_E_INIT_FAILED"]
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
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx OCU Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"
  - `p12`: "7.1"
  - `p12`: "Function Calls during Startup"
  - `p12`: "The API needs be called is OCU_Init(ConfigPtr)."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx OCU Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["OCU", "Ocu_PBCfg", "void", "AUTOSAR_OS_NOT_USED", "ISR", "OCU_FTU_0_ISR", "FC7xxx", "NULL_PTR", "extern", "Ocu_Notification_"]
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
- `summary`: "Chapter 9 Integration Steps: FC7xxx OCU Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["OCU", "FC7xxx", "Please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the OCU module and generate configuration files (Please refer to Building chapter for details)"
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
- `caption`: "Revision History"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
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
- `key_fields`: ["Ocu", "OCU", "Ocu_Ftu", "Src", "include"]
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
- `key_fields`: ["OCU", "tresos", "Src", "ins", "folder"]
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
- `bbox`: `[30.6, 102.48, 564.72, 329.1]`
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
- `bbox`: `[30.6, 123.1, 564.72, 671.6]`
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
- `key_fields`: ["OCU", "Calls", "FC7xxx", "OCU_Init", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-FTU0-IRQHANDLER
- `name`: "FTU0_IRQHandler"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "api index entry for `FTU0_IRQHandler`."
- `anchors`:
  - `p10`: "FTU0_IRQHandler"
  - `p13`: "void FTU0_IRQHandler(void)"
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

### API-OCU-INIT
- `name`: "OCU_Init"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `OCU_Init`."
- `anchors`:
  - `p12`: "The API needs be called is OCU_Init(ConfigPtr)."
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
  - `p9`: "OCU module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
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

### CFG-OCU-DISABLENOTIFICATION
- `name`: "Ocu_DisableNotification"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Ocu_DisableNotification`."
- `anchors`:
  - `p11`: "Ocu_DisableNotification"
- `aliases`: []

### CFG-OCU-ENABLENOTIFICATION
- `name`: "Ocu_EnableNotification"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Ocu_EnableNotification`."
- `anchors`:
  - `p11`: "Ocu_EnableNotification"
- `aliases`: []

### CFG-OCU-FTU-PROCESSCOMMONINTERRUPT
- `name`: "Ocu_Ftu_ProcessCommonInterrupt"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Ocu_Ftu_ProcessCommonInterrupt`."
- `anchors`:
  - `p9`: "Ocu_Ftu_ProcessCommonInterrupt : exclusive area 15"
- `aliases`: []

### CFG-OCU-FTU-STARTCHANNEL
- `name`: "Ocu_Ftu_StartChannel"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Ocu_Ftu_StartChannel`."
- `anchors`:
  - `p9`: "Ocu_Ftu_StartChannel : exclusive area 8"
- `aliases`: []

### CFG-OCU-FTU-STOPCHANNEL
- `name`: "Ocu_Ftu_StopChannel"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Ocu_Ftu_StopChannel`."
- `anchors`:
  - `p9`: "Ocu_Ftu_StopChannel : exclusive area 9"
- `aliases`: []

### CFG-OCU-NOTIFICATION
- `name`: "Ocu_Notification_"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Ocu_Notification_`."
- `anchors`:
  - `p13`: "generated in Ocu_PBCfg.c. The syntax of this function is as follows: void Ocu_Notification_#channel( void ). An"
- `aliases`: []

### CFG-OCU-STARTCHANNEL
- `name`: "Ocu_StartChannel"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Ocu_StartChannel`."
- `anchors`:
  - `p11`: "Ocu_StartChannel"
- `aliases`: []

### CFG-OCU-STOPCHANNEL
- `name`: "Ocu_StopChannel"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Ocu_StopChannel`."
- `anchors`:
  - `p11`: "Ocu_StopChannel"
- `aliases`: []

### MACRO-OCU-E-UNINIT
- `name`: "OCU_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_UNINIT`."
- `anchors`:
  - `p11`: "OCU_E_UNINIT;"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-CHANNEL
- `name`: "OCU_E_PARAM_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_CHANNEL`."
- `anchors`:
  - `p11`: "OCU_E_PARAM_INVALID_CHANNEL;"
- `aliases`: []

### MACRO-OCU-START-SEC-VAR
- `name`: "OCU_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_START_SEC_VAR`."
- `anchors`:
  - `p8`: "OCU_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-OCU-STOP-SEC-VAR
- `name`: "OCU_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `OCU_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "OCU_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-OCU-FTU-0-ISR
- `name`: "OCU_FTU_0_ISR"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `OCU_FTU_0_ISR`."
- `anchors`:
  - `p13`: "extern ISR(OCU_FTU_0_ISR);"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p13`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-OCU-E-NO-VALID-NOTIF
- `name`: "OCU_E_NO_VALID_NOTIF"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_NO_VALID_NOTIF`."
- `anchors`:
  - `p11`: "OCU_E_NO_VALID_NOTIF"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-STATE
- `name`: "OCU_E_PARAM_INVALID_STATE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_STATE`."
- `anchors`:
  - `p11`: "OCU_E_PARAM_INVALID_STATE"
- `aliases`: []

### MACRO-OCU-E-PARAM-NO-PIN
- `name`: "OCU_E_PARAM_NO_PIN"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_PARAM_NO_PIN`."
- `anchors`:
  - `p11`: "OCU_E_PARAM_NO_PIN;"
- `aliases`: []

### MACRO-OCU-START-SEC-CODE
- `name`: "OCU_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CODE`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CODE"
- `aliases`: []

### MACRO-OCU-START-SEC-CODE-AC
- `name`: "OCU_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-OCU-START-SEC-CONFIG-DATA-16
- `name`: "OCU_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-OCU-START-SEC-CONFIG-DATA-32
- `name`: "OCU_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-OCU-START-SEC-CONFIG-DATA-8
- `name`: "OCU_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-OCU-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "OCU_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-OCU-START-SEC-CONST-16
- `name`: "OCU_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONST_16"
- `aliases`: []

### MACRO-OCU-START-SEC-CONST-32
- `name`: "OCU_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONST_32"
- `aliases`: []

### MACRO-OCU-START-SEC-CONST-8
- `name`: "OCU_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONST_8"
- `aliases`: []

### MACRO-OCU-START-SEC-CONST-BOOLEAN
- `name`: "OCU_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-OCU-START-SEC-VAR-NO-INIT-16
- `name`: "OCU_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-OCU-START-SEC-VAR-NO-INIT-32
- `name`: "OCU_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-OCU-START-SEC-VAR-NO-INIT-8
- `name`: "OCU_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-OCU-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "OCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CODE
- `name`: "OCU_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CODE"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CODE-AC
- `name`: "OCU_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONFIG-DATA-16
- `name`: "OCU_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONFIG-DATA-32
- `name`: "OCU_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONFIG-DATA-8
- `name`: "OCU_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONST-16
- `name`: "OCU_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONST-32
- `name`: "OCU_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONST-8
- `name`: "OCU_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-OCU-STOP-SEC-CONST-BOOLEAN
- `name`: "OCU_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-OCU-STOP-SEC-VAR-NO-INIT-16
- `name`: "OCU_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-OCU-STOP-SEC-VAR-NO-INIT-32
- `name`: "OCU_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-OCU-STOP-SEC-VAR-NO-INIT-8
- `name`: "OCU_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-OCU-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "OCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `OCU_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-OCU-E-ALREADY-INITIALIZED
- `name`: "OCU_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "OCU_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-OCU-E-BUSY
- `name`: "OCU_E_BUSY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_BUSY`."
- `anchors`:
  - `p11`: "OCU_E_BUSY"
- `aliases`: []

### MACRO-OCU-E-INIT-FAILED
- `name`: "OCU_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_INIT_FAILED`."
- `anchors`:
  - `p11`: "OCU_E_INIT_FAILED"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-ACTION
- `name`: "OCU_E_PARAM_INVALID_ACTION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_ACTION`."
- `anchors`:
  - `p11`: "OCU_E_PARAM_INVALID_ACTION"
- `aliases`: []

### MACRO-OCU-E-PARAM-INVALID-VALUE
- `name`: "OCU_E_PARAM_INVALID_VALUE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_PARAM_INVALID_VALUE`."
- `anchors`:
  - `p11`: "OCU_E_PARAM_INVALID_VALUE"
- `aliases`: []

### MACRO-OCU-E-PARAM-POINTER
- `name`: "OCU_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `OCU_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "OCU_E_PARAM_POINTER"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p13`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will be"
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

### MEM-OCU-START-SEC-VAR
- `name`: "OCU_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR
- `name`: "OCU_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-OCU-START-SEC
- `name`: "OCU_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-OCU-START-SEC-CONST
- `name`: "OCU_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-OCU-START-SEC-CONST-UNSPECIFIED
- `name`: "OCU_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OCU_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-OCU-START-SEC-RAMCODE
- `name`: "OCU_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "OCU_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-INIT-16
- `name`: "OCU_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "OCU_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-INIT-32
- `name`: "OCU_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "OCU_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-INIT-8
- `name`: "OCU_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-INIT-BOOLEAN
- `name`: "OCU_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "OCU_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "OCU_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-NO-INIT
- `name`: "OCU_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-OCU-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "OCU_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OCU_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-OCU-STOP-SEC
- `name`: "OCU_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-OCU-STOP-SEC-CONST
- `name`: "OCU_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-OCU-STOP-SEC-CONST-UNSPECIFIED
- `name`: "OCU_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-OCU-STOP-SEC-RAMCODE
- `name`: "OCU_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-INIT-16
- `name`: "OCU_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "OCU_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-INIT-32
- `name`: "OCU_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "OCU_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-INIT-8
- `name`: "OCU_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "OCU_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "OCU_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "OCU_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-NO-INIT
- `name`: "OCU_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-OCU-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "OCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `OCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "OCU_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-OCU-PBCFG-C
- `name`: "Ocu_PBCfg.c"
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Ocu_PBCfg.c`."
- `anchors`:
  - `p13`: "generated in Ocu_PBCfg.c. The syntax of this function is as follows: void Ocu_Notification_#channel( void ). An"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: "MCAL/Src/Common/include/Platform_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Common/include/Platform_Types.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Common/include/Platform_Types.h"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p13`: "Please have a look in various definitions available in Common module include file Mcal.h for details."
- `aliases`: []

### FILE-OCU-C
- `name`: "Ocu.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Ocu.c`."
- `anchors`:
  - `p9`: "Ocu.c"
- `aliases`: []

### FILE-OCU-FTU-C
- `name`: "Ocu_Ftu.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Ocu_Ftu.c`."
- `anchors`:
  - `p9`: "Ocu_Ftu.c:"
- `aliases`: []

### FILE-SCHM-OCU-H
- `name`: "SchM_Ocu.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Ocu.h`."
- `anchors`:
  - `p6`: "SchM_Ocu.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-H
- `name`: "_MCAL/Src/Common/include/Compiler.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler.h"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-STD-TYPES-H
- `name`: "_MCAL/Src/Common/include/Std_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Std_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-FTU-COMMON-C
- `name`: "_MCAL/Src/Common/src/Ftu_Common.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/src/Ftu_Common.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Ftu_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-H
- `name`: "_MCAL/Src/Ocu/include/Ocu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-FTU-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Ftu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Ftu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Ftu.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-FTU-REGOPS-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Ftu_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Ftu_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Ftu_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-FTU-TYPES-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Ftu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Ftu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Ftu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-HW-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-HW-IRQ-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Hw_Irq.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Hw_Irq.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Hw_Irq.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-HW-TYPES-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Hw_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Hw_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Hw_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-IRQ-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Irq.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Irq.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Irq.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-MEMMAP-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-TYPES-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-INCLUDE-OCU-VERSION-H
- `name`: "_MCAL/Src/Ocu/include/Ocu_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/include/Ocu_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_version.h"
- `aliases`: []

### FILE-MCAL-SRC-OCU-SRC-OCU-C
- `name`: "_MCAL/Src/Ocu/src/Ocu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/src/Ocu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/src/Ocu.c"
- `aliases`: []

### FILE-MCAL-SRC-OCU-SRC-OCU-FTU-C
- `name`: "_MCAL/Src/Ocu/src/Ocu_Ftu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/src/Ocu_Ftu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/src/Ocu_Ftu.c"
- `aliases`: []

### FILE-MCAL-SRC-OCU-SRC-OCU-HW-C
- `name`: "_MCAL/Src/Ocu/src/Ocu_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ocu/src/Ocu_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/src/Ocu_Hw.c"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-OCU-CFG-H
- `name`: "_MCAL_generate/include/Ocu_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Ocu_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Ocu_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-OCU-PBCFG-C
- `name`: "_MCAL_generate/src/Ocu_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Ocu_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Ocu_PBcfg.c"
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
- `primary_page`: `2`
- `physical_pages`: `2,5,6`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p5`: "MCAL"
  - `p6`: "MCAL"
- `aliases`: []

### TERM-OCU-FTU
- `name`: "Ocu_Ftu"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `Ocu_Ftu`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/src/Ocu_Ftu.c"
  - `p9`: "Ocu_Ftu.c:"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p11`: "Dem"
- `aliases`: []

### TERM-OCU-CLEARBITCHSTATE
- `name`: "Ocu_ClearBitChState"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ocu_ClearBitChState`."
- `anchors`:
  - `p9`: "Ocu_ClearBitChState: exclusive area 1"
- `aliases`: []

### TERM-OCU-HW
- `name`: "Ocu_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/src/Ocu_Hw.c"
- `aliases`: []

### TERM-OCU-PBCFG
- `name`: "Ocu_PBCfg"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Ocu_PBCfg`."
- `anchors`:
  - `p13`: "generated in Ocu_PBCfg.c. The syntax of this function is as follows: void Ocu_Notification_#channel( void ). An"
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
  - `p6`: "Copy the OCU module(_MCAL/EB_Plugins/eclipse/plugins/OCU) folder to EB tresos plugins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-FTU10-IRQHANDLER
- `name`: "FTU10_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU10_IRQHandler`."
- `anchors`:
  - `p10`: "FTU10_IRQHandler"
- `aliases`: []

### TERM-FTU11-IRQHANDLER
- `name`: "FTU11_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU11_IRQHandler`."
- `anchors`:
  - `p10`: "FTU11_IRQHandler"
- `aliases`: []

### TERM-FTU1-IRQHANDLER
- `name`: "FTU1_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU1_IRQHandler`."
- `anchors`:
  - `p10`: "FTU1_IRQHandler"
- `aliases`: []

### TERM-FTU2-IRQHANDLER
- `name`: "FTU2_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU2_IRQHandler`."
- `anchors`:
  - `p10`: "FTU2_IRQHandler"
- `aliases`: []

### TERM-FTU3-IRQHANDLER
- `name`: "FTU3_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU3_IRQHandler`."
- `anchors`:
  - `p10`: "FTU3_IRQHandler"
- `aliases`: []

### TERM-FTU4-IRQHANDLER
- `name`: "FTU4_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU4_IRQHandler`."
- `anchors`:
  - `p10`: "FTU4_IRQHandler"
- `aliases`: []

### TERM-FTU5-IRQHANDLER
- `name`: "FTU5_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU5_IRQHandler`."
- `anchors`:
  - `p10`: "FTU5_IRQHandler"
- `aliases`: []

### TERM-FTU6-IRQHANDLER
- `name`: "FTU6_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU6_IRQHandler`."
- `anchors`:
  - `p10`: "FTU6_IRQHandler"
- `aliases`: []

### TERM-FTU7-IRQHANDLER
- `name`: "FTU7_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU7_IRQHandler`."
- `anchors`:
  - `p10`: "FTU7_IRQHandler"
- `aliases`: []

### TERM-FTU8-IRQHANDLER
- `name`: "FTU8_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU8_IRQHandler`."
- `anchors`:
  - `p10`: "FTU8_IRQHandler"
- `aliases`: []

### TERM-FTU9-IRQHANDLER
- `name`: "FTU9_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FTU9_IRQHandler`."
- `anchors`:
  - `p10`: "FTU9_IRQHandler"
- `aliases`: []

### TERM-FTU-COMMON
- `name`: "Ftu_Common"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Ftu_Common`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Ftu_Common.c"
- `aliases`: []

### TERM-OCU-CFG
- `name`: "Ocu_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Ocu_Cfg.h"
- `aliases`: []

### TERM-OCU-DEINIT
- `name`: "Ocu_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_DeInit`."
- `anchors`:
  - `p11`: "Ocu_DeInit"
- `aliases`: []

### TERM-OCU-FTU-REGOPS
- `name`: "Ocu_Ftu_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Ftu_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Ftu_RegOps.h"
- `aliases`: []

### TERM-OCU-FTU-SETABSOLUTETHRESHOLD
- `name`: "Ocu_Ftu_SetAbsoluteThreshold"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ocu_Ftu_SetAbsoluteThreshold`."
- `anchors`:
  - `p9`: "Ocu_Ftu_SetAbsoluteThreshold : exclusive area 13"
- `aliases`: []

### TERM-OCU-FTU-SETPINACTION
- `name`: "Ocu_Ftu_SetPinAction"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ocu_Ftu_SetPinAction`."
- `anchors`:
  - `p9`: "Ocu_Ftu_SetPinAction: exclusive area 10"
- `aliases`: []

### TERM-OCU-FTU-SETPINSTATE
- `name`: "Ocu_Ftu_SetPinState"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ocu_Ftu_SetPinState`."
- `anchors`:
  - `p9`: "Ocu_Ftu_SetPinState : exclusive area 11"
- `aliases`: []

### TERM-OCU-FTU-SETRELATIVETHRESHOLD
- `name`: "Ocu_Ftu_SetRelativeThreshold"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ocu_Ftu_SetRelativeThreshold`."
- `anchors`:
  - `p9`: "Ocu_Ftu_SetRelativeThreshold: exclusive area 12"
- `aliases`: []

### TERM-OCU-FTU-TYPES
- `name`: "Ocu_Ftu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Ftu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Ftu_Types.h"
- `aliases`: []

### TERM-OCU-GETCOUNTER
- `name`: "Ocu_GetCounter"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_GetCounter`."
- `anchors`:
  - `p11`: "Ocu_GetCounter"
- `aliases`: []

### TERM-OCU-GETVERSIONINFO
- `name`: "Ocu_GetVersionInfo"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_GetVersionInfo`."
- `anchors`:
  - `p11`: "Ocu_GetVersionInfo"
- `aliases`: []

### TERM-OCU-HW-IRQ
- `name`: "Ocu_Hw_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Hw_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Hw_Irq.h"
- `aliases`: []

### TERM-OCU-HW-TYPES
- `name`: "Ocu_Hw_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Hw_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Hw_Types.h"
- `aliases`: []

### TERM-OCU-INIT
- `name`: "Ocu_Init"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_Init`."
- `anchors`:
  - `p11`: "Ocu_Init"
- `aliases`: []

### TERM-OCU-IRQ
- `name`: "Ocu_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Irq.h"
- `aliases`: []

### TERM-OCU-MEMMAP
- `name`: "Ocu_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_MemMap.h"
- `aliases`: []

### TERM-OCU-PBCFG-2
- `name`: "Ocu_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Ocu_PBcfg.c"
- `aliases`: []

### TERM-OCU-SETABSOLUTETHRESHOLD
- `name`: "Ocu_SetAbsoluteThreshold"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_SetAbsoluteThreshold`."
- `anchors`:
  - `p11`: "Ocu_SetAbsoluteThreshold"
- `aliases`: []

### TERM-OCU-SETBITCHSTATE
- `name`: "Ocu_SetBitChState"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ocu_SetBitChState`."
- `anchors`:
  - `p9`: "Ocu_SetBitChState: exclusive area 0"
- `aliases`: []

### TERM-OCU-SETPINACTION
- `name`: "Ocu_SetPinAction"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_SetPinAction`."
- `anchors`:
  - `p11`: "Ocu_SetPinAction"
- `aliases`: []

### TERM-OCU-SETPINSTATE
- `name`: "Ocu_SetPinState"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_SetPinState`."
- `anchors`:
  - `p11`: "Ocu_SetPinState"
- `aliases`: []

### TERM-OCU-SETRELATIVETHRESHOLD
- `name`: "Ocu_SetRelativeThreshold"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ocu_SetRelativeThreshold`."
- `anchors`:
  - `p11`: "Ocu_SetRelativeThreshold"
- `aliases`: []

### TERM-OCU-TYPES
- `name`: "Ocu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_Types.h"
- `aliases`: []

### TERM-OCU-VERSION
- `name`: "Ocu_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ocu_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ocu/include/Ocu_version.h"
- `aliases`: []

### TERM-OUTPUT-COMPARE-UNIT-DRIVER
- `name`: "Output Compare Unit Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Output Compare Unit Driver`."
- `anchors`:
  - `p1`: "Output Compare Unit Driver"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p5`: "Rte"
- `aliases`: []

### TERM-SCHM-OCU
- `name`: "SchM_Ocu"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Ocu`."
- `anchors`:
  - `p6`: "SchM_Ocu.h"
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
- `purpose`: `Close keyword lookup gaps between OCU_Integeration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `OCU_Integeration_Manual.pdf`
- `source_pdf_sha256`: `c0f4bc94a53c2ca91cc5641305cfaeaaaaef69823955948e6c1db42c9e68204f`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `67`
- `technical_missing_terms_added`: `7`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `67`
- `supplemented_missing_technical_token_count`: `7`
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
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "MCU"
  - "Mcu"
  - "PORT"
  - "Port"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "clock"
  - "common"
  - "configurations"
  - "detection"
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
  - "point"
  - "port"
  - "protect"
  - "reference"
  - "signal"
  - "some"
  - "through"
  - "unprotect"
  - "use"
  - "wants"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Ret"
  - "Set"
  - "configure"
  - "developed"
  - "first"
  - "header"
  - "location"
  - "plug"
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
  - "functions"
  - "implemented"

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

### WARN-CUSTOM-FILENAME-0001
- `severity`: `low`
- `category`: `source_filename`
- `physical_pages`: `1`
- `affected_ids`: []
- `message`: "Source PDF filename uses `Integeration` instead of `Integration`; Manifest intentionally preserves the exact source filename for one-to-one pairing."
- `recommended_action`: "Keep the Manifest filename aligned with the source PDF filename unless the source PDF is renamed and the Manifest is regenerated."

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
- `symbol_index_count`: `164`
- `alias_index_count`: `11`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `c0f4bc94a53c2ca91cc5641305cfaeaaaaef69823955948e6c1db42c9e68204f`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `67`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
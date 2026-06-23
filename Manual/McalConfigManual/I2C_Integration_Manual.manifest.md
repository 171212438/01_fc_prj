---
manifest_schema_version: "1.1"
source_pdf: "I2C_Integration_Manual.pdf"
source_pdf_sha256: "1719f8637bbf9d0552c5b0e6eeeb20b26307078704ea74e49e9efd9ed85d5a7d"
source_pdf_size_bytes: 1082906
pdf_page_count: 15
generated_at: "2026-06-19T13:04:01Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.3"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: I2C_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `I2C_Integration_Manual.pdf`
- `source_pdf_sha256`: `1719f8637bbf9d0552c5b0e6eeeb20b26307078704ea74e49e9efd9ed85d5a7d`
- `source_pdf_size_bytes`: `1082906`
- `pdf_page_count`: `15`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.3`
- `visible_cover_title`: `FC7xxx I2C Integration Manual`
- `visible_cover_revision`: `Rev.0.3`
- `revision_history_latest_row`: `0.3 / 2023/10/20 / Updated for MCAL V0.3.0`
- `generated_at`: `2026-06-19T13:04:01Z`
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

- `topic`: "FC7xxx AUTOSAR MCAL I2C module - Integration Manual"
- `module_scope`: "I2C module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["I2C", "Inter-Integrated Circuit / I2C Complex Device Driver", "vendor-specific AUTOSAR Complex Device Driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "I2c", "CDD_I2c", "FCIIC", "FCI2C", "IIC"]
- `summary`: "This 15-page integration manual indexes I2C content across source physical pages 1-15, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["I2C", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx I2C Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["I2C", "MCAL", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["I2C", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["I2C", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["I2C", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["I2C", "I2c", "CDD_I2c", "Src", "include", "DMA", "provides", "ins"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["I2C", "I2c", "CDD_I2c", "Src", "include", "DMA", "provides", "CDD_I2c_Hw"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["I2C", "I2c", "CDD_I2c", "Src", "include", "DMA", "provides", "CDD_I2c_Hw"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["I2C", "I2c", "ins", "tresos", "Src", "include", "plug", "folder"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["I2C", "These", "I2C_START_SEC_VAR", "I2C_STOP_SEC_VAR", "FC7xxx", "all", "sections", "which"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["I2C", "These", "I2C_START_SEC_VAR", "I2C_STOP_SEC_VAR", "FC7xxx", "all", "sections", "which"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["exclusive", "area", "I2C", "I2c", "FC7xxx", "SchM", "CDD_I2c_Hw", "FCIIC_Init_Master"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["I2C", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FCI2C0", "FCIIC0_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["I2C", "I2C_E_PARAM_POINTER", "I2C_E_UNINIT", "I2C_E_PARAM_UNIT", "I2C_E_INV_CTRL_IDX", "FC7xxx", "I2c_Init", "I2C_E_ALREADY_INITIALIZED"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["I2C", "I2C_E_PARAM_POINTER", "I2C_E_UNINIT", "I2C_E_PARAM_UNIT", "I2C_E_INV_CTRL_IDX", "FC7xxx", "I2c_Init", "I2C_E_ALREADY_INITIALIZED"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["I2C", "I2C_E_PARAM_POINTER", "I2C_E_UNINIT", "I2C_E_PARAM_UNIT", "I2C_E_INV_CTRL_IDX", "FC7xxx", "I2c_Init", "I2C_E_ALREADY_INITIALIZED"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType", "ConfigPtr", "Integration", "needs"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType", "ConfigPtr", "Integration", "needs"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType", "ConfigPtr", "Integration", "needs"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType", "ConfigPtr", "Integration", "needs"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType", "ConfigPtr", "Integration", "needs"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["I2C", "AUTOSAR_OS_NOT_USED", "ISR", "FCI2C_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FCIIC0_IRQHandler"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["I2C", "AUTOSAR_OS_NOT_USED", "ISR", "FCI2C_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FCIIC0_IRQHandler"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["I2C", "AUTOSAR_OS_NOT_USED", "ISR", "FCI2C_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FCIIC0_IRQHandler"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["I2C", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the I2C module."]

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
- `anchors`: ["_MCAL/Src/Common/include/Platform_Types.h", "_MCAL/Src/Common/include/Compiler.h", "_MCAL/Src/Common/include/Compiler_Cfg.h", "_MCAL/Src/Common/include/CompilerDefinition.h"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "I2C_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "I2C module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the I2c driver:", "CDD_I2c_Hw.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `anchors`: ["FCIIC_MasterDMAStageData : exclusive area 29", "FCIIC_MasterDMAStageStop : exclusive area 30", "FCIIC_MasterDMAStageIdle : exclusive area 26"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs be called is I2c_Init(const I2c_ConfigType *ConfigPtr);"]

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
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the I2C module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx I2C Integration Manual"
- `keywords`: ["I2C", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx I2C Integration Manual; Revision History; 0.1"
- `keywords`: ["I2C", "MCAL", "FC7xxx", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx I2C Integration Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["I2C", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx I2C Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["I2C", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the I2C module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx I2C Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["I2C", "I2c", "CDD_I2c", "Src", "include", "DMA", "provides", "CDD_I2c_Hw", "CDD_I2c_Cfg", "FC7xxx"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx I2C Integration Manual; _MCAL/Src/Common/include/Platform_Types.h; _MCAL/Src/Common/include/Compiler.h"
- `keywords`: ["I2C", "I2c", "ins", "tresos", "Src", "include", "plug", "folder", "FC7xxx", "Platform_Types"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"
  - `p6`: "_MCAL/Src/Common/include/Compiler.h"
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx I2C Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["I2C", "These", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE", "I2C_START_SEC_VAR_"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx I2C Integration Manual; Section Name; Section Type"
- `keywords`: ["I2C", "I2C_START_SEC_VAR", "I2C_STOP_SEC_VAR", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "I2C_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx I2C Integration Manual; Chapter 4 Exclusive Area; I2C module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["exclusive", "area", "I2C", "I2c", "FC7xxx", "SchM", "CDD_I2c_Hw", "FCIIC_Init_Master", "FCIIC_DeInit_Master", "FCIIC_Init_Slave"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "I2C module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the I2c driver:"
  - `p9`: "CDD_I2c_Hw.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx I2C Integration Manual; FCIIC_MasterDMAStageData : exclusive area 29; FCIIC_MasterDMAStageStop : exclusive area 30"
- `keywords`: ["I2C", "FC7xxx", "FCIIC_MasterDMAStageData", "exclusive", "area", "FCIIC_MasterDMAStageStop", "FCIIC_MasterDMAStageIdle", "Integration"]
- `anchors`:
  - `p10`: "FCIIC_MasterDMAStageData : exclusive area 29"
  - `p10`: "FCIIC_MasterDMAStageStop : exclusive area 30"
  - `p10`: "FCIIC_MasterDMAStageIdle : exclusive area 26"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx I2C Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["I2C", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FCI2C0", "FCIIC0_IRQHandler", "FCI2C1", "FCIIC1_IRQHandler"]
- `anchors`:
  - `p11`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p11`: "Instance"
  - `p11`: "Interrupt Name"
  - `p11`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx I2C Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["I2C", "I2C_E_PARAM_POINTER", "I2C_E_UNINIT", "I2C_E_PARAM_UNIT", "I2C_E_INV_CTRL_IDX", "FC7xxx", "I2c_Init", "I2C_E_ALREADY_INITIALIZED", "I2c_DeInit", "I2c_SyncTransmit"]
- `anchors`:
  - `p12`: "Chapter 6 Error Report"
  - `p12`: "6.1"
  - `p12`: "Det"
  - `p12`: "Function Name"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx I2C Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType", "ConfigPtr", "Integration", "needs", "called", "const"]
- `anchors`:
  - `p13`: "Chapter 7 Function Calls"
  - `p13`: "7.1"
  - `p13`: "Function Calls during Startup"
  - `p13`: "The API needs be called is I2c_Init(const I2c_ConfigType *ConfigPtr);"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx I2C Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["I2C", "AUTOSAR_OS_NOT_USED", "ISR", "FCI2C_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FCIIC0_IRQHandler", "Notification", "Callback"]
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
- `summary`: "Chapter 9 Integration Steps: FC7xxx I2C Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["I2C", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p15`: "Chapter 9 Integration Steps"
  - `p15`: "1)"
  - `p15`: "Configure the I2C module and generate configuration files (please refer to Building chapter for details)."
  - `p15`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 161.46]`
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
- `key_fields`: ["I2C", "I2c", "CDD_I2c", "Src", "include"]
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
- `key_fields`: ["I2C", "I2c", "ins", "tresos", "Src"]
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

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 102.48, 564.72, 154.74]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
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
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 465.92]`
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
- `key_fields`: ["I2C", "Calls", "FC7xxx", "I2c_Init", "I2c_ConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-FCIIC0-IRQHANDLER
- `name`: "FCIIC0_IRQHandler"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,14`
- `brief`: "api index entry for `FCIIC0_IRQHandler`."
- `anchors`:
  - `p11`: "FCIIC0_IRQHandler"
  - `p14`: "void FCIIC0_IRQHandler (void)"
- `aliases`: []

### API-I2C-INIT
- `name`: "I2c_Init"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "api index entry for `I2c_Init`."
- `anchors`:
  - `p12`: "I2c_Init"
  - `p13`: "The API needs be called is I2c_Init(const I2c_ConfigType *ConfigPtr);"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 5 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p11`: "Chapter 5 Interrupt Service Routine (ISR)"
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
  - `p9`: "I2C module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p11`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-FCIIC-GETCHANNELSTATUS
- `name`: "FCIIC_GetChannelStatus"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_GetChannelStatus`."
- `anchors`:
  - `p9`: "FCIIC_GetChannelStatus : exclusive area 4"
- `aliases`: []

### CFG-FCIIC-MASTERINTERRUPTPROCESSRECEIVE
- `name`: "FCIIC_MasterInterruptProcessReceive"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_MasterInterruptProcessReceive`."
- `anchors`:
  - `p9`: "FCIIC_MasterInterruptProcessReceive : exclusive area 15"
- `aliases`: []

### CFG-FCIIC-MASTERINTERRUPTPROCESSSTOP
- `name`: "FCIIC_MasterInterruptProcessStop"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_MasterInterruptProcessStop`."
- `anchors`:
  - `p9`: "FCIIC_MasterInterruptProcessStop : exclusive area 13"
- `aliases`: []

### CFG-FCIIC-MASTERINTERRUPTPROCESSTRANSMIT
- `name`: "FCIIC_MasterInterruptProcessTransmit"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_MasterInterruptProcessTransmit`."
- `anchors`:
  - `p9`: "FCIIC_MasterInterruptProcessTransmit : exclusive area 14"
- `aliases`: []

### CFG-FCIIC-MASTERINTERRUPTPROCESSING
- `name`: "FCIIC_MasterInterruptProcessing"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_MasterInterruptProcessing`."
- `anchors`:
  - `p9`: "FCIIC_MasterInterruptProcessing : exclusive area 16"
- `aliases`: []

### CFG-FCIIC-SLAVEINTERRUPTPROCESSADDRESSMATCH
- `name`: "FCIIC_SlaveInterruptProcessAddressMatch"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_SlaveInterruptProcessAddressMatch`."
- `anchors`:
  - `p9`: "FCIIC_SlaveInterruptProcessAddressMatch : exclusive area 17"
- `aliases`: []

### CFG-FCIIC-SLAVEINTERRUPTPROCESSRECEIVE
- `name`: "FCIIC_SlaveInterruptProcessReceive"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_SlaveInterruptProcessReceive`."
- `anchors`:
  - `p9`: "FCIIC_SlaveInterruptProcessReceive : exclusive area 18"
- `aliases`: []

### CFG-FCIIC-SLAVEINTERRUPTPROCESSSTOP
- `name`: "FCIIC_SlaveInterruptProcessStop"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_SlaveInterruptProcessStop`."
- `anchors`:
  - `p9`: "FCIIC_SlaveInterruptProcessStop : exclusive area 20"
- `aliases`: []

### CFG-FCIIC-SLAVEINTERRUPTPROCESSTRANSMIT
- `name`: "FCIIC_SlaveInterruptProcessTransmit"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_SlaveInterruptProcessTransmit`."
- `anchors`:
  - `p9`: "FCIIC_SlaveInterruptProcessTransmit : exclusive area 19"
- `aliases`: []

### CFG-FCIIC-SLAVEINTERRUPTPROCESSING
- `name`: "FCIIC_SlaveInterruptProcessing"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `FCIIC_SlaveInterruptProcessing`."
- `anchors`:
  - `p9`: "FCIIC_SlaveInterruptProcessing : exclusive area 21"
- `aliases`: []

### MACRO-I2C-E-PARAM-POINTER
- `name`: "I2C_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `I2C_E_PARAM_POINTER`."
- `anchors`:
  - `p12`: "I2C_E_PARAM_POINTER"
- `aliases`: []

### MACRO-I2C-E-UNINIT
- `name`: "I2C_E_UNINIT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `I2C_E_UNINIT`."
- `anchors`:
  - `p12`: "I2C_E_UNINIT"
- `aliases`: []

### MACRO-I2C-E-INV-CTRL-IDX
- `name`: "I2C_E_INV_CTRL_IDX"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `I2C_E_INV_CTRL_IDX`."
- `anchors`:
  - `p12`: "I2C_E_INV_CTRL_IDX"
- `aliases`: []

### MACRO-I2C-E-PARAM-UNIT
- `name`: "I2C_E_PARAM_UNIT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `I2C_E_PARAM_UNIT`."
- `anchors`:
  - `p12`: "I2C_E_PARAM_UNIT;"
- `aliases`: []

### MACRO-I2C-START-SEC-VAR
- `name`: "I2C_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_START_SEC_VAR`."
- `anchors`:
  - `p8`: "I2C_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-I2C-STOP-SEC-VAR
- `name`: "I2C_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "I2C_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-FCI2C-0-ISR
- `name`: "FCI2C_0_ISR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `FCI2C_0_ISR`."
- `anchors`:
  - `p14`: "extern ISR(FCI2C_0_ISR);"
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

### MACRO-I2C-START-SEC-CODE
- `name`: "I2C_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CODE`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CODE"
- `aliases`: []

### MACRO-I2C-START-SEC-CODE-AC
- `name`: "I2C_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-I2C-START-SEC-CONFIG-DATA-16
- `name`: "I2C_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-I2C-START-SEC-CONFIG-DATA-32
- `name`: "I2C_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-I2C-START-SEC-CONFIG-DATA-8
- `name`: "I2C_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-I2C-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "I2C_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-I2C-START-SEC-CONST-16
- `name`: "I2C_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONST_16"
- `aliases`: []

### MACRO-I2C-START-SEC-CONST-32
- `name`: "I2C_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONST_32"
- `aliases`: []

### MACRO-I2C-START-SEC-CONST-8
- `name`: "I2C_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONST_8"
- `aliases`: []

### MACRO-I2C-START-SEC-CONST-BOOLEAN
- `name`: "I2C_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-I2C-START-SEC-CONST-UNSPECIFIED
- `name`: "I2C_START_SEC_CONST_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONST_UNSPECIFIED"
- `aliases`: []

### MACRO-I2C-START-SEC-VAR-NO-INIT-16
- `name`: "I2C_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-I2C-START-SEC-VAR-NO-INIT-32
- `name`: "I2C_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-I2C-START-SEC-VAR-NO-INIT-8
- `name`: "I2C_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-I2C-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "I2C_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-I2C-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "I2C_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CODE
- `name`: "I2C_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CODE"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CODE-AC
- `name`: "I2C_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONFIG-DATA-16
- `name`: "I2C_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONFIG-DATA-32
- `name`: "I2C_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONFIG-DATA-8
- `name`: "I2C_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONST-16
- `name`: "I2C_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONST-32
- `name`: "I2C_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONST-8
- `name`: "I2C_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONST-BOOLEAN
- `name`: "I2C_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-I2C-STOP-SEC-CONST-UNSPECIFIED
- `name`: "I2C_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONST_UNSPECIFIED"
- `aliases`: []

### MACRO-I2C-STOP-SEC-VAR-NO-INIT-16
- `name`: "I2C_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-I2C-STOP-SEC-VAR-NO-INIT-32
- `name`: "I2C_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-I2C-STOP-SEC-VAR-NO-INIT-8
- `name`: "I2C_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-I2C-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "I2C_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-I2C-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "I2C_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-I2C-E-ALREADY-INITIALIZED
- `name`: "I2C_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `I2C_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p12`: "I2C_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p14`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", the user shall implement the"
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

### TYPE-CDD-I2C-HWTYPE
- `name`: "CDD_I2c_HwType"
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "type index entry for `CDD_I2c_HwType`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_HwType.h"
- `aliases`: []

### TYPE-I2C-CONFIGTYPE
- `name`: "I2c_ConfigType"
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "type index entry for `I2c_ConfigType`."
- `anchors`:
  - `p13`: "The API needs be called is I2c_Init(const I2c_ConfigType *ConfigPtr);"
- `aliases`: []

### MEM-I2C-START-SEC-VAR
- `name`: "I2C_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-I2C-STOP-SEC-VAR
- `name`: "I2C_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-I2C-START-SEC
- `name`: "I2C_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_START_SEC_`."
- `anchors`:
  - `p7`: "I2C_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-I2C-START-SEC-RAMCODE
- `name`: "I2C_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "I2C_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-I2C-START-SEC-VAR-INIT-16
- `name`: "I2C_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `I2C_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "I2C_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-I2C-START-SEC-VAR-INIT-32
- `name`: "I2C_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `I2C_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "I2C_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-I2C-START-SEC-VAR-INIT-8
- `name`: "I2C_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-I2C-START-SEC-VAR-INIT-BOOLEAN
- `name`: "I2C_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-I2C-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "I2C_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `I2C_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "I2C_START_SEC_VAR _INIT_UNSPECIFIED"
- `aliases`: []

### MEM-I2C-STOP-SEC
- `name`: "I2C_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_STOP_SEC_`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-I2C-STOP-SEC-RAMCODE
- `name`: "I2C_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-I2C-STOP-SEC-VAR-INIT-16
- `name`: "I2C_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `I2C_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "I2C_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-I2C-STOP-SEC-VAR-INIT-32
- `name`: "I2C_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `I2C_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "I2C_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-I2C-STOP-SEC-VAR-INIT-8
- `name`: "I2C_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-I2C-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "I2C_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `I2C_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "I2C_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-I2C-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "I2C_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `I2C_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "I2C_STOP_SEC_VAR _INIT_UNSPECIFIED"
- `aliases`: []

### FILE-CDD-I2C-HW-C
- `name`: "CDD_I2c_Hw.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `CDD_I2c_Hw.c`."
- `anchors`:
  - `p9`: "CDD_I2c_Hw.c:"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: "_MCAL/Src/Common/include/Platform_Types.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Platform_Types.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"
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

### FILE-MCAL-SRC-I2C-SRC-CDD-I2C-C
- `name`: "_MCAL/Src/I2c/Src/CDD_I2c.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/Src/CDD_I2c.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/Src/CDD_I2c.c"
- `aliases`: []

### FILE-MCAL-SRC-I2C-SRC-CDD-I2C-HW-C
- `name`: "_MCAL/Src/I2c/Src/CDD_I2c_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/Src/CDD_I2c_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/Src/CDD_I2c_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-I2C-SRC-CDD-I2C-IRQ-C
- `name`: "_MCAL/Src/I2c/Src/CDD_I2c_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/Src/CDD_I2c_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/Src/CDD_I2c_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-CDD-I2C-H
- `name`: "_MCAL/Src/I2c/include/CDD_I2c.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/CDD_I2c.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-CDD-I2C-HW-H
- `name`: "_MCAL/Src/I2c/include/CDD_I2c_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/CDD_I2c_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-CDD-I2C-HWTYPE-H
- `name`: "_MCAL/Src/I2c/include/CDD_I2c_HwType.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/CDD_I2c_HwType.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_HwType.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-CDD-I2C-REG-H
- `name`: "_MCAL/Src/I2c/include/CDD_I2c_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/CDD_I2c_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-CDD-I2C-REGOPS-H
- `name`: "_MCAL/Src/I2c/include/CDD_I2c_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/CDD_I2c_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-CDD-I2C-TYPES-H
- `name`: "_MCAL/Src/I2c/include/CDD_I2c_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/CDD_I2c_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-I2C-MEMMAP-H
- `name`: "_MCAL/Src/I2c/include/I2c_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/I2c_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/I2c_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-I2C-INCLUDE-I2C-VERSION-H
- `name`: "_MCAL/Src/I2c/include/I2c_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/I2c/include/I2c_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/I2c_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-I2C-CFG-H
- `name`: "_MCAL_generate/include/CDD_I2c_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_I2c_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_I2c_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-I2C-CFG-C
- `name`: "_MCAL_generate/src/CDD_I2c_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_I2c_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_I2c_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-I2C-PBCFG-C
- `name`: "_MCAL_generate/src/CDD_I2c_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_I2c_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_I2c_PBcfg.c"
- `aliases`: []

### TERM-I2C
- `name`: "I2C"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `I2C`."
- `anchors`:
  - `p1`: "I2C"
  - `p2`: "I2C"
  - `p3`: "I2C"
  - `p4`: "I2C"
  - `p5`: "I2C"
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
- `physical_pages`: `3,5,6,12`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p12`: "Det"
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

### TERM-CDD-I2C-HW
- `name`: "CDD_I2c_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `CDD_I2c_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/Src/CDD_I2c_Hw.c"
  - `p9`: "CDD_I2c_Hw.c:"
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

### TERM-CDD-I2C-CFG
- `name`: "CDD_I2c_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_I2c_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_I2c_Cfg.c"
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

### TERM-CDD-I2C-IRQ
- `name`: "CDD_I2c_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_I2c_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/Src/CDD_I2c_Irq.c"
- `aliases`: []

### TERM-CDD-I2C-PBCFG
- `name`: "CDD_I2c_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_I2c_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_I2c_PBcfg.c"
- `aliases`: []

### TERM-CDD-I2C-REG
- `name`: "CDD_I2c_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_I2c_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_RegOps.h"
- `aliases`: []

### TERM-CDD-I2C-REGOPS
- `name`: "CDD_I2c_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_I2c_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_RegOps.h"
- `aliases`: []

### TERM-CDD-I2C-TYPES
- `name`: "CDD_I2c_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_I2c_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/CDD_I2c_Types.h"
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
  - `p6`: "Copy the I2C module(_MCAL/EB_Plugins/eclipse/plugins/I2c) folder to EB tresos plug-ins (EB/tresos/plugins/) folder."
- `aliases`: []

### TERM-FCIIC1-IRQHANDLER
- `name`: "FCIIC1_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FCIIC1_IRQHandler`."
- `anchors`:
  - `p11`: "FCIIC1_IRQHandler"
- `aliases`: []

### TERM-FCIIC-DEINIT-MASTER
- `name`: "FCIIC_DeInit_Master"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_DeInit_Master`."
- `anchors`:
  - `p9`: "FCIIC_DeInit_Master : exclusive area 1"
- `aliases`: []

### TERM-FCIIC-DEINIT-SLAVE
- `name`: "FCIIC_DeInit_Slave"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_DeInit_Slave`."
- `anchors`:
  - `p9`: "FCIIC_DeInit_Slave : exclusive area 3"
- `aliases`: []

### TERM-FCIIC-INIT-MASTER
- `name`: "FCIIC_Init_Master"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_Init_Master`."
- `anchors`:
  - `p9`: "FCIIC_Init_Master : exclusive area 0"
- `aliases`: []

### TERM-FCIIC-INIT-SLAVE
- `name`: "FCIIC_Init_Slave"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_Init_Slave`."
- `anchors`:
  - `p9`: "FCIIC_Init_Slave : exclusive area 2"
- `aliases`: []

### TERM-FCIIC-LL-DMA-IRQNHANDLER
- `name`: "FCIIC_LL_DMA_IRQnHandler"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_LL_DMA_IRQnHandler`."
- `anchors`:
  - `p9`: "FCIIC_LL_DMA_IRQnHandler : exclusive area 11"
- `aliases`: []

### TERM-FCIIC-LL-IRQNHANDLER
- `name`: "FCIIC_LL_IRQnHandler"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_LL_IRQnHandler`."
- `anchors`:
  - `p9`: "FCIIC_LL_IRQnHandler : exclusive area 10"
- `aliases`: []

### TERM-FCIIC-MASTERASYNCRECEIVE
- `name`: "FCIIC_MasterAsyncReceive"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterAsyncReceive`."
- `anchors`:
  - `p9`: "FCIIC_MasterAsyncReceive : exclusive area 8"
- `aliases`: []

### TERM-FCIIC-MASTERASYNCSEND
- `name`: "FCIIC_MasterAsyncSend"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterAsyncSend`."
- `anchors`:
  - `p9`: "FCIIC_MasterAsyncSend : exclusive area 7"
- `aliases`: []

### TERM-FCIIC-MASTERDMARECEIVE
- `name`: "FCIIC_MasterDMAReceive"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterDMAReceive`."
- `anchors`:
  - `p9`: "FCIIC_MasterDMAReceive : exclusive area 28"
- `aliases`: []

### TERM-FCIIC-MASTERDMASTAGEDATA
- `name`: "FCIIC_MasterDMAStageData"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCIIC_MasterDMAStageData`."
- `anchors`:
  - `p10`: "FCIIC_MasterDMAStageData : exclusive area 29"
- `aliases`: []

### TERM-FCIIC-MASTERDMASTAGEIDLE
- `name`: "FCIIC_MasterDMAStageIdle"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCIIC_MasterDMAStageIdle`."
- `anchors`:
  - `p10`: "FCIIC_MasterDMAStageIdle : exclusive area 26"
- `aliases`: []

### TERM-FCIIC-MASTERDMASTAGESTOP
- `name`: "FCIIC_MasterDMAStageStop"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCIIC_MasterDMAStageStop`."
- `anchors`:
  - `p10`: "FCIIC_MasterDMAStageStop : exclusive area 30"
- `aliases`: []

### TERM-FCIIC-MASTERDMASTART
- `name`: "FCIIC_MasterDMAStart"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterDMAStart`."
- `anchors`:
  - `p9`: "FCIIC_MasterDMAStart : exclusive area 23"
- `aliases`: []

### TERM-FCIIC-MASTERDMASTOP
- `name`: "FCIIC_MasterDMAStop"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterDMAStop`."
- `anchors`:
  - `p9`: "FCIIC_MasterDMAStop : exclusive area 24"
- `aliases`: []

### TERM-FCIIC-MASTERDMATRANSMIT
- `name`: "FCIIC_MasterDMATransmit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterDMATransmit`."
- `anchors`:
  - `p9`: "FCIIC_MasterDMATransmit : exclusive area 25"
- `aliases`: []

### TERM-FCIIC-MASTERDMAINIT
- `name`: "FCIIC_MasterDmaInit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterDmaInit`."
- `anchors`:
  - `p9`: "FCIIC_MasterDmaInit : exclusive area 22"
- `aliases`: []

### TERM-FCIIC-MASTERERRORHANDLER
- `name`: "FCIIC_MasterErrorHandler"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterErrorHandler`."
- `anchors`:
  - `p9`: "FCIIC_MasterErrorHandler : exclusive area 12"
- `aliases`: []

### TERM-FCIIC-MASTERSYNCRECEIVE
- `name`: "FCIIC_MasterSyncReceive"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterSyncReceive`."
- `anchors`:
  - `p9`: "FCIIC_MasterSyncReceive : exclusive area 6"
- `aliases`: []

### TERM-FCIIC-MASTERSYNCSEND
- `name`: "FCIIC_MasterSyncSend"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_MasterSyncSend`."
- `anchors`:
  - `p9`: "FCIIC_MasterSyncSend : exclusive area 5"
- `aliases`: []

### TERM-FCIIC-SLAVELISTENING
- `name`: "FCIIC_SlaveListening"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `FCIIC_SlaveListening`."
- `anchors`:
  - `p9`: "FCIIC_SlaveListening : exclusive area 9"
- `aliases`: []

### TERM-I2C-ASYNCTRANSMIT
- `name`: "I2c_AsyncTransmit"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `I2c_AsyncTransmit`."
- `anchors`:
  - `p12`: "I2c_AsyncTransmit"
- `aliases`: []

### TERM-I2C-DEINIT
- `name`: "I2c_DeInit"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `I2c_DeInit`."
- `anchors`:
  - `p12`: "I2c_DeInit"
- `aliases`: []

### TERM-I2C-GETSTATUS
- `name`: "I2c_GetStatus"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `I2c_GetStatus`."
- `anchors`:
  - `p12`: "I2c_GetStatus"
- `aliases`: []

### TERM-I2C-GETVERSIONINFO
- `name`: "I2c_GetVersionInfo"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `I2c_GetVersionInfo`."
- `anchors`:
  - `p12`: "I2c_GetVersionInfo"
- `aliases`: []

### TERM-I2C-MEMMAP
- `name`: "I2c_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `I2c_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/I2c_MemMap.h"
- `aliases`: []

### TERM-I2C-STARTLISTENING
- `name`: "I2c_StartListening"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `I2c_StartListening`."
- `anchors`:
  - `p12`: "I2c_StartListening"
- `aliases`: []

### TERM-I2C-SYNCTRANSMIT
- `name`: "I2c_SyncTransmit"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `I2c_SyncTransmit`."
- `anchors`:
  - `p12`: "I2c_SyncTransmit"
- `aliases`: []

### TERM-I2C-VERSION
- `name`: "I2c_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `I2c_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/I2c/include/I2c_version.h"
- `aliases`: []

### TERM-INTER-INTEGRATED-CIRCUIT-I2C-COMPLEX-DEVICE-DRIVER
- `name`: "Inter-Integrated Circuit / I2C Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Inter-Integrated Circuit / I2C Complex Device Driver`."
- `anchors`:
  - `p1`: "Inter-Integrated Circuit / I2C Complex Device Driver"
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

### ALIAS-I2C
- `canonical`: "I2C"
- `aliases`: ["Inter-Integrated Circuit / I2C Complex Device Driver", "I2C 总线 / 复杂设备驱动", "I2C module", "I2C driver", "I2C User Manual", "I2C Integration Manual", "I2c", "IIC", "Inter-Integrated Circuit", "FCIIC", "FCI2C", "I2C CDD", "I2C 总线"]
- `related_ids`: ["TERM-I2C"]

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

### ALIAS-I2C-TRANSFER
- `canonical`: "I2C transfer"
- `aliases`: ["SyncTransmit", "AsyncTransmit", "I2c_SyncTransmit", "I2c_AsyncTransmit", "StartListening"]
- `related_ids`: []

### ALIAS-I2C-MASTER-SLAVE
- `canonical`: "I2C master/slave"
- `aliases`: ["master mode", "slave mode", "I2cMasterConfiguration", "I2cSlaveConfiguration"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between I2C_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `I2C_Integration_Manual.pdf`
- `source_pdf_sha256`: `1719f8637bbf9d0552c5b0e6eeeb20b26307078704ea74e49e9efd9ed85d5a7d`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `78`
- `technical_missing_terms_added`: `7`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `78`
- `supplemented_missing_technical_token_count`: `7`
- `supplemented_physical_pages_count`: `14`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "1.0"
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
  - "Port"
  - "Proprietary"
  - "SCL"
  - "SDA"
  - "basic"
  - "build"
  - "buses"
  - "channel"
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
  - "reference"
  - "relevant"
  - "reporting"
  - "should"
  - "some"
  - "status"
  - "unprotect"
  - "use"
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

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "define"
  - "example"
  - "notification"

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
  - "notification"
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
- `physical_pages`: `3,5,6,11,12,13`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001"]
- `message`: "6 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
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
- `section_index_count`: `25`
- `table_index_count`: `9`
- `figure_index_count`: `0`
- `symbol_index_count`: `149`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `1719f8637bbf9d0552c5b0e6eeeb20b26307078704ea74e49e9efd9ed85d5a7d`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `78`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
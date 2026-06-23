---
manifest_schema_version: "1.1"
source_pdf: "MSC_Integration_Manual.pdf"
source_pdf_sha256: "060f8c643f4e3e899ddae77481b2a85996e26f1c5e3cc1805b785b508724a94c"
source_pdf_size_bytes: 1011569
pdf_page_count: 15
generated_at: "2026-06-19T13:25:54Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: MSC_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `MSC_Integration_Manual.pdf`
- `source_pdf_sha256`: `060f8c643f4e3e899ddae77481b2a85996e26f1c5e3cc1805b785b508724a94c`
- `source_pdf_size_bytes`: `1011569`
- `pdf_page_count`: `15`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx MSC Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/10/20 / Initial release for MCAL V0.3.0`
- `generated_at`: `2026-06-19T13:25:54Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `21`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL MSC module - Integration Manual"
- `module_scope`: "MSC module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["MSC", "Micro Second Channel Complex Device Driver", "Vendor-specific CDD / AUTOSAR Classic Platform guidance", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Msc", "CDD_Msc", "MscChannel", "MscFrame", "Pwm"]
- `summary`: "This 15-page integration manual indexes MSC content across source physical pages 1-15, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["MSC", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx MSC Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["MSC", "FC7xxx", "MCAL", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["MSC", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["MSC", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["MSC", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["MSC", "Msc", "CDD_Msc", "Pwm", "Trgsel", "Src", "include", "required"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Msc", "MSC", "CDD_Msc", "Pwm", "Trgsel", "Src", "include", "required"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Msc", "MSC", "CDD_Msc", "Pwm", "Trgsel", "Src", "include", "required"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["MSC", "Msc", "Src", "include", "ins", "tresos", "plug", "folder"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["MSC", "These", "UNSPECIFIED", "MSC_START_SEC_VAR", "MSC_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["MSC", "These", "UNSPECIFIED", "MSC_START_SEC_VAR", "MSC_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["MSC", "CDD_Msc", "Msc_LLD_SwitchEN", "Msc_GetRxStatus16BitFrame", "Msc_GetRxStatus", "Msc_LLD_SetDataFrame", "Msc_LLD_GetRxStatus", "Msc_LLD_SwitchSDIChannel"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MSC", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "MSC0", "MSC0_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["MSC", "MSC_E_UNINIT", "MSC_E_INVALID_CHANNEL", "MSC_E_INVALID_POINTER", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "MSC_E_CHANNEL_NOT_STARTED", "FC7xxx"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["MSC", "MSC_E_UNINIT", "MSC_E_INVALID_CHANNEL", "MSC_E_INVALID_POINTER", "MSC_E_CHANNEL_NOT_STARTED", "MSC_E_STATE_TRANSITION", "MSC_E_CONFIG_VALUE", "FC7xxx"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["MSC", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "Msc_SwitchEN", "FC7xxx", "MSC_E_UNINIT", "MSC_E_INVALID_CHANNEL", "MSC_E_TX_BUSY"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "Msc", "initialized", "Msc_Init", "Calls", "MCU", "before", "Msc_Configuration"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "Msc", "initialized", "Msc_Init", "Calls", "MCU", "before", "Msc_Configuration"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "Msc", "initialized", "Msc_Init", "Calls", "MCU", "before", "Msc_Configuration"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "Msc", "initialized", "Msc_Init", "Calls", "MCU", "before", "Msc_Configuration"]
- `anchor`: "7.3"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["MSC", "AUTOSAR_OS_NOT_USED", "ISR", "Msc_Isr_MSC_0", "FC7xxx", "USE_SW_VECTOR_MODE", "MSC0_IRQHandler", "Notification"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["MSC", "AUTOSAR_OS_NOT_USED", "ISR", "Msc_Isr_MSC_0", "FC7xxx", "USE_SW_VECTOR_MODE", "MSC0_IRQHandler", "Notification"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["MSC", "AUTOSAR_OS_NOT_USED", "ISR", "Msc_Isr_MSC_0", "FC7xxx", "USE_SW_VECTOR_MODE", "MSC0_IRQHandler", "Notification"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["MSC", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the MSC module."]

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
- `anchors`: ["_MCAL/Src/Common/include/Mcal.h", "_MCAL/Src/Common/include/Std_Types.h", "_MCAL/Src/Common/include/Platform_Types.h", "_MCAL/Src/Common/include/Compiler.h"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "MSC_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "MSC module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the MSC driver:", "CDD_Msc.c:"]

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
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `anchors`: ["Msc_SwitchEN", "MSC_E_UNINIT;", "MSC_E_INVALID_CHANNEL;", "MSC_E_TX_BUSY;"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "MSC shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this…"]

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
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the MSC module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx MSC Integration Manual"
- `keywords`: ["MSC", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx MSC Integration Manual; Revision History; 0.1"
- `keywords`: ["MSC", "FC7xxx", "MCAL", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx MSC Integration Manual; Table of Contents; Chapter 1 Introduction .................................................................................................................................................... 4"
- `keywords`: ["MSC", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx MSC Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["MSC", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the MSC module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx MSC Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Msc", "MSC", "CDD_Msc", "Pwm", "Trgsel", "Src", "include", "required", "provides", "CDD_Msc_LLD"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx MSC Integration Manual; _MCAL/Src/Common/include/Mcal.h; _MCAL/Src/Common/include/Std_Types.h"
- `keywords`: ["MSC", "Msc", "Src", "include", "ins", "tresos", "plug", "folder", "FC7xxx", "Std_Types"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mcal.h"
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"
  - `p6`: "_MCAL/Src/Common/include/Compiler.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx MSC Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["MSC", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx MSC Integration Manual; Section Name; Section Type"
- `keywords`: ["MSC", "MSC_START_SEC_VAR", "MSC_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "initialized", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "MSC_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx MSC Integration Manual; Chapter 4 Exclusive Area; MSC module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["MSC", "CDD_Msc", "Msc_LLD_SwitchEN", "Msc_GetRxStatus16BitFrame", "Msc_GetRxStatus", "Msc_LLD_SetDataFrame", "Msc_LLD_GetRxStatus", "Msc_LLD_SwitchSDIChannel", "FC7xxx", "SchM"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "MSC module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the MSC driver:"
  - `p9`: "CDD_Msc.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx MSC Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["MSC", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "MSC0", "MSC0_IRQHandler", "MSC1", "MSC1_IRQHandler"]
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
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx MSC Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["MSC", "MSC_E_UNINIT", "MSC_E_INVALID_CHANNEL", "MSC_E_INVALID_POINTER", "MSC_E_CHANNEL_NOT_STARTED", "MSC_E_STATE_TRANSITION", "MSC_E_CONFIG_VALUE", "FC7xxx", "Msc_Init", "MSC_E_ALREADY_INITIALIZED"]
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
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx MSC Integration Manual; Msc_SwitchEN; MSC_E_UNINIT;"
- `keywords`: ["MSC", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "Msc_SwitchEN", "FC7xxx", "MSC_E_UNINIT", "MSC_E_INVALID_CHANNEL", "MSC_E_TX_BUSY", "Msc_GetVersionInfo", "MSC_E_INVALID_POINTER"]
- `anchors`:
  - `p12`: "Msc_SwitchEN"
  - `p12`: "MSC_E_UNINIT;"
  - `p12`: "MSC_E_INVALID_CHANNEL;"
  - `p12`: "MSC_E_TX_BUSY;"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx MSC Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["MSC", "Msc", "initialized", "Msc_Init", "Calls", "MCU", "before", "Msc_Configuration", "transmission", "MSC_CHANNEL"]
- `anchors`:
  - `p13`: "Chapter 7 Function Calls"
  - `p13`: "7.1"
  - `p13`: "Function Calls during Startup"
  - `p13`: "MSC shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is Msc_Init(). The MCU module"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx MSC Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["MSC", "AUTOSAR_OS_NOT_USED", "ISR", "Msc_Isr_MSC_0", "FC7xxx", "USE_SW_VECTOR_MODE", "MSC0_IRQHandler", "Notification", "Callback", "Callout"]
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
- `summary`: "Chapter 9 Integration Steps: FC7xxx MSC Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["MSC", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p15`: "Chapter 9 Integration Steps"
  - `p15`: "1)"
  - `p15`: "Configure the MSC module and generate configuration files (please refer to Building chapter for details)."
  - `p15`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[36.24, 101.64, 559.08, 141.54]`
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
- `key_fields`: ["MSC", "Calls", "FC7xxx", "ISR", "Integration"]
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
- `key_fields`: ["Msc", "MSC", "CDD_Msc", "Pwm", "Trgsel"]
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
- `key_fields`: ["MSC", "Msc", "Src", "include", "ins"]
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
- `bbox`: `[36.24, 123.12, 559.08, 787.14]`
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
- `bbox`: `[36.24, 37.27, 559.08, 156.78]`
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
- `bbox`: `[36.24, 102.48, 559.08, 154.74]`
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
- `bbox`: `[36.24, 123.1, 559.08, 772.76]`
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
- `bbox`: `[36.22, 37.0, 559.1, 106.04]`
- `key_fields`: ["Msc_SwitchEN", "MSC_E_UNINIT; MSC_E_INVALID_CHANNEL; MS…"]
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
- `bbox`: `[36.22, 150.1, 559.1, 373.88]`
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
- `key_fields`: ["MSC", "Msc", "initialized", "Msc_Init", "Calls"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-MSC-INIT
- `name`: "Msc_Init"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12,13`
- `brief`: "api index entry for `Msc_Init`."
- `anchors`:
  - `p11`: "Msc_Init"
  - `p12`: "Msc_Init"
  - `p13`: "MSC shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is Msc_Init(). The MCU module"
- `aliases`: []

### API-MSC-STARTCHANNEL
- `name`: "Msc_StartChannel"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12,13`
- `brief`: "api index entry for `Msc_StartChannel`."
- `anchors`:
  - `p11`: "Msc_StartChannel"
  - `p12`: "Msc_StartChannel"
  - `p13`: "Msc_StartChannel(MSC_CHANNEL): which start the transmission on MSC TX."
- `aliases`: []

### API-MSC-STOPCHANNEL
- `name`: "Msc_StopChannel"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12,13`
- `brief`: "api index entry for `Msc_StopChannel`."
- `anchors`:
  - `p11`: "Msc_StopChannel"
  - `p12`: "Msc_StopChannel"
  - `p13`: "Msc_StopChannel(MSC_CHANNEL): which stop the transmission on MSC TX."
- `aliases`: []

### API-MSC0-IRQHANDLER
- `name`: "MSC0_IRQHandler"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,14`
- `brief`: "api index entry for `MSC0_IRQHandler`."
- `anchors`:
  - `p10`: "MSC0_IRQHandler"
  - `p14`: "void MSC0_IRQHandler(void)"
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

### API-MSC-ISR-MSC-0
- `name`: "Msc_Isr_MSC_0"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "api index entry for `Msc_Isr_MSC_0`."
- `anchors`:
  - `p14`: "extern ISR(Msc_Isr_MSC_0);"
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
  - `p9`: "MSC module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
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

### CFG-MSC-SWITCHSDICHANNEL
- `name`: "Msc_SwitchSDIChannel"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "config index entry for `Msc_SwitchSDIChannel`."
- `anchors`:
  - `p11`: "Msc_SwitchSDIChannel"
  - `p12`: "Msc_SwitchSDIChannel"
- `aliases`: []

### CFG-MSC-CONFIGURATION
- `name`: "Msc_Configuration"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Msc_Configuration`."
- `anchors`:
  - `p13`: "should be initialized before the MSC is initialized. The MSC module shall be initialized by Msc_Init(<&Msc_Configuration>)"
- `aliases`: []

### CFG-MSC-LLD-SWITCHSDICHANNEL
- `name`: "Msc_LLD_SwitchSDIChannel"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Msc_LLD_SwitchSDIChannel`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_16 is used in Msc_LLD_SwitchSDIChannel."
- `aliases`: []

### CFG-MSC-LLD-STARTCHANNEL
- `name`: "Msc_LLD_StartChannel"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Msc_LLD_StartChannel`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_04 is used in Msc_LLD_StartChannel."
- `aliases`: []

### CFG-MSC-LLD-STOPCHANNEL
- `name`: "Msc_LLD_StopChannel"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Msc_LLD_StopChannel`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_05 is used in Msc_LLD_StopChannel."
- `aliases`: []

### MACRO-MSC-E-INVALID-CHANNEL
- `name`: "MSC_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MSC_E_INVALID_CHANNEL`."
- `anchors`:
  - `p11`: "MSC_E_INVALID_CHANNEL;"
  - `p12`: "MSC_E_INVALID_CHANNEL;"
- `aliases`: []

### MACRO-MSC-E-UNINIT
- `name`: "MSC_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MSC_E_UNINIT`."
- `anchors`:
  - `p11`: "MSC_E_UNINIT;"
  - `p12`: "MSC_E_UNINIT;"
- `aliases`: []

### MACRO-MSC-E-INVALID-POINTER
- `name`: "MSC_E_INVALID_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MSC_E_INVALID_POINTER`."
- `anchors`:
  - `p11`: "MSC_E_INVALID_POINTER;"
  - `p12`: "MSC_E_INVALID_POINTER;"
- `aliases`: []

### MACRO-MSC-E-TX-BUSY
- `name`: "MSC_E_TX_BUSY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MSC_E_TX_BUSY`."
- `anchors`:
  - `p11`: "MSC_E_TX_BUSY;"
  - `p12`: "MSC_E_TX_BUSY;"
- `aliases`: []

### MACRO-DEM-EVENT-STATUS-FAILED
- `name`: "DEM_EVENT_STATUS_FAILED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `DEM_EVENT_STATUS_FAILED`."
- `anchors`:
  - `p12`: "DEM_EVENT_STATUS_FAILED;"
- `aliases`: []

### MACRO-DEM-EVENT-STATUS-PASSED
- `name`: "DEM_EVENT_STATUS_PASSED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `DEM_EVENT_STATUS_PASSED`."
- `anchors`:
  - `p12`: "DEM_EVENT_STATUS_PASSED;"
- `aliases`: []

### MACRO-MSC-E-CHANNEL-NOT-STARTED
- `name`: "MSC_E_CHANNEL_NOT_STARTED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_CHANNEL_NOT_STARTED`."
- `anchors`:
  - `p11`: "MSC_E_CHANNEL_NOT_STARTED;"
- `aliases`: []

### MACRO-MSC-START-SEC-VAR
- `name`: "MSC_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_START_SEC_VAR`."
- `anchors`:
  - `p8`: "MSC_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-MSC-STOP-SEC-VAR
- `name`: "MSC_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "MSC_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p14`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-MSC-CHANNEL
- `name`: "MSC_CHANNEL"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `MSC_CHANNEL`."
- `anchors`:
  - `p13`: "Msc_StopChannel(MSC_CHANNEL): which stop the transmission on MSC TX."
- `aliases`: []

### MACRO-MSC-E-CONFIG-VALUE
- `name`: "MSC_E_CONFIG_VALUE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_CONFIG_VALUE`."
- `anchors`:
  - `p11`: "MSC_E_CONFIG_VALUE;"
- `aliases`: []

### MACRO-MSC-E-STATE-TRANSITION
- `name`: "MSC_E_STATE_TRANSITION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_STATE_TRANSITION`."
- `anchors`:
  - `p11`: "MSC_E_STATE_TRANSITION;"
- `aliases`: []

### MACRO-MSC-START-SEC-CODE
- `name`: "MSC_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CODE`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CODE"
- `aliases`: []

### MACRO-MSC-START-SEC-CODE-AC
- `name`: "MSC_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-MSC-START-SEC-CONFIG-DATA-16
- `name`: "MSC_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-MSC-START-SEC-CONFIG-DATA-32
- `name`: "MSC_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-MSC-START-SEC-CONFIG-DATA-8
- `name`: "MSC_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-MSC-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "MSC_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-MSC-START-SEC-CONST-16
- `name`: "MSC_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONST_16"
- `aliases`: []

### MACRO-MSC-START-SEC-CONST-32
- `name`: "MSC_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONST_32"
- `aliases`: []

### MACRO-MSC-START-SEC-CONST-8
- `name`: "MSC_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONST_8"
- `aliases`: []

### MACRO-MSC-START-SEC-CONST-BOOLEAN
- `name`: "MSC_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-MSC-START-SEC-VAR-NO-INIT-16
- `name`: "MSC_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-MSC-START-SEC-VAR-NO-INIT-32
- `name`: "MSC_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-MSC-START-SEC-VAR-NO-INIT-8
- `name`: "MSC_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-MSC-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "MSC_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CODE
- `name`: "MSC_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CODE"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CODE-AC
- `name`: "MSC_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONFIG-DATA-16
- `name`: "MSC_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONFIG-DATA-32
- `name`: "MSC_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONFIG-DATA-8
- `name`: "MSC_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "MSC_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONST-16
- `name`: "MSC_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONST-32
- `name`: "MSC_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONST-8
- `name`: "MSC_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-MSC-STOP-SEC-CONST-BOOLEAN
- `name`: "MSC_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-MSC-STOP-SEC-VAR-NO-INIT-16
- `name`: "MSC_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-MSC-STOP-SEC-VAR-NO-INIT-32
- `name`: "MSC_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-MSC-STOP-SEC-VAR-NO-INIT-8
- `name`: "MSC_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-MSC-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "MSC_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-00
- `name`: "MSC_EXCLUSIVE_AREA_00"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_00 is used in Msc_LLD_Init."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-01
- `name`: "MSC_EXCLUSIVE_AREA_01"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_01 is used in Msc_LLD_DeInit."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-02
- `name`: "MSC_EXCLUSIVE_AREA_02"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_02 is used in Msc_LLD_SetDataFrame."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-03
- `name`: "MSC_EXCLUSIVE_AREA_03"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_03 is used in Msc_LLD_SetDataFrame."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-04
- `name`: "MSC_EXCLUSIVE_AREA_04"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_04 is used in Msc_LLD_StartChannel."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-05
- `name`: "MSC_EXCLUSIVE_AREA_05"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_05 is used in Msc_LLD_StopChannel."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-06
- `name`: "MSC_EXCLUSIVE_AREA_06"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_06 is used in Msc_LLD_SendCommandFrame."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-07
- `name`: "MSC_EXCLUSIVE_AREA_07"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_07`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_07 is used in Msc_LLD_GetTxStatus."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-08
- `name`: "MSC_EXCLUSIVE_AREA_08"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_08`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_08 is used in Msc_LLD_GetRxStatus."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-09
- `name`: "MSC_EXCLUSIVE_AREA_09"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_09`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_09 is used in Msc_LLD_GetRxStatus."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-10
- `name`: "MSC_EXCLUSIVE_AREA_10"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_10`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_10 is used in Msc_LLD_GetRxErrorStatus."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-11
- `name`: "MSC_EXCLUSIVE_AREA_11"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_11`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_11 is used in Msc_GetRxStatus."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-12
- `name`: "MSC_EXCLUSIVE_AREA_12"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_12`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_12 is used in Msc_GetRxStatus16BitFrame."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-13
- `name`: "MSC_EXCLUSIVE_AREA_13"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_13`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_13 is used in Msc_GetRxStatus16BitFrame."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-14
- `name`: "MSC_EXCLUSIVE_AREA_14"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_14`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_14 is used in Msc_GetRxStatus."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-15
- `name`: "MSC_EXCLUSIVE_AREA_15"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_15`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_15 is used in Msc_GetRxStatus16BitFrame."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-16
- `name`: "MSC_EXCLUSIVE_AREA_16"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_16`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_16 is used in Msc_LLD_SwitchSDIChannel."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-17
- `name`: "MSC_EXCLUSIVE_AREA_17"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_17`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_17 is used in Msc_LLD_SwitchSDIChannel."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-18
- `name`: "MSC_EXCLUSIVE_AREA_18"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_18`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_18 is used in Msc_LLD_SwitchEN."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-19
- `name`: "MSC_EXCLUSIVE_AREA_19"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_19`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_19 is used in Msc_LLD_SwitchEN."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-20
- `name`: "MSC_EXCLUSIVE_AREA_20"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_20`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_20 is used in Msc_LLD_SwitchEN."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-21
- `name`: "MSC_EXCLUSIVE_AREA_21"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_21`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_21 is used in Msc_LLD_SwitchEN."
- `aliases`: []

### MACRO-MSC-EXCLUSIVE-AREA-22
- `name`: "MSC_EXCLUSIVE_AREA_22"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_EXCLUSIVE_AREA_22`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_22 is used in Msc_LLD_SwitchEN."
- `aliases`: []

### MACRO-MSC-E-ALREADY-INITIALIZED
- `name`: "MSC_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "MSC_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-MSC-E-CHANNEL-ACTIVE
- `name`: "MSC_E_CHANNEL_ACTIVE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_CHANNEL_ACTIVE`."
- `anchors`:
  - `p11`: "MSC_E_CHANNEL_ACTIVE;"
- `aliases`: []

### MACRO-MSC-E-INVALID-RXINDEX
- `name`: "MSC_E_INVALID_RXINDEX"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_INVALID_RXINDEX`."
- `anchors`:
  - `p11`: "MSC_E_INVALID_RXINDEX;"
- `aliases`: []

### MACRO-MSC-E-PARAM-VALUE
- `name`: "MSC_E_PARAM_VALUE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_PARAM_VALUE`."
- `anchors`:
  - `p11`: "MSC_E_PARAM_VALUE;"
- `aliases`: []

### MACRO-MSC-E-RX-BUSY
- `name`: "MSC_E_RX_BUSY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_RX_BUSY`."
- `anchors`:
  - `p11`: "MSC_E_RX_BUSY;"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p14`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to the"
- `aliases`: []

### MEM-MSC-START-SEC-VAR
- `name`: "MSC_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR
- `name`: "MSC_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MSC-START-SEC
- `name`: "MSC_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-MSC-START-SEC-CONST
- `name`: "MSC_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-MSC-START-SEC-CONST-UNSPECIFIED
- `name`: "MSC_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MSC_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-MSC-START-SEC-RAMCODE
- `name`: "MSC_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "MSC_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-INIT-16
- `name`: "MSC_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "MSC_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-INIT-32
- `name`: "MSC_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "MSC_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-INIT-8
- `name`: "MSC_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-INIT-BOOLEAN
- `name`: "MSC_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "MSC_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "MSC_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-NO-INIT
- `name`: "MSC_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MSC-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "MSC_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MSC_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MSC-STOP-SEC
- `name`: "MSC_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-MSC-STOP-SEC-CONST
- `name`: "MSC_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-MSC-STOP-SEC-CONST-UNSPECIFIED
- `name`: "MSC_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-MSC-STOP-SEC-RAMCODE
- `name`: "MSC_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-INIT-16
- `name`: "MSC_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "MSC_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-INIT-32
- `name`: "MSC_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "MSC_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-INIT-8
- `name`: "MSC_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "MSC_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "MSC_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "MSC_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-NO-INIT
- `name`: "MSC_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MSC-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "MSC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MSC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MSC_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-CDD-MSC-C
- `name`: "CDD_Msc.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `CDD_Msc.c`."
- `anchors`:
  - `p9`: "CDD_Msc.c:"
- `aliases`: []

### FILE-CDD-MSC-LLD-C
- `name`: "CDD_Msc_LLD.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `CDD_Msc_LLD.c`."
- `anchors`:
  - `p9`: "CDD_Msc_LLD.c:"
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

### FILE-SCHM-MSC-H
- `name`: "SchM_Msc.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Msc.h`."
- `anchors`:
  - `p6`: "SchM_Msc.h"
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
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mcal.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mcal.h"
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
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Std_Types.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-MSC-SRC-CDD-MSC-C
- `name`: "_MCAL/Src/Msc/Src/CDD_Msc.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/Src/CDD_Msc.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/Src/CDD_Msc.c"
- `aliases`: []

### FILE-MCAL-SRC-MSC-SRC-CDD-MSC-IRQ-C
- `name`: "_MCAL/Src/Msc/Src/CDD_Msc_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/Src/CDD_Msc_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/Src/CDD_Msc_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-H
- `name`: "_MCAL/Src/Msc/include/CDD_Msc.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc.h"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-HW-H
- `name`: "_MCAL/Src/Msc/include/CDD_Msc_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-LLD-C
- `name`: "_MCAL/Src/Msc/include/CDD_Msc_LLD.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc_LLD.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_LLD.c"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-LLD-H
- `name`: "_MCAL/Src/Msc/include/CDD_Msc_LLD.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc_LLD.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_LLD.h"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-MEMMAP-H
- `name`: "_MCAL/Src/Msc/include/CDD_Msc_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-REG-H
- `name`: "_MCAL/Src/Msc/include/CDD_Msc_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-MSC-INCLUDE-CDD-MSC-VERSION-H
- `name`: "_MCAL/Src/Msc/include/CDD_Msc_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Msc/include/CDD_Msc_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-MSC-CFG-H
- `name`: "_MCAL_generate/include/CDD_Msc_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_Msc_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Msc_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-MSC-PBCFG-H
- `name`: "_MCAL_generate/include/CDD_Msc_PBcfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_Msc_PBcfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Msc_PBcfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-MSC-CFG-C
- `name`: "_MCAL_generate/src/CDD_Msc_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Msc_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Msc_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-MSC-PBCFG-C
- `name`: "_MCAL_generate/src/CDD_Msc_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Msc_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Msc_PBcfg.c"
- `aliases`: []

### TERM-MSC
- `name`: "MSC"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `MSC`."
- `anchors`:
  - `p1`: "MSC"
  - `p2`: "MSC"
  - `p3`: "MSC"
  - `p4`: "MSC"
  - `p5`: "MSC"
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

### TERM-MSC-GETRXSTATUS16BITFRAME
- `name`: "Msc_GetRxStatus16BitFrame"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Msc_GetRxStatus16BitFrame`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_12 is used in Msc_GetRxStatus16BitFrame."
  - `p11`: "Msc_GetRxStatus16BitFrame"
- `aliases`: []

### TERM-CDD-MSC-LLD
- `name`: "CDD_Msc_LLD"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `CDD_Msc_LLD`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_LLD.c"
  - `p9`: "CDD_Msc_LLD.c:"
- `aliases`: []

### TERM-MSC-GETRXSTATUS
- `name`: "Msc_GetRxStatus"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Msc_GetRxStatus`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_11 is used in Msc_GetRxStatus."
  - `p11`: "Msc_GetRxStatus"
- `aliases`: []

### TERM-MSC-DEINIT
- `name`: "Msc_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "term index entry for `Msc_DeInit`."
- `anchors`:
  - `p11`: "Msc_DeInit"
  - `p12`: "Msc_DeInit"
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

### TERM-MSC-LLD-SWITCHEN
- `name`: "Msc_LLD_SwitchEN"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_SwitchEN`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_18 is used in Msc_LLD_SwitchEN."
- `aliases`: []

### TERM-CDD-MSC-CFG
- `name`: "CDD_Msc_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Msc_Cfg.c"
- `aliases`: []

### TERM-CDD-MSC-PBCFG
- `name`: "CDD_Msc_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Msc_PBcfg.c"
- `aliases`: []

### TERM-MSC-LLD-GETRXSTATUS
- `name`: "Msc_LLD_GetRxStatus"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_GetRxStatus`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_08 is used in Msc_LLD_GetRxStatus."
- `aliases`: []

### TERM-MSC-LLD-SETDATAFRAME
- `name`: "Msc_LLD_SetDataFrame"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_SetDataFrame`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_02 is used in Msc_LLD_SetDataFrame."
- `aliases`: []

### TERM-MSC-SWITCHEN
- `name`: "Msc_SwitchEN"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Msc_SwitchEN`."
- `anchors`:
  - `p12`: "Msc_SwitchEN"
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

### TERM-CDD-MSC-HW
- `name`: "CDD_Msc_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_Hw.h"
- `aliases`: []

### TERM-CDD-MSC-IRQ
- `name`: "CDD_Msc_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/Src/CDD_Msc_Irq.c"
- `aliases`: []

### TERM-CDD-MSC-MEMMAP
- `name`: "CDD_Msc_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_MemMap.h"
- `aliases`: []

### TERM-CDD-MSC-REG
- `name`: "CDD_Msc_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_Reg.h"
- `aliases`: []

### TERM-CDD-MSC-VERSION
- `name`: "CDD_Msc_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Msc_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Msc/include/CDD_Msc_version.h"
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
  - `p6`: "Copy the MSC module(_MCAL/EB_Plugins/eclipse/plugins/Msc) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-MSC1-IRQHANDLER
- `name`: "MSC1_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `MSC1_IRQHandler`."
- `anchors`:
  - `p10`: "MSC1_IRQHandler"
- `aliases`: []

### TERM-MICRO-SECOND-CHANNEL-COMPLEX-DEVICE-DRIVER
- `name`: "Micro Second Channel Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Micro Second Channel Complex Device Driver`."
- `anchors`:
  - `p1`: "Micro Second Channel Complex Device Driver"
- `aliases`: []

### TERM-MSC-GETTXSTATUS
- `name`: "Msc_GetTxStatus"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Msc_GetTxStatus`."
- `anchors`:
  - `p11`: "Msc_GetTxStatus"
- `aliases`: []

### TERM-MSC-GETVERSIONINFO
- `name`: "Msc_GetVersionInfo"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Msc_GetVersionInfo`."
- `anchors`:
  - `p12`: "Msc_GetVersionInfo"
- `aliases`: []

### TERM-MSC-LLD-DEINIT
- `name`: "Msc_LLD_DeInit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_DeInit`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_01 is used in Msc_LLD_DeInit."
- `aliases`: []

### TERM-MSC-LLD-GETRXERRORSTATUS
- `name`: "Msc_LLD_GetRxErrorStatus"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_GetRxErrorStatus`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_10 is used in Msc_LLD_GetRxErrorStatus."
- `aliases`: []

### TERM-MSC-LLD-GETTXSTATUS
- `name`: "Msc_LLD_GetTxStatus"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_GetTxStatus`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_07 is used in Msc_LLD_GetTxStatus."
- `aliases`: []

### TERM-MSC-LLD-INIT
- `name`: "Msc_LLD_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_Init`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_00 is used in Msc_LLD_Init."
- `aliases`: []

### TERM-MSC-LLD-SENDCOMMANDFRAME
- `name`: "Msc_LLD_SendCommandFrame"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Msc_LLD_SendCommandFrame`."
- `anchors`:
  - `p9`: "MSC_EXCLUSIVE_AREA_06 is used in Msc_LLD_SendCommandFrame."
- `aliases`: []

### TERM-MSC-SENDCOMMANDFRAME
- `name`: "Msc_SendCommandFrame"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Msc_SendCommandFrame`."
- `anchors`:
  - `p11`: "Msc_SendCommandFrame"
- `aliases`: []

### TERM-MSC-SENDDATAFRAME
- `name`: "Msc_SendDataFrame"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Msc_SendDataFrame`."
- `anchors`:
  - `p11`: "Msc_SendDataFrame"
- `aliases`: []

### TERM-MSC-SETDATAFRAME
- `name`: "Msc_SetDataFrame"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Msc_SetDataFrame`."
- `anchors`:
  - `p11`: "Msc_SetDataFrame"
- `aliases`: []

### TERM-SCHM-MSC
- `name`: "SchM_Msc"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Msc`."
- `anchors`:
  - `p6`: "SchM_Msc.h"
- `aliases`: []

### TERM-STD-TYPES
- `name`: "Std_Types"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Std_Types`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

## 9. Search Aliases

### ALIAS-MSC
- `canonical`: "MSC"
- `aliases`: ["Micro Second Channel Complex Device Driver", "MSC 微秒通道 / 外部功率器件串行接口复杂驱动", "MSC module", "MSC driver", "MSC User Manual", "MSC Integration Manual", "Msc", "CDD_Msc", "Micro Second Channel", "MSC模块", "微秒通道"]
- `related_ids`: ["TERM-MSC"]

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

### ALIAS-MSC-FRAME
- `canonical`: "MSC frame"
- `aliases`: ["command frame", "data frame", "passive frame", "downstream channel", "upstream channel", "MSC帧"]
- `related_ids`: []

### ALIAS-MSC-CHANNEL
- `canonical`: "MSC channel"
- `aliases`: ["Msc_ChannelConfigType", "MscGlobalConfig", "MscGeneral", "MscChannel", "channel demo", "MSC通道"]
- `related_ids`: []

### ALIAS-MSC-TRIGGER
- `canonical`: "MSC trigger"
- `aliases`: ["Trgsel", "PWM trigger", "trigger mode", "repetition mode", "Pwm reference"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between MSC_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `MSC_Integration_Manual.pdf`
- `source_pdf_sha256`: `060f8c643f4e3e899ddae77481b2a85996e26f1c5e3cc1805b785b508724a94c`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `103`
- `technical_missing_terms_added`: `9`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `103`
- `supplemented_missing_technical_token_count`: `9`
- `supplemented_physical_pages_count`: `14`
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
  - "Ecuc"
  - "Flagchip"
  - "Mcu"
  - "PORT"
  - "Port"
  - "Proprietary"
  - "assign"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "clock"
  - "common"
  - "configurations"
  - "detection"
  - "enabling"
  - "etc"
  - "failure"
  - "first"
  - "hardware"
  - "initialize"
  - "interrupts"
  - "modules"
  - "msc"
  - "mudule"
  - "necessary"
  - "other"
  - "out"
  - "output"
  - "parameters"
  - "partition"
  - "parts"
  - "pin"
  - "pins"
  - "point"
  - "pointers"
  - "port"
  - "production"
  - "protect"
  - "pwm"
  - "range"
  - "routing"
  - "selecting"
  - "signal"
  - "signaling"
  - "signals"
  - "some"
  - "through"
  - "tracing"
  - "unprotect"
  - "use"
  - "want"

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
  - "variables"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
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
  - "After"
  - "Confidential"
  - "Flagchip"
  - "GPIO"
  - "PORT"
  - "Proprietary"
  - "There"
  - "also"
  - "assigned"
  - "connection"
  - "desired"
  - "done"
  - "each"
  - "modules"
  - "peripherals"
  - "pins"
  - "prior"
  - "procedure"
  - "properly"
  - "service"
  - "shutdown"
  - "that"
  - "well"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "There"
  - "callback"
  - "callout"
  - "define"
  - "example"
  - "functions"
  - "within"

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
- `physical_pages`: `3,5,6,10,11,12,12,13`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0012-002", "TBL-0013-001"]
- `message`: "8 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
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
- `section_index_count`: `24`
- `table_index_count`: `11`
- `figure_index_count`: `0`
- `symbol_index_count`: `172`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `060f8c643f4e3e899ddae77481b2a85996e26f1c5e3cc1805b785b508724a94c`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `103`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->
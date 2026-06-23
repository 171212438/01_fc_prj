---
manifest_schema_version: "1.1"
source_pdf: "DIO_Integration_Manual.pdf"
source_pdf_sha256: "4181daa8f00519fa252d6dc23967034470687c8adbc060075d4b6513defe8bc8"
source_pdf_size_bytes: 325165
pdf_page_count: 14
generated_at: "2026-06-19T11:17:42Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.5.0"
source_document_id: null
source_document_revision: "Rev A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: DIO_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `DIO_Integration_Manual.pdf`
- `source_pdf_sha256`: `4181daa8f00519fa252d6dc23967034470687c8adbc060075d4b6513defe8bc8`
- `source_pdf_size_bytes`: `325165`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev A0`
- `visible_cover_title`: `FC7xxx DIO Integration Manual`
- `visible_cover_revision`: `Rev A0`
- `revision_history_latest_row`: `A0 / 2025/01/14 / Initial release`
- `generated_at`: `2026-06-19T11:17:42Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.5.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: FC7xxx AUTOSAR MCAL DIO module - Integration Manual
- `module_scope`: DIO integration dependencies, build files, plug-ins, memory map, exclusive areas, ISR handling, DET/DEM reporting and integration steps.
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements"]
- `key_terms`: ["DIO", "Digital Input/Output", "Digital I/O", "GPIO", "Dio driver", "DIO driver", "DIO module", "DioChannel", "DioPort", "DioChannelGroup", "Dio_ConfigType", "MCAL", "AUTOSAR", "EB tresos", "Rte", "Det"]
- `summary`: This 14-page document describes integration requirements for the FC7xxx DIO MCAL module, including dependencies, required compile files, EB tresos plug-in setup, memory sections, exclusive areas, ISR/function-call expectations, error reporting and integration steps.
- `retrieval_note`: Use Page Locator Map or Page Segment Index to locate a physical page, then verify exact identifiers, tables, screenshots and wording in the source PDF.

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: `Cover`
- `path`: `Cover`
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["DIO", "FC7xxx", "Integration"]
- `anchor`: `FC7xxx DIO Integration Manual`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["DIO", "Revision", "History", "FC7xxx", "Integration", "Changes", "Initial", "release"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["DIO", "Contents", "FC7xxx", "Integration", "Introduction", "Building", "Dependencies", "Required"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["DIO", "DIO module", "Introduction", "FC7xxx", "Integration", "describes", "requirements"]
- `anchor`: `Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction / 1.1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["DIO", "DIO module", "Introduction", "FC7xxx", "Integration", "describes", "requirements"]
- `anchor`: `Introduction`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Building`
- `path`: `Chapter 2 Building`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["_MCAL/Src/Dio/Src/Dio.c", "_MCAL/Src/Dio/Src/Dio_Hw.c", "_MCAL/Src/Dio/include/Dio.h", "_MCAL/Src/Dio/include/Dio_Hw.h", "_MCAL/Src/Dio/include/Dio_Hw_Types.h", "_MCAL/Src/Rte/include/Dio_MemMap.h", "_MCAL/Src/Dio/include/Dio_Reg.h", "_MCAL/Src/Dio/include/Dio_RegOps.h"]
- `anchor`: `Building`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Dependencies on Other Modules`
- `path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["_MCAL/Src/Dio/Src/Dio.c", "_MCAL/Src/Dio/Src/Dio_Hw.c", "_MCAL/Src/Dio/include/Dio.h", "_MCAL/Src/Dio/include/Dio_Hw.h", "_MCAL/Src/Dio/include/Dio_Hw_Types.h", "_MCAL/Src/Rte/include/Dio_MemMap.h", "_MCAL/Src/Dio/include/Dio_Reg.h", "_MCAL/Src/Dio/include/Dio_RegOps.h"]
- `anchor`: `Dependencies on Other Modules`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `Files Required for Compile`
- `path`: `Chapter 2 Building / 2.2 Files Required for Compile`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["_MCAL/Src/Dio/Src/Dio.c", "_MCAL/Src/Dio/Src/Dio_Hw.c", "_MCAL/Src/Dio/include/Dio.h", "_MCAL/Src/Dio/include/Dio_Hw.h", "_MCAL/Src/Dio/include/Dio_Hw_Types.h", "_MCAL/Src/Rte/include/Dio_MemMap.h", "_MCAL/Src/Dio/include/Dio_Reg.h", "_MCAL/Src/Dio/include/Dio_RegOps.h"]
- `anchor`: `Files Required for Compile`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Add Plug-ins`
- `path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["EB_Plugins", "DIO", "DIO module", "FC7xxx", "Integration", "developed", "tresos", "Studio"]
- `anchor`: `Add Plug-ins`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Memory`
- `path`: `Chapter 3 Memory`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["DIO_STOP_SEC_VAR_NO_INIT_16", "DIO_START_SEC_CONFIG_DATA_8", "DIO_STOP_SEC_CONFIG_DATA_8", "DIO_START_SEC_CONFIG_DATA_16", "DIO_STOP_SEC_CONFIG_DATA_16", "DIO_START_SEC_CONFIG_DATA_32", "DIO_STOP_SEC_CONFIG_DATA_32", "DIO_START_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchor`: `Memory`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Sections in Memory Map`
- `path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["DIO_STOP_SEC_VAR_NO_INIT_16", "DIO_START_SEC_CONFIG_DATA_8", "DIO_STOP_SEC_CONFIG_DATA_8", "DIO_START_SEC_CONFIG_DATA_16", "DIO_STOP_SEC_CONFIG_DATA_16", "DIO_START_SEC_CONFIG_DATA_32", "DIO_STOP_SEC_CONFIG_DATA_32", "DIO_START_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchor`: `Sections in Memory Map`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Exclusive Area`
- `path`: `Chapter 4 Exclusive Area`
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["DIO", "Dio driver", "DIO module", "Exclusive", "FC7xxx", "Integration", "services", "Schedule"]
- `anchor`: `Exclusive Area`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: `Interrupt Service Routine (ISR)`
- `path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["DIO", "Interrupt", "Service", "Routine", "ISR", "FC7xxx", "Integration"]
- `anchor`: `Interrupt Service Routine (ISR)`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: `Error Report`
- `path`: `Chapter 6 Error Report`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dio_ReadChannel", "DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel", "DIO_E_PARAM_LEVEL", "Dio_FlipChannel", "Dio_ReadPort", "DIO_E_PARAM_INVALID_PORT_ID", "Dio_WritePort"]
- `anchor`: `Error Report`

### SEC-006-001
- `source_number`: `6.1`
- `title`: `Det`
- `path`: `Chapter 6 Error Report / 6.1 Det`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dio_ReadChannel", "DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel", "DIO_E_PARAM_LEVEL", "Dio_FlipChannel", "Dio_ReadPort", "DIO_E_PARAM_INVALID_PORT_ID", "Dio_WritePort"]
- `anchor`: `Det`

### SEC-006-002
- `source_number`: `6.2`
- `title`: `Dem`
- `path`: `Chapter 6 Error Report / 6.2 Dem`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dio_ReadChannel", "DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel", "DIO_E_PARAM_LEVEL", "Dio_FlipChannel", "Dio_ReadPort", "DIO_E_PARAM_INVALID_PORT_ID", "Dio_WritePort"]
- `anchor`: `Dem`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: `Function Calls`
- `path`: `Chapter 7 Function Calls`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["DIO", "FC7xxx", "Integration", "Startup", "Shutdown", "Runtime"]
- `anchor`: `Function Calls`

### SEC-007-001
- `source_number`: `7.1`
- `title`: `Function Calls during Startup`
- `path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["DIO", "Startup", "FC7xxx", "Integration", "Shutdown", "Runtime"]
- `anchor`: `Function Calls during Startup`

### SEC-007-002
- `source_number`: `7.2`
- `title`: `Function Calls during Shutdown`
- `path`: `Chapter 7 Function Calls / 7.2 Function Calls during Shutdown`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["DIO", "Shutdown", "FC7xxx", "Integration", "Startup", "Runtime"]
- `anchor`: `Function Calls during Shutdown`

### SEC-007-003
- `source_number`: `7.3`
- `title`: `Function Calls during Wake-up`
- `path`: `Chapter 7 Function Calls / 7.3 Function Calls during Wake-up`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["DIO", "FC7xxx", "Integration", "Startup", "Shutdown", "Runtime"]
- `anchor`: `Function Calls during Wake-up`

### SEC-007-004
- `source_number`: `7.4`
- `title`: `Function Calls during Runtime`
- `path`: `Chapter 7 Function Calls / 7.4 Function Calls during Runtime`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["DIO", "Runtime", "FC7xxx", "Integration", "Startup", "Shutdown"]
- `anchor`: `Function Calls during Runtime`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: `Other Requirements`
- `path`: `Chapter 8 Other Requirements`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["DIO", "Requirements", "FC7xxx", "Integration", "Notification", "Callback", "Callout", "Macros"]
- `anchor`: `Other Requirements`

### SEC-008-001
- `source_number`: `8.1`
- `title`: `Notification, Callback, Callout`
- `path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["DIO", "Notification", "Callback", "Callout", "FC7xxx", "Integration", "Requirements", "Macros"]
- `anchor`: `Notification, Callback, Callout`

### SEC-008-002
- `source_number`: `8.2`
- `title`: `Macros`
- `path`: `Chapter 8 Other Requirements / 8.2 Macros`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["DIO", "Macros", "FC7xxx", "Integration", "Requirements", "Notification", "Callback", "Callout"]
- `anchor`: `Macros`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: `Integration Steps`
- `path`: `Chapter 9 Integration Steps`
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["DIO", "DIO module", "Integration", "FC7xxx", "generate", "please", "Building", "details"]
- `anchor`: `Integration Steps`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["DIO", "FC7xxx", "Integration"]
- `anchors`: ["FC7xxx DIO Integration"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["DIO", "FC7xxx", "Integration", "Revision", "History", "Changes", "Initial", "release"]
- `anchors`: ["Revision History", "Revision Date Changes", "A0 2025/01/14 Initial release"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "memory_map", "error_report"]
- `keywords`: ["DIO", "FC7xxx", "Integration", "Contents", "Introduction", "Building", "Dependencies", "Required", "Compile", "Memory"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .............................................................................................................................................................", "1.1 Introduction ...................................................................................................................................................................", "Chapter 2 Building ................................................................................................................................................................."]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `keywords`: ["DIO", "DIO module", "FC7xxx", "Integration", "Introduction", "describes", "requirements"]
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for the DIO module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `content_types`: ["text"]
- `keywords`: ["_MCAL/Src/Dio/Src/Dio.c", "_MCAL/Src/Dio/Src/Dio_Hw.c", "_MCAL/Src/Dio/include/Dio.h", "_MCAL/Src/Dio/include/Dio_Hw.h", "_MCAL/Src/Dio/include/Dio_Hw_Types.h", "_MCAL/Src/Rte/include/Dio_MemMap.h", "_MCAL/Src/Dio/include/Dio_Reg.h", "_MCAL/Src/Dio/include/Dio_RegOps.h", "_MCAL/Src/Dio/include/Dio_Version.h", "_MCAL_generate/src/Dio_Cfg.c"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "2.2 Files Required for Compile", "• _MCAL/Src/Dio/Src/Dio_Hw.c"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `content_types`: ["text"]
- `keywords`: ["EB_Plugins", "DIO", "DIO module", "FC7xxx", "Integration", "developed", "tresos", "Studio", "folder", "eclipse"]
- `anchors`: ["2.3 Add Plug-ins", "1) Copy the DIO module(_MCAL/EB_Plugins/eclipse/plugins/Dio) folder to EB tresos plug-ins (EB/tresos/plugins/)", "2) Set the DIO module output location folder for the generated source file and header files.", "3) Use EB tresos to configure the DIO module and generate source and header files."]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `keywords`: ["DIO_STOP_SEC_VAR_NO_INIT_16", "DIO_START_SEC_CONFIG_DATA_8", "DIO_STOP_SEC_CONFIG_DATA_8", "DIO_START_SEC_CONFIG_DATA_16", "DIO_STOP_SEC_CONFIG_DATA_16", "DIO_START_SEC_CONFIG_DATA_32", "DIO_STOP_SEC_CONFIG_DATA_32", "DIO_START_SEC_CONFIG_DATA_UNSPECIFIED", "DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED", "DIO_START_SEC_CONST_BOOLEAN"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "DIO_START_SEC_CONFIG_DATA_8 Variables These are all the sections used", "DIO_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `keywords`: ["DIO_START_SEC_VAR", "DIO_STOP_SEC_VAR", "DIO", "FC7xxx", "Integration", "UNSPECIFIED", "Memory"]
- `anchors`: ["DIO_START_SEC_VAR _INIT_ UNSPECIFIED", "DIO_STOP_SEC_VAR _INIT_ UNSPECIFIED", "Section Name Section Type Description"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `keywords`: ["DIO", "Dio driver", "DIO module", "FC7xxx", "Integration", "Exclusive", "services", "Schedule", "Manger", "SchM"]
- `anchors`: ["Chapter 4 Exclusive Area", "DIO module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the DIO driver:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `keywords`: ["DIO", "FC7xxx", "Integration", "Interrupt", "Service", "Routine", "ISR"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "table_like", "text"]
- `keywords`: ["Dio_ReadChannel", "DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel", "DIO_E_PARAM_LEVEL", "Dio_FlipChannel", "Dio_ReadPort", "DIO_E_PARAM_INVALID_PORT_ID", "Dio_WritePort", "Dio_MaskedWritePort", "Dio_ReadChannelGroup"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Dio_ReadChannel DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel DIO_E_PARAM_INVALID_CHANNEL_ID"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `content_types`: ["text"]
- `keywords`: ["DIO", "FC7xxx", "Integration", "Startup", "Shutdown", "Runtime"]
- `anchors`: ["Chapter 7 Function Calls", "7.1 Function Calls during Startup", "7.2 Function Calls during Shutdown", "7.3 Function Calls during Wake-up"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `content_types`: ["text"]
- `keywords`: ["DIO", "FC7xxx", "Integration", "Requirements", "Notification", "Callback", "Callout", "Macros"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "8.2 Macros"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 9 Integration Steps`
- `content_types`: ["text"]
- `keywords`: ["DIO", "DIO module", "FC7xxx", "Integration", "generate", "please", "Building", "details", "appropriate", "memory"]
- `anchors`: ["Chapter 9 Integration Steps", "1) Configure the DIO module and generate configuration files (please refer to Building chapter for details).", "2) Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details).", "3) Build the DIO module with dependent modules."]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx DIO Integration Manual and its visible revision.
- `keywords`: ["DIO", "FC7xxx", "Integration"]
- `anchors`: ["FC7xxx DIO Integration"]
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history for the FC7xxx DIO document.
- `keywords`: ["DIO", "FC7xxx", "Integration", "Revision", "History", "Changes", "Initial", "release"]
- `anchors`: ["Revision History", "Revision Date Changes", "A0 2025/01/14 Initial release"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "memory_map", "error_report"]
- `summary`: Table of contents page mapping chapters and subsections to printed/source page labels.
- `keywords`: ["DIO", "FC7xxx", "Integration", "Contents", "Introduction", "Building", "Dependencies", "Required", "Compile", "Memory"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .............................................................................................................................................................", "1.1 Introduction ...................................................................................................................................................................", "Chapter 2 Building ................................................................................................................................................................."]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `summary`: Chapter 1 Introduction 1.1 Introduction
- `keywords`: ["DIO", "DIO module", "FC7xxx", "Integration", "Introduction", "describes", "requirements"]
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for the DIO module."]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `content_types`: ["text"]
- `summary`: Chapter 2 Building 2.1 Dependencies on Other Modules
- `keywords`: ["_MCAL/Src/Dio/Src/Dio.c", "_MCAL/Src/Dio/Src/Dio_Hw.c", "_MCAL/Src/Dio/include/Dio.h", "_MCAL/Src/Dio/include/Dio_Hw.h", "_MCAL/Src/Dio/include/Dio_Hw_Types.h", "_MCAL/Src/Rte/include/Dio_MemMap.h", "_MCAL/Src/Dio/include/Dio_Reg.h", "_MCAL/Src/Dio/include/Dio_RegOps.h", "_MCAL/Src/Dio/include/Dio_Version.h", "_MCAL_generate/src/Dio_Cfg.c"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "2.2 Files Required for Compile", "• _MCAL/Src/Dio/Src/Dio_Hw.c"]
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `content_types`: ["text"]
- `summary`: 2.3 Add Plug-ins DIO module plug-ins are developed for EB tresos Studio, so, to use DIO plug-ins on the EB tresos Studio, the user needs
- `keywords`: ["EB_Plugins", "DIO", "DIO module", "FC7xxx", "Integration", "developed", "tresos", "Studio", "folder", "eclipse"]
- `anchors`: ["2.3 Add Plug-ins", "1) Copy the DIO module(_MCAL/EB_Plugins/eclipse/plugins/Dio) folder to EB tresos plug-ins (EB/tresos/plugins/)", "2) Set the DIO module output location folder for the generated source file and header files.", "3) Use EB tresos to configure the DIO module and generate source and header files."]
- `quality_flags`: []

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `summary`: Indexes DIO memory section names, section types and placement descriptions for linker/memory-map integration.
- `keywords`: ["DIO_STOP_SEC_VAR_NO_INIT_16", "DIO_START_SEC_CONFIG_DATA_8", "DIO_STOP_SEC_CONFIG_DATA_8", "DIO_START_SEC_CONFIG_DATA_16", "DIO_STOP_SEC_CONFIG_DATA_16", "DIO_START_SEC_CONFIG_DATA_32", "DIO_STOP_SEC_CONFIG_DATA_32", "DIO_START_SEC_CONFIG_DATA_UNSPECIFIED", "DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED", "DIO_START_SEC_CONST_BOOLEAN"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "DIO_START_SEC_CONFIG_DATA_8 Variables These are all the sections used", "DIO_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `summary`: Indexes DIO memory section names, section types and placement descriptions for linker/memory-map integration.
- `keywords`: ["DIO_START_SEC_VAR", "DIO_STOP_SEC_VAR", "DIO", "FC7xxx", "Integration", "UNSPECIFIED", "Memory"]
- `anchors`: ["DIO_START_SEC_VAR _INIT_ UNSPECIFIED", "DIO_STOP_SEC_VAR _INIT_ UNSPECIFIED", "Section Name Section Type Description"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `summary`: Chapter 4 Exclusive Area DIO module using the services of Schedule Manger (SchM) for entering and exiting critical regions.
- `keywords`: ["DIO", "Dio driver", "DIO module", "FC7xxx", "Integration", "Exclusive", "services", "Schedule", "Manger", "SchM"]
- `anchors`: ["Chapter 4 Exclusive Area", "DIO module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the DIO driver:"]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `summary`: Chapter 5 Interrupt Service Routine (ISR)
- `keywords`: ["DIO", "FC7xxx", "Integration", "Interrupt", "Service", "Routine", "ISR"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `quality_flags`: []

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "table_like", "text"]
- `summary`: Lists DIO DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["Dio_ReadChannel", "DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel", "DIO_E_PARAM_LEVEL", "Dio_FlipChannel", "Dio_ReadPort", "DIO_E_PARAM_INVALID_PORT_ID", "Dio_WritePort", "Dio_MaskedWritePort", "Dio_ReadChannelGroup"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Dio_ReadChannel DIO_E_PARAM_INVALID_CHANNEL_ID", "Dio_WriteChannel DIO_E_PARAM_INVALID_CHANNEL_ID"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `content_types`: ["text"]
- `summary`: Chapter 7 Function Calls 7.1 Function Calls during Startup
- `keywords`: ["DIO", "FC7xxx", "Integration", "Startup", "Shutdown", "Runtime"]
- `anchors`: ["Chapter 7 Function Calls", "7.1 Function Calls during Startup", "7.2 Function Calls during Shutdown", "7.3 Function Calls during Wake-up"]
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `content_types`: ["text"]
- `summary`: Chapter 8 Other Requirements 8.1 Notification, Callback, Callout
- `keywords`: ["DIO", "FC7xxx", "Integration", "Requirements", "Notification", "Callback", "Callout", "Macros"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "8.2 Macros"]
- `quality_flags`: []

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 9 Integration Steps`
- `content_types`: ["text"]
- `summary`: Chapter 9 Integration Steps 1) Configure the DIO module and generate configuration files (please refer to Building chapter for details).
- `keywords`: ["DIO", "DIO module", "FC7xxx", "Integration", "generate", "please", "Building", "details", "appropriate", "memory"]
- `anchors`: ["Chapter 9 Integration Steps", "1) Configure the DIO module and generate configuration files (please refer to Building chapter for details).", "2) Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details).", "3) Build the DIO module with dependent modules."]
- `quality_flags`: []

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0002-001`
- `caption`: `Revision History`
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `bbox`: [207.2, 40.8, 387.9, 69.6]
- `table_type`: `revision_history`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: Revision history table listing document revision, date and changes.
- `anchor`: `Revision History`
- `confidence`: `0.93`
- `quality_flags`: ["generated_table_like_index", "no_formal_table_number"]

### TBL-0003-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0003-001`
- `caption`: `Table of Contents page 3`
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `bbox`: [199.4, 40.8, 395.9, 69.6]
- `table_type`: `toc`
- `key_fields`: ["section", "title", "page"]
- `summary`: Table of contents table-like page listing section titles and page labels.
- `anchor`: `Table of Contents`
- `confidence`: `0.86`
- `quality_flags`: ["toc_table_like_index"]

### TBL-0003-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0003-002`
- `caption`: `Memory map sections on page 3`
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `table_type`: `memory_map`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: Memory map section table listing memory-section names, section types and descriptions.
- `anchor`: `Section Name`
- `confidence`: `0.86`
- `quality_flags`: ["memory_section_table_like", "cell_grid_not_rebuilt"]

### TBL-0007-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-001`
- `caption`: `Memory map sections on page 7`
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `bbox`: [36.0, 118.9, 99.1, 130.7]
- `table_type`: `memory_map`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: Memory map section table listing memory-section names, section types and descriptions.
- `anchor`: `Section Name`
- `confidence`: `0.86`
- `quality_flags`: ["memory_section_table_like", "cell_grid_not_rebuilt"]

### TBL-0008-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0008-001`
- `caption`: `Memory map sections on page 8`
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `bbox`: [36.0, 38.8, 99.1, 50.6]
- `table_type`: `memory_map`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: Memory map section table listing memory-section names, section types and descriptions.
- `anchor`: `Section Name`
- `confidence`: `0.86`
- `quality_flags`: ["memory_section_table_like", "cell_grid_not_rebuilt"]

### TBL-0011-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-001`
- `caption`: `Error reporting table on page 11`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `bbox`: [50.2, 118.9, 119.4, 130.7]
- `table_type`: `error_report`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: Error-reporting table-like entry listing APIs/functions and DET/DEM error codes.
- `anchor`: `Function Name`
- `confidence`: `0.84`
- `quality_flags`: ["error_table_like", "cell_grid_not_rebuilt"]

## 7. Figure / Image Index

No source-numbered figures or significant embedded image blocks were detected.

## 8. Term / API / Config / Requirement Index

### FUNC-COMPILER-CFG
- `name`: `Compiler_Cfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Compiler_Cfg.h"]
- `aliases`: ["Compiler Cfg"]

### FUNC-DIO-CFG
- `name`: `Dio_Cfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL_generate/src/Dio_Cfg.c"]
- `aliases`: ["Dio Cfg"]

### FUNC-DIO-HW
- `name`: `Dio_Hw`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Dio/Src/Dio_Hw.c"]
- `aliases`: ["Dio Hw"]

### FUNC-DIO-MEMMAP
- `name`: `Dio_MemMap`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Rte/include/Dio_MemMap.h"]
- `aliases`: ["Dio MemMap"]

### FUNC-DIO-REG
- `name`: `Dio_Reg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Reg.h"]
- `aliases`: ["Dio Reg"]

### FUNC-DIO-REGOPS
- `name`: `Dio_RegOps`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_RegOps.h"]
- `aliases`: ["Dio RegOps"]

### FUNC-DIO-VERSION
- `name`: `Dio_Version`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Version.h"]
- `aliases`: ["Dio Version"]

### FUNC-SCHM-DIO
- `name`: `SchM_Dio`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: • SchM_Dio.h"]
- `aliases`: ["SchM Dio"]

### FUNC-EB-PLUGINS
- `name`: `EB_Plugins`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p6: 1) Copy the DIO module(_MCAL/EB_Plugins/eclipse/plugins/Dio) folder to EB tresos plug-ins (EB/tresos/plugins/)"]
- `aliases`: ["EB Plugins"]

### FUNC-DIO-STOP-SEC-VAR-NO-INIT-16
- `name`: `DIO_STOP_SEC_VAR_NO_INIT_16`
- `type`: `function`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_16 (bss)."]
- `aliases`: ["DIO STOP SEC VAR NO INIT 16"]

### FUNC-DIO-FLIPCHANNEL
- `name`: `Dio_FlipChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_FlipChannel DIO_E_PARAM_INVALID_CHANNEL_ID"]
- `aliases`: ["Dio FlipChannel"]

### FUNC-DIO-GETVERSIONINFO
- `name`: `Dio_GetVersionInfo`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_GetVersionInfo DIO_E_PARAM_POINTER"]
- `aliases`: ["Dio GetVersionInfo"]

### FUNC-DIO-MASKEDWRITEPORT
- `name`: `Dio_MaskedWritePort`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_MaskedWritePort DIO_E_PARAM_INVALID_PORT_ID"]
- `aliases`: ["Dio MaskedWritePort"]

### FUNC-DIO-READCHANNEL
- `name`: `Dio_ReadChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_ReadChannel DIO_E_PARAM_INVALID_CHANNEL_ID"]
- `aliases`: ["Dio ReadChannel"]

### FUNC-DIO-READCHANNELGROUP
- `name`: `Dio_ReadChannelGroup`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_ReadChannelGroup DIO_E_PARAM_INVALID_GROUP_ID"]
- `aliases`: ["Dio ReadChannelGroup"]

### FUNC-DIO-READPORT
- `name`: `Dio_ReadPort`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_ReadPort DIO_E_PARAM_INVALID_PORT_ID"]
- `aliases`: ["Dio ReadPort"]

### FUNC-DIO-WRITECHANNEL
- `name`: `Dio_WriteChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_WriteChannel DIO_E_PARAM_INVALID_CHANNEL_ID"]
- `aliases`: ["Dio WriteChannel"]

### FUNC-DIO-WRITECHANNELGROUP
- `name`: `Dio_WriteChannelGroup`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_WriteChannelGroup DIO_E_PARAM_INVALID_GROUP_ID"]
- `aliases`: ["Dio WriteChannelGroup"]

### FUNC-DIO-WRITEPORT
- `name`: `Dio_WritePort`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p11: Dio_WritePort DIO_E_PARAM_INVALID_PORT_ID"]
- `aliases`: ["Dio WritePort"]

### ERR-DIO-E-PARAM-INVALID-CHANNEL-ID
- `name`: `DIO_E_PARAM_INVALID_CHANNEL_ID`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p11: Dio_ReadChannel DIO_E_PARAM_INVALID_CHANNEL_ID"]
- `aliases`: ["DIO E PARAM INVALID CHANNEL ID"]

### ERR-DIO-E-PARAM-INVALID-GROUP-ID
- `name`: `DIO_E_PARAM_INVALID_GROUP_ID`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p11: Dio_ReadChannelGroup DIO_E_PARAM_INVALID_GROUP_ID"]
- `aliases`: ["DIO E PARAM INVALID GROUP ID"]

### ERR-DIO-E-PARAM-INVALID-PORT-ID
- `name`: `DIO_E_PARAM_INVALID_PORT_ID`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p11: Dio_ReadPort DIO_E_PARAM_INVALID_PORT_ID"]
- `aliases`: ["DIO E PARAM INVALID PORT ID"]

### ERR-DIO-E-PARAM-LEVEL
- `name`: `DIO_E_PARAM_LEVEL`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p11: DIO_E_PARAM_LEVEL"]
- `aliases`: ["DIO E PARAM LEVEL"]

### ERR-DIO-E-PARAM-POINTER
- `name`: `DIO_E_PARAM_POINTER`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p11: Dio_GetVersionInfo DIO_E_PARAM_POINTER"]
- `aliases`: ["DIO E PARAM POINTER"]

### TYPE-DIO-HW-TYPES
- `name`: `Dio_Hw_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Hw_Types.h"]
- `aliases`: ["Dio Hw Types"]

### TYPE-PLATFORM-TYPES
- `name`: `Platform_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Platform_Types.h"]
- `aliases`: ["Platform Types"]

### TYPE-STD-TYPES
- `name`: `Std_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Std_Types.h"]
- `aliases`: ["Std Types"]

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-H
- `name`: `_MCAL/Src/Common/include/Compiler.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Compiler.h"]
- `aliases`: [" MCAL/Src/Common/include/Compiler.h"]

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: `_MCAL/Src/Common/include/Compiler_Cfg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Compiler_Cfg.h"]
- `aliases`: [" MCAL/Src/Common/include/Compiler Cfg.h"]

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILERDEFINITION-H
- `name`: `_MCAL/Src/Common/include/CompilerDefinition.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Common/include/CompilerDefinition.h"]
- `aliases`: [" MCAL/Src/Common/include/CompilerDefinition.h"]

### FILE-MCAL-SRC-COMMON-INCLUDE-MCAL-H
- `name`: `_MCAL/Src/Common/include/Mcal.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Mcal.h"]
- `aliases`: [" MCAL/Src/Common/include/Mcal.h"]

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: `_MCAL/Src/Common/include/Platform_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Platform_Types.h"]
- `aliases`: [" MCAL/Src/Common/include/Platform Types.h"]

### FILE-MCAL-SRC-COMMON-INCLUDE-STD-TYPES-H
- `name`: `_MCAL/Src/Common/include/Std_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Std_Types.h"]
- `aliases`: [" MCAL/Src/Common/include/Std Types.h"]

### FILE-MCAL-SRC-DIO-INCLUDE-DIO-H
- `name`: `_MCAL/Src/Dio/include/Dio.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio.h"]
- `aliases`: [" MCAL/Src/Dio/include/Dio.h"]

### FILE-MCAL-SRC-DIO-INCLUDE-DIO-HW-H
- `name`: `_MCAL/Src/Dio/include/Dio_Hw.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Hw.h"]
- `aliases`: [" MCAL/Src/Dio/include/Dio Hw.h"]

### FILE-MCAL-SRC-DIO-INCLUDE-DIO-HW-TYPES-H
- `name`: `_MCAL/Src/Dio/include/Dio_Hw_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Hw_Types.h"]
- `aliases`: [" MCAL/Src/Dio/include/Dio Hw Types.h"]

### FILE-MCAL-SRC-DIO-INCLUDE-DIO-REG-H
- `name`: `_MCAL/Src/Dio/include/Dio_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Reg.h"]
- `aliases`: [" MCAL/Src/Dio/include/Dio Reg.h"]

### FILE-MCAL-SRC-DIO-INCLUDE-DIO-REGOPS-H
- `name`: `_MCAL/Src/Dio/include/Dio_RegOps.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_RegOps.h"]
- `aliases`: [" MCAL/Src/Dio/include/Dio RegOps.h"]

### FILE-MCAL-SRC-DIO-INCLUDE-DIO-VERSION-H
- `name`: `_MCAL/Src/Dio/include/Dio_Version.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/include/Dio_Version.h"]
- `aliases`: [" MCAL/Src/Dio/include/Dio Version.h"]

### FILE-MCAL-SRC-DIO-SRC-DIO-C
- `name`: `_MCAL/Src/Dio/Src/Dio.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/Src/Dio.c"]
- `aliases`: [" MCAL/Src/Dio/Src/Dio.c"]

### FILE-MCAL-SRC-DIO-SRC-DIO-HW-C
- `name`: `_MCAL/Src/Dio/Src/Dio_Hw.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Dio/Src/Dio_Hw.c"]
- `aliases`: [" MCAL/Src/Dio/Src/Dio Hw.c"]

### FILE-MCAL-SRC-RTE-INCLUDE-DIO-MEMMAP-H
- `name`: `_MCAL/Src/Rte/include/Dio_MemMap.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/Rte/include/Dio_MemMap.h"]
- `aliases`: [" MCAL/Src/Rte/include/Dio MemMap.h"]

### FILE-MCAL-GENERATE-INCLUDE-DIO-CFG-H
- `name`: `_MCAL_generate/include/Dio_Cfg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL_generate/include/Dio_Cfg.h"]
- `aliases`: [" MCAL generate/include/Dio Cfg.h"]

### FILE-MCAL-GENERATE-SRC-DIO-CFG-C
- `name`: `_MCAL_generate/src/Dio_Cfg.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL_generate/src/Dio_Cfg.c"]
- `aliases`: [" MCAL generate/src/Dio Cfg.c"]

### FILE-DET-H
- `name`: `Det.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • Det.h"]
- `aliases`: []

### FILE-SCHM-DIO-H
- `name`: `SchM_Dio.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • SchM_Dio.h"]
- `aliases`: ["SchM Dio.h"]

### MEM-DIO-START-SEC
- `name`: `DIO_START_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONFIG_DATA_8 Variables These are all the sections used"]
- `aliases`: ["DIO START SEC "]

### MEM-DIO-START-SEC-CODE
- `name`: `DIO_START_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CODE Code Start and stop of memory"]
- `aliases`: ["DIO START SEC CODE"]

### MEM-DIO-START-SEC-CODE-AC
- `name`: `DIO_START_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CODE_AC"]
- `aliases`: ["DIO START SEC CODE AC"]

### MEM-DIO-START-SEC-CONFIG-DATA-16
- `name`: `DIO_START_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONFIG_DATA_16 aligned to 8/16/32 bit. These"]
- `aliases`: ["DIO START SEC CONFIG DATA 16"]

### MEM-DIO-START-SEC-CONFIG-DATA-32
- `name`: `DIO_START_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONFIG_DATA_32 startup code(data)."]
- `aliases`: ["DIO START SEC CONFIG DATA 32"]

### MEM-DIO-START-SEC-CONFIG-DATA-8
- `name`: `DIO_START_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONFIG_DATA_8 Variables These are all the sections used"]
- `aliases`: ["DIO START SEC CONFIG DATA 8"]

### MEM-DIO-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `DIO_START_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONFIG_DATA_UNSPECIFIED Configuration Data Start and stop of Memory"]
- `aliases`: ["DIO START SEC CONFIG DATA UNSPECIFIED"]

### MEM-DIO-START-SEC-CONST
- `name`: `DIO_START_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONST_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DIO START SEC CONST "]

### MEM-DIO-START-SEC-CONST-16
- `name`: `DIO_START_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONST_16 read only (rodata)."]
- `aliases`: ["DIO START SEC CONST 16"]

### MEM-DIO-START-SEC-CONST-32
- `name`: `DIO_START_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONST_32"]
- `aliases`: ["DIO START SEC CONST 32"]

### MEM-DIO-START-SEC-CONST-8
- `name`: `DIO_START_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONST_8 aligned to 8/16/32 bit or"]
- `aliases`: ["DIO START SEC CONST 8"]

### MEM-DIO-START-SEC-CONST-BOOLEAN
- `name`: `DIO_START_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_CONST_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DIO START SEC CONST BOOLEAN"]

### MEM-DIO-START-SEC-VAR
- `name`: `DIO_START_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7, 8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections used", "p8: DIO_START_SEC_VAR _INIT_ UNSPECIFIED"]
- `aliases`: ["DIO START SEC VAR"]

### MEM-DIO-START-SEC-VAR-02
- `name`: `DIO_START_SEC_VAR_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DIO START SEC VAR "]

### MEM-DIO-START-SEC-VAR-NO-INIT
- `name`: `DIO_START_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DIO START SEC VAR NO INIT "]

### MEM-DIO-START-SEC-VAR-NO-INIT-16
- `name`: `DIO_START_SEC_VAR_NO_INIT_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_16 never initialized by startup code"]
- `aliases`: ["DIO START SEC VAR NO INIT 16"]

### MEM-DIO-START-SEC-VAR-NO-INIT-32
- `name`: `DIO_START_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_32"]
- `aliases`: ["DIO START SEC VAR NO INIT 32"]

### MEM-DIO-START-SEC-VAR-NO-INIT-8
- `name`: `DIO_START_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_8 aligned to 8/16/32 bit. These"]
- `aliases`: ["DIO START SEC VAR NO INIT 8"]

### MEM-DIO-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `DIO_START_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DIO START SEC VAR NO INIT BOOLEAN"]

### MEM-DIO-STOP-SEC
- `name`: `DIO_STOP_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]
- `aliases`: ["DIO STOP SEC "]

### MEM-DIO-STOP-SEC-CODE
- `name`: `DIO_STOP_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CODE Section for Code(text)."]
- `aliases`: ["DIO STOP SEC CODE"]

### MEM-DIO-STOP-SEC-CODE-AC
- `name`: `DIO_STOP_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CODE_AC"]
- `aliases`: ["DIO STOP SEC CODE AC"]

### MEM-DIO-STOP-SEC-CONFIG-DATA-16
- `name`: `DIO_STOP_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONFIG_DATA_16 variables are initialized by"]
- `aliases`: ["DIO STOP SEC CONFIG DATA 16"]

### MEM-DIO-STOP-SEC-CONFIG-DATA-32
- `name`: `DIO_STOP_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONFIG_DATA_32"]
- `aliases`: ["DIO STOP SEC CONFIG DATA 32"]

### MEM-DIO-STOP-SEC-CONFIG-DATA-8
- `name`: `DIO_STOP_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]
- `aliases`: ["DIO STOP SEC CONFIG DATA 8"]

### MEM-DIO-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED Section for Config Data."]
- `aliases`: ["DIO STOP SEC CONFIG DATA UNSPECIFIED"]

### MEM-DIO-STOP-SEC-CONST
- `name`: `DIO_STOP_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONST_BOOLEAN for variables which have to be"]
- `aliases`: ["DIO STOP SEC CONST "]

### MEM-DIO-STOP-SEC-CONST-16
- `name`: `DIO_STOP_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONST_16"]
- `aliases`: ["DIO STOP SEC CONST 16"]

### MEM-DIO-STOP-SEC-CONST-32
- `name`: `DIO_STOP_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONST_32"]
- `aliases`: ["DIO STOP SEC CONST 32"]

### MEM-DIO-STOP-SEC-CONST-8
- `name`: `DIO_STOP_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONST_8 boolean. These variables are"]
- `aliases`: ["DIO STOP SEC CONST 8"]

### MEM-DIO-STOP-SEC-CONST-BOOLEAN
- `name`: `DIO_STOP_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_CONST_BOOLEAN for variables which have to be"]
- `aliases`: ["DIO STOP SEC CONST BOOLEAN"]

### MEM-DIO-STOP-SEC-VAR
- `name`: `DIO_STOP_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7, 8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_BOOLEAN for variables which have to be", "p8: DIO_STOP_SEC_VAR _INIT_ UNSPECIFIED"]
- `aliases`: ["DIO STOP SEC VAR"]

### MEM-DIO-STOP-SEC-VAR-02
- `name`: `DIO_STOP_SEC_VAR_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_BOOLEAN for variables which have to be"]
- `aliases`: ["DIO STOP SEC VAR "]

### MEM-DIO-STOP-SEC-VAR-NO-INIT
- `name`: `DIO_STOP_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_BOOLEAN for variables which have to be"]
- `aliases`: ["DIO STOP SEC VAR NO INIT "]

### MEM-DIO-STOP-SEC-VAR-NO-INIT-32
- `name`: `DIO_STOP_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_32"]
- `aliases`: ["DIO STOP SEC VAR NO INIT 32"]

### MEM-DIO-STOP-SEC-VAR-NO-INIT-8
- `name`: `DIO_STOP_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_8 variables are never cleared and"]
- `aliases`: ["DIO STOP SEC VAR NO INIT 8"]

### MEM-DIO-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `DIO_STOP_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DIO MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DIO_STOP_SEC_VAR_NO_INIT_BOOLEAN for variables which have to be"]
- `aliases`: ["DIO STOP SEC VAR NO INIT BOOLEAN"]

### TERM-DIO
- `name`: `DIO`
- `type`: `module`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
- `section_paths`: ["Cover", "Revision History", "Table of Contents", "Chapter 1 Introduction / 1.1 Introduction", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p1: FC7xxx DIO Integration", "p2: FC7xxx DIO Integration Manual"]
- `aliases`: ["Digital I/O", "Digital Input Output", "GPIO"]

### TERM-MCAL
- `name`: `MCAL`
- `type`: `module`
- `primary_page`: `5`
- `physical_pages`: [5, 6]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p5: • _MCAL/Src/Dio/Src/Dio.c", "p6: 1) Copy the DIO module(_MCAL/EB_Plugins/eclipse/plugins/Dio) folder to EB tresos plug-ins (EB/tresos/plugins/)"]
- `aliases`: []

### TERM-DEM
- `name`: `Dem`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 11]
- `section_paths`: ["Table of Contents", "Chapter 6 Error Report / 6.1 Det"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 6.2 Dem ............................................................................................................................................................................", "p11: 6.2 Dem"]
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 5, 11, 14]
- `section_paths`: ["Table of Contents", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 6 Error Report / 6.1 Det", "Chapter 9 Integration Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 6.1 Det ............................................................................................................................................................................", "p5: • Det: This module is necessary for enabling Development error detection.", "p11: 6.1 Det", "p14: 1) Configure the DIO module and generate configuration files (please refer to Building chapter for details)."]
- `aliases`: []

### TERM-PORT
- `name`: `Port`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 5, 11]
- `section_paths`: ["Table of Contents", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 6 Error Report / 6.1 Det"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: Chapter 6 Error Report .............................................................................................................................................................", "p5: • Port: This module provides the port configurations of Port pins before they are used for DIO module.", "p11: Chapter 6 Error Report"]
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Common: This module is the basic module which used to choose the chip."]
- `aliases`: []

### TERM-MCU
- `name`: `Mcu`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Mcu: This module provides basic microcontroller initialization, and clock initialization for DIO module."]
- `aliases`: []

### TERM-RTE
- `name`: `Rte`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Rte: This module provides APIs to protect/unprotect some parts of code from Exclusive Areas."]
- `aliases`: []

### TERM-SCHM
- `name`: `SchM`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 9]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 4 Exclusive Area"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • SchM_Dio.h", "p9: DIO module using the services of Schedule Manger (SchM) for entering and exiting critical regions."]
- `aliases`: []

### TERM-EB-TRESOS
- `name`: `EB tresos`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p6: DIO module plug-ins are developed for EB tresos Studio, so, to use DIO plug-ins on the EB tresos Studio, the user needs"]
- `aliases`: []

## 9. Search Aliases

### ALIAS-MCAL
- `canonical`: `MCAL`
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "AUTOSAR MCAL", "底层驱动"]
- `related_ids`: ["TERM-MCAL"]

### ALIAS-AUTOSAR
- `canonical`: `AUTOSAR`
- `aliases`: ["AUTOSAR Classic", "AUTOSAR Classic Platform", "CP", "AUTOSAR CP", "汽车开放系统架构"]
- `related_ids`: []

### ALIAS-EB-TRESOS
- `canonical`: `EB tresos`
- `aliases`: ["Tresos", "EB Tresos Studio", "EB tresos Studio", "EB工具", "配置工具"]
- `related_ids`: ["TERM-EB-TRESOS"]

### ALIAS-DET
- `canonical`: `DET`
- `aliases`: ["Development Error Tracer", "Det_ReportError", "development error", "开发错误检测"]
- `related_ids`: ["TERM-DET"]

### ALIAS-DEM
- `canonical`: `DEM`
- `aliases`: ["Diagnostic Event Manager", "diagnostic error", "诊断事件管理"]
- `related_ids`: ["TERM-DEM"]

### ALIAS-SCHM
- `canonical`: `SchM`
- `aliases`: ["Schedule Manager", "SchM_", "exclusive area", "critical region", "临界区"]
- `related_ids`: ["TERM-SCHM"]

### ALIAS-RTE
- `canonical`: `RTE`
- `aliases`: ["Runtime Environment", "Rte", "AUTOSAR RTE", "运行时环境"]
- `related_ids`: ["TERM-RTE"]

### ALIAS-ECUC
- `canonical`: `ECUC`
- `aliases`: ["ECU Configuration", "AUTOSAR_ECUC", "EcuC", "ECU配置"]
- `related_ids`: []

### ALIAS-DIO
- `canonical`: `DIO`
- `aliases`: ["Digital Input Output", "Digital Input/Output", "Digital I/O", "Dio", "DIO driver", "DIO module", "数字输入输出", "DIO模块", "DIO驱动", "GPIO driver"]
- `related_ids`: ["TERM-DIO"]

### ALIAS-DIOCHANNEL
- `canonical`: `DioChannel`
- `aliases`: ["DIO Channel", "Dio_ChannelType", "channel id", "DioChannelId", "数字输入输出通道"]
- `related_ids`: []

### ALIAS-DIOPORT
- `canonical`: `DioPort`
- `aliases`: ["DIO Port", "Dio_PortType", "port id", "GPIO port", "端口"]
- `related_ids`: []

### ALIAS-DIOCHANNELGROUP
- `canonical`: `DioChannelGroup`
- `aliases`: ["DIO Channel Group", "Dio_ChannelGroupType", "channel group", "通道组"]
- `related_ids`: []

### ALIAS-INTEGRATION-STEPS
- `canonical`: `Integration Steps`
- `aliases`: ["integration procedure", "集成步骤", "build steps", "plug-ins", "memory map", "ISR setup"]
- `related_ids`: []

### ALIAS-FILES-REQUIRED-FOR-COMPILE
- `canonical`: `Files Required for Compile`
- `aliases`: ["compile files", "source files", "header files", "required files", "编译所需文件"]
- `related_ids`: []

### ALIAS-EXCLUSIVE-AREA
- `canonical`: `Exclusive Area`
- `aliases`: ["critical region", "SchM exclusive area", "enter/exit critical section", "临界区"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between DIO_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `DIO_Integration_Manual.pdf`
- `source_pdf_sha256`: `4181daa8f00519fa252d6dc23967034470687c8adbc060075d4b6513defe8bc8`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `13`
- `technical_missing_terms_added`: `4`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `13`
- `supplemented_missing_technical_token_count`: `4`
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
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "common"
  - "dependency"
  - "first"
  - "initialize"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "add"
  - "first"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "INIT_8"
  - "INIT_BOOLEAN"
  - "Proprietary"
  - "_INIT_16"
  - "_INIT_32"

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
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "None"
  - "Proprietary"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "None"
  - "Proprietary"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "None"
  - "Proprietary"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "None"
  - "Proprietary"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
- `affected_ids`: []
- `message`: PDF has an extractable text layer; OCR was not run. Screenshots and diagram internals are indexed by context, not transcribed pixel-by-pixel.
- `recommended_action`: Use source PDF rendering for image/screenshot details.

### WARN-0002
- `severity`: `low`
- `category`: `outline`
- `physical_pages`: []
- `affected_ids`: []
- `message`: PDF has no embedded outline/bookmarks; section ranges were generated from visible Table of Contents and body headings.
- `recommended_action`: Use SEC-* stable IDs and physical_page fields as primary locators.

### WARN-0003
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: [2, 3, 7, 8, 11]
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0003-002", "TBL-0007-001", "TBL-0008-001", "TBL-0011-001"]
- `message`: Table Index contains formal and table-like entries; cell grids were not fully reconstructed, and entries are intended for locating source PDF pages.
- `recommended_action`: Use captions, anchors and physical pages to verify exact table cells in the source PDF.

### WARN-0004
- `severity`: `low`
- `category`: `sparse_page`
- `physical_pages`: [10]
- `affected_ids`: []
- `message`: Detected 1 sparse-text pages. They are still covered by Page Locator and Page Segment indexes.
- `recommended_action`: Check source PDF rendering if a sparse page is unexpectedly important.

### WARN-0005
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: []
- `affected_ids`: []
- `message`: No formal SWS_* or SRS_* requirement IDs were detected in this PDF. Internal SEC/TBL/FIG IDs are navigation IDs only.
- `recommended_action`: Do not treat internal manifest IDs as source-document requirement numbers.

### WARN-0006
- `severity`: `low`
- `category`: `source_text_spacing`
- `physical_pages`: [7, 8]
- `affected_ids`: []
- `message`: Memory-section names include source-visible spaces in several tokens such as RAMCODE/VAR_INIT sections; Manifest keeps normalized searchable anchors but source PDF should be checked for exact spelling.
- `recommended_action`: Verify against the source PDF before relying on extracted details.

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `14`
- `indexed_physical_pages_count`: `14`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `section_ranges_status`: `pass`
- `invalid_section_ranges`: []
- `source_pdf_sha256`: `4181daa8f00519fa252d6dc23967034470687c8adbc060075d4b6513defe8bc8`
- `manifest_source_pdf_sha256`: `4181daa8f00519fa252d6dc23967034470687c8adbc060075d4b6513defe8bc8`
- `sha256_match`: `True`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `13`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

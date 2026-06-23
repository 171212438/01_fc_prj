---
manifest_schema_version: "1.1"
source_pdf: "DMA_Integration_Manual.pdf"
source_pdf_sha256: "e22c094b45b3054d58d8c22bf99e5675cd4699455a747beefa9d20da8793624e"
source_pdf_size_bytes: 1164838
pdf_page_count: 14
generated_at: "2026-06-19T11:17:43Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.5.0"
source_document_id: null
source_document_revision: null
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: DMA_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `DMA_Integration_Manual.pdf`
- `source_pdf_sha256`: `e22c094b45b3054d58d8c22bf99e5675cd4699455a747beefa9d20da8793624e`
- `source_pdf_size_bytes`: `1164838`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `null`
- `visible_cover_title`: `FC7xxx DMA Integration Manual Rev.0.4`
- `visible_cover_revision`: `null`
- `revision_history_latest_row`: `0.4 / 2023/11/22 / Updated for MCAL V0.4.0`
- `generated_at`: `2026-06-19T11:17:43Z`
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

- `topic`: FC7xxx AUTOSAR MCAL CDD DMA module - Integration Manual
- `module_scope`: DMA integration dependencies, build files, plug-ins, memory map, exclusive areas, ISR handling, DET/DEM reporting and integration steps.
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements"]
- `key_terms`: ["DMA", "Direct Memory Access", "DMAMUX", "CDD_Dma", "Dma driver", "DmaChannel", "Dma_ConfigType", "Complex Driver", "MCAL", "AUTOSAR", "EB tresos", "Rte", "Det", "Dem", "SchM", "ECUC"]
- `summary`: This 14-page document describes integration requirements for the FC7xxx DMA MCAL module, including dependencies, required compile files, EB tresos plug-in setup, memory sections, exclusive areas, ISR/function-call expectations, error reporting and integration steps.
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
- `keywords`: ["DMA", "FC7xxx", "Integration"]
- `anchor`: `FC7xxx DMA Integration Manual Rev.0.4`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["DMA", "Revision", "History", "FC7xxx", "Integration", "Changes", "Initial", "release"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["DMA", "Contents", "FC7xxx", "Integration", "Introduction", "Building", "Dependencies", "Required"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["DMA", "Introduction", "FC7xxx", "Integration", "describes", "requirements"]
- `anchor`: `Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction / 1.1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["DMA", "Introduction", "FC7xxx", "Integration", "describes", "requirements"]
- `anchor`: `Introduction`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Building`
- `path`: `Chapter 2 Building`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["_MCAL/Src/DMA/Src/CDD_Dma.c", "_MCAL/Src/DMA/Src/Dma_HWA.c", "_MCAL/Src/DMA/Src/Dma_Isr.c", "_MCAL/Src/DMA/Src/Dma_LLD.c", "_MCAL/Src/DMA/include/CDD_Dma.h", "_MCAL/Src/DMA/include/Dma_HWA.h", "_MCAL/Src/DMA/include/Dma_LLD.h", "_MCAL/Src/DMA/include/Dma_Memmap.h"]
- `anchor`: `Building`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Dependencies on Other Modules`
- `path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["_MCAL/Src/DMA/Src/CDD_Dma.c", "_MCAL/Src/DMA/Src/Dma_HWA.c", "_MCAL/Src/DMA/Src/Dma_Isr.c", "_MCAL/Src/DMA/Src/Dma_LLD.c", "_MCAL/Src/DMA/include/CDD_Dma.h", "_MCAL/Src/DMA/include/Dma_HWA.h", "_MCAL/Src/DMA/include/Dma_LLD.h", "_MCAL/Src/DMA/include/Dma_Memmap.h"]
- `anchor`: `Dependencies on Other Modules`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `Files Required for Compile`
- `path`: `Chapter 2 Building / 2.2 Files Required for Compile`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["_MCAL/Src/DMA/Src/CDD_Dma.c", "_MCAL/Src/DMA/Src/Dma_HWA.c", "_MCAL/Src/DMA/Src/Dma_Isr.c", "_MCAL/Src/DMA/Src/Dma_LLD.c", "_MCAL/Src/DMA/include/CDD_Dma.h", "_MCAL/Src/DMA/include/Dma_HWA.h", "_MCAL/Src/DMA/include/Dma_LLD.h", "_MCAL/Src/DMA/include/Dma_Memmap.h"]
- `anchor`: `Files Required for Compile`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Add Plug-ins`
- `path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Det.h", "SchM_Dma.h", "SchM_Dma", "EB_Plugins", "DMA", "FC7xxx", "Integration", "developed"]
- `anchor`: `Add Plug-ins`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Memory`
- `path`: `Chapter 3 Memory`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["DMA_START_SEC_CONST_16", "DMA_STOP_SEC_VAR_NO_INIT_16", "DMA_START_SEC_CONFIG_DATA_8", "DMA_STOP_SEC_CONFIG_DATA_8", "DMA_START_SEC_CONFIG_DATA_16", "DMA_STOP_SEC_CONFIG_DATA_16", "DMA_START_SEC_CONFIG_DATA_32", "DMA_STOP_SEC_CONFIG_DATA_32"]
- `anchor`: `Memory`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Sections in Memory Map`
- `path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["DMA_START_SEC_CONST_16", "DMA_STOP_SEC_VAR_NO_INIT_16", "DMA_START_SEC_CONFIG_DATA_8", "DMA_STOP_SEC_CONFIG_DATA_8", "DMA_START_SEC_CONFIG_DATA_16", "DMA_STOP_SEC_CONFIG_DATA_16", "DMA_START_SEC_CONFIG_DATA_32", "DMA_STOP_SEC_CONFIG_DATA_32"]
- `anchor`: `Sections in Memory Map`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Exclusive Area`
- `path`: `Chapter 4 Exclusive Area`
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["CDD_Dma.c", "Dma_LLD.c", "CDD_Dma", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00", "Dma_DeInit", "Dma_LLD", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01", "Dma_LLD_Init"]
- `anchor`: `Exclusive Area`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: `Interrupt Service Routine (ISR)`
- `path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["DMA", "Interrupt", "Service", "Routine", "ISR", "FC7xxx", "Integration", "Instance"]
- `anchor`: `Interrupt Service Routine (ISR)`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: `Error Report`
- `path`: `Chapter 6 Error Report`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dma_Init", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARTITION_MAPPING", "Dma_DeInit", "Dma_GetVersionInfo", "DMA_E_PARAM_VINFO_U8"]
- `anchor`: `Error Report`

### SEC-006-001
- `source_number`: `6.1`
- `title`: `Det`
- `path`: `Chapter 6 Error Report / 6.1 Det`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dma_Init", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARTITION_MAPPING", "Dma_DeInit", "Dma_GetVersionInfo", "DMA_E_PARAM_VINFO_U8"]
- `anchor`: `Det`

### SEC-006-002
- `source_number`: `6.2`
- `title`: `Dem`
- `path`: `Chapter 6 Error Report / 6.2 Dem`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dma_Init", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARTITION_MAPPING", "Dma_DeInit", "Dma_GetVersionInfo", "DMA_E_PARAM_VINFO_U8"]
- `anchor`: `Dem`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: `Function Calls`
- `path`: `Chapter 7 Function Calls`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer"]
- `anchor`: `Function Calls`

### SEC-007-001
- `source_number`: `7.1`
- `title`: `Function Calls during Startup`
- `path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer"]
- `anchor`: `Function Calls during Startup`

### SEC-007-002
- `source_number`: `7.2`
- `title`: `Function Calls during Shutdown`
- `path`: `Chapter 7 Function Calls / 7.2 Function Calls during Shutdown`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer"]
- `anchor`: `Function Calls during Shutdown`

### SEC-007-003
- `source_number`: `7.3`
- `title`: `Function Calls during Wake-up`
- `path`: `Chapter 7 Function Calls / 7.3 Function Calls during Wake-up`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer"]
- `anchor`: `Function Calls during Wake-up`

### SEC-007-004
- `source_number`: `7.4`
- `title`: `Function Calls during Runtime`
- `path`: `Chapter 7 Function Calls / 7.4 Function Calls during Runtime`
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer"]
- `anchor`: `Function Calls during Runtime`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: `Other Requirements`
- `path`: `Chapter 8 Other Requirements`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["CDD_DMA_Cfg.c", "Mcal.h", "DMA0_IRQHandler", "DMA0_Done_Isr", "NULL_PTR", "CDD_DMA_Cfg", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE"]
- `anchor`: `Other Requirements`

### SEC-008-001
- `source_number`: `8.1`
- `title`: `Notification, Callback, Callout`
- `path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["CDD_DMA_Cfg.c", "Mcal.h", "DMA0_IRQHandler", "DMA0_Done_Isr", "NULL_PTR", "CDD_DMA_Cfg", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE"]
- `anchor`: `Notification, Callback, Callout`

### SEC-008-002
- `source_number`: `8.2`
- `title`: `Macros`
- `path`: `Chapter 8 Other Requirements / 8.2 Macros`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["CDD_DMA_Cfg.c", "Mcal.h", "DMA0_IRQHandler", "DMA0_Done_Isr", "NULL_PTR", "CDD_DMA_Cfg", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE"]
- `anchor`: `Macros`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: `Integration Steps`
- `path`: `Chapter 9 Integration Steps`
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["DMA", "Integration", "FC7xxx", "generate", "please", "Building", "details", "appropriate"]
- `anchor`: `Integration Steps`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["DMA", "FC7xxx", "Integration"]
- `anchors`: []

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["DMA", "FC7xxx", "Integration", "Revision", "History", "Changes", "Initial", "release", "MCAL", "Updated"]
- `anchors`: ["Revision History", "0.1 2023/07/14 Initial release for MCAL V0.1.0", "0.3 2023/10/20 Updated for MCAL V0.3.0", "0.4 2023/11/22 Updated for MCAL V0.4.0"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "memory_map", "error_report"]
- `keywords`: ["DMA", "FC7xxx", "Integration", "Contents", "Introduction", "Building", "Dependencies", "Required", "Compile", "Memory"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .................................................................................................................................................... 4", "1.1 Introduction ..................................................................................................................................................... 4", "Chapter 2 Building ........................................................................................................................................................... 5"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `keywords`: ["DMA", "FC7xxx", "Integration", "Introduction", "describes", "requirements"]
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for the DMA module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `content_types`: ["text"]
- `keywords`: ["_MCAL/Src/DMA/Src/CDD_Dma.c", "_MCAL/Src/DMA/Src/Dma_HWA.c", "_MCAL/Src/DMA/Src/Dma_Isr.c", "_MCAL/Src/DMA/Src/Dma_LLD.c", "_MCAL/Src/DMA/include/CDD_Dma.h", "_MCAL/Src/DMA/include/Dma_HWA.h", "_MCAL/Src/DMA/include/Dma_LLD.h", "_MCAL/Src/DMA/include/Dma_Memmap.h", "_MCAL/Src/DMA/include/Dma_Reg.h", "_MCAL/Src/DMA/include/Dma_Types.h"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "• Mcu: This module provides peripherals PCC assignment for Dma module (include Dma and Dma_mux).", "2.2 Files Required for Compile"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `content_types`: ["text"]
- `keywords`: ["Det.h", "SchM_Dma.h", "SchM_Dma", "EB_Plugins", "DMA", "FC7xxx", "Integration", "developed", "tresos", "Studio"]
- `anchors`: ["• SchM_Dma.h", "2.3 Add Plug-ins", "1) Copy the DMA module(_MCAL/EB_Plugins/eclipse/plugins/DMA) folder to EB tresos plug-ins (EB/tresos/plugins/)", "2) Set the DMA module output location folder for the generated source file and header files."]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `keywords`: ["DMA_START_SEC_CONST_16", "DMA_STOP_SEC_VAR_NO_INIT_16", "DMA_START_SEC_CONFIG_DATA_8", "DMA_STOP_SEC_CONFIG_DATA_8", "DMA_START_SEC_CONFIG_DATA_16", "DMA_STOP_SEC_CONFIG_DATA_16", "DMA_START_SEC_CONFIG_DATA_32", "DMA_STOP_SEC_CONFIG_DATA_32", "DMA_START_SEC_CONFIG_DATA_UNSPECIFIED", "DMA_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "DMA_START_SEC_CONFIG_DATA_8 Variables These are all the sections used", "DMA_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `keywords`: ["DMA_START_SEC_VAR", "DMA_STOP_SEC_VAR_INIT_16", "DMA_START_SEC_VAR_INIT_32", "DMA_STOP_SEC_VAR_INIT_32", "DMA_START_SEC_VAR_INIT_", "DMA_STOP_SEC_VAR_INIT_", "DMA_START_SEC_VAR_NO_INIT_SHARE_MEMORY", "DMA_STOP_SEC_VAR_NO_INIT_SHARE_MEMORY", "DMA_START_SEC_VAR_INIT_SHARE_MEMORY", "DMA_STOP_SEC_VAR_INIT_SHARE_MEMORY"]
- `anchors`: ["DMA_START_SEC_VAR _INIT_16 startup code (data).", "DMA_STOP_SEC_VAR_INIT_16", "DMA_START_SEC_VAR_INIT_32", "DMA_STOP_SEC_VAR_INIT_32"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `keywords`: ["CDD_Dma.c", "Dma_LLD.c", "CDD_Dma", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00", "Dma_DeInit", "Dma_LLD", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01", "Dma_LLD_Init", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_02", "Dma_LLD_CheckCircularBuffer"]
- `anchors`: ["Chapter 4 Exclusive Area", "• CDD_Dma.c", "- SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00 is used in Dma_DeInit.", "• Dma_LLD.c"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `keywords`: ["DMA", "FC7xxx", "Integration", "Interrupt", "Service", "Routine", "ISR", "Instance", "IRQ", "Number"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance Interrupt Name IRQ Number (NVIC Interrupt ID)", "DMA 0 / DMA 1 DMA channel 0 transfer complete 0", "DMA 0 / DMA 1 DMA channel 1 transfer complete 1"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "table_like", "text"]
- `keywords`: ["Dma_Init", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARTITION_MAPPING", "Dma_DeInit", "Dma_GetVersionInfo", "DMA_E_PARAM_VINFO_U8", "Dma_CancelTansfer", "Dma_ErrorCancelTansfer"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Dma_Init DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `content_types`: ["text"]
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer", "DMA", "FC7xxx"]
- `anchors`: ["Chapter 7 Function Calls", "7.1 Function Calls during Startup", "The API needs to be called is \"Dma_Init\" and \"Dma_ConfigChannel\". When starting DMA handling, for hardware triggered", "channels, API \"Dma_EnableHwRequest\" should be used, and for software triggered channels, API \"Dma_StartChannel\""]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `content_types`: ["text"]
- `keywords`: ["CDD_DMA_Cfg.c", "Mcal.h", "DMA0_IRQHandler", "DMA0_Done_Isr", "NULL_PTR", "CDD_DMA_Cfg", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE", "DMA", "CDD_Dma"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "If the user enables the DMA complete interrupt or DMA error interrupt, and the callout value is not \"NULL_PTR\" or", "\"NULL\", an extern declaration will generate in CDD_DMA_Cfg.c. User can implement the notification in any file."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 9 Integration Steps`
- `content_types`: ["text"]
- `keywords`: ["DMA", "FC7xxx", "Integration", "generate", "please", "Building", "details", "appropriate", "memory", "linker"]
- `anchors`: ["Chapter 9 Integration Steps", "1) Configure the DMA module and generate configuration files (please refer to Building chapter for details).", "2) Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details).", "3) Coding with detailed channel configuration."]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx DMA Integration Manual and its visible revision.
- `keywords`: ["DMA", "FC7xxx", "Integration"]
- `anchors`: []
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history for the FC7xxx DMA document.
- `keywords`: ["DMA", "FC7xxx", "Integration", "Revision", "History", "Changes", "Initial", "release", "MCAL", "Updated"]
- `anchors`: ["Revision History", "0.1 2023/07/14 Initial release for MCAL V0.1.0", "0.3 2023/10/20 Updated for MCAL V0.3.0", "0.4 2023/11/22 Updated for MCAL V0.4.0"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "memory_map", "error_report"]
- `summary`: Table of contents page mapping chapters and subsections to printed/source page labels.
- `keywords`: ["DMA", "FC7xxx", "Integration", "Contents", "Introduction", "Building", "Dependencies", "Required", "Compile", "Memory"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .................................................................................................................................................... 4", "1.1 Introduction ..................................................................................................................................................... 4", "Chapter 2 Building ........................................................................................................................................................... 5"]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `summary`: Chapter 1 Introduction 1.1 Introduction
- `keywords`: ["DMA", "FC7xxx", "Integration", "Introduction", "describes", "requirements"]
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for the DMA module."]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `content_types`: ["text"]
- `summary`: Chapter 2 Building 2.1 Dependencies on Other Modules
- `keywords`: ["_MCAL/Src/DMA/Src/CDD_Dma.c", "_MCAL/Src/DMA/Src/Dma_HWA.c", "_MCAL/Src/DMA/Src/Dma_Isr.c", "_MCAL/Src/DMA/Src/Dma_LLD.c", "_MCAL/Src/DMA/include/CDD_Dma.h", "_MCAL/Src/DMA/include/Dma_HWA.h", "_MCAL/Src/DMA/include/Dma_LLD.h", "_MCAL/Src/DMA/include/Dma_Memmap.h", "_MCAL/Src/DMA/include/Dma_Reg.h", "_MCAL/Src/DMA/include/Dma_Types.h"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "• Mcu: This module provides peripherals PCC assignment for Dma module (include Dma and Dma_mux).", "2.2 Files Required for Compile"]
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `content_types`: ["text"]
- `summary`: Det module files: Rte module files:
- `keywords`: ["Det.h", "SchM_Dma.h", "SchM_Dma", "EB_Plugins", "DMA", "FC7xxx", "Integration", "developed", "tresos", "Studio"]
- `anchors`: ["• SchM_Dma.h", "2.3 Add Plug-ins", "1) Copy the DMA module(_MCAL/EB_Plugins/eclipse/plugins/DMA) folder to EB tresos plug-ins (EB/tresos/plugins/)", "2) Set the DMA module output location folder for the generated source file and header files."]
- `quality_flags`: []

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `summary`: Indexes DMA memory section names, section types and placement descriptions for linker/memory-map integration.
- `keywords`: ["DMA_START_SEC_CONST_16", "DMA_STOP_SEC_VAR_NO_INIT_16", "DMA_START_SEC_CONFIG_DATA_8", "DMA_STOP_SEC_CONFIG_DATA_8", "DMA_START_SEC_CONFIG_DATA_16", "DMA_STOP_SEC_CONFIG_DATA_16", "DMA_START_SEC_CONFIG_DATA_32", "DMA_STOP_SEC_CONFIG_DATA_32", "DMA_START_SEC_CONFIG_DATA_UNSPECIFIED", "DMA_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "DMA_START_SEC_CONFIG_DATA_8 Variables These are all the sections used", "DMA_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `summary`: Indexes DMA memory section names, section types and placement descriptions for linker/memory-map integration.
- `keywords`: ["DMA_START_SEC_VAR", "DMA_STOP_SEC_VAR_INIT_16", "DMA_START_SEC_VAR_INIT_32", "DMA_STOP_SEC_VAR_INIT_32", "DMA_START_SEC_VAR_INIT_", "DMA_STOP_SEC_VAR_INIT_", "DMA_START_SEC_VAR_NO_INIT_SHARE_MEMORY", "DMA_STOP_SEC_VAR_NO_INIT_SHARE_MEMORY", "DMA_START_SEC_VAR_INIT_SHARE_MEMORY", "DMA_STOP_SEC_VAR_INIT_SHARE_MEMORY"]
- `anchors`: ["DMA_START_SEC_VAR _INIT_16 startup code (data).", "DMA_STOP_SEC_VAR_INIT_16", "DMA_START_SEC_VAR_INIT_32", "DMA_STOP_SEC_VAR_INIT_32"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `summary`: Chapter 4 Exclusive Area DMA module using the services of Schedule Manger (SchM) for entering and exiting critical regions.
- `keywords`: ["CDD_Dma.c", "Dma_LLD.c", "CDD_Dma", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00", "Dma_DeInit", "Dma_LLD", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01", "Dma_LLD_Init", "SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_02", "Dma_LLD_CheckCircularBuffer"]
- `anchors`: ["Chapter 4 Exclusive Area", "• CDD_Dma.c", "- SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00 is used in Dma_DeInit.", "• Dma_LLD.c"]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `summary`: Chapter 5 Interrupt Service Routine (ISR) Instance Interrupt Name IRQ Number (NVIC Interrupt ID)
- `keywords`: ["DMA", "FC7xxx", "Integration", "Interrupt", "Service", "Routine", "ISR", "Instance", "IRQ", "Number"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance Interrupt Name IRQ Number (NVIC Interrupt ID)", "DMA 0 / DMA 1 DMA channel 0 transfer complete 0", "DMA 0 / DMA 1 DMA channel 1 transfer complete 1"]
- `quality_flags`: []

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "table_like", "text"]
- `summary`: Lists DMA DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["Dma_Init", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARTITION_MAPPING", "Dma_DeInit", "Dma_GetVersionInfo", "DMA_E_PARAM_VINFO_U8", "Dma_CancelTansfer", "Dma_ErrorCancelTansfer"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Dma_Init DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_UNINIT_U8"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `content_types`: ["text"]
- `summary`: Chapter 7 Function Calls 7.1 Function Calls during Startup
- `keywords`: ["Dma_Init", "Dma_ConfigChannel", "Dma_EnableHwRequest", "Dma_StartChannel", "Dma_DeInit", "Dma_Halt", "Dma_Resume", "Dma_CancelTansfer", "DMA", "FC7xxx"]
- `anchors`: ["Chapter 7 Function Calls", "7.1 Function Calls during Startup", "The API needs to be called is \"Dma_Init\" and \"Dma_ConfigChannel\". When starting DMA handling, for hardware triggered", "channels, API \"Dma_EnableHwRequest\" should be used, and for software triggered channels, API \"Dma_StartChannel\""]
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `content_types`: ["text"]
- `summary`: Chapter 8 Other Requirements 8.1 Notification, Callback, Callout
- `keywords`: ["CDD_DMA_Cfg.c", "Mcal.h", "DMA0_IRQHandler", "DMA0_Done_Isr", "NULL_PTR", "CDD_DMA_Cfg", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE", "DMA", "CDD_Dma"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "If the user enables the DMA complete interrupt or DMA error interrupt, and the callout value is not \"NULL_PTR\" or", "\"NULL\", an extern declaration will generate in CDD_DMA_Cfg.c. User can implement the notification in any file."]
- `quality_flags`: []

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 9 Integration Steps`
- `content_types`: ["text"]
- `summary`: Chapter 9 Integration Steps 1) Configure the DMA module and generate configuration files (please refer to Building chapter for details).
- `keywords`: ["DMA", "FC7xxx", "Integration", "generate", "please", "Building", "details", "appropriate", "memory", "linker"]
- `anchors`: ["Chapter 9 Integration Steps", "1) Configure the DMA module and generate configuration files (please refer to Building chapter for details).", "2) Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details).", "3) Coding with detailed channel configuration."]
- `quality_flags`: []

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0002-001`
- `caption`: `Revision History`
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `bbox`: [215.6, 27.4, 379.5, 90.1]
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
- `bbox`: [207.7, 27.4, 387.6, 90.1]
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
- `bbox`: [36.0, 119.3, 97.5, 145.0]
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
- `bbox`: [36.0, 33.5, 97.5, 59.2]
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
- `bbox`: [36.0, 119.3, 103.5, 145.0]
- `table_type`: `error_report`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: Error-reporting table-like entry listing APIs/functions and DET/DEM error codes.
- `anchor`: `Function Name`
- `confidence`: `0.84`
- `quality_flags`: ["error_table_like", "cell_grid_not_rebuilt"]

## 7. Figure / Image Index

No source-numbered figures or significant embedded image blocks were detected.

## 8. Term / API / Config / Requirement Index

### FUNC-CDD-DMA
- `name`: `CDD_Dma`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5, 9]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/CDD_Dma.c", "p9: • CDD_Dma.c"]
- `aliases`: ["CDD Dma"]

### FUNC-CDD-DMA-CFG
- `name`: `CDD_DMA_Cfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5, 13]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL_generate/src/CDD_DMA_Cfg.c", "p13: \"NULL\", an extern declaration will generate in CDD_DMA_Cfg.c. User can implement the notification in any file."]
- `aliases`: ["CDD DMA Cfg"]

### FUNC-COMPILER-CFG
- `name`: `Compiler_Cfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Compiler_Cfg.h"]
- `aliases`: ["Compiler Cfg"]

### FUNC-DMA-HWA
- `name`: `Dma_HWA`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/Dma_HWA.c"]
- `aliases`: ["Dma HWA"]

### FUNC-DMA-ISR
- `name`: `Dma_Isr`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/Dma_Isr.c"]
- `aliases`: ["Dma Isr"]

### FUNC-DMA-LLD
- `name`: `Dma_LLD`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5, 9]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/Dma_LLD.c", "p9: • Dma_LLD.c"]
- `aliases`: ["Dma LLD"]

### FUNC-DMA-MEMMAP
- `name`: `Dma_Memmap`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_Memmap.h"]
- `aliases`: ["Dma Memmap"]

### FUNC-DMA-MUX
- `name`: `Dma_mux`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • Mcu: This module provides peripherals PCC assignment for Dma module (include Dma and Dma_mux)."]
- `aliases`: ["Dma mux"]

### FUNC-DMA-REG
- `name`: `Dma_Reg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_Reg.h"]
- `aliases`: ["Dma Reg"]

### FUNC-DMAMUX-HWA
- `name`: `DmaMux_HWA`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/DmaMux_HWA.h"]
- `aliases`: ["DmaMux HWA"]

### FUNC-DMAMUX-REG
- `name`: `DmaMux_Reg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/DmaMux_Reg.h"]
- `aliases`: ["DmaMux Reg"]

### FUNC-EB-PLUGINS
- `name`: `EB_Plugins`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p6: 1) Copy the DMA module(_MCAL/EB_Plugins/eclipse/plugins/DMA) folder to EB tresos plug-ins (EB/tresos/plugins/)"]
- `aliases`: ["EB Plugins"]

### FUNC-SCHM-DMA
- `name`: `SchM_Dma`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p6: • SchM_Dma.h"]
- `aliases`: ["SchM Dma"]

### FUNC-DMA-START-SEC-CONST-16
- `name`: `DMA_START_SEC_CONST_16`
- `type`: `function`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p7: DMA_START_SEC_CONST_16 (rodata)."]
- `aliases`: ["DMA START SEC CONST 16"]

### FUNC-DMA-STOP-SEC-VAR-NO-INIT-16
- `name`: `DMA_STOP_SEC_VAR_NO_INIT_16`
- `type`: `function`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_NO_INIT_16 (bss)."]
- `aliases`: ["DMA STOP SEC VAR NO INIT 16"]

### FUNC-DMA-DEINIT
- `name`: `Dma_DeInit`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9, 11, 12]
- `section_paths`: ["Chapter 4 Exclusive Area", "Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00 is used in Dma_DeInit.", "p11: Dma_DeInit DMA_E_ALREADY_INITIALIZED_U8", "p12: The API needs to be called is \"Dma_DeInit\"."]
- `aliases`: ["Dma DeInit"]

### FUNC-DMA-LLD-CHECKCIRCULARBUFFER
- `name`: `Dma_LLD_CheckCircularBuffer`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_02 is used in Dma_LLD_CheckCircularBuffer."]
- `aliases`: ["Dma LLD CheckCircularBuffer"]

### FUNC-DMA-LLD-INIT
- `name`: `Dma_LLD_Init`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01 is used in Dma_LLD_Init."]
- `aliases`: ["Dma LLD Init"]

### FUNC-DMA-LLD-SETOUTERLINKCHANNEL
- `name`: `Dma_LLD_SetOuterLinkChannel`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_03 is used in Dma_LLD_SetOuterLinkChannel."]
- `aliases`: ["Dma LLD SetOuterLinkChannel"]

### FUNC-SCHM-ENTER-DMA-DMA-EXCLUSIVE-AREA-00
- `name`: `SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00 is used in Dma_DeInit."]
- `aliases`: ["SchM Enter Dma DMA EXCLUSIVE AREA 00"]

### FUNC-SCHM-ENTER-DMA-DMA-EXCLUSIVE-AREA-01
- `name`: `SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01 is used in Dma_LLD_Init."]
- `aliases`: ["SchM Enter Dma DMA EXCLUSIVE AREA 01"]

### FUNC-SCHM-ENTER-DMA-DMA-EXCLUSIVE-AREA-02
- `name`: `SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_02`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_02 is used in Dma_LLD_CheckCircularBuffer."]
- `aliases`: ["SchM Enter Dma DMA EXCLUSIVE AREA 02"]

### FUNC-SCHM-ENTER-DMA-DMA-EXCLUSIVE-AREA-03
- `name`: `SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_03`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_03 is used in Dma_LLD_SetOuterLinkChannel."]
- `aliases`: ["SchM Enter Dma DMA EXCLUSIVE AREA 03"]

### FUNC-SCHM-ENTER-DMA-DMA-EXCLUSIVE-AREA-04
- `name`: `SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_04`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: - SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_04 is used in Dma_LLD_Init."]
- `aliases`: ["SchM Enter Dma DMA EXCLUSIVE AREA 04"]

### FUNC-DMA-CANCELTANSFER
- `name`: `Dma_CancelTansfer`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_CancelTansfer DMA_E_PARTITION_MAPPING", "p12: used. When canceling the remaining data transfer, API \"Dma_CancelTansfer\" should be used."]
- `aliases`: ["Dma CancelTansfer"]

### FUNC-DMA-CHECKIFTRANSFERACTIVE
- `name`: `Dma_CheckIfTransferActive`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_CheckIfTransferActive DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma CheckIfTransferActive"]

### FUNC-DMA-CHECKIFTRANSFERCOMPLETED
- `name`: `Dma_CheckIfTransferCompleted`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_CheckIfTransferCompleted DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma CheckIfTransferCompleted"]

### FUNC-DMA-CONFIGCHANNEL
- `name`: `Dma_ConfigChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_ConfigChannel DMA_E_PARAM_VINFO_U8", "p12: The API needs to be called is \"Dma_Init\" and \"Dma_ConfigChannel\". When starting DMA handling, for hardware triggered"]
- `aliases`: ["Dma ConfigChannel"]

### FUNC-DMA-DISABLEHWREQUEST
- `name`: `Dma_DisableHwRequest`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_DisableHwRequest DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma DisableHwRequest"]

### FUNC-DMA-ENABLEHWREQUEST
- `name`: `Dma_EnableHwRequest`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_EnableHwRequest DMA_E_INVALID_CHANNEL_U8", "p12: channels, API \"Dma_EnableHwRequest\" should be used, and for software triggered channels, API \"Dma_StartChannel\""]
- `aliases`: ["Dma EnableHwRequest"]

### FUNC-DMA-ERRORCANCELTANSFER
- `name`: `Dma_ErrorCancelTansfer`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_ErrorCancelTansfer DMA_E_PARTITION_MAPPING"]
- `aliases`: ["Dma ErrorCancelTansfer"]

### FUNC-DMA-GETVERSIONINFO
- `name`: `Dma_GetVersionInfo`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_GetVersionInfo DMA_E_PARAM_VINFO_U8"]
- `aliases`: ["Dma GetVersionInfo"]

### FUNC-DMA-HALT
- `name`: `Dma_Halt`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_Halt DMA_E_PARTITION_MAPPING", "p12: When halting DMA handling, API \"Dma_Halt\" should be used. When resuming DMA handling, API \"Dma_Resume\" should be"]
- `aliases`: ["Dma Halt"]

### FUNC-DMA-INIT
- `name`: `Dma_Init`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_Init DMA_E_ALREADY_INITIALIZED_U8", "p12: The API needs to be called is \"Dma_Init\" and \"Dma_ConfigChannel\". When starting DMA handling, for hardware triggered"]
- `aliases`: ["Dma Init"]

### FUNC-DMA-RESUME
- `name`: `Dma_Resume`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_Resume DMA_E_PARTITION_MAPPING", "p12: When halting DMA handling, API \"Dma_Halt\" should be used. When resuming DMA handling, API \"Dma_Resume\" should be"]
- `aliases`: ["Dma Resume"]

### FUNC-DMA-SETCFGCOMPLETEINTERRUPT
- `name`: `Dma_SetCfgCompleteInterrupt`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgCompleteInterrupt DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgCompleteInterrupt"]

### FUNC-DMA-SETCFGDADDR
- `name`: `Dma_SetCfgDaddr`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgDaddr DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgDaddr"]

### FUNC-DMA-SETCFGDLAST
- `name`: `Dma_SetCfgDlast`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgDlast DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgDlast"]

### FUNC-DMA-SETCFGDMODULOANDSIZE
- `name`: `Dma_SetCfgDModuloAndSize`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgDModuloAndSize DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgDModuloAndSize"]

### FUNC-DMA-SETCFGDOFF
- `name`: `Dma_SetCfgDoff`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgDoff DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgDoff"]

### FUNC-DMA-SETCFGSADDR
- `name`: `Dma_SetCfgSaddr`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgSaddr DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgSaddr"]

### FUNC-DMA-SETCFGSLAST
- `name`: `Dma_SetCfgSlast`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgSlast DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgSlast"]

### FUNC-DMA-SETCFGSMODULOANDSIZE
- `name`: `Dma_SetCfgSModuloAndSize`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgSModuloAndSize DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgSModuloAndSize"]

### FUNC-DMA-SETCFGSOFF
- `name`: `Dma_SetCfgSoff`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetCfgSoff DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetCfgSoff"]

### FUNC-DMA-SETCHANNELLOOPOFFSETANDNBYTES
- `name`: `Dma_SetChannelLoopOffsetAndNBYTES`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetChannelLoopOffsetAndNBYTES DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetChannelLoopOffsetAndNBYTES"]

### FUNC-DMA-SETCHANNELPRIORITY
- `name`: `Dma_SetChannelPriority`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetChannelPriority DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetChannelPriority"]

### FUNC-DMA-SETINNERLINKCHANNEL
- `name`: `Dma_SetInnerLinkChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetInnerLinkChannel DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetInnerLinkChannel"]

### FUNC-DMA-SETOUTERLINKCHANNEL
- `name`: `Dma_SetOuterLinkChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_SetOuterLinkChannel DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["Dma SetOuterLinkChannel"]

### FUNC-DMA-STARTCHANNEL
- `name`: `Dma_StartChannel`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: Dma_StartChannel DMA_E_INVALID_CHANNEL_U8", "p12: channels, API \"Dma_EnableHwRequest\" should be used, and for software triggered channels, API \"Dma_StartChannel\""]
- `aliases`: ["Dma StartChannel"]

### FUNC-DMA0-DONE-ISR
- `name`: `DMA0_Done_Isr`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p13: extern ISR(DMA0_Done_Isr);"]
- `aliases`: ["DMA0 Done Isr"]

### FUNC-DMA0-IRQHANDLER
- `name`: `DMA0_IRQHandler`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p13: void DMA0_IRQHandler (void)"]
- `aliases`: ["DMA0 IRQHandler"]

### ERR-DMA-E-ALREADY-INITIALIZED-U8
- `name`: `DMA_E_ALREADY_INITIALIZED_U8`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p11: Dma_Init DMA_E_ALREADY_INITIALIZED_U8"]
- `aliases`: ["DMA E ALREADY INITIALIZED U8"]

### ERR-DMA-E-INIT-FAILED-U8
- `name`: `DMA_E_INIT_FAILED_U8`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p11: DMA_E_INIT_FAILED_U8"]
- `aliases`: ["DMA E INIT FAILED U8"]

### ERR-DMA-E-INVALID-CHANNEL-U8
- `name`: `DMA_E_INVALID_CHANNEL_U8`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p11: DMA_E_INVALID_CHANNEL_U8"]
- `aliases`: ["DMA E INVALID CHANNEL U8"]

### ERR-DMA-E-PARAM-VINFO-U8
- `name`: `DMA_E_PARAM_VINFO_U8`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p11: Dma_GetVersionInfo DMA_E_PARAM_VINFO_U8"]
- `aliases`: ["DMA E PARAM VINFO U8"]

### ERR-DMA-E-PARTITION-MAPPING
- `name`: `DMA_E_PARTITION_MAPPING`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p11: DMA_E_PARTITION_MAPPING"]
- `aliases`: ["DMA E PARTITION MAPPING"]

### ERR-DMA-E-UNINIT-U8
- `name`: `DMA_E_UNINIT_U8`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p11: DMA_E_UNINIT_U8"]
- `aliases`: ["DMA E UNINIT U8"]

### TYPE-DMA-TYPES
- `name`: `Dma_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_Types.h"]
- `aliases`: ["Dma Types"]

### TYPE-PLATFORM-TYPES
- `name`: `Platform_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p5: • _MCAL/Src/Common/include/Platform_Types.h"]
- `aliases`: ["Platform Types"]

### TYPE-STD-TYPES
- `name`: `Std_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: DMA C type or AUTOSAR type symbol.
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

### FILE-MCAL-SRC-DMA-INCLUDE-CDD-DMA-H
- `name`: `_MCAL/Src/DMA/include/CDD_Dma.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/CDD_Dma.h"]
- `aliases`: [" MCAL/Src/DMA/include/CDD Dma.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMA-HWA-H
- `name`: `_MCAL/Src/DMA/include/Dma_HWA.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_HWA.h"]
- `aliases`: [" MCAL/Src/DMA/include/Dma HWA.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMA-LLD-H
- `name`: `_MCAL/Src/DMA/include/Dma_LLD.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_LLD.h"]
- `aliases`: [" MCAL/Src/DMA/include/Dma LLD.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMA-MEMMAP-H
- `name`: `_MCAL/Src/DMA/include/Dma_Memmap.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_Memmap.h"]
- `aliases`: [" MCAL/Src/DMA/include/Dma Memmap.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMA-REG-H
- `name`: `_MCAL/Src/DMA/include/Dma_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_Reg.h"]
- `aliases`: [" MCAL/Src/DMA/include/Dma Reg.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMA-TYPES-H
- `name`: `_MCAL/Src/DMA/include/Dma_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/Dma_Types.h"]
- `aliases`: [" MCAL/Src/DMA/include/Dma Types.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMAMUX-HWA-H
- `name`: `_MCAL/Src/DMA/include/DmaMux_HWA.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/DmaMux_HWA.h"]
- `aliases`: [" MCAL/Src/DMA/include/DmaMux HWA.h"]

### FILE-MCAL-SRC-DMA-INCLUDE-DMAMUX-REG-H
- `name`: `_MCAL/Src/DMA/include/DmaMux_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/include/DmaMux_Reg.h"]
- `aliases`: [" MCAL/Src/DMA/include/DmaMux Reg.h"]

### FILE-MCAL-SRC-DMA-SRC-CDD-DMA-C
- `name`: `_MCAL/Src/DMA/Src/CDD_Dma.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/CDD_Dma.c"]
- `aliases`: [" MCAL/Src/DMA/Src/CDD Dma.c"]

### FILE-MCAL-SRC-DMA-SRC-DMA-HWA-C
- `name`: `_MCAL/Src/DMA/Src/Dma_HWA.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/Dma_HWA.c"]
- `aliases`: [" MCAL/Src/DMA/Src/Dma HWA.c"]

### FILE-MCAL-SRC-DMA-SRC-DMA-ISR-C
- `name`: `_MCAL/Src/DMA/Src/Dma_Isr.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/Dma_Isr.c"]
- `aliases`: [" MCAL/Src/DMA/Src/Dma Isr.c"]

### FILE-MCAL-SRC-DMA-SRC-DMA-LLD-C
- `name`: `_MCAL/Src/DMA/Src/Dma_LLD.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL/Src/DMA/Src/Dma_LLD.c"]
- `aliases`: [" MCAL/Src/DMA/Src/Dma LLD.c"]

### FILE-MCAL-GENERATE-SRC-CDD-DMA-CFG-C
- `name`: `_MCAL_generate/src/CDD_DMA_Cfg.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL_generate/src/CDD_DMA_Cfg.c"]
- `aliases`: [" MCAL generate/src/CDD DMA Cfg.c"]

### FILE-CDD-DMA-CFG-H
- `name`: `CDD_DMA_Cfg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL_generate/include/ CDD_DMA_Cfg.h"]
- `aliases`: ["CDD DMA Cfg.h"]

### FILE-DET-H
- `name`: `Det.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • Det.h"]
- `aliases`: []

### FILE-SCHM-DMA-H
- `name`: `SchM_Dma.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • SchM_Dma.h"]
- `aliases`: ["SchM Dma.h"]

### FILE-CDD-DMA-C
- `name`: `CDD_Dma.c`
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p9: • CDD_Dma.c"]
- `aliases`: ["CDD Dma.c"]

### FILE-DMA-LLD-C
- `name`: `Dma_LLD.c`
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p9: • Dma_LLD.c"]
- `aliases`: ["Dma LLD.c"]

### FILE-CDD-DMA-CFG-C
- `name`: `CDD_DMA_Cfg.c`
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p13: \"NULL\", an extern declaration will generate in CDD_DMA_Cfg.c. User can implement the notification in any file."]
- `aliases`: ["CDD DMA Cfg.c"]

### FILE-MCAL-H
- `name`: `Mcal.h`
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p13: Please check various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### MEM-DMA-START-SEC
- `name`: `DMA_START_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONFIG_DATA_8 Variables These are all the sections used"]
- `aliases`: ["DMA START SEC "]

### MEM-DMA-START-SEC-CODE
- `name`: `DMA_START_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CODE Code Start and stop of memory"]
- `aliases`: ["DMA START SEC CODE"]

### MEM-DMA-START-SEC-CODE-AC
- `name`: `DMA_START_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CODE_AC"]
- `aliases`: ["DMA START SEC CODE AC"]

### MEM-DMA-START-SEC-CONFIG-DATA-16
- `name`: `DMA_START_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONFIG_DATA_16 aligned to 8/16/32 bit. These"]
- `aliases`: ["DMA START SEC CONFIG DATA 16"]

### MEM-DMA-START-SEC-CONFIG-DATA-32
- `name`: `DMA_START_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONFIG_DATA_32 startup code (rodata)."]
- `aliases`: ["DMA START SEC CONFIG DATA 32"]

### MEM-DMA-START-SEC-CONFIG-DATA-8
- `name`: `DMA_START_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONFIG_DATA_8 Variables These are all the sections used"]
- `aliases`: ["DMA START SEC CONFIG DATA 8"]

### MEM-DMA-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `DMA_START_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONFIG_DATA_UNSPECIFIED Configuration Data Start and stop of Memory Section"]
- `aliases`: ["DMA START SEC CONFIG DATA UNSPECIFIED"]

### MEM-DMA-START-SEC-CONST
- `name`: `DMA_START_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONST_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DMA START SEC CONST "]

### MEM-DMA-START-SEC-CONST-32
- `name`: `DMA_START_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONST_32"]
- `aliases`: ["DMA START SEC CONST 32"]

### MEM-DMA-START-SEC-CONST-8
- `name`: `DMA_START_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONST_8 aligned to 8/16/32 bit or boolean."]
- `aliases`: ["DMA START SEC CONST 8"]

### MEM-DMA-START-SEC-CONST-BOOLEAN
- `name`: `DMA_START_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_CONST_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DMA START SEC CONST BOOLEAN"]

### MEM-DMA-START-SEC-VAR-INIT-8
- `name`: `DMA_START_SEC_VAR_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_INIT_8 aligned to 8/16/32 bit. These"]
- `aliases`: ["DMA START SEC VAR INIT 8"]

### MEM-DMA-START-SEC-VAR-INIT-BOOLEAN
- `name`: `DMA_START_SEC_VAR_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_INIT_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DMA START SEC VAR INIT BOOLEAN"]

### MEM-DMA-START-SEC-VAR-NO-INIT
- `name`: `DMA_START_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DMA START SEC VAR NO INIT "]

### MEM-DMA-START-SEC-VAR-NO-INIT-16
- `name`: `DMA_START_SEC_VAR_NO_INIT_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_NO_INIT_16 never initialized by startup code"]
- `aliases`: ["DMA START SEC VAR NO INIT 16"]

### MEM-DMA-START-SEC-VAR-NO-INIT-32
- `name`: `DMA_START_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_NO_INIT_32"]
- `aliases`: ["DMA START SEC VAR NO INIT 32"]

### MEM-DMA-START-SEC-VAR-NO-INIT-8
- `name`: `DMA_START_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_NO_INIT_8 aligned to 8/16/32 bit. These"]
- `aliases`: ["DMA START SEC VAR NO INIT 8"]

### MEM-DMA-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `DMA_START_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections used"]
- `aliases`: ["DMA START SEC VAR NO INIT BOOLEAN"]

### MEM-DMA-STOP-SEC
- `name`: `DMA_STOP_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]
- `aliases`: ["DMA STOP SEC "]

### MEM-DMA-STOP-SEC-CODE
- `name`: `DMA_STOP_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CODE Section for Code (text)."]
- `aliases`: ["DMA STOP SEC CODE"]

### MEM-DMA-STOP-SEC-CODE-AC
- `name`: `DMA_STOP_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CODE_AC"]
- `aliases`: ["DMA STOP SEC CODE AC"]

### MEM-DMA-STOP-SEC-CONFIG-DATA-16
- `name`: `DMA_STOP_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONFIG_DATA_16 variables are initialized by"]
- `aliases`: ["DMA STOP SEC CONFIG DATA 16"]

### MEM-DMA-STOP-SEC-CONFIG-DATA-32
- `name`: `DMA_STOP_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONFIG_DATA_32"]
- `aliases`: ["DMA STOP SEC CONFIG DATA 32"]

### MEM-DMA-STOP-SEC-CONFIG-DATA-8
- `name`: `DMA_STOP_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONFIG_DATA_8 for variables which have to be"]
- `aliases`: ["DMA STOP SEC CONFIG DATA 8"]

### MEM-DMA-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `DMA_STOP_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONFIG_DATA_UNSPECIFIED for Config Data (rodata)."]
- `aliases`: ["DMA STOP SEC CONFIG DATA UNSPECIFIED"]

### MEM-DMA-STOP-SEC-CONST
- `name`: `DMA_STOP_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONST_BOOLEAN for variables which have to be"]
- `aliases`: ["DMA STOP SEC CONST "]

### MEM-DMA-STOP-SEC-CONST-16
- `name`: `DMA_STOP_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONST_16"]
- `aliases`: ["DMA STOP SEC CONST 16"]

### MEM-DMA-STOP-SEC-CONST-32
- `name`: `DMA_STOP_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONST_32"]
- `aliases`: ["DMA STOP SEC CONST 32"]

### MEM-DMA-STOP-SEC-CONST-8
- `name`: `DMA_STOP_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONST_8 These variables are read only"]
- `aliases`: ["DMA STOP SEC CONST 8"]

### MEM-DMA-STOP-SEC-CONST-BOOLEAN
- `name`: `DMA_STOP_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_CONST_BOOLEAN for variables which have to be"]
- `aliases`: ["DMA STOP SEC CONST BOOLEAN"]

### MEM-DMA-STOP-SEC-VAR-INIT-8
- `name`: `DMA_STOP_SEC_VAR_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_INIT_8 variables are initialized by"]
- `aliases`: ["DMA STOP SEC VAR INIT 8"]

### MEM-DMA-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: `DMA_STOP_SEC_VAR_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_INIT_BOOLEAN for variables which have to be"]
- `aliases`: ["DMA STOP SEC VAR INIT BOOLEAN"]

### MEM-DMA-STOP-SEC-VAR-NO-INIT
- `name`: `DMA_STOP_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_NO_INIT_BOOLEAN for variables which have to be"]
- `aliases`: ["DMA STOP SEC VAR NO INIT "]

### MEM-DMA-STOP-SEC-VAR-NO-INIT-32
- `name`: `DMA_STOP_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_NO_INIT_32"]
- `aliases`: ["DMA STOP SEC VAR NO INIT 32"]

### MEM-DMA-STOP-SEC-VAR-NO-INIT-8
- `name`: `DMA_STOP_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_NO_INIT_8 variables are never cleared and"]
- `aliases`: ["DMA STOP SEC VAR NO INIT 8"]

### MEM-DMA-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `DMA_STOP_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: DMA_STOP_SEC_VAR_NO_INIT_BOOLEAN for variables which have to be"]
- `aliases`: ["DMA STOP SEC VAR NO INIT BOOLEAN"]

### MEM-DMA-START-SEC-VAR
- `name`: `DMA_START_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_START_SEC_VAR _INIT_16 startup code (data)."]
- `aliases`: ["DMA START SEC VAR"]

### MEM-DMA-START-SEC-VAR-INIT
- `name`: `DMA_START_SEC_VAR_INIT_`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_START_SEC_VAR_INIT_32"]
- `aliases`: ["DMA START SEC VAR INIT "]

### MEM-DMA-START-SEC-VAR-INIT-32
- `name`: `DMA_START_SEC_VAR_INIT_32`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_START_SEC_VAR_INIT_32"]
- `aliases`: ["DMA START SEC VAR INIT 32"]

### MEM-DMA-START-SEC-VAR-INIT-SHARE-MEMORY
- `name`: `DMA_START_SEC_VAR_INIT_SHARE_MEMORY`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_START_SEC_VAR_INIT_SHARE_MEMORY defined in SRAM for multicore"]
- `aliases`: ["DMA START SEC VAR INIT SHARE MEMORY"]

### MEM-DMA-START-SEC-VAR-NO-INIT-SHARE-MEMORY
- `name`: `DMA_START_SEC_VAR_NO_INIT_SHARE_MEMORY`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_START_SEC_VAR_NO_INIT_SHARE_MEMORY Variables These are all the sections used"]
- `aliases`: ["DMA START SEC VAR NO INIT SHARE MEMORY"]

### MEM-DMA-STOP-SEC-VAR-INIT
- `name`: `DMA_STOP_SEC_VAR_INIT_`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_STOP_SEC_VAR_INIT_16"]
- `aliases`: ["DMA STOP SEC VAR INIT "]

### MEM-DMA-STOP-SEC-VAR-INIT-16
- `name`: `DMA_STOP_SEC_VAR_INIT_16`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_STOP_SEC_VAR_INIT_16"]
- `aliases`: ["DMA STOP SEC VAR INIT 16"]

### MEM-DMA-STOP-SEC-VAR-INIT-32
- `name`: `DMA_STOP_SEC_VAR_INIT_32`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_STOP_SEC_VAR_INIT_32"]
- `aliases`: ["DMA STOP SEC VAR INIT 32"]

### MEM-DMA-STOP-SEC-VAR-INIT-SHARE-MEMORY
- `name`: `DMA_STOP_SEC_VAR_INIT_SHARE_MEMORY`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_STOP_SEC_VAR_INIT_SHARE_MEMORY interaction. These variables are"]
- `aliases`: ["DMA STOP SEC VAR INIT SHARE MEMORY"]

### MEM-DMA-STOP-SEC-VAR-NO-INIT-SHARE-MEMORY
- `name`: `DMA_STOP_SEC_VAR_NO_INIT_SHARE_MEMORY`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: DMA MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: DMA_STOP_SEC_VAR_NO_INIT_SHARE_MEMORY for variables which have to be"]
- `aliases`: ["DMA STOP SEC VAR NO INIT SHARE MEMORY"]

### TERM-DMA
- `name`: `DMA`
- `type`: `module`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
- `section_paths`: ["Cover", "Revision History", "Table of Contents", "Chapter 1 Introduction / 1.1 Introduction", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p1: FC7xxx DMA Integration Manual Rev.0.4", "p2: FC7xxx DMA Integration Manual"]
- `aliases`: ["Direct Memory Access", "直接内存访问"]

### TERM-MCAL
- `name`: `MCAL`
- `type`: `module`
- `primary_page`: `2`
- `physical_pages`: [2, 5, 6, 13]
- `section_paths`: ["Revision History", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p2: 0.1 2023/07/14 Initial release for MCAL V0.1.0", "p5: • _MCAL/Src/DMA/Src/CDD_Dma.c", "p6: 1) Copy the DMA module(_MCAL/EB_Plugins/eclipse/plugins/DMA) folder to EB tresos plug-ins (EB/tresos/plugins/)", "p13: Please check various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `module`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p13: AUTOSAR_OS_NOT_USED need defined."]
- `aliases`: []

### TERM-DEM
- `name`: `Dem`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 11]
- `section_paths`: ["Table of Contents", "Chapter 6 Error Report / 6.1 Det"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 6.2 Dem ................................................................................................................................................................. 11", "p11: 6.2 Dem"]
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 5, 6, 11, 13, 14]
- `section_paths`: ["Table of Contents", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 6 Error Report / 6.1 Det", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout", "Chapter 9 Integration Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 6.1 Det ................................................................................................................................................................... 11", "p5: • Det: The configuration item \"DmaDevErrorDetect\" depends on Det.", "p6: Det module files:", "p11: 6.1 Det", "p13: Please check various definitions available in Common module's include file Mcal.h for details.", "p14: 1) Configure the DMA module and generate configuration files (please refer to Building chapter for details)."]
- `aliases`: []

### TERM-PORT
- `name`: `Port`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 11, 13]
- `section_paths`: ["Table of Contents", "Chapter 6 Error Report / 6.1 Det", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: Chapter 6 Error Report ................................................................................................................................................... 11", "p11: Chapter 6 Error Report", "p13: When using hardware triggering, it is important to pay attention to the configuration of the callout function interface. Most"]
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 13]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Common: This module is the basic module which used to choose the chip.", "p13: Please check various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### TERM-MCU
- `name`: `Mcu`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Mcu: This module provides peripherals PCC assignment for Dma module (include Dma and Dma_mux)."]
- `aliases`: []

### TERM-RTE
- `name`: `Rte`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 6]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Rte: This module provides APIs to protect/unprotect some parts of code from interrupts (Exclusive Areas).", "p6: Rte module files:"]
- `aliases`: []

### TERM-EB-TRESOS
- `name`: `EB tresos`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p6: DMA module plug-ins are developed for EB tresos Studio, so, to use DMA plug-ins on the EB tresos Studio, the user needs to"]
- `aliases`: []

### TERM-SCHM
- `name`: `SchM`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6, 9]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 4 Exclusive Area"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p6: • SchM_Dma.h", "p9: DMA module using the services of Schedule Manger (SchM) for entering and exiting critical regions."]
- `aliases`: []

## 9. Search Aliases

### ALIAS-MCAL
- `canonical`: `MCAL`
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "AUTOSAR MCAL", "底层驱动"]
- `related_ids`: ["TERM-MCAL"]

### ALIAS-AUTOSAR
- `canonical`: `AUTOSAR`
- `aliases`: ["AUTOSAR Classic", "AUTOSAR Classic Platform", "CP", "AUTOSAR CP", "汽车开放系统架构"]
- `related_ids`: ["TERM-AUTOSAR"]

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

### ALIAS-DMA
- `canonical`: `DMA`
- `aliases`: ["Direct Memory Access", "Dma", "DMA driver", "DMA module", "直接内存访问", "DMA模块", "DMA驱动"]
- `related_ids`: ["TERM-DMA"]

### ALIAS-DMAMUX
- `canonical`: `DMAMUX`
- `aliases`: ["DMA MUX", "DMA Multiplexer", "Direct Memory Access Multiplexer", "DmaMux", "DMA多路复用"]
- `related_ids`: []

### ALIAS-CDD-DMA
- `canonical`: `CDD_Dma`
- `aliases`: ["CDD DMA", "Complex Driver DMA", "CDD_Dma.c", "Dma CDD", "复杂驱动DMA"]
- `related_ids`: ["FUNC-CDD-DMA"]

### ALIAS-DMACHANNEL
- `canonical`: `DmaChannel`
- `aliases`: ["DMA channel", "Dma_ChannelConfigType", "DmaChannelConfig", "DMA通道"]
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
- `purpose`: `Close keyword lookup gaps between DMA_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `DMA_Integration_Manual.pdf`
- `source_pdf_sha256`: `e22c094b45b3054d58d8c22bf99e5675cd4699455a747beefa9d20da8793624e`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `32`
- `technical_missing_terms_added`: `1`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `32`
- `supplemented_missing_technical_token_count`: `1`
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
  - "initialization"
  - "initialize"
  - "modules"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "add"
  - "configure"
  - "first"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "RAMCODE"

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
  - "following"

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
  - "None"
  - "Proprietary"
  - "case"
  - "define"
  - "ensure"
  - "example"
  - "machines"
  - "modules"
  - "normal"
  - "operation"
  - "peripheral"
  - "state"
  - "vector"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "ISER"
  - "NVIC_"
  - "Proprietary"
  - "corresponding"
  - "dependent"
  - "enable"
  - "locations"
  - "modules"
  - "their"
  - "vector"

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
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: []
- `affected_ids`: []
- `message`: No formal SWS_* or SRS_* requirement IDs were detected in this PDF. Internal SEC/TBL/FIG IDs are navigation IDs only.
- `recommended_action`: Do not treat internal manifest IDs as source-document requirement numbers.

### WARN-0005
- `severity`: `low`
- `category`: `source_text_spacing`
- `physical_pages`: [5]
- `affected_ids`: []
- `message`: The file list contains a source-visible space before CDD_DMA_Cfg.h in one generated include path; search both spaced and normalized variants.
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
- `source_pdf_sha256`: `e22c094b45b3054d58d8c22bf99e5675cd4699455a747beefa9d20da8793624e`
- `manifest_source_pdf_sha256`: `e22c094b45b3054d58d8c22bf99e5675cd4699455a747beefa9d20da8793624e`
- `sha256_match`: `True`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `32`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

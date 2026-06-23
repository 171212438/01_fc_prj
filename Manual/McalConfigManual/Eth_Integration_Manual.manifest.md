---
manifest_schema_version: "1.1"
source_pdf: "Eth_Integration_Manual.pdf"
source_pdf_sha256: "8d59690babbc14c8b167f23bf782a758ba55e1030c24b2e3bc7e91fba8293e33"
source_pdf_size_bytes: 356442
pdf_page_count: 16
generated_at: "2026-06-19T11:17:45Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.5.0"
source_document_id: null
source_document_revision: "Rev.A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: Eth_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `Eth_Integration_Manual.pdf`
- `source_pdf_sha256`: `8d59690babbc14c8b167f23bf782a758ba55e1030c24b2e3bc7e91fba8293e33`
- `source_pdf_size_bytes`: `356442`
- `pdf_page_count`: `16`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.A0`
- `visible_cover_title`: `FC7xxx ETH Integration Manual`
- `visible_cover_revision`: `Rev.A0`
- `revision_history_latest_row`: `A0 / 2025/01/16 / Add support for FC7300F8MDQ`
- `generated_at`: `2026-06-19T11:17:45Z`
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

- `topic`: FC7xxx AUTOSAR MCAL ETH/Ethernet module - Integration Manual
- `module_scope`: ETH integration dependencies, build files, plug-ins, memory map, exclusive areas, ISR handling, DET/DEM reporting and integration steps.
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements"]
- `key_terms`: ["ETH", "Ethernet", "ENET", "Eth driver", "EthCtrl", "MII", "RMII", "RGMII", "MDIO", "TSN", "AVB", "Eth_ConfigType", "MCAL", "AUTOSAR", "EB tresos", "Rte"]
- `summary`: This 16-page document describes integration requirements for the FC7xxx ETH MCAL module, including dependencies, required compile files, EB tresos plug-in setup, memory sections, exclusive areas, ISR/function-call expectations, error reporting and integration steps.
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
- `keywords`: ["ETH", "FC7xxx", "Integration"]
- `anchor`: `FC7xxx ETH Integration Manual`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["ETH", "Revision", "History", "FC7xxx", "Integration", "Changes", "support", "FC7300F8MDQ"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["ETH", "Contents", "FC7xxx", "Integration", "Introduction", "Building", "Dependencies", "Required"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ETH", "Introduction", "FC7xxx", "Integration", "describes", "requirements"]
- `anchor`: `Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction / 1.1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ETH", "Introduction", "FC7xxx", "Integration", "describes", "requirements"]
- `anchor`: `Introduction`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Building`
- `path`: `Chapter 2 Building`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["MCAL/Src/Eth/src/Eth.c", "MCAL/Src/Eth/src/Eth_Hal.c", "src/Eth_Irq.c", "MCAL/Src/Eth/include/Eth.h", "MCAL/Src/Eth/include/Eth_Hal.h", "MCAL/Src/Eth/include/Eth_Types.h", "MCAL/Src/Eth/include/Eth_Hw.h", "MCAL/Src/Eth/include/Eth_Hw_Types.h"]
- `anchor`: `Building`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Dependencies on Other Modules`
- `path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MCAL/Src/Eth/src/Eth.c", "MCAL/Src/Eth/src/Eth_Hal.c", "src/Eth_Irq.c", "MCAL/Src/Eth/include/Eth.h", "MCAL/Src/Eth/include/Eth_Hal.h", "MCAL/Src/Eth/include/Eth_Types.h", "MCAL/Src/Eth/include/Eth_Hw.h", "MCAL/Src/Eth/include/Eth_Hw_Types.h"]
- `anchor`: `Dependencies on Other Modules`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `Files Required for Compile`
- `path`: `Chapter 2 Building / 2.2 Files Required for Compile`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MCAL/Src/Eth/src/Eth.c", "MCAL/Src/Eth/src/Eth_Hal.c", "src/Eth_Irq.c", "MCAL/Src/Eth/include/Eth.h", "MCAL/Src/Eth/include/Eth_Hal.h", "MCAL/Src/Eth/include/Eth_Types.h", "MCAL/Src/Eth/include/Eth_Hw.h", "MCAL/Src/Eth/include/Eth_Hw_Types.h"]
- `anchor`: `Files Required for Compile`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Add Plug-ins`
- `path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Det.h", "Det.c", "Dem.h", "Dem.c", "MCAL/Src/Rte/include/SchM_Eth.h", "MCAL/Src/Rte/include/SchM_Eth.c", "SchM_Eth", "EB_Plugins"]
- `anchor`: `Add Plug-ins`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Memory`
- `path`: `Chapter 3 Memory`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["ETH_START_SEC_CONFIG_DATA_8", "ETH_STOP_SEC_CONFIG_DATA_8", "ETH_START_SEC_CONFIG_DATA_16", "ETH_STOP_SEC_CONFIG_DATA_16", "ETH_START_SEC_CONFIG_DATA_32", "ETH_STOP_SEC_CONFIG_DATA_32", "ETH_START_SEC_CONFIG_DATA_UNSPECIFIED", "ETH_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchor`: `Memory`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Sections in Memory Map`
- `path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["ETH_START_SEC_CONFIG_DATA_8", "ETH_STOP_SEC_CONFIG_DATA_8", "ETH_START_SEC_CONFIG_DATA_16", "ETH_STOP_SEC_CONFIG_DATA_16", "ETH_START_SEC_CONFIG_DATA_32", "ETH_STOP_SEC_CONFIG_DATA_32", "ETH_START_SEC_CONFIG_DATA_UNSPECIFIED", "ETH_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchor`: `Sections in Memory Map`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Exclusive Area`
- `path`: `Chapter 4 Exclusive Area`
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Eth_Hal.c", "Eth_Hal", "Eth_Hal_AllocTxBuffer", "Eth_Hal_Transmit", "Eth_Hal_ReportTransmission", "Eth_Hal_SetControllerMode", "Eth_Hal_ReportReception", "Eth_Hal_GetCurrentTime"]
- `anchor`: `Exclusive Area`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: `Interrupt Service Routine (ISR)`
- `path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["ENET_Tx0_IRQHandler", "ENET_Tx1_IRQHandler", "ENET_Rx0_IRQHandler", "ENET_Rx1_IRQHandler", "ENET_System_IRQHandler", "ETH", "ENET", "Interrupt"]
- `anchor`: `Interrupt Service Routine (ISR)`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: `Error Report`
- `path`: `Chapter 6 Error Report`
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["Eth_Init", "ETH_E_PARAM_POINTER", "ETH_E_ALREADY_INITIALIZED", "Eth_SetControllerMode", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARTITION", "Eth_GetControllerMode", "ETH_E_UNINIT"]
- `anchor`: `Error Report`

### SEC-006-001
- `source_number`: `6.1`
- `title`: `Det`
- `path`: `Chapter 6 Error Report / 6.1 Det`
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["Eth_Init", "ETH_E_PARAM_POINTER", "ETH_E_ALREADY_INITIALIZED", "Eth_SetControllerMode", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARTITION", "Eth_GetControllerMode", "ETH_E_UNINIT"]
- `anchor`: `Det`

### SEC-006-002
- `source_number`: `6.2`
- `title`: `Dem`
- `path`: `Chapter 6 Error Report / 6.2 Dem`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE"]
- `anchor`: `Dem`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: `Function Calls`
- `path`: `Chapter 7 Function Calls`
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE"]
- `anchor`: `Function Calls`

### SEC-007-001
- `source_number`: `7.1`
- `title`: `Function Calls during Startup`
- `path`: `Chapter 7 Function Calls / 7.1 Function Calls during Startup`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE"]
- `anchor`: `Function Calls during Startup`

### SEC-007-002
- `source_number`: `7.2`
- `title`: `Function Calls during Shutdown`
- `path`: `Chapter 7 Function Calls / 7.2 Function Calls during Shutdown`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE"]
- `anchor`: `Function Calls during Shutdown`

### SEC-007-003
- `source_number`: `7.3`
- `title`: `Function Calls during Wake-up`
- `path`: `Chapter 7 Function Calls / 7.3 Function Calls during Wake-up`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE"]
- `anchor`: `Function Calls during Wake-up`

### SEC-007-004
- `source_number`: `7.4`
- `title`: `Function Calls during Runtime`
- `path`: `Chapter 7 Function Calls / 7.4 Function Calls during Runtime`
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE"]
- `anchor`: `Function Calls during Runtime`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: `Other Requirements`
- `path`: `Chapter 8 Other Requirements`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mcal.h", "ENET_System_IRQHandler", "Eth_System_ISR", "EthIf_TxConfirmation", "E_OK", "Eth_TxConfirmation", "EthIf_RxIndication", "Eth_Receive"]
- `anchor`: `Other Requirements`

### SEC-008-001
- `source_number`: `8.1`
- `title`: `Notification, Callback, Callout`
- `path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mcal.h", "ENET_System_IRQHandler", "Eth_System_ISR", "EthIf_TxConfirmation", "E_OK", "Eth_TxConfirmation", "EthIf_RxIndication", "Eth_Receive"]
- `anchor`: `Notification, Callback, Callout`

### SEC-008-002
- `source_number`: `8.2`
- `title`: `Macros`
- `path`: `Chapter 8 Other Requirements / 8.2 Macros`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mcal.h", "ENET_System_IRQHandler", "Eth_System_ISR", "EthIf_TxConfirmation", "E_OK", "Eth_TxConfirmation", "EthIf_RxIndication", "Eth_Receive"]
- `anchor`: `Macros`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: `Integration steps`
- `path`: `Chapter 9 Integration steps`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ETH", "Integration", "FC7xxx", "generate", "please", "Building", "details", "appropriate"]
- `anchor`: `Integration steps`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["ETH", "FC7xxx", "Integration"]
- `anchors`: ["FC7xxx ETH Integration"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["ETH", "FC7xxx", "Integration", "Revision", "History", "Changes", "support", "FC7300F8MDQ"]
- `anchors`: ["Revision History", "Revision Date Changes", "A0 2025/01/16 Add support for FC7300F8MDQ"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "memory_map", "error_report"]
- `keywords`: ["ETH", "FC7xxx", "Integration", "Contents", "Introduction", "Building", "Dependencies", "Required", "Compile", "Memory"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .......................................................................................................................................... 4", "1.1 Introduction ...................................................................................................................................................................", "Chapter 2 Building ................................................................................................................................................. 5"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `keywords`: ["ETH", "FC7xxx", "Integration", "Introduction", "describes", "requirements"]
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for ETH module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `content_types`: ["text"]
- `keywords`: ["MCAL/Src/Eth/src/Eth.c", "MCAL/Src/Eth/src/Eth_Hal.c", "src/Eth_Irq.c", "MCAL/Src/Eth/include/Eth.h", "MCAL/Src/Eth/include/Eth_Hal.h", "MCAL/Src/Eth/include/Eth_Types.h", "MCAL/Src/Eth/include/Eth_Hw.h", "MCAL/Src/Eth/include/Eth_Hw_Types.h", "MCAL/Src/Eth/include/Eth_Reg.h", "MCAL/Src/Eth/include/Eth_Version.h"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "2.2 Files Required for Compile", "• MCAL/Src/Eth/src/Eth_Hal.c"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `content_types`: ["text"]
- `keywords`: ["Det.h", "Det.c", "Dem.h", "Dem.c", "MCAL/Src/Rte/include/SchM_Eth.h", "MCAL/Src/Rte/include/SchM_Eth.c", "SchM_Eth", "EB_Plugins", "ETH", "FC7xxx"]
- `anchors`: ["• MCAL/Src/Rte/include/SchM_Eth.h", "• MCAL/Src/Rte/include/SchM_Eth.c", "2.3 Add Plug-ins", "1) Copy the Eth module(_MCAL/EB_Plugins/eclipse/plugins/ Eth) folder to EB tresos plug-ins (EB/tresos/plugins/)"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `keywords`: ["ETH_START_SEC_CONFIG_DATA_8", "ETH_STOP_SEC_CONFIG_DATA_8", "ETH_START_SEC_CONFIG_DATA_16", "ETH_STOP_SEC_CONFIG_DATA_16", "ETH_START_SEC_CONFIG_DATA_32", "ETH_STOP_SEC_CONFIG_DATA_32", "ETH_START_SEC_CONFIG_DATA_UNSPECIFIED", "ETH_STOP_SEC_CONFIG_DATA_UNSPECIFIED", "ETH_START_SEC_CONST_BOOLEAN", "ETH_STOP_SEC_CONST_BOOLEAN"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "ETH_START_SEC_CONFIG_DATA_8 Configuration Data These are all the sections", "ETH_STOP_SEC_CONFIG_DATA_8 used for variables which"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "text"]
- `keywords`: ["ETH_START_SEC_VAR", "ETH_STOP_SEC_VAR", "ETH_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETH_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE", "ETH_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE", "ETH_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"]
- `anchors`: ["ETH_START_SEC_VAR _INIT_ UNSPECIFIED", "ETH_STOP_SEC_VAR _INIT_ UNSPECIFIED", "ETH_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE Variables These are all the sections", "ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE used for variables which"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `keywords`: ["Eth_Hal.c", "Eth_Hal", "Eth_Hal_AllocTxBuffer", "Eth_Hal_Transmit", "Eth_Hal_ReportTransmission", "Eth_Hal_SetControllerMode", "Eth_Hal_ReportReception", "Eth_Hal_GetCurrentTime", "ETH", "Eth driver"]
- `anchors`: ["Chapter 4 Exclusive Area", "• Eth_Hal.c:", "- Eth_Hal_AllocTxBuffer: exclusive area 0", "- Eth_Hal_Transmit: exclusive area 1"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `keywords`: ["ENET_Tx0_IRQHandler", "ENET_Tx1_IRQHandler", "ENET_Rx0_IRQHandler", "ENET_Rx1_IRQHandler", "ENET_System_IRQHandler", "ETH", "ENET", "FC7xxx", "Integration", "Interrupt"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Eth ENET_Tx0_IRQHandler 66", "ENET_Tx1_IRQHandler 67", "ENET_Rx0_IRQHandler 68"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "table_like", "text"]
- `keywords`: ["Eth_Init", "ETH_E_PARAM_POINTER", "ETH_E_ALREADY_INITIALIZED", "Eth_SetControllerMode", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARTITION", "Eth_GetControllerMode", "ETH_E_UNINIT", "Eth_GetPhysAddr", "Eth_SetPhysAddr"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Eth_Init ETH_E_PARAM_POINTER", "ETH_E_ALREADY_INITIALIZED"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "text"]
- `keywords`: ["ETH_E_INV_PARTITION", "Eth_GetRxStats", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "Eth_GetTxStats", "Eth_GetTxErrorCounterValues", "Eth_GetCurrentTime", "Eth_EnableEgressTimeStamp", "ETH_E_INV_PARAM"]
- `anchors`: ["ETH_E_INV_PARTITION", "Eth_GetRxStats ETH_E_UNINIT;", "ETH_E_PARAM_POINTER;", "ETH_E_INV_CTRL_IDX;"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 6 Error Report / 6.2 Dem`
- `content_types`: ["error_report", "table_like", "text"]
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE", "Eth_TxConfirmation", "Eth_TimeAwareShaperInit"]
- `anchors`: ["ETH_E_INV_PARTITION", "Eth_Receive ETH_E_UNINIT;", "ETH_E_PARAM_POINTER;", "ETH_E_INV_CTRL_IDX;"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 7 Function Calls / 7.4 Function Calls during Runtime`
- `content_types`: ["text"]
- `keywords`: ["ETH", "FC7xxx", "Integration", "Runtime"]
- `anchors`: []

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `content_types`: ["text"]
- `keywords`: ["Mcal.h", "ENET_System_IRQHandler", "Eth_System_ISR", "EthIf_TxConfirmation", "E_OK", "Eth_TxConfirmation", "EthIf_RxIndication", "Eth_Receive", "EthIf_CtrlModeIndication", "Eth_MainFunction"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "Ethernet SW Driver shall call EthIf_TxConfirmation with Result set to E_OK to indicate a successful transmission;", "either from the Interrupt routine (in interrupt mode) or from the Eth_TxConfirmation routine in polling mode."]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 9 Integration steps`
- `content_types`: ["text"]
- `keywords`: ["ETH", "FC7xxx", "Integration", "generate", "please", "Building", "details", "appropriate", "memory", "linker"]
- `anchors`: ["Chapter 9 Integration steps", "1) Configure Eth module and generate configuration files (please refer to Building chapter for details).", "2) Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details).", "3) Map interrupt notification to their vector locations (please refer to chapter ISR for details)."]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx ETH Integration Manual and its visible revision.
- `keywords`: ["ETH", "FC7xxx", "Integration"]
- `anchors`: ["FC7xxx ETH Integration"]
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history for the FC7xxx ETH document.
- `keywords`: ["ETH", "FC7xxx", "Integration", "Revision", "History", "Changes", "support", "FC7300F8MDQ"]
- `anchors`: ["Revision History", "Revision Date Changes", "A0 2025/01/16 Add support for FC7300F8MDQ"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "memory_map", "error_report"]
- `summary`: Table of contents page mapping chapters and subsections to printed/source page labels.
- `keywords`: ["ETH", "FC7xxx", "Integration", "Contents", "Introduction", "Building", "Dependencies", "Required", "Compile", "Memory"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .......................................................................................................................................... 4", "1.1 Introduction ...................................................................................................................................................................", "Chapter 2 Building ................................................................................................................................................. 5"]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `summary`: Chapter 1 Introduction 1.1 Introduction
- `keywords`: ["ETH", "FC7xxx", "Integration", "Introduction", "describes", "requirements"]
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for ETH module."]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `content_types`: ["text"]
- `summary`: Chapter 2 Building 2.1 Dependencies on Other Modules
- `keywords`: ["MCAL/Src/Eth/src/Eth.c", "MCAL/Src/Eth/src/Eth_Hal.c", "src/Eth_Irq.c", "MCAL/Src/Eth/include/Eth.h", "MCAL/Src/Eth/include/Eth_Hal.h", "MCAL/Src/Eth/include/Eth_Types.h", "MCAL/Src/Eth/include/Eth_Hw.h", "MCAL/Src/Eth/include/Eth_Hw_Types.h", "MCAL/Src/Eth/include/Eth_Reg.h", "MCAL/Src/Eth/include/Eth_Version.h"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "2.2 Files Required for Compile", "• MCAL/Src/Eth/src/Eth_Hal.c"]
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `content_types`: ["text"]
- `summary`: Det module files: Dem module files:
- `keywords`: ["Det.h", "Det.c", "Dem.h", "Dem.c", "MCAL/Src/Rte/include/SchM_Eth.h", "MCAL/Src/Rte/include/SchM_Eth.c", "SchM_Eth", "EB_Plugins", "ETH", "FC7xxx"]
- `anchors`: ["• MCAL/Src/Rte/include/SchM_Eth.h", "• MCAL/Src/Rte/include/SchM_Eth.c", "2.3 Add Plug-ins", "1) Copy the Eth module(_MCAL/EB_Plugins/eclipse/plugins/ Eth) folder to EB tresos plug-ins (EB/tresos/plugins/)"]
- `quality_flags`: []

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "table_like", "text"]
- `summary`: Indexes ETH memory section names, section types and placement descriptions for linker/memory-map integration.
- `keywords`: ["ETH_START_SEC_CONFIG_DATA_8", "ETH_STOP_SEC_CONFIG_DATA_8", "ETH_START_SEC_CONFIG_DATA_16", "ETH_STOP_SEC_CONFIG_DATA_16", "ETH_START_SEC_CONFIG_DATA_32", "ETH_STOP_SEC_CONFIG_DATA_32", "ETH_START_SEC_CONFIG_DATA_UNSPECIFIED", "ETH_STOP_SEC_CONFIG_DATA_UNSPECIFIED", "ETH_START_SEC_CONST_BOOLEAN", "ETH_STOP_SEC_CONST_BOOLEAN"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "ETH_START_SEC_CONFIG_DATA_8 Configuration Data These are all the sections", "ETH_STOP_SEC_CONFIG_DATA_8 used for variables which"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["memory_map", "text"]
- `summary`: Indexes ETH memory section names, section types and placement descriptions for linker/memory-map integration.
- `keywords`: ["ETH_START_SEC_VAR", "ETH_STOP_SEC_VAR", "ETH_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETH_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE", "ETH_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE", "ETH_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE", "ETH_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"]
- `anchors`: ["ETH_START_SEC_VAR _INIT_ UNSPECIFIED", "ETH_STOP_SEC_VAR _INIT_ UNSPECIFIED", "ETH_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE Variables These are all the sections", "ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE used for variables which"]
- `quality_flags`: []

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `summary`: Chapter 4 Exclusive Area Eth module using the services of Schedule Manger (SchM) for entering and exiting critical regions.
- `keywords`: ["Eth_Hal.c", "Eth_Hal", "Eth_Hal_AllocTxBuffer", "Eth_Hal_Transmit", "Eth_Hal_ReportTransmission", "Eth_Hal_SetControllerMode", "Eth_Hal_ReportReception", "Eth_Hal_GetCurrentTime", "ETH", "Eth driver"]
- `anchors`: ["Chapter 4 Exclusive Area", "• Eth_Hal.c:", "- Eth_Hal_AllocTxBuffer: exclusive area 0", "- Eth_Hal_Transmit: exclusive area 1"]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `summary`: Chapter 5 Interrupt Service Routine (ISR) Instance Interrupt Name IRQ Number (NVIC Interrupt ID)
- `keywords`: ["ENET_Tx0_IRQHandler", "ENET_Tx1_IRQHandler", "ENET_Rx0_IRQHandler", "ENET_Rx1_IRQHandler", "ENET_System_IRQHandler", "ETH", "ENET", "FC7xxx", "Integration", "Interrupt"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Eth ENET_Tx0_IRQHandler 66", "ENET_Tx1_IRQHandler 67", "ENET_Rx0_IRQHandler 68"]
- `quality_flags`: []

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "table_like", "text"]
- `summary`: Lists ETH DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["Eth_Init", "ETH_E_PARAM_POINTER", "ETH_E_ALREADY_INITIALIZED", "Eth_SetControllerMode", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARTITION", "Eth_GetControllerMode", "ETH_E_UNINIT", "Eth_GetPhysAddr", "Eth_SetPhysAddr"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Eth_Init ETH_E_PARAM_POINTER", "ETH_E_ALREADY_INITIALIZED"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `content_types`: ["error_report", "text"]
- `summary`: Lists ETH DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["ETH_E_INV_PARTITION", "Eth_GetRxStats", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "Eth_GetTxStats", "Eth_GetTxErrorCounterValues", "Eth_GetCurrentTime", "Eth_EnableEgressTimeStamp", "ETH_E_INV_PARAM"]
- `anchors`: ["ETH_E_INV_PARTITION", "Eth_GetRxStats ETH_E_UNINIT;", "ETH_E_PARAM_POINTER;", "ETH_E_INV_CTRL_IDX;"]
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 6 Error Report / 6.2 Dem`
- `content_types`: ["error_report", "table_like", "text"]
- `summary`: Lists ETH DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["Eth_Init", "ETH_E_INV_PARTITION", "Eth_Receive", "ETH_E_UNINIT", "ETH_E_PARAM_POINTER", "ETH_E_INV_CTRL_IDX", "ETH_E_INV_PARAM", "ETH_E_INV_MODE", "Eth_TxConfirmation", "Eth_TimeAwareShaperInit"]
- `anchors`: ["ETH_E_INV_PARTITION", "Eth_Receive ETH_E_UNINIT;", "ETH_E_PARAM_POINTER;", "ETH_E_INV_CTRL_IDX;"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 7 Function Calls / 7.4 Function Calls during Runtime`
- `content_types`: ["text"]
- `summary`: Page in section Chapter 7 Function Calls / 7.4 Function Calls during Runtime.
- `keywords`: ["ETH", "FC7xxx", "Integration", "Runtime"]
- `anchors`: []
- `quality_flags`: []

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`
- `content_types`: ["text"]
- `summary`: Chapter 8 Other Requirements 8.1 Notification, Callback, Callout
- `keywords`: ["Mcal.h", "ENET_System_IRQHandler", "Eth_System_ISR", "EthIf_TxConfirmation", "E_OK", "Eth_TxConfirmation", "EthIf_RxIndication", "Eth_Receive", "EthIf_CtrlModeIndication", "Eth_MainFunction"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "Ethernet SW Driver shall call EthIf_TxConfirmation with Result set to E_OK to indicate a successful transmission;", "either from the Interrupt routine (in interrupt mode) or from the Eth_TxConfirmation routine in polling mode."]
- `quality_flags`: []

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 9 Integration steps`
- `content_types`: ["text"]
- `summary`: Chapter 9 Integration steps 1) Configure Eth module and generate configuration files (please refer to Building chapter for details).
- `keywords`: ["ETH", "FC7xxx", "Integration", "generate", "please", "Building", "details", "appropriate", "memory", "linker"]
- `anchors`: ["Chapter 9 Integration steps", "1) Configure Eth module and generate configuration files (please refer to Building chapter for details).", "2) Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details).", "3) Map interrupt notification to their vector locations (please refer to chapter ISR for details)."]
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

### TBL-0011-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-001`
- `caption`: `Error reporting table on page 11`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `bbox`: [36.0, 118.9, 105.1, 130.7]
- `table_type`: `error_report`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: Error-reporting table-like entry listing APIs/functions and DET/DEM error codes.
- `anchor`: `Function Name`
- `confidence`: `0.84`
- `quality_flags`: ["error_table_like", "cell_grid_not_rebuilt"]

### TBL-0013-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-001`
- `caption`: `Error reporting table on page 13`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 6 Error Report / 6.2 Dem`
- `bbox`: [36.0, 345.1, 105.1, 356.9]
- `table_type`: `error_report`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: Error-reporting table-like entry listing APIs/functions and DET/DEM error codes.
- `anchor`: `Function Name`
- `confidence`: `0.84`
- `quality_flags`: ["error_table_like", "cell_grid_not_rebuilt"]

## 7. Figure / Image Index

No source-numbered figures or significant embedded image blocks were detected.

## 8. Term / API / Config / Requirement Index

### API-ETH-MAINFUNCTION
- `name`: `Eth_MainFunction`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: Eth_MainFunction ETH_E_UNINIT", "p15: EthIf_CtrlModeIndication shall be called by Eth_MainFunction when the controller mode changed."]
- `aliases`: ["Eth MainFunction"]

### API-ETHIF-CTRLMODEINDICATION
- `name`: `EthIf_CtrlModeIndication`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH API/function entry documented with signature, parameters or return information.
- `anchors`: ["p15: EthIf_CtrlModeIndication shall be called by Eth_MainFunction when the controller mode changed."]
- `aliases`: ["EthIf CtrlModeIndication"]

### FUNC-COMPILER-CFG
- `name`: `Compiler_Cfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Base/include/Compiler_Cfg.h"]
- `aliases`: ["Compiler Cfg"]

### FUNC-ETH-CFG
- `name`: `Eth_Cfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL_generate_8M/include/Eth_Cfg.h"]
- `aliases`: ["Eth Cfg"]

### FUNC-ETH-HAL
- `name`: `Eth_Hal`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5, 9]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/src/Eth_Hal.c", "p9: • Eth_Hal.c:"]
- `aliases`: ["Eth Hal"]

### FUNC-ETH-HW
- `name`: `Eth_Hw`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Hw.h"]
- `aliases`: ["Eth Hw"]

### FUNC-ETH-IRQ
- `name`: `Eth_Irq`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/ src/Eth_Irq.c"]
- `aliases`: ["Eth Irq"]

### FUNC-ETH-MEMMAP
- `name`: `Eth_MemMap`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Base/include/MemMap/ Eth_MemMap.h"]
- `aliases`: ["Eth MemMap"]

### FUNC-ETH-PBCFG
- `name`: `Eth_PBcfg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • _MCAL_generate_8M/src/Eth_PBcfg.c"]
- `aliases`: ["Eth PBcfg"]

### FUNC-ETH-REG
- `name`: `Eth_Reg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Reg.h"]
- `aliases`: ["Eth Reg"]

### FUNC-ETH-VERSION
- `name`: `Eth_Version`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Version.h"]
- `aliases`: ["Eth Version"]

### FUNC-SCM-REG
- `name`: `Scm_Reg`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p5: • MCAL/Src/Common/include/ Scm_Reg.h"]
- `aliases`: ["Scm Reg"]

### FUNC-EB-PLUGINS
- `name`: `EB_Plugins`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p6: 1) Copy the Eth module(_MCAL/EB_Plugins/eclipse/plugins/ Eth) folder to EB tresos plug-ins (EB/tresos/plugins/)"]
- `aliases`: ["EB Plugins"]

### FUNC-SCHM-ETH
- `name`: `SchM_Eth`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p6: • MCAL/Src/Rte/include/SchM_Eth.h"]
- `aliases`: ["SchM Eth"]

### FUNC-ETH-HAL-ALLOCTXBUFFER
- `name`: `Eth_Hal_AllocTxBuffer`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p9: - Eth_Hal_AllocTxBuffer: exclusive area 0"]
- `aliases`: ["Eth Hal AllocTxBuffer"]

### FUNC-ETH-HAL-GETCURRENTTIME
- `name`: `Eth_Hal_GetCurrentTime`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p9: - Eth_Hal_GetCurrentTime: exclusive area 5"]
- `aliases`: ["Eth Hal GetCurrentTime"]

### FUNC-ETH-HAL-REPORTRECEPTION
- `name`: `Eth_Hal_ReportReception`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p9: - Eth_Hal_ReportReception: exclusive area 4"]
- `aliases`: ["Eth Hal ReportReception"]

### FUNC-ETH-HAL-REPORTTRANSMISSION
- `name`: `Eth_Hal_ReportTransmission`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p9: - Eth_Hal_ReportTransmission: exclusive area 2"]
- `aliases`: ["Eth Hal ReportTransmission"]

### FUNC-ETH-HAL-SETCONTROLLERMODE
- `name`: `Eth_Hal_SetControllerMode`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p9: - Eth_Hal_SetControllerMode: exclusive area 3"]
- `aliases`: ["Eth Hal SetControllerMode"]

### FUNC-ETH-HAL-TRANSMIT
- `name`: `Eth_Hal_Transmit`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p9: - Eth_Hal_Transmit: exclusive area 1"]
- `aliases`: ["Eth Hal Transmit"]

### FUNC-ENET-RX0-IRQHANDLER
- `name`: `ENET_Rx0_IRQHandler`
- `type`: `function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p10: ENET_Rx0_IRQHandler 68"]
- `aliases`: ["ENET Rx0 IRQHandler"]

### FUNC-ENET-RX1-IRQHANDLER
- `name`: `ENET_Rx1_IRQHandler`
- `type`: `function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p10: ENET_Rx1_IRQHandler 69"]
- `aliases`: ["ENET Rx1 IRQHandler"]

### FUNC-ENET-SYSTEM-IRQHANDLER
- `name`: `ENET_System_IRQHandler`
- `type`: `function`
- `primary_page`: `10`
- `physical_pages`: [10, 15]
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p10: ENET_System_IRQHandler 70", "p15: void ENET_System_IRQHandler (void)"]
- `aliases`: ["ENET System IRQHandler"]

### FUNC-ENET-TX0-IRQHANDLER
- `name`: `ENET_Tx0_IRQHandler`
- `type`: `function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p10: Eth ENET_Tx0_IRQHandler 66"]
- `aliases`: ["ENET Tx0 IRQHandler"]

### FUNC-ENET-TX1-IRQHANDLER
- `name`: `ENET_Tx1_IRQHandler`
- `type`: `function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p10: ENET_Tx1_IRQHandler 67"]
- `aliases`: ["ENET Tx1 IRQHandler"]

### FUNC-ETH-GETCONTROLLERMODE
- `name`: `Eth_GetControllerMode`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_GetControllerMode ETH_E_UNINIT;"]
- `aliases`: ["Eth GetControllerMode"]

### FUNC-ETH-GETCOUNTERVALUES
- `name`: `Eth_GetCounterValues`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_GetCounterValues ETH_E_UNINIT;"]
- `aliases`: ["Eth GetCounterValues"]

### FUNC-ETH-GETPHYSADDR
- `name`: `Eth_GetPhysAddr`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_GetPhysAddr ETH_E_UNINIT;"]
- `aliases`: ["Eth GetPhysAddr"]

### FUNC-ETH-INIT
- `name`: `Eth_Init`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_Init ETH_E_PARAM_POINTER", "p13: Eth_Init ETH_E_ACCESS"]
- `aliases`: ["Eth Init"]

### FUNC-ETH-READMII
- `name`: `Eth_ReadMii`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 15]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_ReadMii ETH_E_UNINIT;", "p15: The Eth_ReadMii shall call EthTrcv_ReadMiiIndication when the MII access finished."]
- `aliases`: ["Eth ReadMii"]

### FUNC-ETH-READMMD
- `name`: `Eth_ReadMmd`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_ReadMmd ETH_E_UNINIT;"]
- `aliases`: ["Eth ReadMmd"]

### FUNC-ETH-SETCONTROLLERMODE
- `name`: `Eth_SetControllerMode`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_SetControllerMode ETH _E_UNINIT;", "p13: Eth_SetControllerMode ETH_E_ACCESS"]
- `aliases`: ["Eth SetControllerMode"]

### FUNC-ETH-SETPHYSADDR
- `name`: `Eth_SetPhysAddr`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_SetPhysAddr ETH_E_UNINIT;"]
- `aliases`: ["Eth SetPhysAddr"]

### FUNC-ETH-UPDATEPHYSADDRFILTER
- `name`: `Eth_UpdatePhysAddrFilter`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_UpdatePhysAddrFilter ETH_E_UNINIT;"]
- `aliases`: ["Eth UpdatePhysAddrFilter"]

### FUNC-ETH-WRITEMII
- `name`: `Eth_WriteMii`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 15]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_WriteMii ETH_E_UNINIT;", "p15: The Eth_WriteMii shall call EthTrcv_WriteMiiIndication when the MII access finished."]
- `aliases`: ["Eth WriteMii"]

### FUNC-ETH-WRITEMMD
- `name`: `Eth_WriteMmd`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p11: Eth_WriteMmd ETH_E_UNINIT;"]
- `aliases`: ["Eth WriteMmd"]

### FUNC-ETH-ENABLEEGRESSTIMESTAMP
- `name`: `Eth_EnableEgressTimeStamp`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_EnableEgressTimeStamp ETH_E_UNINIT;"]
- `aliases`: ["Eth EnableEgressTimeStamp"]

### FUNC-ETH-GETCURRENTTIME
- `name`: `Eth_GetCurrentTime`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_GetCurrentTime ETH_E_UNINIT;"]
- `aliases`: ["Eth GetCurrentTime"]

### FUNC-ETH-GETEGRESSTIMESTAMP
- `name`: `Eth_GetEgressTimeStamp`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_GetEgressTimeStamp ETH_E_UNINIT;"]
- `aliases`: ["Eth GetEgressTimeStamp"]

### FUNC-ETH-GETINGRESSTIMESTAMP
- `name`: `Eth_GetIngressTimeStamp`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_GetIngressTimeStamp ETH_E_UNINIT;"]
- `aliases`: ["Eth GetIngressTimeStamp"]

### FUNC-ETH-GETRXSTATS
- `name`: `Eth_GetRxStats`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_GetRxStats ETH_E_UNINIT;"]
- `aliases`: ["Eth GetRxStats"]

### FUNC-ETH-GETTXERRORCOUNTERVALUES
- `name`: `Eth_GetTxErrorCounterValues`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_GetTxErrorCounterValues ETH_E_UNINIT;"]
- `aliases`: ["Eth GetTxErrorCounterValues"]

### FUNC-ETH-GETTXSTATS
- `name`: `Eth_GetTxStats`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_GetTxStats ETH_E_UNINIT;"]
- `aliases`: ["Eth GetTxStats"]

### FUNC-ETH-PROVIDETXBUFFER
- `name`: `Eth_ProvideTxBuffer`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_ProvideTxBuffer ETH_E_UNINIT;"]
- `aliases`: ["Eth ProvideTxBuffer"]

### FUNC-ETH-SETCORRECTIONTIME
- `name`: `Eth_SetCorrectionTime`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_SetCorrectionTime ETH_E_UNINIT;"]
- `aliases`: ["Eth SetCorrectionTime"]

### FUNC-ETH-SETGLOBALTIME
- `name`: `Eth_SetGlobalTime`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_SetGlobalTime ETH_E_UNINIT;"]
- `aliases`: ["Eth SetGlobalTime"]

### FUNC-ETH-TRANSMIT
- `name`: `Eth_Transmit`
- `type`: `function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p12: Eth_Transmit ETH_E_UNINIT;"]
- `aliases`: ["Eth Transmit"]

### FUNC-ETH-GETVERSIONINFO
- `name`: `Eth_GetVersionInfo`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p13: Eth_GetVersionInfo ETH_E_PARAM_POINTER"]
- `aliases`: ["Eth GetVersionInfo"]

### FUNC-ETH-RECEIVE
- `name`: `Eth_Receive`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p13: Eth_Receive ETH_E_UNINIT;", "p15: routine (in interrupt mode) or from the Eth_Receive routine in polling mode."]
- `aliases`: ["Eth Receive"]

### FUNC-ETH-SYSTEM-ISR
- `name`: `Eth_System_ISR`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p13: Eth_System_ISR ETH_E_SAFETY", "p15: extern ISR(Eth_System_ISR);"]
- `aliases`: ["Eth System ISR"]

### FUNC-ETH-TIMEAWARESHAPERINIT
- `name`: `Eth_TimeAwareShaperInit`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p13: Eth_TimeAwareShaperInit ETH_E_UNINIT;"]
- `aliases`: ["Eth TimeAwareShaperInit"]

### FUNC-ETH-TXCONFIRMATION
- `name`: `Eth_TxConfirmation`
- `type`: `function`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p13: Eth_TxConfirmation ETH_E_UNINIT;", "p15: either from the Interrupt routine (in interrupt mode) or from the Eth_TxConfirmation routine in polling mode."]
- `aliases`: ["Eth TxConfirmation"]

### FUNC-ETHIF-RXINDICATION
- `name`: `EthIf_RxIndication`
- `type`: `function`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p15: Ethernet SW Driver shall call EthIf_RxIndication to indicate a successful reception either from the Interrupt"]
- `aliases`: ["EthIf RxIndication"]

### FUNC-ETHIF-TXCONFIRMATION
- `name`: `EthIf_TxConfirmation`
- `type`: `function`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p15: Ethernet SW Driver shall call EthIf_TxConfirmation with Result set to E_OK to indicate a successful transmission;"]
- `aliases`: ["EthIf TxConfirmation"]

### FUNC-ETHTRCV-READMIIINDICATION
- `name`: `EthTrcv_ReadMiiIndication`
- `type`: `function`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p15: The Eth_ReadMii shall call EthTrcv_ReadMiiIndication when the MII access finished."]
- `aliases`: ["EthTrcv ReadMiiIndication"]

### FUNC-ETHTRCV-WRITEMIIINDICATION
- `name`: `EthTrcv_WriteMiiIndication`
- `type`: `function`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: ETH internal/helper function or callable symbol.
- `anchors`: ["p15: The Eth_WriteMii shall call EthTrcv_WriteMiiIndication when the MII access finished."]
- `aliases`: ["EthTrcv WriteMiiIndication"]

### MACRO-ETH-E
- `name`: `ETH_E_`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH macro/configuration constant or service/error identifier.
- `anchors`: ["p13: ETH_E_INV_PARTITION"]
- `aliases`: ["ETH E "]

### ERR-ETH-E-ALREADY-INITIALIZED
- `name`: `ETH_E_ALREADY_INITIALIZED`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p11: ETH_E_ALREADY_INITIALIZED"]
- `aliases`: ["ETH E ALREADY INITIALIZED"]

### ERR-ETH-E-INV-CTRL-IDX
- `name`: `ETH_E_INV_CTRL_IDX`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11, 12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p11: ETH_E_INV_CTRL_IDX;"]
- `aliases`: ["ETH E INV CTRL IDX"]

### ERR-ETH-E-INV-PARTITION
- `name`: `ETH_E_INV_PARTITION`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11, 12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p11: ETH_E_INV_PARTITION"]
- `aliases`: ["ETH E INV PARTITION"]

### ERR-ETH-E-NOT-SUPPORT
- `name`: `ETH_E_NOT_SUPPORT`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p11: ETH_E_NOT_SUPPORT;"]
- `aliases`: ["ETH E NOT SUPPORT"]

### ERR-ETH-E-PARAM-POINTER
- `name`: `ETH_E_PARAM_POINTER`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11, 12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p11: Eth_Init ETH_E_PARAM_POINTER", "p12: ETH_E_PARAM_POINTER;"]
- `aliases`: ["ETH E PARAM POINTER"]

### ERR-ETH-E-UNINIT
- `name`: `ETH_E_UNINIT`
- `type`: `error_code`
- `primary_page`: `11`
- `physical_pages`: [11, 12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p11: Eth_GetControllerMode ETH_E_UNINIT;", "p12: Eth_GetRxStats ETH_E_UNINIT;", "p13: Eth_Receive ETH_E_UNINIT;"]
- `aliases`: ["ETH E UNINIT"]

### ERR-ETH-E-INV-MODE
- `name`: `ETH_E_INV_MODE`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p12: ETH_E_INV_MODE;"]
- `aliases`: ["ETH E INV MODE"]

### ERR-ETH-E-INV-PARAM
- `name`: `ETH_E_INV_PARAM`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p12: ETH_E_INV_PARAM;"]
- `aliases`: ["ETH E INV PARAM"]

### ERR-ETH-E-ACCESS
- `name`: `ETH_E_ACCESS`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p13: Eth_Init ETH_E_ACCESS"]
- `aliases`: ["ETH E ACCESS"]

### ERR-ETH-E-ALIGNMENT
- `name`: `ETH_E_ALIGNMENT`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p13: Eth_MainFunction ETH_E_ALIGNMENT;"]
- `aliases`: ["ETH E ALIGNMENT"]

### ERR-ETH-E-CRC
- `name`: `ETH_E_CRC`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p13: ETH_E_CRC;"]
- `aliases`: ["ETH E CRC"]

### ERR-ETH-E-SAFETY
- `name`: `ETH_E_SAFETY`
- `type`: `error_code`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH DET/DEM or development-error code.
- `anchors`: ["p13: Eth_System_ISR ETH_E_SAFETY"]
- `aliases`: ["ETH E SAFETY"]

### TYPE-ETH-GENERALTYPES
- `name`: `Eth_GeneralTypes`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH C type or AUTOSAR type symbol.
- `anchors`: ["p5: • MCAL/Src/Base/include/ Eth_GeneralTypes.h"]
- `aliases`: ["Eth GeneralTypes"]

### TYPE-ETH-HW-TYPES
- `name`: `Eth_Hw_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH C type or AUTOSAR type symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Hw_Types.h"]
- `aliases`: ["Eth Hw Types"]

### TYPE-ETH-TYPES
- `name`: `Eth_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH C type or AUTOSAR type symbol.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Types.h"]
- `aliases`: ["Eth Types"]

### TYPE-PLATFORM-TYPES
- `name`: `Platform_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH C type or AUTOSAR type symbol.
- `anchors`: ["p5: • MCAL/Src/Base/include/Platform_Types.h"]
- `aliases`: ["Platform Types"]

### TYPE-STD-TYPES
- `name`: `Std_Types`
- `type`: `type`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: ETH C type or AUTOSAR type symbol.
- `anchors`: ["p5: • MCAL/Src/Base/include/Std_Types.h"]
- `aliases`: ["Std Types"]

### TYPE-ETH-CONFIGTYPE
- `name`: `Eth_ConfigType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: ETH C type or AUTOSAR type symbol.
- `anchors`: ["p13: The API need be called is void Eth_Init(const Eth_ConfigType* CfgPtr)."]
- `aliases`: ["Eth ConfigType"]

### FILE-MCAL-GENERATE-8M-INCLUDE-ETH-CFG-H
- `name`: `_MCAL_generate_8M/include/Eth_Cfg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL_generate_8M/include/Eth_Cfg.h"]
- `aliases`: [" MCAL generate 8M/include/Eth Cfg.h"]

### FILE-MCAL-GENERATE-8M-SRC-ETH-PBCFG-C
- `name`: `_MCAL_generate_8M/src/Eth_PBcfg.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • _MCAL_generate_8M/src/Eth_PBcfg.c"]
- `aliases`: [" MCAL generate 8M/src/Eth PBcfg.c"]

### FILE-ETH-GENERALTYPES-H
- `name`: `Eth_GeneralTypes.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/ Eth_GeneralTypes.h"]
- `aliases`: ["Eth GeneralTypes.h"]

### FILE-ETH-MEMMAP-H
- `name`: `Eth_MemMap.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/MemMap/ Eth_MemMap.h"]
- `aliases`: ["Eth MemMap.h"]

### FILE-MCAL-SRC-BASE-INCLUDE-COMPILER-H
- `name`: `MCAL/Src/Base/include/Compiler.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/Compiler.h"]
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-COMPILER-CFG-H
- `name`: `MCAL/Src/Base/include/Compiler_Cfg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/Compiler_Cfg.h"]
- `aliases`: ["MCAL/Src/Base/include/Compiler Cfg.h"]

### FILE-MCAL-SRC-BASE-INCLUDE-COMPILERDEFINITION-H
- `name`: `MCAL/Src/Base/include/CompilerDefinition.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/CompilerDefinition.h"]
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-MCAL-H
- `name`: `MCAL/Src/Base/include/Mcal.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/Mcal.h"]
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-PLATFORM-TYPES-H
- `name`: `MCAL/Src/Base/include/Platform_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/Platform_Types.h"]
- `aliases`: ["MCAL/Src/Base/include/Platform Types.h"]

### FILE-MCAL-SRC-BASE-INCLUDE-STD-TYPES-H
- `name`: `MCAL/Src/Base/include/Std_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Base/include/Std_Types.h"]
- `aliases`: ["MCAL/Src/Base/include/Std Types.h"]

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-H
- `name`: `MCAL/Src/Eth/include/Eth.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth.h"]
- `aliases`: []

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-HAL-H
- `name`: `MCAL/Src/Eth/include/Eth_Hal.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Hal.h"]
- `aliases`: ["MCAL/Src/Eth/include/Eth Hal.h"]

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-HW-H
- `name`: `MCAL/Src/Eth/include/Eth_Hw.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Hw.h"]
- `aliases`: ["MCAL/Src/Eth/include/Eth Hw.h"]

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-HW-TYPES-H
- `name`: `MCAL/Src/Eth/include/Eth_Hw_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Hw_Types.h"]
- `aliases`: ["MCAL/Src/Eth/include/Eth Hw Types.h"]

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-REG-H
- `name`: `MCAL/Src/Eth/include/Eth_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Reg.h"]
- `aliases`: ["MCAL/Src/Eth/include/Eth Reg.h"]

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-TYPES-H
- `name`: `MCAL/Src/Eth/include/Eth_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Types.h"]
- `aliases`: ["MCAL/Src/Eth/include/Eth Types.h"]

### FILE-MCAL-SRC-ETH-INCLUDE-ETH-VERSION-H
- `name`: `MCAL/Src/Eth/include/Eth_Version.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/include/Eth_Version.h"]
- `aliases`: ["MCAL/Src/Eth/include/Eth Version.h"]

### FILE-MCAL-SRC-ETH-SRC-ETH-C
- `name`: `MCAL/Src/Eth/src/Eth.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/src/Eth.c"]
- `aliases`: []

### FILE-MCAL-SRC-ETH-SRC-ETH-HAL-C
- `name`: `MCAL/Src/Eth/src/Eth_Hal.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/src/Eth_Hal.c"]
- `aliases`: ["MCAL/Src/Eth/src/Eth Hal.c"]

### FILE-MCAL-SRC-ETH-SRC-ETH-IRQ-C
- `name`: `MCAL/Src/Eth/src/Eth_Irq.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Eth/ src/Eth_Irq.c"]
- `aliases`: ["MCAL/Src/Eth/src/Eth Irq.c"]

### FILE-SCM-REG-H
- `name`: `Scm_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: • MCAL/Src/Common/include/ Scm_Reg.h"]
- `aliases`: ["Scm Reg.h"]

### FILE-DEM-C
- `name`: `Dem.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • Dem.c"]
- `aliases`: []

### FILE-DEM-H
- `name`: `Dem.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • Dem.h"]
- `aliases`: []

### FILE-DET-C
- `name`: `Det.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • Det.c"]
- `aliases`: []

### FILE-DET-H
- `name`: `Det.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • Det.h"]
- `aliases`: []

### FILE-MCAL-SRC-RTE-INCLUDE-SCHM-ETH-C
- `name`: `MCAL/Src/Rte/include/SchM_Eth.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • MCAL/Src/Rte/include/SchM_Eth.c"]
- `aliases`: ["MCAL/Src/Rte/include/SchM Eth.c"]

### FILE-MCAL-SRC-RTE-INCLUDE-SCHM-ETH-H
- `name`: `MCAL/Src/Rte/include/SchM_Eth.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p6: • MCAL/Src/Rte/include/SchM_Eth.h"]
- `aliases`: ["MCAL/Src/Rte/include/SchM Eth.h"]

### FILE-ETH-HAL-C
- `name`: `Eth_Hal.c`
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p9: • Eth_Hal.c:"]
- `aliases`: ["Eth Hal.c"]

### FILE-MCAL-H
- `name`: `Mcal.h`
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p15: Please have a look in various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### MEM-ETH-START-SEC
- `name`: `ETH_START_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONFIG_DATA_8 Configuration Data These are all the sections"]
- `aliases`: ["ETH START SEC "]

### MEM-ETH-START-SEC-CODE
- `name`: `ETH_START_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CODE Code Start and stop of memory"]
- `aliases`: ["ETH START SEC CODE"]

### MEM-ETH-START-SEC-CODE-AC
- `name`: `ETH_START_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CODE_AC"]
- `aliases`: ["ETH START SEC CODE AC"]

### MEM-ETH-START-SEC-CONFIG-DATA-16
- `name`: `ETH_START_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONFIG_DATA_16 have to be aligned to"]
- `aliases`: ["ETH START SEC CONFIG DATA 16"]

### MEM-ETH-START-SEC-CONFIG-DATA-32
- `name`: `ETH_START_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONFIG_DATA_32 variables are initialized by"]
- `aliases`: ["ETH START SEC CONFIG DATA 32"]

### MEM-ETH-START-SEC-CONFIG-DATA-8
- `name`: `ETH_START_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONFIG_DATA_8 Configuration Data These are all the sections"]
- `aliases`: ["ETH START SEC CONFIG DATA 8"]

### MEM-ETH-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `ETH_START_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONFIG_DATA_UNSPECIFIED"]
- `aliases`: ["ETH START SEC CONFIG DATA UNSPECIFIED"]

### MEM-ETH-START-SEC-CONST
- `name`: `ETH_START_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONST_BOOLEAN Variables These are all the sections"]
- `aliases`: ["ETH START SEC CONST "]

### MEM-ETH-START-SEC-CONST-16
- `name`: `ETH_START_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONST_16 These variables are read"]
- `aliases`: ["ETH START SEC CONST 16"]

### MEM-ETH-START-SEC-CONST-32
- `name`: `ETH_START_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONST_32"]
- `aliases`: ["ETH START SEC CONST 32"]

### MEM-ETH-START-SEC-CONST-8
- `name`: `ETH_START_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONST_8 have to be aligned to"]
- `aliases`: ["ETH START SEC CONST 8"]

### MEM-ETH-START-SEC-CONST-BOOLEAN
- `name`: `ETH_START_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_CONST_BOOLEAN Variables These are all the sections"]
- `aliases`: ["ETH START SEC CONST BOOLEAN"]

### MEM-ETH-START-SEC-VAR
- `name`: `ETH_START_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7, 8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections", "p8: ETH_START_SEC_VAR _INIT_ UNSPECIFIED"]
- `aliases`: ["ETH START SEC VAR"]

### MEM-ETH-START-SEC-VAR-02
- `name`: `ETH_START_SEC_VAR_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections"]
- `aliases`: ["ETH START SEC VAR "]

### MEM-ETH-START-SEC-VAR-NO-INIT
- `name`: `ETH_START_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections"]
- `aliases`: ["ETH START SEC VAR NO INIT "]

### MEM-ETH-START-SEC-VAR-NO-INIT-16
- `name`: `ETH_START_SEC_VAR_NO_INIT_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_16 variables are never cleared"]
- `aliases`: ["ETH START SEC VAR NO INIT 16"]

### MEM-ETH-START-SEC-VAR-NO-INIT-32
- `name`: `ETH_START_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_32 startup code (bss)."]
- `aliases`: ["ETH START SEC VAR NO INIT 32"]

### MEM-ETH-START-SEC-VAR-NO-INIT-8
- `name`: `ETH_START_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_8 have to be aligned to"]
- `aliases`: ["ETH START SEC VAR NO INIT 8"]

### MEM-ETH-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `ETH_START_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_START_SEC_VAR_NO_INIT_BOOLEAN Variables These are all the sections"]
- `aliases`: ["ETH START SEC VAR NO INIT BOOLEAN"]

### MEM-ETH-STOP-SEC
- `name`: `ETH_STOP_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONFIG_DATA_8 used for variables which"]
- `aliases`: ["ETH STOP SEC "]

### MEM-ETH-STOP-SEC-CODE
- `name`: `ETH_STOP_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CODE Section for Code (text)."]
- `aliases`: ["ETH STOP SEC CODE"]

### MEM-ETH-STOP-SEC-CODE-AC
- `name`: `ETH_STOP_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CODE_AC"]
- `aliases`: ["ETH STOP SEC CODE AC"]

### MEM-ETH-STOP-SEC-CONFIG-DATA-16
- `name`: `ETH_STOP_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONFIG_DATA_16 8/16/32 bit. These"]
- `aliases`: ["ETH STOP SEC CONFIG DATA 16"]

### MEM-ETH-STOP-SEC-CONFIG-DATA-32
- `name`: `ETH_STOP_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONFIG_DATA_32 startup code (data)."]
- `aliases`: ["ETH STOP SEC CONFIG DATA 32"]

### MEM-ETH-STOP-SEC-CONFIG-DATA-8
- `name`: `ETH_STOP_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONFIG_DATA_8 used for variables which"]
- `aliases`: ["ETH STOP SEC CONFIG DATA 8"]

### MEM-ETH-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `ETH_STOP_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `aliases`: ["ETH STOP SEC CONFIG DATA UNSPECIFIED"]

### MEM-ETH-STOP-SEC-CONST
- `name`: `ETH_STOP_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONST_BOOLEAN used for variables which"]
- `aliases`: ["ETH STOP SEC CONST "]

### MEM-ETH-STOP-SEC-CONST-16
- `name`: `ETH_STOP_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONST_16 only (rodata)."]
- `aliases`: ["ETH STOP SEC CONST 16"]

### MEM-ETH-STOP-SEC-CONST-32
- `name`: `ETH_STOP_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONST_32"]
- `aliases`: ["ETH STOP SEC CONST 32"]

### MEM-ETH-STOP-SEC-CONST-8
- `name`: `ETH_STOP_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONST_8 8/16/32 bit or boolean."]
- `aliases`: ["ETH STOP SEC CONST 8"]

### MEM-ETH-STOP-SEC-CONST-BOOLEAN
- `name`: `ETH_STOP_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_CONST_BOOLEAN used for variables which"]
- `aliases`: ["ETH STOP SEC CONST BOOLEAN"]

### MEM-ETH-STOP-SEC-VAR
- `name`: `ETH_STOP_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7, 8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN used for variables which", "p8: ETH_STOP_SEC_VAR _INIT_ UNSPECIFIED"]
- `aliases`: ["ETH STOP SEC VAR"]

### MEM-ETH-STOP-SEC-VAR-02
- `name`: `ETH_STOP_SEC_VAR_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN used for variables which"]
- `aliases`: ["ETH STOP SEC VAR "]

### MEM-ETH-STOP-SEC-VAR-NO-INIT
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN used for variables which"]
- `aliases`: ["ETH STOP SEC VAR NO INIT "]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-16
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_16 and never initialized by"]
- `aliases`: ["ETH STOP SEC VAR NO INIT 16"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-32
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_32"]
- `aliases`: ["ETH STOP SEC VAR NO INIT 32"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-8
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_8 8/16/32 bit. These"]
- `aliases`: ["ETH STOP SEC VAR NO INIT 8"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p7: ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN used for variables which"]
- `aliases`: ["ETH STOP SEC VAR NO INIT BOOLEAN"]

### MEM-ETH-START-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_INIT_16_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_INIT_16_NO_CACHEABLE in noncacheable section."]
- `aliases`: ["ETH START SEC VAR INIT 16 NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_INIT_32_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_INIT_32_NO_CACHEABLE initialized by startup code."]
- `aliases`: ["ETH START SEC VAR INIT 32 NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_INIT_8_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_INIT_8_NO_CACHEABLE have to be aligned to"]
- `aliases`: ["ETH START SEC VAR INIT 8 NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE Variables These are all the sections"]
- `aliases`: ["ETH START SEC VAR INIT BOOLEAN NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"]
- `aliases`: ["ETH START SEC VAR INIT UNSPECIFIED NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE in noncacheable section."]
- `aliases`: ["ETH START SEC VAR NO INIT 16 NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE initialized by startup code."]
- `aliases`: ["ETH START SEC VAR NO INIT 32 NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE have to be aligned to"]
- `aliases`: ["ETH START SEC VAR NO INIT 8 NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE Variables These are all the sections"]
- `aliases`: ["ETH START SEC VAR NO INIT BOOLEAN NO CACHEABLE"]

### MEM-ETH-START-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: `ETH_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"]
- `aliases`: ["ETH START SEC VAR NO INIT UNSPECIFIED NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_INIT_16_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_INIT_16_NO_CACHEABLE These variables are"]
- `aliases`: ["ETH STOP SEC VAR INIT 16 NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_INIT_32_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"]
- `aliases`: ["ETH STOP SEC VAR INIT 32 NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_INIT_8_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_INIT_8_NO_CACHEABLE 8/16/32 bit, and be placed"]
- `aliases`: ["ETH STOP SEC VAR INIT 8 NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE used for variables which"]
- `aliases`: ["ETH STOP SEC VAR INIT BOOLEAN NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"]
- `aliases`: ["ETH STOP SEC VAR INIT UNSPECIFIED NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE These variables are never"]
- `aliases`: ["ETH STOP SEC VAR NO INIT 16 NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"]
- `aliases`: ["ETH STOP SEC VAR NO INIT 32 NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE 8/16/32 bit, and be placed"]
- `aliases`: ["ETH STOP SEC VAR NO INIT 8 NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE used for variables which"]
- `aliases`: ["ETH STOP SEC VAR NO INIT BOOLEAN NO CACHEABLE"]

### MEM-ETH-STOP-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: `ETH_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ETH MemMap section macro used for linker/memory placement.
- `anchors`: ["p8: ETH_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"]
- `aliases`: ["ETH STOP SEC VAR NO INIT UNSPECIFIED NO CACHEABLE"]

### TERM-ETH
- `name`: `ETH`
- `type`: `module`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
- `section_paths`: ["Cover", "Revision History", "Table of Contents", "Chapter 1 Introduction / 1.1 Introduction", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p1: FC7xxx ETH Integration", "p2: FC7xxx ETH Integration Manual"]
- `aliases`: ["Ethernet", "ENET", "以太网"]

### TERM-ECUC
- `name`: `ECUC`
- `type`: `module`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p5: • ECUC: This module provides the ECUC partition informations for Eth module."]
- `aliases`: []

### TERM-MCAL
- `name`: `MCAL`
- `type`: `module`
- `primary_page`: `5`
- `physical_pages`: [5, 6, 15]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p5: • MCAL/Src/Eth/src/Eth.c", "p6: • MCAL/Src/Rte/include/SchM_Eth.h", "p15: Please have a look in various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `module`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p15: AUTOSAR_OS_NOT_USED need defined."]
- `aliases`: []

### TERM-PORT
- `name`: `Port`
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: [2, 3, 5, 9, 11]
- `section_paths`: ["Revision History", "Table of Contents", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 4 Exclusive Area", "Chapter 6 Error Report / 6.1 Det"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p2: A0 2025/01/16 Add support for FC7300F8MDQ", "p3: Chapter 6 Error Report ........................................................................................................................................ 11", "p5: • Port: This module provides the IO multiplexing for Eth module.", "p9: - Eth_Hal_ReportTransmission: exclusive area 2", "p11: Chapter 6 Error Report"]
- `aliases`: []

### TERM-DEM
- `name`: `Dem`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 5, 6, 13]
- `section_paths`: ["Table of Contents", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 6 Error Report / 6.2 Dem"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 6.2 Dem ............................................................................................................................................................................", "p5: • Dem: This module provides the diagnostic error parameters.", "p6: Dem module files:", "p13: 6.2 Dem"]
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 5, 6, 11, 12, 15, 16]
- `section_paths`: ["Table of Contents", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 6 Error Report / 6.1 Det", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout", "Chapter 9 Integration steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 6.1 Det ............................................................................................................................................................................", "p5: • Det: This module is necessary for enabling Development error detection.", "p6: Det module files:", "p11: 6.1 Det", "p12: Eth_ProvideTxBuffer ETH_E_UNINIT;", "p15: Please have a look in various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 15]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Common: This module is the basic module which used to choose the chip.", "p15: Please have a look in various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### TERM-MCU
- `name`: `Mcu`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Mcu: This module provides the clock reference point for Eth module."]
- `aliases`: []

### TERM-RTE
- `name`: `Rte`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 6]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: • Rte: This module provides APIs to protect/unprotect some parts of code from interrupts (Exclusive Areas).", "p6: Rte files:"]
- `aliases`: []

### TERM-EB-TRESOS
- `name`: `EB tresos`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p6: Eth module plug-ins are developed for EB tresos Studio, so, to use Eth plug-ins on the EB tresos Studio, the user needs to"]
- `aliases`: []

### TERM-SCHM
- `name`: `SchM`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6, 9]
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 4 Exclusive Area"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p6: • MCAL/Src/Rte/include/SchM_Eth.h", "p9: Eth module using the services of Schedule Manger (SchM) for entering and exiting critical regions."]
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
- `related_ids`: ["TERM-ECUC"]

### ALIAS-ETH
- `canonical`: `ETH`
- `aliases`: ["Ethernet", "ENET", "Eth", "Ethernet driver", "ETH driver", "以太网", "以太网驱动", "ETH模块"]
- `related_ids`: ["TERM-ETH"]

### ALIAS-MII-RMII-RGMII
- `canonical`: `MII/RMII/RGMII`
- `aliases`: ["MII", "RMII", "RGMII", "Media Independent Interface", "Reduced Media Independent Interface", "以太网接口"]
- `related_ids`: []

### ALIAS-MDIO
- `canonical`: `MDIO`
- `aliases`: ["MDC", "Management Data Input/Output", "PHY management", "PHY配置"]
- `related_ids`: []

### ALIAS-TSN
- `canonical`: `TSN`
- `aliases`: ["Time Sensitive Networking", "time-aware shaper", "AVB", "时间敏感网络"]
- `related_ids`: []

### ALIAS-ETHCTRLCONFIG
- `canonical`: `EthCtrlConfig`
- `aliases`: ["Eth controller config", "EthCtrl", "Ethernet controller configuration", "控制器配置"]
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
- `purpose`: `Close keyword lookup gaps between Eth_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `Eth_Integration_Manual.pdf`
- `source_pdf_sha256`: `8d59690babbc14c8b167f23bf782a758ba55e1030c24b2e3bc7e91fba8293e33`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `33`
- `technical_missing_terms_added`: `6`
- `pages_with_added_terms`: `15`
- `supplemented_missing_token_count`: `33`
- `supplemented_missing_technical_token_count`: `6`
- `supplemented_physical_pages_count`: `15`
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
  - "errors"
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
  - "Set"
  - "add"
  - "configure"
  - "first"
  - "location"
  - "output"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "INIT_8"
  - "INIT_BOOLEAN"
  - "Proprietary"
  - "RAMCODE"
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
  - "LATECOLLISION"
  - "MULTIPLECOLLISION"
  - "None"
  - "OVERSIZEFRAME"
  - "Proprietary"
  - "RX_FRAMES_LOST"
  - "SINGLECOLLISION"
  - "UNDERSIZEFRAME"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "None"
  - "Proprietary"
  - "USE_SW_VECTOR_MODE"
  - "case"
  - "define"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "modules"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
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
- `physical_pages`: [2, 3, 7, 11, 13]
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0003-002", "TBL-0007-001", "TBL-0011-001", "TBL-0013-001"]
- `message`: Table Index contains formal and table-like entries; cell grids were not fully reconstructed, and entries are intended for locating source PDF pages.
- `recommended_action`: Use captions, anchors and physical pages to verify exact table cells in the source PDF.

### WARN-0004
- `severity`: `low`
- `category`: `sparse_page`
- `physical_pages`: [14]
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
- `physical_pages`: [5, 6, 8]
- `affected_ids`: []
- `message`: Several source file paths and memory-section names contain source-visible spacing artifacts, for example 'Eth/ src' or spaces before Eth_MemMap.h; Manifest normalizes search terms but does not change source wording.
- `recommended_action`: Verify against the source PDF before relying on extracted details.

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `16`
- `indexed_physical_pages_count`: `16`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `section_ranges_status`: `pass`
- `invalid_section_ranges`: []
- `source_pdf_sha256`: `8d59690babbc14c8b167f23bf782a758ba55e1030c24b2e3bc7e91fba8293e33`
- `manifest_source_pdf_sha256`: `8d59690babbc14c8b167f23bf782a758ba55e1030c24b2e3bc7e91fba8293e33`
- `sha256_match`: `True`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `33`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

---
manifest_schema_version: "1.1"
source_pdf: "DMA_User_Manual.pdf"
source_pdf_sha256: "779471e8e113df3f38818a18f284f84b04d76313a867008afc54f4e8bca3802c"
source_pdf_size_bytes: 2393444
pdf_page_count: 45
generated_at: "2026-06-19T11:17:43Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.5.0"
source_document_id: null
source_document_revision: null
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: DMA_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `DMA_User_Manual.pdf`
- `source_pdf_sha256`: `779471e8e113df3f38818a18f284f84b04d76313a867008afc54f4e8bca3802c`
- `source_pdf_size_bytes`: `2393444`
- `pdf_page_count`: `45`
- `source_document_id`: `null`
- `source_document_revision`: `null`
- `visible_cover_title`: `FC7xxx DMA User Manual Rev.0.4`
- `visible_cover_revision`: `null`
- `revision_history_latest_row`: `0.4 / 2023/11/22 / Updated for MCAL V0.4.0`
- `generated_at`: `2026-06-19T11:17:43Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.5.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `40`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: FC7xxx AUTOSAR MCAL CDD DMA module - User Manual
- `module_scope`: DMA driver user-facing design, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration constraints.
- `key_chapters`: ["Chapter 1 DMA Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["DMA", "Direct Memory Access", "DMAMUX", "CDD_Dma", "Dma driver", "DmaChannel", "Dma_ConfigType", "Complex Driver", "MCAL", "AUTOSAR", "EB tresos", "Rte", "Det", "Dem", "SchM", "ECUC"]
- `summary`: This 45-page document is the FC7xxx DMA user manual. It indexes requirements tracing, hardware summary, software design, macros, enums, typedefs, structures, APIs, sequence diagrams, EB tresos configuration items and configuration guides.
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
- `keywords`: ["DMA", "FC7xxx"]
- `anchor`: `FC7xxx DMA User Manual Rev.0.4`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["DMA", "Revision", "History", "FC7xxx", "Changes", "Initial", "release", "MCAL"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "Dma_Types.h", "CDD_Dma", "Dma_Types", "Dma_ChannelConfigType", "Dma_ChannelType", "Dma_CoreSpecificChConfigType"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `DMA Introduction`
- `path`: `Chapter 1 DMA Introduction`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "Introduction", "FC7xxx"]
- `anchor`: `DMA Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Requirement Tracing`
- `path`: `Chapter 1 DMA Introduction / 1.1 Requirement Tracing`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "Requirement", "Tracing"]
- `anchor`: `Requirement Tracing`

### SEC-001-002
- `source_number`: `1.2`
- `title`: `Introduction to CDD`
- `path`: `Chapter 1 DMA Introduction / 1.2 Introduction to CDD`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "Introduction", "CDD"]
- `anchor`: `Introduction to CDD`

### SEC-001-003
- `source_number`: `1.3`
- `title`: `Hardware Summary`
- `path`: `Chapter 1 DMA Introduction / 1.3 Hardware Summary`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "Hardware", "Summary"]
- `anchor`: `Hardware Summary`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Software Design`
- `path`: `Chapter 2 Software Design`
- `physical_page_start`: `7`
- `physical_page_end`: `31`
- `printed_page_start`: `7`
- `printed_page_end`: `31`
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "DMA_INDEX", "DMA_E_INVALID_CHANNEL_U8", "DMA_E_UNINIT_U8", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_PARAM_VINFO_U8", "DMA_E_PARAM_CONFIG_U8"]
- `anchor`: `Software Design`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Rejected Requirements`
- `path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "CDD_Dma", "DMA_VENDOR_ID_C", "DMA_AR_RELEASE_MAJOR_VERSION_C", "DMA_AR_RELEASE_MINOR_VERSION_C", "DMA_AR_RELEASE_REVISION_VERSION_C", "DMA_SW_MAJOR_VERSION_C"]
- `anchor`: `Rejected Requirements`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `File Structure`
- `path`: `Chapter 2 Software Design / 2.2 File Structure`
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "CDD_Dma", "DMA_VENDOR_ID_C", "DMA_AR_RELEASE_MAJOR_VERSION_C", "DMA_AR_RELEASE_MINOR_VERSION_C", "DMA_AR_RELEASE_REVISION_VERSION_C", "DMA_SW_MAJOR_VERSION_C"]
- `anchor`: `File Structure`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Macros`
- `path`: `Chapter 2 Software Design / 2.3 Macros`
- `physical_page_start`: `7`
- `physical_page_end`: `10`
- `printed_page_start`: `7`
- `printed_page_end`: `10`
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "DMA_INDEX", "DMA_E_INVALID_CHANNEL_U8", "DMA_E_UNINIT_U8", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_PARAM_VINFO_U8", "DMA_E_PARAM_CONFIG_U8"]
- `anchor`: `Macros`

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: `Macros in CDD_Dma.c`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c`
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "CDD_Dma", "DMA_VENDOR_ID_C", "DMA_AR_RELEASE_MAJOR_VERSION_C", "DMA_AR_RELEASE_MINOR_VERSION_C", "DMA_AR_RELEASE_REVISION_VERSION_C", "DMA_SW_MAJOR_VERSION_C"]
- `anchor`: `Macros in CDD_Dma.c`

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: `Macros in CDD_Dma.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `physical_page_start`: `7`
- `physical_page_end`: `10`
- `printed_page_start`: `7`
- `printed_page_end`: `10`
- `keywords`: ["CDD_Dma.h", "CDD_Dma.c", "DMA_INDEX", "DMA_E_INVALID_CHANNEL_U8", "DMA_E_UNINIT_U8", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_PARAM_VINFO_U8", "DMA_E_PARAM_CONFIG_U8"]
- `anchor`: `Macros in CDD_Dma.h`

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: `Macros in Dma_Types.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dma_Types.h", "DMA_CAL_DES_LAST_OFFSET_ID_U8", "DMA_CAL_UPDATE_CONFIGSET_ID_U8", "DMA_CANCEL_TRANSFER_ID_U8", "DMA_ERR_CANCEL_TRANSFER_ID_U8", "DMA_HALT_ID_U8", "DMA_RESUME_ID_U8", "Dma_Types"]
- `anchor`: `Macros in Dma_Types.h`

### SEC-002-004
- `source_number`: `2.4`
- `title`: `Enums`
- `path`: `Chapter 2 Software Design / 2.4 Enums`
- `physical_page_start`: `11`
- `physical_page_end`: `15`
- `printed_page_start`: `11`
- `printed_page_end`: `15`
- `keywords`: ["Dma_Types.h", "DMA_CAL_DES_LAST_OFFSET_ID_U8", "DMA_CAL_UPDATE_CONFIGSET_ID_U8", "DMA_CANCEL_TRANSFER_ID_U8", "DMA_ERR_CANCEL_TRANSFER_ID_U8", "DMA_HALT_ID_U8", "DMA_RESUME_ID_U8", "Dma_CalculateDesChannelLastOffset"]
- `anchor`: `Enums`

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: `Enumerations in Dma_Types.h`
- `path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `physical_page_start`: `11`
- `physical_page_end`: `15`
- `printed_page_start`: `11`
- `printed_page_end`: `15`
- `keywords`: ["Dma_Types.h", "DMA_CAL_DES_LAST_OFFSET_ID_U8", "DMA_CAL_UPDATE_CONFIGSET_ID_U8", "DMA_CANCEL_TRANSFER_ID_U8", "DMA_ERR_CANCEL_TRANSFER_ID_U8", "DMA_HALT_ID_U8", "DMA_RESUME_ID_U8", "Dma_Types"]
- `anchor`: `Enumerations in Dma_Types.h`

### SEC-002-005
- `source_number`: `2.5`
- `title`: `Typedef`
- `path`: `Chapter 2 Software Design / 2.5 Typedef`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Dma_Types.h", "DMA_REQ_SENT0_CH3_FAST", "SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST", "SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST", "SENT1_CH1_FAST", "DMA_REQ_SENT1_CH2_FAST"]
- `anchor`: `Typedef`

### SEC-002-005-001
- `source_number`: `2.5.1`
- `title`: `Typedefs in Dma_Types.h`
- `path`: `Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Dma_Types.h", "Dma_Types", "DMA_REQ_SENT0_CH3_FAST", "SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST", "SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST", "SENT1_CH1_FAST"]
- `anchor`: `Typedefs in Dma_Types.h`

### SEC-002-006
- `source_number`: `2.6`
- `title`: `Structures`
- `path`: `Chapter 2 Software Design / 2.6 Structures`
- `physical_page_start`: `16`
- `physical_page_end`: `18`
- `printed_page_start`: `16`
- `printed_page_end`: `18`
- `keywords`: ["Dma_Types.h", "DMA_REQ_SENT0_CH3_FAST", "SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST", "SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST", "SENT1_CH1_FAST", "DMA_REQ_SENT1_CH2_FAST"]
- `anchor`: `Structures`

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: `Dma_ChannelConfigType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dma_ChannelConfigType`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Dma_Types.h", "Dma_ChannelConfigType", "DMA_REQ_SENT0_CH3_FAST", "SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST", "SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST", "SENT1_CH1_FAST"]
- `anchor`: `Dma_ChannelConfigType`

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: `Dma_ChannelType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType`
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Dma_ChannelType", "DmaMux_RequestSourceType", "Dma_TransferCompleteCallbackType", "Dma_TransferErrorCallbackType", "DMA_TranSizeType", "Dma_IncrementModeType", "DMA", "DMAMUX"]
- `anchor`: `Dma_ChannelType`

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: `Dma_CoreSpecificChConfigType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType`
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Dma_CoreSpecificChConfigType", "Dma_ChannelConfigType", "pDma_pChConfig", "Dma_CoreSpecificHwUnitConfigType", "DMA", "DMAMUX", "FC7xxx", "uint32"]
- `anchor`: `Dma_CoreSpecificChConfigType`

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: `Dma_CoreSpecificHwUnitConfigType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.4 Dma_CoreSpecificHwUnitConfigType`
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Dma_CoreSpecificHwUnitConfigType", "Dma_CoreSpecificChConfigType", "Dma_ChannelConfigType", "pDma_pChConfig", "DMA", "DMAMUX", "FC7xxx", "uint32"]
- `anchor`: `Dma_CoreSpecificHwUnitConfigType`

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: `Dma_ConfigType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_ConfigType", "Dma_CoreSpecificChConfigType", "MCAL_CORES_NUM", "Dma_CoreSpecificHwUnitConfigType", "Cdd_Dma"]
- `anchor`: `Dma_ConfigType`

### SEC-002-007
- `source_number`: `2.7`
- `title`: `API Functions`
- `path`: `Chapter 2 Software Design / 2.7 API Functions`
- `physical_page_start`: `19`
- `physical_page_end`: `29`
- `printed_page_start`: `19`
- `printed_page_end`: `29`
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_GetVersionInfo", "Dma_CancelTransfer", "Dma_ErrorCancelTransfer", "Dma_ConfigType", "Dma_CoreSpecificChConfigType"]
- `anchor`: `API Functions`

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: `Functions in Cdd_Dma.c`
- `path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `physical_page_start`: `19`
- `physical_page_end`: `29`
- `printed_page_start`: `19`
- `printed_page_end`: `29`
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_GetVersionInfo", "Dma_CancelTransfer", "Dma_ErrorCancelTransfer", "Cdd_Dma", "Dma_ConfigType"]
- `anchor`: `Functions in Cdd_Dma.c`

### SEC-002-008
- `source_number`: `2.8`
- `title`: `WAPI Sequence Diagram`
- `path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram`
- `physical_page_start`: `30`
- `physical_page_end`: `31`
- `printed_page_start`: `30`
- `printed_page_end`: `31`
- `keywords`: ["DMA", "WAPI", "Sequence", "Diagram", "FC7xxx", "Initialization", "Requested", "Software"]
- `anchor`: `WAPI Sequence Diagram`

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: `DMA Initialization and Requested by Software`
- `path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.1 DMA Initialization and Requested by Software`
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["DMA", "Initialization", "Requested", "Software", "FC7xxx", "WAPI", "Sequence", "Diagram"]
- `anchor`: `DMA Initialization and Requested by Software`

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: `DMA Initialization and Requested by Hardware`
- `path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.2 DMA Initialization and Requested by Hardware`
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["DMA", "Initialization", "Requested", "Hardware", "FC7xxx"]
- `anchor`: `DMA Initialization and Requested by Hardware`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Tresos Configuration Items`
- `path`: `Chapter 3 Tresos Configuration Items`
- `physical_page_start`: `32`
- `physical_page_end`: `42`
- `printed_page_start`: `32`
- `printed_page_end`: `42`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "Tresos", "FC7xxx"]
- `anchor`: `Tresos Configuration Items`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Container Inclusion Relation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "Container", "Inclusion", "Relation", "FC7xxx", "Tresos", "Containers"]
- `anchor`: `Container Inclusion Relation`

### SEC-003-002
- `source_number`: `3.2`
- `title`: `Containers and Variables`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables`
- `physical_page_start`: `32`
- `physical_page_end`: `42`
- `printed_page_start`: `32`
- `printed_page_end`: `42`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "Containers", "Variables"]
- `anchor`: `Containers and Variables`

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: `IMPLEMENTATION_CONFIG_VARIANT`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers"]
- `anchor`: `IMPLEMENTATION_CONFIG_VARIANT`

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: `DMAGeneral`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `physical_page_start`: `32`
- `physical_page_end`: `33`
- `printed_page_start`: `32`
- `printed_page_end`: `33`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "DMAGeneral", "FC7xxx"]
- `anchor`: `DMAGeneral`

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: `DMAConfigSet`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `physical_page_start`: `34`
- `physical_page_end`: `36`
- `printed_page_start`: `34`
- `printed_page_end`: `36`
- `keywords`: ["ECUC_DMA_006", "DMA_CFG_NBYTES_MLOFFYESn", "DMA_CFG_NBYTES_MLNOn", "DMA", "DMAConfigSet", "FC7xxx", "Properties", "Property"]
- `anchor`: `DMAConfigSet`

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: `DmaChannelConfig`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `physical_page_start`: `37`
- `physical_page_end`: `39`
- `printed_page_start`: `37`
- `printed_page_end`: `39`
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "DmaChannelConfig", "FC7xxx", "Enable", "stalls"]
- `anchor`: `DmaChannelConfig`

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: `CommonPublishedInformation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `physical_page_start`: `40`
- `physical_page_end`: `42`
- `printed_page_start`: `40`
- `printed_page_end`: `42`
- `keywords`: ["INTEGER_LABEL", "DMA", "CommonPublishedInformation", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE"]
- `anchor`: `CommonPublishedInformation`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Configuration Guides`
- `path`: `Chapter 4 Configuration Guides`
- `physical_page_start`: `43`
- `physical_page_end`: `45`
- `printed_page_start`: `43`
- `printed_page_end`: `45`
- `keywords`: ["DMA", "DmaChannel", "Guides", "FC7xxx", "Constraint", "channel", "setting", "duplicate"]
- `anchor`: `Configuration Guides`

### SEC-004-001
- `source_number`: `4.1`
- `title`: `Configuration Item Constraint`
- `path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["DMA", "DmaChannel", "Constraint", "FC7xxx", "Guides", "channel", "setting", "duplicate"]
- `anchor`: `Configuration Item Constraint`

### SEC-004-002
- `source_number`: `4.2`
- `title`: `DMA Usage Common Steps`
- `path`: `Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps`
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["DMA", "DmaChannel", "Common", "FC7xxx", "channel", "setting", "Priority", "channels"]
- `anchor`: `DMA Usage Common Steps`

### SEC-004-003
- `source_number`: `4.3`
- `title`: `DMA Configuration Demo`
- `path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo`
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["DMA", "FC7xxx", "Hardware", "Trigger", "Software"]
- `anchor`: `DMA Configuration Demo`

### SEC-004-003-001
- `source_number`: `4.3.1`
- `title`: `Hardware Trigger`
- `path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger`
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["DMA", "Hardware", "Trigger", "FC7xxx", "Software"]
- `anchor`: `Hardware Trigger`

### SEC-004-003-002
- `source_number`: `4.3.2`
- `title`: `Software Trigger`
- `path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.2 Software Trigger`
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["DMA", "Software", "Trigger", "FC7xxx", "Hardware"]
- `anchor`: `Software Trigger`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["DMA", "FC7xxx"]
- `anchors`: []

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["DMA", "FC7xxx", "Revision", "History", "Changes", "Initial", "release", "MCAL", "Updated"]
- `anchors`: ["Revision History", "0.1 2023/07/14 Initial release for MCAL V0.1.0", "0.3 2023/10/20 Updated for MCAL V0.3.0", "0.4 2023/11/22 Updated for MCAL V0.4.0"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "requirements", "configuration", "enum_list", "typedef_list", "structure", "diagram"]
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "Dma_Types.h", "CDD_Dma", "Dma_Types", "Dma_ChannelConfigType", "Dma_ChannelType", "Dma_CoreSpecificChConfigType", "Dma_CoreSpecificHwUnitConfigType", "Dma_ConfigType"]
- `anchors`: ["Table of Contents", "Chapter 1 DMA Introduction ............................................................................................................................................ 5", "1.1 Requirement Tracing ....................................................................................................................................... 5", "1.2 Introduction to CDD ......................................................................................................................................... 5"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Table of Contents`
- `content_types`: ["toc"]
- `keywords`: ["DMA", "FC7xxx", "Constraint", "Common", "Hardware", "Trigger", "Software", "Contents"]
- `anchors`: ["4.1 Configuration Item Constraint ...................................................................................................................... 43", "4.2 DMA Usage Common Steps ........................................................................................................................... 44", "4.3 DMA Configuration Demo .............................................................................................................................. 45", "4.3.1 Hardware Trigger ....................................................................................................................................... 45"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 1 DMA Introduction / 1.1 Requirement Tracing`
- `content_types`: ["image", "text"]
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "FC7xxx", "Introduction", "Requirement", "Tracing"]
- `anchors`: ["Chapter 1 DMA Introduction", "1.1 Requirement Tracing", "For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf.", "1.2 Introduction to CDD"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 1 DMA Introduction / 1.3 Hardware Summary`
- `content_types`: ["text"]
- `keywords`: ["DMA", "Direct Memory Access", "DMAMUX", "FC7xxx", "DMA0", "interrupts", "available", "DMA1", "Support", "memory"]
- `anchors`: [" DMA0 interrupts are only available on core0 and DMA1 interrupts are only available on core1/2. core1/2 share the", "same DMA1 interrupts.", " Support DMA local memory Error Correction Code (ECC) function.", "The Direct Memory Access Multiplexer (DMAMUX) routing DMA sources to any of the 32 DMA channels."]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c`
- `content_types`: ["requirements", "structure", "diagram", "image", "text"]
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "CDD_Dma", "DMA_VENDOR_ID_C", "DMA_AR_RELEASE_MAJOR_VERSION_C", "DMA_AR_RELEASE_MINOR_VERSION_C", "DMA_AR_RELEASE_REVISION_VERSION_C", "DMA_SW_MAJOR_VERSION_C", "DMA_SW_MINOR_VERSION_C", "DMA_SW_PATCH_VERSION_C"]
- `anchors`: ["Chapter 2 Software Design", "2.1 Rejected Requirements", "2.2 File Structure", "2.3 Macros"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `content_types`: ["error_report", "text"]
- `keywords`: ["CDD_Dma.h", "DMA_INDEX", "DMA_E_INVALID_CHANNEL_U8", "DMA_E_UNINIT_U8", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_PARAM_VINFO_U8", "DMA_E_PARAM_CONFIG_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARAM_CONFIG_INVALID_ADDRESS_U8", "DMA_E_PARAM_CONFIG_INVALID_SIZE_U8"]
- `anchors`: ["• #define DMA_AR_RELEASE_MINOR_VERSION 6", "• #define DMA_AR_RELEASE_REVISION_VERSION 0", "• #define DMA_SW_MAJOR_VERSION 0", "• #define DMA_SW_MINOR_VERSION 4"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `content_types`: ["error_report", "text"]
- `keywords`: ["CDD_Dma.h", "DMA_E_INVALID_REGINDEX_U8", "DMA_E_INVALID_DMA_SEL_U8", "DMA_E_INVALID_DMA_TRIGGER_U8", "DMA_E_DMA_LOCKED_U8", "DMA_INIT_ID_U8", "DMA_CONFIG_ID_U8", "DMA_CONFIG_LOCK_U8", "DMA_DEINIT_ID_U8", "DMA_START_CH_ID_U8"]
- `anchors`: ["• #define DMA_E_INVALID_REGINDEX_U8 ((uint8)0x18U)", "API DMA_ConfigInput service called with wrong parameter register Index.", "• #define DMA_E_INVALID_DMA_SEL_U8 ((uint8)0x19U)", "API DMA_ConfigInput service called with wrong parameter selection."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `content_types`: ["text"]
- `keywords`: ["CDD_Dma.h", "DMA_SET_SADDR_ID_U8", "DMA_SET_SOFF_ID_U8", "DMA_SET_DLAST_ID_U8", "DMA_SET_DOFF_ID_U8", "DMA_SET_SLAST_ID_U8", "DMA_SET_MOD_SIZE_ID_U8", "DMA_EN_HW_REQ_ID_U8", "DMA_DIS_HW_REQ_ID_U8", "DMA_SET_DONE_INT_ID_U8"]
- `anchors`: ["• #define DMA_SET_SADDR_ID_U8 ((uint8)0x5EU)", "API service ID for Dma_SetCfgSaddr function.", "• #define DMA_SET_SOFF_ID_U8 ((uint8)0x5FU)", "API service ID for Dma_SetCfgSoff function."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h`
- `content_types`: ["enum_list", "text"]
- `keywords`: ["Dma_Types.h", "DMA_CAL_DES_LAST_OFFSET_ID_U8", "DMA_CAL_UPDATE_CONFIGSET_ID_U8", "DMA_CANCEL_TRANSFER_ID_U8", "DMA_ERR_CANCEL_TRANSFER_ID_U8", "DMA_HALT_ID_U8", "DMA_RESUME_ID_U8", "Dma_CalculateDesChannelLastOffset", "DMA_UpdateChannelConfigSet", "Dma_CancelTransfer"]
- `anchors`: ["• #define DMA_CAL_DES_LAST_OFFSET_ID_U8 ((uint8)0x6CU)", "API service ID for Dma_CalculateDesChannelLastOffset function.", "• #define DMA_CAL_UPDATE_CONFIGSET_ID_U8 ((uint8)0x6DU)", "API service ID for DMA_UpdateChannelConfigSet function."]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["enum_list", "text"]
- `keywords`: ["Dma_Types.h", "DMA_INSTANCE_1", "DMA_INSTANCE_MAX", "DMA_INSTANCE_COUNT", "Dma_RunningStatusType", "DMA_RUNNING_STATUS_IDLE", "DMA_RUNNING_STATUS_ACTIVE", "Dma_ArbitrationAlgorithmType", "DMA_ARBITRATION_ALGORITHM_FIXED_PRIORITY", "DMA_ARBITRATION_ALGORITHM_ROUND_ROBIN"]
- `anchors`: ["DMA_INSTANCE_1 = 1U DMA instance _1.", "DMA_INSTANCE_MAX = DMA total instance numbers.", "DMA_INSTANCE_COUNT", "2.4.1.2 Dma_RunningStatusType"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["enum_list", "text"]
- `keywords`: ["Dma_Types.h", "Dma_IncrementModeType", "Dma_TranSizeType", "DMA_INCREMENT_DISABLE", "DMA_INCREMENT_DATA_SIZE", "DMA_INCREMENT_DATA_SIZE_4BYTE_ALIGNED", "DmaMux_RequestSourceType", "DMA_REQ_DISABLED", "DMA_REQ_FCIIC0_RX", "FCIIC0_RX"]
- `anchors`: ["2.4.1.6 Dma_IncrementModeType", "Enumeration Dma_TranSizeType", "DMA_INCREMENT_DISABLE= 0 The data address not increase.", "DMA_INCREMENT_DATA_SIZE = 1 The data address increase by the data size."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["text"]
- `keywords`: ["Dma_Types.h", "DMA_REQ_FLEXCAN4", "DMA_REQ_FLEXCAN5", "DMA_REQ_FLEXCAN6", "DMA_REQ_FLEXCAN7", "DMA_REQ_FLEXCAN8", "DMA_REQ_FLEXCAN9", "DMA_REQ_ADC0", "DMA_REQ_ADC1", "DMA_REQ_ADC2"]
- `anchors`: ["DMA_REQ_FLEXCAN4 = 27U FLEXCAN4", "DMA_REQ_FLEXCAN5 = 28U FLEXCAN5", "DMA_REQ_FLEXCAN6 = 29U FLEXCAN6", "DMA_REQ_FLEXCAN7 = 30U FLEXCAN7"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["text"]
- `keywords`: ["Dma_Types.h", "DMA_REQ_FCUART14_TX", "FCUART14_TX", "DMA_REQ_FCUART15_RX", "FCUART15_RX", "DMA_REQ_FCUART15_TX", "FCUART15_TX", "DMA_REQ_FCUART16_RX", "FCUART16_RX", "DMA_REQ_FCUART16_TX"]
- `anchors`: ["DMA_REQ_FCUART14_TX = 70U FCUART14_TX", "DMA_REQ_FCUART15_RX = 71U FCUART15_RX", "DMA_REQ_FCUART15_TX = 72U FCUART15_TX", "DMA_REQ_FCUART16_RX = 73U FCUART16_RX"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h`
- `content_types`: ["typedef_list", "structure", "diagram", "text"]
- `keywords`: ["Dma_Types.h", "DMA_REQ_SENT0_CH3_FAST", "SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST", "SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST", "SENT1_CH1_FAST", "DMA_REQ_SENT1_CH2_FAST", "SENT1_CH2_FAST", "DMA_REQ_SENT1_CH3_FAST"]
- `anchors`: ["DMA_REQ_SENT0_CH3_FAST= 113U SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST= 114U SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST= 115U SENT1_CH1_FAST", "DMA_REQ_SENT1_CH2_FAST= 116U SENT1_CH2_FAST"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType`
- `content_types`: ["structure", "diagram", "text"]
- `keywords`: ["DmaMux_RequestSourceType", "Dma_TransferCompleteCallbackType", "Dma_TransferErrorCallbackType", "Dma_ChannelType", "DMA_TranSizeType", "Dma_IncrementModeType", "DMA", "DMAMUX", "FC7xxx", "boolean"]
- `anchors`: ["• DmaMux_RequestSourceType eDmaMuxRequestSource", "• Dma_TransferCompleteCallbackType pDmaDoneISRCallBack", "• Dma_TransferErrorCallbackType pDmaErrorISRCallBack", "2.6.2 Dma_ChannelType"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType`
- `content_types`: ["structure", "diagram", "text"]
- `keywords`: ["Dma_CoreSpecificChConfigType", "Dma_ChannelConfigType", "pDma_pChConfig", "Dma_CoreSpecificHwUnitConfigType", "DMA", "DMAMUX", "FC7xxx", "uint32", "u32DmaNBYTES", "transfer"]
- `anchors`: ["2.6.3 Dma_CoreSpecificChConfigType", "Structure Dma_CoreSpecificChConfigType", "• const Dma_ChannelConfigType *pDma_pChConfig", "2.6.4 Dma_CoreSpecificHwUnitConfigType"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `content_types`: ["api_reference", "structure", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_ConfigType", "Dma_CoreSpecificChConfigType", "MCAL_CORES_NUM", "Dma_CoreSpecificHwUnitConfigType", "Cdd_Dma", "DMA", "DMAMUX"]
- `anchors`: ["2.6.5 Dma_ConfigType", "Structure Dma_ConfigType", "• Data Fields const Dma_CoreSpecificChConfigType* pDmaCoreConfig[MCAL_CORES_NUM]", "• const Dma_CoreSpecificHwUnitConfigType* pDmaHwunitConfig"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_GetVersionInfo", "Dma_CancelTransfer", "Dma_ErrorCancelTransfer", "Std_VersionInfoType", "Std_ReturnType", "Dma_InstanceType", "eDma_Instance", "E_OK", "E_NOT_OK"]
- `anchors`: ["2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)", "Function void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)", "2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)", "Function Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_Halt", "Dma_Resume", "Dma_ConfigChannel", "Dma_SetCfgCompleteInterrupt", "Dma_InstanceType", "eDma_Instance", "Std_ReturnType", "u8Dma_Channel", "Dma_ChannelType"]
- `anchors`: ["2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)", "Function void Dma_Halt(const Dma_InstanceType eDma_Instance)", "eDma_Instance Dma instance to be operated", "2.7.1.7 void Dma_Resume(const Dma_InstanceType eDma_Instance)"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_StartChannel", "Dma_SetInnerLinkChannel", "Dma_SetOuterLinkChannel", "u8Dma_Channel", "Dma_InstanceType", "eDma_Instance", "u8Dma_TriggerChannel", "Cdd_Dma", "DMA"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.10 void Dma_StartChannel(const uint8 u8Dma_Channel)", "Function void Dma_StartChannel(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel)", "u8Dma_Channel Numeric identifier of the DMA channel."]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_SetChannelPriority", "Dma_SetChannelLoopOffsetAndNBYTES", "Dma_CheckIfTransferCompleted", "u8Dma_Channel", "u8Dma_TriggerChannel", "u8Dma_Priority", "DMA_NBYTESILOType", "Cdd_Dma", "DMA"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "u8Dma_TriggerChannel Numeric identifier of the next DMA channel.", "2.7.1.13 void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)", "Function void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_CheckIfTransferActive", "Dma_SetCfgSlast", "Dma_SetCfgSaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram", "Numeric"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.16 boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)", "Function boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)", "u8Dma_Channel Numeric identifier of the DMA channel."]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgSoff", "Dma_SetCfgDlast", "Dma_SetCfgDaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Numeric", "identifier"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.19 void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)", "Function void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)", "u8Dma_Channel Numeric identifier of the DMA channel."]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgDoff", "Dma_SetCfgSModuloAndSize", "Dma_SetCfgDModuloAndSize", "Dma_EnableHwRequest", "u8Dma_Channel", "DMA_TranSizeType", "Dma_Channel", "Cdd_Dma", "DMA"]
- `anchors`: ["2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)", "Function void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)", "u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_DisableHwRequest", "Dma_ClearDoneFlag", "Dma_GetBeginOuterLoopCounter", "Dma_GetCurrentOuterLoopCounter", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.26 void Dma_DisableHwRequest (uint8 u8Dma_Channel)", "Function void Dma_DisableHwRequest (uint8 u8Dma_Channel)", "u8Dma_Channel Numeric identifier of the DMA channel."]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "Dma_UpdateOuterLoopCounter", "Dma_CalculateSrcChannelLastOffset", "Dma_CalculateDesChannelLastOffset", "u8Dma_Channel", "Std_ReturnType", "Dma_ChannelType", "E_OK", "E_NOT_OK", "Cdd_Dma"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.30 void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)", "Function void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)", "u8Dma_Channel Numeric identifier of the DMA channel."]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["diagram", "image", "table_like", "text"]
- `keywords`: ["Cdd_Dma.c", "E_OK", "E_NOT_OK", "Cdd_Dma", "DMA", "FC7xxx", "calculates", "offset", "destination", "returned"]
- `anchors`: ["Returns E_OK: calculate is finished.", "E_NOT_OK: calculate is canceled.", "Description This function calculates the last offset of destination, and the last offset value will be returned through", "input parameters s32DestLastOffset."]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.1 DMA Initialization and Requested by Software`
- `content_types`: ["diagram", "image", "text"]
- `keywords`: ["DMA", "FC7xxx", "WAPI", "Sequence", "Diagram", "Initialization", "Requested", "Software", "Design"]
- `anchors`: ["2.8 WAPI Sequence Diagram", "2.8.1 DMA Initialization and Requested by Software"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.2 DMA Initialization and Requested by Hardware`
- `content_types`: ["image", "text"]
- `keywords`: ["DMA", "FC7xxx", "Initialization", "Requested", "Hardware", "Software", "Design", "WAPI", "Sequence", "Diagram"]
- `anchors`: ["2.8.2 DMA Initialization and Requested by Hardware"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables", "Screenshot"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1 Container Inclusion Relation", "3.2 Containers and Variables", "3.2.1 IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchors`: ["3.2.2.2 Dma_VersionInfoApi", "Container Dma_VersionInfoApi", "3.2.2.3 Dma_DeInitApi", "Container Dma_DeInitApi"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["ECUC_DMA_006", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Cancel", "Transfer", "Waiting", "Default"]
- `anchors`: ["Requirements ECUC_DMA_006", "3.2.2.6 Dma Multicore Support", "Requirements ECUC_DMA_006", "3.2.3 DMAConfigSet"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["DMA_CFG_NBYTES_MLOFFYESn", "DMA_CFG_NBYTES_MLNOn", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Hardware", "Default", "EnableInnerLoopMapping"]
- `anchors`: ["3.2.3.3 EnableInnerLoopMapping", "Description - Enable: DMA_CFG_NBYTES_MLOFFYESn is redefined as the fields including individual enable, an", "- Disable: DMA_CFG_NBYTES_MLNOn is defined as a 32-bit NBYTES field.", "3.2.3.4 Enable Continuous Link Mode"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["DMA", "FC7xxx", "Support", "ErrorCancel", "Transer", "Container", "SupportErrorCancelTranser", "API", "cancel", "remaining"]
- `anchors`: ["3.2.3.6 Support ErrorCancel Transer", "3.2.3.7 Support Halt Dma", "3.2.3.8 Enable Halt On Error", "3.2.3.9 Enable Round Robin Mode"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DmaChannel", "FC7xxx", "Enable", "stalls", "channel", "Disable", "continues", "operate"]
- `anchors`: ["3.2.3.11 Enable Monitor Checker", "3.2.4 DmaChannelConfig", "3.2.4.1 DmaChannelId", "3.2.4.2 DmaChannelFlowCtrl"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "FC7xxx", "default", "control", "Screenshot", "Properties", "Property"]
- `anchors`: ["By default, value is 'DMA_REQ_DISABLED' (No HW flow control).", "Default DMA_REQ_DISABLED", "3.2.4.3 EnablePeriodTriggerMode", "3.2.4.4 DmaChannelPriority"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["NULL_PTR", "DMA", "Dma driver", "DmaChannel", "FC7xxx", "Screenshot", "Properties", "Property", "BOOLEAN", "Enable"]
- `anchors`: ["3.2.4.7 DMAChannelTramsferCompleteISRCallout", "Default NULL_PTR", "3.2.4.8 EnableChannelErrorInterrupt", "3.2.4.9 DmaChannelErrorISRCallout"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE", "Default", "CommonPublishedInformation", "Container"]
- `anchors`: ["3.2.5 CommonPublishedInformation", "3.2.5.1 AUTOSAR Major Version", "Type INTEGER_LABEL", "3.2.5.2 AUTOSAR Minor Version"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchors`: ["Type INTEGER_LABEL", "3.2.5.4 Software Major Version", "Type INTEGER_LABEL", "3.2.5.5 Software Minor Version"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Default", "Vendor", "Container", "dedicated", "implementation", "according", "AUTOSAR"]
- `anchors`: ["Type INTEGER_LABEL", "3.2.5.8 Vendor ID", "Type INTEGER_LABEL", "Label N/A"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `content_types`: ["image", "text"]
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "Guides", "Constraint", "channel", "setting", "duplicate", "cannot", "DmaChannelId"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1 Configuration Item Constraint", "1) In the DMA module, each DMA channel only has one configuration setting. That means that duplicate values cannot", "2) In DMA channel setting, Period-Trigger Mode only can be used for DMA channels 0-3."]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: `Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps`
- `content_types`: ["image", "text"]
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "channel", "setting", "Priority", "channels", "continuous", "cannot", "repeat"]
- `anchors`: ["3) In DMA channel setting, Dma Channel Priority configuration of all channels must be continuous from 0, cannot repeat", "4) When configuring a DMA channel for software triggering, select \"DmaChannelFlowCtrl\" as \"DMA_ REQ_ DISABLED\".", "5) When using hardware triggering, it is important to pay attention to the configuration of the callback function interface.", "6) When using hardware triggering, in addition to configuring in the DMA module, it is also necessary to select Enable"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger`
- `content_types`: ["image", "text"]
- `keywords`: ["DMA", "FC7xxx", "Hardware", "Trigger", "Software", "Guides"]
- `anchors`: ["4.3 DMA Configuration Demo", "4.3.1 Hardware Trigger", "4.3.2 Software Trigger"]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx DMA User Manual and its visible revision.
- `keywords`: ["DMA", "FC7xxx"]
- `anchors`: []
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history for the FC7xxx DMA document.
- `keywords`: ["DMA", "FC7xxx", "Revision", "History", "Changes", "Initial", "release", "MCAL", "Updated"]
- `anchors`: ["Revision History", "0.1 2023/07/14 Initial release for MCAL V0.1.0", "0.3 2023/10/20 Updated for MCAL V0.3.0", "0.4 2023/11/22 Updated for MCAL V0.4.0"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "requirements", "configuration", "enum_list", "typedef_list", "structure", "diagram"]
- `summary`: Table of contents page mapping chapters and subsections to printed/source page labels.
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "Dma_Types.h", "CDD_Dma", "Dma_Types", "Dma_ChannelConfigType", "Dma_ChannelType", "Dma_CoreSpecificChConfigType", "Dma_CoreSpecificHwUnitConfigType", "Dma_ConfigType"]
- `anchors`: ["Table of Contents", "Chapter 1 DMA Introduction ............................................................................................................................................ 5", "1.1 Requirement Tracing ....................................................................................................................................... 5", "1.2 Introduction to CDD ......................................................................................................................................... 5"]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc"]
- `summary`: Table of contents page mapping chapters and subsections to printed/source page labels.
- `keywords`: ["DMA", "FC7xxx", "Constraint", "Common", "Hardware", "Trigger", "Software", "Contents"]
- `anchors`: ["4.1 Configuration Item Constraint ...................................................................................................................... 43", "4.2 DMA Usage Common Steps ........................................................................................................................... 44", "4.3 DMA Configuration Demo .............................................................................................................................. 45", "4.3.1 Hardware Trigger ....................................................................................................................................... 45"]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 1 DMA Introduction / 1.1 Requirement Tracing`
- `content_types`: ["image", "text"]
- `summary`: Visual/diagram page in Chapter 1 DMA Introduction / 1.1 Requirement Tracing; use image and anchor indexes for source-PDF verification.
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "FC7xxx", "Introduction", "Requirement", "Tracing"]
- `anchors`: ["Chapter 1 DMA Introduction", "1.1 Requirement Tracing", "For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf.", "1.2 Introduction to CDD"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 1 DMA Introduction / 1.3 Hardware Summary`
- `content_types`: ["text"]
- `summary`:  DMA0 interrupts are only available on core0 and DMA1 interrupts are only available on core1/2. core1/2 share the same DMA1 interrupts.
- `keywords`: ["DMA", "Direct Memory Access", "DMAMUX", "FC7xxx", "DMA0", "interrupts", "available", "DMA1", "Support", "memory"]
- `anchors`: [" DMA0 interrupts are only available on core0 and DMA1 interrupts are only available on core1/2. core1/2 share the", "same DMA1 interrupts.", " Support DMA local memory Error Correction Code (ECC) function.", "The Direct Memory Access Multiplexer (DMAMUX) routing DMA sources to any of the 32 DMA channels."]
- `quality_flags`: []

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c`
- `content_types`: ["requirements", "structure", "diagram", "image", "text"]
- `summary`: Lists rejected AUTOSAR requirements and rejection rationale.
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "CDD_Dma", "DMA_VENDOR_ID_C", "DMA_AR_RELEASE_MAJOR_VERSION_C", "DMA_AR_RELEASE_MINOR_VERSION_C", "DMA_AR_RELEASE_REVISION_VERSION_C", "DMA_SW_MAJOR_VERSION_C", "DMA_SW_MINOR_VERSION_C", "DMA_SW_PATCH_VERSION_C"]
- `anchors`: ["Chapter 2 Software Design", "2.1 Rejected Requirements", "2.2 File Structure", "2.3 Macros"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `content_types`: ["error_report", "text"]
- `summary`: Lists DMA DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["CDD_Dma.h", "DMA_INDEX", "DMA_E_INVALID_CHANNEL_U8", "DMA_E_UNINIT_U8", "DMA_E_ALREADY_INITIALIZED_U8", "DMA_E_PARAM_VINFO_U8", "DMA_E_PARAM_CONFIG_U8", "DMA_E_INIT_FAILED_U8", "DMA_E_PARAM_CONFIG_INVALID_ADDRESS_U8", "DMA_E_PARAM_CONFIG_INVALID_SIZE_U8"]
- `anchors`: ["• #define DMA_AR_RELEASE_MINOR_VERSION 6", "• #define DMA_AR_RELEASE_REVISION_VERSION 0", "• #define DMA_SW_MAJOR_VERSION 0", "• #define DMA_SW_MINOR_VERSION 4"]
- `quality_flags`: []

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `content_types`: ["error_report", "text"]
- `summary`: Lists DMA DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["CDD_Dma.h", "DMA_E_INVALID_REGINDEX_U8", "DMA_E_INVALID_DMA_SEL_U8", "DMA_E_INVALID_DMA_TRIGGER_U8", "DMA_E_DMA_LOCKED_U8", "DMA_INIT_ID_U8", "DMA_CONFIG_ID_U8", "DMA_CONFIG_LOCK_U8", "DMA_DEINIT_ID_U8", "DMA_START_CH_ID_U8"]
- `anchors`: ["• #define DMA_E_INVALID_REGINDEX_U8 ((uint8)0x18U)", "API DMA_ConfigInput service called with wrong parameter register Index.", "• #define DMA_E_INVALID_DMA_SEL_U8 ((uint8)0x19U)", "API DMA_ConfigInput service called with wrong parameter selection."]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `content_types`: ["text"]
- `summary`: • #define DMA_SET_SADDR_ID_U8 ((uint8)0x5EU) API service ID for Dma_SetCfgSaddr function.
- `keywords`: ["CDD_Dma.h", "DMA_SET_SADDR_ID_U8", "DMA_SET_SOFF_ID_U8", "DMA_SET_DLAST_ID_U8", "DMA_SET_DOFF_ID_U8", "DMA_SET_SLAST_ID_U8", "DMA_SET_MOD_SIZE_ID_U8", "DMA_EN_HW_REQ_ID_U8", "DMA_DIS_HW_REQ_ID_U8", "DMA_SET_DONE_INT_ID_U8"]
- `anchors`: ["• #define DMA_SET_SADDR_ID_U8 ((uint8)0x5EU)", "API service ID for Dma_SetCfgSaddr function.", "• #define DMA_SET_SOFF_ID_U8 ((uint8)0x5FU)", "API service ID for Dma_SetCfgSoff function."]
- `quality_flags`: []

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h`
- `content_types`: ["enum_list", "text"]
- `summary`: • #define DMA_CAL_DES_LAST_OFFSET_ID_U8 ((uint8)0x6CU) API service ID for Dma_CalculateDesChannelLastOffset function.
- `keywords`: ["Dma_Types.h", "DMA_CAL_DES_LAST_OFFSET_ID_U8", "DMA_CAL_UPDATE_CONFIGSET_ID_U8", "DMA_CANCEL_TRANSFER_ID_U8", "DMA_ERR_CANCEL_TRANSFER_ID_U8", "DMA_HALT_ID_U8", "DMA_RESUME_ID_U8", "Dma_CalculateDesChannelLastOffset", "DMA_UpdateChannelConfigSet", "Dma_CancelTransfer"]
- `anchors`: ["• #define DMA_CAL_DES_LAST_OFFSET_ID_U8 ((uint8)0x6CU)", "API service ID for Dma_CalculateDesChannelLastOffset function.", "• #define DMA_CAL_UPDATE_CONFIGSET_ID_U8 ((uint8)0x6DU)", "API service ID for DMA_UpdateChannelConfigSet function."]
- `quality_flags`: []

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["enum_list", "text"]
- `summary`: DMA_INSTANCE_1 = 1U DMA instance _1. DMA_INSTANCE_MAX = DMA total instance numbers.
- `keywords`: ["Dma_Types.h", "DMA_INSTANCE_1", "DMA_INSTANCE_MAX", "DMA_INSTANCE_COUNT", "Dma_RunningStatusType", "DMA_RUNNING_STATUS_IDLE", "DMA_RUNNING_STATUS_ACTIVE", "Dma_ArbitrationAlgorithmType", "DMA_ARBITRATION_ALGORITHM_FIXED_PRIORITY", "DMA_ARBITRATION_ALGORITHM_ROUND_ROBIN"]
- `anchors`: ["DMA_INSTANCE_1 = 1U DMA instance _1.", "DMA_INSTANCE_MAX = DMA total instance numbers.", "DMA_INSTANCE_COUNT", "2.4.1.2 Dma_RunningStatusType"]
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["enum_list", "text"]
- `summary`: 2.4.1.6 Dma_IncrementModeType Enumeration Dma_TranSizeType
- `keywords`: ["Dma_Types.h", "Dma_IncrementModeType", "Dma_TranSizeType", "DMA_INCREMENT_DISABLE", "DMA_INCREMENT_DATA_SIZE", "DMA_INCREMENT_DATA_SIZE_4BYTE_ALIGNED", "DmaMux_RequestSourceType", "DMA_REQ_DISABLED", "DMA_REQ_FCIIC0_RX", "FCIIC0_RX"]
- `anchors`: ["2.4.1.6 Dma_IncrementModeType", "Enumeration Dma_TranSizeType", "DMA_INCREMENT_DISABLE= 0 The data address not increase.", "DMA_INCREMENT_DATA_SIZE = 1 The data address increase by the data size."]
- `quality_flags`: []

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["text"]
- `summary`: DMA_REQ_FLEXCAN4 = 27U FLEXCAN4 DMA_REQ_FLEXCAN5 = 28U FLEXCAN5
- `keywords`: ["Dma_Types.h", "DMA_REQ_FLEXCAN4", "DMA_REQ_FLEXCAN5", "DMA_REQ_FLEXCAN6", "DMA_REQ_FLEXCAN7", "DMA_REQ_FLEXCAN8", "DMA_REQ_FLEXCAN9", "DMA_REQ_ADC0", "DMA_REQ_ADC1", "DMA_REQ_ADC2"]
- `anchors`: ["DMA_REQ_FLEXCAN4 = 27U FLEXCAN4", "DMA_REQ_FLEXCAN5 = 28U FLEXCAN5", "DMA_REQ_FLEXCAN6 = 29U FLEXCAN6", "DMA_REQ_FLEXCAN7 = 30U FLEXCAN7"]
- `quality_flags`: []

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h`
- `content_types`: ["text"]
- `summary`: DMA_REQ_FCUART14_TX = 70U FCUART14_TX DMA_REQ_FCUART15_RX = 71U FCUART15_RX
- `keywords`: ["Dma_Types.h", "DMA_REQ_FCUART14_TX", "FCUART14_TX", "DMA_REQ_FCUART15_RX", "FCUART15_RX", "DMA_REQ_FCUART15_TX", "FCUART15_TX", "DMA_REQ_FCUART16_RX", "FCUART16_RX", "DMA_REQ_FCUART16_TX"]
- `anchors`: ["DMA_REQ_FCUART14_TX = 70U FCUART14_TX", "DMA_REQ_FCUART15_RX = 71U FCUART15_RX", "DMA_REQ_FCUART15_TX = 72U FCUART15_TX", "DMA_REQ_FCUART16_RX = 73U FCUART16_RX"]
- `quality_flags`: []

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h`
- `content_types`: ["typedef_list", "structure", "diagram", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h; use image and anchor indexes for source-PDF verification.
- `keywords`: ["Dma_Types.h", "DMA_REQ_SENT0_CH3_FAST", "SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST", "SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST", "SENT1_CH1_FAST", "DMA_REQ_SENT1_CH2_FAST", "SENT1_CH2_FAST", "DMA_REQ_SENT1_CH3_FAST"]
- `anchors`: ["DMA_REQ_SENT0_CH3_FAST= 113U SENT0_CH3_FAST", "DMA_REQ_SENT1_CH0_FAST= 114U SENT1_CH0_FAST", "DMA_REQ_SENT1_CH1_FAST= 115U SENT1_CH1_FAST", "DMA_REQ_SENT1_CH2_FAST= 116U SENT1_CH2_FAST"]
- `quality_flags`: []

### SEG-0017
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType`
- `content_types`: ["structure", "diagram", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DmaMux_RequestSourceType", "Dma_TransferCompleteCallbackType", "Dma_TransferErrorCallbackType", "Dma_ChannelType", "DMA_TranSizeType", "Dma_IncrementModeType", "DMA", "DMAMUX", "FC7xxx", "boolean"]
- `anchors`: ["• DmaMux_RequestSourceType eDmaMuxRequestSource", "• Dma_TransferCompleteCallbackType pDmaDoneISRCallBack", "• Dma_TransferErrorCallbackType pDmaErrorISRCallBack", "2.6.2 Dma_ChannelType"]
- `quality_flags`: []

### SEG-0018
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType`
- `content_types`: ["structure", "diagram", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType; use image and anchor indexes for source-PDF verification.
- `keywords`: ["Dma_CoreSpecificChConfigType", "Dma_ChannelConfigType", "pDma_pChConfig", "Dma_CoreSpecificHwUnitConfigType", "DMA", "DMAMUX", "FC7xxx", "uint32", "u32DmaNBYTES", "transfer"]
- `anchors`: ["2.6.3 Dma_CoreSpecificChConfigType", "Structure Dma_CoreSpecificChConfigType", "• const Dma_ChannelConfigType *pDma_pChConfig", "2.6.4 Dma_CoreSpecificHwUnitConfigType"]
- `quality_flags`: []

### SEG-0019
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `content_types`: ["api_reference", "structure", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_Init , Dma_Init, Dma_DeInit.
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_ConfigType", "Dma_CoreSpecificChConfigType", "MCAL_CORES_NUM", "Dma_CoreSpecificHwUnitConfigType", "Cdd_Dma", "DMA", "DMAMUX"]
- `anchors`: ["2.6.5 Dma_ConfigType", "Structure Dma_ConfigType", "• Data Fields const Dma_CoreSpecificChConfigType* pDmaCoreConfig[MCAL_CORES_NUM]", "• const Dma_CoreSpecificHwUnitConfigType* pDmaHwunitConfig"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0020
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_GetVersionInfo, Dma_CancelTransfer, Dma_ErrorCancelTransfer.
- `keywords`: ["Cdd_Dma.c", "Dma_GetVersionInfo", "Dma_CancelTransfer", "Dma_ErrorCancelTransfer", "Std_VersionInfoType", "Std_ReturnType", "Dma_InstanceType", "eDma_Instance", "E_OK", "E_NOT_OK"]
- `anchors`: ["2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)", "Function void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)", "2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)", "Function Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0021
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_Halt, Dma_Resume, Dma_ConfigChannel, Dma_SetCfgCompleteInterrupt.
- `keywords`: ["Cdd_Dma.c", "Dma_Halt", "Dma_Resume", "Dma_ConfigChannel", "Dma_SetCfgCompleteInterrupt", "Dma_InstanceType", "eDma_Instance", "Std_ReturnType", "u8Dma_Channel", "Dma_ChannelType"]
- `anchors`: ["2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)", "Function void Dma_Halt(const Dma_InstanceType eDma_Instance)", "eDma_Instance Dma instance to be operated", "2.7.1.7 void Dma_Resume(const Dma_InstanceType eDma_Instance)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0022
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_StartChannel, Dma_SetInnerLinkChannel, Dma_SetOuterLinkChannel .
- `keywords`: ["Cdd_Dma.c", "Dma_StartChannel", "Dma_SetInnerLinkChannel", "Dma_SetOuterLinkChannel", "u8Dma_Channel", "Dma_InstanceType", "eDma_Instance", "u8Dma_TriggerChannel", "Cdd_Dma", "DMA"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.10 void Dma_StartChannel(const uint8 u8Dma_Channel)", "Function void Dma_StartChannel(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel)", "u8Dma_Channel Numeric identifier of the DMA channel."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0023
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_SetChannelPriority , Dma_SetChannelLoopOffsetAndNBYTES , Dma_CheckIfTransferCompleted .
- `keywords`: ["Cdd_Dma.c", "Dma_SetChannelPriority", "Dma_SetChannelLoopOffsetAndNBYTES", "Dma_CheckIfTransferCompleted", "u8Dma_Channel", "u8Dma_TriggerChannel", "u8Dma_Priority", "DMA_NBYTESILOType", "Cdd_Dma", "DMA"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "u8Dma_TriggerChannel Numeric identifier of the next DMA channel.", "2.7.1.13 void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)", "Function void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0024
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_CheckIfTransferActive , Dma_SetCfgSlast , Dma_SetCfgSaddr .
- `keywords`: ["Cdd_Dma.c", "Dma_CheckIfTransferActive", "Dma_SetCfgSlast", "Dma_SetCfgSaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram", "Numeric"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.16 boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)", "Function boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)", "u8Dma_Channel Numeric identifier of the DMA channel."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0025
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_SetCfgSoff , Dma_SetCfgDlast , Dma_SetCfgDaddr .
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgSoff", "Dma_SetCfgDlast", "Dma_SetCfgDaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Numeric", "identifier"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.19 void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)", "Function void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)", "u8Dma_Channel Numeric identifier of the DMA channel."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0026
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_SetCfgDoff , Dma_SetCfgSModuloAndSize , Dma_SetCfgDModuloAndSize , Dma_EnableHwRequest .
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgDoff", "Dma_SetCfgSModuloAndSize", "Dma_SetCfgDModuloAndSize", "Dma_EnableHwRequest", "u8Dma_Channel", "DMA_TranSizeType", "Dma_Channel", "Cdd_Dma", "DMA"]
- `anchors`: ["2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)", "Function void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)", "u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0027
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_DisableHwRequest , Dma_ClearDoneFlag, Dma_GetBeginOuterLoopCounter, Dma_GetCurrentOuterLoopCounter.
- `keywords`: ["Cdd_Dma.c", "Dma_DisableHwRequest", "Dma_ClearDoneFlag", "Dma_GetBeginOuterLoopCounter", "Dma_GetCurrentOuterLoopCounter", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.26 void Dma_DisableHwRequest (uint8 u8Dma_Channel)", "Function void Dma_DisableHwRequest (uint8 u8Dma_Channel)", "u8Dma_Channel Numeric identifier of the DMA channel."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0028
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dma_UpdateOuterLoopCounter, Dma_CalculateSrcChannelLastOffset, Dma_CalculateDesChannelLastOffset.
- `keywords`: ["Cdd_Dma.c", "Dma_UpdateOuterLoopCounter", "Dma_CalculateSrcChannelLastOffset", "Dma_CalculateDesChannelLastOffset", "u8Dma_Channel", "Std_ReturnType", "Dma_ChannelType", "E_OK", "E_NOT_OK", "Cdd_Dma"]
- `anchors`: ["u8Dma_Channel Numeric identifier of the DMA channel.", "2.7.1.30 void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)", "Function void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)", "u8Dma_Channel Numeric identifier of the DMA channel."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0029
- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `content_types`: ["diagram", "image", "table_like", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c; use image and anchor indexes for source-PDF verification.
- `keywords`: ["Cdd_Dma.c", "E_OK", "E_NOT_OK", "Cdd_Dma", "DMA", "FC7xxx", "calculates", "offset", "destination", "returned"]
- `anchors`: ["Returns E_OK: calculate is finished.", "E_NOT_OK: calculate is canceled.", "Description This function calculates the last offset of destination, and the last offset value will be returned through", "input parameters s32DestLastOffset."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0030
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.1 DMA Initialization and Requested by Software`
- `content_types`: ["diagram", "image", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.1 DMA Initialization and Requested by Software; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DMA", "FC7xxx", "WAPI", "Sequence", "Diagram", "Initialization", "Requested", "Software", "Design"]
- `anchors`: ["2.8 WAPI Sequence Diagram", "2.8.1 DMA Initialization and Requested by Software"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0031
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.2 DMA Initialization and Requested by Hardware`
- `content_types`: ["image", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.2 DMA Initialization and Requested by Hardware; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DMA", "FC7xxx", "Initialization", "Requested", "Hardware", "Software", "Design", "WAPI", "Sequence", "Diagram"]
- `anchors`: ["2.8.2 DMA Initialization and Requested by Hardware"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0032
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, DMAGeneral, DmaDevErrorDetect, DMADevErrorDetect.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables", "Screenshot"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1 Container Inclusion Relation", "3.2 Containers and Variables", "3.2.1 IMPLEMENTATION_CONFIG_VARIANT"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0033
- `physical_pages`: [33]
- `printed_pages`: ["33"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, Dma, Dma_VersionInfoApi, Dma_DeInitApi, DMA_DeInit, etc.
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchors`: ["3.2.2.2 Dma_VersionInfoApi", "Container Dma_VersionInfoApi", "3.2.2.3 Dma_DeInitApi", "Container Dma_DeInitApi"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0034
- `physical_pages`: [34]
- `printed_pages`: ["34"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, Dma, DmaMulticoreSupport, DMAConfigSet, DmaHwUnitId.
- `keywords`: ["ECUC_DMA_006", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Cancel", "Transfer", "Waiting", "Default"]
- `anchors`: ["Requirements ECUC_DMA_006", "3.2.2.6 Dma Multicore Support", "Requirements ECUC_DMA_006", "3.2.3 DMAConfigSet"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0035
- `physical_pages`: [35]
- `printed_pages`: ["35"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, Dma, DMA_CFG_NBYTES_MLOFFYESn, DMA_CFG_NBYTES_MLNOn.
- `keywords`: ["DMA_CFG_NBYTES_MLOFFYESn", "DMA_CFG_NBYTES_MLNOn", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Hardware", "Default", "EnableInnerLoopMapping"]
- `anchors`: ["3.2.3.3 EnableInnerLoopMapping", "Description - Enable: DMA_CFG_NBYTES_MLOFFYESn is redefined as the fields including individual enable, an", "- Disable: DMA_CFG_NBYTES_MLNOn is defined as a 32-bit NBYTES field.", "3.2.3.4 Enable Continuous Link Mode"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0036
- `physical_pages`: [36]
- `printed_pages`: ["36"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, Dma.
- `keywords`: ["DMA", "FC7xxx", "Support", "ErrorCancel", "Transer", "Container", "SupportErrorCancelTranser", "API", "cancel", "remaining"]
- `anchors`: ["3.2.3.6 Support ErrorCancel Transer", "3.2.3.7 Support Halt Dma", "3.2.3.8 Enable Halt On Error", "3.2.3.9 Enable Round Robin Mode"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0037
- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, DmaChannelConfig, DmaChannelId, DmaChannelFlowCtrl, DMA_REQ_DISABLED.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DmaChannel", "FC7xxx", "Enable", "stalls", "channel", "Disable", "continues", "operate"]
- `anchors`: ["3.2.3.11 Enable Monitor Checker", "3.2.4 DmaChannelConfig", "3.2.4.1 DmaChannelId", "3.2.4.2 DmaChannelFlowCtrl"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0038
- `physical_pages`: [38]
- `printed_pages`: ["38"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, DMA_REQ_DISABLED, DMAMUX, DmaChannelPriority.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "FC7xxx", "default", "control", "Screenshot", "Properties", "Property"]
- `anchors`: ["By default, value is 'DMA_REQ_DISABLED' (No HW flow control).", "Default DMA_REQ_DISABLED", "3.2.4.3 EnablePeriodTriggerMode", "3.2.4.4 DmaChannelPriority"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0039
- `physical_pages`: [39]
- `printed_pages`: ["39"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA, DMAChannelTramsferCompleteISRCallout, DmaChannelErrorISRCallout, DmaChannelEcucPartitionRef, Dma.
- `keywords`: ["NULL_PTR", "DMA", "Dma driver", "DmaChannel", "FC7xxx", "Screenshot", "Properties", "Property", "BOOLEAN", "Enable"]
- `anchors`: ["3.2.4.7 DMAChannelTramsferCompleteISRCallout", "Default NULL_PTR", "3.2.4.8 EnableChannelErrorInterrupt", "3.2.4.9 DmaChannelErrorISRCallout"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0040
- `physical_pages`: [40]
- `printed_pages`: ["40"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE", "Default", "CommonPublishedInformation", "Container"]
- `anchors`: ["3.2.5 CommonPublishedInformation", "3.2.5.1 AUTOSAR Major Version", "Type INTEGER_LABEL", "3.2.5.2 AUTOSAR Minor Version"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0041
- `physical_pages`: [41]
- `printed_pages`: ["41"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchors`: ["Type INTEGER_LABEL", "3.2.5.4 Software Major Version", "Type INTEGER_LABEL", "3.2.5.5 Software Minor Version"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0042
- `physical_pages`: [42]
- `printed_pages`: ["42"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Default", "Vendor", "Container", "dedicated", "implementation", "according", "AUTOSAR"]
- `anchors`: ["Type INTEGER_LABEL", "3.2.5.8 Vendor ID", "Type INTEGER_LABEL", "Label N/A"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0043
- `physical_pages`: [43]
- `printed_pages`: ["43"]
- `section_path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `content_types`: ["image", "text"]
- `summary`: Visual/diagram page in Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "Guides", "Constraint", "channel", "setting", "duplicate", "cannot", "DmaChannelId"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1 Configuration Item Constraint", "1) In the DMA module, each DMA channel only has one configuration setting. That means that duplicate values cannot", "2) In DMA channel setting, Period-Trigger Mode only can be used for DMA channels 0-3."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0044
- `physical_pages`: [44]
- `printed_pages`: ["44"]
- `section_path`: `Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps`
- `content_types`: ["image", "text"]
- `summary`: Visual/diagram page in Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "channel", "setting", "Priority", "channels", "continuous", "cannot", "repeat"]
- `anchors`: ["3) In DMA channel setting, Dma Channel Priority configuration of all channels must be continuous from 0, cannot repeat", "4) When configuring a DMA channel for software triggering, select \"DmaChannelFlowCtrl\" as \"DMA_ REQ_ DISABLED\".", "5) When using hardware triggering, it is important to pay attention to the configuration of the callback function interface.", "6) When using hardware triggering, in addition to configuring in the DMA module, it is also necessary to select Enable"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0045
- `physical_pages`: [45]
- `printed_pages`: ["45"]
- `section_path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger`
- `content_types`: ["image", "text"]
- `summary`: Visual/diagram page in Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DMA", "FC7xxx", "Hardware", "Trigger", "Software", "Guides"]
- `anchors`: ["4.3 DMA Configuration Demo", "4.3.1 Hardware Trigger", "4.3.2 Software Trigger"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

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

### TBL-0004-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0004-001`
- `caption`: `Table of Contents page 4`
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Table of Contents`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `table_type`: `toc`
- `key_fields`: ["section", "title", "page"]
- `summary`: Table of contents table-like page listing section titles and page labels.
- `anchor`: `Table of Contents`
- `confidence`: `0.86`
- `quality_flags`: ["toc_table_like_index"]

### TBL-0007-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-001`
- `caption`: `Macro definitions including DMA_VENDOR_ID_C, DMA_AR_RELEASE_MAJOR_VERSION_C, DMA_AR_RELEASE_MINOR_VERSION_C, DMA_AR_RELEASE_REVISION_VERSION_C, DMA_SW_MAJOR_VERSION_C`
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c`
- `bbox`: [105.5, 443.5, 193.5, 469.1]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DMA_VENDOR_ID_C`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0008-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0008-001`
- `caption`: `Macro definitions including DMA_AR_RELEASE_MINOR_VERSION, DMA_AR_RELEASE_REVISION_VERSION, DMA_SW_MAJOR_VERSION, DMA_SW_MINOR_VERSION, DMA_SW_PATCH_VERSION`
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `bbox`: [105.5, 32.9, 267.0, 58.6]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DMA_AR_RELEASE_MINOR_VERSION`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0009-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-001`
- `caption`: `Macro definitions including DMA_E_INVALID_REGINDEX_U8, DMA_E_INVALID_DMA_SEL_U8, DMA_E_INVALID_DMA_TRIGGER_U8, DMA_E_DMA_LOCKED_U8, DMA_INIT_ID_U8`
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `bbox`: [105.6, 32.9, 244.6, 58.6]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DMA_E_INVALID_REGINDEX_U8`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0010-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0010-001`
- `caption`: `Macro definitions including DMA_SET_SADDR_ID_U8, DMA_SET_SOFF_ID_U8, DMA_SET_DLAST_ID_U8, DMA_SET_DOFF_ID_U8, DMA_SET_SLAST_ID_U8`
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h`
- `bbox`: [105.5, 50.0, 214.4, 75.7]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DMA_SET_SADDR_ID_U8`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0011-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-001`
- `caption`: `Macro definitions including DMA_CAL_DES_LAST_OFFSET_ID_U8, DMA_CAL_UPDATE_CONFIGSET_ID_U8, DMA_CANCEL_TRANSFER_ID_U8, DMA_ERR_CANCEL_TRANSFER_ID_U8, DMA_HALT_ID_U8`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h`
- `bbox`: [105.5, 32.9, 268.4, 58.6]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DMA_CAL_DES_LAST_OFFSET_ID_U8`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0016-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-001`
- `caption`: `Structure field table-like content on page 16`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h`
- `bbox`: [41.6, 561.2, 91.0, 586.9]
- `table_type`: `structure`
- `key_fields`: ["Structure", "Description", "Data Fields"]
- `summary`: Structure or typedef table-like block.
- `anchor`: `Data Fields`
- `confidence`: `0.74`
- `quality_flags`: ["structure_table_like", "cell_grid_not_rebuilt"]

### TBL-0017-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0017-001`
- `caption`: `Structure field table-like content on page 17`
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType`
- `bbox`: [41.6, 332.8, 91.0, 358.5]
- `table_type`: `structure`
- `key_fields`: ["Structure", "Description", "Data Fields"]
- `summary`: Structure or typedef table-like block.
- `anchor`: `Data Fields`
- `confidence`: `0.74`
- `quality_flags`: ["structure_table_like", "cell_grid_not_rebuilt"]

### TBL-0018-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0018-001`
- `caption`: `Structure field table-like content on page 18`
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType`
- `bbox`: [41.6, 315.8, 91.0, 341.5]
- `table_type`: `structure`
- `key_fields`: ["Structure", "Description", "Data Fields"]
- `summary`: Structure or typedef table-like block.
- `anchor`: `Data Fields`
- `confidence`: `0.74`
- `quality_flags`: ["structure_table_like", "cell_grid_not_rebuilt"]

### TBL-0019-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0019-001`
- `caption`: `API/function block void Dma_Init (const Dma_ConfigType *pConfigPtr)`
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [85.7, 283.1, 299.9, 308.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_Init (const Dma_ConfigType *pConfigPtr)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0019-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0019-002`
- `caption`: `API/function block void Dma_DeInit(void)`
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [85.7, 549.3, 179.1, 575.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_DeInit(void)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0019-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0019-003`
- `caption`: `API/function block 2.7.1.1 void Dma_Init (const Dma_ConfigType *pConfigPtr)`
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [36.0, 283.1, 63.2, 308.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.1 void Dma_Init (const Dma_ConfigType *pConfigPtr)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0019-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0019-004`
- `caption`: `API/function block 2.7.1.2 void Dma_DeInit(void)`
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [36.0, 549.3, 63.2, 575.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.2 void Dma_DeInit(void)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0019-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0019-005`
- `caption`: `Structure field table-like content on page 19`
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [41.6, 105.5, 91.0, 131.2]
- `table_type`: `structure`
- `key_fields`: ["Structure", "Description", "Data Fields"]
- `summary`: Structure or typedef table-like block.
- `anchor`: `Data Fields`
- `confidence`: `0.74`
- `quality_flags`: ["structure_table_like", "cell_grid_not_rebuilt"]

### TBL-0020-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-001`
- `caption`: `API/function block void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 73.8, 345.8, 99.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0020-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-002`
- `caption`: `API/function block Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 337.5, 421.4, 363.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0020-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-003`
- `caption`: `API/function block Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 548.4, 442.5, 574.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0020-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-004`
- `caption`: `API/function block 2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 73.8, 63.2, 99.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0020-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-005`
- `caption`: `API/function block 2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 337.5, 63.2, 363.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0020-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-006`
- `caption`: `API/function block 2.7.1.5 Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 548.4, 63.2, 574.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.5 Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0021-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-001`
- `caption`: `API/function block void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 32.9, 326.0, 58.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0021-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-002`
- `caption`: `API/function block void Dma_Resume(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 227.1, 342.2, 252.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_Resume(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0021-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-003`
- `caption`: `API/function block Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 418.1, 547.6, 443.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0021-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-004`
- `caption`: `API/function block void Dma_SetCfgCompleteInterrupt(uint8 u8Dma_Channel, Boolean bEnable)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 716.4, 410.0, 742.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgCompleteInterrupt(uint8 u8Dma_Channel, Boolean bEnable)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0021-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-005`
- `caption`: `API/function block 2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 32.9, 63.2, 58.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0021-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-006`
- `caption`: `API/function block 2.7.1.7 void Dma_Resume(const Dma_InstanceType eDma_Instance)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 227.1, 63.2, 252.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.7 void Dma_Resume(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0021-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-007`
- `caption`: `API/function block 2.7.1.8 Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 418.1, 63.2, 443.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.8 Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0021-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-008`
- `caption`: `API/function block 2.7.1.9 void Dma_SetCfgCompleteInterrupt(uint8 u8Dma_Channel, Boolean bEnable)`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 716.4, 63.2, 742.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.9 void Dma_SetCfgCompleteInterrupt(uint8 u8Dma_Channel, Boolean bEnable)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0022-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-001`
- `caption`: `API/function block void Dma_StartChannel(const uint8 u8Dma_Channel)`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 203.6, 309.2, 229.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_StartChannel(const uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0022-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-002`
- `caption`: `API/function block void Dma_SetInnerLinkChannel(const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 414.6, 493.9, 440.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetInnerLinkChannel(const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0022-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-003`
- `caption`: `API/function block void Dma_SetOuterLinkChannel (const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 637.0, 498.0, 662.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetOuterLinkChannel (const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0022-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-004`
- `caption`: `API/function block 2.7.1.10 void Dma_StartChannel(const uint8 u8Dma_Channel)`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 203.6, 68.1, 229.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.10 void Dma_StartChannel(const uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0022-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-005`
- `caption`: `API/function block 2.7.1.11 void Dma_SetInnerLinkChannel(const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 414.6, 68.1, 440.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.11 void Dma_SetInnerLinkChannel(const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0022-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-006`
- `caption`: `API/function block 2.7.1.12 void Dma_SetOuterLinkChannel (const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 637.0, 68.1, 662.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.12 void Dma_SetOuterLinkChannel (const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0023-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-001`
- `caption`: `API/function block void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 126.2, 453.6, 151.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0023-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-002`
- `caption`: `API/function block boolean Dma_SetChannelLoopOffsetAndNBYTES (const uint8 u8Dma_Channel, const DMA_NBYTESILOType`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 350.2, 122.0, 375.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `boolean Dma_SetChannelLoopOffsetAndNBYTES (const uint8 u8Dma_Channel, const DMA_NBYTESILOType`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0023-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-003`
- `caption`: `API/function block boolean Dma_CheckIfTransferCompleted (uint8 u8Dma_Channel)`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 666.0, 359.5, 691.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `boolean Dma_CheckIfTransferCompleted (uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0023-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-004`
- `caption`: `API/function block 2.7.1.13 void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 126.2, 68.1, 151.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.13 void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0023-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-005`
- `caption`: `API/function block 2.7.1.14 boolean Dma_SetChannelLoopOffsetAndNBYTES (const uint8 u8Dma_Channel, const DMA_NBYTESILOType`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 350.2, 68.1, 375.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.14 boolean Dma_SetChannelLoopOffsetAndNBYTES (const uint8 u8Dma_Channel, const DMA_NBYTESILOType`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0023-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-006`
- `caption`: `API/function block 2.7.1.15 boolean Dma_CheckIfTransferCompleted (uint8 u8Dma_Channel)`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 666.0, 68.1, 691.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.15 boolean Dma_CheckIfTransferCompleted (uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0024-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-001`
- `caption`: `API/function block boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 183.2, 338.6, 208.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0024-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-002`
- `caption`: `API/function block void Dma_SetCfgSlast (uint8 u8Dma_Channel, sint32 s32Slast)`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 405.8, 345.1, 431.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgSlast (uint8 u8Dma_Channel, sint32 s32Slast)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0024-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-003`
- `caption`: `API/function block void Dma_SetCfgSaddr (uint8 u8Dma_Channel, uint32 u32Saddr)`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 634.1, 356.6, 659.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgSaddr (uint8 u8Dma_Channel, uint32 u32Saddr)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0024-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-004`
- `caption`: `API/function block 2.7.1.16 boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 183.2, 68.1, 208.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.16 boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0024-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-005`
- `caption`: `API/function block 2.7.1.17 void Dma_SetCfgSlast (uint8 u8Dma_Channel, sint32 s32Slast)`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 405.8, 68.1, 431.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.17 void Dma_SetCfgSlast (uint8 u8Dma_Channel, sint32 s32Slast)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0024-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-006`
- `caption`: `API/function block 2.7.1.18 void Dma_SetCfgSaddr (uint8 u8Dma_Channel, uint32 u32Saddr)`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 634.1, 68.1, 659.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.18 void Dma_SetCfgSaddr (uint8 u8Dma_Channel, uint32 u32Saddr)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0025-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-001`
- `caption`: `API/function block void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 108.8, 337.3, 134.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0025-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-002`
- `caption`: `API/function block void Dma_SetCfgDlast (uint8 u8Dma_Channel, sint32 s32Dlast)`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 320.2, 346.8, 345.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgDlast (uint8 u8Dma_Channel, sint32 s32Dlast)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0025-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-003`
- `caption`: `API/function block void Dma_SetCfgDaddr (uint8 u8Dma_Channel, uint32 u32Daddr)`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 548.7, 358.1, 574.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgDaddr (uint8 u8Dma_Channel, uint32 u32Daddr)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0025-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-004`
- `caption`: `API/function block 2.7.1.19 void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 108.8, 68.1, 134.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.19 void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0025-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-005`
- `caption`: `API/function block 2.7.1.20 void Dma_SetCfgDlast (uint8 u8Dma_Channel, sint32 s32Dlast)`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 320.2, 68.1, 345.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.20 void Dma_SetCfgDlast (uint8 u8Dma_Channel, sint32 s32Dlast)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0025-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-006`
- `caption`: `API/function block 2.7.1.21 void Dma_SetCfgDaddr (uint8 u8Dma_Channel, uint32 u32Daddr)`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 548.7, 68.1, 574.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.21 void Dma_SetCfgDaddr (uint8 u8Dma_Channel, uint32 u32Daddr)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0026-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-001`
- `caption`: `API/function block void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 32.9, 339.0, 58.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0026-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-002`
- `caption`: `API/function block void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 244.5, 518.3, 270.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0026-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-003`
- `caption`: `API/function block void Dma_SetCfgDModuloAndSize (uint8 u8Dma_Channel, uint8 u8DModulo, DMA_TranSizeType eDSize)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 465.0, 520.8, 490.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_SetCfgDModuloAndSize (uint8 u8Dma_Channel, uint8 u8DModulo, DMA_TranSizeType eDSize)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0026-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-004`
- `caption`: `API/function block void Dma_EnableHwRequest (uint8 u8Dma_Channel)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 685.7, 307.7, 711.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_EnableHwRequest (uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0026-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-005`
- `caption`: `API/function block 2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 32.9, 68.1, 58.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0026-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-006`
- `caption`: `API/function block 2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 244.5, 68.1, 270.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0026-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-007`
- `caption`: `API/function block 2.7.1.24 void Dma_SetCfgDModuloAndSize (uint8 u8Dma_Channel, uint8 u8DModulo, DMA_TranSizeType eDSize)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 465.0, 68.1, 490.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.24 void Dma_SetCfgDModuloAndSize (uint8 u8Dma_Channel, uint8 u8DModulo, DMA_TranSizeType eDSize)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0026-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0026-008`
- `caption`: `API/function block 2.7.1.25 void Dma_EnableHwRequest (uint8 u8Dma_Channel)`
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 685.7, 68.1, 711.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.25 void Dma_EnableHwRequest (uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0027-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-001`
- `caption`: `API/function block void Dma_DisableHwRequest (uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 170.9, 309.7, 196.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_DisableHwRequest (uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0027-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-002`
- `caption`: `API/function block void Dma_ClearDoneFlag(uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 360.4, 290.3, 386.1]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_ClearDoneFlag(uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0027-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-003`
- `caption`: `API/function block uint16 Dma_GetBeginOuterLoopCounter(uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 554.6, 354.7, 580.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `uint16 Dma_GetBeginOuterLoopCounter(uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0027-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-004`
- `caption`: `API/function block uint16 Dma_GetCurrentOuterLoopCounter(uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 748.7, 362.7, 774.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `uint16 Dma_GetCurrentOuterLoopCounter(uint8 u8Dma_Channel)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0027-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-005`
- `caption`: `API/function block 2.7.1.26 void Dma_DisableHwRequest (uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 170.9, 68.1, 196.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.26 void Dma_DisableHwRequest (uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0027-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-006`
- `caption`: `API/function block 2.7.1.27 void Dma_ClearDoneFlag(uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 360.4, 68.1, 386.1]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.27 void Dma_ClearDoneFlag(uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0027-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-007`
- `caption`: `API/function block 2.7.1.28 uint16 Dma_GetBeginOuterLoopCounter(uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 554.6, 68.1, 580.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.28 uint16 Dma_GetBeginOuterLoopCounter(uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0027-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0027-008`
- `caption`: `API/function block 2.7.1.29 uint16 Dma_GetCurrentOuterLoopCounter(uint8 u8Dma_Channel)`
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 748.7, 68.1, 774.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.29 uint16 Dma_GetCurrentOuterLoopCounter(uint8 u8Dma_Channel)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0028-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-001`
- `caption`: `API/function block void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)`
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 189.6, 420.9, 215.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0028-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-002`
- `caption`: `API/function block Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)`
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 390.6, 562.3, 416.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0028-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-003`
- `caption`: `API/function block Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType* PConfig, sint32`
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [85.7, 698.1, 155.6, 723.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType* PConfig, sint32`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0028-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-004`
- `caption`: `API/function block 2.7.1.30 void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)`
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 189.6, 68.1, 215.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.30 void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0028-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-005`
- `caption`: `API/function block 2.7.1.31 Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)`
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 390.6, 68.1, 416.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.31 Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0028-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0028-006`
- `caption`: `API/function block 2.7.1.32 Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType* PConfig, sint32`
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [36.0, 698.1, 68.1, 723.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.32 Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType* PConfig, sint32`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0032-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0032-001`
- `caption`: `Configuration item DMAGeneral`
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [78.6, 518.9, 138.5, 549.0]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DMAGeneral`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

## 7. Figure / Image Index

### FIG-0003-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0003-001`
- `caption`: `Generated visual anchor: diagram page`
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `image_type`: `vector_or_text_diagram`
- `semantic_description`: Diagram-like page detected from section title and text; underlying graphics may be vector/text objects rather than image objects.
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "Dma_Types.h", "CDD_Dma", "Dma_Types", "Dma_ChannelConfigType", "Dma_ChannelType", "Dma_CoreSpecificChConfigType", "Dma_CoreSpecificHwUnitConfigType", "Dma_ConfigType"]
- `anchor`: `Table of Contents`
- `confidence`: `0.66`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0005-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0005-001`
- `caption`: `Generated figure: image block on page 5`
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 1 DMA Introduction / 1.1 Requirement Tracing`
- `bbox`: [70.9, 319.9, 524.4, 590.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 5 within Chapter 1 DMA Introduction / 1.1 Requirement Tracing.
- `keywords`: ["AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "DMA", "Direct Memory Access", "DMAMUX", "Complex Driver", "FC7xxx", "Introduction", "Requirement", "Tracing"]
- `anchor`: `Chapter 1 DMA Introduction`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0007-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0007-001`
- `caption`: `Generated figure: DMA file structure diagram`
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c`
- `bbox`: [36.0, 166.4, 559.3, 371.3]
- `image_type`: `dependency_diagram`
- `semantic_description`: File structure/dependency diagram for the DMA driver source and header files.
- `keywords`: ["CDD_Dma.c", "CDD_Dma.h", "CDD_Dma", "DMA_VENDOR_ID_C", "DMA_AR_RELEASE_MAJOR_VERSION_C", "DMA_AR_RELEASE_MINOR_VERSION_C", "DMA_AR_RELEASE_REVISION_VERSION_C", "DMA_SW_MAJOR_VERSION_C", "DMA_SW_MINOR_VERSION_C", "DMA_SW_PATCH_VERSION_C"]
- `anchor`: `Chapter 2 Software Design`
- `confidence`: `0.86`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0019-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0019-001`
- `caption`: `Generated figure: image block on page 19`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [116.3, 373.2, 337.4, 477.4]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 19 within Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType.
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_ConfigType", "Dma_CoreSpecificChConfigType", "MCAL_CORES_NUM", "Dma_CoreSpecificHwUnitConfigType", "Cdd_Dma", "DMA", "DMAMUX"]
- `anchor`: `2.6.5 Dma_ConfigType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0019-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0019-002`
- `caption`: `Generated figure: image block on page 19`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType`
- `bbox`: [116.3, 639.3, 339.7, 739.2]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 19 within Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType.
- `keywords`: ["Cdd_Dma.c", "Dma_Init", "Dma_DeInit", "Dma_ConfigType", "Dma_CoreSpecificChConfigType", "MCAL_CORES_NUM", "Dma_CoreSpecificHwUnitConfigType", "Cdd_Dma", "DMA", "DMAMUX"]
- `anchor`: `2.6.5 Dma_ConfigType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0020-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0020-001`
- `caption`: `Generated figure: image block on page 20`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 393.7, 392.8, 459.6]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 20 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_GetVersionInfo", "Dma_CancelTransfer", "Dma_ErrorCancelTransfer", "Std_VersionInfoType", "Std_ReturnType", "Dma_InstanceType", "eDma_Instance", "E_OK", "E_NOT_OK"]
- `anchor`: `2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0020-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0020-002`
- `caption`: `Generated figure: image block on page 20`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 604.7, 434.8, 670.6]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 20 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_GetVersionInfo", "Dma_CancelTransfer", "Dma_ErrorCancelTransfer", "Std_VersionInfoType", "Std_ReturnType", "Dma_InstanceType", "eDma_Instance", "E_OK", "E_NOT_OK"]
- `anchor`: `2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0021-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0021-001`
- `caption`: `Generated figure: image block on page 21`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 89.2, 338.1, 155.2]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 21 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_Halt", "Dma_Resume", "Dma_ConfigChannel", "Dma_SetCfgCompleteInterrupt", "Dma_InstanceType", "eDma_Instance", "Std_ReturnType", "u8Dma_Channel", "Dma_ChannelType"]
- `anchor`: `2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0021-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0021-002`
- `caption`: `Generated figure: image block on page 21`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 283.3, 356.8, 346.2]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 21 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_Halt", "Dma_Resume", "Dma_ConfigChannel", "Dma_SetCfgCompleteInterrupt", "Dma_InstanceType", "eDma_Instance", "Std_ReturnType", "u8Dma_Channel", "Dma_ChannelType"]
- `anchor`: `2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0021-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0021-003`
- `caption`: `Generated figure: image block on page 21`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 508.2, 553.6, 609.5]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 21 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_Halt", "Dma_Resume", "Dma_ConfigChannel", "Dma_SetCfgCompleteInterrupt", "Dma_InstanceType", "eDma_Instance", "Std_ReturnType", "u8Dma_Channel", "Dma_ChannelType"]
- `anchor`: `2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-001`
- `caption`: `Generated figure: image block on page 22`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 37.4, 553.6, 97.1]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 22 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_StartChannel", "Dma_SetInnerLinkChannel", "Dma_SetOuterLinkChannel", "u8Dma_Channel", "Dma_InstanceType", "eDma_Instance", "u8Dma_TriggerChannel", "Cdd_Dma", "DMA"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-002`
- `caption`: `Generated figure: image block on page 22`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 276.8, 548.7, 342.7]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 22 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_StartChannel", "Dma_SetInnerLinkChannel", "Dma_SetOuterLinkChannel", "u8Dma_Channel", "Dma_InstanceType", "eDma_Instance", "u8Dma_TriggerChannel", "Cdd_Dma", "DMA"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-003`
- `caption`: `Generated figure: image block on page 22`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 487.8, 553.6, 547.4]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 22 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_StartChannel", "Dma_SetInnerLinkChannel", "Dma_SetOuterLinkChannel", "u8Dma_Channel", "Dma_InstanceType", "eDma_Instance", "u8Dma_TriggerChannel", "Cdd_Dma", "DMA"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-004`
- `caption`: `Generated figure: image block on page 22`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 727.2, 553.6, 786.1]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 22 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_StartChannel", "Dma_SetInnerLinkChannel", "Dma_SetOuterLinkChannel", "u8Dma_Channel", "Dma_InstanceType", "eDma_Instance", "u8Dma_TriggerChannel", "Cdd_Dma", "DMA"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0023-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0023-001`
- `caption`: `Generated figure: image block on page 23`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 199.3, 553.6, 261.0]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 23 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetChannelPriority", "Dma_SetChannelLoopOffsetAndNBYTES", "Dma_CheckIfTransferCompleted", "u8Dma_Channel", "u8Dma_TriggerChannel", "u8Dma_Priority", "DMA_NBYTESILOType", "Cdd_Dma", "DMA"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0023-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0023-002`
- `caption`: `Generated figure: image block on page 23`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 457.3, 553.6, 558.6]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 23 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetChannelPriority", "Dma_SetChannelLoopOffsetAndNBYTES", "Dma_CheckIfTransferCompleted", "u8Dma_Channel", "u8Dma_TriggerChannel", "u8Dma_Priority", "DMA_NBYTESILOType", "Cdd_Dma", "DMA"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-001`
- `caption`: `Generated figure: image block on page 24`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 37.4, 553.6, 93.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 24 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_CheckIfTransferActive", "Dma_SetCfgSlast", "Dma_SetCfgSaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram", "Numeric"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-002`
- `caption`: `Generated figure: image block on page 24`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 256.3, 553.6, 316.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 24 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_CheckIfTransferActive", "Dma_SetCfgSlast", "Dma_SetCfgSaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram", "Numeric"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-003`
- `caption`: `Generated figure: image block on page 24`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 461.9, 545.0, 527.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 24 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_CheckIfTransferActive", "Dma_SetCfgSlast", "Dma_SetCfgSaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram", "Numeric"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-004`
- `caption`: `Generated figure: image block on page 24`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 690.4, 548.0, 756.3]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 24 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_CheckIfTransferActive", "Dma_SetCfgSlast", "Dma_SetCfgSaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram", "Numeric"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-001`
- `caption`: `Generated figure: image block on page 25`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 165.0, 539.0, 230.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 25 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgSoff", "Dma_SetCfgDlast", "Dma_SetCfgDaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Numeric", "identifier"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-002`
- `caption`: `Generated figure: image block on page 25`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 376.5, 545.0, 442.4]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 25 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgSoff", "Dma_SetCfgDlast", "Dma_SetCfgDaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Numeric", "identifier"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-003`
- `caption`: `Generated figure: image block on page 25`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 604.9, 548.0, 670.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 25 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgSoff", "Dma_SetCfgDlast", "Dma_SetCfgDaddr", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Numeric", "identifier"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0026-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0026-001`
- `caption`: `Generated figure: image block on page 26`
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 89.2, 539.0, 155.2]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 26 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgDoff", "Dma_SetCfgSModuloAndSize", "Dma_SetCfgDModuloAndSize", "Dma_EnableHwRequest", "u8Dma_Channel", "DMA_TranSizeType", "Dma_Channel", "Cdd_Dma", "DMA"]
- `anchor`: `2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0026-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0026-002`
- `caption`: `Generated figure: image block on page 26`
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 300.7, 553.6, 358.4]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 26 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgDoff", "Dma_SetCfgSModuloAndSize", "Dma_SetCfgDModuloAndSize", "Dma_EnableHwRequest", "u8Dma_Channel", "DMA_TranSizeType", "Dma_Channel", "Cdd_Dma", "DMA"]
- `anchor`: `2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0026-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0026-003`
- `caption`: `Generated figure: image block on page 26`
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 521.3, 553.6, 579.0]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 26 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_SetCfgDoff", "Dma_SetCfgSModuloAndSize", "Dma_SetCfgDModuloAndSize", "Dma_EnableHwRequest", "u8Dma_Channel", "DMA_TranSizeType", "Dma_Channel", "Cdd_Dma", "DMA"]
- `anchor`: `2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0027-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0027-001`
- `caption`: `Generated figure: image block on page 27`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 37.4, 553.6, 99.0]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 27 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_DisableHwRequest", "Dma_ClearDoneFlag", "Dma_GetBeginOuterLoopCounter", "Dma_GetCurrentOuterLoopCounter", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0027-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0027-002`
- `caption`: `Generated figure: image block on page 27`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 227.1, 553.6, 288.3]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 27 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_DisableHwRequest", "Dma_ClearDoneFlag", "Dma_GetBeginOuterLoopCounter", "Dma_GetCurrentOuterLoopCounter", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0027-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0027-003`
- `caption`: `Generated figure: image block on page 27`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 416.7, 553.6, 482.1]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 27 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_DisableHwRequest", "Dma_ClearDoneFlag", "Dma_GetBeginOuterLoopCounter", "Dma_GetCurrentOuterLoopCounter", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0027-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0027-004`
- `caption`: `Generated figure: image block on page 27`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 610.7, 553.6, 676.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 27 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_DisableHwRequest", "Dma_ClearDoneFlag", "Dma_GetBeginOuterLoopCounter", "Dma_GetCurrentOuterLoopCounter", "u8Dma_Channel", "Cdd_Dma", "DMA", "FC7xxx", "Diagram"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0028-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0028-001`
- `caption`: `Generated figure: image block on page 28`
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 54.8, 539.0, 117.1]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 28 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_UpdateOuterLoopCounter", "Dma_CalculateSrcChannelLastOffset", "Dma_CalculateDesChannelLastOffset", "u8Dma_Channel", "Std_ReturnType", "Dma_ChannelType", "E_OK", "E_NOT_OK", "Cdd_Dma"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0028-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0028-002`
- `caption`: `Generated figure: image block on page 28`
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 245.9, 553.6, 300.8]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 28 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_UpdateOuterLoopCounter", "Dma_CalculateSrcChannelLastOffset", "Dma_CalculateDesChannelLastOffset", "u8Dma_Channel", "Std_ReturnType", "Dma_ChannelType", "E_OK", "E_NOT_OK", "Cdd_Dma"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0028-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0028-003`
- `caption`: `Generated figure: image block on page 28`
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 514.7, 458.8, 591.9]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 28 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "Dma_UpdateOuterLoopCounter", "Dma_CalculateSrcChannelLastOffset", "Dma_CalculateDesChannelLastOffset", "u8Dma_Channel", "Std_ReturnType", "Dma_ChannelType", "E_OK", "E_NOT_OK", "Cdd_Dma"]
- `anchor`: `u8Dma_Channel Numeric identifier of the DMA channel.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0029-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0029-001`
- `caption`: `Generated figure: image block on page 29`
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c`
- `bbox`: [116.3, 105.6, 461.1, 182.8]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 29 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c.
- `keywords`: ["Cdd_Dma.c", "E_OK", "E_NOT_OK", "Cdd_Dma", "DMA", "FC7xxx", "calculates", "offset", "destination", "returned"]
- `anchor`: `Returns E_OK: calculate is finished.`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0030-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0030-001`
- `caption`: `Generated figure: DMA API sequence diagram`
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.1 DMA Initialization and Requested by Software`
- `bbox`: [36.0, 83.4, 559.3, 564.0]
- `image_type`: `sequence_diagram`
- `semantic_description`: API sequence diagram or call-flow graphic in the DMA user manual.
- `keywords`: ["DMA", "FC7xxx", "WAPI", "Sequence", "Diagram", "Initialization", "Requested", "Software", "API", "graphic"]
- `anchor`: `2.8 WAPI Sequence Diagram`
- `confidence`: `0.82`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0031-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0031-001`
- `caption`: `Generated figure: DMA API sequence diagram`
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: `Chapter 2 Software Design / 2.8 WAPI Sequence Diagram / 2.8.2 DMA Initialization and Requested by Hardware`
- `bbox`: [36.0, 56.7, 559.3, 441.2]
- `image_type`: `sequence_diagram`
- `semantic_description`: API sequence diagram or call-flow graphic in the DMA user manual.
- `keywords`: ["DMA", "FC7xxx", "Initialization", "Requested", "Hardware", "API", "sequence", "diagram", "graphic"]
- `anchor`: `2.8.2 DMA Initialization and Requested by Hardware`
- `confidence`: `0.82`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0032-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0032-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [36.0, 145.7, 559.2, 324.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables", "Screenshot"]
- `anchor`: `Chapter 3 Tresos Configuration Items`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0032-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0032-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [116.3, 412.0, 395.6, 430.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables", "Screenshot"]
- `anchor`: `Chapter 3 Tresos Configuration Items`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0032-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0032-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [116.3, 578.6, 370.9, 615.4]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DMA", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables", "Screenshot"]
- `anchor`: `Chapter 3 Tresos Configuration Items`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0033-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0033-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `bbox`: [116.3, 54.8, 354.2, 74.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.2 Dma_VersionInfoApi`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0033-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0033-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `bbox`: [116.3, 220.0, 334.8, 238.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.2 Dma_VersionInfoApi`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0033-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0033-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `bbox`: [116.3, 383.8, 352.0, 401.8]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.2 Dma_VersionInfoApi`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0033-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0033-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `bbox`: [116.3, 564.5, 308.3, 593.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.2 Dma_VersionInfoApi`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0033-005
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0033-005`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral`
- `bbox`: [116.3, 755.5, 506.5, 776.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["Dma_VersionInfoApi", "Dma_DeInitApi", "DMA_DeInit", "Dma_CancelTransWaitTime", "DMA", "FC7xxx", "Disabled", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.2 Dma_VersionInfoApi`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0034-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0034-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 216.8, 506.5, 237.4]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["ECUC_DMA_006", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Cancel", "Transfer", "Waiting", "Default"]
- `anchor`: `Requirements ECUC_DMA_006`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0034-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0034-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 403.5, 370.7, 444.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["ECUC_DMA_006", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Cancel", "Transfer", "Waiting", "Default"]
- `anchor`: `Requirements ECUC_DMA_006`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0034-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0034-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 590.7, 553.6, 613.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["ECUC_DMA_006", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Cancel", "Transfer", "Waiting", "Default"]
- `anchor`: `Requirements ECUC_DMA_006`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0034-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0034-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 759.6, 553.6, 781.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["ECUC_DMA_006", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Cancel", "Transfer", "Waiting", "Default"]
- `anchor`: `Requirements ECUC_DMA_006`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0035-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0035-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 250.2, 283.6, 267.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_CFG_NBYTES_MLOFFYESn", "DMA_CFG_NBYTES_MLNOn", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Hardware", "Default", "EnableInnerLoopMapping"]
- `anchor`: `3.2.3.3 EnableInnerLoopMapping`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0035-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0035-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 499.7, 314.8, 515.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_CFG_NBYTES_MLOFFYESn", "DMA_CFG_NBYTES_MLNOn", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Hardware", "Default", "EnableInnerLoopMapping"]
- `anchor`: `3.2.3.3 EnableInnerLoopMapping`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0035-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0035-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 662.5, 314.0, 677.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_CFG_NBYTES_MLOFFYESn", "DMA_CFG_NBYTES_MLNOn", "DMA", "FC7xxx", "Properties", "Property", "INTEGER", "Hardware", "Default", "EnableInnerLoopMapping"]
- `anchor`: `3.2.3.3 EnableInnerLoopMapping`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0036-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0036-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 90.4, 314.5, 106.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "FC7xxx", "Support", "ErrorCancel", "Transer", "Container", "SupportErrorCancelTranser", "API", "cancel", "remaining"]
- `anchor`: `3.2.3.6 Support ErrorCancel Transer`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0036-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0036-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 251.7, 314.2, 269.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "FC7xxx", "Support", "ErrorCancel", "Transer", "Container", "SupportErrorCancelTranser", "API", "cancel", "remaining"]
- `anchor`: `3.2.3.6 Support ErrorCancel Transer`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0036-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0036-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [116.3, 450.1, 314.0, 464.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "FC7xxx", "Support", "ErrorCancel", "Transer", "Container", "SupportErrorCancelTranser", "API", "cancel", "remaining"]
- `anchor`: `3.2.3.6 Support ErrorCancel Transer`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0036-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0036-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet`
- `bbox`: [114.2, 627.9, 312.7, 644.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "FC7xxx", "Support", "ErrorCancel", "Transer", "Container", "SupportErrorCancelTranser", "API", "cancel", "remaining"]
- `anchor`: `3.2.3.6 Support ErrorCancel Transer`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0037-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0037-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 71.8, 309.3, 89.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DmaChannel", "FC7xxx", "Enable", "stalls", "channel", "Disable", "continues", "operate"]
- `anchor`: `3.2.3.11 Enable Monitor Checker`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0037-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0037-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 234.4, 426.8, 256.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DmaChannel", "FC7xxx", "Enable", "stalls", "channel", "Disable", "continues", "operate"]
- `anchor`: `3.2.3.11 Enable Monitor Checker`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0037-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0037-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 403.7, 234.6, 421.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DmaChannel", "FC7xxx", "Enable", "stalls", "channel", "Disable", "continues", "operate"]
- `anchor`: `3.2.3.11 Enable Monitor Checker`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0037-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0037-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 567.6, 506.8, 583.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DmaChannel", "FC7xxx", "Enable", "stalls", "channel", "Disable", "continues", "operate"]
- `anchor`: `3.2.3.11 Enable Monitor Checker`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0038-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0038-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 54.8, 515.4, 73.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "FC7xxx", "default", "control", "Screenshot", "Properties", "Property"]
- `anchor`: `By default, value is 'DMA_REQ_DISABLED' (No HW flow control).`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0038-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0038-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 252.6, 399.9, 269.6]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "FC7xxx", "default", "control", "Screenshot", "Properties", "Property"]
- `anchor`: `By default, value is 'DMA_REQ_DISABLED' (No HW flow control).`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0038-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0038-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 414.7, 499.5, 433.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "FC7xxx", "default", "control", "Screenshot", "Properties", "Property"]
- `anchor`: `By default, value is 'DMA_REQ_DISABLED' (No HW flow control).`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0038-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0038-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 596.8, 399.7, 612.5]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA_REQ_DISABLED", "DMA", "DMAMUX", "DmaChannel", "FC7xxx", "default", "control", "Screenshot", "Properties", "Property"]
- `anchor`: `By default, value is 'DMA_REQ_DISABLED' (No HW flow control).`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0039-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0039-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 37.8, 366.0, 53.8]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["NULL_PTR", "DMA", "Dma driver", "DmaChannel", "FC7xxx", "Screenshot", "Properties", "Property", "BOOLEAN", "Enable"]
- `anchor`: `3.2.4.7 DMAChannelTramsferCompleteISRCallout`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0039-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0039-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 217.2, 526.4, 233.6]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["NULL_PTR", "DMA", "Dma driver", "DmaChannel", "FC7xxx", "Screenshot", "Properties", "Property", "BOOLEAN", "Enable"]
- `anchor`: `3.2.4.7 DMAChannelTramsferCompleteISRCallout`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0039-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0039-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 396.6, 400.2, 413.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["NULL_PTR", "DMA", "Dma driver", "DmaChannel", "FC7xxx", "Screenshot", "Properties", "Property", "BOOLEAN", "Enable"]
- `anchor`: `3.2.4.7 DMAChannelTramsferCompleteISRCallout`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0039-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0039-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig`
- `bbox`: [116.3, 575.5, 484.9, 593.8]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["NULL_PTR", "DMA", "Dma driver", "DmaChannel", "FC7xxx", "Screenshot", "Properties", "Property", "BOOLEAN", "Enable"]
- `anchor`: `3.2.4.7 DMAChannelTramsferCompleteISRCallout`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0040-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0040-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 37.4, 519.8, 105.6]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE", "Default", "CommonPublishedInformation", "Container"]
- `anchor`: `3.2.5 CommonPublishedInformation`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0040-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0040-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 271.7, 399.7, 316.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE", "Default", "CommonPublishedInformation", "Container"]
- `anchor`: `3.2.5 CommonPublishedInformation`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0040-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0040-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 463.7, 423.1, 479.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE", "Default", "CommonPublishedInformation", "Container"]
- `anchor`: `3.2.5 CommonPublishedInformation`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0040-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0040-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 624.7, 489.0, 641.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "REFERENCE", "Default", "CommonPublishedInformation", "Container"]
- `anchor`: `3.2.5 CommonPublishedInformation`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0041-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0041-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 37.4, 490.5, 54.6]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchor`: `Type INTEGER_LABEL`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0041-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0041-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 217.5, 487.5, 234.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchor`: `Type INTEGER_LABEL`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0041-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0041-003`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 396.5, 488.0, 414.4]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchor`: `Type INTEGER_LABEL`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0041-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0041-004`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 578.4, 469.9, 594.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchor`: `Type INTEGER_LABEL`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0041-005
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0041-005`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [116.3, 739.4, 476.2, 757.5]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Screenshot", "Properties", "Property", "Default", "Software", "Version", "Container"]
- `anchor`: `Type INTEGER_LABEL`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0042-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0042-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation`
- `bbox`: [114.2, 165.0, 484.7, 182.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["INTEGER_LABEL", "DMA", "FC7xxx", "Default", "Vendor", "Container", "dedicated", "implementation", "according", "AUTOSAR"]
- `anchor`: `Type INTEGER_LABEL`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0043-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0043-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `bbox`: [70.9, 162.6, 524.4, 431.8]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "Guides", "Constraint", "channel", "setting", "duplicate", "cannot", "DmaChannelId"]
- `anchor`: `Chapter 4 Configuration Guides`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0043-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0043-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`
- `bbox`: [70.9, 483.7, 524.4, 743.8]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "Guides", "Constraint", "channel", "setting", "duplicate", "cannot", "DmaChannelId"]
- `anchor`: `Chapter 4 Configuration Guides`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0044-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0044-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: `Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps`
- `bbox`: [71.1, 156.5, 554.4, 304.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "DmaChannel", "FC7xxx", "channel", "setting", "Priority", "channels", "continuous", "cannot", "repeat"]
- `anchor`: `3) In DMA channel setting, Dma Channel Priority configuration of all channels must be continuous from 0, cannot repeat`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0045-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0045-001`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger`
- `bbox`: [70.9, 83.4, 524.4, 344.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "FC7xxx", "Hardware", "Trigger", "Software", "tresos", "screenshot", "visual", "property"]
- `anchor`: `4.3 DMA Configuration Demo`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0045-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0045-002`
- `caption`: `Generated figure: DMA configuration screenshot`
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: `Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger`
- `bbox`: [70.9, 393.6, 524.4, 656.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DMA.
- `keywords`: ["DMA", "FC7xxx", "Hardware", "Trigger", "Software", "tresos", "screenshot", "visual", "property"]
- `anchor`: `4.3 DMA Configuration Demo`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

## 8. Term / API / Config / Requirement Index

### API-DMA-DEINIT
- `name`: `Dma_DeInit`
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: [8, 19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p8: API Dma_DeInit service execution failed.", "p19: 2.7.1.2 void Dma_DeInit(void)"]
- `aliases`: ["Dma DeInit"]

### API-DMA-GETVERSIONINFO
- `name`: `DMA_GetVersionInfo`
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p8: API DMA_GetVersionInfo is called and the parameter version info is invalid ( e.g. NULL)."]
- `aliases`: ["DMA GetVersionInfo"]

### API-DMA-INIT
- `name`: `DMA_Init`
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: [8, 9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p8: API DMA_Init service called when the DMA driver and the Hardware are already initialized.", "p9: • #define DMA_INIT_ID_U8 ((uint8)0x23U)"]
- `aliases`: ["DMA Init"]

### API-DMA-INIT-02
- `name`: `Dma_Init`
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: [8, 19]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p8: API DMA_Init service called when the DMA driver and the Hardware are already initialized.", "p19: 2.7.1.1 void Dma_Init (const Dma_ConfigType *pConfigPtr)"]
- `aliases`: ["Dma Init"]

### API-DMA-CHECKIFTRANSFERACTIVE
- `name`: `Dma_CheckIfTransferActive`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9, 24]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for Dma_CheckIfTransferActive function.", "p24: 2.7.1.16 boolean Dma_CheckIfTransferActive (uint8 u8Dma_Channel)"]
- `aliases`: ["Dma CheckIfTransferActive"]

### API-DMA-CHECKIFTRANSFERCOMPLETED
- `name`: `Dma_CheckIfTransferCompleted`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9, 23]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for Dma_CheckIfTransferCompleted function.", "p23: 2.7.1.15 boolean Dma_CheckIfTransferCompleted (uint8 u8Dma_Channel)"]
- `aliases`: ["Dma CheckIfTransferCompleted"]

### API-DMA-CONFIGINPUT
- `name`: `DMA_ConfigInput`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API DMA_ConfigInput service called with wrong parameter register Index."]
- `aliases`: ["DMA ConfigInput"]

### API-DMA-SETCHANNELLOOPOFFSETANDNBYTES
- `name`: `DMA_SetChannelLoopOffsetAndNBYTES`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for DMA_SetChannelLoopOffsetAndNBYTES function."]
- `aliases`: ["DMA SetChannelLoopOffsetAndNBYTES"]

### API-DMA-SETCHANNELPRIORITY
- `name`: `DMA_SetChannelPriority`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for DMA_SetChannelPriority function."]
- `aliases`: ["DMA SetChannelPriority"]

### API-DMA-SETOUTERLINKCHANNEL
- `name`: `DMA_SetOuterLinkChannel`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for DMA_SetOuterLinkChannel function."]
- `aliases`: ["DMA SetOuterLinkChannel"]

### API-DMA-STARTCHANNEL
- `name`: `DMA_StartChannel`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for DMA_StartChannel function."]
- `aliases`: ["DMA StartChannel"]

### API-DMA-TRGMUXCONFIGLOCK
- `name`: `DMA_TrgMuxConfigLock`
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p9: API service ID for DMA_TrgMuxConfigLock function"]
- `aliases`: ["DMA TrgMuxConfigLock"]

### API-DMA-CALCULATESRCCHANNELLASTOFFSET
- `name`: `Dma_CalculateSrcChannelLastOffset`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 28]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_CalculateSrcChannelLastOffset function.", "p28: 2.7.1.31 Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)"]
- `aliases`: ["Dma CalculateSrcChannelLastOffset"]

### API-DMA-CLEARDONEFLAG
- `name`: `Dma_ClearDoneFlag`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 27]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_ClearDoneFlag function.", "p27: 2.7.1.27 void Dma_ClearDoneFlag(uint8 u8Dma_Channel)"]
- `aliases`: ["Dma ClearDoneFlag"]

### API-DMA-DISABLEHWREQUEST
- `name`: `Dma_DisableHWRequest`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_DisableHWRequest function."]
- `aliases`: ["Dma DisableHWRequest"]

### API-DMA-ENABLEHWREQUEST
- `name`: `Dma_EnableHWRequest`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_EnableHWRequest function."]
- `aliases`: ["Dma EnableHWRequest"]

### API-DMA-GETBEGINOUTERLOOPCOUNTER
- `name`: `Dma_GetBeginOuterLoopCounter`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 27]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_GetBeginOuterLoopCounter function.", "p27: 2.7.1.28 uint16 Dma_GetBeginOuterLoopCounter(uint8 u8Dma_Channel)"]
- `aliases`: ["Dma GetBeginOuterLoopCounter"]

### API-DMA-GETCURRENTOUTERLOOPCOUNTER
- `name`: `Dma_GetCurrentOuterLoopCounter`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 27]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_GetCurrentOuterLoopCounter function.", "p27: 2.7.1.29 uint16 Dma_GetCurrentOuterLoopCounter(uint8 u8Dma_Channel)"]
- `aliases`: ["Dma GetCurrentOuterLoopCounter"]

### API-DMA-SETCFGCOMPLETEINTERRUPT
- `name`: `Dma_SetCfgCompleteInterrupt`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 21]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgCompleteInterrupt function.", "p21: 2.7.1.9 void Dma_SetCfgCompleteInterrupt(uint8 u8Dma_Channel, Boolean bEnable)"]
- `aliases`: ["Dma SetCfgCompleteInterrupt"]

### API-DMA-SETCFGDLAST
- `name`: `Dma_SetCfgDlast`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 25]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgDlast function.", "p25: 2.7.1.20 void Dma_SetCfgDlast (uint8 u8Dma_Channel, sint32 s32Dlast)"]
- `aliases`: ["Dma SetCfgDlast"]

### API-DMA-SETCFGDOFF
- `name`: `Dma_SetCfgDoff`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgDoff function.", "p26: 2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)"]
- `aliases`: ["Dma SetCfgDoff"]

### API-DMA-SETCFGSADDR
- `name`: `Dma_SetCfgSaddr`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 24]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgSaddr function.", "p24: 2.7.1.18 void Dma_SetCfgSaddr (uint8 u8Dma_Channel, uint32 u32Saddr)"]
- `aliases`: ["Dma SetCfgSaddr"]

### API-DMA-SETCFGSLAST
- `name`: `Dma_SetCfgSlast`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 24]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgSlast function.", "p24: 2.7.1.17 void Dma_SetCfgSlast (uint8 u8Dma_Channel, sint32 s32Slast)"]
- `aliases`: ["Dma SetCfgSlast"]

### API-DMA-SETCFGSMODULOANDSIZE
- `name`: `Dma_SetCfgSModuloAndSize`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgSModuloAndSize function.", "p26: 2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)"]
- `aliases`: ["Dma SetCfgSModuloAndSize"]

### API-DMA-SETCFGSOFF
- `name`: `Dma_SetCfgSoff`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 25]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_SetCfgSoff function.", "p25: 2.7.1.19 void Dma_SetCfgSoff (uint8 u8Dma_Channel, sint16 s16Soff)"]
- `aliases`: ["Dma SetCfgSoff"]

### API-DMA-UPDATEOUTERLOOPCOUNTER
- `name`: `Dma_UpdateOuterLoopCounter`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: [10, 28]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p10: API service ID for Dma_UpdateOuterLoopCounter function.", "p28: 2.7.1.30 void Dma_UpdateOuterLoopCounter(uint8 u8Dma_Channel, uint16 u16Counter)"]
- `aliases`: ["Dma UpdateOuterLoopCounter"]

### API-DMA-CALCULATEDESCHANNELLASTOFFSET
- `name`: `Dma_CalculateDesChannelLastOffset`
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: [11, 28]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p11: API service ID for Dma_CalculateDesChannelLastOffset function.", "p28: 2.7.1.32 Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType* PConfig, sint32"]
- `aliases`: ["Dma CalculateDesChannelLastOffset"]

### API-DMA-CANCELTRANSFER
- `name`: `Dma_CancelTransfer`
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: [11, 20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p11: API service ID for Dma_CancelTransfer function.", "p20: 2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)"]
- `aliases`: ["Dma CancelTransfer"]

### API-DMA-ERRORCANCELTRANSFER
- `name`: `Dma_ErrorCancelTransfer`
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: [11, 20]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p11: API service ID for Dma_ErrorCancelTransfer function.", "p20: 2.7.1.5 Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)"]
- `aliases`: ["Dma ErrorCancelTransfer"]

### API-DMA-UPDATECHANNELCONFIGSET
- `name`: `DMA_UpdateChannelConfigSet`
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p11: API service ID for DMA_UpdateChannelConfigSet function."]
- `aliases`: ["DMA UpdateChannelConfigSet"]

### API-DMA-GETVERSIONINFO-02
- `name`: `Dma_GetVersionInfo`
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p20: 2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"]
- `aliases`: ["Dma GetVersionInfo"]

### API-DMA-CONFIGCHANNEL
- `name`: `Dma_ConfigChannel`
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p21: 2.7.1.8 Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)"]
- `aliases`: ["Dma ConfigChannel"]

### API-DMA-SETINNERLINKCHANNEL
- `name`: `Dma_SetInnerLinkChannel`
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p22: 2.7.1.11 void Dma_SetInnerLinkChannel(const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)"]
- `aliases`: ["Dma SetInnerLinkChannel"]

### API-DMA-SETOUTERLINKCHANNEL-02
- `name`: `Dma_SetOuterLinkChannel`
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p22: 2.7.1.12 void Dma_SetOuterLinkChannel (const uint8 u8Dma_Channel, const uint8 u8Dma_TriggerChannel)"]
- `aliases`: ["Dma SetOuterLinkChannel"]

### API-DMA-STARTCHANNEL-02
- `name`: `Dma_StartChannel`
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p22: 2.7.1.10 void Dma_StartChannel(const uint8 u8Dma_Channel)"]
- `aliases`: ["Dma StartChannel"]

### API-DMA-SETCHANNELLOOPOFFSETANDNBYTES-02
- `name`: `Dma_SetChannelLoopOffsetAndNBYTES`
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p23: 2.7.1.14 boolean Dma_SetChannelLoopOffsetAndNBYTES (const uint8 u8Dma_Channel, const DMA_NBYTESILOType"]
- `aliases`: ["Dma SetChannelLoopOffsetAndNBYTES"]

### API-DMA-SETCHANNELPRIORITY-02
- `name`: `Dma_SetChannelPriority`
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p23: 2.7.1.13 void Dma_SetChannelPriority (const uint8 u8Dma_Channel, const uint8 u8Dma_Priority)"]
- `aliases`: ["Dma SetChannelPriority"]

### API-DMA-SETCFGDADDR
- `name`: `Dma_SetCfgDaddr`
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: [25]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p25: 2.7.1.21 void Dma_SetCfgDaddr (uint8 u8Dma_Channel, uint32 u32Daddr)"]
- `aliases`: ["Dma SetCfgDaddr"]

### API-DMA-CHANNEL
- `name`: `Dma_Channel`
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p26: 2.7.1.22 void Dma_SetCfgDoff (uint8 u8Dma_Channel, sint16 s16Doff)"]
- `aliases`: ["Dma Channel"]

### API-DMA-ENABLEHWREQUEST-02
- `name`: `Dma_EnableHwRequest`
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p26: 2.7.1.25 void Dma_EnableHwRequest (uint8 u8Dma_Channel)"]
- `aliases`: ["Dma EnableHwRequest"]

### API-DMA-SETCFGDMODULOANDSIZE
- `name`: `Dma_SetCfgDModuloAndSize`
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: [26]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p26: 2.7.1.24 void Dma_SetCfgDModuloAndSize (uint8 u8Dma_Channel, uint8 u8DModulo, DMA_TranSizeType eDSize)"]
- `aliases`: ["Dma SetCfgDModuloAndSize"]

### API-DMA-DISABLEHWREQUEST-02
- `name`: `Dma_DisableHwRequest`
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: [27]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA API/function entry documented with signature, parameters or return information.
- `anchors`: ["p27: 2.7.1.26 void Dma_DisableHwRequest (uint8 u8Dma_Channel)"]
- `aliases`: ["Dma DisableHwRequest"]

### FUNC-CDD-DMA
- `name`: `CDD_Dma`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: [3, 7]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p3: 2.3.1 Macros in CDD_Dma.c .................................................................................................................................. 7", "p7: 2.3.1 Macros in CDD_Dma.c"]
- `aliases`: ["CDD Dma"]

### FUNC-CDD-DMA-02
- `name`: `Cdd_Dma`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: [3, 19]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p3: 2.3.1 Macros in CDD_Dma.c .................................................................................................................................. 7", "p19: 2.7.1 Functions in Cdd_Dma.c"]
- `aliases`: ["Cdd Dma"]

### FUNC-AUTOSAR-EXP-CDDDESIGNANDINTEGRATIONGUIDELINE
- `name`: `AUTOSAR_EXP_CDDDesignAndIntegrationGuideline`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 1 DMA Introduction / 1.1 Requirement Tracing"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p5: For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf."]
- `aliases`: ["AUTOSAR EXP CDDDesignAndIntegrationGuideline"]

### FUNC-DMA-CONFIG
- `name`: `Dma_Config`
- `type`: `function`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p8: • #define DMA_INDEX(COREID) ((uint8)Dma_Config.pDmaCoreConfig[COREID]->DmaInstanceNumber)"]
- `aliases`: ["Dma Config"]

### FUNC-DMA-DEINIT
- `name`: `DMA_DeInit`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9, 33]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: • #define DMA_DEINIT_ID_U8 ((uint8)0x56U)", "p33: 3.2.2.3 Dma_DeInitApi"]
- `aliases`: ["DMA DeInit"]

### FUNC-DMA-SETINNERLINKCHANNEL
- `name`: `DMA_SetInnerLinkChannel`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p9: Service ID for DMA_SetInnerLinkChannel function."]
- `aliases`: ["DMA SetInnerLinkChannel"]

### FUNC-DMA-HALT
- `name`: `Dma_Halt`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 21]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: • #define DMA_HALT_ID_U8 ((uint8)0x70U)", "p21: 2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)"]
- `aliases`: ["Dma Halt"]

### FUNC-DMA-RESUME
- `name`: `Dma_Resume`
- `type`: `function`
- `primary_page`: `11`
- `physical_pages`: [11, 21]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p11: • #define DMA_RESUME_ID_U8 ((uint8)0x71U)", "p21: 2.7.1.7 void Dma_Resume(const Dma_InstanceType eDma_Instance)"]
- `aliases`: ["Dma Resume"]

### FUNC-DMA-CANCELTRANSWAITTIME
- `name`: `Dma_CancelTransWaitTime`
- `type`: `function`
- `primary_page`: `33`
- `physical_pages`: [33]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p33: 3.2.2.5 Dma_CancelTransWaitTime"]
- `aliases`: ["Dma CancelTransWaitTime"]

### FUNC-DMA-DEINITAPI
- `name`: `Dma_DeInitApi`
- `type`: `function`
- `primary_page`: `33`
- `physical_pages`: [33]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p33: 3.2.2.3 Dma_DeInitApi"]
- `aliases`: ["Dma DeInitApi"]

### FUNC-DMA-VERSIONINFOAPI
- `name`: `Dma_VersionInfoApi`
- `type`: `function`
- `primary_page`: `33`
- `physical_pages`: [33]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p33: 3.2.2.2 Dma_VersionInfoApi"]
- `aliases`: ["Dma VersionInfoApi"]

### FUNC-DMA-CFG-NBYTES-MLNON
- `name`: `DMA_CFG_NBYTES_MLNOn`
- `type`: `function`
- `primary_page`: `35`
- `physical_pages`: [35]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p35: - Disable: DMA_CFG_NBYTES_MLNOn is defined as a 32-bit NBYTES field."]
- `aliases`: ["DMA CFG NBYTES MLNOn"]

### FUNC-DMA-CFG-NBYTES-MLOFFYESN
- `name`: `DMA_CFG_NBYTES_MLOFFYESn`
- `type`: `function`
- `primary_page`: `35`
- `physical_pages`: [35]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet"]
- `brief`: DMA internal/helper function or callable symbol.
- `anchors`: ["p35: Description - Enable: DMA_CFG_NBYTES_MLOFFYESn is redefined as the fields including individual enable, an"]
- `aliases`: ["DMA CFG NBYTES MLOFFYESn"]

### MACRO-DMA-AR-RELEASE-MAJOR-VERSION
- `name`: `DMA_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_AR_RELEASE_MAJOR_VERSION_C 4"]
- `aliases`: ["DMA AR RELEASE MAJOR VERSION"]

### MACRO-DMA-AR-RELEASE-MAJOR-VERSION-C
- `name`: `DMA_AR_RELEASE_MAJOR_VERSION_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_AR_RELEASE_MAJOR_VERSION_C 4"]
- `aliases`: ["DMA AR RELEASE MAJOR VERSION C"]

### MACRO-DMA-AR-RELEASE-MINOR-VERSION-C
- `name`: `DMA_AR_RELEASE_MINOR_VERSION_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_AR_RELEASE_MINOR_VERSION_C 6"]
- `aliases`: ["DMA AR RELEASE MINOR VERSION C"]

### MACRO-DMA-AR-RELEASE-REVISION-VERSION-C
- `name`: `DMA_AR_RELEASE_REVISION_VERSION_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_AR_RELEASE_REVISION_VERSION_C 0"]
- `aliases`: ["DMA AR RELEASE REVISION VERSION C"]

### MACRO-DMA-SW-MAJOR-VERSION-C
- `name`: `DMA_SW_MAJOR_VERSION_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_SW_MAJOR_VERSION_C 0"]
- `aliases`: ["DMA SW MAJOR VERSION C"]

### MACRO-DMA-SW-MINOR-VERSION-C
- `name`: `DMA_SW_MINOR_VERSION_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_SW_MINOR_VERSION_C 4"]
- `aliases`: ["DMA SW MINOR VERSION C"]

### MACRO-DMA-SW-PATCH-VERSION-C
- `name`: `DMA_SW_PATCH_VERSION_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_SW_PATCH_VERSION_C 0"]
- `aliases`: ["DMA SW PATCH VERSION C"]

### MACRO-DMA-VENDOR-ID
- `name`: `DMA_VENDOR_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_VENDOR_ID_C 174"]
- `aliases`: ["DMA VENDOR ID"]

### MACRO-DMA-VENDOR-ID-C
- `name`: `DMA_VENDOR_ID_C`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DMA_VENDOR_ID_C 174"]
- `aliases`: ["DMA VENDOR ID C"]

### MACRO-DMA-AR-RELEASE-MINOR-VERSION
- `name`: `DMA_AR_RELEASE_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_AR_RELEASE_MINOR_VERSION 6"]
- `aliases`: ["DMA AR RELEASE MINOR VERSION"]

### MACRO-DMA-AR-RELEASE-REVISION-VERSION
- `name`: `DMA_AR_RELEASE_REVISION_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_AR_RELEASE_REVISION_VERSION 0"]
- `aliases`: ["DMA AR RELEASE REVISION VERSION"]

### MACRO-DMA-GETVERSIONINFO-ID-U8
- `name`: `DMA_GETVERSIONINFO_ID_U8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_GETVERSIONINFO_ID_U8 ((uint8)0x17U)"]
- `aliases`: ["DMA GETVERSIONINFO ID U8"]

### MACRO-DMA-INDEX
- `name`: `DMA_INDEX`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_INDEX(COREID) ((uint8)Dma_Config.pDmaCoreConfig[COREID]->DmaInstanceNumber)"]
- `aliases`: ["DMA INDEX"]

### MACRO-DMA-SW-MAJOR-VERSION
- `name`: `DMA_SW_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_SW_MAJOR_VERSION 0"]
- `aliases`: ["DMA SW MAJOR VERSION"]

### MACRO-DMA-SW-MINOR-VERSION
- `name`: `DMA_SW_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_SW_MINOR_VERSION 4"]
- `aliases`: ["DMA SW MINOR VERSION"]

### MACRO-DMA-SW-PATCH-VERSION
- `name`: `DMA_SW_PATCH_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DMA_SW_PATCH_VERSION 0"]
- `aliases`: ["DMA SW PATCH VERSION"]

### MACRO-DMA-CONFIG-ID-U8
- `name`: `DMA_CONFIG_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_CONFIG_ID_U8 ((uint8)0x54U)"]
- `aliases`: ["DMA CONFIG ID U8"]

### MACRO-DMA-CONFIG-LOCK-U8
- `name`: `DMA_CONFIG_LOCK_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_CONFIG_LOCK_U8 ((uint8)0x55U)"]
- `aliases`: ["DMA CONFIG LOCK U8"]

### MACRO-DMA-DEINIT-ID-U8
- `name`: `DMA_DEINIT_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_DEINIT_ID_U8 ((uint8)0x56U)"]
- `aliases`: ["DMA DEINIT ID U8"]

### MACRO-DMA-INIT-ID-U8
- `name`: `DMA_INIT_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_INIT_ID_U8 ((uint8)0x23U)"]
- `aliases`: ["DMA INIT ID U8"]

### MACRO-DMA-SET-INNER-ATTR-ID-U8
- `name`: `DMA_SET_INNER_ATTR_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_SET_INNER_ATTR_ID_U8 ((uint8)0x5BU)"]
- `aliases`: ["DMA SET INNER ATTR ID U8"]

### MACRO-DMA-SET-INNER-CH-ID-U8
- `name`: `DMA_SET_INNER_CH_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_SET_INNER_CH_ID_U8 ((uint8)0x58U)"]
- `aliases`: ["DMA SET INNER CH ID U8"]

### MACRO-DMA-SET-OUTER-CH-ID-U8
- `name`: `DMA_SET_OUTER_CH_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_SET_OUTER_CH_ID_U8 ((uint8)0x59U)"]
- `aliases`: ["DMA SET OUTER CH ID U8"]

### MACRO-DMA-SET-PRIORITY-ID-U8
- `name`: `DMA_SET_PRIORITY_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_SET_PRIORITY_ID_U8 ((uint8)0x5AU)"]
- `aliases`: ["DMA SET PRIORITY ID U8"]

### MACRO-DMA-START-CH-ID-U8
- `name`: `DMA_START_CH_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_START_CH_ID_U8 ((uint8)0x57U)"]
- `aliases`: ["DMA START CH ID U8"]

### MACRO-DMA-TRANSF-ACTIVE-ID-U8
- `name`: `DMA_TRANSF_ACTIVE_ID_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_TRANSF_ACTIVE_ID_U8 ((uint8)0x5DU)"]
- `aliases`: ["DMA TRANSF ACTIVE ID U8"]

### MACRO-DMA-TRANSF-COMPLETE-ID-U
- `name`: `DMA_TRANSF_COMPLETE_ID_U`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DMA_TRANSF_COMPLETE_ID_U ((uint8)0x5CU)"]
- `aliases`: ["DMA TRANSF COMPLETE ID U"]

### MACRO-DMA-CAL-SRC-LAST-OFFSET-ID-U8
- `name`: `DMA_CAL_SRC_LAST_OFFSET_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_CAL_SRC_LAST_OFFSET_ID_U8 ((uint8)0x6BU)"]
- `aliases`: ["DMA CAL SRC LAST OFFSET ID U8"]

### MACRO-DMA-CLR-DONE-FLAG-ID-U8
- `name`: `DMA_CLR_DONE_FLAG_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_CLR_DONE_FLAG_ID_U8 ((uint8)0x67U)"]
- `aliases`: ["DMA CLR DONE FLAG ID U8"]

### MACRO-DMA-DIS-HW-REQ-ID-U8
- `name`: `DMA_DIS_HW_REQ_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_DIS_HW_REQ_ID_U8 ((uint8)0x65U)"]
- `aliases`: ["DMA DIS HW REQ ID U8"]

### MACRO-DMA-EN-HW-REQ-ID-U8
- `name`: `DMA_EN_HW_REQ_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_EN_HW_REQ_ID_U8 ((uint8)0x64U)"]
- `aliases`: ["DMA EN HW REQ ID U8"]

### MACRO-DMA-GET-BEGIN-COUNTER-ID-U8
- `name`: `DMA_GET_BEGIN_COUNTER_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_GET_BEGIN_COUNTER_ID_U8 ((uint8)0x68U)"]
- `aliases`: ["DMA GET BEGIN COUNTER ID U8"]

### MACRO-DMA-GET-CURRENT-COUNTER-ID-U8
- `name`: `DMA_GET_CURRENT_COUNTER_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_GET_CURRENT_COUNTER_ID_U8 ((uint8)0x69U)"]
- `aliases`: ["DMA GET CURRENT COUNTER ID U8"]

### MACRO-DMA-SET-DLAST-ID-U8
- `name`: `DMA_SET_DLAST_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_DLAST_ID_U8 ((uint8)0x60U)"]
- `aliases`: ["DMA SET DLAST ID U8"]

### MACRO-DMA-SET-DOFF-ID-U8
- `name`: `DMA_SET_DOFF_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_DOFF_ID_U8 ((uint8)0x61U)"]
- `aliases`: ["DMA SET DOFF ID U8"]

### MACRO-DMA-SET-DONE-INT-ID-U8
- `name`: `DMA_SET_DONE_INT_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_DONE_INT_ID_U8 ((uint8)0x66U)"]
- `aliases`: ["DMA SET DONE INT ID U8"]

### MACRO-DMA-SET-MOD-SIZE-ID-U8
- `name`: `DMA_SET_MOD_SIZE_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_MOD_SIZE_ID_U8 ((uint8)0x63U)"]
- `aliases`: ["DMA SET MOD SIZE ID U8"]

### MACRO-DMA-SET-OUTER-COUNTER-ID-U8
- `name`: `DMA_SET_OUTER_COUNTER_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_OUTER_COUNTER_ID_U8 ((uint8)0x6AU)"]
- `aliases`: ["DMA SET OUTER COUNTER ID U8"]

### MACRO-DMA-SET-SADDR-ID-U8
- `name`: `DMA_SET_SADDR_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_SADDR_ID_U8 ((uint8)0x5EU)"]
- `aliases`: ["DMA SET SADDR ID U8"]

### MACRO-DMA-SET-SLAST-ID-U8
- `name`: `DMA_SET_SLAST_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_SLAST_ID_U8 ((uint8)0x62U)"]
- `aliases`: ["DMA SET SLAST ID U8"]

### MACRO-DMA-SET-SOFF-ID-U8
- `name`: `DMA_SET_SOFF_ID_U8`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p10: • #define DMA_SET_SOFF_ID_U8 ((uint8)0x5FU)"]
- `aliases`: ["DMA SET SOFF ID U8"]

### MACRO-DMA-CAL-DES-LAST-OFFSET-ID-U8
- `name`: `DMA_CAL_DES_LAST_OFFSET_ID_U8`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_CAL_DES_LAST_OFFSET_ID_U8 ((uint8)0x6CU)"]
- `aliases`: ["DMA CAL DES LAST OFFSET ID U8"]

### MACRO-DMA-CAL-UPDATE-CONFIGSET-ID-U8
- `name`: `DMA_CAL_UPDATE_CONFIGSET_ID_U8`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_CAL_UPDATE_CONFIGSET_ID_U8 ((uint8)0x6DU)"]
- `aliases`: ["DMA CAL UPDATE CONFIGSET ID U8"]

### MACRO-DMA-CANCEL-TRANSFER-ID-U8
- `name`: `DMA_CANCEL_TRANSFER_ID_U8`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_CANCEL_TRANSFER_ID_U8 ((uint8)0x6EU)"]
- `aliases`: ["DMA CANCEL TRANSFER ID U8"]

### MACRO-DMA-ERR-CANCEL-TRANSFER-ID-U8
- `name`: `DMA_ERR_CANCEL_TRANSFER_ID_U8`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_ERR_CANCEL_TRANSFER_ID_U8 ((uint8)0x6FU)"]
- `aliases`: ["DMA ERR CANCEL TRANSFER ID U8"]

### MACRO-DMA-HALT-ID-U8
- `name`: `DMA_HALT_ID_U8`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_HALT_ID_U8 ((uint8)0x70U)"]
- `aliases`: ["DMA HALT ID U8"]

### MACRO-DMA-INSTANCE-0
- `name`: `DMA_INSTANCE_0`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: DMA_INSTANCE_0 = 0U DMA instance _0."]
- `aliases`: ["DMA INSTANCE 0"]

### MACRO-DMA-RESUME-ID-U8
- `name`: `DMA_RESUME_ID_U8`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_RESUME_ID_U8 ((uint8)0x71U)"]
- `aliases`: ["DMA RESUME ID U8"]

### MACRO-DMA-TYPES-AR-RELEASE-MAJOR-VERSION
- `name`: `DMA_TYPES_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_AR_RELEASE_MAJOR_VERSION 4"]
- `aliases`: ["DMA TYPES AR RELEASE MAJOR VERSION"]

### MACRO-DMA-TYPES-AR-RELEASE-MINOR-VERSION
- `name`: `DMA_TYPES_AR_RELEASE_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_AR_RELEASE_MINOR_VERSION 6"]
- `aliases`: ["DMA TYPES AR RELEASE MINOR VERSION"]

### MACRO-DMA-TYPES-AR-RELEASE-REVISION-VERSION
- `name`: `DMA_TYPES_AR_RELEASE_REVISION_VERSION`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_AR_RELEASE_REVISION_VERSION 0"]
- `aliases`: ["DMA TYPES AR RELEASE REVISION VERSION"]

### MACRO-DMA-TYPES-MODULE-ID
- `name`: `DMA_TYPES_MODULE_ID`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_MODULE_ID 27"]
- `aliases`: ["DMA TYPES MODULE ID"]

### MACRO-DMA-TYPES-SW-MAJOR-VERSIO
- `name`: `DMA_TYPES_SW_MAJOR_VERSIO`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_SW_MAJOR_VERSIO 0"]
- `aliases`: ["DMA TYPES SW MAJOR VERSIO"]

### MACRO-DMA-TYPES-SW-MINOR-VERSION
- `name`: `DMA_TYPES_SW_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_SW_MINOR_VERSION 4"]
- `aliases`: ["DMA TYPES SW MINOR VERSION"]

### MACRO-DMA-TYPES-SW-PATCH-VERSION
- `name`: `DMA_TYPES_SW_PATCH_VERSION`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_SW_PATCH_VERSION 0"]
- `aliases`: ["DMA TYPES SW PATCH VERSION"]

### MACRO-DMA-TYPES-VENDOR-ID
- `name`: `DMA_TYPES_VENDOR_ID`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p11: • #define DMA_TYPES_VENDOR_ID 174"]
- `aliases`: ["DMA TYPES VENDOR ID"]

### MACRO-DMA-ARBITRATION-ALGORITHM-FIXED-PRIORITY
- `name`: `DMA_ARBITRATION_ALGORITHM_FIXED_PRIORITY`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_ARBITRATION_ALGORITHM_FIXED_PRIORITY Use the fixed priority for arbitration."]
- `aliases`: ["DMA ARBITRATION ALGORITHM FIXED PRIORITY"]

### MACRO-DMA-ARBITRATION-ALGORITHM-ROUND-ROBIN
- `name`: `DMA_ARBITRATION_ALGORITHM_ROUND_ROBIN`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_ARBITRATION_ALGORITHM_ROUND_ROBIN Use the channel number for arbitration, higher"]
- `aliases`: ["DMA ARBITRATION ALGORITHM ROUND ROBIN"]

### MACRO-DMA-INITIAL-ERROR
- `name`: `DMA_INITIAL_ERROR`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_INITIAL_ERROR =2U Dma encountered an error during initialization."]
- `aliases`: ["DMA INITIAL ERROR"]

### MACRO-DMA-INITIALIZED
- `name`: `DMA_INITIALIZED`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_INITIALIZED = 1U Dma has been initialized."]
- `aliases`: ["DMA INITIALIZED"]

### MACRO-DMA-INSTANCE-1
- `name`: `DMA_INSTANCE_1`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_INSTANCE_1 = 1U DMA instance _1."]
- `aliases`: ["DMA INSTANCE 1"]

### MACRO-DMA-INSTANCE-COUNT
- `name`: `DMA_INSTANCE_COUNT`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_INSTANCE_COUNT"]
- `aliases`: ["DMA INSTANCE COUNT"]

### MACRO-DMA-INSTANCE-MAX
- `name`: `DMA_INSTANCE_MAX`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_INSTANCE_MAX = DMA total instance numbers."]
- `aliases`: ["DMA INSTANCE MAX"]

### MACRO-DMA-NOT-INITIALIZED
- `name`: `DMA_NOT_INITIALIZED`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_NOT_INITIALIZED = 0U Dma has not been initialized."]
- `aliases`: ["DMA NOT INITIALIZED"]

### MACRO-DMA-RUNNING-STATUS-ACTIVE
- `name`: `DMA_RUNNING_STATUS_ACTIVE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_RUNNING_STATUS_ACTIVE = 1 The DMA engine is transferring data."]
- `aliases`: ["DMA RUNNING STATUS ACTIVE"]

### MACRO-DMA-RUNNING-STATUS-IDLE
- `name`: `DMA_RUNNING_STATUS_IDLE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_RUNNING_STATUS_IDLE = 0 The DMA engine is idle."]
- `aliases`: ["DMA RUNNING STATUS IDLE"]

### MACRO-DMA-TRAN-SIZE-1B
- `name`: `DMA_TRAN_SIZE_1B`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_TRAN_SIZE_1B= 0 The size of data in one transfer is 1 byte"]
- `aliases`: ["DMA TRAN SIZE 1B"]

### MACRO-DMA-TRAN-SIZE-2B
- `name`: `DMA_TRAN_SIZE_2B`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_TRAN_SIZE_2B = 1 The size of data in one transfer is 2 bytes"]
- `aliases`: ["DMA TRAN SIZE 2B"]

### MACRO-DMA-TRAN-SIZE-32B
- `name`: `DMA_TRAN_SIZE_32B`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_TRAN_SIZE_32B = 5 The size of data in one transfer is 32 bytes"]
- `aliases`: ["DMA TRAN SIZE 32B"]

### MACRO-DMA-TRAN-SIZE-4B
- `name`: `DMA_TRAN_SIZE_4B`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_TRAN_SIZE_4B = 2 The size of data in one transfer is 4 bytes"]
- `aliases`: ["DMA TRAN SIZE 4B"]

### MACRO-DMA-TRAN-SIZE-8B
- `name`: `DMA_TRAN_SIZE_8B`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p12: DMA_TRAN_SIZE_8B = 3 The size of data in one transfer is 8 bytes"]
- `aliases`: ["DMA TRAN SIZE 8B"]

### MACRO-DMA-INCREMENT-DATA-SIZE
- `name`: `DMA_INCREMENT_DATA_SIZE`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_INCREMENT_DATA_SIZE = 1 The data address increase by the data size."]
- `aliases`: ["DMA INCREMENT DATA SIZE"]

### MACRO-DMA-INCREMENT-DATA-SIZE-4BYTE-ALIGNED
- `name`: `DMA_INCREMENT_DATA_SIZE_4BYTE_ALIGNED`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_INCREMENT_DATA_SIZE_4BYTE_ALIGNED The data address increase by the data size, and is 4 byte"]
- `aliases`: ["DMA INCREMENT DATA SIZE 4BYTE ALIGNED"]

### MACRO-DMA-INCREMENT-DISABLE
- `name`: `DMA_INCREMENT_DISABLE`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_INCREMENT_DISABLE= 0 The data address not increase."]
- `aliases`: ["DMA INCREMENT DISABLE"]

### MACRO-DMA-REQ-DISABLED
- `name`: `DMA_REQ_DISABLED`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13, 37, 38]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_DISABLED = 0U No hardware request", "p37: - DMA_REQ_DISABLED: DMA is the flow controller. For example, DMA START trigger, inner link", "p38: By default, value is 'DMA_REQ_DISABLED' (No HW flow control)."]
- `aliases`: ["DMA REQ DISABLED"]

### MACRO-DMA-REQ-FCIIC0-RX
- `name`: `DMA_REQ_FCIIC0_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCIIC0_RX = 1U FCIIC0_RX"]
- `aliases`: ["DMA REQ FCIIC0 RX"]

### MACRO-DMA-REQ-FCIIC0-TX
- `name`: `DMA_REQ_FCIIC0_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCIIC0_TX = 2U FCIIC0_TX"]
- `aliases`: ["DMA REQ FCIIC0 TX"]

### MACRO-DMA-REQ-FCIIC1-RX
- `name`: `DMA_REQ_FCIIC1_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCIIC1_RX = 3U FCIIC1_RX"]
- `aliases`: ["DMA REQ FCIIC1 RX"]

### MACRO-DMA-REQ-FCIIC1-TX
- `name`: `DMA_REQ_FCIIC1_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCIIC1_TX = 4U FCIIC1_TX"]
- `aliases`: ["DMA REQ FCIIC1 TX"]

### MACRO-DMA-REQ-FCSPI0-RX
- `name`: `DMA_REQ_FCSPI0_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI0_RX = 5U FCSPI0_RX"]
- `aliases`: ["DMA REQ FCSPI0 RX"]

### MACRO-DMA-REQ-FCSPI0-TX
- `name`: `DMA_REQ_FCSPI0_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI0_TX = 6U FCSPI0_TX"]
- `aliases`: ["DMA REQ FCSPI0 TX"]

### MACRO-DMA-REQ-FCSPI1-RX
- `name`: `DMA_REQ_FCSPI1_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI1_RX = 7U FCSPI1_RX"]
- `aliases`: ["DMA REQ FCSPI1 RX"]

### MACRO-DMA-REQ-FCSPI1-TX
- `name`: `DMA_REQ_FCSPI1_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI1_TX = 8U FCSPI1_TX"]
- `aliases`: ["DMA REQ FCSPI1 TX"]

### MACRO-DMA-REQ-FCSPI2-RX
- `name`: `DMA_REQ_FCSPI2_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI2_RX = 9U FCSPI2_RX"]
- `aliases`: ["DMA REQ FCSPI2 RX"]

### MACRO-DMA-REQ-FCSPI2-TX
- `name`: `DMA_REQ_FCSPI2_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI2_TX = 10U FCSPI2_TX"]
- `aliases`: ["DMA REQ FCSPI2 TX"]

### MACRO-DMA-REQ-FCSPI3-RX
- `name`: `DMA_REQ_FCSPI3_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI3_RX = 11U FCSPI3_RX"]
- `aliases`: ["DMA REQ FCSPI3 RX"]

### MACRO-DMA-REQ-FCSPI3-TX
- `name`: `DMA_REQ_FCSPI3_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI3_TX = 12U FCSPI3_TX"]
- `aliases`: ["DMA REQ FCSPI3 TX"]

### MACRO-DMA-REQ-FCSPI4-RX
- `name`: `DMA_REQ_FCSPI4_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI4_RX = 13U FCSPI4_RX"]
- `aliases`: ["DMA REQ FCSPI4 RX"]

### MACRO-DMA-REQ-FCSPI4-TX
- `name`: `DMA_REQ_FCSPI4_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI4_TX = 14U FCSPI4_TX"]
- `aliases`: ["DMA REQ FCSPI4 TX"]

### MACRO-DMA-REQ-FCSPI5-RX
- `name`: `DMA_REQ_FCSPI5_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI5_RX = 15U FCSPI5_RX"]
- `aliases`: ["DMA REQ FCSPI5 RX"]

### MACRO-DMA-REQ-FCSPI5-TX
- `name`: `DMA_REQ_FCSPI5_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI5_TX = 16U FCSPI5_TX"]
- `aliases`: ["DMA REQ FCSPI5 TX"]

### MACRO-DMA-REQ-FCSPI6-RX
- `name`: `DMA_REQ_FCSPI6_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI6_RX = 17U FCSPI6_RX"]
- `aliases`: ["DMA REQ FCSPI6 RX"]

### MACRO-DMA-REQ-FCSPI6-TX
- `name`: `DMA_REQ_FCSPI6_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI6_TX = 18U FCSPI6_TX"]
- `aliases`: ["DMA REQ FCSPI6 TX"]

### MACRO-DMA-REQ-FCSPI7-RX
- `name`: `DMA_REQ_FCSPI7_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI7_RX = 19U FCSPI7_RX"]
- `aliases`: ["DMA REQ FCSPI7 RX"]

### MACRO-DMA-REQ-FCSPI7-TX
- `name`: `DMA_REQ_FCSPI7_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FCSPI7_TX = 20U FCSPI7_TX"]
- `aliases`: ["DMA REQ FCSPI7 TX"]

### MACRO-DMA-REQ-FLEXCAN0
- `name`: `DMA_REQ_FLEXCAN0`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FLEXCAN0 = 23U FLEXCAN0"]
- `aliases`: ["DMA REQ FLEXCAN0"]

### MACRO-DMA-REQ-FLEXCAN1
- `name`: `DMA_REQ_FLEXCAN1`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FLEXCAN1 = 24U FLEXCAN1"]
- `aliases`: ["DMA REQ FLEXCAN1"]

### MACRO-DMA-REQ-FLEXCAN2
- `name`: `DMA_REQ_FLEXCAN2`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FLEXCAN2 = 25U FLEXCAN2"]
- `aliases`: ["DMA REQ FLEXCAN2"]

### MACRO-DMA-REQ-FLEXCAN3
- `name`: `DMA_REQ_FLEXCAN3`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_FLEXCAN3 = 26U FLEXCAN3"]
- `aliases`: ["DMA REQ FLEXCAN3"]

### MACRO-DMA-REQ-OSPI-RX
- `name`: `DMA_REQ_OSPI_RX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_OSPI_RX = 21U OSPI_RX"]
- `aliases`: ["DMA REQ OSPI RX"]

### MACRO-DMA-REQ-OSPI-TX
- `name`: `DMA_REQ_OSPI_TX`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p13: DMA_REQ_OSPI_TX = 22U OSPI_TX"]
- `aliases`: ["DMA REQ OSPI TX"]

### MACRO-DMA-REQ-ADC0
- `name`: `DMA_REQ_ADC0`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_ADC0 = 33U ADC0"]
- `aliases`: ["DMA REQ ADC0"]

### MACRO-DMA-REQ-ADC1
- `name`: `DMA_REQ_ADC1`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_ADC1 = 34U ADC1"]
- `aliases`: ["DMA REQ ADC1"]

### MACRO-DMA-REQ-ADC2
- `name`: `DMA_REQ_ADC2`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_ADC2 = 35U ADC2"]
- `aliases`: ["DMA REQ ADC2"]

### MACRO-DMA-REQ-ADC3
- `name`: `DMA_REQ_ADC3`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_ADC3 = 36U ADC3"]
- `aliases`: ["DMA REQ ADC3"]

### MACRO-DMA-REQ-FCUART0-RX
- `name`: `DMA_REQ_FCUART0_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART0_RX = 41U FCUART0_RX"]
- `aliases`: ["DMA REQ FCUART0 RX"]

### MACRO-DMA-REQ-FCUART0-TX
- `name`: `DMA_REQ_FCUART0_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART0_TX = 42U FCUART0_TX"]
- `aliases`: ["DMA REQ FCUART0 TX"]

### MACRO-DMA-REQ-FCUART10-RX
- `name`: `DMA_REQ_FCUART10_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART10_RX = 61U FCUART10_RX"]
- `aliases`: ["DMA REQ FCUART10 RX"]

### MACRO-DMA-REQ-FCUART10-TX
- `name`: `DMA_REQ_FCUART10_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART10_TX = 62U FCUART10_TX"]
- `aliases`: ["DMA REQ FCUART10 TX"]

### MACRO-DMA-REQ-FCUART11-RX
- `name`: `DMA_REQ_FCUART11_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART11_RX = 63U FCUART11_RX"]
- `aliases`: ["DMA REQ FCUART11 RX"]

### MACRO-DMA-REQ-FCUART11-TX
- `name`: `DMA_REQ_FCUART11_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART11_TX = 64U FCUART11_TX"]
- `aliases`: ["DMA REQ FCUART11 TX"]

### MACRO-DMA-REQ-FCUART12-RX
- `name`: `DMA_REQ_FCUART12_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART12_RX = 65U FCUART12_RX"]
- `aliases`: ["DMA REQ FCUART12 RX"]

### MACRO-DMA-REQ-FCUART12-TX
- `name`: `DMA_REQ_FCUART12_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART12_TX = 66U FCUART12_TX"]
- `aliases`: ["DMA REQ FCUART12 TX"]

### MACRO-DMA-REQ-FCUART13-RX
- `name`: `DMA_REQ_FCUART13_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART13_RX = 67U FCUART13_RX"]
- `aliases`: ["DMA REQ FCUART13 RX"]

### MACRO-DMA-REQ-FCUART13-TX
- `name`: `DMA_REQ_FCUART13_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART13_TX = 68U FCUART13_TX"]
- `aliases`: ["DMA REQ FCUART13 TX"]

### MACRO-DMA-REQ-FCUART14-RX
- `name`: `DMA_REQ_FCUART14_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART14_RX = 69U FCUART14_RX"]
- `aliases`: ["DMA REQ FCUART14 RX"]

### MACRO-DMA-REQ-FCUART1-RX
- `name`: `DMA_REQ_FCUART1_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART1_RX = 43U FCUART1_RX"]
- `aliases`: ["DMA REQ FCUART1 RX"]

### MACRO-DMA-REQ-FCUART1-TX
- `name`: `DMA_REQ_FCUART1_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART1_TX = 44U FCUART1_TX"]
- `aliases`: ["DMA REQ FCUART1 TX"]

### MACRO-DMA-REQ-FCUART2-RX
- `name`: `DMA_REQ_FCUART2_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART2_RX = 45U FCUART2_RX"]
- `aliases`: ["DMA REQ FCUART2 RX"]

### MACRO-DMA-REQ-FCUART2-TX
- `name`: `DMA_REQ_FCUART2_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART2_TX = 46U FCUART2_TX"]
- `aliases`: ["DMA REQ FCUART2 TX"]

### MACRO-DMA-REQ-FCUART3-RX
- `name`: `DMA_REQ_FCUART3_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART3_RX = 47U FCUART3_RX"]
- `aliases`: ["DMA REQ FCUART3 RX"]

### MACRO-DMA-REQ-FCUART3-TX
- `name`: `DMA_REQ_FCUART3_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART3_TX = 48U FCUART3_TX"]
- `aliases`: ["DMA REQ FCUART3 TX"]

### MACRO-DMA-REQ-FCUART4-RX
- `name`: `DMA_REQ_FCUART4_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART4_RX = 49U FCUART4_RX"]
- `aliases`: ["DMA REQ FCUART4 RX"]

### MACRO-DMA-REQ-FCUART4-TX
- `name`: `DMA_REQ_FCUART4_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART4_TX = 50U FCUART4_TX"]
- `aliases`: ["DMA REQ FCUART4 TX"]

### MACRO-DMA-REQ-FCUART5-RX
- `name`: `DMA_REQ_FCUART5_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART5_RX = 51U FCUART5_RX"]
- `aliases`: ["DMA REQ FCUART5 RX"]

### MACRO-DMA-REQ-FCUART5-TX
- `name`: `DMA_REQ_FCUART5_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART5_TX = 52U FCUART5_TX"]
- `aliases`: ["DMA REQ FCUART5 TX"]

### MACRO-DMA-REQ-FCUART6-RX
- `name`: `DMA_REQ_FCUART6_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART6_RX = 53U FLEXCAN1"]
- `aliases`: ["DMA REQ FCUART6 RX"]

### MACRO-DMA-REQ-FCUART6-TX
- `name`: `DMA_REQ_FCUART6_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART6_TX = 54U FLEXCAN2"]
- `aliases`: ["DMA REQ FCUART6 TX"]

### MACRO-DMA-REQ-FCUART7-RX
- `name`: `DMA_REQ_FCUART7_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART7_RX = 55U FCUART7_RX"]
- `aliases`: ["DMA REQ FCUART7 RX"]

### MACRO-DMA-REQ-FCUART7-TX
- `name`: `DMA_REQ_FCUART7_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART7_TX = 56U FCUART7_TX"]
- `aliases`: ["DMA REQ FCUART7 TX"]

### MACRO-DMA-REQ-FCUART8-RX
- `name`: `DMA_REQ_FCUART8_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART8_RX = 57U FCUART8_RX"]
- `aliases`: ["DMA REQ FCUART8 RX"]

### MACRO-DMA-REQ-FCUART8-TX
- `name`: `DMA_REQ_FCUART8_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART8_TX = 58U FCUART8_TX"]
- `aliases`: ["DMA REQ FCUART8 TX"]

### MACRO-DMA-REQ-FCUART9-RX
- `name`: `DMA_REQ_FCUART9_RX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART9_RX = 59U FCUART9_RX"]
- `aliases`: ["DMA REQ FCUART9 RX"]

### MACRO-DMA-REQ-FCUART9-TX
- `name`: `DMA_REQ_FCUART9_TX`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FCUART9_TX = 60U FCUART9_TX"]
- `aliases`: ["DMA REQ FCUART9 TX"]

### MACRO-DMA-REQ-FLEXCAN4
- `name`: `DMA_REQ_FLEXCAN4`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FLEXCAN4 = 27U FLEXCAN4"]
- `aliases`: ["DMA REQ FLEXCAN4"]

### MACRO-DMA-REQ-FLEXCAN5
- `name`: `DMA_REQ_FLEXCAN5`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FLEXCAN5 = 28U FLEXCAN5"]
- `aliases`: ["DMA REQ FLEXCAN5"]

### MACRO-DMA-REQ-FLEXCAN6
- `name`: `DMA_REQ_FLEXCAN6`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FLEXCAN6 = 29U FLEXCAN6"]
- `aliases`: ["DMA REQ FLEXCAN6"]

### MACRO-DMA-REQ-FLEXCAN7
- `name`: `DMA_REQ_FLEXCAN7`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FLEXCAN7 = 30U FLEXCAN7"]
- `aliases`: ["DMA REQ FLEXCAN7"]

### MACRO-DMA-REQ-FLEXCAN8
- `name`: `DMA_REQ_FLEXCAN8`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FLEXCAN8 = 31U FLEXCAN8"]
- `aliases`: ["DMA REQ FLEXCAN8"]

### MACRO-DMA-REQ-FLEXCAN9
- `name`: `DMA_REQ_FLEXCAN9`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_FLEXCAN9 = 32U FLEXCAN9"]
- `aliases`: ["DMA REQ FLEXCAN9"]

### MACRO-DMA-REQ-SDDF-CH0
- `name`: `DMA_REQ_SDDF_CH0`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_SDDF_CH0 = 37U SDDF_CH0"]
- `aliases`: ["DMA REQ SDDF CH0"]

### MACRO-DMA-REQ-SDDF-CH1
- `name`: `DMA_REQ_SDDF_CH1`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_SDDF_CH1 = 38U SDDF_CH1"]
- `aliases`: ["DMA REQ SDDF CH1"]

### MACRO-DMA-REQ-SDDF-CH2
- `name`: `DMA_REQ_SDDF_CH2`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_SDDF_CH2 = 39U SDDF_CH2"]
- `aliases`: ["DMA REQ SDDF CH2"]

### MACRO-DMA-REQ-SDDF-CH3
- `name`: `DMA_REQ_SDDF_CH3`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p14: DMA_REQ_SDDF_CH3 = 40U SDDF_CH3"]
- `aliases`: ["DMA REQ SDDF CH3"]

### MACRO-DMA-REQ-AONTIMER0
- `name`: `DMA_REQ_AONTIMER0`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_AONTIMER0 = 86U AONTIMER0"]
- `aliases`: ["DMA REQ AONTIMER0"]

### MACRO-DMA-REQ-CMP0
- `name`: `DMA_REQ_CMP0`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_CMP0 = 87U CMP0"]
- `aliases`: ["DMA REQ CMP0"]

### MACRO-DMA-REQ-CMP1
- `name`: `DMA_REQ_CMP1`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_CMP1 = 88U CMP1"]
- `aliases`: ["DMA REQ CMP1"]

### MACRO-DMA-REQ-CMP2
- `name`: `DMA_REQ_CMP2`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_CMP2 = 89U CMP2"]
- `aliases`: ["DMA REQ CMP2"]

### MACRO-DMA-REQ-ENET-PPS-TIMER-CH0
- `name`: `DMA_REQ_ENET_PPS_TIMER_CH0`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH0 = 94U ENET_PPS_TIMER_CH0"]
- `aliases`: ["DMA REQ ENET PPS TIMER CH0"]

### MACRO-DMA-REQ-ENET-PPS-TIMER-CH1
- `name`: `DMA_REQ_ENET_PPS_TIMER_CH1`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH1 = 95U ENET_PPS_TIMER_CH1"]
- `aliases`: ["DMA REQ ENET PPS TIMER CH1"]

### MACRO-DMA-REQ-ENET-PPS-TIMER-CH2
- `name`: `DMA_REQ_ENET_PPS_TIMER_CH2`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH2 = 96U ENET_PPS_TIMER_CH2"]
- `aliases`: ["DMA REQ ENET PPS TIMER CH2"]

### MACRO-DMA-REQ-ENET-PPS-TIMER-CH3
- `name`: `DMA_REQ_ENET_PPS_TIMER_CH3`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH3 = 97U ENET_PPS_TIMER_CH3"]
- `aliases`: ["DMA REQ ENET PPS TIMER CH3"]

### MACRO-DMA-REQ-FCUART14-TX
- `name`: `DMA_REQ_FCUART14_TX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART14_TX = 70U FCUART14_TX"]
- `aliases`: ["DMA REQ FCUART14 TX"]

### MACRO-DMA-REQ-FCUART15-RX
- `name`: `DMA_REQ_FCUART15_RX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART15_RX = 71U FCUART15_RX"]
- `aliases`: ["DMA REQ FCUART15 RX"]

### MACRO-DMA-REQ-FCUART15-TX
- `name`: `DMA_REQ_FCUART15_TX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART15_TX = 72U FCUART15_TX"]
- `aliases`: ["DMA REQ FCUART15 TX"]

### MACRO-DMA-REQ-FCUART16-RX
- `name`: `DMA_REQ_FCUART16_RX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART16_RX = 73U FCUART16_RX"]
- `aliases`: ["DMA REQ FCUART16 RX"]

### MACRO-DMA-REQ-FCUART16-TX
- `name`: `DMA_REQ_FCUART16_TX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART16_TX = 74U FCUART16_TX"]
- `aliases`: ["DMA REQ FCUART16 TX"]

### MACRO-DMA-REQ-FCUART17-RX
- `name`: `DMA_REQ_FCUART17_RX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART17_RX = 75U FCUART17_RX"]
- `aliases`: ["DMA REQ FCUART17 RX"]

### MACRO-DMA-REQ-FCUART17-TX
- `name`: `DMA_REQ_FCUART17_TX`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FCUART17_TX = 76U FCUART17_TX"]
- `aliases`: ["DMA REQ FCUART17 TX"]

### MACRO-DMA-REQ-FTU0-ALL-CH-OR
- `name`: `DMA_REQ_FTU0_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU0_ALL_CH_OR = 98U FTU0_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU0 ALL CH OR"]

### MACRO-DMA-REQ-FTU10-ALL-CH-OR
- `name`: `DMA_REQ_FTU10_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU10_ALL_CH_OR= 108U FTU10_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU10 ALL CH OR"]

### MACRO-DMA-REQ-FTU11-ALL-CH-OR
- `name`: `DMA_REQ_FTU11_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU11_ALL_CH_OR= 109U FTU11_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU11 ALL CH OR"]

### MACRO-DMA-REQ-FTU1-ALL-CH-OR
- `name`: `DMA_REQ_FTU1_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU1_ALL_CH_OR = 99U FTU1_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU1 ALL CH OR"]

### MACRO-DMA-REQ-FTU2-ALL-CH-OR
- `name`: `DMA_REQ_FTU2_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU2_ALL_CH_OR= 100U FTU2_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU2 ALL CH OR"]

### MACRO-DMA-REQ-FTU3-ALL-CH-OR
- `name`: `DMA_REQ_FTU3_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU3_ALL_CH_OR= 101U FTU3_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU3 ALL CH OR"]

### MACRO-DMA-REQ-FTU4-ALL-CH-OR
- `name`: `DMA_REQ_FTU4_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU4_ALL_CH_OR= 102U FTU4_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU4 ALL CH OR"]

### MACRO-DMA-REQ-FTU5-ALL-CH-OR
- `name`: `DMA_REQ_FTU5_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU5_ALL_CH_OR= 103U FTU5_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU5 ALL CH OR"]

### MACRO-DMA-REQ-FTU6-ALL-CH-OR
- `name`: `DMA_REQ_FTU6_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU6_ALL_CH_OR= 104U FTU6_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU6 ALL CH OR"]

### MACRO-DMA-REQ-FTU7-ALL-CH-OR
- `name`: `DMA_REQ_FTU7_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU7_ALL_CH_OR= 105U FTU7_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU7 ALL CH OR"]

### MACRO-DMA-REQ-FTU8-ALL-CH-OR
- `name`: `DMA_REQ_FTU8_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU8_ALL_CH_OR= 106U FTU8_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU8 ALL CH OR"]

### MACRO-DMA-REQ-FTU9-ALL-CH-OR
- `name`: `DMA_REQ_FTU9_ALL_CH_OR`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_FTU9_ALL_CH_OR= 107U FTU9_ALL_CH_OR"]
- `aliases`: ["DMA REQ FTU9 ALL CH OR"]

### MACRO-DMA-REQ-PORTA
- `name`: `DMA_REQ_PORTA`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTA = 77U PORTA"]
- `aliases`: ["DMA REQ PORTA"]

### MACRO-DMA-REQ-PORTB
- `name`: `DMA_REQ_PORTB`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTB = 78U PORTB"]
- `aliases`: ["DMA REQ PORTB"]

### MACRO-DMA-REQ-PORTC
- `name`: `DMA_REQ_PORTC`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTC = 79U PORTC"]
- `aliases`: ["DMA REQ PORTC"]

### MACRO-DMA-REQ-PORTD
- `name`: `DMA_REQ_PORTD`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTD = 80U PORTD"]
- `aliases`: ["DMA REQ PORTD"]

### MACRO-DMA-REQ-PORTE
- `name`: `DMA_REQ_PORTE`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTE = 81U PORTE"]
- `aliases`: ["DMA REQ PORTE"]

### MACRO-DMA-REQ-PORTF
- `name`: `DMA_REQ_PORTF`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTF = 82U PORTF"]
- `aliases`: ["DMA REQ PORTF"]

### MACRO-DMA-REQ-PORTG
- `name`: `DMA_REQ_PORTG`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTG = 83U PORTG"]
- `aliases`: ["DMA REQ PORTG"]

### MACRO-DMA-REQ-PORTH
- `name`: `DMA_REQ_PORTH`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTH = 84U PORTH"]
- `aliases`: ["DMA REQ PORTH"]

### MACRO-DMA-REQ-PORTI
- `name`: `DMA_REQ_PORTI`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PORTI = 85U PORTI"]
- `aliases`: ["DMA REQ PORTI"]

### MACRO-DMA-REQ-PTIMER0
- `name`: `DMA_REQ_PTIMER0`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PTIMER0 = 90U PTIMER0"]
- `aliases`: ["DMA REQ PTIMER0"]

### MACRO-DMA-REQ-PTIMER1
- `name`: `DMA_REQ_PTIMER1`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PTIMER1 = 91U PTIMER1"]
- `aliases`: ["DMA REQ PTIMER1"]

### MACRO-DMA-REQ-PTIMER2
- `name`: `DMA_REQ_PTIMER2`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PTIMER2 = 92U PTIMER2"]
- `aliases`: ["DMA REQ PTIMER2"]

### MACRO-DMA-REQ-PTIMER3
- `name`: `DMA_REQ_PTIMER3`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_PTIMER3 = 93U PTIMER3"]
- `aliases`: ["DMA REQ PTIMER3"]

### MACRO-DMA-REQ-SENT0-CH0-FAST
- `name`: `DMA_REQ_SENT0_CH0_FAST`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_SENT0_CH0_FAST= 110U SENT0_CH0_FAST"]
- `aliases`: ["DMA REQ SENT0 CH0 FAST"]

### MACRO-DMA-REQ-SENT0-CH1-FAST
- `name`: `DMA_REQ_SENT0_CH1_FAST`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_SENT0_CH1_FAST= 111U SENT0_CH1_FAST"]
- `aliases`: ["DMA REQ SENT0 CH1 FAST"]

### MACRO-DMA-REQ-SENT0-CH2-FAST
- `name`: `DMA_REQ_SENT0_CH2_FAST`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_SENT0_CH2_FAST= 112U SENT0_CH2_FAST"]
- `aliases`: ["DMA REQ SENT0 CH2 FAST"]

### MACRO-ENET-PPS-TIMER-CH0
- `name`: `ENET_PPS_TIMER_CH0`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH0 = 94U ENET_PPS_TIMER_CH0"]
- `aliases`: ["ENET PPS TIMER CH0"]

### MACRO-ENET-PPS-TIMER-CH1
- `name`: `ENET_PPS_TIMER_CH1`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH1 = 95U ENET_PPS_TIMER_CH1"]
- `aliases`: ["ENET PPS TIMER CH1"]

### MACRO-ENET-PPS-TIMER-CH2
- `name`: `ENET_PPS_TIMER_CH2`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH2 = 96U ENET_PPS_TIMER_CH2"]
- `aliases`: ["ENET PPS TIMER CH2"]

### MACRO-ENET-PPS-TIMER-CH3
- `name`: `ENET_PPS_TIMER_CH3`
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p15: DMA_REQ_ENET_PPS_TIMER_CH3 = 97U ENET_PPS_TIMER_CH3"]
- `aliases`: ["ENET PPS TIMER CH3"]

### MACRO-DMA-REQ-ALWAYS-ENABLE-0
- `name`: `DMA_REQ_ALWAYS_ENABLE_0`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_ALWAYS_ENABLE_0 = 126U ALWAYS_ENABLE_0"]
- `aliases`: ["DMA REQ ALWAYS ENABLE 0"]

### MACRO-DMA-REQ-ALWAYS-ENABLE-1
- `name`: `DMA_REQ_ALWAYS_ENABLE_1`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_ALWAYS_ENABLE_1 = 127U ALWAYS_ENABLE_1"]
- `aliases`: ["DMA REQ ALWAYS ENABLE 1"]

### MACRO-DMA-REQ-SENT0-CH0-SLOW
- `name`: `DMA_REQ_SENT0_CH0_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT0_CH0_SLOW =118U SENT0_CH0_SLOW"]
- `aliases`: ["DMA REQ SENT0 CH0 SLOW"]

### MACRO-DMA-REQ-SENT0-CH1-SLOW
- `name`: `DMA_REQ_SENT0_CH1_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT0_CH1_SLOW = 119U SENT0_CH1_SLOW"]
- `aliases`: ["DMA REQ SENT0 CH1 SLOW"]

### MACRO-DMA-REQ-SENT0-CH2-SLOW
- `name`: `DMA_REQ_SENT0_CH2_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT0_CH2_SLOW = 120U SENT0_CH2_SLOW"]
- `aliases`: ["DMA REQ SENT0 CH2 SLOW"]

### MACRO-DMA-REQ-SENT0-CH3-FAST
- `name`: `DMA_REQ_SENT0_CH3_FAST`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT0_CH3_FAST= 113U SENT0_CH3_FAST"]
- `aliases`: ["DMA REQ SENT0 CH3 FAST"]

### MACRO-DMA-REQ-SENT0-CH3-SLOW
- `name`: `DMA_REQ_SENT0_CH3_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT0_CH3_SLOW = 121U SENT0_CH3_SLOW"]
- `aliases`: ["DMA REQ SENT0 CH3 SLOW"]

### MACRO-DMA-REQ-SENT1-CH0-FAST
- `name`: `DMA_REQ_SENT1_CH0_FAST`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH0_FAST= 114U SENT1_CH0_FAST"]
- `aliases`: ["DMA REQ SENT1 CH0 FAST"]

### MACRO-DMA-REQ-SENT1-CH0-SLOW
- `name`: `DMA_REQ_SENT1_CH0_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH0_SLOW = 122U SENT1_CH0_SLOW"]
- `aliases`: ["DMA REQ SENT1 CH0 SLOW"]

### MACRO-DMA-REQ-SENT1-CH1-FAST
- `name`: `DMA_REQ_SENT1_CH1_FAST`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH1_FAST= 115U SENT1_CH1_FAST"]
- `aliases`: ["DMA REQ SENT1 CH1 FAST"]

### MACRO-DMA-REQ-SENT1-CH1-SLOW
- `name`: `DMA_REQ_SENT1_CH1_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH1_SLOW = 123U SENT1_CH1_SLOW"]
- `aliases`: ["DMA REQ SENT1 CH1 SLOW"]

### MACRO-DMA-REQ-SENT1-CH2-FAST
- `name`: `DMA_REQ_SENT1_CH2_FAST`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH2_FAST= 116U SENT1_CH2_FAST"]
- `aliases`: ["DMA REQ SENT1 CH2 FAST"]

### MACRO-DMA-REQ-SENT1-CH2-SLOW
- `name`: `DMA_REQ_SENT1_CH2_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH2_SLOW = 124U SENT1_CH2_SLOW"]
- `aliases`: ["DMA REQ SENT1 CH2 SLOW"]

### MACRO-DMA-REQ-SENT1-CH3-FAST
- `name`: `DMA_REQ_SENT1_CH3_FAST`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH3_FAST= 117U SENT1_CH3_FAST"]
- `aliases`: ["DMA REQ SENT1 CH3 FAST"]

### MACRO-DMA-REQ-SENT1-CH3-SLOW
- `name`: `DMA_REQ_SENT1_CH3_SLOW`
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA macro/configuration constant or service/error identifier.
- `anchors`: ["p16: DMA_REQ_SENT1_CH3_SLOW = 125U SENT1_CH3_SLOW"]
- `aliases`: ["DMA REQ SENT1 CH3 SLOW"]

### ERR-DMA-E-ALREADY-INITIALIZED-U8
- `name`: `DMA_E_ALREADY_INITIALIZED_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_ALREADY_INITIALIZED_U8 ((uint8)0x0D)"]
- `aliases`: ["DMA E ALREADY INITIALIZED U8"]

### ERR-DMA-E-DEINIT-FAILED-U8
- `name`: `DMA_E_DEINIT_FAILED_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_DEINIT_FAILED_U8 ((uint8)0x16U)"]
- `aliases`: ["DMA E DEINIT FAILED U8"]

### ERR-DMA-E-INIT-FAILED-U8
- `name`: `DMA_E_INIT_FAILED_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_INIT_FAILED_U8 ((uint8)0x13U)"]
- `aliases`: ["DMA E INIT FAILED U8"]

### ERR-DMA-E-INVALID-CHANNEL-U8
- `name`: `DMA_E_INVALID_CHANNEL_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_INVALID_CHANNEL_U8 ((uint8)0x0B)"]
- `aliases`: ["DMA E INVALID CHANNEL U8"]

### ERR-DMA-E-PARAM-CONFIG-INVALID-ADDRESS-U8
- `name`: `DMA_E_PARAM_CONFIG_INVALID_ADDRESS_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_PARAM_CONFIG_INVALID_ADDRESS_U8 ((uint8)0x14U)"]
- `aliases`: ["DMA E PARAM CONFIG INVALID ADDRESS U8"]

### ERR-DMA-E-PARAM-CONFIG-INVALID-SIZE-U8
- `name`: `DMA_E_PARAM_CONFIG_INVALID_SIZE_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_PARAM_CONFIG_INVALID_SIZE_U8 ((uint8)0x15U)"]
- `aliases`: ["DMA E PARAM CONFIG INVALID SIZE U8"]

### ERR-DMA-E-PARAM-CONFIG-U8
- `name`: `DMA_E_PARAM_CONFIG_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_PARAM_CONFIG_U8 ((uint8)0x12U)"]
- `aliases`: ["DMA E PARAM CONFIG U8"]

### ERR-DMA-E-PARAM-VINFO-U8
- `name`: `DMA_E_PARAM_VINFO_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_PARAM_VINFO_U8 ((uint8)0x0F)"]
- `aliases`: ["DMA E PARAM VINFO U8"]

### ERR-DMA-E-UNINIT-U8
- `name`: `DMA_E_UNINIT_U8`
- `type`: `error_code`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p8: • #define DMA_E_UNINIT_U8 ((uint8)0x0C)"]
- `aliases`: ["DMA E UNINIT U8"]

### ERR-DMA-E-DMA-LOCKED-U8
- `name`: `DMA_E_DMA_LOCKED_U8`
- `type`: `error_code`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p9: • #define DMA_E_DMA_LOCKED_U8 ((uint8)0x1BU)"]
- `aliases`: ["DMA E DMA LOCKED U8"]

### ERR-DMA-E-INVALID-DMA-SEL-U8
- `name`: `DMA_E_INVALID_DMA_SEL_U8`
- `type`: `error_code`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p9: • #define DMA_E_INVALID_DMA_SEL_U8 ((uint8)0x19U)"]
- `aliases`: ["DMA E INVALID DMA SEL U8"]

### ERR-DMA-E-INVALID-DMA-TRIGGER-U8
- `name`: `DMA_E_INVALID_DMA_TRIGGER_U8`
- `type`: `error_code`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p9: • #define DMA_E_INVALID_DMA_TRIGGER_U8 ((uint8)0x1AU)"]
- `aliases`: ["DMA E INVALID DMA TRIGGER U8"]

### ERR-DMA-E-INVALID-REGINDEX-U8
- `name`: `DMA_E_INVALID_REGINDEX_U8`
- `type`: `error_code`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Dma.h"]
- `brief`: DMA DET/DEM or development-error code.
- `anchors`: ["p9: • #define DMA_E_INVALID_REGINDEX_U8 ((uint8)0x18U)"]
- `aliases`: ["DMA E INVALID REGINDEX U8"]

### CFG-DMACHANNELCONFIG
- `name`: `DmaChannelConfig`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: [3, 37, 44]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p3: 3.2.4 DmaChannelConfig .................................................................................................................................... 37", "p37: 3.2.4 DmaChannelConfig", "p44: 2) According to used DMA channel, add the related DMA channel configuration settings in DmaChannelConfig."]
- `aliases`: []

### CFG-DMACONFIGSET
- `name`: `DMAConfigSet`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: [3, 34]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p3: 3.2.3 DMAConfigSet ............................................................................................................................................ 34", "p34: 3.2.3 DMAConfigSet"]
- `aliases`: []

### CFG-DMAGENERAL
- `name`: `DMAGeneral`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: [3, 32]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p3: 3.2.2 DMAGeneral ................................................................................................................................................ 32", "p32: 3.2.2 DMAGeneral"]
- `aliases`: []

### CFG-DMANUMBEROFCHCONFIGUREDPERCORE
- `name`: `DmaNumberofChConfiguredPerCore`
- `type`: `config`
- `primary_page`: `18`
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p18: • uint8 DmaNumberofChConfiguredPerCore"]
- `aliases`: []

### CFG-DMAHWUNITID
- `name`: `DmaHwUnitId`
- `type`: `config`
- `primary_page`: `34`
- `physical_pages`: [34]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p34: Container DmaHwUnitId"]
- `aliases`: []

### CFG-DMAMULTICORESUPPORT
- `name`: `DmaMulticoreSupport`
- `type`: `config`
- `primary_page`: `34`
- `physical_pages`: [34]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p34: Container DmaMulticoreSupport"]
- `aliases`: []

### CFG-DMACHANNELID
- `name`: `DmaChannelId`
- `type`: `config`
- `primary_page`: `37`
- `physical_pages`: [37, 43]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig", "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p37: 3.2.4.1 DmaChannelId", "p43: be used in the DmaChannelId column."]
- `aliases`: []

### CFG-DMACHANNELECUCPARTITIONREF
- `name`: `DmaChannelEcucPartitionRef`
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: [39, 44]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps"]
- `brief`: DMA configuration item/container or generated configuration symbol.
- `anchors`: ["p39: 3.2.4.10 DmaChannelEcucPartitionRef", "p44: 7) When selecting Dma Multicore Support, EcucPartitionRef and DmaChannelEcucPartitionRef shall be configured based"]
- `aliases`: []

### TYPE-DMA-CHANNELCONFIGTYPE
- `name`: `Dma_ChannelConfigType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 16, 18]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.1 Dma_ChannelConfigType ......................................................................................................................... 16", "p16: 2.6.1 Dma_ChannelConfigType", "p18: • const Dma_ChannelConfigType *pDma_pChConfig"]
- `aliases`: ["Dma ChannelConfigType"]

### TYPE-DMA-CHANNELTYPE
- `name`: `Dma_ChannelType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 17, 21, 28]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.2 Dma_ChannelType .................................................................................................................................... 17", "p17: 2.6.2 Dma_ChannelType", "p21: 2.7.1.8 Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)", "p28: 2.7.1.31 Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)"]
- `aliases`: ["Dma ChannelType"]

### TYPE-DMA-CONFIGTYPE
- `name`: `Dma_ConfigType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 19]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.5 Dma_ConfigType ....................................................................................................................................... 19", "p19: 2.6.5 Dma_ConfigType"]
- `aliases`: ["Dma ConfigType"]

### TYPE-DMA-CORESPECIFICCHCONFIGTYPE
- `name`: `Dma_CoreSpecificChConfigType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 18, 19]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.3 Dma_CoreSpecificChConfigType .............................................................................................................. 18", "p18: 2.6.3 Dma_CoreSpecificChConfigType", "p19: • Data Fields const Dma_CoreSpecificChConfigType* pDmaCoreConfig[MCAL_CORES_NUM]"]
- `aliases`: ["Dma CoreSpecificChConfigType"]

### TYPE-DMA-CORESPECIFICHWUNITCONFIGTYPE
- `name`: `Dma_CoreSpecificHwUnitConfigType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 18, 19]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Dma_CoreSpecificChConfigType", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.4 Dma_CoreSpecificHwUnitConfigType ..................................................................................................... 18", "p18: 2.6.4 Dma_CoreSpecificHwUnitConfigType", "p19: • const Dma_CoreSpecificHwUnitConfigType* pDmaHwunitConfig"]
- `aliases`: ["Dma CoreSpecificHwUnitConfigType"]

### TYPE-DMA-TYPES
- `name`: `Dma_Types`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 11, 16]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.3.3 Macros in Dma_Types.h ............................................................................................................................ 11", "p11: 2.3.3 Macros in Dma_Types.h", "p16: 2.5.1 Typedefs in Dma_Types.h"]
- `aliases`: ["Dma Types"]

### TYPE-DMA-INSTANCETYPE
- `name`: `Dma_InstanceType`
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: [11, 20, 21, 22]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p11: 2.4.1.1 Dma_InstanceType", "p20: 2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)", "p21: 2.7.1.6 void Dma_Halt(const Dma_InstanceType eDma_Instance)", "p22: Function void Dma_StartChannel(const Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel)"]
- `aliases`: ["Dma InstanceType"]

### TYPE-DMA-ARBITRATIONALGORITHMTYPE
- `name`: `Dma_ArbitrationAlgorithmType`
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p12: 2.4.1.3 Dma_ArbitrationAlgorithmType"]
- `aliases`: ["Dma ArbitrationAlgorithmType"]

### TYPE-DMA-DRIVERSTATETYPE
- `name`: `Dma_DriverStateType`
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p12: 2.4.1.4 Dma_DriverStateType;"]
- `aliases`: ["Dma DriverStateType"]

### TYPE-DMA-RUNNINGSTATUSTYPE
- `name`: `Dma_RunningStatusType`
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p12: 2.4.1.2 Dma_RunningStatusType"]
- `aliases`: ["Dma RunningStatusType"]

### TYPE-DMA-TRANSIZETYPE
- `name`: `Dma_TranSizeType`
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: [12, 13, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p12: 2.4.1.5 Dma_TranSizeType", "p13: Enumeration Dma_TranSizeType", "p26: 2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)"]
- `aliases`: ["Dma TranSizeType"]

### TYPE-DMA-INCREMENTMODETYPE
- `name`: `Dma_IncrementModeType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: [13, 17]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p13: 2.4.1.6 Dma_IncrementModeType", "p17: • Dma_IncrementModeType eDmaSrcIncrementMode"]
- `aliases`: ["Dma IncrementModeType"]

### TYPE-DMAMUX-REQUESTSOURCETYPE
- `name`: `DmaMux_RequestSourceType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: [13, 17]
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p13: 2.4.1.7 DmaMux_RequestSourceType", "p17: • DmaMux_RequestSourceType eDmaMuxRequestSource"]
- `aliases`: ["DmaMux RequestSourceType"]

### TYPE-DMA-TRANSFERCOMPLETECALLBACKTYPE
- `name`: `Dma_TransferCompleteCallbackType`
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: [16, 17]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p16: • typedef void (*Dma_TransferCompleteCallbackType)(void)", "p17: • Dma_TransferCompleteCallbackType pDmaDoneISRCallBack"]
- `aliases`: ["Dma TransferCompleteCallbackType"]

### TYPE-DMA-TRANSFERERRORCALLBACKTYPE
- `name`: `Dma_TransferErrorCallbackType`
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: [16, 17]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p16: • typedef void (*Dma_TransferErrorCallbackType)(void)", "p17: • Dma_TransferErrorCallbackType pDmaErrorISRCallBack"]
- `aliases`: ["Dma TransferErrorCallbackType"]

### TYPE-STD-RETURNTYPE
- `name`: `Std_ReturnType`
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: [20, 21, 28]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p20: 2.7.1.4 Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)", "p21: 2.7.1.8 Std_ReturnType Dma_ConfigChannel(const uint8 u8Dma_Channel, const Dma_ChannelType* pChannelConfig)", "p28: 2.7.1.31 Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType* PConfig, sint32 *s32SrcLastOffset)"]
- `aliases`: ["Std ReturnType"]

### TYPE-STD-VERSIONINFOTYPE
- `name`: `Std_VersionInfoType`
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: [20]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p20: 2.7.1.3 void Dma_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"]
- `aliases`: ["Std VersionInfoType"]

### TYPE-DMA-NBYTESILOTYPE
- `name`: `DMA_NBYTESILOType`
- `type`: `type`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA C type or AUTOSAR type symbol.
- `anchors`: ["p23: 2.7.1.14 boolean Dma_SetChannelLoopOffsetAndNBYTES (const uint8 u8Dma_Channel, const DMA_NBYTESILOType"]
- `aliases`: ["DMA NBYTESILOType"]

### STRUCT-DMA-TRANSIZETYPE
- `name`: `DMA_TranSizeType`
- `type`: `structure`
- `primary_page`: `17`
- `physical_pages`: [17, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Dma.c"]
- `brief`: DMA structure/type with documented fields.
- `anchors`: ["p17: • DMA_TranSizeType eDmaSSIZE", "p26: 2.7.1.23 void Dma_SetCfgSModuloAndSize (uint8 u8Dma_Channel, uint8 u8SModulo, DMA_TranSizeType eSSize)"]
- `aliases`: ["DMA TranSizeType"]

### FILE-CDD-DMA-C
- `name`: `CDD_Dma.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 7]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.1 Macros in CDD_Dma.c .................................................................................................................................. 7", "p7: 2.3.1 Macros in CDD_Dma.c"]
- `aliases`: ["CDD Dma.c"]

### FILE-CDD-DMA-C-02
- `name`: `Cdd_Dma.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 19]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.1 Macros in CDD_Dma.c .................................................................................................................................. 7", "p19: 2.7.1 Functions in Cdd_Dma.c"]
- `aliases`: ["Cdd Dma.c"]

### FILE-CDD-DMA-H
- `name`: `CDD_Dma.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 7]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.2 Macros in CDD_Dma.h ................................................................................................................................. 7", "p7: 2.3.2 Macros in CDD_Dma.h"]
- `aliases`: ["CDD Dma.h"]

### FILE-DMA-TYPES-H
- `name`: `Dma_Types.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 11, 16]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dma_Types.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.3 Macros in Dma_Types.h ............................................................................................................................ 11", "p11: 2.3.3 Macros in Dma_Types.h", "p16: 2.5.1 Typedefs in Dma_Types.h"]
- `aliases`: ["Dma Types.h"]

### FILE-AUTOSAR-EXP-CDDDESIGNANDINTEGRATIONGUIDELINE-PDF
- `name`: `AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 1 DMA Introduction / 1.1 Requirement Tracing"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf."]
- `aliases`: ["AUTOSAR EXP CDDDesignAndIntegrationGuideline.pdf"]

### TERM-DMA
- `name`: `DMA`
- `type`: `module`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45]
- `section_paths`: ["Cover", "Revision History", "Table of Contents", "Chapter 1 DMA Introduction / 1.1 Requirement Tracing", "Chapter 1 DMA Introduction / 1.3 Hardware Summary", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Dma.c"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p1: FC7xxx DMA User Manual Rev.0.4", "p2: FC7xxx DMA User Manual"]
- `aliases`: ["Direct Memory Access", "直接内存访问"]

### TERM-MCAL
- `name`: `MCAL`
- `type`: `module`
- `primary_page`: `2`
- `physical_pages`: [2, 19]
- `section_paths`: ["Revision History", "Chapter 2 Software Design / 2.6 Structures / 2.6.5 Dma_ConfigType"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p2: 0.1 2023/07/14 Initial release for MCAL V0.1.0", "p19: • Data Fields const Dma_CoreSpecificChConfigType* pDmaCoreConfig[MCAL_CORES_NUM]"]
- `aliases`: []

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `module`
- `primary_page`: `5`
- `physical_pages`: [5, 40, 42]
- `section_paths`: ["Chapter 1 DMA Introduction / 1.1 Requirement Tracing", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p5: The design of this module follows the specifications of the complex driver specified in AUTOSAR Classic Platform Release 4.6.0.", "p40: 3.2.5.1 AUTOSAR Major Version", "p42: Description Vendor ID of the dedicated implementation of this module according to the AUTOSAR vendor list."]
- `aliases`: []

### TERM-ECUC
- `name`: `ECUC`
- `type`: `module`
- `primary_page`: `34`
- `physical_pages`: [34, 39, 44]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p34: Requirements ECUC_DMA_006", "p39: 3.2.4.10 DmaChannelEcucPartitionRef", "p44: 7) When selecting Dma Multicore Support, EcucPartitionRef and DmaChannelEcucPartitionRef shall be configured based"]
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 4, 40, 44]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 CommonPublishedInformation", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 3.2.5 CommonPublishedInformation ................................................................................................................ 40", "p4: 4.2 DMA Usage Common Steps ........................................................................................................................... 44", "p40: 3.2.5 CommonPublishedInformation", "p44: 4.2 DMA Usage Common Steps"]
- `aliases`: []

### TERM-DEM
- `name`: `Dem`
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: [4, 44, 45]
- `section_paths`: ["Table of Contents", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps", "Chapter 4 Configuration Guides / 4.3 DMA Configuration Demo / 4.3.1 Hardware Trigger"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p4: 4.3 DMA Configuration Demo .............................................................................................................................. 45", "p44: on demand.", "p45: 4.3 DMA Configuration Demo"]
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 12, 13, 17, 32, 33, 44]
- `section_paths`: ["Chapter 1 DMA Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dma_ChannelType", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DMAGeneral", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf.", "p12: Details Enumeration listing the different states of the driver.", "p13: 2.4.1.6 Dma_IncrementModeType", "p17: • Dma_IncrementModeType eDmaSrcIncrementMode", "p32: 3.2.2.1 DmaDevErrorDetect", "p33: Label Dma Dev Error Detect"]
- `aliases`: []

### TERM-RTE
- `name`: `Rte`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 15, 16, 36]
- `section_paths`: ["Chapter 1 DMA Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: the Basic Software which interacts with standard BSW modules or Rte.", "p15: DMA_REQ_PORTE = 81U PORTE", "p16: 3 supported.", "p36: Container SupportErrorCancelTranser"]
- `aliases`: []

### TERM-PORT
- `name`: `Port`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: [6, 15, 16, 34, 35, 36, 38, 44]
- `section_paths`: ["Chapter 1 DMA Introduction / 1.3 Hardware Summary", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Dma_Types.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Dma_Types.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DMAConfigSet", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 DmaChannelConfig", "Chapter 4 Configuration Guides / 4.2 DMA Usage Common Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p6:  Support DMA local memory Error Correction Code (ECC) function.", "p15: DMA_REQ_PORTA = 77U PORTA", "p16: 3 supported.", "p34: 3.2.2.6 Dma Multicore Support", "p35: 3.2.3.5 Support Cancel Transer", "p36: 3.2.3.6 Support ErrorCancel Transer"]
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
- `related_ids`: []

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
- `related_ids`: []

### ALIAS-RTE
- `canonical`: `RTE`
- `aliases`: ["Runtime Environment", "Rte", "AUTOSAR RTE", "运行时环境"]
- `related_ids`: ["TERM-RTE"]

### ALIAS-ECUC
- `canonical`: `ECUC`
- `aliases`: ["ECU Configuration", "AUTOSAR_ECUC", "EcuC", "ECU配置"]
- `related_ids`: ["TERM-ECUC"]

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
- `related_ids`: ["FUNC-CDD-DMA", "FUNC-CDD-DMA-02"]

### ALIAS-DMACHANNEL
- `canonical`: `DmaChannel`
- `aliases`: ["DMA channel", "Dma_ChannelConfigType", "DmaChannelConfig", "DMA通道"]
- `related_ids`: []

### ALIAS-API-FUNCTIONS
- `canonical`: `API Functions`
- `aliases`: ["API reference", "function reference", "driver APIs", "接口函数", "函数说明"]
- `related_ids`: []

### ALIAS-TRESOS-CONFIGURATION-ITEMS
- `canonical`: `Tresos Configuration Items`
- `aliases`: ["EB tresos configuration", "ECUC parameters", "configuration containers", "配置项", "Tresos配置"]
- `related_ids`: []

### ALIAS-REJECTED-REQUIREMENTS
- `canonical`: `Rejected Requirements`
- `aliases`: ["SWS rejected", "rejected SWS", "requirements rejection", "不支持需求"]
- `related_ids`: []

### ALIAS-CONFIGURATION-GUIDES
- `canonical`: `Configuration Guides`
- `aliases`: ["usage steps", "configuration constraints", "配置指南", "使用步骤"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between DMA_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `DMA_User_Manual.pdf`
- `source_pdf_sha256`: `779471e8e113df3f38818a18f284f84b04d76313a867008afc54f4e8bca3802c`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `369`
- `technical_missing_terms_added`: `8`
- `pages_with_added_terms`: `44`
- `supplemented_missing_token_count`: `369`
- `supplemented_missing_technical_token_count`: `8`
- `supplemented_physical_pages_count`: `44`
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
  - "Architecture"
  - "Confidential"
  - "Drivers"
  - "Flagchip"
  - "Interfaces"
  - "Layered"
  - "Local"
  - "Modules"
  - "Proprietary"
  - "access"
  - "accessed"
  - "architecture"
  - "calculations"
  - "capacity"
  - "configurations"
  - "containing"
  - "entity"
  - "execute"
  - "flexibly"
  - "highly"
  - "host"
  - "instances"
  - "intervention"
  - "layered"
  - "located"
  - "mainly"
  - "microarchitecture"
  - "minimal"
  - "movement"
  - "need"
  - "parts"
  - "performs"
  - "processor"
  - "programmable"
  - "specific"
  - "standardized"
  - "three"
  - "via"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "InstanceId"
  - "Proprietary"
  - "out"
  - "range"
  - "without"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "locked"

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
  - "Defines"
  - "Flagchip"
  - "Instances"
  - "Proprietary"
  - "Values"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Defines"
  - "Flagchip"
  - "One"
  - "Proprietary"
  - "Values"
  - "access"
  - "algorithm"
  - "contain"
  - "multiple"
  - "phase"
  - "specifies"
  - "time"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Defines"
  - "Flagchip"
  - "Mux"
  - "One"
  - "Proprietary"
  - "Values"
  - "access"
  - "aligned"
  - "contain"
  - "multiple"
  - "specifies"
  - "time"

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
  - "Proprietary"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "CPU"
  - "Confidential"
  - "Enables"
  - "Flagchip"
  - "Interrupt"
  - "Proprietary"
  - "Specify"
  - "Used"
  - "bDmaDoneInterruptEnable"
  - "bDmaHalfDoneInterruptEnable"
  - "bDmaMuxPeriodModeEnable"
  - "being"
  - "belongs"
  - "capability"
  - "chosen"
  - "complete"
  - "configure"
  - "half"
  - "implement"
  - "just"
  - "mode"
  - "order"
  - "periodic"
  - "prototype"
  - "triggered"
  - "u8DmaChannelPriority"
  - "u8Dmachannelid"
  - "u8PartitionId"
  - "valid"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Contains"
  - "Destination"
  - "Flagchip"
  - "Interrupt"
  - "Last"
  - "Pointer"
  - "Proprietary"
  - "Select"
  - "Uint8"
  - "adjustment"
  - "after"
  - "automatically"
  - "bDestCircularBufferEn"
  - "bDmaAutoStopEnable"
  - "bDmaErrorInterruptEnable"
  - "bInnerChannelSelfChain"
  - "bSrcCircularBufferEn"
  - "basic"
  - "buffer"
  - "chain"
  - "circular"
  - "complete"
  - "completed"
  - "core"
  - "datum"
  - "eDmaDSIZE"
  - "eDmaDesIncrementMode"
  - "filled"
  - "increment"
  - "innerloop"
  - "interrupt"
  - "loop"
  - "notification"
  - "outer"
  - "pointing"
  - "route"
  - "s32DmaDLAST"
  - "s32DmaSLAST"
  - "should"
  - "transferred"
  - "u32DestCircBufferSize"
  - "u32DmaDADDR"
  - "u32DmaSADDR"
  - "u32SrcCircBufferSize"
  - "u8DmaISRRouter"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Contains"
  - "DMAMux"
  - "Destination"
  - "Flagchip"
  - "Inner"
  - "Instance"
  - "Number"
  - "Offset"
  - "Pointer"
  - "Proprietary"
  - "after"
  - "applied"
  - "bDmaDILOE"
  - "bDmaEnableContinousLinkMode"
  - "bDmaEnableDebugStopMode"
  - "bDmaEnableHaltOnError"
  - "bDmaEnableInnerLoopMap"
  - "bDmaEnableMonitorChecker"
  - "bDmaEnableRoundRobinMode"
  - "bDmaMastercore"
  - "bDmaSILOE"
  - "causes"
  - "completes"
  - "core"
  - "corresponding"
  - "count"
  - "debug"
  - "enables"
  - "extended"
  - "form"
  - "innerloop"
  - "innerloops"
  - "loop"
  - "master"
  - "mode"
  - "new"
  - "robin"
  - "round"
  - "s32DmaILOFF"
  - "set"
  - "setup"
  - "sign"
  - "start"
  - "state"
  - "trig"
  - "u16DmaOuterLoopCounter"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Contains"
  - "DMACR"
  - "DMAMux"
  - "DPA"
  - "DmaPartitionsUsed"
  - "ECP"
  - "Flagchip"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "comparable"
  - "core"
  - "initialize"
  - "initializes"
  - "non"
  - "partitions"
  - "power"
  - "reentrant"
  - "reset"
  - "set"
  - "sets"
  - "setup"
  - "specific"
  - "state"
  - "their"
  - "unit"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Non"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "callee"
  - "caller"
  - "cancelling"
  - "flag"
  - "operation"
  - "realized"
  - "reentrant"
  - "should"
  - "specific"
  - "store"
  - "successful"
  - "where"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "attributes"
  - "completes"
  - "configures"
  - "count"
  - "descriptor"
  - "enables"
  - "halt"
  - "loop"
  - "operation"
  - "operations"
  - "outer"
  - "reentrant"
  - "resume"
  - "successful"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Inner"
  - "Interrupt"
  - "Outer"
  - "Parameter"
  - "Proprietary"
  - "after"
  - "configures"
  - "counter"
  - "exhaust"
  - "interrupt"
  - "linked"
  - "normally"
  - "outer"
  - "reentrant"
  - "starts"
  - "triggered"
  - "u16DmaOuterLoopCounter"
  - "works"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Inner"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "applied"
  - "attributes"
  - "checks"
  - "completed"
  - "counter"
  - "disabled"
  - "enabled"
  - "ignored"
  - "loop"
  - "ma_SetChannelLoopOffsetAndNBYTES"
  - "reentrant"
  - "sets"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Adjustment"
  - "Confidential"
  - "Flagchip"
  - "Parameter"
  - "Proprietary"
  - "Set"
  - "active"
  - "added"
  - "adjustment"
  - "after"
  - "applied"
  - "checks"
  - "completed"
  - "completion"
  - "count"
  - "iteration"
  - "loop"
  - "major"
  - "outer"
  - "progress"
  - "reentrant"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Address"
  - "Adjustment"
  - "Confidential"
  - "DADDR"
  - "Flagchip"
  - "Parameter"
  - "Proprietary"
  - "Set"
  - "added"
  - "adjustment"
  - "after"
  - "applied"
  - "completion"
  - "count"
  - "iteration"
  - "loop"
  - "major"
  - "outer"
  - "set"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Address"
  - "Confidential"
  - "Destination"
  - "Flagchip"
  - "Modulo"
  - "Parameter"
  - "Proprietary"
  - "Set"
  - "aligned"
  - "enabling"
  - "given"
  - "modulo"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Beginning"
  - "Confidential"
  - "Done"
  - "Flagchip"
  - "Parameter"
  - "Proprietary"
  - "begin"
  - "clearing"
  - "counter"
  - "disabling"
  - "flag"
  - "getting"
  - "given"
  - "outer"
  - "outerloop"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Current"
  - "Flagchip"
  - "Inner"
  - "Outerloop"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "SrcLastOffset"
  - "attributes"
  - "back"
  - "bits"
  - "count"
  - "counter"
  - "current"
  - "getting"
  - "loop"
  - "origin"
  - "outer"
  - "outerloop"
  - "start"
  - "store"
  - "updating"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "DesLastOffset"
  - "Flagchip"
  - "Inner"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "attributes"
  - "back"
  - "loop"
  - "origin"
  - "start"
  - "store"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Detection"
  - "ENUMERATION"
  - "Enabled"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Notification"
  - "Proprietary"
  - "Switches"
  - "Variant"
  - "VariantPreCompile"
  - "below"
  - "general"
  - "inclusion"
  - "off"
  - "relation"
  - "shown"
  - "specific"
  - "true"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Api"
  - "Clock"
  - "Confidential"
  - "Disables"
  - "EnableGRP0HighPriority"
  - "EnableGRP1HighPriority"
  - "Enables"
  - "Flagchip"
  - "Group0"
  - "Group1"
  - "Higher"
  - "Info"
  - "Proprietary"
  - "Unit"
  - "cycle"
  - "exit"
  - "false"
  - "get"
  - "group0"
  - "group1"
  - "out"
  - "specific"
  - "time"
  - "timed"
  - "waiting"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Clock"
  - "Confidential"
  - "Core"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Instance"
  - "Master"
  - "Proprietary"
  - "Specify"
  - "Time"
  - "Unit"
  - "base"
  - "core"
  - "cycle"
  - "exit"
  - "master"
  - "multiple"
  - "out"
  - "relevant"
  - "set"
  - "time"
  - "timed"
  - "waiting"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "EnableContinuousLinkMode"
  - "Flagchip"
  - "Inner"
  - "Loop"
  - "Mapping"
  - "Proprietary"
  - "SupportCancelTranser"
  - "Unit"
  - "Upon"
  - "activated"
  - "activates"
  - "again"
  - "allow"
  - "applied"
  - "applies"
  - "being"
  - "both"
  - "completion"
  - "does"
  - "effectively"
  - "either"
  - "enabled"
  - "false"
  - "goes"
  - "itself"
  - "loop"
  - "made"
  - "minor"
  - "offsets"
  - "reduced"
  - "restarts"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "Debug"
  - "EnableDebugStopMode"
  - "EnableHaltOnError"
  - "EnableRoundRobinMode"
  - "Fixed"
  - "Flagchip"
  - "Normal"
  - "Once"
  - "Proprietary"
  - "Stop"
  - "SupportHaltDma"
  - "allowed"
  - "cleared"
  - "complete"
  - "executing"
  - "false"
  - "halt"
  - "ignored"
  - "itself"
  - "mode"
  - "new"
  - "operation"
  - "report"
  - "reports"
  - "requests"
  - "robin"
  - "stall"
  - "start"
  - "until"
  - "would"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Assign"
  - "Confidential"
  - "Debug"
  - "EnableMonitorChecker"
  - "Flagchip"
  - "MAP"
  - "Others"
  - "Peripheral"
  - "Proprietary"
  - "Stop"
  - "being"
  - "debug"
  - "disables"
  - "enables"
  - "false"
  - "mode"
  - "new"
  - "outer"
  - "selected"
  - "specific"
  - "start"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "ENUMERATION"
  - "EnableChannelCompeletInterrupt"
  - "EnableChannelHalfCompeletInterrupt"
  - "Flagchip"
  - "Normal"
  - "Note"
  - "Only"
  - "Periodic"
  - "Proprietary"
  - "Range"
  - "channel0"
  - "complete"
  - "disable"
  - "false"
  - "half"
  - "interrupt"
  - "level"
  - "mode"
  - "support"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "Half"
  - "ISR"
  - "Maps"
  - "Proprietary"
  - "callout"
  - "complete"
  - "defines"
  - "disable"
  - "existence"
  - "false"
  - "interrupt"
  - "mapped"
  - "multiple"
  - "occurrence"
  - "omitted"
  - "partitions"
  - "place"
  - "subset"
  - "successful"
  - "take"
  - "where"
  - "zero"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Patch"
  - "Proprietary"
  - "about"
  - "aggregated"
  - "appropriate"
  - "published"
  - "specification"
  - "versions"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Patch"
  - "Proprietary"
  - "level"
  - "numbering"
  - "specific"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Basically"
  - "Choose"
  - "Confidential"
  - "Configure"
  - "Flagchip"
  - "General"
  - "Generate"
  - "Implement"
  - "Mastercore"
  - "Most"
  - "Proprietary"
  - "below"
  - "core2"
  - "ensure"
  - "following"
  - "functions"
  - "instance0"
  - "instance1"
  - "machines"
  - "mastercore"
  - "more"
  - "normal"
  - "operation"
  - "other"
  - "peripheral"
  - "state"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45]
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
- `physical_pages`: [2, 3, 4, 7, 8, 9, 10, 11, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 32]
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0016-001", "TBL-0017-001"]
- `message`: Table Index contains formal and table-like entries; cell grids were not fully reconstructed, and entries are intended for locating source PDF pages.
- `recommended_action`: Use captions, anchors and physical pages to verify exact table cells in the source PDF.

### WARN-0004
- `severity`: `medium`
- `category`: `image_extraction`
- `physical_pages`: [3, 5, 7, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45]
- `affected_ids`: ["FIG-0003-001", "FIG-0005-001", "FIG-0007-001", "FIG-0019-001", "FIG-0019-002", "FIG-0020-001", "FIG-0020-002", "FIG-0021-001", "FIG-0021-002", "FIG-0021-003"]
- `message`: Figure/Image Index includes screenshots, diagrams and embedded image blocks. Semantic descriptions are based on page context and may not capture all visual details.
- `recommended_action`: Open the indicated physical page in the source PDF for exact screenshot/diagram content.

### WARN-0005
- `severity`: `low`
- `category`: `sparse_page`
- `physical_pages`: [30, 31]
- `affected_ids`: []
- `message`: Detected 2 sparse-text pages. They are still covered by Page Locator and Page Segment indexes.
- `recommended_action`: Check source PDF rendering if a sparse page is unexpectedly important.

### WARN-0006
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: []
- `affected_ids`: []
- `message`: No formal SWS_* or SRS_* requirement IDs were detected in this PDF. Internal SEC/TBL/FIG IDs are navigation IDs only.
- `recommended_action`: Do not treat internal manifest IDs as source-document requirement numbers.

### WARN-0007
- `severity`: `low`
- `category`: `source_toc_typo`
- `physical_pages`: [3]
- `affected_ids`: []
- `message`: The Table of Contents uses 'WAPI Sequence Diagram' for section 2.8; Manifest preserves the source wording and also aliases API sequence diagram.
- `recommended_action`: Verify against the source PDF before relying on extracted details.

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `45`
- `indexed_physical_pages_count`: `45`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `section_ranges_status`: `pass`
- `invalid_section_ranges`: []
- `source_pdf_sha256`: `779471e8e113df3f38818a18f284f84b04d76313a867008afc54f4e8bca3802c`
- `manifest_source_pdf_sha256`: `779471e8e113df3f38818a18f284f84b04d76313a867008afc54f4e8bca3802c`
- `sha256_match`: `True`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `369`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `7`
- `overall_status`: `pass_with_warnings`

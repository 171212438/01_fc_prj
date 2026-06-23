---
manifest_schema_version: "1.1"
source_pdf: "DIO_User_Manual.pdf"
source_pdf_sha256: "5509433ae6998e50ce73280f9a8d7851691911b4615591b1db4f34cc6df684b0"
source_pdf_size_bytes: 896489
pdf_page_count: 26
generated_at: "2026-06-19T11:17:42Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.5.0"
source_document_id: null
source_document_revision: "Rev A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: DIO_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `DIO_User_Manual.pdf`
- `source_pdf_sha256`: `5509433ae6998e50ce73280f9a8d7851691911b4615591b1db4f34cc6df684b0`
- `source_pdf_size_bytes`: `896489`
- `pdf_page_count`: `26`
- `source_document_id`: `null`
- `source_document_revision`: `Rev A0`
- `visible_cover_title`: `FC7xxx DIO User Manual`
- `visible_cover_revision`: `Rev A0`
- `revision_history_latest_row`: `A0 / 2025/01/14 / Initial release`
- `generated_at`: `2026-06-19T11:17:42Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.5.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `39`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: FC7xxx AUTOSAR MCAL DIO module - User Manual
- `module_scope`: DIO driver user-facing design, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration constraints.
- `key_chapters`: ["Chapter 1 DIO Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["DIO", "Digital Input/Output", "Digital I/O", "GPIO", "Dio driver", "DIO driver", "DIO module", "DioChannel", "DioPort", "DioChannelGroup", "Dio_ConfigType", "MCAL", "AUTOSAR", "EB tresos", "Rte", "Det"]
- `summary`: This 26-page document is the FC7xxx DIO user manual. It indexes requirements tracing, hardware summary, software design, macros, enums, typedefs, structures, APIs, sequence diagrams, EB tresos configuration items and configuration guides.
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
- `keywords`: ["DIO", "FC7xxx"]
- `anchor`: `FC7xxx DIO User Manual`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["DIO", "Revision", "History", "FC7xxx", "Changes", "Initial", "release"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["Dio.h", "Dio_version.h", "Dio_Cfg.h", "Dio_Hw_Types.h", "Dio_Hw.h", "Dio_RegOps.h", "Dio_version", "Dio_Cfg"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `DIO Introduction`
- `path`: `Chapter 1 DIO Introduction`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Pinout.xlsx", "AUTOSAR_SWS_DIODriver", "DIO", "GPIO", "Dio driver", "DioChannel", "DioPort", "Introduction"]
- `anchor`: `DIO Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Requirement Tracing`
- `path`: `Chapter 1 DIO Introduction / 1.1 Requirement Tracing`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Pinout.xlsx", "AUTOSAR_SWS_DIODriver", "DIO", "GPIO", "Dio driver", "DioChannel", "DioPort", "Requirement"]
- `anchor`: `Requirement Tracing`

### SEC-001-002
- `source_number`: `1.2`
- `title`: `Hardware Summary`
- `path`: `Chapter 1 DIO Introduction / 1.2 Hardware Summary`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Pinout.xlsx", "AUTOSAR_SWS_DIODriver", "DIO", "GPIO", "Dio driver", "DioChannel", "DioPort", "Hardware"]
- `anchor`: `Hardware Summary`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Software Design`
- `path`: `Chapter 2 Software Design`
- `physical_page_start`: `6`
- `physical_page_end`: `17`
- `printed_page_start`: `6`
- `printed_page_end`: `17`
- `keywords`: ["Dio.h", "SWS_Dio_00083", "SWS_Dio_00084", "SWS_Dio_00104", "SWS_Dio_00103", "SWS_Dio_00005", "SWS_Dio_00118", "SWS_Dio_00026"]
- `anchor`: `Software Design`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Rejected Requirements`
- `path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SWS_Dio_00083", "SWS_Dio_00084", "SWS_Dio_00104", "SWS_Dio_00103", "SWS_Dio_00005", "SWS_Dio_00118", "SWS_Dio_00026", "SWS_Dio_00105"]
- `anchor`: `Rejected Requirements`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `File Structure`
- `path`: `Chapter 2 Software Design / 2.2 File Structure`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SWS_Dio_00083", "SWS_Dio_00084", "SWS_Dio_00104", "SWS_Dio_00103", "SWS_Dio_00005", "SWS_Dio_00118", "SWS_Dio_00026", "SWS_Dio_00105"]
- `anchor`: `File Structure`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Macros`
- `path`: `Chapter 2 Software Design / 2.3 Macros`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["Dio.h", "Dio_version.h", "Dio_Cfg.h", "DIO_E_PARAM_INVALID_CHANNEL_ID", "DIO_E_PARAM_CONFIG", "DIO_E_PARAM_INVALID_PORT_ID", "DIO_E_PARAM_INVALID_GROUP_ID", "DIO_E_PARAM_POINTER"]
- `anchor`: `Macros`

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: `Macros in Dio.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h`
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["Dio.h", "DIO_E_PARAM_INVALID_CHANNEL_ID", "DIO_E_PARAM_CONFIG", "DIO_E_PARAM_INVALID_PORT_ID", "DIO_E_PARAM_INVALID_GROUP_ID", "DIO_E_PARAM_POINTER", "DIO_E_PARAM_LEVEL", "DIO_READCHANNEL_ID"]
- `anchor`: `Macros in Dio.h`

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: `Macros in Dio_version.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h`
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["Dio_version.h", "Dio_Cfg.h", "DIO_INSTANCE_ID", "DIO_CHECK_PORT_CHANNEL_VALID", "DIO_DEV_ERROR_DETECT", "DIO_VERSION_INFO_API", "Dio_GetVersionInfo", "Dio_version"]
- `anchor`: `Macros in Dio_version.h`

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: `Macros in Dio_Cfg.h`
- `path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Dio_Cfg.h`
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["Dio_Cfg.h", "Dio_version.h", "DIO_INSTANCE_ID", "DIO_CHECK_PORT_CHANNEL_VALID", "DIO_DEV_ERROR_DETECT", "DIO_VERSION_INFO_API", "Dio_GetVersionInfo", "Dio_Cfg"]
- `anchor`: `Macros in Dio_Cfg.h`

### SEC-002-004
- `source_number`: `2.4`
- `title`: `Enums`
- `path`: `Chapter 2 Software Design / 2.4 Enums`
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Dio_Hw_Types.h", "DIO_FLIP_CHANNEL_API", "Dio_FlipChannel", "DIO_MASKED_WRITE_PORT_API", "DIO_NUM_PORTS_U16", "DIO_NUM_CHANNELS_PER_PORT_U16", "DIO_NUM_CHANNELS_U16", "DIO_MAX_VALID_OFFSET_U8"]
- `anchor`: `Enums`

### SEC-002-005
- `source_number`: `2.5`
- `title`: `Typedefs`
- `path`: `Chapter 2 Software Design / 2.5 Typedefs`
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Dio_Hw_Types.h", "DIO_FLIP_CHANNEL_API", "Dio_FlipChannel", "DIO_MASKED_WRITE_PORT_API", "DIO_NUM_PORTS_U16", "DIO_NUM_CHANNELS_PER_PORT_U16", "DIO_NUM_CHANNELS_U16", "DIO_MAX_VALID_OFFSET_U8"]
- `anchor`: `Typedefs`

### SEC-002-005-001
- `source_number`: `2.5.1`
- `title`: `Typedefs in Dio_Hw_Types.h`
- `path`: `Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h`
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Dio_Hw_Types.h", "DIO_FLIP_CHANNEL_API", "Dio_FlipChannel", "DIO_MASKED_WRITE_PORT_API", "DIO_NUM_PORTS_U16", "DIO_NUM_CHANNELS_PER_PORT_U16", "DIO_NUM_CHANNELS_U16", "DIO_MAX_VALID_OFFSET_U8"]
- `anchor`: `Typedefs in Dio_Hw_Types.h`

### SEC-002-006
- `source_number`: `2.6`
- `title`: `Structures`
- `path`: `Chapter 2 Software Design / 2.6 Structures`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_ChannelGroupType", "Dio_PortType", "Dio_ConfigType", "GPIO_Type", "DIO"]
- `anchor`: `Structures`

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: `Dio_ChannelGroupType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Dio_ChannelGroupType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_PortType", "Dio_ConfigType", "GPIO_Type", "DIO"]
- `anchor`: `Dio_ChannelGroupType`

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: `Dio_ConfigType`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Dio_ConfigType`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Dio_ConfigType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_ChannelGroupType", "Dio_PortType", "GPIO_Type", "DIO"]
- `anchor`: `Dio_ConfigType`

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: `GPIO_Type`
- `path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.3 GPIO_Type`
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["GPIO_Type", "Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_ChannelGroupType", "Dio_PortType", "Dio_ConfigType", "DIO"]
- `anchor`: `GPIO_Type`

### SEC-002-007
- `source_number`: `2.7`
- `title`: `API Functions`
- `path`: `Chapter 2 Software Design / 2.7 API Functions`
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup"]
- `anchor`: `API Functions`

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: `Functions in Dio.h`
- `path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup"]
- `anchor`: `Functions in Dio.h`

### SEC-002-008
- `source_number`: `2.8`
- `title`: `Hardware Functions`
- `path`: `Chapter 2 Software Design / 2.8 Hardware Functions`
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["Dio_Hw.h", "Dio_HL_ReadChannel", "Dio_ReadChannel", "Dio_HL_WriteChannel", "Dio_HL_FlipChannel", "Dio_FLipChannel", "Dio_HL_ReadPort", "Dio_ReadPort"]
- `anchor`: `Hardware Functions`

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: `Functions in Dio_Hw.h`
- `path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["Dio_Hw.h", "Dio_HL_ReadChannel", "Dio_ReadChannel", "Dio_HL_WriteChannel", "Dio_HL_FlipChannel", "Dio_FLipChannel", "Dio_HL_ReadPort", "Dio_ReadPort"]
- `anchor`: `Functions in Dio_Hw.h`

### SEC-002-009
- `source_number`: `2.9`
- `title`: `Peripheral Functions`
- `path`: `Chapter 2 Software Design / 2.9 Peripheral Functions`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Dio_RegOps.h", "Dio_HWA_ReadPortDataInput", "Dio_HL_ReadChannel", "Dio_HL_ReadPort", "Dio_HL_ReadChannelGroup", "Dio_HWA_ClearPinOutput", "Dio_HL_WriteChannel", "Dio_HWA_SetPinDataOutput"]
- `anchor`: `Peripheral Functions`

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: `Functions in Dio_RegOps.h`
- `path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Dio_RegOps.h", "Dio_HWA_ReadPortDataInput", "Dio_HL_ReadChannel", "Dio_HL_ReadPort", "Dio_HL_ReadChannelGroup", "Dio_HWA_ClearPinOutput", "Dio_HL_WriteChannel", "Dio_HWA_SetPinDataOutput"]
- `anchor`: `Functions in Dio_RegOps.h`

### SEC-002-010
- `source_number`: `2.10`
- `title`: `API Sequence Diagram`
- `path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram`
- `physical_page_start`: `16`
- `physical_page_end`: `17`
- `printed_page_start`: `16`
- `printed_page_end`: `17`
- `keywords`: ["Dio_HWA_SetPortDataOutput", "Dio_HL_WritePort", "Dio_HWA_SetPortOutput", "Dio_HL_WriteChannelGroup", "Dio_HWA_ClearPortOutput", "LOCAL_INLINE", "GPIO_Type", "DIO"]
- `anchor`: `API Sequence Diagram`

### SEC-002-010-001
- `source_number`: `2.10.1`
- `title`: `Read Value from Digital I/O - 1`
- `path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Dio_HWA_SetPortDataOutput", "Dio_HL_WritePort", "Dio_HWA_SetPortOutput", "Dio_HL_WriteChannelGroup", "Dio_HWA_ClearPortOutput", "LOCAL_INLINE", "GPIO_Type", "DIO"]
- `anchor`: `Read Value from Digital I/O - 1`

### SEC-002-010-002
- `source_number`: `2.10.2`
- `title`: `Read Value from Digital I/O - 2`
- `path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2`
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["DIO", "Digital I/O", "Digital", "FC7xxx"]
- `anchor`: `Read Value from Digital I/O - 2`

### SEC-002-010-003
- `source_number`: `2.10.3`
- `title`: `Write Value to Digital I/O - 1`
- `path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.3 Write Value to Digital I/O - 1`
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["DIO", "Digital I/O", "Digital", "FC7xxx"]
- `anchor`: `Write Value to Digital I/O - 1`

### SEC-002-010-004
- `source_number`: `2.10.4`
- `title`: `Write Value to Digital I/O - 2`
- `path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.4 Write Value to Digital I/O - 2`
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["DIO", "Digital I/O", "Digital", "FC7xxx"]
- `anchor`: `Write Value to Digital I/O - 2`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Tresos Configuration Items`
- `path`: `Chapter 3 Tresos Configuration Items`
- `physical_page_start`: `18`
- `physical_page_end`: `25`
- `printed_page_start`: `18`
- `printed_page_end`: `25`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "DioPort", "Tresos", "FC7xxx", "Container", "Inclusion"]
- `anchor`: `Tresos Configuration Items`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Container Inclusion Relation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation`
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "Container", "Inclusion", "Relation", "FC7xxx", "Tresos"]
- `anchor`: `Container Inclusion Relation`

### SEC-003-002
- `source_number`: `3.2`
- `title`: `Containers and Variables`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables`
- `physical_page_start`: `18`
- `physical_page_end`: `25`
- `printed_page_start`: `18`
- `printed_page_end`: `25`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "DioPort", "Containers", "Variables", "FC7xxx", "Tresos"]
- `anchor`: `Containers and Variables`

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: `IMPLEMENTATION_CONFIG_VARIANT`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation"]
- `anchor`: `IMPLEMENTATION_CONFIG_VARIANT`

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: `DioConfig`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `physical_page_start`: `18`
- `physical_page_end`: `21`
- `printed_page_start`: `18`
- `printed_page_end`: `21`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "DioPort", "DioConfig", "FC7xxx", "Tresos", "Container"]
- `anchor`: `DioConfig`

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: `DioGeneral`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "DioGeneral", "FC7xxx", "Screenshot", "Properties"]
- `anchor`: `DioGeneral`

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: `CommonPublishedInformation`
- `path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `physical_page_start`: `23`
- `physical_page_end`: `25`
- `printed_page_start`: `23`
- `printed_page_end`: `25`
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "Integer_Label", "DIO", "CommonPublishedInformation", "FC7xxx", "Origin"]
- `anchor`: `CommonPublishedInformation`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Configuration Guides`
- `path`: `Chapter 4 Configuration Guides`
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["Dio_Cfg.h", "Dio_ReadPort", "Dio_WritePort", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup"]
- `anchor`: `Configuration Guides`

### SEC-004-001
- `source_number`: `4.1`
- `title`: `DIO Usage Common Steps`
- `path`: `Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps`
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["Dio_Cfg.h", "Dio_ReadPort", "Dio_WritePort", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup"]
- `anchor`: `DIO Usage Common Steps`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["DIO", "FC7xxx"]
- `anchors`: []

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["DIO", "FC7xxx", "Revision", "History", "Changes", "Initial", "release"]
- `anchors`: ["Revision History", "Revision Date Changes", "A0 2025/01/14 Initial release"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["revision_history", "toc", "requirements", "configuration", "enum_list", "typedef_list", "structure", "diagram"]
- `keywords`: ["Dio.h", "Dio_version.h", "Dio_Cfg.h", "Dio_Hw_Types.h", "Dio_Hw.h", "Dio_RegOps.h", "Dio_version", "Dio_Cfg", "Dio_Hw_Types", "Dio_ChannelGroupType"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................................................................................... 2", "Table of Contents ................................................................................................................................................... 3", "Chapter 1 DIO Introduction .................................................................................................................................. 5"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Table of Contents`
- `content_types`: ["toc"]
- `keywords`: ["DIO", "FC7xxx", "Common", "Contents"]
- `anchors`: ["4.1 DIO Usage Common Steps ............................................................................................................................................ 26"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 1 DIO Introduction / 1.1 Requirement Tracing`
- `content_types`: ["text"]
- `keywords`: ["Pinout.xlsx", "AUTOSAR_SWS_DIODriver", "DIO", "GPIO", "Dio driver", "DioChannel", "DioPort", "FC7xxx", "Introduction", "Requirement"]
- `anchors`: ["Chapter 1 DIO Introduction", "1.1 Requirement Tracing", "4.6.0. For detailed requirements, refer to the AUTOSAR_SWS_DIODriver.", "1.2 Hardware Summary"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["requirements", "structure", "diagram", "image", "text"]
- `keywords`: ["SWS_Dio_00083", "SWS_Dio_00084", "SWS_Dio_00104", "SWS_Dio_00103", "SWS_Dio_00005", "SWS_Dio_00118", "SWS_Dio_00026", "SWS_Dio_00105", "Dio_PortType", "Dio_ReadPort"]
- `anchors`: ["Chapter 2 Software Design", "2.1 Rejected Requirements", "Rejected Requirement 1 SWS_Dio_00083", "Rejected Requirement 2 SWS_Dio_00084"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h`
- `content_types`: ["error_report", "text"]
- `keywords`: ["Dio.h", "DIO_E_PARAM_INVALID_CHANNEL_ID", "DIO_E_PARAM_CONFIG", "DIO_E_PARAM_INVALID_PORT_ID", "DIO_E_PARAM_INVALID_GROUP_ID", "DIO_E_PARAM_POINTER", "DIO_E_PARAM_LEVEL", "DIO_READCHANNEL_ID", "Dio_ReadChannel", "DIO_WRITECHANNEL_ID"]
- `anchors`: ["2.3 Macros", "2.3.1 Macros in Dio.h", "• #define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)0x0A)", "• #define DIO_E_PARAM_CONFIG ((uint8)0x10)"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h`
- `content_types`: ["text"]
- `keywords`: ["Dio_version.h", "Dio_Cfg.h", "DIO_INSTANCE_ID", "DIO_CHECK_PORT_CHANNEL_VALID", "DIO_DEV_ERROR_DETECT", "DIO_VERSION_INFO_API", "Dio_GetVersionInfo", "DIO_PORTID_SHIFT_U8", "Dio_PortLevelType", "DIO_CHANNEL_MASK_U8"]
- `anchors`: ["• #define DIO_INSTANCE_ID ((uint8)0x00)", "• #define DIO_CHECK_PORT_CHANNEL_VALID(ChannelId) (u32ValidPortPins[ChannelId >>", "DIO_PORTID_SHIFT_U8] & (uint32) ((Dio_PortLevelType) 1 << ((ChannelId) & DIO_CHANNEL_MASK_U8)))", "2.3.2 Macros in Dio_version.h"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h`
- `content_types`: ["enum_list", "typedef_list", "text"]
- `keywords`: ["Dio_Hw_Types.h", "DIO_FLIP_CHANNEL_API", "Dio_FlipChannel", "DIO_MASKED_WRITE_PORT_API", "DIO_NUM_PORTS_U16", "DIO_NUM_CHANNELS_PER_PORT_U16", "DIO_NUM_CHANNELS_U16", "DIO_MAX_VALID_OFFSET_U8", "DIO_ENABLE_USER_MODE_SUPPORT", "MAX_CONFIGURED_DIO_CHANNEL_GROUPS"]
- `anchors`: ["• #define DIO_FLIP_CHANNEL_API (STD_ON)", "Function Dio_FlipChannel() enable switch.", "• #define DIO_MASKED_WRITE_PORT_API (STD_ON)", "Function Dio_FlipChannel() enable switch."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType`
- `content_types`: ["typedef_list", "structure", "diagram", "image", "text"]
- `keywords`: ["Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_ChannelGroupType", "Dio_PortType", "Dio_ConfigType", "GPIO_Type", "DIO", "GPIO", "FC7xxx"]
- `anchors`: ["• typedef uint16 Dio_ChannelType", "• typedef uint32 Dio_PortLevelType", "• typedef uint8 Dio_LevelType", "2.6 Structures"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_LevelType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_PortType", "DIO"]
- `anchors`: ["2.7 API Functions", "2.7.1 Functions in Dio.h", "2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)", "Function Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Dio.h", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_GetVersionInfo", "Dio_MaskedWritePort", "Dio_PortLevelType", "Dio_PortType", "Dio_ChannelGroupType", "Std_VersionInfoType"]
- `anchors`: ["Returns Dio_PortLevelType", "2.7.1.5 void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)", "Function void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)", "2.7.1.6 Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `content_types`: ["api_reference", "table_like", "text"]
- `keywords`: ["Dio_Hw.h", "Dio_HL_ReadChannel", "Dio_ReadChannel", "Dio_HL_WriteChannel", "Dio_HL_FlipChannel", "Dio_FLipChannel", "Dio_HL_ReadPort", "Dio_ReadPort", "Dio_HL_WritePort", "Dio_Hw"]
- `anchors`: ["2.8 Hardware Functions", "2.8.1 Functions in Dio_Hw.h", "2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)", "Function Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `content_types`: ["api_reference", "table_like", "text"]
- `keywords`: ["Dio_Hw.h", "Dio_WritePort", "Dio_HL_ReadChannelGroup", "Dio_ReadChannelGroup", "Dio_HL_WriteChannelGroup", "Dio_WriteChannelGroup", "Dio_HL_ValidatePinAuth", "Dio_HL_ValidatePortAuth", "Dio_PortLevelType", "Dio_ChannelGroupType"]
- `anchors`: ["Referenced By Dio_WritePort()", "2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)", "Function Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)", "Returns Dio_PortLevelType"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `content_types`: ["api_reference", "table_like", "text"]
- `keywords`: ["Dio_RegOps.h", "Dio_HWA_ReadPortDataInput", "Dio_HL_ReadChannel", "Dio_HL_ReadPort", "Dio_HL_ReadChannelGroup", "Dio_HWA_ClearPinOutput", "Dio_HL_WriteChannel", "Dio_HWA_SetPinDataOutput", "Dio_HWA_TogglePin", "Dio_HWA_ReadPortDataOutput"]
- `anchors`: ["2.9 Peripheral Functions", "2.9.1 Functions in Dio_RegOps.h", "2.9.1.1 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)", "Function LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `keywords`: ["Dio_HWA_SetPortDataOutput", "Dio_HL_WritePort", "Dio_HWA_SetPortOutput", "Dio_HL_WriteChannelGroup", "Dio_HWA_ClearPortOutput", "LOCAL_INLINE", "GPIO_Type", "DIO", "Digital I/O", "GPIO"]
- `anchors`: ["2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)", "Function LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)", "Referenced By Dio_HL_WritePort()", "2.9.1.7 LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2`
- `content_types`: ["image", "text"]
- `keywords`: ["DIO", "Digital I/O", "FC7xxx", "Digital", "Software", "Design", "API", "Sequence", "Diagram"]
- `anchors`: ["2.10.2 Read Value from Digital I/O - 2", "2.10.3 Write Value to Digital I/O - 1", "2.10.4 Write Value to Digital I/O - 2"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1 Container Inclusion Relation", "3.2 Containers and Variables", "3.2.1 IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["DIO", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Container", "TAB", "individual", "consisting"]
- `anchors`: ["3.2.2.1 DioPort", "3.2.2.1.1 DioPort", "3.2.2.1.2 DioPortId", "per configuration set."]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["STD_HIGH", "STD_LOW", "AUTOSAR_ECUC", "DIO", "DioChannel", "FC7xxx", "Properties", "Property", "Variable", "Integer"]
- `anchors`: ["2. The selected Port must have a valid Pin (Dio.ValidPortPins cannot be", "0 in the resourse file).", "3.2.2.1.3 DioChannel", "3.2.2.1.4 DioChannel"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["Dio_ChannelGroupType", "AUTOSAR_ECUC", "DIO", "DioChannel", "DioPort", "DioChannelGroup", "FC7xxx", "Screenshot", "Properties", "Property"]
- `anchors`: ["3.2.2.1.6 DioChannelGroup", "3.2.2.1.7 DioChannelGroup", "3.2.2.1.8 DioChannelGroupIdentification", "Dio_ChannelGroupType. This data structure contains channel group information. This parameter"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchors`: ["3.2.2.1.10 DioPortOffset", "Origin AUTOSAR_ECUC", "3.2.2.1.11 DioPortMask", "Origin AUTOSAR_ECUC"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "DIO", "FC7xxx", "Origin", "SymbolicNameValue", "Default", "DioVersionInfoApi", "Variable"]
- `anchors`: ["Origin AUTOSAR_ECUC", "3.2.3.2 DioVersionInfoApi", "Description Adds/removes the service Dio_GetVersionInfo() from the code.", "Origin AUTOSAR_ECUC"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "ArReleaseMajorVersion", "Variable", "version", "number", "AUTOSAR", "specification", "appropriate"]
- `anchors`: ["3.2.4.1 ArReleaseMajorVersion", "Type Variable: Integer_Label", "3.2.4.2 ArReleaseMinorVersion", "Type Variable: Integer_Label"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "specific", "Screenshot", "Properties", "Property", "Variable", "Origin", "SymbolicNameValue"]
- `anchors`: ["Type Variable: Integer_Label", "3.2.4.6 SwPatchVersion", "Type Variable: Integer_Label", "3.2.4.7 ModuleId"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps`
- `content_types`: ["text"]
- `keywords`: ["Dio_Cfg.h", "Dio_ReadPort", "Dio_WritePort", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_Cfg", "DIO"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1 DIO Usage Common Steps", "In order to use Dio port APIs (Dio_ReadPort(), Dio_WritePort() ) on the Port you need. Here are some suggested", "1) Ensure which port you want to use (e. g. PORT B)."]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx DIO User Manual and its visible revision.
- `keywords`: ["DIO", "FC7xxx"]
- `anchors`: []
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history for the FC7xxx DIO document.
- `keywords`: ["DIO", "FC7xxx", "Revision", "History", "Changes", "Initial", "release"]
- `anchors`: ["Revision History", "Revision Date Changes", "A0 2025/01/14 Initial release"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["revision_history", "toc", "requirements", "configuration", "enum_list", "typedef_list", "structure", "diagram"]
- `summary`: Revision history for the FC7xxx DIO document.
- `keywords`: ["Dio.h", "Dio_version.h", "Dio_Cfg.h", "Dio_Hw_Types.h", "Dio_Hw.h", "Dio_RegOps.h", "Dio_version", "Dio_Cfg", "Dio_Hw_Types", "Dio_ChannelGroupType"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................................................................................... 2", "Table of Contents ................................................................................................................................................... 3", "Chapter 1 DIO Introduction .................................................................................................................................. 5"]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc"]
- `summary`: Table of contents page mapping chapters and subsections to printed/source page labels.
- `keywords`: ["DIO", "FC7xxx", "Common", "Contents"]
- `anchors`: ["4.1 DIO Usage Common Steps ............................................................................................................................................ 26"]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 1 DIO Introduction / 1.1 Requirement Tracing`
- `content_types`: ["text"]
- `summary`: Chapter 1 DIO Introduction 1.1 Requirement Tracing
- `keywords`: ["Pinout.xlsx", "AUTOSAR_SWS_DIODriver", "DIO", "GPIO", "Dio driver", "DioChannel", "DioPort", "FC7xxx", "Introduction", "Requirement"]
- `anchors`: ["Chapter 1 DIO Introduction", "1.1 Requirement Tracing", "4.6.0. For detailed requirements, refer to the AUTOSAR_SWS_DIODriver.", "1.2 Hardware Summary"]
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `content_types`: ["requirements", "structure", "diagram", "image", "text"]
- `summary`: Lists rejected AUTOSAR requirements on this page, including SWS_Dio_00083, SWS_Dio_00084, SWS_Dio_00104, SWS_Dio_00103, SWS_Dio_00005, etc.
- `keywords`: ["SWS_Dio_00083", "SWS_Dio_00084", "SWS_Dio_00104", "SWS_Dio_00103", "SWS_Dio_00005", "SWS_Dio_00118", "SWS_Dio_00026", "SWS_Dio_00105", "Dio_PortType", "Dio_ReadPort"]
- `anchors`: ["Chapter 2 Software Design", "2.1 Rejected Requirements", "Rejected Requirement 1 SWS_Dio_00083", "Rejected Requirement 2 SWS_Dio_00084"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h`
- `content_types`: ["error_report", "text"]
- `summary`: Lists DIO DET/DEM error-reporting entries, related APIs and error codes.
- `keywords`: ["Dio.h", "DIO_E_PARAM_INVALID_CHANNEL_ID", "DIO_E_PARAM_CONFIG", "DIO_E_PARAM_INVALID_PORT_ID", "DIO_E_PARAM_INVALID_GROUP_ID", "DIO_E_PARAM_POINTER", "DIO_E_PARAM_LEVEL", "DIO_READCHANNEL_ID", "Dio_ReadChannel", "DIO_WRITECHANNEL_ID"]
- `anchors`: ["2.3 Macros", "2.3.1 Macros in Dio.h", "• #define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)0x0A)", "• #define DIO_E_PARAM_CONFIG ((uint8)0x10)"]
- `quality_flags`: []

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h`
- `content_types`: ["text"]
- `summary`: • #define DIO_INSTANCE_ID ((uint8)0x00) Instance ID of the DIO driver.
- `keywords`: ["Dio_version.h", "Dio_Cfg.h", "DIO_INSTANCE_ID", "DIO_CHECK_PORT_CHANNEL_VALID", "DIO_DEV_ERROR_DETECT", "DIO_VERSION_INFO_API", "Dio_GetVersionInfo", "DIO_PORTID_SHIFT_U8", "Dio_PortLevelType", "DIO_CHANNEL_MASK_U8"]
- `anchors`: ["• #define DIO_INSTANCE_ID ((uint8)0x00)", "• #define DIO_CHECK_PORT_CHANNEL_VALID(ChannelId) (u32ValidPortPins[ChannelId >>", "DIO_PORTID_SHIFT_U8] & (uint32) ((Dio_PortLevelType) 1 << ((ChannelId) & DIO_CHANNEL_MASK_U8)))", "2.3.2 Macros in Dio_version.h"]
- `quality_flags`: []

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h`
- `content_types`: ["enum_list", "typedef_list", "text"]
- `summary`: • #define DIO_FLIP_CHANNEL_API (STD_ON) Function Dio_FlipChannel() enable switch.
- `keywords`: ["Dio_Hw_Types.h", "DIO_FLIP_CHANNEL_API", "Dio_FlipChannel", "DIO_MASKED_WRITE_PORT_API", "DIO_NUM_PORTS_U16", "DIO_NUM_CHANNELS_PER_PORT_U16", "DIO_NUM_CHANNELS_U16", "DIO_MAX_VALID_OFFSET_U8", "DIO_ENABLE_USER_MODE_SUPPORT", "MAX_CONFIGURED_DIO_CHANNEL_GROUPS"]
- `anchors`: ["• #define DIO_FLIP_CHANNEL_API (STD_ON)", "Function Dio_FlipChannel() enable switch.", "• #define DIO_MASKED_WRITE_PORT_API (STD_ON)", "Function Dio_FlipChannel() enable switch."]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType`
- `content_types`: ["typedef_list", "structure", "diagram", "image", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType; use image and anchor indexes for source-PDF verification.
- `keywords`: ["Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_ChannelGroupType", "Dio_PortType", "Dio_ConfigType", "GPIO_Type", "DIO", "GPIO", "FC7xxx"]
- `anchors`: ["• typedef uint16 Dio_ChannelType", "• typedef uint32 Dio_PortLevelType", "• typedef uint8 Dio_LevelType", "2.6 Structures"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dio_ReadChannel, Dio_WriteChannel, Dio_FlipChannel, Dio_ReadPort.
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_LevelType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_PortType", "DIO"]
- `anchors`: ["2.7 API Functions", "2.7.1 Functions in Dio.h", "2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)", "Function Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dio_WritePort, Dio_ReadChannelGroup, Dio_WriteChannelGroup, Dio_GetVersionInfo, etc.
- `keywords`: ["Dio.h", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_GetVersionInfo", "Dio_MaskedWritePort", "Dio_PortLevelType", "Dio_PortType", "Dio_ChannelGroupType", "Std_VersionInfoType"]
- `anchors`: ["Returns Dio_PortLevelType", "2.7.1.5 void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)", "Function void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)", "2.7.1.6 Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `content_types`: ["api_reference", "table_like", "text"]
- `summary`: API/function reference page covering Dio_HL_ReadChannel, Dio_ReadChannel, Dio_HL_WriteChannel, Dio_HL_FlipChannel, etc.
- `keywords`: ["Dio_Hw.h", "Dio_HL_ReadChannel", "Dio_ReadChannel", "Dio_HL_WriteChannel", "Dio_HL_FlipChannel", "Dio_FLipChannel", "Dio_HL_ReadPort", "Dio_ReadPort", "Dio_HL_WritePort", "Dio_Hw"]
- `anchors`: ["2.8 Hardware Functions", "2.8.1 Functions in Dio_Hw.h", "2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)", "Function Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `content_types`: ["api_reference", "table_like", "text"]
- `summary`: API/function reference page covering Dio_WritePort, Dio_HL_ReadChannelGroup, Dio_ReadChannelGroup, Dio_HL_WriteChannelGroup, etc.
- `keywords`: ["Dio_Hw.h", "Dio_WritePort", "Dio_HL_ReadChannelGroup", "Dio_ReadChannelGroup", "Dio_HL_WriteChannelGroup", "Dio_WriteChannelGroup", "Dio_HL_ValidatePinAuth", "Dio_HL_ValidatePortAuth", "Dio_PortLevelType", "Dio_ChannelGroupType"]
- `anchors`: ["Referenced By Dio_WritePort()", "2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)", "Function Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)", "Returns Dio_PortLevelType"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `content_types`: ["api_reference", "table_like", "text"]
- `summary`: API/function reference page covering Dio_HWA_ReadPortDataInput, Dio_HL_ReadChannel, Dio_HL_ReadPort, Dio_HL_ReadChannelGroup, etc.
- `keywords`: ["Dio_RegOps.h", "Dio_HWA_ReadPortDataInput", "Dio_HL_ReadChannel", "Dio_HL_ReadPort", "Dio_HL_ReadChannelGroup", "Dio_HWA_ClearPinOutput", "Dio_HL_WriteChannel", "Dio_HWA_SetPinDataOutput", "Dio_HWA_TogglePin", "Dio_HWA_ReadPortDataOutput"]
- `anchors`: ["2.9 Peripheral Functions", "2.9.1 Functions in Dio_RegOps.h", "2.9.1.1 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)", "Function LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)"]
- `quality_flags`: ["table_like_content_cell_grid_not_rebuilt"]

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `content_types`: ["api_reference", "diagram", "image", "table_like", "text"]
- `summary`: API/function reference page covering Dio_HWA_SetPortDataOutput, Dio_HL_WritePort, Dio_HWA_SetPortOutput, Dio_HL_WriteChannelGroup, etc.
- `keywords`: ["Dio_HWA_SetPortDataOutput", "Dio_HL_WritePort", "Dio_HWA_SetPortOutput", "Dio_HL_WriteChannelGroup", "Dio_HWA_ClearPortOutput", "LOCAL_INLINE", "GPIO_Type", "DIO", "Digital I/O", "GPIO"]
- `anchors`: ["2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)", "Function LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)", "Referenced By Dio_HL_WritePort()", "2.9.1.7 LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0017
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2`
- `content_types`: ["image", "text"]
- `summary`: Visual/diagram page in Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2; use image and anchor indexes for source-PDF verification.
- `keywords`: ["DIO", "Digital I/O", "FC7xxx", "Digital", "Software", "Design", "API", "Sequence", "Diagram"]
- `anchors`: ["2.10.2 Read Value from Digital I/O - 2", "2.10.3 Write Value to Digital I/O - 1", "2.10.4 Write Value to Digital I/O - 2"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification"]

### SEG-0018
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DioConfig.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1 Container Inclusion Relation", "3.2 Containers and Variables", "3.2.1 IMPLEMENTATION_CONFIG_VARIANT"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0019
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DioPort, DioPortId.
- `keywords`: ["DIO", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Container", "TAB", "individual", "consisting"]
- `anchors`: ["3.2.2.1 DioPort", "3.2.2.1.1 DioPort", "3.2.2.1.2 DioPortId", "per configuration set."]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0020
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering Dio, DioChannel, DioChannelId.
- `keywords`: ["STD_HIGH", "STD_LOW", "AUTOSAR_ECUC", "DIO", "DioChannel", "FC7xxx", "Properties", "Property", "Variable", "Integer"]
- `anchors`: ["2. The selected Port must have a valid Pin (Dio.ValidPortPins cannot be", "0 in the resourse file).", "3.2.2.1.3 DioChannel", "3.2.2.1.4 DioChannel"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0021
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DioChannelGroup, DioChannelGroupIdentification, Dio_ChannelGroupType, Dio, DioPortBitNumber.
- `keywords`: ["Dio_ChannelGroupType", "AUTOSAR_ECUC", "DIO", "DioChannel", "DioPort", "DioChannelGroup", "FC7xxx", "Screenshot", "Properties", "Property"]
- `anchors`: ["3.2.2.1.6 DioChannelGroup", "3.2.2.1.7 DioChannelGroup", "3.2.2.1.8 DioChannelGroupIdentification", "Dio_ChannelGroupType. This data structure contains channel group information. This parameter"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0022
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DioPortOffset, DioPortMask, Dio, DioGeneral, DioDevErrorDetect.
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchors`: ["3.2.2.1.10 DioPortOffset", "Origin AUTOSAR_ECUC", "3.2.2.1.11 DioPortMask", "Origin AUTOSAR_ECUC"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0023
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page covering DioVersionInfoApi, Dio_GetVersionInfo, DioFlipChannelApi, Dio_FlipChannel, DioMulticoreSupport, etc.
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "DIO", "FC7xxx", "Origin", "SymbolicNameValue", "Default", "DioVersionInfoApi", "Variable"]
- `anchors`: ["Origin AUTOSAR_ECUC", "3.2.3.2 DioVersionInfoApi", "Description Adds/removes the service Dio_GetVersionInfo() from the code.", "Origin AUTOSAR_ECUC"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0024
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page with properties, values and origins.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "ArReleaseMajorVersion", "Variable", "version", "number", "AUTOSAR", "specification", "appropriate"]
- `anchors`: ["3.2.4.1 ArReleaseMajorVersion", "Type Variable: Integer_Label", "3.2.4.2 ArReleaseMinorVersion", "Type Variable: Integer_Label"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0025
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `content_types`: ["configuration", "image", "table_like", "text"]
- `summary`: Tresos/ECUC configuration item page with properties, values and origins.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "specific", "Screenshot", "Properties", "Property", "Variable", "Origin", "SymbolicNameValue"]
- `anchors`: ["Type Variable: Integer_Label", "3.2.4.6 SwPatchVersion", "Type Variable: Integer_Label", "3.2.4.7 ModuleId"]
- `quality_flags`: ["visual_content_requires_source_pdf_verification", "table_like_content_cell_grid_not_rebuilt"]

### SEG-0026
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps`
- `content_types`: ["text"]
- `summary`: Chapter 4 Configuration Guides 4.1 DIO Usage Common Steps
- `keywords`: ["Dio_Cfg.h", "Dio_ReadPort", "Dio_WritePort", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_Cfg", "DIO"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1 DIO Usage Common Steps", "In order to use Dio port APIs (Dio_ReadPort(), Dio_WritePort() ) on the Port you need. Here are some suggested", "1) Ensure which port you want to use (e. g. PORT B)."]
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
- `caption`: `Revision History`
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `bbox`: [36.0, 82.4, 118.1, 95.4]
- `table_type`: `revision_history`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: Revision history table listing document revision, date and changes.
- `anchor`: `Revision History`
- `confidence`: `0.93`
- `quality_flags`: ["generated_table_like_index", "no_formal_table_number"]

### TBL-0003-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0003-002`
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

### TBL-0006-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-001`
- `caption`: `Rejected Requirement SWS_Dio_00083`
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `table_type`: `rejected_requirement`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Rejected AUTOSAR requirement table-like panel with description and rejection reason.
- `anchor`: `Rejected Requirement SWS_Dio_00083`
- `confidence`: `0.88`
- `quality_flags`: ["rejected_requirement_panel", "cell_grid_not_rebuilt"]

### TBL-0006-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-002`
- `caption`: `Rejected Requirement SWS_Dio_00084`
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `table_type`: `rejected_requirement`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Rejected AUTOSAR requirement table-like panel with description and rejection reason.
- `anchor`: `Rejected Requirement SWS_Dio_00084`
- `confidence`: `0.88`
- `quality_flags`: ["rejected_requirement_panel", "cell_grid_not_rebuilt"]

### TBL-0006-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-003`
- `caption`: `Rejected Requirement SWS_Dio_00104`
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `table_type`: `rejected_requirement`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Rejected AUTOSAR requirement table-like panel with description and rejection reason.
- `anchor`: `Rejected Requirement SWS_Dio_00104`
- `confidence`: `0.88`
- `quality_flags`: ["rejected_requirement_panel", "cell_grid_not_rebuilt"]

### TBL-0006-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0006-004`
- `caption`: `Rejected Requirement SWS_Dio_00105`
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: [0.0, 0.0, 595.3, 841.9]
- `table_type`: `rejected_requirement`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: Rejected AUTOSAR requirement table-like panel with description and rejection reason.
- `anchor`: `Rejected Requirement SWS_Dio_00105`
- `confidence`: `0.88`
- `quality_flags`: ["rejected_requirement_panel", "cell_grid_not_rebuilt"]

### TBL-0007-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-001`
- `caption`: `Macro definitions including DIO_E_PARAM_INVALID_CHANNEL_ID, DIO_E_PARAM_CONFIG, DIO_E_PARAM_INVALID_PORT_ID, DIO_E_PARAM_INVALID_GROUP_ID, DIO_E_PARAM_POINTER`
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h`
- `bbox`: [107.5, 81.2, 280.0, 93.0]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DIO_E_PARAM_INVALID_CHANNEL_ID`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0008-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0008-001`
- `caption`: `Macro definitions including DIO_INSTANCE_ID, DIO_CHECK_PORT_CHANNEL_VALID, DIO_AR_RELEASE_MAJOR_VERSION, DIO_AR_RELEASE_MINOR_VERSION, DIO_AR_RELEASE_REVISION_VERSION`
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h`
- `bbox`: [107.5, 59.7, 190.6, 71.5]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DIO_INSTANCE_ID`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0009-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-001`
- `caption`: `Macro definitions including DIO_FLIP_CHANNEL_API, DIO_MASKED_WRITE_PORT_API, DIO_NUM_PORTS_U16, DIO_NUM_CHANNELS_PER_PORT_U16, DIO_NUM_CHANNELS_U16`
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h`
- `bbox`: [107.5, 38.4, 217.1, 50.2]
- `table_type`: `macro_list`
- `key_fields`: ["Macro", "Value", "Description"]
- `summary`: Macro definition list/table-like block.
- `anchor`: `DIO_FLIP_CHANNEL_API`
- `confidence`: `0.72`
- `quality_flags`: ["macro_list_table_like"]

### TBL-0010-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0010-001`
- `caption`: `Structure field table-like content on page 10`
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType`
- `bbox`: [36.0, 295.9, 85.8, 307.7]
- `table_type`: `structure`
- `key_fields`: ["Structure", "Description", "Data Fields"]
- `summary`: Structure or typedef table-like block.
- `anchor`: `Data Fields`
- `confidence`: `0.74`
- `quality_flags`: ["structure_table_like", "cell_grid_not_rebuilt"]

### TBL-0011-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-001`
- `caption`: `API/function block Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 264.1, 393.3, 275.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0011-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-002`
- `caption`: `API/function block void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 403.0, 473.8, 414.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0011-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-003`
- `caption`: `API/function block Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 556.0, 387.0, 567.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0011-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-004`
- `caption`: `API/function block Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 716.3, 360.7, 728.1]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0011-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-005`
- `caption`: `API/function block 2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 264.1, 65.8, 275.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0011-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-006`
- `caption`: `API/function block 2.7.1.2 void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 403.0, 65.8, 414.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.2 void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0011-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-007`
- `caption`: `API/function block 2.7.1.3 Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 556.0, 65.8, 567.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.3 Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0011-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-008`
- `caption`: `API/function block 2.7.1.4 Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)`
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 716.3, 65.8, 728.1]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.4 Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0012-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-001`
- `caption`: `API/function block void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 108.1, 441.5, 119.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0012-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-002`
- `caption`: `API/function block Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 264.5, 515.8, 276.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0012-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-003`
- `caption`: `API/function block void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, const`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 404.7, 108.1, 416.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, const`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0012-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-004`
- `caption`: `API/function block void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 591.5, 357.1, 603.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0012-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-005`
- `caption`: `API/function block void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [85.7, 708.5, 533.9, 720.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0012-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-006`
- `caption`: `API/function block 2.7.1.5 void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 108.1, 65.8, 119.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.5 void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0012-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-007`
- `caption`: `API/function block 2.7.1.6 Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 264.5, 65.8, 276.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.6 Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0012-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-008`
- `caption`: `API/function block 2.7.1.7 void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, const`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 404.7, 65.8, 416.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.7 void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, const`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0012-009
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-009`
- `caption`: `API/function block 2.7.1.8 void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 591.5, 65.8, 603.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.8 void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0012-010
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-010`
- `caption`: `API/function block 2.7.1.9 void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask)`
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [36.0, 708.5, 65.8, 720.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.7.1.9 void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-001`
- `caption`: `API/function block Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 188.9, 426.5, 200.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0013-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-002`
- `caption`: `API/function block void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId, const Dio_LevelType u8Level)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 321.8, 518.5, 333.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId, const Dio_LevelType u8Level)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0013-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-003`
- `caption`: `API/function block Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 454.9, 420.2, 466.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0013-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-004`
- `caption`: `API/function block Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 587.9, 388.6, 599.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0013-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-005`
- `caption`: `API/function block void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 720.9, 486.2, 732.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0013-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-006`
- `caption`: `API/function block 2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 188.9, 65.8, 200.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-007`
- `caption`: `API/function block Referenced By Dio_ReadChannel()`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 284.5, 103.9, 296.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_ReadChannel()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-008`
- `caption`: `API/function block 2.8.1.2 void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId, const Dio_LevelType u8Level)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 321.8, 65.8, 333.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.2 void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId, const Dio_LevelType u8Level)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-009
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-009`
- `caption`: `API/function block 2.8.1.3 Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 454.9, 65.8, 466.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.3 Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-010
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-010`
- `caption`: `API/function block Referenced By Dio_FLipChannel()`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 550.6, 103.9, 562.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_FLipChannel()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-011
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-011`
- `caption`: `API/function block 2.8.1.4 Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 587.9, 65.8, 599.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.4 Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-012
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-012`
- `caption`: `API/function block Referenced By Dio_ReadPort()`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 683.6, 103.9, 695.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_ReadPort()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0013-013
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-013`
- `caption`: `API/function block 2.8.1.5 void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level)`
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 720.9, 65.8, 732.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.5 void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-001`
- `caption`: `API/function block Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 124.1, 538.4, 135.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0014-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-002`
- `caption`: `API/function block void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr, const`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 257.0, 502.0, 268.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr, const`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0014-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-003`
- `caption`: `API/function block Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 436.9, 226.1, 448.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0014-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-004`
- `caption`: `API/function block Dio_HL_ValidatePortAuth (const Dio_PortType u8PortId, const Dio_PortLevelType u32Mask)`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [85.7, 616.7, 501.5, 628.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Dio_HL_ValidatePortAuth (const Dio_PortType u8PortId, const Dio_PortLevelType u32Mask)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0014-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-005`
- `caption`: `API/function block Referenced By Dio_WritePort()`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 86.6, 103.9, 98.4]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_WritePort()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-006`
- `caption`: `API/function block 2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 124.1, 65.8, 135.9]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-007`
- `caption`: `API/function block Referenced By Dio_ReadChannelGroup()`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 219.7, 103.9, 231.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_ReadChannelGroup()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-008`
- `caption`: `API/function block 2.8.1.7 void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr, const`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 257.0, 65.8, 268.8]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.7 void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr, const`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-009
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-009`
- `caption`: `API/function block Referenced By Dio_WriteChannelGroup()`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 399.5, 103.9, 411.3]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_WriteChannelGroup()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-010
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-010`
- `caption`: `API/function block 2.8.1.8 Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 436.9, 65.8, 448.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.8 Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0014-011
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-011`
- `caption`: `API/function block 2.8.1.9 Dio_HL_ValidatePortAuth (const Dio_PortType u8PortId, const Dio_PortLevelType u32Mask)`
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h`
- `bbox`: [36.0, 616.7, 65.8, 628.5]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.8.1.9 Dio_HL_ValidatePortAuth (const Dio_PortType u8PortId, const Dio_PortLevelType u32Mask)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-001`
- `caption`: `API/function block LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [85.7, 87.2, 466.9, 99.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0015-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-002`
- `caption`: `API/function block LOCAL_INLINE void Dio_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [85.7, 220.2, 441.6, 232.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE void Dio_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0015-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-003`
- `caption`: `API/function block LOCAL_INLINE void Dio_HWA_SetPinDataOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [85.7, 369.2, 454.3, 381.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE void Dio_HWA_SetPinDataOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0015-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-004`
- `caption`: `API/function block LOCAL_INLINE void Dio_HWA_TogglePin(GPIO_Type *pGpio, uint8 u8Pin)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [85.7, 518.2, 417.7, 530.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE void Dio_HWA_TogglePin(GPIO_Type *pGpio, uint8 u8Pin)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0015-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-005`
- `caption`: `API/function block LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataOutput(GPIO_Type *pGpio)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [85.7, 651.2, 474.8, 663.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataOutput(GPIO_Type *pGpio)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0015-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-006`
- `caption`: `API/function block 2.9.1.1 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 87.2, 65.8, 99.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.1 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-007`
- `caption`: `API/function block Referenced By Dio_HL_ReadChannel(),Dio_HL_ReadPort(), Dio_HL_ReadChannelGroup()`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 182.9, 103.9, 194.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_HL_ReadChannel(),Dio_HL_ReadPort(), Dio_HL_ReadChannelGroup()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-008`
- `caption`: `API/function block 2.9.1.2 LOCAL_INLINE void Dio_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 220.2, 65.8, 232.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.2 LOCAL_INLINE void Dio_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-009
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-009`
- `caption`: `API/function block Referenced By Dio_HL_WriteChannel()`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 331.8, 103.9, 343.6]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_HL_WriteChannel()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-010
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-010`
- `caption`: `API/function block 2.9.1.3 LOCAL_INLINE void Dio_HWA_SetPinDataOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 369.2, 65.8, 381.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.3 LOCAL_INLINE void Dio_HWA_SetPinDataOutput(GPIO_Type *pGpio, uint8 u8Pin)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-011
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-011`
- `caption`: `API/function block 2.9.1.4 LOCAL_INLINE void Dio_HWA_TogglePin(GPIO_Type *pGpio, uint8 u8Pin)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 518.2, 65.8, 530.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.4 LOCAL_INLINE void Dio_HWA_TogglePin(GPIO_Type *pGpio, uint8 u8Pin)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0015-012
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0015-012`
- `caption`: `API/function block 2.9.1.5 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataOutput(GPIO_Type *pGpio)`
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h`
- `bbox`: [36.0, 651.2, 65.8, 663.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.5 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataOutput(GPIO_Type *pGpio)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0016-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-001`
- `caption`: `API/function block LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [85.7, 38.4, 474.7, 50.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0016-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-002`
- `caption`: `API/function block LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [85.7, 187.3, 453.7, 199.1]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0016-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-003`
- `caption`: `API/function block LOCAL_INLINE void Dio_HWA_ClearPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [85.7, 336.2, 462.2, 348.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns", "Referenced By"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `LOCAL_INLINE void Dio_HWA_ClearPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.79`
- `quality_flags`: ["api_table_like", "generated_from_function_heading"]

### TBL-0016-004
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-004`
- `caption`: `API/function block 2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [36.0, 38.4, 65.8, 50.2]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0016-005
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-005`
- `caption`: `API/function block Referenced By Dio_HL_WritePort()`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [36.0, 149.9, 103.9, 161.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_HL_WritePort()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0016-006
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-006`
- `caption`: `API/function block 2.9.1.7 LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [36.0, 187.3, 65.8, 199.1]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.7 LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0016-007
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-007`
- `caption`: `API/function block Referenced By Dio_HL_WriteChannelGroup()`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [36.0, 298.9, 103.9, 310.7]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `Referenced By Dio_HL_WriteChannelGroup()`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0016-008
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0016-008`
- `caption`: `API/function block 2.9.1.8 LOCAL_INLINE void Dio_HWA_ClearPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [36.0, 336.2, 65.8, 348.0]
- `table_type`: `api_reference`
- `key_fields`: ["Function", "Description", "Parameters", "Returns"]
- `summary`: API/function documentation table-like panel with description, parameters, returns and references.
- `anchor`: `2.9.1.8 LOCAL_INLINE void Dio_HWA_ClearPortOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.73`
- `quality_flags`: ["api_table_like", "line_based_detection", "cell_grid_not_rebuilt"]

### TBL-0018-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0018-001`
- `caption`: `Configuration item DioConfig`
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [78.6, 717.3, 132.1, 731.2]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioConfig`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0020-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0020-001`
- `caption`: `Configuration item DioChannelId`
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [92.7, 561.3, 153.9, 573.1]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioChannelId`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0021-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-001`
- `caption`: `Configuration item DioChannelGroupIdentification`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [92.7, 478.0, 234.0, 489.8]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioChannelGroupIdentification`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0021-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0021-002`
- `caption`: `Configuration item DioPortBitNumber`
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [92.7, 737.6, 177.7, 749.4]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioPortBitNumber`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0022-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-001`
- `caption`: `Configuration item DioPortOffset`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [92.7, 156.1, 155.8, 167.9]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioPortOffset`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0022-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-002`
- `caption`: `Configuration item DioPortMask`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [170.6, 203.4, 226.4, 215.2]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioPortMask`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0022-003
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0022-003`
- `caption`: `Configuration item DioGeneral`
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [78.6, 538.3, 137.8, 552.1]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioGeneral`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0023-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-001`
- `caption`: `Configuration item DioMulticoreSupport`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [85.7, 447.3, 181.8, 459.1]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `DioMulticoreSupport`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0023-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0023-002`
- `caption`: `Configuration item CommonPublishedInformation`
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [78.6, 617.0, 242.5, 630.9]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `CommonPublishedInformation`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0024-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0024-001`
- `caption`: `Configuration properties on page 24`
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [36.0, 123.6, 82.8, 135.4]
- `table_type`: `configuration`
- `key_fields`: ["Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `Properties`
- `confidence`: `0.7`
- `quality_flags`: ["configuration_table_like", "cell_grid_not_rebuilt"]

### TBL-0025-001
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-001`
- `caption`: `Configuration item ModuleId`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [85.7, 352.2, 129.6, 364.0]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `ModuleId`
- `confidence`: `0.74`
- `quality_flags`: ["configuration_table_like", "screenshot_or_property_grid_not_rebuilt"]

### TBL-0025-002
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0025-002`
- `caption`: `Configuration item VendorId`
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [85.7, 517.1, 128.0, 528.9]
- `table_type`: `configuration`
- `key_fields`: ["Variable", "Description", "Property", "Value", "Type", "Default", "Origin"]
- `summary`: Tresos/ECUC configuration item table-like panel with property metadata and defaults.
- `anchor`: `VendorId`
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
- `keywords`: ["Dio.h", "Dio_version.h", "Dio_Cfg.h", "Dio_Hw_Types.h", "Dio_Hw.h", "Dio_RegOps.h", "Dio_version", "Dio_Cfg", "Dio_Hw_Types", "Dio_ChannelGroupType"]
- `anchor`: `Table of Contents`
- `confidence`: `0.66`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0006-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0006-001`
- `caption`: `Generated figure: DIO file structure diagram`
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Software Design / 2.1 Rejected Requirements`
- `bbox`: [87.5, 584.2, 507.8, 745.1]
- `image_type`: `dependency_diagram`
- `semantic_description`: File structure/dependency diagram for the DIO driver source and header files.
- `keywords`: ["SWS_Dio_00083", "SWS_Dio_00084", "SWS_Dio_00104", "SWS_Dio_00103", "SWS_Dio_00005", "SWS_Dio_00118", "SWS_Dio_00026", "SWS_Dio_00105", "Dio_PortType", "Dio_ReadPort"]
- `anchor`: `Chapter 2 Software Design`
- `confidence`: `0.86`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0010-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0010-001`
- `caption`: `Generated figure: image block on page 10`
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType`
- `bbox`: [112.2, 459.0, 340.9, 602.8]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 10 within Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType.
- `keywords`: ["Dio_ChannelType", "Dio_PortLevelType", "Dio_LevelType", "Dio_ChannelGroupType", "Dio_PortType", "Dio_ConfigType", "GPIO_Type", "DIO", "GPIO", "FC7xxx"]
- `anchor`: `• typedef uint16 Dio_ChannelType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0011-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0011-001`
- `caption`: `Generated figure: image block on page 11`
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 310.0, 338.8, 331.3]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 11 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_LevelType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_PortType", "DIO"]
- `anchor`: `2.7 API Functions`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0011-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0011-002`
- `caption`: `Generated figure: image block on page 11`
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 448.9, 333.8, 468.2]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 11 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_LevelType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_PortType", "DIO"]
- `anchor`: `2.7 API Functions`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0011-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0011-003`
- `caption`: `Generated figure: image block on page 11`
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.3, 617.3, 339.0, 640.7]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 11 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_LevelType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_PortType", "DIO"]
- `anchor`: `2.7 API Functions`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0011-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0011-004`
- `caption`: `Generated figure: image block on page 11`
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 762.2, 310.5, 783.4]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 11 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_ReadChannel", "Dio_WriteChannel", "Dio_FlipChannel", "Dio_ReadPort", "Dio_LevelType", "Dio_ChannelType", "Dio_PortLevelType", "Dio_PortType", "DIO"]
- `anchor`: `2.7 API Functions`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0012-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0012-001`
- `caption`: `Generated figure: image block on page 12`
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 154.1, 310.5, 177.0]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 12 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_GetVersionInfo", "Dio_MaskedWritePort", "Dio_PortLevelType", "Dio_PortType", "Dio_ChannelGroupType", "Std_VersionInfoType"]
- `anchor`: `Returns Dio_PortLevelType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0012-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0012-002`
- `caption`: `Generated figure: image block on page 12`
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 310.5, 395.6, 332.3]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 12 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_GetVersionInfo", "Dio_MaskedWritePort", "Dio_PortLevelType", "Dio_PortType", "Dio_ChannelGroupType", "Std_VersionInfoType"]
- `anchor`: `Returns Dio_PortLevelType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0012-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0012-003`
- `caption`: `Generated figure: image block on page 12`
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 481.4, 395.5, 503.6]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 12 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_GetVersionInfo", "Dio_MaskedWritePort", "Dio_PortLevelType", "Dio_PortType", "Dio_ChannelGroupType", "Std_VersionInfoType"]
- `anchor`: `Returns Dio_PortLevelType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0012-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0012-004`
- `caption`: `Generated figure: image block on page 12`
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h`
- `bbox`: [112.2, 754.5, 340.8, 777.8]
- `image_type`: `embedded_image`
- `semantic_description`: Embedded image block on physical page 12 within Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h.
- `keywords`: ["Dio.h", "Dio_WritePort", "Dio_ReadChannelGroup", "Dio_WriteChannelGroup", "Dio_GetVersionInfo", "Dio_MaskedWritePort", "Dio_PortLevelType", "Dio_PortType", "Dio_ChannelGroupType", "Std_VersionInfoType"]
- `anchor`: `Returns Dio_PortLevelType`
- `confidence`: `0.72`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0016-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0016-001`
- `caption`: `Generated figure: DIO API sequence diagram`
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1`
- `bbox`: [36.0, 526.2, 489.5, 709.1]
- `image_type`: `sequence_diagram`
- `semantic_description`: API sequence diagram or call-flow graphic in the DIO user manual.
- `keywords`: ["Dio_HWA_SetPortDataOutput", "Dio_HL_WritePort", "Dio_HWA_SetPortOutput", "Dio_HL_WriteChannelGroup", "Dio_HWA_ClearPortOutput", "LOCAL_INLINE", "GPIO_Type", "DIO", "Digital I/O", "GPIO"]
- `anchor`: `2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)`
- `confidence`: `0.82`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0017-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0017-001`
- `caption`: `Generated figure: DIO API sequence diagram`
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2`
- `bbox`: [70.9, 54.5, 524.4, 219.2]
- `image_type`: `sequence_diagram`
- `semantic_description`: API sequence diagram or call-flow graphic in the DIO user manual.
- `keywords`: ["DIO", "Digital I/O", "FC7xxx", "Digital", "API", "sequence", "diagram", "graphic"]
- `anchor`: `2.10.2 Read Value from Digital I/O - 2`
- `confidence`: `0.82`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0017-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0017-002`
- `caption`: `Generated figure: DIO API sequence diagram`
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2`
- `bbox`: [36.0, 243.5, 559.3, 374.8]
- `image_type`: `sequence_diagram`
- `semantic_description`: API sequence diagram or call-flow graphic in the DIO user manual.
- `keywords`: ["DIO", "Digital I/O", "FC7xxx", "Digital", "API", "sequence", "diagram", "graphic"]
- `anchor`: `2.10.2 Read Value from Digital I/O - 2`
- `confidence`: `0.82`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0017-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0017-003`
- `caption`: `Generated figure: DIO API sequence diagram`
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.2 Read Value from Digital I/O - 2`
- `bbox`: [50.2, 398.8, 573.5, 561.9]
- `image_type`: `sequence_diagram`
- `semantic_description`: API sequence diagram or call-flow graphic in the DIO user manual.
- `keywords`: ["DIO", "Digital I/O", "FC7xxx", "Digital", "API", "sequence", "diagram", "graphic"]
- `anchor`: `2.10.2 Read Value from Digital I/O - 2`
- `confidence`: `0.82`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0018-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0018-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [95.2, 138.0, 499.7, 459.5]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables"]
- `anchor`: `Chapter 3 Tresos Configuration Items`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0018-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0018-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`
- `bbox`: [112.2, 562.2, 423.3, 582.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT", "DIO", "DIO module", "FC7xxx", "Tresos", "Container", "Inclusion", "Relation", "Containers", "Variables"]
- `anchor`: `Chapter 3 Tresos Configuration Items`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0019-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0019-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 52.9, 344.4, 122.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["DIO", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Container", "TAB", "individual", "consisting"]
- `anchor`: `3.2.2.1 DioPort`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0019-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0019-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 239.7, 414.0, 451.5]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["DIO", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Container", "TAB", "individual", "consisting"]
- `anchor`: `3.2.2.1 DioPort`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0019-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0019-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 569.1, 395.5, 618.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["DIO", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Container", "TAB", "individual", "consisting"]
- `anchor`: `3.2.2.1 DioPort`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0019-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0019-004`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 765.9, 438.0, 788.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["DIO", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Container", "TAB", "individual", "consisting"]
- `anchor`: `3.2.2.1 DioPort`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0020-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0020-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 232.7, 486.6, 334.1]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["STD_HIGH", "STD_LOW", "AUTOSAR_ECUC", "DIO", "DioChannel", "FC7xxx", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `2. The selected Port must have a valid Pin (Dio.ValidPortPins cannot be`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0020-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0020-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 467.2, 339.1, 505.6]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["STD_HIGH", "STD_LOW", "AUTOSAR_ECUC", "DIO", "DioChannel", "FC7xxx", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `2. The selected Port must have a valid Pin (Dio.ValidPortPins cannot be`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0020-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0020-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 607.2, 537.8, 624.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["STD_HIGH", "STD_LOW", "AUTOSAR_ECUC", "DIO", "DioChannel", "FC7xxx", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `2. The selected Port must have a valid Pin (Dio.ValidPortPins cannot be`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0021-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0021-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 84.3, 549.6, 212.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_ChannelGroupType", "AUTOSAR_ECUC", "DIO", "DioChannel", "DioPort", "DioChannelGroup", "FC7xxx", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.1.6 DioChannelGroup`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0021-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0021-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 376.1, 373.9, 422.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_ChannelGroupType", "AUTOSAR_ECUC", "DIO", "DioChannel", "DioPort", "DioChannelGroup", "FC7xxx", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.1.6 DioChannelGroup`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0021-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0021-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig`
- `bbox`: [112.2, 616.5, 541.1, 634.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_ChannelGroupType", "AUTOSAR_ECUC", "DIO", "DioChannel", "DioPort", "DioChannelGroup", "FC7xxx", "Screenshot", "Properties", "Property"]
- `anchor`: `3.2.2.1.6 DioChannelGroup`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [112.2, 37.0, 535.3, 52.6]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `3.2.2.1.10 DioPortOffset`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [112.2, 217.5, 542.8, 233.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `3.2.2.1.10 DioPortOffset`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [112.2, 399.0, 549.3, 415.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `3.2.2.1.10 DioPortOffset`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-004`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [112.2, 586.6, 416.7, 631.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `3.2.2.1.10 DioPortOffset`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0022-005
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0022-005`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral`
- `bbox`: [112.2, 733.0, 342.7, 749.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["AUTOSAR_ECUC", "DIO", "DIO module", "DioPort", "FC7xxx", "Screenshot", "Properties", "Property", "Variable", "Integer"]
- `anchor`: `3.2.2.1.10 DioPortOffset`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0023-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0023-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 154.0, 359.9, 171.0]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "DIO", "FC7xxx", "Origin", "SymbolicNameValue", "Default", "DioVersionInfoApi", "Variable"]
- `anchor`: `Origin AUTOSAR_ECUC`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0023-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0023-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 323.6, 310.2, 339.8]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "DIO", "FC7xxx", "Origin", "SymbolicNameValue", "Default", "DioVersionInfoApi", "Variable"]
- `anchor`: `Origin AUTOSAR_ECUC`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0023-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0023-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 493.1, 308.3, 512.9]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "DIO", "FC7xxx", "Origin", "SymbolicNameValue", "Default", "DioVersionInfoApi", "Variable"]
- `anchor`: `Origin AUTOSAR_ECUC`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0023-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0023-004`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 680.7, 395.6, 761.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Dio_GetVersionInfo", "Dio_FlipChannel", "AUTOSAR_ECUC", "DIO", "FC7xxx", "Origin", "SymbolicNameValue", "Default", "DioVersionInfoApi", "Variable"]
- `anchor`: `Origin AUTOSAR_ECUC`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 108.0, 447.8, 121.2]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "ArReleaseMajorVersion", "Variable", "version", "number", "AUTOSAR", "specification", "appropriate"]
- `anchor`: `3.2.4.1 ArReleaseMajorVersion`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 270.6, 501.0, 287.4]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "ArReleaseMajorVersion", "Variable", "version", "number", "AUTOSAR", "specification", "appropriate"]
- `anchor`: `3.2.4.1 ArReleaseMajorVersion`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 436.9, 515.2, 453.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "ArReleaseMajorVersion", "Variable", "version", "number", "AUTOSAR", "specification", "appropriate"]
- `anchor`: `3.2.4.1 ArReleaseMajorVersion`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0024-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0024-004`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 618.5, 499.4, 636.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "ArReleaseMajorVersion", "Variable", "version", "number", "AUTOSAR", "specification", "appropriate"]
- `anchor`: `3.2.4.1 ArReleaseMajorVersion`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-001
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-001`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 53.4, 526.7, 68.4]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "specific", "Screenshot", "Properties", "Property", "Variable", "Origin", "SymbolicNameValue"]
- `anchor`: `Type Variable: Integer_Label`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-002
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-002`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 233.6, 447.3, 248.7]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "specific", "Screenshot", "Properties", "Property", "Variable", "Origin", "SymbolicNameValue"]
- `anchor`: `Type Variable: Integer_Label`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-003
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-003`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 398.6, 508.0, 413.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "specific", "Screenshot", "Properties", "Property", "Variable", "Origin", "SymbolicNameValue"]
- `anchor`: `Type Variable: Integer_Label`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0025-004
- `source_figure_number`: `null`
- `generated_figure_number`: `FIG-0025-004`
- `caption`: `Generated figure: DIO configuration screenshot`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation`
- `bbox`: [112.2, 564.9, 480.2, 578.3]
- `image_type`: `configuration_screenshot`
- `semantic_description`: EB tresos / configuration screenshot or visual property panel for DIO.
- `keywords`: ["Integer_Label", "DIO", "FC7xxx", "specific", "Screenshot", "Properties", "Property", "Variable", "Origin", "SymbolicNameValue"]
- `anchor`: `Type Variable: Integer_Label`
- `confidence`: `0.78`
- `quality_flags`: ["no_formal_figure_number", "semantic_description_from_page_context"]

## 8. Term / API / Config / Requirement Index

### REQ-SWS-DIO-00005
- `name`: `SWS_Dio_00005`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: Furthermore, the requirements SWS_Dio_00005, SWS_Dio_00118 and"]
- `aliases`: ["SWS Dio 00005", "SWS-Dio-00005"]

### REQ-SWS-DIO-00026
- `name`: `SWS_Dio_00026`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: SWS_Dio_00026 are applicable to the Dio_ReadPort function."]
- `aliases`: ["SWS Dio 00026", "SWS-Dio-00026"]

### REQ-SWS-DIO-00083
- `name`: `SWS_Dio_00083`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: Rejected Requirement 1 SWS_Dio_00083"]
- `aliases`: ["SWS Dio 00083", "SWS-Dio-00083"]

### REQ-SWS-DIO-00084
- `name`: `SWS_Dio_00084`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: Rejected Requirement 2 SWS_Dio_00084"]
- `aliases`: ["SWS Dio 00084", "SWS-Dio-00084"]

### REQ-SWS-DIO-00103
- `name`: `SWS_Dio_00103`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: (see [SWS_Dio_00103]), the function shall set the bits corresponding to undefined port pins to"]
- `aliases`: ["SWS Dio 00103", "SWS-Dio-00103"]

### REQ-SWS-DIO-00104
- `name`: `SWS_Dio_00104`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: Rejected Requirement 3 SWS_Dio_00104"]
- `aliases`: ["SWS Dio 00104", "SWS-Dio-00104"]

### REQ-SWS-DIO-00105
- `name`: `SWS_Dio_00105`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: Rejected Requirement 4 SWS_Dio_00105"]
- `aliases`: ["SWS Dio 00105", "SWS-Dio-00105"]

### REQ-SWS-DIO-00118
- `name`: `SWS_Dio_00118`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: AUTOSAR SWS/SRS requirement identifier referenced by this document.
- `anchors`: ["p6: Furthermore, the requirements SWS_Dio_00005, SWS_Dio_00118 and"]
- `aliases`: ["SWS Dio 00118", "SWS-Dio-00118"]

### API-DIO-REGOPS
- `name`: `Dio_RegOps`
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: [3, 15]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p3: 2.9.1 Functions in Dio_RegOps.h ....................................................................................................................................... 15", "p15: 2.9.1 Functions in Dio_RegOps.h"]
- `aliases`: ["Dio RegOps"]

### API-DIO-GETVERSIONINFO
- `name`: `Dio_GetVersionInfo`
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: [8, 12, 23]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p8: Function Dio_GetVersionInfo() enable switch.", "p12: 2.7.1.8 void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)", "p23: Description Adds/removes the service Dio_GetVersionInfo() from the code."]
- `aliases`: ["Dio GetVersionInfo"]

### API-DIO-MASKEDWRITEPORT
- `name`: `Dio_MaskedWritePort`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p12: 2.7.1.9 void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask)"]
- `aliases`: ["Dio MaskedWritePort"]

### API-DIO-READCHANNELGROUP
- `name`: `Dio_ReadChannelGroup`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: [12, 14, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p12: 2.7.1.6 Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)", "p14: Referenced By Dio_ReadChannelGroup()", "p26: In order to use Dio channel group APIs (Dio_ReadChannelGroup(), Dio_WriteChannelGroup() ) on several"]
- `aliases`: ["Dio ReadChannelGroup"]

### API-DIO-WRITECHANNELGROUP
- `name`: `Dio_WriteChannelGroup`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: [12, 14, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p12: 2.7.1.7 void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, const", "p14: Referenced By Dio_WriteChannelGroup()", "p26: In order to use Dio channel group APIs (Dio_ReadChannelGroup(), Dio_WriteChannelGroup() ) on several"]
- `aliases`: ["Dio WriteChannelGroup"]

### API-DIO-FLIPCHANNEL
- `name`: `Dio_FLipChannel`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: Referenced By Dio_FLipChannel()"]
- `aliases`: ["Dio FLipChannel"]

### API-DIO-HL-FLIPCHANNEL
- `name`: `Dio_HL_FlipChannel`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: 2.8.1.3 Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId)", "p15: Referenced By Dio_HL_FlipChannel()"]
- `aliases`: ["Dio HL FlipChannel"]

### API-DIO-HL-READCHANNEL
- `name`: `Dio_HL_ReadChannel`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: 2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)", "p15: Referenced By Dio_HL_ReadChannel(),Dio_HL_ReadPort(), Dio_HL_ReadChannelGroup()"]
- `aliases`: ["Dio HL ReadChannel"]

### API-DIO-HL-READPORT
- `name`: `Dio_HL_ReadPort`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: 2.8.1.4 Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)", "p15: Referenced By Dio_HL_ReadChannel(),Dio_HL_ReadPort(), Dio_HL_ReadChannelGroup()"]
- `aliases`: ["Dio HL ReadPort"]

### API-DIO-HL-WRITECHANNEL
- `name`: `Dio_HL_WriteChannel`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13, 15]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: 2.8.1.2 void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId, const Dio_LevelType u8Level)", "p15: Referenced By Dio_HL_WriteChannel()"]
- `aliases`: ["Dio HL WriteChannel"]

### API-DIO-HL-WRITEPORT
- `name`: `Dio_HL_WritePort`
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: [13, 16]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p13: 2.8.1.5 void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level)", "p16: Referenced By Dio_HL_WritePort()"]
- `aliases`: ["Dio HL WritePort"]

### API-DIO-HL-READCHANNELGROUP
- `name`: `Dio_HL_ReadChannelGroup`
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: [14, 15]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p14: 2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)", "p15: Referenced By Dio_HL_ReadChannel(),Dio_HL_ReadPort(), Dio_HL_ReadChannelGroup()"]
- `aliases`: ["Dio HL ReadChannelGroup"]

### API-DIO-HL-VALIDATEPINAUTH
- `name`: `Dio_HL_ValidatePinAuth`
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p14: 2.8.1.8 Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType"]
- `aliases`: ["Dio HL ValidatePinAuth"]

### API-DIO-HL-VALIDATEPORTAUTH
- `name`: `Dio_HL_ValidatePortAuth`
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p14: 2.8.1.9 Dio_HL_ValidatePortAuth (const Dio_PortType u8PortId, const Dio_PortLevelType u32Mask)"]
- `aliases`: ["Dio HL ValidatePortAuth"]

### API-DIO-HL-WRITECHANNELGROUP
- `name`: `Dio_HL_WriteChannelGroup`
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: [14, 16]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p14: 2.8.1.7 void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr, const", "p16: Referenced By Dio_HL_WriteChannelGroup()"]
- `aliases`: ["Dio HL WriteChannelGroup"]

### API-DIO-HWA-CLEARPINOUTPUT
- `name`: `Dio_HWA_ClearPinOutput`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p15: 2.9.1.2 LOCAL_INLINE void Dio_HWA_ClearPinOutput(GPIO_Type *pGpio, uint8 u8Pin)"]
- `aliases`: ["Dio HWA ClearPinOutput"]

### API-DIO-HWA-READPORTDATAINPUT
- `name`: `Dio_HWA_ReadPortDataInput`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p15: 2.9.1.1 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)"]
- `aliases`: ["Dio HWA ReadPortDataInput"]

### API-DIO-HWA-READPORTDATAOUTPUT
- `name`: `Dio_HWA_ReadPortDataOutput`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p15: 2.9.1.5 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataOutput(GPIO_Type *pGpio)"]
- `aliases`: ["Dio HWA ReadPortDataOutput"]

### API-DIO-HWA-SETPINDATAOUTPUT
- `name`: `Dio_HWA_SetPinDataOutput`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p15: 2.9.1.3 LOCAL_INLINE void Dio_HWA_SetPinDataOutput(GPIO_Type *pGpio, uint8 u8Pin)"]
- `aliases`: ["Dio HWA SetPinDataOutput"]

### API-DIO-HWA-TOGGLEPIN
- `name`: `Dio_HWA_TogglePin`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p15: 2.9.1.4 LOCAL_INLINE void Dio_HWA_TogglePin(GPIO_Type *pGpio, uint8 u8Pin)"]
- `aliases`: ["Dio HWA TogglePin"]

### API-DIO-HWA-CLEARPORTOUTPUT
- `name`: `Dio_HWA_ClearPortOutput`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p16: 2.9.1.8 LOCAL_INLINE void Dio_HWA_ClearPortOutput(GPIO_Type *pGpio, uint32 u32Pins)"]
- `aliases`: ["Dio HWA ClearPortOutput"]

### API-DIO-HWA-SETPORTDATAOUTPUT
- `name`: `Dio_HWA_SetPortDataOutput`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p16: 2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)"]
- `aliases`: ["Dio HWA SetPortDataOutput"]

### API-DIO-HWA-SETPORTOUTPUT
- `name`: `Dio_HWA_SetPortOutput`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: [16]
- `section_paths`: ["Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1"]
- `brief`: DIO API/function entry documented with signature, parameters or return information.
- `anchors`: ["p16: 2.9.1.7 LOCAL_INLINE void Dio_HWA_SetPortOutput(GPIO_Type *pGpio, uint32 u32Pins)"]
- `aliases`: ["Dio HWA SetPortOutput"]

### FUNC-DIO-CFG
- `name`: `Dio_Cfg`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: [3, 8, 26]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p3: 2.3.3 Macros in Dio_Cfg.h ........................................................................................................................................................ 8", "p8: 2.3.3 Macros in Dio_Cfg.h", "p26: 4) Open Dio_Cfg.h file and look inside the \"DEFINES AND MACROS\" section for the symbolic name of the"]
- `aliases`: ["Dio Cfg"]

### FUNC-DIO-HW
- `name`: `Dio_Hw`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: [3, 13]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p3: 2.5.1 Typedefs in Dio_Hw_Types.h ....................................................................................................................................... 9", "p13: 2.8.1 Functions in Dio_Hw.h"]
- `aliases`: ["Dio Hw"]

### FUNC-DIO-VERSION
- `name`: `Dio_version`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: [3, 8]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p3: 2.3.2 Macros in Dio_version.h ................................................................................................................................................ 8", "p8: 2.3.2 Macros in Dio_version.h"]
- `aliases`: ["Dio version"]

### FUNC-AUTOSAR-SWS-DIODRIVER
- `name`: `AUTOSAR_SWS_DIODriver`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p5: 4.6.0. For detailed requirements, refer to the AUTOSAR_SWS_DIODriver."]
- `aliases`: ["AUTOSAR SWS DIODriver"]

### FUNC-DIO-READPORT
- `name`: `Dio_ReadPort`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6, 7, 11, 13, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p6: Description When reading a port that is smaller than the Dio_PortType using the Dio_ReadPort function", "p7: • #define DIO_READPORT_ID ((uint8)0x02)", "p11: 2.7.1.4 Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)", "p13: Referenced By Dio_ReadPort()", "p26: In order to use Dio port APIs (Dio_ReadPort(), Dio_WritePort() ) on the Port you need. Here are some suggested"]
- `aliases`: ["Dio ReadPort"]

### FUNC-DIO-WRITEPORT
- `name`: `Dio_WritePort`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: [6, 7, 12, 14, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p6: Description When writing a port that is smaller than the Dio_PortType using the Dio_WritePort function", "p7: • #define DIO_WRITEPORT_ID ((uint8)0x03)", "p12: 2.7.1.5 void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)", "p14: Referenced By Dio_WritePort()", "p26: In order to use Dio port APIs (Dio_ReadPort(), Dio_WritePort() ) on the Port you need. Here are some suggested"]
- `aliases`: ["Dio WritePort"]

### FUNC-DIO-FLIPCHANNEL
- `name`: `Dio_FlipChannel`
- `type`: `function`
- `primary_page`: `7`
- `physical_pages`: [7, 9, 11, 23, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p7: • #define DIO_FLIPCHANNEL_ID ((uint8)0x11)", "p9: Function Dio_FlipChannel() enable switch.", "p11: 2.7.1.3 Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId)", "p23: Description Adds/removes the service Dio_FlipChannel() from the code.", "p26: In order to use Dio channel APIs (Dio_ReadChannel(), Dio_WriteChannel (),Dio_FlipChannel () ) on the"]
- `aliases`: ["Dio FlipChannel"]

### FUNC-DIO-READCHANNEL
- `name`: `Dio_ReadChannel`
- `type`: `function`
- `primary_page`: `7`
- `physical_pages`: [7, 11, 13, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p7: • #define DIO_READCHANNEL_ID ((uint8)0x00)", "p11: 2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)", "p13: Referenced By Dio_ReadChannel()", "p26: In order to use Dio channel APIs (Dio_ReadChannel(), Dio_WriteChannel (),Dio_FlipChannel () ) on the"]
- `aliases`: ["Dio ReadChannel"]

### FUNC-DIO-WRITECHANNEL
- `name`: `Dio_WriteChannel`
- `type`: `function`
- `primary_page`: `7`
- `physical_pages`: [7, 11, 13, 26]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p7: • #define DIO_WRITECHANNEL_ID ((uint8)0x01)", "p11: 2.7.1.2 void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level)", "p13: Referenced By Dio_WriteChannel", "p26: In order to use Dio channel APIs (Dio_ReadChannel(), Dio_WriteChannel (),Dio_FlipChannel () ) on the"]
- `aliases`: ["Dio WriteChannel"]

### FUNC-DIO-CONFIG
- `name`: `Dio_Config`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p9: • #define s_DioConfigChannels (Dio_Config)"]
- `aliases`: ["Dio Config"]

### FUNC-DIO-PTA11
- `name`: `Dio_PTA11`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p9: • #define DioConf_DioChannel_Dio_PTA11 ((uint16)0x000bU)"]
- `aliases`: ["Dio PTA11"]

### FUNC-DIOCONF-DIOCHANNEL-DIO-PTA11
- `name`: `DioConf_DioChannel_Dio_PTA11`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p9: • #define DioConf_DioChannel_Dio_PTA11 ((uint16)0x000bU)"]
- `aliases`: ["DioConf DioChannel Dio PTA11"]

### FUNC-DIOCONF-DIOPORT-DIOPORT-PTA
- `name`: `DioConf_DioPort_DioPort_PTA`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p9: • #define DioConf_DioPort_DioPort_PTA ((uint8)0x00U)"]
- `aliases`: ["DioConf DioPort DioPort PTA"]

### FUNC-DIOPORT-PTA
- `name`: `DioPort_PTA`
- `type`: `function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p9: • #define DioConf_DioPort_DioPort_PTA ((uint8)0x00U)"]
- `aliases`: ["DioPort PTA"]

### FUNC-INTEGER-LABEL
- `name`: `Integer_Label`
- `type`: `function`
- `primary_page`: `24`
- `physical_pages`: [24, 25]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation"]
- `brief`: DIO internal/helper function or callable symbol.
- `anchors`: ["p24: Type Variable: Integer_Label"]
- `aliases`: ["Integer Label"]

### MACRO-DIO-FLIPCHANNEL-ID
- `name`: `DIO_FLIPCHANNEL_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_FLIPCHANNEL_ID ((uint8)0x11)"]
- `aliases`: ["DIO FLIPCHANNEL ID"]

### MACRO-DIO-GETVERSIONINFO-ID
- `name`: `DIO_GETVERSIONINFO_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_GETVERSIONINFO_ID ((uint8)0x12)"]
- `aliases`: ["DIO GETVERSIONINFO ID"]

### MACRO-DIO-READCHANNEL-ID
- `name`: `DIO_READCHANNEL_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_READCHANNEL_ID ((uint8)0x00)"]
- `aliases`: ["DIO READCHANNEL ID"]

### MACRO-DIO-READCHANNELGROUP-ID
- `name`: `DIO_READCHANNELGROUP_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_READCHANNELGROUP_ID ((uint8)0x04)"]
- `aliases`: ["DIO READCHANNELGROUP ID"]

### MACRO-DIO-READPORT-ID
- `name`: `DIO_READPORT_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_READPORT_ID ((uint8)0x02)"]
- `aliases`: ["DIO READPORT ID"]

### MACRO-DIO-WRITECHANNEL-ID
- `name`: `DIO_WRITECHANNEL_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_WRITECHANNEL_ID ((uint8)0x01)"]
- `aliases`: ["DIO WRITECHANNEL ID"]

### MACRO-DIO-WRITECHANNELGROUP-ID
- `name`: `DIO_WRITECHANNELGROUP_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_WRITECHANNELGROUP_ID ((uint8)0x05)"]
- `aliases`: ["DIO WRITECHANNELGROUP ID"]

### MACRO-DIO-WRITEPORT-ID
- `name`: `DIO_WRITEPORT_ID`
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p7: • #define DIO_WRITEPORT_ID ((uint8)0x03)"]
- `aliases`: ["DIO WRITEPORT ID"]

### MACRO-DIO-AR-RELEASE-MAJOR-VERSION
- `name`: `DIO_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_AR_RELEASE_MAJOR_VERSION 4"]
- `aliases`: ["DIO AR RELEASE MAJOR VERSION"]

### MACRO-DIO-AR-RELEASE-MINOR-VERSION
- `name`: `DIO_AR_RELEASE_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_AR_RELEASE_MINOR_VERSION 6"]
- `aliases`: ["DIO AR RELEASE MINOR VERSION"]

### MACRO-DIO-AR-RELEASE-REVISION-VERSION
- `name`: `DIO_AR_RELEASE_REVISION_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_AR_RELEASE_REVISION_VERSION 0"]
- `aliases`: ["DIO AR RELEASE REVISION VERSION"]

### MACRO-DIO-CFG-AR-RELEASE-MAJOR-VERSION
- `name`: `DIO_CFG_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_AR_RELEASE_MAJOR_VERSION 4"]
- `aliases`: ["DIO CFG AR RELEASE MAJOR VERSION"]

### MACRO-DIO-CFG-AR-RELEASE-MINOR-VERSION
- `name`: `DIO_CFG_AR_RELEASE_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_AR_RELEASE_MINOR_VERSION 6"]
- `aliases`: ["DIO CFG AR RELEASE MINOR VERSION"]

### MACRO-DIO-CFG-AR-RELEASE-REVISION-VERSION
- `name`: `DIO_CFG_AR_RELEASE_REVISION_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_AR_RELEASE_REVISION_VERSION 0"]
- `aliases`: ["DIO CFG AR RELEASE REVISION VERSION"]

### MACRO-DIO-CFG-SW-MAJOR-VERSION
- `name`: `DIO_CFG_SW_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_SW_MAJOR_VERSION 1"]
- `aliases`: ["DIO CFG SW MAJOR VERSION"]

### MACRO-DIO-CFG-SW-MINOR-VERSION
- `name`: `DIO_CFG_SW_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_SW_MINOR_VERSION 1"]
- `aliases`: ["DIO CFG SW MINOR VERSION"]

### MACRO-DIO-CFG-SW-PATCH-VERSION
- `name`: `DIO_CFG_SW_PATCH_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_SW_PATCH_VERSION 0"]
- `aliases`: ["DIO CFG SW PATCH VERSION"]

### MACRO-DIO-CFG-VENDOR-ID
- `name`: `DIO_CFG_VENDOR_ID`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CFG_VENDOR_ID 174"]
- `aliases`: ["DIO CFG VENDOR ID"]

### MACRO-DIO-CHANNEL-MASK-U8
- `name`: `DIO_CHANNEL_MASK_U8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: DIO_PORTID_SHIFT_U8] & (uint32) ((Dio_PortLevelType) 1 << ((ChannelId) & DIO_CHANNEL_MASK_U8)))"]
- `aliases`: ["DIO CHANNEL MASK U8"]

### MACRO-DIO-CHECK-PORT-CHANNEL-VALID
- `name`: `DIO_CHECK_PORT_CHANNEL_VALID`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_CHECK_PORT_CHANNEL_VALID(ChannelId) (u32ValidPortPins[ChannelId >>"]
- `aliases`: ["DIO CHECK PORT CHANNEL VALID"]

### MACRO-DIO-DEV-ERROR-DETECT
- `name`: `DIO_DEV_ERROR_DETECT`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_DEV_ERROR_DETECT (STD_ON)"]
- `aliases`: ["DIO DEV ERROR DETECT"]

### MACRO-DIO-INSTANCE-ID
- `name`: `DIO_INSTANCE_ID`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_INSTANCE_ID ((uint8)0x00)"]
- `aliases`: ["DIO INSTANCE ID"]

### MACRO-DIO-MODULE-ID
- `name`: `DIO_MODULE_ID`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_MODULE_ID 120"]
- `aliases`: ["DIO MODULE ID"]

### MACRO-DIO-PORTID-SHIFT-U8
- `name`: `DIO_PORTID_SHIFT_U8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: DIO_PORTID_SHIFT_U8] & (uint32) ((Dio_PortLevelType) 1 << ((ChannelId) & DIO_CHANNEL_MASK_U8)))"]
- `aliases`: ["DIO PORTID SHIFT U8"]

### MACRO-DIO-SW-MAJOR-VERSION
- `name`: `DIO_SW_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_SW_MAJOR_VERSION 1"]
- `aliases`: ["DIO SW MAJOR VERSION"]

### MACRO-DIO-SW-MINOR-VERSION
- `name`: `DIO_SW_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_SW_MINOR_VERSION 1"]
- `aliases`: ["DIO SW MINOR VERSION"]

### MACRO-DIO-SW-PATCH-VERSION
- `name`: `DIO_SW_PATCH_VERSION`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_SW_PATCH_VERSION 0"]
- `aliases`: ["DIO SW PATCH VERSION"]

### MACRO-DIO-VERSION-INFO-API
- `name`: `DIO_VERSION_INFO_API`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p8: • #define DIO_VERSION_INFO_API (STD_ON)"]
- `aliases`: ["DIO VERSION INFO API"]

### MACRO-DIO-ENABLE-USER-MODE-SUPPORT
- `name`: `DIO_ENABLE_USER_MODE_SUPPORT`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_ENABLE_USER_MODE_SUPPORT (STD_ON)"]
- `aliases`: ["DIO ENABLE USER MODE SUPPORT"]

### MACRO-DIO-FLIP-CHANNEL-API
- `name`: `DIO_FLIP_CHANNEL_API`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_FLIP_CHANNEL_API (STD_ON)"]
- `aliases`: ["DIO FLIP CHANNEL API"]

### MACRO-DIO-MASKED-WRITE-PORT-API
- `name`: `DIO_MASKED_WRITE_PORT_API`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_MASKED_WRITE_PORT_API (STD_ON)"]
- `aliases`: ["DIO MASKED WRITE PORT API"]

### MACRO-DIO-MAX-VALID-OFFSET-U8
- `name`: `DIO_MAX_VALID_OFFSET_U8`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_MAX_VALID_OFFSET_U8 ((uint8)0x1F)"]
- `aliases`: ["DIO MAX VALID OFFSET U8"]

### MACRO-DIO-NUM-CHANNELS-PER-PORT-U16
- `name`: `DIO_NUM_CHANNELS_PER_PORT_U16`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_NUM_CHANNELS_PER_PORT_U16 ((uint16)32)"]
- `aliases`: ["DIO NUM CHANNELS PER PORT U16"]

### MACRO-DIO-NUM-CHANNELS-U16
- `name`: `DIO_NUM_CHANNELS_U16`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_NUM_CHANNELS_U16 ((uint16)(DIO_NUM_PORTS_U16 * DIO_NUM_CHANNELS_PER_PORT_U16))"]
- `aliases`: ["DIO NUM CHANNELS U16"]

### MACRO-DIO-NUM-PORTS-U16
- `name`: `DIO_NUM_PORTS_U16`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_NUM_PORTS_U16 (STD_ON)"]
- `aliases`: ["DIO NUM PORTS U16"]

### MACRO-DIO-PRECOMPILE-SUPPORT
- `name`: `DIO_PRECOMPILE_SUPPORT`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO macro/configuration constant or service/error identifier.
- `anchors`: ["p9: • #define DIO_PRECOMPILE_SUPPORT"]
- `aliases`: ["DIO PRECOMPILE SUPPORT"]

### ERR-DIO-E-PARAM-CONFIG
- `name`: `DIO_E_PARAM_CONFIG`
- `type`: `error_code`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p7: • #define DIO_E_PARAM_CONFIG ((uint8)0x10)"]
- `aliases`: ["DIO E PARAM CONFIG"]

### ERR-DIO-E-PARAM-INVALID-CHANNEL-ID
- `name`: `DIO_E_PARAM_INVALID_CHANNEL_ID`
- `type`: `error_code`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p7: • #define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)0x0A)"]
- `aliases`: ["DIO E PARAM INVALID CHANNEL ID"]

### ERR-DIO-E-PARAM-INVALID-GROUP-ID
- `name`: `DIO_E_PARAM_INVALID_GROUP_ID`
- `type`: `error_code`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p7: • #define DIO_E_PARAM_INVALID_GROUP_ID ((uint8)0x1F)"]
- `aliases`: ["DIO E PARAM INVALID GROUP ID"]

### ERR-DIO-E-PARAM-INVALID-PORT-ID
- `name`: `DIO_E_PARAM_INVALID_PORT_ID`
- `type`: `error_code`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p7: • #define DIO_E_PARAM_INVALID_PORT_ID ((uint8)0x14)"]
- `aliases`: ["DIO E PARAM INVALID PORT ID"]

### ERR-DIO-E-PARAM-LEVEL
- `name`: `DIO_E_PARAM_LEVEL`
- `type`: `error_code`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p7: • #define DIO_E_PARAM_LEVEL ((uint8)0x21)"]
- `aliases`: ["DIO E PARAM LEVEL"]

### ERR-DIO-E-PARAM-POINTER
- `name`: `DIO_E_PARAM_POINTER`
- `type`: `error_code`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: DIO DET/DEM or development-error code.
- `anchors`: ["p7: • #define DIO_E_PARAM_POINTER ((uint8)0x20)"]
- `aliases`: ["DIO E PARAM POINTER"]

### CFG-DIOCONFIG
- `name`: `DioConfig`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: [3, 18]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p3: 3.2.2 DioConfig ....................................................................................................................................................................", "p18: 3.2.2 DioConfig"]
- `aliases`: []

### CFG-DIOGENERAL
- `name`: `DioGeneral`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: [3, 22]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p3: 3.2.3 DioGeneral ...................................................................................................................................................................", "p22: 3.2.3 DioGeneral"]
- `aliases`: []

### CFG-DIOCHANNELID
- `name`: `DioChannelId`
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: [5, 20]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p5: Channel = DioChannelId + DioPortId*32", "p20: 3.2.2.1.5 DioChannelId"]
- `aliases`: []

### CFG-DIOPORTID
- `name`: `DioPortId`
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: [5, 19]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p5: Channel = DioChannelId + DioPortId*32", "p19: 3.2.2.1.2 DioPortId"]
- `aliases`: []

### CFG-DIOPORT
- `name`: `DioPort`
- `type`: `config`
- `primary_page`: `19`
- `physical_pages`: [19, 26]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p19: TAB DioPort", "p26: 2) Go to tab \"DioPort\", add a new Port, the Dio Port Id is the numeric identifier of the port you want to"]
- `aliases`: []

### CFG-DIOCHANNELGROUPIDENTIFICATION
- `name`: `DioChannelGroupIdentification`
- `type`: `config`
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p21: 3.2.2.1.8 DioChannelGroupIdentification"]
- `aliases`: []

### CFG-DIOPORTBITNUMBER
- `name`: `DioPortBitNumber`
- `type`: `config`
- `primary_page`: `21`
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p21: 3.2.2.1.9 DioPortBitNumber"]
- `aliases`: []

### CFG-DIOPORTMASK
- `name`: `DioPortMask`
- `type`: `config`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p22: derived from DioPortMask."]
- `aliases`: []

### CFG-DIOPORTOFFSET
- `name`: `DioPortOffset`
- `type`: `config`
- `primary_page`: `22`
- `physical_pages`: [22]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p22: 3.2.2.1.10 DioPortOffset"]
- `aliases`: []

### CFG-DIOMULTICORESUPPORT
- `name`: `DioMulticoreSupport`
- `type`: `config`
- `primary_page`: `23`
- `physical_pages`: [23]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation"]
- `brief`: DIO configuration item/container or generated configuration symbol.
- `anchors`: ["p23: 3.2.3.4 DioMulticoreSupport"]
- `aliases`: []

### TYPE-DIO-CHANNELGROUPTYPE
- `name`: `Dio_ChannelGroupType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 10, 12, 14, 21]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.1 Dio_ChannelGroupType ............................................................................................................................................. 10", "p10: 2.6.1 Dio_ChannelGroupType", "p12: 2.7.1.6 Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)", "p14: 2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)", "p21: Dio_ChannelGroupType. This data structure contains channel group information. This parameter"]
- `aliases`: ["Dio ChannelGroupType"]

### TYPE-DIO-CONFIGTYPE
- `name`: `Dio_ConfigType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 10]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.2 Dio_ConfigType ...............................................................................................................................................................", "p10: 2.6.2 Dio_ConfigType"]
- `aliases`: ["Dio ConfigType"]

### TYPE-DIO-HW-TYPES
- `name`: `Dio_Hw_Types`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 9]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.5.1 Typedefs in Dio_Hw_Types.h ....................................................................................................................................... 9", "p9: 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `aliases`: ["Dio Hw Types"]

### TYPE-GPIO-TYPE
- `name`: `GPIO_Type`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: [3, 10, 15, 16]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h", "Chapter 2 Software Design / 2.10 API Sequence Diagram / 2.10.1 Read Value from Digital I/O - 1"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p3: 2.6.3 GPIO_Type ....................................................................................................................................................................", "p10: 2.6.3 GPIO_Type", "p15: 2.9.1.1 LOCAL_INLINE Dio_PortLevelType Dio_HWA_ReadPortDataInput(GPIO_Type *pGpio)", "p16: 2.9.1.6 LOCAL_INLINE void Dio_HWA_SetPortDataOutput(GPIO_Type *pGpio, uint32 u32Pins)"]
- `aliases`: ["GPIO Type"]

### TYPE-DIO-PORTTYPE
- `name`: `Dio_PortType`
- `type`: `type`
- `primary_page`: `6`
- `physical_pages`: [6, 9, 10, 11, 12, 13, 14]
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements", "Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p6: Description When reading a port that is smaller than the Dio_PortType using the Dio_ReadPort function", "p9: • typedef uint8 Dio_PortType", "p10: Data Fields • Dio_PortType port", "p11: 2.7.1.4 Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)", "p12: 2.7.1.5 void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level)", "p13: 2.8.1.4 Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)"]
- `aliases`: ["Dio PortType"]

### TYPE-DIO-PORTLEVELTYPE
- `name`: `Dio_PortLevelType`
- `type`: `type`
- `primary_page`: `8`
- `physical_pages`: [8, 10, 11, 12, 13, 14, 15]
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p8: DIO_PORTID_SHIFT_U8] & (uint32) ((Dio_PortLevelType) 1 << ((ChannelId) & DIO_CHANNEL_MASK_U8)))", "p10: • typedef uint32 Dio_PortLevelType", "p11: 2.7.1.4 Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId)", "p12: Returns Dio_PortLevelType", "p13: 2.8.1.4 Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId)", "p14: 2.8.1.6 Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr)"]
- `aliases`: ["Dio PortLevelType"]

### TYPE-STD-VERSIONINFOTYPE
- `name`: `Std_VersionInfoType`
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p12: 2.7.1.8 void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo)"]
- `aliases`: ["Std VersionInfoType"]

### TYPE-STD-RETURNTYPE
- `name`: `Std_ReturnType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: [13, 14]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p13: Returns Std_ReturnType Function return type.", "p14: Returns Std_ReturnType"]
- `aliases`: ["Std ReturnType"]

### TYPE-DIO-CORECONFIGINFOTYPE
- `name`: `Dio_CoreConfigInfoType`
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO C type or AUTOSAR type symbol.
- `anchors`: ["p14: 2.8.1.8 Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType"]
- `aliases`: ["Dio CoreConfigInfoType"]

### STRUCT-DIO-CHANNELTYPE
- `name`: `Dio_ChannelType`
- `type`: `structure`
- `primary_page`: `10`
- `physical_pages`: [10, 11, 13, 14]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO structure/type with documented fields.
- `anchors`: ["p10: • typedef uint16 Dio_ChannelType", "p11: 2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)", "p13: 2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)", "p14: 2.8.1.8 Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,const Dio_CoreConfigInfoType"]
- `aliases`: ["Dio ChannelType"]

### STRUCT-DIO-LEVELTYPE
- `name`: `Dio_LevelType`
- `type`: `structure`
- `primary_page`: `10`
- `physical_pages`: [10, 11, 13]
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: DIO structure/type with documented fields.
- `anchors`: ["p10: • typedef uint8 Dio_LevelType", "p11: 2.7.1.1 Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId)", "p13: 2.8.1.1 Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId)"]
- `aliases`: ["Dio LevelType"]

### FILE-DIO-H
- `name`: `Dio.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 7, 11]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Dio.h"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.1 Macros in Dio.h ..............................................................................................................................................................", "p7: 2.3.1 Macros in Dio.h", "p11: 2.7.1 Functions in Dio.h"]
- `aliases`: []

### FILE-DIO-CFG-H
- `name`: `Dio_Cfg.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 8, 26]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.3 Macros in Dio_Cfg.h ........................................................................................................................................................ 8", "p8: 2.3.3 Macros in Dio_Cfg.h", "p26: 4) Open Dio_Cfg.h file and look inside the \"DEFINES AND MACROS\" section for the symbolic name of the"]
- `aliases`: ["Dio Cfg.h"]

### FILE-DIO-HW-H
- `name`: `Dio_Hw.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 13]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in Dio_Hw.h"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.8.1 Functions in Dio_Hw.h ................................................................................................................................................ 13", "p13: 2.8.1 Functions in Dio_Hw.h"]
- `aliases`: ["Dio Hw.h"]

### FILE-DIO-HW-TYPES-H
- `name`: `Dio_Hw_Types.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 9]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.5.1 Typedefs in Dio_Hw_Types.h ....................................................................................................................................... 9", "p9: 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `aliases`: ["Dio Hw Types.h"]

### FILE-DIO-REGOPS-H
- `name`: `Dio_RegOps.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 15]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.9 Peripheral Functions / 2.9.1 Functions in Dio_RegOps.h"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.9.1 Functions in Dio_RegOps.h ....................................................................................................................................... 15", "p15: 2.9.1 Functions in Dio_RegOps.h"]
- `aliases`: ["Dio RegOps.h"]

### FILE-DIO-VERSION-H
- `name`: `Dio_version.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: [3, 8]
- `section_paths`: ["Table of Contents", "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p3: 2.3.2 Macros in Dio_version.h ................................................................................................................................................ 8", "p8: 2.3.2 Macros in Dio_version.h"]
- `aliases`: ["Dio version.h"]

### FILE-PINOUT-XLSX
- `name`: `Pinout.xlsx`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing"]
- `brief`: Source, header, generated file or referenced document path.
- `anchors`: ["p5: The channel to microcontroller pin mapping can be done by using \"FC7xxx Pinout.xlsx\" from the Reference manual."]
- `aliases`: []

### TERM-DIO
- `name`: `DIO`
- `type`: `module`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]
- `section_paths`: ["Cover", "Revision History", "Table of Contents", "Chapter 1 DIO Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.1 Rejected Requirements", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p1: FC7xxx DIO User Manual"]
- `aliases`: ["Digital I/O", "Digital Input Output", "GPIO"]

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `module`
- `primary_page`: `5`
- `physical_pages`: [5, 18, 20, 21, 22, 23, 24, 25]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p5: The design of this module follows the specifications of the DIO driver specified in AUTOSAR Classic Platform Release", "p18: Description This container contains the configuration parameters and sub containers of the AUTOSAR DIO module.", "p20: Origin AUTOSAR_ECUC", "p24: Description Major version number of AUTOSAR specification on which the appropriate implementation is based.", "p25: Description Vendor ID of the dedicated implementation of this module according to the AUTOSAR vendor list."]
- `aliases`: []

### TERM-ECUC
- `name`: `ECUC`
- `type`: `module`
- `primary_page`: `20`
- `physical_pages`: [20, 21, 22, 23]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation"]
- `brief`: Module, AUTOSAR component, BSW component or protocol term.
- `anchors`: ["p20: Origin AUTOSAR_ECUC"]
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: [3, 4, 23, 26]
- `section_paths`: ["Table of Contents", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 CommonPublishedInformation", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p3: 3.2.4 CommonPublishedInformation ............................................................................................................................... 23", "p4: 4.1 DIO Usage Common Steps ............................................................................................................................................ 26", "p23: 3.2.4 CommonPublishedInformation", "p26: 4.1 DIO Usage Common Steps"]
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 8, 22]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 DioGeneral"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: 4.6.0. For detailed requirements, refer to the AUTOSAR_SWS_DIODriver.", "p8: • #define DIO_DEV_ERROR_DETECT (STD_ON)", "p22: 3.2.3.1 DioDevErrorDetect"]
- `aliases`: []

### TERM-PORT
- `name`: `Port`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 19, 20, 21, 22, 23, 26]
- `section_paths`: ["Chapter 1 DIO Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.1 Rejected Requirements", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Dio.h", "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Dio_version.h", "Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Dio_ChannelGroupType"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p5: ⚫ DIO Ports", "p6: Description If the microcontroller supports the direct read-back of a pin value, the Dio module's read", "p7: • #define DIO_E_PARAM_INVALID_PORT_ID ((uint8)0x14)", "p8: • #define DIO_CHECK_PORT_CHANNEL_VALID(ChannelId) (u32ValidPortPins[ChannelId >>", "p9: • #define DIO_MASKED_WRITE_PORT_API (STD_ON)", "p10: • typedef uint32 Dio_PortLevelType"]
- `aliases`: []

### TERM-MAX-CONFIGURED-DIO-CHANNEL-GROUPS
- `name`: `MAX_CONFIGURED_DIO_CHANNEL_GROUPS`
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p9: • #define MAX_CONFIGURED_DIO_CHANNEL_GROUPS ((uint8)1)"]
- `aliases`: ["MAX CONFIGURED DIO CHANNEL GROUPS"]

### TERM-S-DIOCONFIGCHANNELS
- `name`: `s_DioConfigChannels`
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedefs / 2.5.1 Typedefs in Dio_Hw_Types.h"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p9: • #define s_DioConfigChannels (Dio_Config)"]
- `aliases`: ["s DioConfigChannels"]

### TERM-RTE
- `name`: `Rte`
- `type`: `term`
- `primary_page`: `19`
- `physical_pages`: [19, 21, 26]
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 DioConfig", "Chapter 4 Configuration Guides / 4.1 DIO Usage Common Steps"]
- `brief`: Technical term or identifier used in the source PDF.
- `anchors`: ["p19: PortA = 0,PortB = 1,PortC = 2,PortD = 3,PortE = 4,PortF = 5,PortG = 6,PortH = 7,PortI = 8.", "p21: contains the code fragment that has to be inserted in the API call of the calling module to get the", "p26: use(e. g. 1 corresponds to PORT B, 4 corresponds to PORTE)."]
- `aliases`: []

## 9. Search Aliases

### ALIAS-MCAL
- `canonical`: `MCAL`
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "AUTOSAR MCAL", "底层驱动"]
- `related_ids`: []

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
- `related_ids`: []

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
- `related_ids`: ["CFG-DIOPORT"]

### ALIAS-DIOCHANNELGROUP
- `canonical`: `DioChannelGroup`
- `aliases`: ["DIO Channel Group", "Dio_ChannelGroupType", "channel group", "通道组"]
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
- `purpose`: `Close keyword lookup gaps between DIO_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `DIO_User_Manual.pdf`
- `source_pdf_sha256`: `5509433ae6998e50ce73280f9a8d7851691911b4615591b1db4f34cc6df684b0`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `229`
- `technical_missing_terms_added`: `10`
- `pages_with_added_terms`: `25`
- `supplemented_missing_token_count`: `229`
- `supplemented_missing_technical_token_count`: `10`
- `supplemented_physical_pages_count`: `25`
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
  - "Channels"
  - "Confidential"
  - "Driver"
  - "Flagchip"
  - "Groups"
  - "Pins"
  - "Proprietary"
  - "actual"
  - "behavior"
  - "configured"
  - "formula"
  - "identified"
  - "initialization"
  - "ports"
  - "provides"
  - "purpose"
  - "services"
  - "synchronous"
  - "there"
  - "those"
  - "works"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "MSB"
  - "Proprietary"
  - "configured"
  - "defined"
  - "does"
  - "esign"
  - "exactly"
  - "functions"
  - "ignore"
  - "input"
  - "level"
  - "output"
  - "provide"
  - "reads"
  - "real"
  - "regardless"
  - "register"
  - "registers"
  - "size"
  - "support"
  - "they"
  - "too"
  - "when"
  - "will"
  - "works"
  - "write"
  - "writes"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "ChannelGroup"
  - "Confidential"
  - "Flagchip"
  - "Get"
  - "Info"
  - "Invalid"
  - "NULL"
  - "Proprietary"
  - "Version"
  - "called"
  - "invalid"
  - "level"
  - "passed"
  - "pointer"
  - "requested"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Dev"
  - "Flagchip"
  - "Proprietary"
  - "_VENDOR_ID"
  - "chip"
  - "detect"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Compile"
  - "Confidential"
  - "Flagchip"
  - "Number"
  - "Numeric"
  - "Pre"
  - "Proprietary"
  - "Support"
  - "Symbolic"
  - "available"
  - "channels"
  - "configured"
  - "groups"
  - "implemented"
  - "maximum"
  - "mode"
  - "offset"
  - "ports"
  - "representing"
  - "tools"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "0x0"
  - "0x4"
  - "Confidential"
  - "Flagchip"
  - "LSB"
  - "Layout"
  - "Numeric"
  - "PDOR"
  - "PSOR"
  - "Pointer"
  - "Proprietary"
  - "Register"
  - "Set"
  - "Typedef"
  - "containing"
  - "counted"
  - "defined"
  - "defines"
  - "element"
  - "groups"
  - "indicates"
  - "levels"
  - "mask"
  - "offset"
  - "pChannelGroupList"
  - "position"
  - "positions"
  - "representation"
  - "single"
  - "volatile"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "0x18"
  - "0x8"
  - "0xC"
  - "Clear"
  - "Confidential"
  - "Direction"
  - "Disable"
  - "Flagchip"
  - "PCOR"
  - "PDDR"
  - "PDIR"
  - "PIDR"
  - "PTOR"
  - "Parameter"
  - "Proprietary"
  - "Register"
  - "Service"
  - "Toggle"
  - "after"
  - "change"
  - "channels"
  - "flip"
  - "level"
  - "offset"
  - "volatile"
  - "written"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Parameter"
  - "Pointer"
  - "Proprietary"
  - "Service"
  - "adjoining"
  - "level"
  - "reads"
  - "store"
  - "subset"
  - "versioninfo"
  - "where"
  - "written"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Channels"
  - "Confidential"
  - "Flagchip"
  - "Flips"
  - "Parameter"
  - "Proprietary"
  - "Reads"
  - "Writes"
  - "level"
  - "masked"
  - "written"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Parameter"
  - "Proprietary"
  - "Reads"
  - "Writes"
  - "channels"
  - "level"
  - "pCoreConfigInfo"
  - "partition"
  - "pointer"
  - "written"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Parameter"
  - "Proprietary"
  - "Reads"
  - "Sets"
  - "Toggles"
  - "defined"
  - "instance"
  - "output"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Parameter"
  - "Proprietary"
  - "Sets"
  - "instance"
  - "numbers"
  - "output"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "MultipleConfigurationContainer"
  - "Proprietary"
  - "Range"
  - "Variant"
  - "VariantLinkTime"
  - "VariantPreCompile"
  - "VariantPrecompile"
  - "below"
  - "enumeration"
  - "exist"
  - "inclusion"
  - "once"
  - "relation"
  - "shown"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Min"
  - "Numeric"
  - "Proprietary"
  - "Symbolic"
  - "Variabel"
  - "being"
  - "channels"
  - "configure"
  - "different"
  - "following"
  - "groups"
  - "names"
  - "ports"
  - "possible"
  - "will"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Cannot"
  - "ChannelIDs"
  - "Confidential"
  - "Flagchip"
  - "Invalid"
  - "List"
  - "MAP"
  - "Multiple"
  - "Proprietary"
  - "Range"
  - "Symbolic"
  - "ValidPins"
  - "assigned"
  - "channelID"
  - "digital"
  - "duplicated"
  - "either"
  - "general"
  - "having"
  - "names"
  - "purpose"
  - "repeated"
  - "represents"
  - "will"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Each"
  - "Example"
  - "Flagchip"
  - "Identification"
  - "List"
  - "MAP"
  - "Max"
  - "OutputGroup"
  - "Proprietary"
  - "String"
  - "Symbolic"
  - "address"
  - "adjoining"
  - "assigned"
  - "but"
  - "channels"
  - "continuous"
  - "create"
  - "does"
  - "explicitly"
  - "given"
  - "holds"
  - "identified"
  - "logical"
  - "mask"
  - "memory"
  - "names"
  - "offset"
  - "point"
  - "pointer"
  - "provides"
  - "represented"
  - "represents"
  - "should"
  - "string"
  - "variable"
  - "will"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Bit"
  - "Boolean"
  - "Calculated"
  - "Confidential"
  - "Detection"
  - "FLAGCHIP"
  - "Flagchip"
  - "General"
  - "Notification"
  - "Number"
  - "OFF"
  - "Offset"
  - "Proprietary"
  - "Switches"
  - "automatically"
  - "bit"
  - "counted"
  - "defines"
  - "least"
  - "mask"
  - "position"
  - "positions"
  - "significant"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Boolean"
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "Proprietary"
  - "about"
  - "added"
  - "aggregated"
  - "mode"
  - "modules"
  - "multicore"
  - "published"
  - "versions"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "ArReleaseRevisionVersion"
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "Minor"
  - "Proprietary"
  - "SwMajorVersion"
  - "SwMinorVersion"
  - "numbering"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "FLAGCHIP"
  - "Flagchip"
  - "List"
  - "Patch"
  - "Proprietary"
  - "level"
  - "numbering"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Bit"
  - "Calculate"
  - "Click"
  - "Confidential"
  - "Flagchip"
  - "Generate"
  - "Groups"
  - "Number"
  - "PTE4"
  - "PTE5"
  - "PTE6"
  - "Proprietary"
  - "Set"
  - "adjoining"
  - "automatically"
  - "belong"
  - "button"
  - "calculate"
  - "calculated"
  - "channels"
  - "click"
  - "double"
  - "ffset"
  - "find"
  - "groups"
  - "ports"
  - "should"
  - "these"
  - "when"
  - "will"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]
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
- `physical_pages`: [2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 21, 22, 23, 24, 25]
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0003-002", "TBL-0004-001", "TBL-0006-001", "TBL-0006-002", "TBL-0006-003", "TBL-0006-004", "TBL-0007-001", "TBL-0008-001"]
- `message`: Table Index contains formal and table-like entries; cell grids were not fully reconstructed, and entries are intended for locating source PDF pages.
- `recommended_action`: Use captions, anchors and physical pages to verify exact table cells in the source PDF.

### WARN-0004
- `severity`: `medium`
- `category`: `image_extraction`
- `physical_pages`: [3, 6, 10, 11, 12, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25]
- `affected_ids`: ["FIG-0003-001", "FIG-0006-001", "FIG-0010-001", "FIG-0011-001", "FIG-0011-002", "FIG-0011-003", "FIG-0011-004", "FIG-0012-001", "FIG-0012-002", "FIG-0012-003"]
- `message`: Figure/Image Index includes screenshots, diagrams and embedded image blocks. Semantic descriptions are based on page context and may not capture all visual details.
- `recommended_action`: Open the indicated physical page in the source PDF for exact screenshot/diagram content.

### WARN-0005
- `severity`: `low`
- `category`: `sparse_page`
- `physical_pages`: [4]
- `affected_ids`: []
- `message`: Detected 1 sparse-text pages. They are still covered by Page Locator and Page Segment indexes.
- `recommended_action`: Check source PDF rendering if a sparse page is unexpectedly important.

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `26`
- `indexed_physical_pages_count`: `26`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `section_ranges_status`: `pass`
- `invalid_section_ranges`: []
- `source_pdf_sha256`: `5509433ae6998e50ce73280f9a8d7851691911b4615591b1db4f34cc6df684b0`
- `manifest_source_pdf_sha256`: `5509433ae6998e50ce73280f9a8d7851691911b4615591b1db4f34cc6df684b0`
- `sha256_match`: `True`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `229`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

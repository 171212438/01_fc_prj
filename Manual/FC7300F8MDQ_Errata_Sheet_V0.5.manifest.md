---
manifest_schema_version: "1.0"
source_pdf: "FC7300F8MDQ_Errata_Sheet_V0.5.pdf"
source_pdf_sha256: "5405c2212dc7098f5bf812644b4eb16b4c12f055a19cbe5ed94b029854d61baa"
source_pdf_size_bytes: 3310663
pdf_page_count: 54
source_document_id: "ET-FC7300F8MDQ-V0.5-Y26M04"
source_document_revision: "Rev.0.5"
generated_at: "2026-06-10T10:39:48.503080+00:00"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.5.0"
page_numbering_policy: "physical_page is 1-based PDF physical page index; printed_page is auxiliary only"
ocr_status: "not_run_text_layer_available"
pdf_outline_count: 0
standard_page_locator_headings: "present"
standard_page_locator_headings_count: 54
text_layer_search_supplement: "present_with_delta"
text_layer_search_supplement_generated_at: "2026-06-21T04:04:23Z"
text_layer_search_supplement_terms: 673
text_layer_search_supplement_technical_terms: 119
text_layer_search_supplement_pages: 53
post_supplement_text_token_recall: "1.000"
post_supplement_technical_token_recall: "1.000"
overall_status: "pass_with_warnings"
text_layer_search_supplement_delta_generated_at: "2026-06-21T04:04:23Z"
text_layer_search_supplement_delta_terms: 20
text_layer_search_supplement_delta_technical_terms: 3
text_layer_search_supplement_delta_pages: 13
text_layer_search_supplement_delta_entries: 20
---
# PDF Manifest: FC7300F8MDQ_Errata_Sheet_V0.5.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always the 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a substitute for the source PDF. Verify factual claims against the referenced source page.
- Use `9A. Text-Layer Search Supplement` for exact keyword lookup gaps; verify exact erratum wording, workaround text and diagrams against the PDF.
- For tables and figures, use `confidence`, `bbox`, `quality_flags`, and `anchor` to decide whether manual source-page verification is required.
- Treat this Manifest as stale if `source_pdf_sha256` does not match the current source PDF.

## 1. Document Metadata

- `source_pdf`: "FC7300F8MDQ_Errata_Sheet_V0.5.pdf"
- `source_pdf_sha256`: "5405c2212dc7098f5bf812644b4eb16b4c12f055a19cbe5ed94b029854d61baa"
- `source_pdf_size_bytes`: 3310663
- `pdf_page_count`: 54
- `source_document_id`: "ET-FC7300F8MDQ-V0.5-Y26M04"
- `source_document_revision`: "Rev.0.5"
- `pdf_format`: "PDF 1.7"
- `pdf_title_metadata`: ""
- `pdf_author_metadata`: ""
- `pdf_producer_metadata`: ""
- `pdf_outline_count`: 0
- `generated_at_utc`: "2026-06-10T10:39:48.503080+00:00"
- `generator`: "chatgpt-pdf-manifest-generator 0.5.0"
- `manifest_schema_version`: "1.0"
- `page_numbering_policy`: "physical_page is 1-based PDF physical page index; printed_page is auxiliary only"
- `standard_page_locator_headings`: present
- `standard_page_locator_headings_count`: 54
- `text_layer_search_supplement`: "present_with_delta"
- `text_layer_search_supplement_generated_at`: "2026-06-21T04:04:23Z"
- `text_layer_search_supplement_terms`: 673
- `text_layer_search_supplement_technical_terms`: 119
- `text_layer_search_supplement_pages`: 53
- `text_layer_search_supplement_entries`: 1153
- `text_layer_search_supplement_delta_entries`: 20
- `text_layer_search_supplement_delta_pages`: 13
- `text_layer_search_supplement_delta_technical_terms`: 3
- `text_layer_search_supplement_delta_terms`: 20
- `text_layer_search_supplement_delta_generated_at`: "2026-06-21T04:04:23Z"
- `post_supplement_text_token_recall`: "1.000"
- `post_supplement_technical_token_recall`: "1.000"

### Extraction Engines

- `text_extraction`: PyMuPDF text layer extraction
- `layout_detection`: PyMuPDF page dimensions, image info, and table finder
- `table_detection`: PyMuPDF `find_tables()` plus manual grouping for formal cross-page tables
- `image_detection`: PyMuPDF raster image info; page renders inspected for semantic figure descriptions
- `ocr`: not executed because all pages have an extractable text layer; visual diagrams should still be verified against rendered/source pages

## 2. Global Summary

- `topic`: Errata sheet for the Flagchip FC7300F8MDQ MCU, Rev.0.5.
- `document_scope`: Device errata, workarounds, previous/current errata ID mapping, ENET Synopsys errata excerpts, and revision history.
- `module_scope`: ADC, Debug, DMA/DMAMUX, FLEXCAN, LU, HSADC, QDT, RGM, SCG/PLL, SSI, ENET/DWC_ether_qos.
- `key_chapters`: Chapter 1 Introduction; Chapter 2 Device Errata; Revision History.
- `key_tables`: Summary matrix, Table 1 Errata ID Mapping, DMAMUX slot conflict table, Revision History table.
- `key_terms`: ERR_* IDs, Synopsys ID, Workaround Available, SCG_SIRCCSR.LPWKE, SCM_TSTMP_RESn, DMA_MON_ERR_STATUS, Enhanced Rx FIFO, MB0-MB7, LECNT/POSDCNT, PREDIV/PSTDIV1, DWC_ether_qos, PTP/IEEE 1588, EST/GCL/BTR/CTR.
- `summary`: The document lists known FC7300F8MDQ device deviations from current documentation. Each main erratum includes a description and workaround in English and Chinese. ENET errata are listed as Synopsys ID subsections with severity, impacted configurations, consequences, and workarounds.

## 3. Table of Contents Index

### SEC-0001-COVER
- `number`: null
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: 1
- `physical_page_end`: 1
- `printed_page_start`: null
- `printed_page_end`: null
- `keywords`: ["cover", "Rev.0.5"]
- `anchor`: "FC7300F8MDQ Errata Sheet"

### SEC-0002-0003-TOC
- `number`: null
- `title`: "Table of Contents"
- `path`: "Front Matter / Table of Contents"
- `physical_page_start`: 2
- `physical_page_end`: 3
- `printed_page_start`: "2"
- `printed_page_end`: "3"
- `keywords`: ["Table of Contents", "Chapter 1", "Chapter 2", "ENET Errata"]
- `anchor`: "Table of Contents"

### SEC-CH01
- `number`: "1"
- `title`: "Chapter 1 Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: 4
- `physical_page_end`: 4
- `printed_page_start`: "4"
- `printed_page_end`: "4"
- `keywords`: ["Chapter 1 Introduction"]
- `anchor`: "Chapter 1 Introduction"

### SEC-1-1
- `number`: "1.1"
- `title`: "Conventions"
- `path`: "Chapter 1 Introduction / 1.1 Conventions"
- `physical_page_start`: 4
- `physical_page_end`: 4
- `printed_page_start`: "4"
- `printed_page_end`: "4"
- `keywords`: ["Conventions"]
- `anchor`: "1.1 Conventions"

### SEC-1-2
- `number`: "1.2"
- `title`: "Summary"
- `path`: "Chapter 1 Introduction / 1.2 Summary"
- `physical_page_start`: 4
- `physical_page_end`: 5
- `printed_page_start`: "4"
- `printed_page_end`: "5"
- `keywords`: ["Summary"]
- `anchor`: "1.2 Summary"

### SEC-1-3
- `number`: "1.3"
- `title`: "Arm-related Errata"
- `path`: "Chapter 1 Introduction / 1.3 Arm-related Errata"
- `physical_page_start`: 5
- `physical_page_end`: 5
- `printed_page_start`: "5"
- `printed_page_end`: "5"
- `keywords`: ["Arm-related Errata"]
- `anchor`: "1.3 Arm-related Errata"

### SEC-1-4
- `number`: "1.4"
- `title`: "Errata ID Mapping (Previous vs. Current)"
- `path`: "Chapter 1 Introduction / 1.4 Errata ID Mapping (Previous vs. Current)"
- `physical_page_start`: 5
- `physical_page_end`: 6
- `printed_page_start`: "5"
- `printed_page_end`: "6"
- `keywords`: ["Errata ID Mapping (Previous vs. Current)"]
- `anchor`: "1.4 Errata ID Mapping (Previous vs. Current)"

### SEC-CH02
- `number`: "2"
- `title`: "Chapter 2 Device Errata"
- `path`: "Chapter 2 Device Errata"
- `physical_page_start`: 7
- `physical_page_end`: 7
- `printed_page_start`: "7"
- `printed_page_end`: "7"
- `keywords`: ["Chapter 2 Device Errata"]
- `anchor`: "Chapter 2 Device Errata"

### SEC-2-1
- `number`: "2.1"
- `title`: "ERR_ADC_3612112"
- `path`: "Chapter 2 Device Errata / 2.1 ERR_ADC_3612112"
- `physical_page_start`: 7
- `physical_page_end`: 7
- `printed_page_start`: "7"
- `printed_page_end`: "7"
- `keywords`: ["ERR_ADC_3612112", "ADC"]
- `anchor`: "2.1 ERR_ADC_3612112"

### SEC-2-2
- `number`: "2.2"
- `title`: "ERR_ADC_3612113"
- `path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `physical_page_start`: 7
- `physical_page_end`: 9
- `printed_page_start`: "7"
- `printed_page_end`: "9"
- `keywords`: ["ERR_ADC_3612113", "ADC"]
- `anchor`: "2.2 ERR_ADC_3612113"

### SEC-2-3
- `number`: "2.3"
- `title`: "ERR_Debug_3514113"
- `path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113"
- `physical_page_start`: 9
- `physical_page_end`: 10
- `printed_page_start`: "9"
- `printed_page_end`: "10"
- `keywords`: ["ERR_Debug_3514113", "Debug"]
- `anchor`: "2.3 ERR_Debug_3514113"

### SEC-2-4
- `number`: "2.4"
- `title`: "ERR_Debug_3514112"
- `path`: "Chapter 2 Device Errata / 2.4 ERR_Debug_3514112"
- `physical_page_start`: 10
- `physical_page_end`: 10
- `printed_page_start`: "10"
- `printed_page_end`: "10"
- `keywords`: ["ERR_Debug_3514112", "Debug"]
- `anchor`: "2.4 ERR_Debug_3514112"

### SEC-2-5
- `number`: "2.5"
- `title`: "ERR_DMA_3613112"
- `path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112"
- `physical_page_start`: 10
- `physical_page_end`: 13
- `printed_page_start`: "10"
- `printed_page_end`: "13"
- `keywords`: ["ERR_DMA_3613112", "DMA"]
- `anchor`: "2.5 ERR_DMA_3613112"

### SEC-2-6
- `number`: "2.6"
- `title`: "ERR_DMA_3614121"
- `path`: "Chapter 2 Device Errata / 2.6 ERR_DMA_3614121"
- `physical_page_start`: 13
- `physical_page_end`: 14
- `printed_page_start`: "13"
- `printed_page_end`: "14"
- `keywords`: ["ERR_DMA_3614121", "DMA"]
- `anchor`: "2.6 ERR_DMA_3614121"

### SEC-2-7
- `number`: "2.7"
- `title`: "ERR_FLEXCAN_3519117"
- `path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117"
- `physical_page_start`: 15
- `physical_page_end`: 16
- `printed_page_start`: "15"
- `printed_page_end`: "16"
- `keywords`: ["ERR_FLEXCAN_3519117", "FLEXCAN"]
- `anchor`: "2.7 ERR_FLEXCAN_3519117"

### SEC-2-8
- `number`: "2.8"
- `title`: "ERR_FLEXCAN_3519113"
- `path`: "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113"
- `physical_page_start`: 16
- `physical_page_end`: 17
- `printed_page_start`: "16"
- `printed_page_end`: "17"
- `keywords`: ["ERR_FLEXCAN_3519113", "FLEXCAN"]
- `anchor`: "2.8 ERR_FLEXCAN_3519113"

### SEC-2-9
- `number`: "2.9"
- `title`: "ERR_LU_3617113"
- `path`: "Chapter 2 Device Errata / 2.9 ERR_LU_3617113"
- `physical_page_start`: 17
- `physical_page_end`: 18
- `printed_page_start`: "17"
- `printed_page_end`: "18"
- `keywords`: ["ERR_LU_3617113", "LU"]
- `anchor`: "2.9 ERR_LU_3617113"

### SEC-2-10
- `number`: "2.10"
- `title`: "ERR_HSADC_3712112"
- `path`: "Chapter 2 Device Errata / 2.10 ERR_HSADC_3712112"
- `physical_page_start`: 18
- `physical_page_end`: 18
- `printed_page_start`: "18"
- `printed_page_end`: "18"
- `keywords`: ["ERR_HSADC_3712112", "HSADC"]
- `anchor`: "2.10 ERR_HSADC_3712112"

### SEC-2-11
- `number`: "2.11"
- `title`: "ERR_QDT_3612114"
- `path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `physical_page_start`: 19
- `physical_page_end`: 20
- `printed_page_start`: "19"
- `printed_page_end`: "20"
- `keywords`: ["ERR_QDT_3612114", "QDT"]
- `anchor`: "2.11 ERR_QDT_3612114"

### SEC-2-12
- `number`: "2.12"
- `title`: "ERR_RGM_3522113"
- `path`: "Chapter 2 Device Errata / 2.12 ERR_RGM_3522113"
- `physical_page_start`: 21
- `physical_page_end`: 21
- `printed_page_start`: "21"
- `printed_page_end`: "21"
- `keywords`: ["ERR_RGM_3522113", "RGM"]
- `anchor`: "2.12 ERR_RGM_3522113"

### SEC-2-13
- `number`: "2.13"
- `title`: "ERR_RGM_3614122"
- `path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122"
- `physical_page_start`: 21
- `physical_page_end`: 22
- `printed_page_start`: "21"
- `printed_page_end`: "22"
- `keywords`: ["ERR_RGM_3614122", "RGM"]
- `anchor`: "2.13 ERR_RGM_3614122"

### SEC-2-14
- `number`: "2.14"
- `title`: "ERR_RGM_3615114"
- `path`: "Chapter 2 Device Errata / 2.14 ERR_RGM_3615114"
- `physical_page_start`: 22
- `physical_page_end`: 22
- `printed_page_start`: "22"
- `printed_page_end`: "22"
- `keywords`: ["ERR_RGM_3615114", "RGM"]
- `anchor`: "2.14 ERR_RGM_3615114"

### SEC-2-15
- `number`: "2.15"
- `title`: "ERR_SCG_3712113"
- `path`: "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113"
- `physical_page_start`: 22
- `physical_page_end`: 23
- `printed_page_start`: "22"
- `printed_page_end`: "23"
- `keywords`: ["ERR_SCG_3712113", "SCG"]
- `anchor`: "2.15 ERR_SCG_3712113"

### SEC-2-16
- `number`: "2.16"
- `title`: "ERR_SCG_3715113"
- `path`: "Chapter 2 Device Errata / 2.16 ERR_SCG_3715113"
- `physical_page_start`: 23
- `physical_page_end`: 23
- `printed_page_start`: "23"
- `printed_page_end`: "23"
- `keywords`: ["ERR_SCG_3715113", "SCG"]
- `anchor`: "2.16 ERR_SCG_3715113"

### SEC-2-17
- `number`: "2.17"
- `title`: "ERR_SSI_3612116"
- `path`: "Chapter 2 Device Errata / 2.17 ERR_SSI_3612116"
- `physical_page_start`: 24
- `physical_page_end`: 24
- `printed_page_start`: "24"
- `printed_page_end`: "24"
- `keywords`: ["ERR_SSI_3612116", "SSI"]
- `anchor`: "2.17 ERR_SSI_3612116"

### SEC-02-18
- `number`: "2.18"
- `title`: "ENET Errata"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata"
- `physical_page_start`: 25
- `physical_page_end`: 25
- `printed_page_start`: "25"
- `printed_page_end`: "25"
- `keywords`: ["ENET Errata"]
- `anchor`: "2.18 ENET Errata"

### SEC-2-18-1
- `number`: "2.18.1"
- `title`: "Synopsys ID: 4171346"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.1 Synopsys ID: 4171346"
- `physical_page_start`: 25
- `physical_page_end`: 25
- `printed_page_start`: "25"
- `printed_page_end`: "25"
- `keywords`: ["Synopsys ID: 4171346", "ENET", "Synopsys"]
- `anchor`: "2.18.1 Synopsys ID: 4171346"

### SEC-2-18-2
- `number`: "2.18.2"
- `title`: "Synopsys ID: 3900281"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281"
- `physical_page_start`: 25
- `physical_page_end`: 27
- `printed_page_start`: "25"
- `printed_page_end`: "27"
- `keywords`: ["Synopsys ID: 3900281", "ENET", "Synopsys"]
- `anchor`: "2.18.2 Synopsys ID: 3900281"

### SEC-2-18-3
- `number`: "2.18.3"
- `title`: "Synopsys ID: 3876182"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.3 Synopsys ID: 3876182"
- `physical_page_start`: 27
- `physical_page_end`: 28
- `printed_page_start`: "27"
- `printed_page_end`: "28"
- `keywords`: ["Synopsys ID: 3876182", "ENET", "Synopsys"]
- `anchor`: "2.18.3 Synopsys ID: 3876182"

### SEC-2-18-4
- `number`: "2.18.4"
- `title`: "Synopsys ID: 3873623"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.4 Synopsys ID: 3873623"
- `physical_page_start`: 28
- `physical_page_end`: 29
- `printed_page_start`: "28"
- `printed_page_end`: "29"
- `keywords`: ["Synopsys ID: 3873623", "ENET", "Synopsys"]
- `anchor`: "2.18.4 Synopsys ID: 3873623"

### SEC-2-18-5
- `number`: "2.18.5"
- `title`: "Synopsys ID: 3683170"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.5 Synopsys ID: 3683170"
- `physical_page_start`: 29
- `physical_page_end`: 30
- `printed_page_start`: "29"
- `printed_page_end`: "30"
- `keywords`: ["Synopsys ID: 3683170", "ENET", "Synopsys"]
- `anchor`: "2.18.5 Synopsys ID: 3683170"

### SEC-2-18-6
- `number`: "2.18.6"
- `title`: "Synopsys ID: 3413311"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311"
- `physical_page_start`: 30
- `physical_page_end`: 32
- `printed_page_start`: "30"
- `printed_page_end`: "32"
- `keywords`: ["Synopsys ID: 3413311", "ENET", "Synopsys"]
- `anchor`: "2.18.6 Synopsys ID: 3413311"

### SEC-2-18-7
- `number`: "2.18.7"
- `title`: "Synopsys ID: 3380358"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.7 Synopsys ID: 3380358"
- `physical_page_start`: 32
- `physical_page_end`: 33
- `printed_page_start`: "32"
- `printed_page_end`: "33"
- `keywords`: ["Synopsys ID: 3380358", "ENET", "Synopsys"]
- `anchor`: "2.18.7 Synopsys ID: 3380358"

### SEC-2-18-8
- `number`: "2.18.8"
- `title`: "Synopsys ID: 3379533"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.8 Synopsys ID: 3379533"
- `physical_page_start`: 33
- `physical_page_end`: 34
- `printed_page_start`: "33"
- `printed_page_end`: "34"
- `keywords`: ["Synopsys ID: 3379533", "ENET", "Synopsys"]
- `anchor`: "2.18.8 Synopsys ID: 3379533"

### SEC-2-18-9
- `number`: "2.18.9"
- `title`: "Synopsys ID: 3368939"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.9 Synopsys ID: 3368939"
- `physical_page_start`: 34
- `physical_page_end`: 35
- `printed_page_start`: "34"
- `printed_page_end`: "35"
- `keywords`: ["Synopsys ID: 3368939", "ENET", "Synopsys"]
- `anchor`: "2.18.9 Synopsys ID: 3368939"

### SEC-2-18-10
- `number`: "2.18.10"
- `title`: "Synopsys ID: 3340890"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890"
- `physical_page_start`: 35
- `physical_page_end`: 37
- `printed_page_start`: "35"
- `printed_page_end`: "37"
- `keywords`: ["Synopsys ID: 3340890", "ENET", "Synopsys"]
- `anchor`: "2.18.10 Synopsys ID: 3340890"

### SEC-2-18-11
- `number`: "2.18.11"
- `title`: "Synopsys ID: 3338201"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.11 Synopsys ID: 3338201"
- `physical_page_start`: 37
- `physical_page_end`: 38
- `printed_page_start`: "37"
- `printed_page_end`: "38"
- `keywords`: ["Synopsys ID: 3338201", "ENET", "Synopsys"]
- `anchor`: "2.18.11 Synopsys ID: 3338201"

### SEC-2-18-12
- `number`: "2.18.12"
- `title`: "Synopsys ID: 3309847"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.12 Synopsys ID: 3309847"
- `physical_page_start`: 38
- `physical_page_end`: 38
- `printed_page_start`: "38"
- `printed_page_end`: "38"
- `keywords`: ["Synopsys ID: 3309847", "ENET", "Synopsys"]
- `anchor`: "2.18.12 Synopsys ID: 3309847"

### SEC-2-18-13
- `number`: "2.18.13"
- `title`: "Synopsys ID: 3294970"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970"
- `physical_page_start`: 39
- `physical_page_end`: 40
- `printed_page_start`: "39"
- `printed_page_end`: "40"
- `keywords`: ["Synopsys ID: 3294970", "ENET", "Synopsys"]
- `anchor`: "2.18.13 Synopsys ID: 3294970"

### SEC-2-18-14
- `number`: "2.18.14"
- `title`: "Synopsys ID: 3290261"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.14 Synopsys ID: 3290261"
- `physical_page_start`: 40
- `physical_page_end`: 41
- `printed_page_start`: "40"
- `printed_page_end`: "41"
- `keywords`: ["Synopsys ID: 3290261", "ENET", "Synopsys"]
- `anchor`: "2.18.14 Synopsys ID: 3290261"

### SEC-2-18-15
- `number`: "2.18.15"
- `title`: "Synopsys ID: 3290231"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.15 Synopsys ID: 3290231"
- `physical_page_start`: 41
- `physical_page_end`: 42
- `printed_page_start`: "41"
- `printed_page_end`: "42"
- `keywords`: ["Synopsys ID: 3290231", "ENET", "Synopsys"]
- `anchor`: "2.18.15 Synopsys ID: 3290231"

### SEC-2-18-16
- `number`: "2.18.16"
- `title`: "Synopsys ID: 3288309"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.16 Synopsys ID: 3288309"
- `physical_page_start`: 42
- `physical_page_end`: 43
- `printed_page_start`: "42"
- `printed_page_end`: "43"
- `keywords`: ["Synopsys ID: 3288309", "ENET", "Synopsys"]
- `anchor`: "2.18.16 Synopsys ID: 3288309"

### SEC-2-18-17
- `number`: "2.18.17"
- `title`: "Synopsys ID: 6129927"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.17 Synopsys ID: 6129927"
- `physical_page_start`: 43
- `physical_page_end`: 44
- `printed_page_start`: "43"
- `printed_page_end`: "44"
- `keywords`: ["Synopsys ID: 6129927", "ENET", "Synopsys"]
- `anchor`: "2.18.17 Synopsys ID: 6129927"

### SEC-2-18-18
- `number`: "2.18.18"
- `title`: "Synopsys ID: 3275809"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.18 Synopsys ID: 3275809"
- `physical_page_start`: 44
- `physical_page_end`: 45
- `printed_page_start`: "44"
- `printed_page_end`: "45"
- `keywords`: ["Synopsys ID: 3275809", "ENET", "Synopsys"]
- `anchor`: "2.18.18 Synopsys ID: 3275809"

### SEC-2-18-19
- `number`: "2.18.19"
- `title`: "Synopsys ID: 4974260"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.19 Synopsys ID: 4974260"
- `physical_page_start`: 45
- `physical_page_end`: 46
- `printed_page_start`: "45"
- `printed_page_end`: "46"
- `keywords`: ["Synopsys ID: 4974260", "ENET", "Synopsys"]
- `anchor`: "2.18.19 Synopsys ID: 4974260"

### SEC-2-18-20
- `number`: "2.18.20"
- `title`: "Synopsys ID: 5121311"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.20 Synopsys ID: 5121311"
- `physical_page_start`: 46
- `physical_page_end`: 47
- `printed_page_start`: "46"
- `printed_page_end`: "47"
- `keywords`: ["Synopsys ID: 5121311", "ENET", "Synopsys"]
- `anchor`: "2.18.20 Synopsys ID: 5121311"

### SEC-2-18-21
- `number`: "2.18.21"
- `title`: "Synopsys ID: 5584644"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644"
- `physical_page_start`: 47
- `physical_page_end`: 49
- `printed_page_start`: "47"
- `printed_page_end`: "49"
- `keywords`: ["Synopsys ID: 5584644", "ENET", "Synopsys"]
- `anchor`: "2.18.21 Synopsys ID: 5584644"

### SEC-2-18-22
- `number`: "2.18.22"
- `title`: "Synopsys ID: 5575379"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.22 Synopsys ID: 5575379"
- `physical_page_start`: 49
- `physical_page_end`: 50
- `printed_page_start`: "49"
- `printed_page_end`: "50"
- `keywords`: ["Synopsys ID: 5575379", "ENET", "Synopsys"]
- `anchor`: "2.18.22 Synopsys ID: 5575379"

### SEC-2-18-23
- `number`: "2.18.23"
- `title`: "Synopsys ID: 5938448"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448"
- `physical_page_start`: 51
- `physical_page_end`: 52
- `printed_page_start`: "51"
- `printed_page_end`: "52"
- `keywords`: ["Synopsys ID: 5938448", "ENET", "Synopsys"]
- `anchor`: "2.18.23 Synopsys ID: 5938448"

### SEC-2-18-24
- `number`: "2.18.24"
- `title`: "Synopsys ID: 3542857"
- `path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.24 Synopsys ID: 3542857"
- `physical_page_start`: 52
- `physical_page_end`: 53
- `printed_page_start`: "52"
- `printed_page_end`: "53"
- `keywords`: ["Synopsys ID: 3542857", "ENET", "Synopsys"]
- `anchor`: "2.18.24 Synopsys ID: 3542857"

### SEC-REVISION-HISTORY
- `number`: null
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: 54
- `physical_page_end`: 54
- `printed_page_start`: "54"
- `printed_page_end`: "54"
- `keywords`: ["Revision History"]
- `anchor`: "Revision History"

## 4. Page Locator Map

| physical_page | printed_page | section_path | primary_anchor | content_types | quality_flags |
|---:|---|---|---|---|---|
| 1 |  | Cover | FC7300F8MDQ Errata Sheet | cover | sparse_cover_text |
| 2 | 2 | Front Matter / Table of Contents | Table of Contents | erratum, text, toc |  |
| 3 | 3 | Front Matter / Table of Contents | 2.18.4 Synopsys ID: 3873623 | erratum, revision_history, text, toc |  |
| 4 | 4 | Chapter 1 Introduction / 1.1 Conventions / 1.2 Summary | Chapter 1 Introduction | erratum, table |  |
| 5 | 5 | Chapter 1 Introduction / 1.2 Summary / 1.3 Arm-related Errata / 1.4 Errata ID Mapping | 1.3 | erratum, table |  |
| 6 | 6 | Chapter 1 Introduction / 1.4 Errata ID Mapping (continued) | ERR_DMA_001 | erratum, table |  |
| 7 | 7 | Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113 | Chapter 2 Device Errata | erratum, table |  |
| 8 | 8 | Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 | SCM_ADC_GROUP0_RES1, the timestamp stored in the transferred SCM_TSTMP_RES0... | image, table |  |
| 9 | 9 | Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113 | 2.3 | erratum, image, table |  |
| 10 | 10 | Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112 | 2.4 | erratum, table |  |
| 11 | 11 | Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 | CN | table |  |
| 12 | 12 | Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 | 91 | table |  |
| 13 | 13 | Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121 | 2.6 | erratum, table |  |
| 14 | 14 | Chapter 2 Device Errata / 2.6 ERR_DMA_3614121 | • DMA_CFG_DLASTn | table |  |
| 15 | 15 | Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 | 2.7 | erratum, image, table |  |
| 16 | 16 | Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113 | 2.8 | erratum, table |  |
| 17 | 17 | Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113 | 2.9 | erratum, table |  |
| 18 | 18 | Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112 | 2.10 ERR_HSADC_3712112 | erratum, table |  |
| 19 | 19 | Chapter 2 Device Errata / 2.11 ERR_QDT_3612114 | 2.11 ERR_QDT_3612114 | erratum, image, table |  |
| 20 | 20 | Chapter 2 Device Errata / 2.11 ERR_QDT_3612114 | 4) | image, table |  |
| 21 | 21 | Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122 | 2.12 ERR_RGM_3522113 | erratum, table |  |
| 22 | 22 | Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113 | 2.14 ERR_RGM_3615114 | erratum, table |  |
| 23 | 23 | Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113 | 2.16 ERR_SCG_3715113 | erratum, table |  |
| 24 | 24 | Chapter 2 Device Errata / 2.17 ERR_SSI_3612116 | 2.17 ERR_SSI_3612116 | erratum, table |  |
| 25 | 25 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.1 Synopsys ID: 4171346 / 2.18.2 Synopsys ID: 3900281 | 2.18 ENET Errata | erratum |  |
| 26 | 26 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281 | Impacted Configurations: | text |  |
| 27 | 27 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281 / 2.18.3 Synopsys ID: 3876182 | 2.18.3 | erratum |  |
| 28 | 28 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.3 Synopsys ID: 3876182 / 2.18.4 Synopsys ID: 3873623 | 2.18.4 | erratum |  |
| 29 | 29 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.4 Synopsys ID: 3873623 / 2.18.5 Synopsys ID: 3683170 | 2.18.5 | erratum |  |
| 30 | 30 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.5 Synopsys ID: 3683170 / 2.18.6 Synopsys ID: 3413311 | 2.18.6 | erratum |  |
| 31 | 31 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311 | 2) | text |  |
| 32 | 32 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311 / 2.18.7 Synopsys ID: 3380358 | 2.18.7 | erratum |  |
| 33 | 33 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.7 Synopsys ID: 3380358 / 2.18.8 Synopsys ID: 3379533 | 2.18.8 | erratum |  |
| 34 | 34 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.8 Synopsys ID: 3379533 / 2.18.9 Synopsys ID: 3368939 | 2.18.9 | erratum |  |
| 35 | 35 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.9 Synopsys ID: 3368939 / 2.18.10 Synopsys ID: 3340890 | 2.18.10 Synopsys ID: 3340890 | erratum |  |
| 36 | 36 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890 | - The PPS output (width and interval) is incorrect when the fine correction... | text |  |
| 37 | 37 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890 / 2.18.11 Synopsys ID: 3338201 | 2.18.11 Synopsys ID: 3338201 | erratum |  |
| 38 | 38 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.11 Synopsys ID: 3338201 / 2.18.12 Synopsys ID: 3309847 | 2.18.12 Synopsys ID: 3309847 | erratum |  |
| 39 | 39 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970 | 2.18.13 Synopsys ID: 3294970 | erratum |  |
| 40 | 40 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970 / 2.18.14 Synopsys ID: 3290261 | 2.18.14 Synopsys ID: 3290261 | erratum |  |
| 41 | 41 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.14 Synopsys ID: 3290261 / 2.18.15 Synopsys ID: 3290231 | 2.18.15 Synopsys ID: 3290231 | erratum |  |
| 42 | 42 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.15 Synopsys ID: 3290231 / 2.18.16 Synopsys ID: 3288309 | 2.18.16 Synopsys ID: 3288309 | erratum |  |
| 43 | 43 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.16 Synopsys ID: 3288309 / 2.18.17 Synopsys ID: 6129927 | 2.18.17 Synopsys ID: 6129927 | erratum |  |
| 44 | 44 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.17 Synopsys ID: 6129927 / 2.18.18 Synopsys ID: 3275809 | 2.18.18 Synopsys ID: 3275809 | erratum |  |
| 45 | 45 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.18 Synopsys ID: 3275809 / 2.18.19 Synopsys ID: 4974260 | 2.18.19 Synopsys ID: 4974260 | erratum |  |
| 46 | 46 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.19 Synopsys ID: 4974260 / 2.18.20 Synopsys ID: 5121311 | 2.18.20 Synopsys ID: 5121311 | erratum |  |
| 47 | 47 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.20 Synopsys ID: 5121311 / 2.18.21 Synopsys ID: 5584644 | 2.18.21 Synopsys ID: 5584644 | erratum |  |
| 48 | 48 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644 | Impacted Configurations: Configurations in which the Enable Enhancements to... | text |  |
| 49 | 49 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644 / 2.18.22 Synopsys ID: 5575379 | 2.18.22 Synopsys ID: 5575379 | erratum |  |
| 50 | 50 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.22 Synopsys ID: 5575379 | Consequences: | text |  |
| 51 | 51 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448 | 2.18.23 Synopsys ID: 5938448 | erratum |  |
| 52 | 52 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448 / 2.18.24 Synopsys ID: 3542857 | 2.18.24 Synopsys ID: 3542857 | erratum |  |
| 53 | 53 | Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.24 Synopsys ID: 3542857 | BTR and time intervals of fully executed GCL rows must be greater than 8 PTP... | text |  |
| 54 | 54 | Revision History | Revision History | erratum, revision_history, table |  |

### 4.0A Standard Page Locator Headings

These headings duplicate the table-form Page Locator Map in standard `PAGE-*` form for generic manifest auditors.

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: ""
- `section_path`: "Cover"
- `anchor`: "FC7300F8MDQ Errata Sheet"
- `content_types`: "cover"
- `quality_flags`: "sparse_cover_text"

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: "2"
- `section_path`: "Front Matter / Table of Contents"
- `anchor`: "Table of Contents"
- `content_types`: "erratum, text, toc"
- `quality_flags`: ""

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: "3"
- `section_path`: "Front Matter / Table of Contents"
- `anchor`: "2.18.4 Synopsys ID: 3873623"
- `content_types`: "erratum, revision_history, text, toc"
- `quality_flags`: ""

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: "4"
- `section_path`: "Chapter 1 Introduction / 1.1 Conventions / 1.2 Summary"
- `anchor`: "Chapter 1 Introduction"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: "5"
- `section_path`: "Chapter 1 Introduction / 1.2 Summary / 1.3 Arm-related Errata / 1.4 Errata ID Mapping"
- `anchor`: "1.3"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: "6"
- `section_path`: "Chapter 1 Introduction / 1.4 Errata ID Mapping (continued)"
- `anchor`: "ERR_DMA_001"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: "7"
- `section_path`: "Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113"
- `anchor`: "Chapter 2 Device Errata"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: "8"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `anchor`: "SCM_ADC_GROUP0_RES1, the timestamp stored in the transferred SCM_TSTMP_RES0..."
- `content_types`: "image, table"
- `quality_flags`: ""

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: "9"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113"
- `anchor`: "2.3"
- `content_types`: "erratum, image, table"
- `quality_flags`: ""

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: "10"
- `section_path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"
- `anchor`: "2.4"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: "11"
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112"
- `anchor`: "CN"
- `content_types`: "table"
- `quality_flags`: ""

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: "12"
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112"
- `anchor`: "91"
- `content_types`: "table"
- `quality_flags`: ""

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: "13"
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121"
- `anchor`: "2.6"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: "14"
- `section_path`: "Chapter 2 Device Errata / 2.6 ERR_DMA_3614121"
- `anchor`: "• DMA_CFG_DLASTn"
- `content_types`: "table"
- `quality_flags`: ""

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: "15"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117"
- `anchor`: "2.7"
- `content_types`: "erratum, image, table"
- `quality_flags`: ""

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: "16"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113"
- `anchor`: "2.8"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: "17"
- `section_path`: "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113"
- `anchor`: "2.9"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: "18"
- `section_path`: "Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"
- `anchor`: "2.10 ERR_HSADC_3712112"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: "19"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `anchor`: "2.11 ERR_QDT_3612114"
- `content_types`: "erratum, image, table"
- `quality_flags`: ""

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: "20"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `anchor`: "4)"
- `content_types`: "image, table"
- `quality_flags`: ""

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: "21"
- `section_path`: "Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122"
- `anchor`: "2.12 ERR_RGM_3522113"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: "22"
- `section_path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"
- `anchor`: "2.14 ERR_RGM_3615114"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: "23"
- `section_path`: "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"
- `anchor`: "2.16 ERR_SCG_3715113"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: "24"
- `section_path`: "Chapter 2 Device Errata / 2.17 ERR_SSI_3612116"
- `anchor`: "2.17 ERR_SSI_3612116"
- `content_types`: "erratum, table"
- `quality_flags`: ""

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: "25"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.1 Synopsys ID: 4171346 / 2.18.2 Synopsys ID: 3900281"
- `anchor`: "2.18 ENET Errata"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: "26"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281"
- `anchor`: "Impacted Configurations:"
- `content_types`: "text"
- `quality_flags`: ""

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: "27"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281 / 2.18.3 Synopsys ID: 3876182"
- `anchor`: "2.18.3"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: "28"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.3 Synopsys ID: 3876182 / 2.18.4 Synopsys ID: 3873623"
- `anchor`: "2.18.4"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: "29"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.4 Synopsys ID: 3873623 / 2.18.5 Synopsys ID: 3683170"
- `anchor`: "2.18.5"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: "30"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.5 Synopsys ID: 3683170 / 2.18.6 Synopsys ID: 3413311"
- `anchor`: "2.18.6"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: "31"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311"
- `anchor`: "2)"
- `content_types`: "text"
- `quality_flags`: ""

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: "32"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311 / 2.18.7 Synopsys ID: 3380358"
- `anchor`: "2.18.7"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: "33"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.7 Synopsys ID: 3380358 / 2.18.8 Synopsys ID: 3379533"
- `anchor`: "2.18.8"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: "34"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.8 Synopsys ID: 3379533 / 2.18.9 Synopsys ID: 3368939"
- `anchor`: "2.18.9"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: "35"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.9 Synopsys ID: 3368939 / 2.18.10 Synopsys ID: 3340890"
- `anchor`: "2.18.10 Synopsys ID: 3340890"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: "36"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890"
- `anchor`: "- The PPS output (width and interval) is incorrect when the fine correction..."
- `content_types`: "text"
- `quality_flags`: ""

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: "37"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890 / 2.18.11 Synopsys ID: 3338201"
- `anchor`: "2.18.11 Synopsys ID: 3338201"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: "38"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.11 Synopsys ID: 3338201 / 2.18.12 Synopsys ID: 3309847"
- `anchor`: "2.18.12 Synopsys ID: 3309847"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: "39"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970"
- `anchor`: "2.18.13 Synopsys ID: 3294970"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: "40"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970 / 2.18.14 Synopsys ID: 3290261"
- `anchor`: "2.18.14 Synopsys ID: 3290261"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: "41"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.14 Synopsys ID: 3290261 / 2.18.15 Synopsys ID: 3290231"
- `anchor`: "2.18.15 Synopsys ID: 3290231"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: "42"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.15 Synopsys ID: 3290231 / 2.18.16 Synopsys ID: 3288309"
- `anchor`: "2.18.16 Synopsys ID: 3288309"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: "43"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.16 Synopsys ID: 3288309 / 2.18.17 Synopsys ID: 6129927"
- `anchor`: "2.18.17 Synopsys ID: 6129927"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: "44"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.17 Synopsys ID: 6129927 / 2.18.18 Synopsys ID: 3275809"
- `anchor`: "2.18.18 Synopsys ID: 3275809"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: "45"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.18 Synopsys ID: 3275809 / 2.18.19 Synopsys ID: 4974260"
- `anchor`: "2.18.19 Synopsys ID: 4974260"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: "46"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.19 Synopsys ID: 4974260 / 2.18.20 Synopsys ID: 5121311"
- `anchor`: "2.18.20 Synopsys ID: 5121311"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: "47"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.20 Synopsys ID: 5121311 / 2.18.21 Synopsys ID: 5584644"
- `anchor`: "2.18.21 Synopsys ID: 5584644"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: "48"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644"
- `anchor`: "Impacted Configurations: Configurations in which the Enable Enhancements to..."
- `content_types`: "text"
- `quality_flags`: ""

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: "49"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644 / 2.18.22 Synopsys ID: 5575379"
- `anchor`: "2.18.22 Synopsys ID: 5575379"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: "50"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.22 Synopsys ID: 5575379"
- `anchor`: "Consequences:"
- `content_types`: "text"
- `quality_flags`: ""

### PAGE-0051
- `physical_page`: `51`
- `printed_page`: "51"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448"
- `anchor`: "2.18.23 Synopsys ID: 5938448"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0052
- `physical_page`: `52`
- `printed_page`: "52"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448 / 2.18.24 Synopsys ID: 3542857"
- `anchor`: "2.18.24 Synopsys ID: 3542857"
- `content_types`: "erratum"
- `quality_flags`: ""

### PAGE-0053
- `physical_page`: `53`
- `printed_page`: "53"
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.24 Synopsys ID: 3542857"
- `anchor`: "BTR and time intervals of fully executed GCL rows must be greater than 8 PTP..."
- `content_types`: "text"
- `quality_flags`: ""

### PAGE-0054
- `physical_page`: `54`
- `printed_page`: "54"
- `section_path`: "Revision History"
- `anchor`: "Revision History"
- `content_types`: "erratum, revision_history, table"
- `quality_flags`: ""

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: "Cover"
- `content_types`: ["cover"]
- `summary`: "Cover page identifying the document as FC7300F8MDQ Errata Sheet, Rev.0.5."
- `keywords`: []
- `anchors`:
  - `p1`: "FC7300F8MDQ Errata Sheet"
- `quality_flags`: ["sparse_cover_text", "low_text_density"]

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["erratum", "text", "toc"]
- `summary`: "Table of Contents begins; lists Chapter 1 Introduction and early Chapter 2 errata entries from ADC through ENET subsection 2.18.3."
- `keywords`: ["ERR_ADC_3612112", "ERR_ADC_3612113", "ERR_Debug_3514113", "ERR_Debug_3514112", "ERR_DMA_3613112", "ERR_DMA_3614121", "ERR_FLEXCAN_3519117", "ERR_FLEXCAN_3519113", "ERR_LU_3617113", "ERR_HSADC_3712112", "ERR_QDT_3612114", "ERR_RGM_3522113", "ERR_RGM_3614122", "ERR_RGM_3615114", "ERR_SCG_3712113", "ERR_SCG_3715113"]
- `anchors`:
  - `p2`: "Table of Contents"
- `quality_flags`: []

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["erratum", "revision_history", "text", "toc"]
- `summary`: "Table of Contents continuation listing ENET Synopsys ID subsections 2.18.4 through 2.18.24 and Revision History."
- `keywords`: ["Synopsys ID: 3873623", "Synopsys ID: 3683170", "Synopsys ID: 3413311", "Synopsys ID: 3380358", "Synopsys ID: 3379533", "Synopsys ID: 3368939", "Synopsys ID: 3340890", "Synopsys ID: 3338201", "Synopsys ID: 3309847", "Synopsys ID: 3294970", "Synopsys ID: 3290261", "Synopsys ID: 3290231", "Synopsys ID: 3288309", "Synopsys ID: 6129927", "Synopsys ID: 3275809", "Synopsys ID: 4974260"]
- `anchors`:
  - `p3`: "2.18.4 Synopsys ID: 3873623"
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: "Chapter 1 Introduction / 1.1 Conventions / 1.2 Summary"
- `content_types`: ["erratum", "table"]
- `summary`: "Introduces erratum ID conventions and starts the Summary matrix of affected functions, erratum IDs, descriptions, and status."
- `keywords`: ["ERR_ADC_3612112", "ERR_ADC_3612113", "ERR_Debug_3514113", "ERR_Debug_3514112", "ERR_DMA_3613112", "ERR_DMA_3614121", "ERR_FLEXCAN_3519117", "ERR_FLEXCAN_3519113", "ERR_LU_3617113", "ERR_HSADC_3712112", "FC7300F8MDQ", "MCU", "ID", "ERR_", "ERR", "ADC"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: "Chapter 1 Introduction / 1.2 Summary / 1.3 Arm-related Errata / 1.4 Errata ID Mapping"
- `content_types`: ["erratum", "table"]
- `summary`: "Continues the Summary matrix, defines status A as workaround available, mentions Arm-related errata attachments, and begins Table 1 previous-to-current errata ID mapping."
- `keywords`: ["ERR_QDT_3612114", "ERR_RGM_3522113", "ERR_RGM_3614122", "ERR_RGM_3615114", "ERR_SCG_3712113", "ERR_SCG_3715113", "ERR_SSI_3612116", "ERR_ADC_001", "ERR_ADC_3612112", "ERR_ADC_002", "ERR_ADC_3612113", "ERR_Debug_001", "ERR_Debug_3514113", "ERR_Debug_002", "ERR_Debug_3514112", "ID"]
- `anchors`:
  - `p5`: "1.3"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: "Chapter 1 Introduction / 1.4 Errata ID Mapping (continued)"
- `content_types`: ["erratum", "table"]
- `summary`: "Continues Table 1 Errata ID Mapping for DMA, FLEXCAN, LU, HSADC, QDT, RGM, SCG, and SSI previous IDs to current IDs."
- `keywords`: ["ERR_DMA_001", "ERR_DMA_3613112", "ERR_DMA_002", "ERR_DMA_3614121", "ERR_FLEXCAN_001", "ERR_FLEXCAN_3519117", "ERR_FLEXCAN_002", "ERR_FLEXCAN_3519113", "ERR_LU_001", "ERR_LU_3617113", "ERR_HSADC_001", "ERR_HSADC_3712112", "ERR_QDT_001", "ERR_QDT_3612114", "ERR_RGM_001", "ERR_RGM_3522113"]
- `anchors`:
  - `p6`: "ERR_DMA_001"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113"
- `content_types`: ["erratum", "table"]
- `summary`: "2.1 ERR_ADC_3612112: SIRCCSR[LPWKE] set to 0 while SIRC is always on in Standby prevents ADC triggering in Sequence Group Compare standby applications. | 2.2 ERR_ADC_3612113: Level-triggered timestamp capture can persist while the trigger is high, causing timestamps to reflect..."
- `keywords`: ["ERR_ADC_3612112", "ERR_ADC_3612113", "EN", "ADC", "SIRC", "SCG_SIRCCSR.LPWKE", "SIRCCSR", "LPWKE", "CN", "SCM_TSTMP_RES0", "SCM_TSTMP_RES1", "SCM_TSTMP_RES2", "SCM_TSTMP_RES3", "PTIMER", "SDADC", "DMA"]
- `anchors`:
  - `p7`: "Chapter 2 Device Errata"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `content_types`: ["image", "table"]
- `summary`: "2.2 ERR_ADC_3612113: Level-triggered timestamp capture can persist while the trigger is high, causing timestamps to reflect falling-edge or DMA-request timing rather than true trigger assertion time."
- `keywords`: ["SCM_ADC_GROUP0_RES1", "SCM_TSTMP_RES0", "DMA", "CN", "SCM_TSTMP_RES1", "SCM_TSTMP_RES2", "PTIMER", "SDADC", "SGMP_ADC_GROUP0_RES0", "EN", "ADC", "ADC_CFG1.TRIGMODE", "LU", "TRGSEL", "ERR_ADC_3612113"]
- `anchors`:
  - `p8`: "SCM_ADC_GROUP0_RES1, the timestamp stored in the transferred SCM_TSTMP_RES0..."
- `quality_flags`: ["contains_raster_visual", "contains_table_like_layout"]

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113"
- `content_types`: ["erratum", "image", "table"]
- `summary`: "2.2 ERR_ADC_3612113: Level-triggered timestamp capture can persist while the trigger is high, causing timestamps to reflect falling-edge or DMA-request timing rather than true trigger assertion time. | 2.3 ERR_Debug_3514113: Switching from JTAG to SWD while PTA10 is configured..."
- `keywords`: ["ERR_Debug_3514113", "SDADC", "SCM_TSTMP_RES2", "SCM_TSTMP_RES3", "TSTMP_LOCK", "SCM", "DMA", "CN", "TRIGMODE", "ADC", "EN", "JTAG", "SWD", "PTA10", "ALT7", "ERR_ADC_3612113"]
- `anchors`:
  - `p9`: "2.3"
- `quality_flags`: ["contains_raster_visual", "contains_table_like_layout"]

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"
- `content_types`: ["erratum", "table"]
- `summary`: "2.3 ERR_Debug_3514113: Switching from JTAG to SWD while PTA10 is configured as ALT7 can drive PTA10 low and create a conflict with an external high-level driver. | 2.4 ERR_Debug_3514112: A debug-mode lockstep error can occur after reset when CORE is halted, DWT is enabled,..."
- `keywords`: ["ERR_Debug_3514112", "ERR_DMA_3613112", "EN", "SWD", "PTA10", "ALT7", "CN", "CORE", "DWT", "DWT_CYCCNT", "DMAMUX", "DMA", "DMA0", "DMA1", "ERR_Debug_3514113"]
- `anchors`:
  - `p10`: "2.4"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112"
- `content_types`: ["table"]
- `summary`: "2.5 ERR_DMA_3613112: A DMAMUX slot shared by requests from different modules cannot be assigned simultaneously to DMA0 and DMA1 requests from different modules."
- `keywords`: ["CN", "FCUART", "DMA", "FCUART11", "LU", "LU0", "LU1", "FCUART12", "TPU", "CH8", "TPU0", "CH12", "FCUART13", "CH16", "CH20", "PORTA"]
- `anchors`:
  - `p11`: "CN"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112"
- `content_types`: ["table"]
- `summary`: "2.5 ERR_DMA_3613112: A DMAMUX slot shared by requests from different modules cannot be assigned simultaneously to DMA0 and DMA1 requests from different modules."
- `keywords`: ["DMA", "SRC0", "TPU", "CH27", "TPU0", "PTIMER", "PTIMER1", "SRC3", "PTIMER2", "PTIMER3", "ENET", "PPS", "CH1", "CH2", "CH3", "FTU"]
- `anchors`:
  - `p12`: "91"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121"
- `content_types`: ["erratum", "table"]
- `summary`: "2.5 ERR_DMA_3613112: A DMAMUX slot shared by requests from different modules cannot be assigned simultaneously to DMA0 and DMA1 requests from different modules. | 2.6 ERR_DMA_3614121: DMA Monitor may incorrectly set DMA_MON_ERR_STATUS error flags when users read DMA CFG..."
- `keywords`: ["ERR_DMA_3614121", "FTU", "DMA", "FTU4", "SENT", "SENT1", "EN", "DMAMUX", "DMA0", "DMA1", "CN", "DMA_MON_ERR_STATUS", "CFG", "NOTE", "MON_CHK_EN", "ERR_DMA_3613112"]
- `anchors`:
  - `p13`: "2.6"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: "Chapter 2 Device Errata / 2.6 ERR_DMA_3614121"
- `content_types`: ["table"]
- `summary`: "2.6 ERR_DMA_3614121: DMA Monitor may incorrectly set DMA_MON_ERR_STATUS error flags when users read DMA CFG registers during DMA transfers; applicable to DMA1."
- `keywords`: ["DMA", "MON_CHK_EN", "CRC", "DMA0", "CN", "ERR_DMA_3614121"]
- `anchors`:
  - `p14`: "• DMA_CFG_DLASTn"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117"
- `content_types`: ["erratum", "image", "table"]
- `summary`: "2.7 ERR_FLEXCAN_3519117: Enhanced Rx FIFO can lose a frame when an affected message buffer is locked or when a C/S word write occurs during a move-in process."
- `keywords`: ["ERR_FLEXCAN_3519117", "EN", "FIFO", "CN", "MB", "FLEXCAN"]
- `anchors`:
  - `p15`: "2.7"
- `quality_flags`: ["contains_raster_visual", "contains_table_like_layout"]

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113"
- `content_types`: ["erratum", "table"]
- `summary`: "2.7 ERR_FLEXCAN_3519117: Enhanced Rx FIFO can lose a frame when an affected message buffer is locked or when a C/S word write occurs during a move-in process. | 2.8 ERR_FLEXCAN_3519113: MB0-MB7 cannot safely be used for reception when Enhanced Rx FIFO is enabled because..."
- `keywords`: ["ERR_FLEXCAN_3519113", "MB", "CAN", "BASE", "ID", "RTR", "IDE", "FDF", "DLC", "FD", "RRS", "BRS", "ESI", "FIFO", "CN", "EN"]
- `anchors`:
  - `p16`: "2.8"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0017
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113"
- `content_types`: ["erratum", "table"]
- `summary`: "2.8 ERR_FLEXCAN_3519113: MB0-MB7 cannot safely be used for reception when Enhanced Rx FIFO is enabled because overwritten received messages can remain marked FULL instead of OVERRUN. | 2.9 ERR_LU_3617113: LU Data Unit in flexible mode with continuous dual-edge receive/transmit..."
- `keywords`: ["ERR_LU_3617113", "FIFO", "CAN_ERFSR.ERFDA", "MB0", "MB7", "CODE", "FULL", "OVERRUN", "CN", "MB", "ERFDA", "EN", "DO", "NOT", "LU", "DMA"]
- `anchors`:
  - `p17`: "2.9"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0018
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: "Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"
- `content_types`: ["erratum", "table"]
- `summary`: "2.9 ERR_LU_3617113: LU Data Unit in flexible mode with continuous dual-edge receive/transmit can fail to generate the final CPU interrupt when DMA and interrupts are both enabled. | 2.10 ERR_HSADC_3712112: HSADC may produce one or two erroneous conversion results at the start of..."
- `keywords`: ["ERR_HSADC_3712112", "EN", "DMA", "CN", "HSADC", "ADC", "ERR_LU_3617113"]
- `anchors`:
  - `p18`: "2.10 ERR_HSADC_3712112"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0019
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `content_types`: ["erratum", "image", "table"]
- `summary`: "2.11 ERR_QDT_3612114: LECNT and POSDCNT are 16-bit counters and may be insufficient to record Phase_A to Phase_B rising-edge time for low-speed tooth_period calculation."
- `keywords`: ["ERR_QDT_3612114", "EN", "LECNT", "POSDCNT", "CN", "LECTN", "RPM", "PIT", "CV0", "POSCNT", "QUADIR", "NOTE", "QDT", "QUAD", "IC", "CV1"]
- `anchors`:
  - `p19`: "2.11 ERR_QDT_3612114"
- `quality_flags`: ["contains_raster_visual", "contains_table_like_layout"]

### SEG-0020
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `content_types`: ["image", "table"]
- `summary`: "2.11 ERR_QDT_3612114: LECNT and POSDCNT are 16-bit counters and may be insufficient to record Phase_A to Phase_B rising-edge time for low-speed tooth_period calculation."
- `keywords`: ["POSCNT", "QUAD", "NOTE", "CN", "RPM", "IC", "CV0", "CV1", "ERR_QDT_3612114"]
- `anchors`:
  - `p20`: "4)"
- `quality_flags`: ["contains_raster_visual", "contains_table_like_layout"]

### SEG-0021
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: "Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122"
- `content_types`: ["erratum", "table"]
- `summary`: "2.12 ERR_RGM_3522113: RESET_B AON_CLK filter plus certain external RC filter values can cause the chip to stay in or repeatedly enter reset for a long period. | 2.13 ERR_RGM_3614122: CPUx core-only reset with delayed reset enabled can trigger unexpected bus errors if the..."
- `keywords`: ["ERR_RGM_3522113", "ERR_RGM_3614122", "EN", "RESET_B", "AON_CLK", "RC", "VIH", "CN", "CPU0", "LOCKUP", "SYSRST", "WDOG", "INTM", "SWRST"]
- `anchors`:
  - `p21`: "2.12 ERR_RGM_3522113"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0022
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"
- `content_types`: ["erratum", "table"]
- `summary`: "2.13 ERR_RGM_3614122: CPUx core-only reset with delayed reset enabled can trigger unexpected bus errors if the reset-target CPUx does not enter while(1) when core reset is asserted. | 2.14 ERR_RGM_3615114: When CPU1 reset is configured as core-only reset, AXBS bus can halt for..."
- `keywords`: ["ERR_RGM_3615114", "ERR_SCG_3712113", "EN", "TCM", "RGM", "CPU", "CN", "CPU1", "LOCKUP", "SYSRST", "WDOG", "INTM", "SWRST", "AXBS", "PSTDIV1", "PLL0_CFG"]
- `anchors`:
  - `p22`: "2.14 ERR_RGM_3615114"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0023
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"
- `content_types`: ["erratum", "table"]
- `summary`: "2.15 ERR_SCG_3712113: PSTDIV1 bit field value 1 in PLL0_CFG or PLL1_CFG creates a low-probability PLL0_CLK1 or PLL1_CLK1 malfunction when enabled. | 2.16 ERR_SCG_3715113: With FOSC bypass selected as the PLL reference and 2-4 MHz input, asynchronous reset in pre-divider logic..."
- `keywords`: ["ERR_SCG_3715113", "EN", "PSTDIV1", "PLL0CFG", "PLL1CFG", "DIVH", "DIVM", "DIVL", "PLL0DIV", "PLL1DIV", "CN", "FOSC", "PLL", "SCG_PLL0CFG.PREDIV", "SCG_PLL0CSR.PLLLK", "SCG_PLL0CSR.VLD"]
- `anchors`:
  - `p23`: "2.16 ERR_SCG_3715113"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0024
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: "Chapter 2 Device Errata / 2.17 ERR_SSI_3612116"
- `content_types`: ["erratum", "table"]
- `summary`: "2.17 ERR_SSI_3612116: AK protocol SSI sensor current slew can cause inm glitches on inh edges, and the SSI filter bit width may not fully suppress unexpected glitches."
- `keywords`: ["ERR_SSI_3612116", "EN", "RC", "AK", "SSI", "CN"]
- `anchors`:
  - `p24`: "2.17 ERR_SSI_3612116"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0025
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.1 Synopsys ID: 4171346 / 2.18.2 Synopsys ID: 3900281"
- `content_types`: ["erratum"]
- `summary`: "2.18.1 Synopsys ID 4171346: Incorrect VLAN Tag Filter Fail Based Receive Queuing Ignores RA Bit of MAC_Packet_Filter Register | 2.18.2 Synopsys ID 3900281: MAC_System_Time_Higher_Word_Seconds Register Value Updated by DWC_ether_qos is Not Synchronized to the Transmit..."
- `keywords`: ["Synopsys ID: 4171346", "Synopsys ID: 3900281", "ENET", "FC7300", "ID", "VLAN", "RA", "VFFQ", "VFFQE", "VTFE", "MAC", "DMA", "VL", "SYNOPSYS-4171346", "SYNOPSYS-3900281"]
- `anchors`:
  - `p25`: "2.18 ENET Errata"
- `quality_flags`: []

### SEG-0026
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281"
- `content_types`: ["text"]
- `summary`: "2.18.2 Synopsys ID 3900281: MAC_System_Time_Higher_Word_Seconds Register Value Updated by DWC_ether_qos is Not Synchronized to the Transmit Timestamping Functions"
- `keywords`: ["EQOS", "IEEE", "PTP", "UDP", "IP", "CSR", "MAC", "TSIE", "TSSOVF", "TSIS", "SNAPTYPSEL", "TSMSTRENA", "TSEVNTENA", "SYNOPSYS-3900281"]
- `anchors`:
  - `p26`: "Impacted Configurations:"
- `quality_flags`: []

### SEG-0027
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281 / 2.18.3 Synopsys ID: 3876182"
- `content_types`: ["erratum"]
- `summary`: "2.18.2 Synopsys ID 3900281: MAC_System_Time_Higher_Word_Seconds Register Value Updated by DWC_ether_qos is Not Synchronized to the Transmit Timestamping Functions | 2.18.3 Synopsys ID 3876182: MAC Unable to Identify PTP SYNC and Follow_Up Messages with Peer Delay Reserved..."
- `keywords`: ["Synopsys ID: 3876182", "PTP", "ID", "MAC", "SYNC", "IEEE", "AV8021ASMEN", "SNAPTYPSEL", "TSEVNTENA", "TSMSTRENA", "TSENALL", "SYNOPSYS-3900281", "SYNOPSYS-3876182"]
- `anchors`:
  - `p27`: "2.18.3"
- `quality_flags`: []

### SEG-0028
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.3 Synopsys ID: 3876182 / 2.18.4 Synopsys ID: 3873623"
- `content_types`: ["erratum"]
- `summary`: "2.18.3 Synopsys ID 3876182: MAC Unable to Identify PTP SYNC and Follow_Up Messages with Peer Delay Reserved Multicast Address in the 802.1AS Mixed Mode Operation | 2.18.4 Synopsys ID 3873623: Un-Correctable FSM Timeout Safety Interrupt Incorrectly Generated for Long Waiting FSM..."
- `keywords`: ["Synopsys ID: 3873623", "AV8021ASMEN", "SNAPTYPSEL", "TSEVNTENA", "PTP", "SYNC", "MAC", "PMT", "TSA", "ID", "FSM", "DMA", "ST", "DMA_CH", "TE", "TBU"]
- `anchors`:
  - `p28`: "2.18.4"
- `quality_flags`: []

### SEG-0029
- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.4 Synopsys ID: 3873623 / 2.18.5 Synopsys ID: 3683170"
- `content_types`: ["erratum"]
- `summary`: "2.18.4 Synopsys ID 3873623: Un-Correctable FSM Timeout Safety Interrupt Incorrectly Generated for Long Waiting FSM States in the Normal Operation | 2.18.5 Synopsys ID 3683170: Incorrect Routing of Rx Packet or Incorrect Splitting of Header Payload When CDC Delay is Different in..."
- `keywords`: ["Synopsys ID: 3683170", "FSM", "MAC", "DMA", "LPI", "TE", "LPIEN", "LPITXA", "TMOUTEN", "NTMRMD", "TTES", "ID", "CDC", "EQOS", "AHB", "AXI"]
- `anchors`:
  - `p29`: "2.18.5"
- `quality_flags`: []

### SEG-0030
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.5 Synopsys ID: 3683170 / 2.18.6 Synopsys ID: 3413311"
- `content_types`: ["erratum"]
- `summary`: "2.18.5 Synopsys ID 3683170: Incorrect Routing of Rx Packet or Incorrect Splitting of Header Payload When CDC Delay is Different in the Asynchronous FIFOs Between Receiver Clock and Application Clock | 2.18.6 Synopsys ID 3413311: Incorrect Handling of Application Bus Error in..."
- `keywords`: ["Synopsys ID: 3413311", "MAC", "FIFO", "EOF", "CDC", "MTL", "DMA", "ID", "SYNOPSYS-3683170", "SYNOPSYS-3413311"]
- `anchors`:
  - `p30`: "2.18.6"
- `quality_flags`: []

### SEG-0031
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311"
- `content_types`: ["text"]
- `summary`: "2.18.6 Synopsys ID 3413311: Incorrect Handling of Application Bus Error in Certain Boundary Conditions"
- `keywords`: ["DMA", "OSF", "DMA_CH", "OSP", "MAC", "AXI", "STXSTSF", "TXSTSFSTS", "ISR", "MTL", "SYNOPSYS-3413311"]
- `anchors`:
  - `p31`: "2)"
- `quality_flags`: []

### SEG-0032
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311 / 2.18.7 Synopsys ID: 3380358"
- `content_types`: ["erratum"]
- `summary`: "2.18.6 Synopsys ID 3413311: Incorrect Handling of Application Bus Error in Certain Boundary Conditions | 2.18.7 Synopsys ID 3380358: Pre-Emptable Traffic is Incorrectly Blocked Even When the Available Express Traffic Cannot be Scheduled"
- `keywords`: ["Synopsys ID: 3380358", "OSF", "DMA", "MAC", "STXSTSF", "TXSTSFSTS", "ID", "EST", "SYNOPSYS-3413311", "SYNOPSYS-3380358"]
- `anchors`:
  - `p32`: "2.18.7"
- `quality_flags`: []

### SEG-0033
- `physical_pages`: [33]
- `printed_pages`: ["33"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.7 Synopsys ID: 3380358 / 2.18.8 Synopsys ID: 3379533"
- `content_types`: ["erratum"]
- `summary`: "2.18.7 Synopsys ID 3380358: Pre-Emptable Traffic is Incorrectly Blocked Even When the Available Express Traffic Cannot be Scheduled | 2.18.8 Synopsys ID 3379533: Larger Interpacket Gap When WRR Algorithm is Selected for Scheduling Packets from Transmit Queues"
- `keywords`: ["Synopsys ID: 3379533", "IEEE", "EST", "FPE", "GCL", "CBS", "ID", "WRR", "EQOS", "CORE", "ISCQW", "SYNOPSYS-3380358", "SYNOPSYS-3379533"]
- `anchors`:
  - `p33`: "2.18.8"
- `quality_flags`: []

### SEG-0034
- `physical_pages`: [34]
- `printed_pages`: ["34"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.8 Synopsys ID: 3379533 / 2.18.9 Synopsys ID: 3368939"
- `content_types`: ["erratum"]
- `summary`: "2.18.8 Synopsys ID 3379533: Larger Interpacket Gap When WRR Algorithm is Selected for Scheduling Packets from Transmit Queues | 2.18.9 Synopsys ID 3368939: Incorrect Packet Size Related Head-Of-Line Blocking Error When Gates of Gate Control List are Closed"
- `keywords`: ["Synopsys ID: 3368939", "IPG", "WRR", "SCHALG", "ISCQW", "MAC", "ID", "EST", "GCL", "HLBF", "SYNOPSYS-3379533", "SYNOPSYS-3368939"]
- `anchors`:
  - `p34`: "2.18.9"
- `quality_flags`: []

### SEG-0035
- `physical_pages`: [35]
- `printed_pages`: ["35"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.9 Synopsys ID: 3368939 / 2.18.10 Synopsys ID: 3340890"
- `content_types`: ["erratum"]
- `summary`: "2.18.9 Synopsys ID 3368939: Incorrect Packet Size Related Head-Of-Line Blocking Error When Gates of Gate Control List are Closed | 2.18.10 Synopsys ID 3340890: Flexible PPS Output Incorrectly Generated on Target Time Error or When Fine Correction Method is Enabled in the..."
- `keywords`: ["Synopsys ID: 3340890", "HLBF", "GCL", "QHLBF", "EST", "DDBF", "ID", "PPS", "IEEE", "TSCTRLSSR", "TSCFUPDT", "ESTI", "SYNOPSYS-3368939", "SYNOPSYS-3340890"]
- `anchors`:
  - `p35`: "2.18.10 Synopsys ID: 3340890"
- `quality_flags`: []

### SEG-0036
- `physical_pages`: [36]
- `printed_pages`: ["36"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890"
- `content_types`: ["text"]
- `summary`: "2.18.10 Synopsys ID 3340890: Flexible PPS Output Incorrectly Generated on Target Time Error or When Fine Correction Method is Enabled in the External Timestamping Mode, and Sub-Nano Second not Supported in the Binary Rollover Mode"
- `keywords`: ["PPS", "TSCFUPDT", "ESTI", "CSR", "PTP", "PPSEN0", "PPSCTRL_PPSCMD", "TSADDREG", "SYNOPSYS-3340890"]
- `anchors`:
  - `p36`: "- The PPS output (width and interval) is incorrect when the fine correction..."
- `quality_flags`: []

### SEG-0037
- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890 / 2.18.11 Synopsys ID: 3338201"
- `content_types`: ["erratum"]
- `summary`: "2.18.10 Synopsys ID 3340890: Flexible PPS Output Incorrectly Generated on Target Time Error or When Fine Correction Method is Enabled in the External Timestamping Mode, and Sub-Nano Second not Supported in the Binary Rollover Mode | 2.18.11 Synopsys ID 3338201: Unintended CSR..."
- `keywords`: ["Synopsys ID: 3338201", "PPSINT0", "PPS", "PPSWIDTH0", "ID", "CSR", "OB", "COM", "DMA", "SYNOPSYS-3340890", "SYNOPSYS-3338201"]
- `anchors`:
  - `p37`: "2.18.11 Synopsys ID: 3338201"
- `quality_flags`: []

### SEG-0038
- `physical_pages`: [38]
- `printed_pages`: ["38"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.11 Synopsys ID: 3338201 / 2.18.12 Synopsys ID: 3309847"
- `content_types`: ["erratum"]
- `summary`: "2.18.11 Synopsys ID 3338201: Unintended CSR Byte Update due to Missing Byte-Enable Qualification | 2.18.12 Synopsys ID 3309847: MAC Incorrectly Discards the Received Packets When Preamble Byte Does not Precede SFD or SMD"
- `keywords`: ["Synopsys ID: 3309847", "MAC", "ID", "SFD", "SMD", "IEEE", "MII", "GMII", "PREAMBLE", "SYNOPSYS-3338201", "SYNOPSYS-3309847"]
- `anchors`:
  - `p38`: "2.18.12 Synopsys ID: 3309847"
- `quality_flags`: []

### SEG-0039
- `physical_pages`: [39]
- `printed_pages`: ["39"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970"
- `content_types`: ["erratum"]
- `summary`: "2.18.13 Synopsys ID 3294970: DMA Halts Operation or Incorrect or no Corrupt Packet on Detecting Uncorrectable Safety Error"
- `keywords`: ["Synopsys ID: 3294970", "ID", "DMA", "SECDED", "ECC", "CRC", "OSF", "DMA_CH", "CD", "MTL", "TSO", "AXI", "MAC", "DPP", "SYNOPSYS-3294970"]
- `anchors`:
  - `p39`: "2.18.13 Synopsys ID: 3294970"
- `quality_flags`: []

### SEG-0040
- `physical_pages`: [40]
- `printed_pages`: ["40"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970 / 2.18.14 Synopsys ID: 3290261"
- `content_types`: ["erratum"]
- `summary`: "2.18.13 Synopsys ID 3294970: DMA Halts Operation or Incorrect or no Corrupt Packet on Detecting Uncorrectable Safety Error | 2.18.14 Synopsys ID 3290261: Scheduled Transmit Packet not Sent in the Allotted Slot or the Remaining Fragment of a Preempted Packet Incorrectly Dropped..."
- `keywords`: ["Synopsys ID: 3290261", "DMA", "MAC", "CRC", "ECC", "EOF", "MTL", "ID", "EST", "GCL", "RAM", "SYNOPSYS-3294970", "SYNOPSYS-3290261"]
- `anchors`:
  - `p40`: "2.18.14 Synopsys ID: 3290261"
- `quality_flags`: []

### SEG-0041
- `physical_pages`: [41]
- `printed_pages`: ["41"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.14 Synopsys ID: 3290261 / 2.18.15 Synopsys ID: 3290231"
- `content_types`: ["erratum"]
- `summary`: "2.18.14 Synopsys ID 3290261: Scheduled Transmit Packet not Sent in the Allotted Slot or the Remaining Fragment of a Preempted Packet Incorrectly Dropped due to Scheduling Timeout in the EST GCL | 2.18.15 Synopsys ID 3290231: Transmit MMC Counters Incorrectly Updated for Frame..."
- `keywords`: ["Synopsys ID: 3290231", "GCL", "PTP", "EST", "DFBS", "MAC", "ID", "MMC", "SYNOPSYS-3290261", "SYNOPSYS-3290231"]
- `anchors`:
  - `p41`: "2.18.15 Synopsys ID: 3290231"
- `quality_flags`: []

### SEG-0042
- `physical_pages`: [42]
- `printed_pages`: ["42"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.15 Synopsys ID: 3290231 / 2.18.16 Synopsys ID: 3288309"
- `content_types`: ["erratum"]
- `summary`: "2.18.15 Synopsys ID 3290231: Transmit MMC Counters Incorrectly Updated for Frame Preemption Packets When the Accumulated Byte Counter Overruns | 2.18.16 Synopsys ID 3288309: Transmission Status not Updated in the Status Register for Back-to-Back Frame Preemption Verify or..."
- `keywords`: ["Synopsys ID: 3288309", "MAC", "MMC", "ID", "SVER", "SRSP", "MAC_FPE_CTRL_STS", "TVER", "TRSP", "SYNOPSYS-3290231", "SYNOPSYS-3288309"]
- `anchors`:
  - `p42`: "2.18.16 Synopsys ID: 3288309"
- `quality_flags`: []

### SEG-0043
- `physical_pages`: [43]
- `printed_pages`: ["43"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.16 Synopsys ID: 3288309 / 2.18.17 Synopsys ID: 6129927"
- `content_types`: ["erratum"]
- `summary`: "2.18.16 Synopsys ID 3288309: Transmission Status not Updated in the Status Register for Back-to-Back Frame Preemption Verify or Respond Packets | 2.18.17 Synopsys ID 6129927: Last Instruction Index Status of Flexible Receive Parser Updated in Incorrect Field of the Receive..."
- `keywords`: ["Synopsys ID: 6129927", "MAC", "SVER", "MAC_FPE_CTRL_STS", "SRSP", "TVER", "ID", "RDES2", "MADRM", "FRP", "FRPE", "RX", "ELIRS", "RXPS", "SYNOPSYS-3288309", "SYNOPSYS-6129927"]
- `anchors`:
  - `p43`: "2.18.17 Synopsys ID: 6129927"
- `quality_flags`: []

### SEG-0044
- `physical_pages`: [44]
- `printed_pages`: ["44"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.17 Synopsys ID: 6129927 / 2.18.18 Synopsys ID: 3275809"
- `content_types`: ["erratum"]
- `summary`: "2.18.17 Synopsys ID 6129927: Last Instruction Index Status of Flexible Receive Parser Updated in Incorrect Field of the Receive Descriptor | 2.18.18 Synopsys ID 3275809: Incorrect Description of MAC_Address0_High Register in the Databook"
- `keywords`: ["Synopsys ID: 3275809", "RDES2", "FRP", "FRPE", "RX", "ELIRS", "RXPS", "IP", "MAC", "ID", "CSR", "DA", "MII", "LS", "SYNOPSYS-6129927", "SYNOPSYS-3275809"]
- `anchors`:
  - `p44`: "2.18.18 Synopsys ID: 3275809"
- `quality_flags`: []

### SEG-0045
- `physical_pages`: [45]
- `printed_pages`: ["45"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.18 Synopsys ID: 3275809 / 2.18.19 Synopsys ID: 4974260"
- `content_types`: ["erratum"]
- `summary`: "2.18.18 Synopsys ID 3275809: Incorrect Description of MAC_Address0_High Register in the Databook | 2.18.19 Synopsys ID 4974260: DMA Incorrectly Fetches Invalid Descriptors When Tail Pointer is Updated with Same Address"
- `keywords`: ["Synopsys ID: 4974260", "CSR", "MAC", "ID", "DMA", "EQOS", "CORE", "MTL", "DMA_CH", "OWN", "SYNOPSYS-3275809", "SYNOPSYS-4974260"]
- `anchors`:
  - `p45`: "2.18.19 Synopsys ID: 4974260"
- `quality_flags`: []

### SEG-0046
- `physical_pages`: [46]
- `printed_pages`: ["46"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.19 Synopsys ID: 4974260 / 2.18.20 Synopsys ID: 5121311"
- `content_types`: ["erratum"]
- `summary`: "2.18.19 Synopsys ID 4974260: DMA Incorrectly Fetches Invalid Descriptors When Tail Pointer is Updated with Same Address | 2.18.20 Synopsys ID 5121311: IEEE 802.1Qav CBS Algorithm Does Not Include Minimum IPG of Packet in Credit Computation"
- `keywords`: ["Synopsys ID: 5121311", "DMA", "OWN", "ID", "IEEE", "CBS", "IPG", "AV", "TXQ", "MAC", "SYNOPSYS-4974260", "SYNOPSYS-5121311"]
- `anchors`:
  - `p46`: "2.18.20 Synopsys ID: 5121311"
- `quality_flags`: []

### SEG-0047
- `physical_pages`: [47]
- `printed_pages`: ["47"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.20 Synopsys ID: 5121311 / 2.18.21 Synopsys ID: 5584644"
- `content_types`: ["erratum"]
- `summary`: "2.18.20 Synopsys ID 5121311: IEEE 802.1Qav CBS Algorithm Does Not Include Minimum IPG of Packet in Credit Computation | 2.18.21 Synopsys ID 5584644: Extraneous Transmit IPG when EST Feature Enabled"
- `keywords`: ["Synopsys ID: 5584644", "IEEE", "MAC", "CRC", "FCS", "IPG", "CBS", "TXQ", "IP", "TXQ1", "TXQ0", "ID", "EST", "SYNOPSYS-5121311", "SYNOPSYS-5584644"]
- `anchors`:
  - `p47`: "2.18.21 Synopsys ID: 5584644"
- `quality_flags`: []

### SEG-0048
- `physical_pages`: [48]
- `printed_pages`: ["48"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644"
- `content_types`: ["text"]
- `summary`: "2.18.21 Synopsys ID 5584644: Extraneous Transmit IPG when EST Feature Enabled"
- `keywords`: ["EST", "MAC", "SFD", "IPG", "SPRAM", "FIFO", "CDC", "SRAM", "TSN", "TI", "GCL", "SYNOPSYS-5584644"]
- `anchors`:
  - `p48`: "Impacted Configurations: Configurations in which the Enable Enhancements to..."
- `quality_flags`: []

### SEG-0049
- `physical_pages`: [49]
- `printed_pages`: ["49"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644 / 2.18.22 Synopsys ID: 5575379"
- `content_types`: ["erratum"]
- `summary`: "2.18.21 Synopsys ID 5584644: Extraneous Transmit IPG when EST Feature Enabled | 2.18.22 Synopsys ID 5575379: Incorrect Execution of EST GCL Iterations When Extended Gate Control Enabled"
- `keywords`: ["Synopsys ID: 5575379", "PS", "FES", "EST", "GCL", "IP", "TI", "SFD", "IPG", "MAC", "GMII", "ID", "DWC_EQOS_AV_EST", "CTR", "LLR", "PTP"]
- `anchors`:
  - `p49`: "2.18.22 Synopsys ID: 5575379"
- `quality_flags`: []

### SEG-0050
- `physical_pages`: [50]
- `printed_pages`: ["50"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.22 Synopsys ID: 5575379"
- `content_types`: ["text"]
- `summary`: "2.18.22 Synopsys ID 5575379: Incorrect Execution of EST GCL Iterations When Extended Gate Control Enabled"
- `keywords`: ["GCL", "BTR", "LLR", "TI", "PTP", "CTR", "EST", "IP", "MAC", "GMII", "SYNOPSYS-5575379"]
- `anchors`:
  - `p50`: "Consequences:"
- `quality_flags`: []

### SEG-0051
- `physical_pages`: [51]
- `printed_pages`: ["51"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448"
- `content_types`: ["erratum"]
- `summary`: "2.18.23 Synopsys ID 5938448: Receive DMA-MTL Interface Halts When Descriptor is not Available for Timestamp Status Write"
- `keywords`: ["Synopsys ID: 5938448", "ID", "DMA", "MTL", "EQOS", "AHB", "AXI3", "AXI4", "IEEE", "TSA", "RDES1", "HOL", "RPF", "DMA_CH", "AIS", "RBU"]
- `anchors`:
  - `p51`: "2.18.23 Synopsys ID: 5938448"
- `quality_flags`: []

### SEG-0052
- `physical_pages`: [52]
- `printed_pages`: ["52"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448 / 2.18.24 Synopsys ID: 3542857"
- `content_types`: ["erratum"]
- `summary`: "2.18.23 Synopsys ID 5938448: Receive DMA-MTL Interface Halts When Descriptor is not Available for Timestamp Status Write | 2.18.24 Synopsys ID 3542857: Gate Control List Switching is Incorrect for Intermediate Cycles When CTR is Less Than GCL Execution Time"
- `keywords`: ["Synopsys ID: 3542857", "DMA", "MAC", "IP", "TSENA", "TSENALL", "TSA", "RDES1", "LD", "RDES3", "ID", "CTR", "GCL", "EST", "BTR", "TI"]
- `anchors`:
  - `p52`: "2.18.24 Synopsys ID: 3542857"
- `quality_flags`: []

### SEG-0053
- `physical_pages`: [53]
- `printed_pages`: ["53"]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.24 Synopsys ID: 3542857"
- `content_types`: ["text"]
- `summary`: "2.18.24 Synopsys ID 3542857: Gate Control List Switching is Incorrect for Intermediate Cycles When CTR is Less Than GCL Execution Time"
- `keywords`: ["BTR", "GCL", "PTP", "CTR", "SYNOPSYS-3542857"]
- `anchors`:
  - `p53`: "BTR and time intervals of fully executed GCL rows must be greater than 8 PTP..."
- `quality_flags`: []

### SEG-0054
- `physical_pages`: [54]
- `printed_pages`: ["54"]
- `section_path`: "Revision History"
- `content_types`: ["erratum", "revision_history", "table"]
- `summary`: "Revision History table from revision 0.1 through 0.5, including the Rev.0.5 removal of ERR_SOC_001, addition of ERR_SCG_3715113, and updated ID mapping."
- `keywords`: ["ERR_DMA_001", "ERR_DMA_002", "ERR_RGM_002", "ERR_RGM_003", "ERR_Debug_001", "ERR_Debug_002", "ERR_LU_001", "ERR_SCG_001", "ERR_HSADC_001", "ERR_SOC_001", "ERR_SCG_3715113", "Synopsys ID: 6129927", "Synopsys ID: 5938448", "ENET", "ID"]
- `anchors`:
  - `p54`: "Revision History"
- `quality_flags`: ["contains_table_like_layout"]

## 6. Table Index

### 6.1 Formal and High-Value Tables

#### TBL-0004-0005-SUMMARY
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0004-0005-SUMMARY"
- `caption`: "Summary of identified device limitations"
- `physical_pages`: [4, 5]
- `printed_pages`: ["4", "5"]
- `section_path`: "Chapter 1 Introduction / 1.2 Summary"
- `bbox_by_page`: {"4": [36.2, 272.6, 559.1, 769.4], "5": [36.2, 37.0, 559.1, 482.1]}
- `key_fields`: ["Function", "Erratum ID", "Description", "Status*"]
- `summary`: "Quick-reference matrix of functions, current erratum IDs, defect descriptions, and status A/N meaning."
- `anchor`: "The following table summarizes the identified device limitations for quick reference."
- `confidence`: 0.91
- `quality_flags`: ["cross_page_table", "no_source_table_number"]

#### TBL-0005-0006-ERRATA-ID-MAPPING
- `source_table_number`: "Table 1"
- `generated_table_number`: null
- `caption`: "Errata ID Mapping"
- `physical_pages`: [5, 6]
- `printed_pages`: ["5", "6"]
- `section_path`: "Chapter 1 Introduction / 1.4 Errata ID Mapping"
- `bbox_by_page`: {"5": [36.2, 679.0, 559.1, 771.7], "6": [36.2, 37.0, 559.1, 259.3]}
- `key_fields`: ["Previous Errata ID", "Current Errata ID"]
- `summary`: "Maps previous errata IDs such as ERR_ADC_001 to current IDs such as ERR_ADC_3612112."
- `anchor`: "Table 1. Errata ID Mapping"
- `confidence`: 0.94
- `quality_flags`: ["cross_page_table"]

#### TBL-0011-0013-DMAMUX-SLOT-CONFLICT
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-0013-DMAMUX-SLOT-CONFLICT"
- `caption`: "DMAMUX slots with conflicting requests from different modules"
- `physical_pages`: [11, 12, 13]
- `printed_pages`: ["11", "12", "13"]
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112"
- `bbox_by_page`: {"11": [36.3, 37.2, 559.2, 775.8], "12": [36.2, 37.4, 559.2, 770.3], "13": [36.3, 37.4, 559.2, 90.2]}
- `key_fields`: ["Slot_Num", "Module", "DMA_Request Description", "Instance"]
- `summary`: "Lists DMAMUX slot numbers whose DMA requests from multiple modules cannot be assigned to DMA0 and DMA1 from different modules simultaneously."
- `anchor`: "Slot_Num Module DMA_Request Description Instance"
- `confidence`: 0.86
- `quality_flags`: ["cross_page_table", "no_source_table_number", "table_structure_continuation"]

#### TBL-0054-REVISION-HISTORY
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0054-REVISION-HISTORY"
- `caption`: "Revision History"
- `physical_pages`: [54]
- `printed_pages`: ["54"]
- `section_path`: "Revision History"
- `bbox_by_page`: {"54": [36.2, 84.7, 559.1, 497.1]}
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Lists revision history from 0.1 through 0.5, including ID remapping and addition/removal of errata."
- `anchor`: "Revision History"
- `confidence`: 0.88
- `quality_flags`: ["no_source_table_number", "table_extracted_from_history_layout"]

### 6.2 Generated Table-like Panel Index

The source PDF uses two-column EN/CN boxes and continuation boxes for many erratum descriptions and workarounds. The following entries index those table-like layouts for navigation; they are not source-numbered tables.

#### TBL-PANEL-0007-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0007-001"
- `caption`: "Detected description_panel_or_continuation on page 7"
- `physical_page`: 7
- `printed_page`: "7"
- `section_path`: "Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113"
- `bbox`: [36.3, 150.2, 559.2, 378.4]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN In the ADC Sequence Group Compare standby mode application, when the SIRC is not configured to be always..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0007-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0007-002"
- `caption`: "Detected description_panel_or_continuation on page 7"
- `physical_page`: 7
- `printed_page`: "7"
- `section_path`: "Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113"
- `bbox`: [36.3, 424.8, 559.2, 522.5]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN To prevent the ADC from failing to capture the trigger for Sequence Group Compare applications, the..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0007-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0007-003"
- `caption`: "Detected workaround_panel_or_continuation on page 7"
- `physical_page`: 7
- `printed_page`: "7"
- `section_path`: "Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113"
- `bbox`: [36.3, 589.6, 559.2, 748.4]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN There are 4 registers: SCM_TSTMP_RES0, SCM_TSTMP_RES1, SCM_TSTMP_RES2, and SCM_TSTMP_RES3, which are used..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0008-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0008-001"
- `caption`: "Detected erratum_panel on page 8"
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `bbox`: [36.3, 37.1, 559.2, 452.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "SCM_ADC_GROUP0_RES1, the timestamp stored in the transferred SCM_TSTMP_RES0 only represents the assertion..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0008-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0008-002"
- `caption`: "Detected workaround_panel_or_continuation on page 8"
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `bbox`: [36.3, 498.5, 559.2, 785.9]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN For ADC and PTIMER: To avoid the issue that the captured timestamp does not represent the trigger..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0009-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0009-001"
- `caption`: "Detected description_panel_or_continuation on page 9"
- `physical_page`: 9
- `printed_page`: "9"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113"
- `bbox`: [36.3, 37.1, 559.2, 570.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "For SDADC: SCM_TSTMP_RES2 and SCM_TSTMP_RES3 capture/lock may have this issue only when..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0009-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0009-002"
- `caption`: "Detected erratum_panel on page 9"
- `physical_page`: 9
- `printed_page`: "9"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113"
- `bbox`: [36.3, 637.4, 559.2, 718.1]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN When the user switches from JTAG to SWD for programming or debugging, if PTA10 is configured as ALT7, the..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0010-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0010-001"
- `caption`: "Detected description_panel_or_continuation on page 10"
- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"
- `bbox`: [36.3, 60.2, 559.2, 123.9]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Before switching to SWD mode, if PTA10 is configured as ALT7, ensure that the PTA10 has no external..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0010-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0010-002"
- `caption`: "Detected description_panel_or_continuation on page 10"
- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"
- `bbox`: [36.3, 191.0, 559.2, 467.3]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN In the debug mode, a lockstep error may happen after reset if the below conditions are all meet: 1) CORE..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0010-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0010-003"
- `caption`: "Detected workaround_panel_or_continuation on page 10"
- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"
- `bbox`: [36.3, 513.6, 559.2, 652.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN There are two workarounds available: - Workaround 1: After the chip is halted, disable DWT before reset. -..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0010-004
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0010-004"
- `caption`: "Detected workaround_panel_or_continuation on page 10"
- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"
- `bbox`: [36.3, 719.3, 559.2, 776.6]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN The DMAMUX slots listed in the following table are available with DMA requests from different modules...."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0013-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0013-002"
- `caption`: "Detected description_panel_or_continuation on page 13"
- `physical_page`: 13
- `printed_page`: "13"
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121"
- `bbox`: [36.3, 136.8, 559.2, 183.7]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN These DMAMUX slots must be assigned with DMA0 and DMA1 requests from the same module simultaneously."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0013-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0013-003"
- `caption`: "Detected description_panel_or_continuation on page 13"
- `physical_page`: 13
- `printed_page`: "13"
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121"
- `bbox`: [36.3, 257.3, 559.2, 384.0]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN The DMA Monitor may incorrectly set error flags in DMA_MON_ERR_STATUS when users attempt to read DMA CFG..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0013-004
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0013-004"
- `caption`: "Detected description_panel_or_continuation on page 13"
- `physical_page`: 13
- `printed_page`: "13"
- `section_path`: "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121"
- `bbox`: [36.3, 430.4, 559.2, 774.9]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN There are three workarounds available: - Workaround 1: When DMA Monitor is enabled (MON_CHK_EN set): -..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0014-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0014-001"
- `caption`: "Detected erratum_panel on page 14"
- `physical_page`: 14
- `printed_page`: "14"
- `section_path`: "Chapter 2 Device Errata / 2.6 ERR_DMA_3614121"
- `bbox`: [36.3, 37.1, 559.2, 708.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "• DMA_CFG_DLASTn • DMA_CFG_CSRn • DMA_CFG_BLC_CHTRGENNOn • DMA_CFG_BLC_CHTRGENYESn - Workaround 2: Disable..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0015-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0015-001"
- `caption`: "Detected description_panel_or_continuation on page 15"
- `physical_page`: 15
- `printed_page`: "15"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117"
- `bbox`: [36.3, 80.8, 559.2, 598.9]
- `row_count`: 3
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Enhanced Rx FIFO may lose a frame when a message buffer is locked or C/S write occurs. An incoming frame..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0015-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0015-002"
- `caption`: "Detected workaround_panel_or_continuation on page 15"
- `physical_page`: 15
- `printed_page`: "15"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117"
- `bbox`: [36.3, 645.3, 559.2, 765.4]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN This issue can be avoided by using the affected MBs only with the following restrictions: - Do not use the..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0016-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0016-001"
- `caption`: "Detected description_panel_or_continuation on page 16"
- `physical_page`: 16
- `printed_page`: "16"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113"
- `bbox`: [36.3, 37.1, 559.2, 564.7]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "the MB, reading the data, and unlocking the MB should be kept to the less than the time of one minimum-..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0016-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0016-002"
- `caption`: "Detected erratum_panel on page 16"
- `physical_page`: 16
- `printed_page`: "16"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113"
- `bbox`: [36.3, 638.3, 559.2, 747.5]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Cannot use MB0 - MB7 for reception when Enhanced Rx FIFO is enabled. A message received into a receive..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0017-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0017-001"
- `caption`: "Detected description_panel_or_continuation on page 17"
- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113"
- `bbox`: [36.3, 37.1, 559.2, 352.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "3) The application services one or more messages in the Enhanced Rx FIFO, thereby clearing the..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel"]

#### TBL-PANEL-0017-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0017-002"
- `caption`: "Detected description_panel_or_continuation on page 17"
- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113"
- `bbox`: [36.3, 398.7, 559.2, 588.0]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Use either of the following workarounds to avoid this issue: - DO NOT use MB0-MB7 when the Enhanced Rx..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0017-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0017-003"
- `caption`: "Detected workaround_panel_or_continuation on page 17"
- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113"
- `bbox`: [36.3, 655.1, 559.2, 752.8]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN If the Data Unit in the LU module is configured to flexible mode with the continuous dual-edge..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0018-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0018-001"
- `caption`: "Detected description_panel_or_continuation on page 18"
- `physical_page`: 18
- `printed_page`: "18"
- `section_path`: "Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"
- `bbox`: [36.3, 60.2, 559.2, 140.9]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN If the Data Unit is configured to flexible mode with continuous dual-edge receive/transmit enabled, it is..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0018-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0018-002"
- `caption`: "Detected description_panel_or_continuation on page 18"
- `physical_page`: 18
- `printed_page`: "18"
- `section_path`: "Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"
- `bbox`: [36.3, 208.0, 559.2, 379.3]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Under specific conditions, the HSADC may produce one or two erroneous conversion results at the beginning..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0018-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0018-003"
- `caption`: "Detected description_panel_or_continuation on page 18"
- `physical_page`: 18
- `printed_page`: "18"
- `section_path`: "Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"
- `bbox`: [36.3, 425.8, 559.2, 729.8]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN To ensure data integrity, the following timing constraints must be met: 1) Intra-Sequence Timing: If a..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0019-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0019-001"
- `caption`: "Detected description_panel_or_continuation on page 19"
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [36.3, 80.8, 559.2, 161.5]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN The width of LECNT and POSDCNT counters is 16-bit, which may not be enough to record the time between..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0019-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0019-002"
- `caption`: "Detected description_panel_or_continuation on page 19"
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [36.3, 208.0, 559.2, 769.9]
- `row_count`: 1
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN To avoid the issue that the width of LECTN and POSDCNT counters is not enough, there are two workarounds..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0020-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0020-001"
- `caption`: "Detected erratum_panel on page 20"
- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [36.3, 37.1, 559.2, 640.6]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "4) Get the direction by comparing the POSCNT values due to the exit of the QUAD mode. NOTE: It is recommended..."
- `confidence`: 0.72
- `quality_flags`: ["generated_table_like_panel", "continuation_or_partial_panel", "contains_embedded_timing_diagram"]

#### TBL-PANEL-0021-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0021-001"
- `caption`: "Detected description_panel_or_continuation on page 21"
- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122"
- `bbox`: [36.3, 80.8, 559.2, 287.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN The chip may enter the reset state repeatedly for a long period if the RESET_B AON_CLK filter function is..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0021-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0021-002"
- `caption`: "Detected description_panel_or_continuation on page 21"
- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122"
- `bbox`: [36.3, 333.6, 559.2, 506.0]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN There are two workarounds available: - Workaround 1: Do not use the AON_CLK filter, but use the external..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0021-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0021-003"
- `caption`: "Detected workaround_panel_or_continuation on page 21"
- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122"
- `bbox`: [36.3, 573.2, 559.2, 687.7]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN If a CPUx (except CPU0)-related reset source (such as LOCKUP, SYSRST, WDOG, INTM, and SWRST) is configured..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0022-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0022-001"
- `caption`: "Detected description_panel_or_continuation on page 22"
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"
- `bbox`: [36.3, 60.2, 559.2, 363.1]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN There are two workarounds available: - Workaround 1: For the same reset source, do not enable both the..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0022-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0022-002"
- `caption`: "Detected description_panel_or_continuation on page 22"
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"
- `bbox`: [36.3, 430.2, 559.2, 544.9]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN If a CPU1 reset (LOCKUP, SYSRST, WDOG, INTM, and SWRST) is configured as a core-only reset, the AXBS bus..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0022-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0022-003"
- `caption`: "Detected workaround_panel_or_continuation on page 22"
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"
- `bbox`: [36.3, 591.3, 559.2, 638.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN It is recommended to configure a CPU1 reset (LOCKUP, SYSRST, WDOG, INTM, and SWRST) as a system reset."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0022-004
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0022-004"
- `caption`: "Detected workaround_panel_or_continuation on page 22"
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"
- `bbox`: [36.3, 705.2, 559.2, 786.0]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN If the PSTDIV1 bit field in either the PLL0_CFG or PLL1_CFG register is set to 1, there is a very low..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0023-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0023-001"
- `caption`: "Detected description_panel_or_continuation on page 23"
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"
- `bbox`: [36.3, 83.1, 559.2, 209.6]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Software must not configure the PSTDIV1 bit field to a value of 1 (which corresponds to a clock division..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0023-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0023-002"
- `caption`: "Detected description_panel_or_continuation on page 23"
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"
- `bbox`: [36.3, 283.3, 559.2, 673.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Under the following conditions: • FOSC is selected as the PLL reference clock, • FOSC is configured as..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0023-003
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0023-003"
- `caption`: "Detected workaround_panel_or_continuation on page 23"
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"
- `bbox`: [36.3, 719.6, 559.2, 766.4]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Do not configure the PREDIV field in the PLL0CFG register to 0. Use PREDIV values ≥ 1 instead."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0024-001
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0024-001"
- `caption`: "Detected description_panel_or_continuation on page 24"
- `physical_page`: 24
- `printed_page`: "24"
- `section_path`: "Chapter 2 Device Errata / 2.17 ERR_SSI_3612116"
- `bbox`: [36.3, 80.8, 559.2, 275.2]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN Affected by an external RC oscillator, the current slew rate of an AK protocol SSI sensor may be..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

#### TBL-PANEL-0024-002
- `source_table_number`: null
- `generated_table_number`: "TBL-PANEL-0024-002"
- `caption`: "Detected description_panel_or_continuation on page 24"
- `physical_page`: 24
- `printed_page`: "24"
- `section_path`: "Chapter 2 Device Errata / 2.17 ERR_SSI_3612116"
- `bbox`: [36.3, 321.6, 559.2, 385.3]
- `row_count`: 2
- `column_count`: 2
- `key_fields`: ["language_or_continuation_marker", "content"]
- `summary`: "Navigation entry for an EN/CN erratum description/workaround layout panel; verify source PDF for exact wording."
- `anchor`: "EN To filter out all unexpected glitches, it is recommended to keep the frequency of the input functional..."
- `confidence`: 0.80
- `quality_flags`: ["generated_table_like_panel"]

## 7. Figure / Image Index

The source PDF does not assign formal figure numbers to the errata diagrams. Internal stable IDs are generated from physical page and object sequence.

### FIG-0008-001
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0008-001"
- `caption`: "ERR_ADC_3612113 timestamp timing diagram, EN description panel"
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `bbox`: [74.0, 74.9, 495.0, 155.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Shows Trigger, ADC State, TSTMP Data, and DMA Request waveforms where timestamp data remains updating while the level trigger stays high; supports the level-trigger timestamp defect explanation."
- `keywords`: ["ADC", "PTIMER", "SDADC", "timestamp", "level trigger", "DMA Request"]
- `anchor`: "ERR_ADC_3612113 timestamp timing diagram, EN description panel"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0008-002
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0008-002"
- `caption`: "ERR_ADC_3612113 timestamp timing diagram, CN description panel"
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `bbox`: [74.0, 344.9, 495.0, 425.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Chinese-description copy of the level-trigger timestamp timing diagram showing the same Trigger/ADC State/TSTMP Data/DMA Request relationships."
- `keywords`: ["ADC", "timestamp", "level trigger", "CN"]
- `anchor`: "ERR_ADC_3612113 timestamp timing diagram, CN description panel"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0008-003
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0008-003"
- `caption`: "ERR_ADC_3612113 falling-edge trigger workaround timing diagram"
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113"
- `bbox`: [105.0, 706.9, 525.0, 781.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Shows the workaround timing where ADC uses falling-edge trigger and timestamp data freezes after the falling edge, with DMA request generated before rising edge."
- `keywords`: ["ADC_CFG1.TRIGMODE", "falling edge", "TSTMP", "DMA Request"]
- `anchor`: "ERR_ADC_3612113 falling-edge trigger workaround timing diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0009-001
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0009-001"
- `caption`: "ERR_ADC_3612113 CN workaround timing diagram"
- `physical_page`: 9
- `printed_page`: "9"
- `section_path`: "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113"
- `bbox`: [74.0, 347.9, 495.0, 423.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Chinese-workaround copy of the falling-edge trigger timing diagram for ADC/PTIMER timestamp capture."
- `keywords`: ["ADC", "PTIMER", "falling edge", "SCM_TSTMP_RES0"]
- `anchor`: "ERR_ADC_3612113 CN workaround timing diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0015-001"
- `caption`: "ERR_FLEXCAN_3519117 affected message buffer / FIFO pointer diagram"
- `physical_page`: 15
- `printed_page`: "15"
- `section_path`: "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117"
- `bbox`: [184.0, 313.9, 446.0, 594.9]
- `image_type`: "table_diagram"
- `semantic_description`: "Shows affected message buffers MB79, MB69, MB59, MB49, MB39, MB29, MB19, MB9 and MB87, MB77, MB67, MB57, MB47, MB37, MB27, MB17 aligned against Enhanced Rx FIFO pointer values."
- `keywords`: ["FLEXCAN", "Enhanced Rx FIFO", "Message Buffer", "FIFO Pointer", "MB"]
- `anchor`: "ERR_FLEXCAN_3519117 affected message buffer / FIFO pointer diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0019-001"
- `caption`: "ERR_QDT_3612114 PIT workaround timing diagram"
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [95.0, 284.9, 535.0, 399.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Shows Phase_A, Phase_B, POSCNT, method_switch, CV0, QDT_match_trigger, and PIT_CNT signals for using PIT to measure tooth_period."
- `keywords`: ["QDT", "PIT", "POSCNT", "CV0", "tooth_period"]
- `anchor`: "ERR_QDT_3612114 PIT workaround timing diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0019-002"
- `caption`: "ERR_QDT_3612114 input-capture workaround timing diagram"
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [90.0, 554.9, 540.0, 646.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Shows Phase_A, Phase_B, POSCTN/POSCNT, method_switch, CV0, and CV1 signals for switching QDT from QUAD to Input Capture mode."
- `keywords`: ["QDT", "Input Capture", "CV0", "CV1", "Phase_A", "Phase_B"]
- `anchor`: "ERR_QDT_3612114 input-capture workaround timing diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0020-001"
- `caption`: "ERR_QDT_3612114 CN PIT workaround timing diagram"
- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [100.0, 143.9, 540.0, 258.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Chinese-workaround copy of the PIT timing diagram used to record tooth_period."
- `keywords`: ["QDT", "PIT", "CN", "tooth_period"]
- `anchor`: "ERR_QDT_3612114 CN PIT workaround timing diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

### FIG-0020-002
- `source_figure_number`: null
- `generated_figure_number`: "FIG-0020-002"
- `caption`: "ERR_QDT_3612114 CN input-capture workaround timing diagram"
- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"
- `bbox`: [90.0, 395.9, 540.0, 487.9]
- `image_type`: "timing_diagram"
- `semantic_description`: "Chinese-workaround copy of the input-capture timing diagram used to compute tooth_period from CV0 and CV1."
- `keywords`: ["QDT", "Input Capture", "CN", "CV0", "CV1"]
- `anchor`: "ERR_QDT_3612114 CN input-capture workaround timing diagram"
- `confidence`: 0.88
- `quality_flags`: ["internal_generated_figure_id", "no_source_figure_number"]

## 8. Term / API / Config / Requirement / Erratum Index

### 8.1 Current Device Errata ID Index

#### ERRATA-ERR-ADC-3612112
- `name`: "ERR_ADC_3612112"
- `type`: "erratum_id"
- `source_section`: "2.1"
- `previous_errata_id`: "ERR_ADC_001"
- `module`: "ADC"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 7
- `physical_pages`: [7]
- `section_paths`: ["Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113"]
- `brief`: "SIRCCSR[LPWKE] set to 0 while SIRC is always on in Standby prevents ADC triggering in Sequence Group Compare standby applications."
- `workaround_summary`: "Set SIRCCSR[LPWKE] to 1 regardless of whether SIRC is configured always-on in Standby."
- `keywords`: ["ADC", "SIRC", "Standby", "SCG_SIRCCSR.LPWKE", "SIRCCSR[LPWKE]"]
- `anchors`:
  - `p7`: "2.1 ERR_ADC_3612112"
- `aliases`: ["ERR_ADC_001"]

#### ERRATA-ERR-ADC-3612113
- `name`: "ERR_ADC_3612113"
- `type`: "erratum_id"
- `source_section`: "2.2"
- `previous_errata_id`: "ERR_ADC_002"
- `module`: "ADC/PTIMER/SDADC"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 7
- `physical_pages`: [7, 8, 9]
- `section_paths`: ["Chapter 2 Device Errata / 2.1 ERR_ADC_3612112 / 2.2 ERR_ADC_3612113", "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113", "Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113"]
- `brief`: "Level-triggered timestamp capture can persist while the trigger is high, causing timestamps to reflect falling-edge or DMA-request timing rather than true trigger assertion time."
- `workaround_summary`: "Use ADC falling-edge trigger where supported, invert trigger for PTIMER through LU/TRGSEL if needed, generate DMA request before rising edge, and use SDADC conversion-complete pulse triggers where appropriate."
- `keywords`: ["SCM_TSTMP_RES0", "SCM_TSTMP_RES1", "SCM_TSTMP_RES2", "SCM_TSTMP_RES3", "ADC_CFG1.TRIGMODE", "TSTMP_LOCK[SDADCx_TMR_SRC_SEL]", "TRGSEL", "LU"]
- `anchors`:
  - `p7`: "2.2 ERR_ADC_3612113"
  - `p9`: "Workaround"
- `aliases`: ["ERR_ADC_002"]

#### ERRATA-ERR-DEBUG-3514113
- `name`: "ERR_Debug_3514113"
- `type`: "erratum_id"
- `source_section`: "2.3"
- `previous_errata_id`: "ERR_Debug_001"
- `module`: "Debug"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 9
- `physical_pages`: [9, 10]
- `section_paths`: ["Chapter 2 Device Errata / 2.2 ERR_ADC_3612113 / 2.3 ERR_Debug_3514113", "Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"]
- `brief`: "Switching from JTAG to SWD while PTA10 is configured as ALT7 can drive PTA10 low and create a conflict with an external high-level driver."
- `workaround_summary`: "Before switching to SWD, ensure PTA10 has no external high-level drive if PTA10 is configured as ALT7."
- `keywords`: ["JTAG", "SWD", "PTA10", "ALT7"]
- `anchors`:
  - `p9`: "2.3 ERR_Debug_3514113"
  - `p10`: "Workaround"
- `aliases`: ["ERR_Debug_001"]

#### ERRATA-ERR-DEBUG-3514112
- `name`: "ERR_Debug_3514112"
- `type`: "erratum_id"
- `source_section`: "2.4"
- `previous_errata_id`: "ERR_Debug_002"
- `module`: "Debug"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112"]
- `brief`: "A debug-mode lockstep error can occur after reset when CORE is halted, DWT is enabled, DWT_CYCCNT is active during reset, and DWT_CYCCNT is read after reset."
- `workaround_summary`: "Disable DWT before reset after halt, or disable DWT_CYCCNT in the debug-mode startup routine."
- `keywords`: ["DWT", "DWT_CYCCNT", "lockstep", "reset"]
- `anchors`:
  - `p10`: "2.4 ERR_Debug_3514112"
- `aliases`: ["ERR_Debug_002"]

#### ERRATA-ERR-DMA-3613112
- `name`: "ERR_DMA_3613112"
- `type`: "erratum_id"
- `source_section`: "2.5"
- `previous_errata_id`: "ERR_DMA_001"
- `module`: "DMA/DMAMUX"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 10
- `physical_pages`: [10, 11, 12, 13]
- `section_paths`: ["Chapter 2 Device Errata / 2.3 ERR_Debug_3514113 / 2.4 ERR_Debug_3514112 / 2.5 ERR_DMA_3613112", "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112", "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112", "Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121"]
- `brief`: "A DMAMUX slot shared by requests from different modules cannot be assigned simultaneously to DMA0 and DMA1 requests from different modules."
- `workaround_summary`: "Assign DMA0 and DMA1 requests from the same module when using the listed shared DMAMUX slots."
- `keywords`: ["DMAMUX", "DMA0", "DMA1", "Slot_Num", "FCUART", "LU", "TPU", "eFTU", "PTIMER", "FLEXCAN", "SENT"]
- `anchors`:
  - `p10`: "2.5 ERR_DMA_3613112"
  - `p13`: "Workaround"
- `aliases`: ["ERR_DMA_001"]

#### ERRATA-ERR-DMA-3614121
- `name`: "ERR_DMA_3614121"
- `type`: "erratum_id"
- `source_section`: "2.6"
- `previous_errata_id`: "ERR_DMA_002"
- `module`: "DMA"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `section_paths`: ["Chapter 2 Device Errata / 2.5 ERR_DMA_3613112 / 2.6 ERR_DMA_3614121", "Chapter 2 Device Errata / 2.6 ERR_DMA_3614121"]
- `brief`: "DMA Monitor may incorrectly set DMA_MON_ERR_STATUS error flags when users read DMA CFG registers during DMA transfers; applicable to DMA1."
- `workaround_summary`: "Restrict access to selected DMA CFG registers, disable DMA Monitor and use software CRC, or use DMA0 with Lockstep for safety-related DMA Monitor transactions."
- `keywords`: ["DMA_MON_ERR_STATUS", "DMA1", "MON_CHK_EN", "DMA_CFG_SADDRn", "DMA_CFG_DADDRn", "DMA_CFG_CSRn", "DMA0 Lockstep"]
- `anchors`:
  - `p13`: "2.6 ERR_DMA_3614121"
  - `p14`: "Workaround"
- `aliases`: ["ERR_DMA_002"]

#### ERRATA-ERR-FLEXCAN-3519117
- `name`: "ERR_FLEXCAN_3519117"
- `type`: "erratum_id"
- `source_section`: "2.7"
- `previous_errata_id`: "ERR_FLEXCAN_001"
- `module`: "FLEXCAN"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 15
- `physical_pages`: [15, 16]
- `section_paths`: ["Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117", "Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113"]
- `brief`: "Enhanced Rx FIFO can lose a frame when an affected message buffer is locked or when a C/S word write occurs during a move-in process."
- `workaround_summary`: "Do not transmit with affected MBs; configure affected receive MBs once; read, data-access, and unlock as an atomic operation; alternatively avoid affected MBs or avoid Enhanced Rx FIFO."
- `keywords`: ["Enhanced Rx FIFO", "message buffer", "MB", "C/S word", "Free Running Timer", "CAN FD"]
- `anchors`:
  - `p15`: "2.7 ERR_FLEXCAN_3519117"
  - `p16`: "Workaround"
- `aliases`: ["ERR_FLEXCAN_001"]

#### ERRATA-ERR-FLEXCAN-3519113
- `name`: "ERR_FLEXCAN_3519113"
- `type`: "erratum_id"
- `source_section`: "2.8"
- `previous_errata_id`: "ERR_FLEXCAN_002"
- `module`: "FLEXCAN"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 16
- `physical_pages`: [16, 17]
- `section_paths`: ["Chapter 2 Device Errata / 2.7 ERR_FLEXCAN_3519117 / 2.8 ERR_FLEXCAN_3519113", "Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113"]
- `brief`: "MB0-MB7 cannot safely be used for reception when Enhanced Rx FIFO is enabled because overwritten received messages can remain marked FULL instead of OVERRUN."
- `workaround_summary`: "Do not use MB0-MB7 when Enhanced Rx FIFO is enabled, or service MB0-MB7 pending interrupts and data before servicing Enhanced Rx FIFO messages."
- `keywords`: ["MB0-MB7", "Enhanced Rx FIFO", "CAN_ERFSR.ERFDA", "FULL", "OVERRUN"]
- `anchors`:
  - `p16`: "2.8 ERR_FLEXCAN_3519113"
  - `p17`: "Workaround"
- `aliases`: ["ERR_FLEXCAN_002"]

#### ERRATA-ERR-LU-3617113
- `name`: "ERR_LU_3617113"
- `type`: "erratum_id"
- `source_section`: "2.9"
- `previous_errata_id`: "ERR_LU_001"
- `module`: "LU"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 17
- `physical_pages`: [17, 18]
- `section_paths`: ["Chapter 2 Device Errata / 2.8 ERR_FLEXCAN_3519113 / 2.9 ERR_LU_3617113", "Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"]
- `brief`: "LU Data Unit in flexible mode with continuous dual-edge receive/transmit can fail to generate the final CPU interrupt when DMA and interrupts are both enabled."
- `workaround_summary`: "Enable only DMA or only interrupts when using continuous dual-edge receive/transmit in flexible mode."
- `keywords`: ["LU", "Data Unit", "flexible mode", "continuous dual-edge", "DMA", "interrupt"]
- `anchors`:
  - `p17`: "2.9 ERR_LU_3617113"
  - `p18`: "Workaround"
- `aliases`: ["ERR_LU_001"]

#### ERRATA-ERR-HSADC-3712112
- `name`: "ERR_HSADC_3712112"
- `type`: "erratum_id"
- `source_section`: "2.10"
- `previous_errata_id`: "ERR_HSADC_001"
- `module`: "HSADC"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 18
- `physical_pages`: [18]
- `section_paths`: ["Chapter 2 Device Errata / 2.9 ERR_LU_3617113 / 2.10 ERR_HSADC_3712112"]
- `brief`: "HSADC may produce one or two erroneous conversion results at the start of a normal conversion sequence after an idle interval greater than 15 us."
- `workaround_summary`: "Keep intra-sequence and inter-trigger sampling intervals below 15 us, or add and discard two dummy conversions when the interval cannot be kept below the limit."
- `keywords`: ["HSADC", "15 μs", "dummy conversions", "sampling"]
- `anchors`:
  - `p18`: "2.10 ERR_HSADC_3712112"
- `aliases`: ["ERR_HSADC_001"]

#### ERRATA-ERR-QDT-3612114
- `name`: "ERR_QDT_3612114"
- `type`: "erratum_id"
- `source_section`: "2.11"
- `previous_errata_id`: "ERR_QDT_001"
- `module`: "QDT"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `section_paths`: ["Chapter 2 Device Errata / 2.11 ERR_QDT_3612114", "Chapter 2 Device Errata / 2.11 ERR_QDT_3612114"]
- `brief`: "LECNT and POSDCNT are 16-bit counters and may be insufficient to record Phase_A to Phase_B rising-edge time for low-speed tooth_period calculation."
- `workaround_summary`: "At low speed, use PIT to record tooth_period or switch QDT from QUAD mode to Input Capture mode, then compute speed from captured timing."
- `keywords`: ["LECNT", "POSDCNT", "Phase_A", "Phase_B", "tooth_period", "PIT", "CV0", "CV1", "POSCNT", "QUADIR"]
- `anchors`:
  - `p19`: "2.11 ERR_QDT_3612114"
  - `p20`: "Workaround"
- `aliases`: ["ERR_QDT_001"]

#### ERRATA-ERR-RGM-3522113
- `name`: "ERR_RGM_3522113"
- `type`: "erratum_id"
- `source_section`: "2.12"
- `previous_errata_id`: "ERR_RGM_001"
- `module`: "RGM"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122"]
- `brief`: "RESET_B AON_CLK filter plus certain external RC filter values can cause the chip to stay in or repeatedly enter reset for a long period."
- `workaround_summary`: "Avoid AON_CLK filter and use external RC plus bus filter, or ensure RESET_B rise time to VIH is below two AON_CLK periods; <=50 us is recommended."
- `keywords`: ["RESET_B", "AON_CLK", "RC filter", "VIH"]
- `anchors`:
  - `p21`: "2.12 ERR_RGM_3522113"
- `aliases`: ["ERR_RGM_001"]

#### ERRATA-ERR-RGM-3614122
- `name`: "ERR_RGM_3614122"
- `type`: "erratum_id"
- `source_section`: "2.13"
- `previous_errata_id`: "ERR_RGM_002"
- `module`: "RGM"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `section_paths`: ["Chapter 2 Device Errata / 2.12 ERR_RGM_3522113 / 2.13 ERR_RGM_3614122", "Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"]
- `brief`: "CPUx core-only reset with delayed reset enabled can trigger unexpected bus errors if the reset-target CPUx does not enter while(1) when core reset is asserted."
- `workaround_summary`: "Do not enable core-only reset and delay reset together for the same source, or ensure CPUx executes a while(1) loop, preferably in TCM, and route RGM interrupt to the affected CPU."
- `keywords`: ["CPUx", "core-only reset", "delay reset", "LOCKUP", "SYSRST", "WDOG", "INTM", "SWRST", "while(1)", "TCM", "SCM_INT_ROUTERn"]
- `anchors`:
  - `p21`: "2.13 ERR_RGM_3614122"
  - `p22`: "Workaround"
- `aliases`: ["ERR_RGM_002"]

#### ERRATA-ERR-RGM-3615114
- `name`: "ERR_RGM_3615114"
- `type`: "erratum_id"
- `source_section`: "2.14"
- `previous_errata_id`: "ERR_RGM_003"
- `module`: "RGM"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 22
- `physical_pages`: [22]
- `section_paths`: ["Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113"]
- `brief`: "When CPU1 reset is configured as core-only reset, AXBS bus can halt for about 140 slow_clk cycles during CPU1 reset assertion."
- `workaround_summary`: "Configure CPU1 reset sources as system reset instead of core-only reset."
- `keywords`: ["CPU1 reset", "core-only reset", "AXBS", "140 slow_clk cycles"]
- `anchors`:
  - `p22`: "2.14 ERR_RGM_3615114"
- `aliases`: ["ERR_RGM_003"]

#### ERRATA-ERR-SCG-3712113
- `name`: "ERR_SCG_3712113"
- `type`: "erratum_id"
- `source_section`: "2.15"
- `previous_errata_id`: "ERR_SCG_001"
- `module`: "SCG/PLL"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 22
- `physical_pages`: [22, 23]
- `section_paths`: ["Chapter 2 Device Errata / 2.13 ERR_RGM_3614122 / 2.14 ERR_RGM_3615114 / 2.15 ERR_SCG_3712113", "Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"]
- `brief`: "PSTDIV1 bit field value 1 in PLL0_CFG or PLL1_CFG creates a low-probability PLL0_CLK1 or PLL1_CLK1 malfunction when enabled."
- `workaround_summary`: "Do not configure PSTDIV1 to 1; use DIVH, DIVM, or DIVL in the corresponding PLL0DIV or PLL1DIV register to achieve divide-by-4."
- `keywords`: ["PSTDIV1", "PLL0_CFG", "PLL1_CFG", "PLL0_CLK1", "PLL1_CLK1", "PLL0DIV", "PLL1DIV", "DIVH", "DIVM", "DIVL"]
- `anchors`:
  - `p22`: "2.15 ERR_SCG_3712113"
  - `p23`: "Workaround"
- `aliases`: ["ERR_SCG_001"]

#### ERRATA-ERR-SCG-3715113
- `name`: "ERR_SCG_3715113"
- `type`: "erratum_id"
- `source_section`: "2.16"
- `previous_errata_id`: null
- `module`: "SCG/PLL"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 23
- `physical_pages`: [23]
- `section_paths`: ["Chapter 2 Device Errata / 2.15 ERR_SCG_3712113 / 2.16 ERR_SCG_3715113"]
- `brief`: "With FOSC bypass selected as the PLL reference and 2-4 MHz input, asynchronous reset in pre-divider logic can cause rare PLL lock failure or valid flag failure when PREDIV is 0."
- `workaround_summary`: "Do not configure PLL0CFG.PREDIV to 0; use PREDIV values >= 1."
- `keywords`: ["FOSC", "Bypass mode", "PLL", "PREDIV", "SCG_PLL0CFG.PREDIV", "SCG_PLL0CSR.PLLLK", "SCG_PLL0CSR.VLD"]
- `anchors`:
  - `p23`: "2.16 ERR_SCG_3715113"
- `aliases`: []

#### ERRATA-ERR-SSI-3612116
- `name`: "ERR_SSI_3612116"
- `type`: "erratum_id"
- `source_section`: "2.17"
- `previous_errata_id`: "ERR_SSI_001"
- `module`: "SSI"
- `status`: "A"
- `status_meaning`: "A = Workaround Available"
- `primary_page`: 24
- `physical_pages`: [24]
- `section_paths`: ["Chapter 2 Device Errata / 2.17 ERR_SSI_3612116"]
- `brief`: "AK protocol SSI sensor current slew can cause inm glitches on inh edges, and the SSI filter bit width may not fully suppress unexpected glitches."
- `workaround_summary`: "Keep the SSI input functional clock frequency below 8 MHz to filter unexpected glitches."
- `keywords`: ["SSI", "AK protocol", "inm", "inh", "filter", "8 MHz"]
- `anchors`:
  - `p24`: "2.17 ERR_SSI_3612116"
- `aliases`: ["ERR_SSI_001"]

### 8.2 ENET / Synopsys Errata ID Index

#### EXT-ENET-SYNOPSYS-4171346
- `name`: "Synopsys ID: 4171346"
- `type`: "external_erratum_id"
- `source_section`: "2.18.1"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 25
- `physical_pages`: [25]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.1 Synopsys ID: 4171346"
- `title`: "Incorrect VLAN Tag Filter Fail Based Receive Queuing Ignores RA Bit of MAC_Packet_Filter Register"
- `consequence_summary`: "The received packets that fail the VLAN Tag Filter are incorrectly routed to the Receive Queue programmed in the VFFQ field when the VFFQE bit is set to 1...."
- `workaround_anchor_summary`: "The RA bit is used in Debug Mode to forward all the received packets to the software irrespective of the results of the MAC Filters. The Debug Mode feature of the VLAN Tag Filter..."
- `anchors`:
  - `p25`: "2.18.1 Synopsys ID: 4171346"
  - `p25`: "Title: Incorrect VLAN Tag Filter Fail Based Receive Queuing Ignores RA Bit of..."
- `aliases`: ["ENET 4171346", "Synopsys 4171346", "DWC_ether_qos 4171346"]

#### EXT-ENET-SYNOPSYS-3900281
- `name`: "Synopsys ID: 3900281"
- `type`: "external_erratum_id"
- `source_section`: "2.18.2"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 25
- `physical_pages`: [25, 26, 27]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.2 Synopsys ID: 3900281"
- `title`: "MAC_System_Time_Higher_Word_Seconds Register Value Updated by DWC_ether_qos is Not Synchronized to the Transmit Timestamping Functions"
- `consequence_summary`: "The one-step timestamping function inserts the incorrectly captured egress timestamp in the transmit PTP packets after the MAC_System_Time_Seconds register..."
- `workaround_anchor_summary`: "The application must read the MAC_System_Time_Higher_Word_Seconds register and write back the value it read, in the following cases: - When DWC_ether_qos asserts the sbd_intr_o..."
- `anchors`:
  - `p25`: "2.18.2 Synopsys ID: 3900281"
  - `p25`: "Title: MAC_System_Time_Higher_Word_Seconds Register Value Updated by DWC_ether_qos is..."
- `aliases`: ["ENET 3900281", "Synopsys 3900281", "DWC_ether_qos 3900281"]

#### EXT-ENET-SYNOPSYS-3876182
- `name`: "Synopsys ID: 3876182"
- `type`: "external_erratum_id"
- `source_section`: "2.18.3"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.3 Synopsys ID: 3876182"
- `title`: "MAC Unable to Identify PTP SYNC and Follow_Up Messages with Peer Delay Reserved Multicast Address in the 802.1AS Mixed Mode Operation"
- `consequence_summary`: "The MAC does not capture the ingress timestamp for PTP SYNC and Follow_Up messages that are received with PTP Peer Delay Reserved multicast destination..."
- `workaround_anchor_summary`: "The IEEE 802.1AS mixed mode is not a general use case. The time correction can be performed by using either Delay Request-Response or Peer Delay mechanism. However, if mixed mode..."
- `anchors`:
  - `p27`: "2.18.3 Synopsys ID: 3876182"
  - `p27`: "Title: MAC Unable to Identify PTP SYNC and Follow_Up Messages with Peer Delay Reserved..."
- `aliases`: ["ENET 3876182", "Synopsys 3876182", "DWC_ether_qos 3876182"]

#### EXT-ENET-SYNOPSYS-3873623
- `name`: "Synopsys ID: 3873623"
- `type`: "external_erratum_id"
- `source_section`: "2.18.4"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B3-High"
- `primary_page`: 28
- `physical_pages`: [28, 29]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.4 Synopsys ID: 3873623"
- `title`: "Un-Correctable FSM Timeout Safety Interrupt Incorrectly Generated for Long Waiting FSM States in the Normal Operation"
- `consequence_summary`: "The spurious un-correctable FSM timeout safety interrupt triggers an unintended recovery process which is time- consuming. That is, issuing of soft or hard..."
- `workaround_anchor_summary`: "After enabling the MAC transmitter, the application must enable the transmit DMA. The application must disable the FSM timeout function immediately after receiving the transmit..."
- `anchors`:
  - `p28`: "2.18.4 Synopsys ID: 3873623"
  - `p28`: "Title: Un-Correctable FSM Timeout Safety Interrupt Incorrectly Generated for Long..."
- `aliases`: ["ENET 3873623", "Synopsys 3873623", "DWC_ether_qos 3873623"]

#### EXT-ENET-SYNOPSYS-3683170
- `name`: "Synopsys ID: 3683170"
- `type`: "external_erratum_id"
- `source_section`: "2.18.5"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 29
- `physical_pages`: [29, 30]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.5 Synopsys ID: 3683170"
- `title`: "Incorrect Routing of Rx Packet or Incorrect Splitting of Header Payload When CDC Delay is Different in the Asynchronous FIFOs Between Receiver Clock and Application Clock"
- `consequence_summary`: "After the defect occurs, the header status associated with all subsequent pre-emption fragments or express packets is from previous pre-emption fragment or..."
- `workaround_anchor_summary`: "The defect is not observed when the bandwidth on the application side is enough to prevent the Rx queue overflow. The system design must ensure this. The software must program..."
- `anchors`:
  - `p29`: "2.18.5 Synopsys ID: 3683170"
  - `p29`: "Title: Incorrect Routing of Rx Packet or Incorrect Splitting of Header Payload When..."
- `aliases`: ["ENET 3683170", "Synopsys 3683170", "DWC_ether_qos 3683170"]

#### EXT-ENET-SYNOPSYS-3413311
- `name`: "Synopsys ID: 3413311"
- `type`: "external_erratum_id"
- `source_section`: "2.18.6"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 30
- `physical_pages`: [30, 31, 32]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.6 Synopsys ID: 3413311"
- `title`: "Incorrect Handling of Application Bus Error in Certain Boundary Conditions"
- `consequence_summary`: "1) The STXSTSF and TXSTSFSTS fields of the MTL_TxQ(#i)_Debug register are not cleared. If the Fatal Bus Error Interrupt Service Routine (ISR) waits for all..."
- `workaround_anchor_summary`: "The software must use the Bus Error recovery mechanism of issuing Software Reset and reconfiguring DWC_ether_qos. This impacts only the performance."
- `anchors`:
  - `p30`: "2.18.6 Synopsys ID: 3413311"
  - `p30`: "Title: Incorrect Handling of Application Bus Error in Certain Boundary Conditions"
- `aliases`: ["ENET 3413311", "Synopsys 3413311", "DWC_ether_qos 3413311"]

#### EXT-ENET-SYNOPSYS-3380358
- `name`: "Synopsys ID: 3380358"
- `type`: "external_erratum_id"
- `source_section`: "2.18.7"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 32
- `physical_pages`: [32, 33]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.7 Synopsys ID: 3380358"
- `title`: "Pre-Emptable Traffic is Incorrectly Blocked Even When the Available Express Traffic Cannot be Scheduled"
- `consequence_summary`: "The pre-emption Transmit Queues are blocked when Express Packets are available, even if the Express packets cannot be scheduled. This results in inefficient..."
- `workaround_anchor_summary`: "Not required. Impact is only on the performance of pre-emption traffic."
- `anchors`:
  - `p32`: "2.18.7 Synopsys ID: 3380358"
  - `p32`: "Title: Pre-Emptable Traffic is Incorrectly Blocked Even When the Available Express..."
- `aliases`: ["ENET 3380358", "Synopsys 3380358", "DWC_ether_qos 3380358"]

#### EXT-ENET-SYNOPSYS-3379533
- `name`: "Synopsys ID: 3379533"
- `type`: "external_erratum_id"
- `source_section`: "2.18.8"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 33
- `physical_pages`: [33, 34]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.8 Synopsys ID: 3379533"
- `title`: "Larger Interpacket Gap When WRR Algorithm is Selected for Scheduling Packets from Transmit Queues"
- `consequence_summary`: "Larger interpacket gap (IPG) than expected, which impacts performance or throughput."
- `workaround_anchor_summary`: "Not Applicable."
- `anchors`:
  - `p33`: "2.18.8 Synopsys ID: 3379533"
  - `p33`: "Title: Larger Interpacket Gap When WRR Algorithm is Selected for Scheduling Packets..."
- `aliases`: ["ENET 3379533", "Synopsys 3379533", "DWC_ether_qos 3379533"]

#### EXT-ENET-SYNOPSYS-3368939
- `name`: "Synopsys ID: 3368939"
- `type`: "external_erratum_id"
- `source_section`: "2.18.9"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 34
- `physical_pages`: [34, 35]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.9 Synopsys ID: 3368939"
- `title`: "Incorrect Packet Size Related Head-Of-Line Blocking Error When Gates of Gate Control List are Closed"
- `consequence_summary`: "Due to the incorrect detection of HLBF error, the packet is incorrectly dropped if the DDBF field of the MTL_EST_Control register is set to 0. This results in..."
- `workaround_anchor_summary`: "The software must program the DDBF field of the MTL_EST_Control register to 1. This avoids data loss. However, the packet is not dropped when a genuine HLBF error occurs; blocking..."
- `anchors`:
  - `p34`: "2.18.9 Synopsys ID: 3368939"
  - `p34`: "Title: Incorrect Packet Size Related Head-Of-Line Blocking Error When Gates of Gate..."
- `aliases`: ["ENET 3368939", "Synopsys 3368939", "DWC_ether_qos 3368939"]

#### EXT-ENET-SYNOPSYS-3340890
- `name`: "Synopsys ID: 3340890"
- `type`: "external_erratum_id"
- `source_section`: "2.18.10"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 35
- `physical_pages`: [35, 36, 37]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.10 Synopsys ID: 3340890"
- `title`: "Flexible PPS Output Incorrectly Generated on Target Time Error or When Fine Correction Method is Enabled in the External Timestamping Mode, and Sub-Nano Second not Supported in the Binary Rollover Mode"
- `consequence_summary`: "The defect can have the following consequences: - The incorrect Flexible PPS output generated during Target Time Error can trigger an unintended implementation..."
- `workaround_anchor_summary`: "Following are the workarounds: - The software must accurately compute the CSR access delays. This avoids Target Time Error when programming the Target Time register. - Not..."
- `anchors`:
  - `p35`: "2.18.10 Synopsys ID: 3340890"
  - `p35`: "Title: Flexible PPS Output Incorrectly Generated on Target Time Error or When Fine..."
- `aliases`: ["ENET 3340890", "Synopsys 3340890", "DWC_ether_qos 3340890"]

#### EXT-ENET-SYNOPSYS-3338201
- `name`: "Synopsys ID: 3338201"
- `type`: "external_erratum_id"
- `source_section`: "2.18.11"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 37
- `physical_pages`: [37, 38]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.11 Synopsys ID: 3338201"
- `title`: "Unintended CSR Byte Update due to Missing Byte-Enable Qualification"
- `consequence_summary`: "When the value of the OB field (Bit[0]) of the MAC_Indir_Access_Ctrl is 1, it triggers unintended write or read access to the indirect register. If the value..."
- `workaround_anchor_summary`: "The software must perform only word (32-bit) wide writes to the MAC_Indir_Access_Ctrl register."
- `anchors`:
  - `p37`: "2.18.11 Synopsys ID: 3338201"
  - `p37`: "Title: Unintended CSR Byte Update due to Missing Byte-Enable Qualification"
- `aliases`: ["ENET 3338201", "Synopsys 3338201", "DWC_ether_qos 3338201"]

#### EXT-ENET-SYNOPSYS-3309847
- `name`: "Synopsys ID: 3309847"
- `type`: "external_erratum_id"
- `source_section`: "2.18.12"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 38
- `physical_pages`: [38]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.12 Synopsys ID: 3309847"
- `title`: "MAC Incorrectly Discards the Received Packets When Preamble Byte Does not Precede SFD or SMD"
- `consequence_summary`: "The MAC receiver discards the received packet for which preamble byte does not precede the SFD, SMD-S, or SMD-C bytes, resulting in loss of data. However,..."
- `workaround_anchor_summary`: "If the remote transmitter (chip-to-chip application) does not transmit preamble byte, configure it to transmit at the least one preamble byte preceding the SFD, SMD-S, or SMD-C..."
- `anchors`:
  - `p38`: "2.18.12 Synopsys ID: 3309847"
  - `p38`: "Title: MAC Incorrectly Discards the Received Packets When Preamble Byte Does not..."
- `aliases`: ["ENET 3309847", "Synopsys 3309847", "DWC_ether_qos 3309847"]

#### EXT-ENET-SYNOPSYS-3294970
- `name`: "Synopsys ID: 3294970"
- `type`: "external_erratum_id"
- `source_section`: "2.18.13"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B3-High"
- `primary_page`: 39
- `physical_pages`: [39, 40]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.13 Synopsys ID: 3294970"
- `title`: "DMA Halts Operation or Incorrect or no Corrupt Packet on Detecting Uncorrectable Safety Error"
- `consequence_summary`: "Following are the consequences: - The Transmit DMA halts its operation. Recovery is through software reset. The reset and subsequent reconfiguration impacts..."
- `workaround_anchor_summary`: "None."
- `anchors`:
  - `p39`: "2.18.13 Synopsys ID: 3294970"
  - `p39`: "Title: DMA Halts Operation or Incorrect or no Corrupt Packet on Detecting..."
- `aliases`: ["ENET 3294970", "Synopsys 3294970", "DWC_ether_qos 3294970"]

#### EXT-ENET-SYNOPSYS-3290261
- `name`: "Synopsys ID: 3290261"
- `type`: "external_erratum_id"
- `source_section`: "2.18.14"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 40
- `physical_pages`: [40, 41]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.14 Synopsys ID: 3290261"
- `title`: "Scheduled Transmit Packet not Sent in the Allotted Slot or the Remaining Fragment of a Preempted Packet Incorrectly Dropped due to Scheduling Timeout in the EST GCL"
- `consequence_summary`: "- The packet is not scheduled in the expected GCL slot. Even if the packet is subsequently scheduled and transmitted, the remote receiver drops the packet, as..."
- `workaround_anchor_summary`: "Software can implement the following workarounds: - Program the GCL slot interval to be larger than the sum of the packet size (adjusted for packet size change due to offloads..."
- `anchors`:
  - `p40`: "2.18.14 Synopsys ID: 3290261"
  - `p40`: "Title: Scheduled Transmit Packet not Sent in the Allotted Slot or the Remaining..."
- `aliases`: ["ENET 3290261", "Synopsys 3290261", "DWC_ether_qos 3290261"]

#### EXT-ENET-SYNOPSYS-3290231
- `name`: "Synopsys ID: 3290231"
- `type`: "external_erratum_id"
- `source_section`: "2.18.15"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 41
- `physical_pages`: [41, 42]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.15 Synopsys ID: 3290231"
- `title`: "Transmit MMC Counters Incorrectly Updated for Frame Preemption Packets When the Accumulated Byte Counter Overruns"
- `consequence_summary`: "The Transmit MMC counters are incorrectly updated, resulting in incorrect statistics. This impacts any dependent function implemented by the software."
- `workaround_anchor_summary`: "The software can implement statistics counters and update them based on the Transmit status provided by the MAC."
- `anchors`:
  - `p41`: "2.18.15 Synopsys ID: 3290231"
  - `p41`: "Title: Transmit MMC Counters Incorrectly Updated for Frame Preemption Packets When the..."
- `aliases`: ["ENET 3290231", "Synopsys 3290231", "DWC_ether_qos 3290231"]

#### EXT-ENET-SYNOPSYS-3288309
- `name`: "Synopsys ID: 3288309"
- `type`: "external_erratum_id"
- `source_section`: "2.18.16"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 42
- `physical_pages`: [42, 43]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.16 Synopsys ID: 3288309"
- `title`: "Transmission Status not Updated in the Status Register for Back-to-Back Frame Preemption Verify or Respond Packets"
- `consequence_summary`: "As per the defined protocol, the software must wait for the completion of the already triggered Frame Preemption Verify or Respond packet, before triggering..."
- `workaround_anchor_summary`: "The software must not trigger back-to-back Frame Preemption Verify and Respond packets. Software must wait for the completion of the already triggered packet before triggering the..."
- `anchors`:
  - `p42`: "2.18.16 Synopsys ID: 3288309"
  - `p42`: "Title: Transmission Status not Updated in the Status Register for Back-to-Back Frame..."
- `aliases`: ["ENET 3288309", "Synopsys 3288309", "DWC_ether_qos 3288309"]

#### EXT-ENET-SYNOPSYS-6129927
- `name`: "Synopsys ID: 6129927"
- `type`: "external_erratum_id"
- `source_section`: "2.18.17"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.17 Synopsys ID: 6129927"
- `title`: "Last Instruction Index Status of Flexible Receive Parser Updated in Incorrect Field of the Receive Descriptor"
- `consequence_summary`: "The misplaced FRP last instruction index status field and overwriting of L2/L3 Registers filters status fields impacts the dependent software functions."
- `workaround_anchor_summary`: "The software must interpret RDES2[23:16] as Rx Parser last instruction index status, when the following conditions are met. • FRP is enabled (FRPE field of MTL_Operation_Mode..."
- `anchors`:
  - `p43`: "2.18.17 Synopsys ID: 6129927"
  - `p43`: "Title: Last Instruction Index Status of Flexible Receive Parser Updated in Incorrect..."
- `aliases`: ["ENET 6129927", "Synopsys 6129927", "DWC_ether_qos 6129927"]

#### EXT-ENET-SYNOPSYS-3275809
- `name`: "Synopsys ID: 3275809"
- `type`: "external_erratum_id"
- `source_section`: "2.18.18"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B1-Low"
- `primary_page`: 44
- `physical_pages`: [44, 45]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.18 Synopsys ID: 3275809"
- `title`: "Incorrect Description of MAC_Address0_High Register in the Databook"
- `consequence_summary`: "When MAC_Address0_Low register is written prior to MAC_Address0_High register, the existing incorrect value in the MAC_Address0_High register is synchronized..."
- `workaround_anchor_summary`: "Not Applicable."
- `anchors`:
  - `p44`: "2.18.18 Synopsys ID: 3275809"
  - `p44`: "Title: Incorrect Description of MAC_Address0_High Register in the Databook"
- `aliases`: ["ENET 3275809", "Synopsys 3275809", "DWC_ether_qos 3275809"]

#### EXT-ENET-SYNOPSYS-4974260
- `name`: "Synopsys ID: 4974260"
- `type`: "external_erratum_id"
- `source_section`: "2.18.19"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 45
- `physical_pages`: [45, 46]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.19 Synopsys ID: 4974260"
- `title`: "DMA Incorrectly Fetches Invalid Descriptors When Tail Pointer is Updated with Same Address"
- `consequence_summary`: "The DMA processes unintended descriptors and transmits corresponding packets, impacting performance and resulting in unintended actions at the remote end."
- `workaround_anchor_summary`: "The software must not program the Tail Pointer with same value, especially when the Buffer Unavailable Interrupt is due to the DMA hitting the Tail Pointer limit."
- `anchors`:
  - `p45`: "2.18.19 Synopsys ID: 4974260"
  - `p45`: "Title: DMA Incorrectly Fetches Invalid Descriptors When Tail Pointer is Updated with..."
- `aliases`: ["ENET 4974260", "Synopsys 4974260", "DWC_ether_qos 4974260"]

#### EXT-ENET-SYNOPSYS-5121311
- `name`: "Synopsys ID: 5121311"
- `type`: "external_erratum_id"
- `source_section`: "2.18.20"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 46
- `physical_pages`: [46, 47]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.20 Synopsys ID: 5121311"
- `title`: "IEEE 802.1Qav CBS Algorithm Does Not Include Minimum IPG of Packet in Credit Computation"
- `consequence_summary`: "As the MAC does not decrement but increment the credit during the trailing IPG period of the packet, the accumulated credit value is higher or larger than..."
- `workaround_anchor_summary`: "You must compute the additional/extra bandwidth that the TXQ consumes due to the defective algorithm. For this, you must use the abovementioned formula and example, substituting..."
- `anchors`:
  - `p46`: "2.18.20 Synopsys ID: 5121311"
  - `p46`: "Title: IEEE 802.1Qav CBS Algorithm Does Not Include Minimum IPG of Packet in Credit..."
- `aliases`: ["ENET 5121311", "Synopsys 5121311", "DWC_ether_qos 5121311"]

#### EXT-ENET-SYNOPSYS-5584644
- `name`: "Synopsys ID: 5584644"
- `type`: "external_erratum_id"
- `source_section`: "2.18.21"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 47
- `physical_pages`: [47, 48, 49]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.21 Synopsys ID: 5584644"
- `title`: "Extraneous Transmit IPG when EST Feature Enabled"
- `consequence_summary`: "The extraneous IPG impacts the number of packets that can be scheduled in the Time Interval (TI) or slot/row of the EST Gate Control List (GCL). The remote end..."
- `workaround_anchor_summary`: "The software must program the Time Interval (TI) to accommodate the extraneous IPG based on the number of packets that are expected to be scheduled. For example, for SPRAM..."
- `anchors`:
  - `p47`: "2.18.21 Synopsys ID: 5584644"
  - `p47`: "Title: Extraneous Transmit IPG when EST Feature Enabled"
- `aliases`: ["ENET 5584644", "Synopsys 5584644", "DWC_ether_qos 5584644"]

#### EXT-ENET-SYNOPSYS-5575379
- `name`: "Synopsys ID: 5575379"
- `type`: "external_erratum_id"
- `source_section`: "2.18.22"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 49
- `physical_pages`: [49, 50]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.22 Synopsys ID: 5575379"
- `title`: "Incorrect Execution of EST GCL Iterations When Extended Gate Control Enabled"
- `consequence_summary`: "The next iteration of the GCL is truncated after the first row, which is incorrect. The iteration correctly starts after the time value of the next BTR is..."
- `workaround_anchor_summary`: "The software must split the extended gate controls interval into the following: - An additional GCL row, and increase the LLR value by one. - The remaining extended gate controls..."
- `anchors`:
  - `p49`: "2.18.22 Synopsys ID: 5575379"
  - `p49`: "Title: Incorrect Execution of EST GCL Iterations When Extended Gate Control Enabled"
- `aliases`: ["ENET 5575379", "Synopsys 5575379", "DWC_ether_qos 5575379"]

#### EXT-ENET-SYNOPSYS-5938448
- `name`: "Synopsys ID: 5938448"
- `type`: "external_erratum_id"
- `source_section`: "2.18.23"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 51
- `physical_pages`: [51, 52]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.23 Synopsys ID: 5938448"
- `title`: "Receive DMA-MTL Interface Halts When Descriptor is not Available for Timestamp Status Write"
- `consequence_summary`: "The receive DMA-MTL interface is halted, resulting in receive queue overflow and data loss."
- `workaround_anchor_summary`: "The software must create at least one additional descriptor when: - The receive buffer unavailable interrupt is generated with the AIS and RBU status bits in the DMA_CH(#i)_Status..."
- `anchors`:
  - `p51`: "2.18.23 Synopsys ID: 5938448"
  - `p51`: "Title: Receive DMA-MTL Interface Halts When Descriptor is not Available for Timestamp..."
- `aliases`: ["ENET 5938448", "Synopsys 5938448", "DWC_ether_qos 5938448"]

#### EXT-ENET-SYNOPSYS-3542857
- `name`: "Synopsys ID: 3542857"
- `type`: "external_erratum_id"
- `source_section`: "2.18.24"
- `module`: "ENET / DWC_ether_qos"
- `severity`: "B2-Medium"
- `primary_page`: 52
- `physical_pages`: [52, 53]
- `section_path`: "Chapter 2 Device Errata / 2.18 ENET Errata / 2.18.24 Synopsys ID: 3542857"
- `title`: "Gate Control List Switching is Incorrect for Intermediate Cycles When CTR is Less Than GCL Execution Time"
- `consequence_summary`: "DWC_ether_qos does not schedule the packet in the expected GCL slot."
- `workaround_anchor_summary`: "You can implement the following workaround in the software: Program the CTR, BTR, and Time Intervals of the GCL rows such that the difference between the CTR and the sum of the..."
- `anchors`:
  - `p52`: "2.18.24 Synopsys ID: 3542857"
  - `p52`: "Title: Gate Control List Switching is Incorrect for Intermediate Cycles When CTR is..."
- `aliases`: ["ENET 3542857", "Synopsys 3542857", "DWC_ether_qos 3542857"]

### 8.3 Technical Symbol / Register / Configuration Index

#### ERRATUM-ID-ERR-ADC-3612112
- `name`: "ERR_ADC_3612112"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 7]
- `anchor`: "ERR_ADC_3612112"

#### ERRATUM-ID-ERR-ADC-3612113
- `name`: "ERR_ADC_3612113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 7]
- `anchor`: "ERR_ADC_3612113"

#### ERRATUM-ID-ERR-DEBUG-3514112
- `name`: "ERR_Debug_3514112"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 10]
- `anchor`: "ERR_Debug_3514112"

#### ERRATUM-ID-ERR-DEBUG-3514113
- `name`: "ERR_Debug_3514113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 9]
- `anchor`: "ERR_Debug_3514113"

#### ERRATUM-ID-ERR-DMA-3613112
- `name`: "ERR_DMA_3613112"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 10]
- `anchor`: "ERR_DMA_3613112"

#### ERRATUM-ID-ERR-DMA-3614121
- `name`: "ERR_DMA_3614121"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 13]
- `anchor`: "ERR_DMA_3614121"

#### ERRATUM-ID-ERR-FLEXCAN-3519113
- `name`: "ERR_FLEXCAN_3519113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 16]
- `anchor`: "ERR_FLEXCAN_3519113"

#### ERRATUM-ID-ERR-FLEXCAN-3519117
- `name`: "ERR_FLEXCAN_3519117"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 15]
- `anchor`: "ERR_FLEXCAN_3519117"

#### ERRATUM-ID-ERR-HSADC-3712112
- `name`: "ERR_HSADC_3712112"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 18]
- `anchor`: "ERR_HSADC_3712112"

#### ERRATUM-ID-ERR-LU-3617113
- `name`: "ERR_LU_3617113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 17]
- `anchor`: "ERR_LU_3617113"

#### ERRATUM-ID-ERR-QDT-3612114
- `name`: "ERR_QDT_3612114"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 6, 19]
- `anchor`: "ERR_QDT_3612114"

#### ERRATUM-ID-ERR-RGM-3522113
- `name`: "ERR_RGM_3522113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 6, 21]
- `anchor`: "ERR_RGM_3522113"

#### ERRATUM-ID-ERR-RGM-3614122
- `name`: "ERR_RGM_3614122"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 6, 21]
- `anchor`: "ERR_RGM_3614122"

#### ERRATUM-ID-ERR-RGM-3615114
- `name`: "ERR_RGM_3615114"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 6, 22]
- `anchor`: "ERR_RGM_3615114"

#### ERRATUM-ID-ERR-SCG-3712113
- `name`: "ERR_SCG_3712113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 6, 22]
- `anchor`: "ERR_SCG_3712113"

#### ERRATUM-ID-ERR-SCG-3715113
- `name`: "ERR_SCG_3715113"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 23, 54]
- `anchor`: "ERR_SCG_3715113"

#### ERRATUM-ID-ERR-SSI-3612116
- `name`: "ERR_SSI_3612116"
- `type`: "erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 5, 6, 24]
- `anchor`: "ERR_SSI_3612116"

#### EXTERNAL-ERRATUM-ID-SYNOPSYS-ID
- `name`: "Synopsys ID"
- `type`: "external_erratum_id"
- `primary_page`: 2
- `physical_pages`: [2, 3, 5, 25, 27, 28, 29, 30, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 51, 52, 54]
- `anchor`: "Synopsys ID"

#### MODULE-OR-ABBREVIATION-ADC
- `name`: "ADC"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 6, 7, 8, 9, 18, 54]
- `anchor`: "ADC"

#### MODULE-OR-ABBREVIATION-DMA
- `name`: "DMA"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 17, 18, 25, 28, 29, 30, 31, 32, 37, 39, 40, 45, 46, 51, 52, 54]
- `anchor`: "DMA"

#### MODULE-OR-ABBREVIATION-ENET
- `name`: "ENET"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 5, 12, 25, 54]
- `anchor`: "ENET"

#### MODULE-OR-ABBREVIATION-FLEXCAN
- `name`: "FLEXCAN"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 12, 15, 16]
- `anchor`: "FLEXCAN"

#### MODULE-OR-ABBREVIATION-HSADC
- `name`: "HSADC"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 6, 18, 54]
- `anchor`: "HSADC"

#### MODULE-OR-ABBREVIATION-LU
- `name`: "LU"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 6, 8, 9, 11, 15, 17, 20, 21, 23, 24, 25, 26, 27, 28, 29, 31, 36, 37, 43, 45, 46, 47, 48, 49, 50, 51, 52, 54]
- `anchor`: "LU"

#### MODULE-OR-ABBREVIATION-RA
- `name`: "RA"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 54]
- `anchor`: "RA"

#### MODULE-OR-ABBREVIATION-SSI
- `name`: "SSI"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 6, 10, 13, 16, 24, 30, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 54]
- `anchor`: "SSI"

#### MODULE-OR-ABBREVIATION-TI
- `name`: "TI"
- `type`: "module_or_abbreviation"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54]
- `anchor`: "TI"

#### TERM-ARM-RELATED-ERRATA
- `name`: "Arm-related Errata"
- `type`: "term"
- `primary_page`: 2
- `physical_pages`: [2, 5]
- `anchor`: "Arm-related Errata"

#### TERM-ERRATA
- `name`: "Errata"
- `type`: "term"
- `primary_page`: 2
- `physical_pages`: [2, 4, 5, 7, 25, 54]
- `anchor`: "Errata"

#### MODULE-OR-ABBREVIATION-ALT7
- `name`: "ALT7"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 9, 10]
- `anchor`: "ALT7"

#### MODULE-OR-ABBREVIATION-DMA0
- `name`: "DMA0"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 10, 11, 13, 14]
- `anchor`: "DMA0"

#### MODULE-OR-ABBREVIATION-DMA1
- `name`: "DMA1"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 10, 11, 13]
- `anchor`: "DMA1"

#### MODULE-OR-ABBREVIATION-DMAMUX
- `name`: "DMAMUX"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 10, 11, 13]
- `anchor`: "DMAMUX"

#### MODULE-OR-ABBREVIATION-EST
- `name`: "EST"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 7, 8, 9, 10, 11, 12, 13, 14, 15, 22, 25, 26, 27, 28, 30, 31, 32, 33, 34, 35, 36, 40, 41, 44, 45, 47, 48, 49, 50, 51, 52]
- `anchor`: "EST"

#### MODULE-OR-ABBREVIATION-FC7300F8MDQ
- `name`: "FC7300F8MDQ"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4]
- `anchor`: "FC7300F8MDQ"

#### MODULE-OR-ABBREVIATION-JTAG
- `name`: "JTAG"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 9]
- `anchor`: "JTAG"

#### MODULE-OR-ABBREVIATION-MB
- `name`: "MB"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 15, 16, 17, 19, 25, 30, 33, 34, 38, 41, 43, 46, 47, 48, 49, 50, 51, 52]
- `anchor`: "MB"

#### MODULE-OR-ABBREVIATION-MB0-MB7
- `name`: "MB0-MB7"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 16, 17]
- `anchor`: "MB0-MB7"

#### MODULE-OR-ABBREVIATION-MCU
- `name`: "MCU"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4]
- `anchor`: "MCU"

#### MODULE-OR-ABBREVIATION-PTA10
- `name`: "PTA10"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 9, 10]
- `anchor`: "PTA10"

#### MODULE-OR-ABBREVIATION-PTIMER
- `name`: "PTIMER"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 7, 8, 9, 11, 12]
- `anchor`: "PTIMER"

#### MODULE-OR-ABBREVIATION-SDADC
- `name`: "SDADC"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 7, 8, 9]
- `anchor`: "SDADC"

#### MODULE-OR-ABBREVIATION-SENT
- `name`: "SENT"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 7, 8, 12, 13, 22, 36, 37, 38, 39, 40, 52]
- `anchor`: "SENT"

#### MODULE-OR-ABBREVIATION-SIRC
- `name`: "SIRC"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 7]
- `anchor`: "SIRC"

#### MODULE-OR-ABBREVIATION-SWD
- `name`: "SWD"
- `type`: "module_or_abbreviation"
- `primary_page`: 4
- `physical_pages`: [4, 9, 10]
- `anchor`: "SWD"

#### REGISTER-OR-FIELD-DMA-MON-ERR-STATUS
- `name`: "DMA_MON_ERR_STATUS"
- `type`: "register_or_field"
- `primary_page`: 4
- `physical_pages`: [4, 13]
- `anchor`: "DMA_MON_ERR_STATUS"

#### REGISTER-OR-FIELD-SCG-SIRCCSR-LPWKE
- `name`: "SCG_SIRCCSR.LPWKE"
- `type`: "register_or_field"
- `primary_page`: 4
- `physical_pages`: [4, 7]
- `anchor`: "SCG_SIRCCSR.LPWKE"

#### TERM-CONTINUOUS-DUAL-EDGE
- `name`: "continuous dual-edge"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 17, 18]
- `anchor`: "continuous dual-edge"

#### TERM-CONTINUOUS-DUAL-EDGE-RECEIVE-TRANSMIT
- `name`: "continuous dual-edge receive/transmit"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 17, 18]
- `anchor`: "continuous dual-edge receive/transmit"

#### TERM-DATA-UNIT
- `name`: "Data Unit"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 17, 18]
- `anchor`: "Data Unit"

#### TERM-DEBUG-MODE
- `name`: "Debug mode"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 10, 25]
- `anchor`: "Debug mode"

#### TERM-DMA-MONITOR
- `name`: "DMA Monitor"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 13, 14]
- `anchor`: "DMA Monitor"

#### TERM-DMA-REQUEST
- `name`: "DMA request"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 7, 8, 9, 10, 11, 12, 13]
- `anchor`: "DMA request"

#### TERM-ENHANCED-RX-FIFO
- `name`: "Enhanced Rx FIFO"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 15, 16, 17]
- `anchor`: "Enhanced Rx FIFO"

#### TERM-FLEXIBLE-MODE
- `name`: "flexible mode"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 17, 18]
- `anchor`: "flexible mode"

#### TERM-INTERRUPT
- `name`: "interrupt"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 17, 18, 19, 22, 26, 27, 28, 29, 31, 32, 39, 45, 46, 51]
- `anchor`: "interrupt"

#### TERM-LEVEL-TRIGGERED
- `name`: "level-triggered"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 7]
- `anchor`: "level-triggered"

#### TERM-LOCKSTEP
- `name`: "lockstep"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 10, 14]
- `anchor`: "lockstep"

#### TERM-LOCKSTEP-2
- `name`: "Lockstep"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 10, 14]
- `anchor`: "Lockstep"

#### TERM-MESSAGE-BUFFER
- `name`: "message buffer"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 15, 16, 17]
- `anchor`: "message buffer"

#### TERM-MESSAGE-BUFFER-2
- `name`: "Message Buffer"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 15, 16, 17]
- `anchor`: "Message Buffer"

#### TERM-RESET
- `name`: "reset"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 5, 10, 19, 20, 21, 22, 23, 29, 31, 39, 40]
- `anchor`: "reset"

#### TERM-STANDBY
- `name`: "Standby"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 7]
- `anchor`: "Standby"

#### TERM-STANDBY-MODE
- `name`: "Standby mode"
- `type`: "term"
- `primary_page`: 4
- `physical_pages`: [4, 7]
- `anchor`: "Standby mode"

#### ERRATUM-ID-ERR-ADC-001
- `name`: "ERR_ADC_001"
- `type`: "erratum_id"
- `primary_page`: 5
- `physical_pages`: [5]
- `anchor`: "ERR_ADC_001"

#### ERRATUM-ID-ERR-ADC-002
- `name`: "ERR_ADC_002"
- `type`: "erratum_id"
- `primary_page`: 5
- `physical_pages`: [5]
- `anchor`: "ERR_ADC_002"

#### ERRATUM-ID-ERR-DEBUG-001
- `name`: "ERR_Debug_001"
- `type`: "erratum_id"
- `primary_page`: 5
- `physical_pages`: [5, 54]
- `anchor`: "ERR_Debug_001"

#### ERRATUM-ID-ERR-DEBUG-002
- `name`: "ERR_Debug_002"
- `type`: "erratum_id"
- `primary_page`: 5
- `physical_pages`: [5, 54]
- `anchor`: "ERR_Debug_002"

#### MODULE-OR-ABBREVIATION-AON-CLK
- `name`: "AON_CLK"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 21]
- `anchor`: "AON_CLK"

#### MODULE-OR-ABBREVIATION-AXBS
- `name`: "AXBS"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "AXBS"

#### MODULE-OR-ABBREVIATION-CORE
- `name`: "CORE"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 10, 21, 22, 33, 45]
- `anchor`: "CORE"

#### MODULE-OR-ABBREVIATION-LD
- `name`: "LD"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 7, 8, 9, 15, 16, 17, 22, 23, 25, 26, 27, 28, 29, 31, 32, 33, 34, 35, 36, 37, 38, 41, 42, 43, 44, 49, 51, 52]
- `anchor`: "LD"

#### MODULE-OR-ABBREVIATION-LECNT
- `name`: "LECNT"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 19, 20]
- `anchor`: "LECNT"

#### MODULE-OR-ABBREVIATION-PLL
- `name`: "PLL"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 22, 23]
- `anchor`: "PLL"

#### MODULE-OR-ABBREVIATION-PLL0-CLK1
- `name`: "PLL0_CLK1"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "PLL0_CLK1"

#### MODULE-OR-ABBREVIATION-PLL1-CLK1
- `name`: "PLL1_CLK1"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "PLL1_CLK1"

#### MODULE-OR-ABBREVIATION-POSDCNT
- `name`: "POSDCNT"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 19, 20]
- `anchor`: "POSDCNT"

#### MODULE-OR-ABBREVIATION-PSTDIV1
- `name`: "PSTDIV1"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 22, 23]
- `anchor`: "PSTDIV1"

#### MODULE-OR-ABBREVIATION-RESET-B
- `name`: "RESET_B"
- `type`: "module_or_abbreviation"
- `primary_page`: 5
- `physical_pages`: [5, 21]
- `anchor`: "RESET_B"

#### REGISTER-OR-FIELD-PLL0-CFG
- `name`: "PLL0_CFG"
- `type`: "register_or_field"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "PLL0_CFG"

#### REGISTER-OR-FIELD-PLL1-CFG
- `name`: "PLL1_CFG"
- `type`: "register_or_field"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "PLL1_CFG"

#### STATUS-TERM-WORKAROUND-AVAILABLE
- `name`: "Workaround Available"
- `type`: "status_term"
- `primary_page`: 5
- `physical_pages`: [5]
- `anchor`: "Workaround Available"

#### TERM-140-SLOW-CLK-CYCLES
- `name`: "140 slow_clk cycles"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "140 slow_clk cycles"

#### TERM-AK-PROTOCOL
- `name`: "AK protocol"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 24]
- `anchor`: "AK protocol"

#### TERM-AON-CLK-FILTER
- `name`: "AON_CLK filter"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 21]
- `anchor`: "AON_CLK filter"

#### TERM-AXBS-BUS
- `name`: "AXBS bus"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "AXBS bus"

#### TERM-CORE-ONLY-RESET
- `name`: "core-only reset"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 21, 22]
- `anchor`: "core-only reset"

#### TERM-CPU1-RESET
- `name`: "CPU1 reset"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "CPU1 reset"

#### TERM-CPUX
- `name`: "CPUx"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 21, 22]
- `anchor`: "CPUx"

#### TERM-DELAY-RESET
- `name`: "delay reset"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 21, 22]
- `anchor`: "delay reset"

#### TERM-FILTER
- `name`: "filter"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 21, 24, 25, 43, 44, 45]
- `anchor`: "filter"

#### TERM-PHASE-A
- `name`: "Phase_A"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 19]
- `anchor`: "Phase_A"

#### TERM-PHASE-B
- `name`: "Phase_B"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 19]
- `anchor`: "Phase_B"

#### TERM-PLL-LOCK-FAILURE
- `name`: "PLL lock failure"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5]
- `anchor`: "PLL lock failure"

#### TERM-SLOW-CLK
- `name`: "slow_clk"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 22]
- `anchor`: "slow_clk"

#### TERM-SSI-SENSOR
- `name`: "SSI sensor"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 24]
- `anchor`: "SSI sensor"

#### TERM-WHILE-1
- `name`: "while(1)"
- `type`: "term"
- `primary_page`: 5
- `physical_pages`: [5, 21, 22]
- `anchor`: "while(1)"

#### ERRATUM-ID-ERR-DMA-001
- `name`: "ERR_DMA_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_DMA_001"

#### ERRATUM-ID-ERR-DMA-002
- `name`: "ERR_DMA_002"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_DMA_002"

#### ERRATUM-ID-ERR-FLEXCAN-001
- `name`: "ERR_FLEXCAN_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6]
- `anchor`: "ERR_FLEXCAN_001"

#### ERRATUM-ID-ERR-FLEXCAN-002
- `name`: "ERR_FLEXCAN_002"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6]
- `anchor`: "ERR_FLEXCAN_002"

#### ERRATUM-ID-ERR-HSADC-001
- `name`: "ERR_HSADC_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_HSADC_001"

#### ERRATUM-ID-ERR-LU-001
- `name`: "ERR_LU_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_LU_001"

#### ERRATUM-ID-ERR-QDT-001
- `name`: "ERR_QDT_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6]
- `anchor`: "ERR_QDT_001"

#### ERRATUM-ID-ERR-RGM-001
- `name`: "ERR_RGM_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6]
- `anchor`: "ERR_RGM_001"

#### ERRATUM-ID-ERR-RGM-002
- `name`: "ERR_RGM_002"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_RGM_002"

#### ERRATUM-ID-ERR-RGM-003
- `name`: "ERR_RGM_003"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_RGM_003"

#### ERRATUM-ID-ERR-SCG-001
- `name`: "ERR_SCG_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6, 54]
- `anchor`: "ERR_SCG_001"

#### ERRATUM-ID-ERR-SSI-001
- `name`: "ERR_SSI_001"
- `type`: "erratum_id"
- `primary_page`: 6
- `physical_pages`: [6]
- `anchor`: "ERR_SSI_001"

#### REGISTER-OR-FIELD-SCM-TSTMP-RES0
- `name`: "SCM_TSTMP_RES0"
- `type`: "register_or_field"
- `primary_page`: 7
- `physical_pages`: [7, 8, 9]
- `anchor`: "SCM_TSTMP_RES0"

#### REGISTER-OR-FIELD-SCM-TSTMP-RES1
- `name`: "SCM_TSTMP_RES1"
- `type`: "register_or_field"
- `primary_page`: 7
- `physical_pages`: [7, 8, 9]
- `anchor`: "SCM_TSTMP_RES1"

#### REGISTER-OR-FIELD-SCM-TSTMP-RES2
- `name`: "SCM_TSTMP_RES2"
- `type`: "register_or_field"
- `primary_page`: 7
- `physical_pages`: [7, 8, 9]
- `anchor`: "SCM_TSTMP_RES2"

#### REGISTER-OR-FIELD-SCM-TSTMP-RES3
- `name`: "SCM_TSTMP_RES3"
- `type`: "register_or_field"
- `primary_page`: 7
- `physical_pages`: [7, 8, 9]
- `anchor`: "SCM_TSTMP_RES3"

#### REGISTER-OR-FIELD-SGMP-ADC-GROUP0-RES0
- `name`: "SGMP_ADC_GROUP0_RES0"
- `type`: "register_or_field"
- `primary_page`: 7
- `physical_pages`: [7, 8]
- `anchor`: "SGMP_ADC_GROUP0_RES0"

#### REGISTER-OR-FIELD-SIRCCSR-LPWKE
- `name`: "SIRCCSR[LPWKE]"
- `type`: "register_or_field"
- `primary_page`: 7
- `physical_pages`: [7]
- `anchor`: "SIRCCSR[LPWKE]"

#### TERM-SEQUENCE-GROUP-COMPARE
- `name`: "Sequence Group Compare"
- `type`: "term"
- `primary_page`: 7
- `physical_pages`: [7]
- `anchor`: "Sequence Group Compare"

#### MODULE-OR-ABBREVIATION-TRGSEL
- `name`: "TRGSEL"
- `type`: "module_or_abbreviation"
- `primary_page`: 8
- `physical_pages`: [8, 9]
- `anchor`: "TRGSEL"

#### REGISTER-OR-FIELD-ADC-CFG1-TRIGMODE
- `name`: "ADC_CFG1.TRIGMODE"
- `type`: "register_or_field"
- `primary_page`: 8
- `physical_pages`: [8, 9]
- `anchor`: "ADC_CFG1.TRIGMODE"

#### REGISTER-OR-FIELD-SCM-ADC-GROUP0-RES1
- `name`: "SCM_ADC_GROUP0_RES1"
- `type`: "register_or_field"
- `primary_page`: 8
- `physical_pages`: [8]
- `anchor`: "SCM_ADC_GROUP0_RES1"

#### TERM-PULSE-BASED-TRIGGER
- `name`: "pulse-based trigger"
- `type`: "term"
- `primary_page`: 8
- `physical_pages`: [8]
- `anchor`: "pulse-based trigger"

#### REGISTER-OR-FIELD-TSTMP-LOCK-SDADCX-TMR-SRC-SEL
- `name`: "TSTMP_LOCK[SDADCx_TMR_SRC_SEL]"
- `type`: "register_or_field"
- `primary_page`: 9
- `physical_pages`: [9]
- `anchor`: "TSTMP_LOCK[SDADCx_TMR_SRC_SEL]"

#### TERM-SDADCX-TMR-SRC-SEL
- `name`: "SDADCx_TMR_SRC_SEL"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `anchor`: "SDADCx_TMR_SRC_SEL"

#### MODULE-OR-ABBREVIATION-DWT
- `name`: "DWT"
- `type`: "module_or_abbreviation"
- `primary_page`: 10
- `physical_pages`: [10]
- `anchor`: "DWT"

#### MODULE-OR-ABBREVIATION-DWT-CYCCNT
- `name`: "DWT_CYCCNT"
- `type`: "module_or_abbreviation"
- `primary_page`: 10
- `physical_pages`: [10]
- `anchor`: "DWT_CYCCNT"

#### TERM-DMAMUX-SLOTS
- `name`: "DMAMUX slots"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10, 13]
- `anchor`: "DMAMUX slots"

#### MODULE-OR-ABBREVIATION-FCUART
- `name`: "FCUART"
- `type`: "module_or_abbreviation"
- `primary_page`: 11
- `physical_pages`: [11]
- `anchor`: "FCUART"

#### MODULE-OR-ABBREVIATION-TPU
- `name`: "TPU"
- `type`: "module_or_abbreviation"
- `primary_page`: 11
- `physical_pages`: [11, 12, 24, 29, 35, 36, 37]
- `anchor`: "TPU"

#### REGISTER-OR-FIELD-DMA-REQUEST
- `name`: "DMA_Request"
- `type`: "register_or_field"
- `primary_page`: 11
- `physical_pages`: [11]
- `anchor`: "DMA_Request"

#### TERM-EFTU
- `name`: "eFTU"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11, 12]
- `anchor`: "eFTU"

#### TERM-SLOT-NUM
- `name`: "Slot_Num"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `anchor`: "Slot_Num"

#### MODULE-OR-ABBREVIATION-MON-CHK-EN
- `name`: "MON_CHK_EN"
- `type`: "module_or_abbreviation"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "MON_CHK_EN"

#### REGISTER-OR-FIELD-DMA-CFG-ATTRN
- `name`: "DMA_CFG_ATTRn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_ATTRn"

#### REGISTER-OR-FIELD-DMA-CFG-CLC-CHTRGENNON
- `name`: "DMA_CFG_CLC_CHTRGENNOn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_CLC_CHTRGENNOn"

#### REGISTER-OR-FIELD-DMA-CFG-CLC-CHTRGENYESN
- `name`: "DMA_CFG_CLC_CHTRGENYESn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_CLC_CHTRGENYESn"

#### REGISTER-OR-FIELD-DMA-CFG-DADDRN
- `name`: "DMA_CFG_DADDRn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_DADDRn"

#### REGISTER-OR-FIELD-DMA-CFG-DOFFN
- `name`: "DMA_CFG_DOFFn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_DOFFn"

#### REGISTER-OR-FIELD-DMA-CFG-NBYTES-ILNON
- `name`: "DMA_CFG_NBYTES_ILNOn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_NBYTES_ILNOn"

#### REGISTER-OR-FIELD-DMA-CFG-NBYTES-ILOFFNON
- `name`: "DMA_CFG_NBYTES_ILOFFNOn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_NBYTES_ILOFFNOn"

#### REGISTER-OR-FIELD-DMA-CFG-NBYTES-ILOFFYESN
- `name`: "DMA_CFG_NBYTES_ILOFFYESn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_NBYTES_ILOFFYESn"

#### REGISTER-OR-FIELD-DMA-CFG-SADDRN
- `name`: "DMA_CFG_SADDRn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_SADDRn"

#### REGISTER-OR-FIELD-DMA-CFG-SLASTN
- `name`: "DMA_CFG_SLASTn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_SLASTn"

#### REGISTER-OR-FIELD-DMA-CFG-SOFFN
- `name`: "DMA_CFG_SOFFn"
- `type`: "register_or_field"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `anchor`: "DMA_CFG_SOFFn"

#### REGISTER-OR-FIELD-DMA-CFG-BLC-CHTRGENNON
- `name`: "DMA_CFG_BLC_CHTRGENNOn"
- `type`: "register_or_field"
- `primary_page`: 14
- `physical_pages`: [14]
- `anchor`: "DMA_CFG_BLC_CHTRGENNOn"

#### REGISTER-OR-FIELD-DMA-CFG-BLC-CHTRGENYESN
- `name`: "DMA_CFG_BLC_CHTRGENYESn"
- `type`: "register_or_field"
- `primary_page`: 14
- `physical_pages`: [14]
- `anchor`: "DMA_CFG_BLC_CHTRGENYESn"

#### REGISTER-OR-FIELD-DMA-CFG-CSRN
- `name`: "DMA_CFG_CSRn"
- `type`: "register_or_field"
- `primary_page`: 14
- `physical_pages`: [14]
- `anchor`: "DMA_CFG_CSRn"

#### REGISTER-OR-FIELD-DMA-CFG-DLASTN
- `name`: "DMA_CFG_DLASTn"
- `type`: "register_or_field"
- `primary_page`: 14
- `physical_pages`: [14]
- `anchor`: "DMA_CFG_DLASTn"

#### TERM-SOFTWARE-CRC
- `name`: "software CRC"
- `type`: "term"
- `primary_page`: 14
- `physical_pages`: [14]
- `anchor`: "software CRC"

#### TERM-C-S-WORD
- `name`: "C/S word"
- `type`: "term"
- `primary_page`: 15
- `physical_pages`: [15]
- `anchor`: "C/S word"

#### TERM-FREE-RUNNING-TIMER
- `name`: "Free Running Timer"
- `type`: "term"
- `primary_page`: 15
- `physical_pages`: [15]
- `anchor`: "Free Running Timer"

#### MODULE-OR-ABBREVIATION-CAN-FD
- `name`: "CAN FD"
- `type`: "module_or_abbreviation"
- `primary_page`: 16
- `physical_pages`: [16]
- `anchor`: "CAN FD"

#### TERM-CLASSIC-CAN
- `name`: "Classic CAN"
- `type`: "term"
- `primary_page`: 16
- `physical_pages`: [16]
- `anchor`: "Classic CAN"

#### MODULE-OR-ABBREVIATION-FULL
- `name`: "FULL"
- `type`: "module_or_abbreviation"
- `primary_page`: 17
- `physical_pages`: [17, 31, 38, 53]
- `anchor`: "FULL"

#### MODULE-OR-ABBREVIATION-OVERRUN
- `name`: "OVERRUN"
- `type`: "module_or_abbreviation"
- `primary_page`: 17
- `physical_pages`: [17, 41, 50]
- `anchor`: "OVERRUN"

#### REGISTER-OR-FIELD-CAN-ERFSR-ERFDA
- `name`: "CAN_ERFSR.ERFDA"
- `type`: "register_or_field"
- `primary_page`: 17
- `physical_pages`: [17]
- `anchor`: "CAN_ERFSR.ERFDA"

#### TERM-15-S
- `name`: "15 μs"
- `type`: "term"
- `primary_page`: 18
- `physical_pages`: [18]
- `anchor`: "15 μs"

#### TERM-DUMMY-CONVERSIONS
- `name`: "dummy conversions"
- `type`: "term"
- `primary_page`: 18
- `physical_pages`: [18]
- `anchor`: "dummy conversions"

#### TERM-SAMPLING
- `name`: "sampling"
- `type`: "term"
- `primary_page`: 18
- `physical_pages`: [18]
- `anchor`: "sampling"

#### MODULE-OR-ABBREVIATION-CV0
- `name`: "CV0"
- `type`: "module_or_abbreviation"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "CV0"

#### MODULE-OR-ABBREVIATION-CV1
- `name`: "CV1"
- `type`: "module_or_abbreviation"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "CV1"

#### MODULE-OR-ABBREVIATION-PIT
- `name`: "PIT"
- `type`: "module_or_abbreviation"
- `primary_page`: 19
- `physical_pages`: [19, 20, 29]
- `anchor`: "PIT"

#### MODULE-OR-ABBREVIATION-POSCNT
- `name`: "POSCNT"
- `type`: "module_or_abbreviation"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "POSCNT"

#### MODULE-OR-ABBREVIATION-QUADIR
- `name`: "QUADIR"
- `type`: "module_or_abbreviation"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "QUADIR"

#### TERM-INPUT-CAPTURE
- `name`: "Input Capture"
- `type`: "term"
- `primary_page`: 19
- `physical_pages`: [19]
- `anchor`: "Input Capture"

#### TERM-MATCH-TRIGGER
- `name`: "match_trigger"
- `type`: "term"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "match_trigger"

#### TERM-QUAD-MODE
- `name`: "QUAD mode"
- `type`: "term"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "QUAD mode"

#### TERM-TOOTH-PERIOD
- `name`: "tooth_period"
- `type`: "term"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `anchor`: "tooth_period"

#### MODULE-OR-ABBREVIATION-INTM
- `name`: "INTM"
- `type`: "module_or_abbreviation"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `anchor`: "INTM"

#### MODULE-OR-ABBREVIATION-LOCKUP
- `name`: "LOCKUP"
- `type`: "module_or_abbreviation"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `anchor`: "LOCKUP"

#### MODULE-OR-ABBREVIATION-SWRST
- `name`: "SWRST"
- `type`: "module_or_abbreviation"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `anchor`: "SWRST"

#### MODULE-OR-ABBREVIATION-SYSRST
- `name`: "SYSRST"
- `type`: "module_or_abbreviation"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `anchor`: "SYSRST"

#### MODULE-OR-ABBREVIATION-VIH
- `name`: "VIH"
- `type`: "module_or_abbreviation"
- `primary_page`: 21
- `physical_pages`: [21]
- `anchor`: "VIH"

#### MODULE-OR-ABBREVIATION-WDOG
- `name`: "WDOG"
- `type`: "module_or_abbreviation"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `anchor`: "WDOG"

#### TERM-RC-FILTER
- `name`: "RC filter"
- `type`: "term"
- `primary_page`: 21
- `physical_pages`: [21]
- `anchor`: "RC filter"

#### TERM-RESET-B-PIN
- `name`: "RESET_B pin"
- `type`: "term"
- `primary_page`: 21
- `physical_pages`: [21]
- `anchor`: "RESET_B pin"

#### MODULE-OR-ABBREVIATION-TCM
- `name`: "TCM"
- `type`: "module_or_abbreviation"
- `primary_page`: 22
- `physical_pages`: [22]
- `anchor`: "TCM"

#### REGISTER-OR-FIELD-SCM-INT-ROUTERN
- `name`: "SCM_INT_ROUTERn"
- `type`: "register_or_field"
- `primary_page`: 22
- `physical_pages`: [22]
- `anchor`: "SCM_INT_ROUTERn"

#### TERM-SYSTEM-RESET
- `name`: "system reset"
- `type`: "term"
- `primary_page`: 22
- `physical_pages`: [22]
- `anchor`: "system reset"

#### MODULE-OR-ABBREVIATION-DIVH
- `name`: "DIVH"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "DIVH"

#### MODULE-OR-ABBREVIATION-DIVL
- `name`: "DIVL"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "DIVL"

#### MODULE-OR-ABBREVIATION-DIVM
- `name`: "DIVM"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "DIVM"

#### MODULE-OR-ABBREVIATION-FOSC
- `name`: "FOSC"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "FOSC"

#### MODULE-OR-ABBREVIATION-PLL0DIV
- `name`: "PLL0DIV"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "PLL0DIV"

#### MODULE-OR-ABBREVIATION-PLL1DIV
- `name`: "PLL1DIV"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "PLL1DIV"

#### MODULE-OR-ABBREVIATION-PREDIV
- `name`: "PREDIV"
- `type`: "module_or_abbreviation"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "PREDIV"

#### REGISTER-OR-FIELD-SCG-PLL0CFG-PREDIV
- `name`: "SCG_PLL0CFG.PREDIV"
- `type`: "register_or_field"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "SCG_PLL0CFG.PREDIV"

#### REGISTER-OR-FIELD-SCG-PLL0CSR-PLLLK
- `name`: "SCG_PLL0CSR.PLLLK"
- `type`: "register_or_field"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "SCG_PLL0CSR.PLLLK"

#### REGISTER-OR-FIELD-SCG-PLL0CSR-VLD
- `name`: "SCG_PLL0CSR.VLD"
- `type`: "register_or_field"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "SCG_PLL0CSR.VLD"

#### TERM-BYPASS-MODE
- `name`: "Bypass mode"
- `type`: "term"
- `primary_page`: 23
- `physical_pages`: [23]
- `anchor`: "Bypass mode"

#### TERM-8-MHZ
- `name`: "8 MHz"
- `type`: "term"
- `primary_page`: 24
- `physical_pages`: [24]
- `anchor`: "8 MHz"

#### TERM-INH
- `name`: "inh"
- `type`: "term"
- `primary_page`: 24
- `physical_pages`: [24]
- `anchor`: "inh"

#### TERM-INM
- `name`: "inm"
- `type`: "term"
- `primary_page`: 24
- `physical_pages`: [24]
- `anchor`: "inm"

#### TERM-INPUT-FUNCTIONAL-CLOCK
- `name`: "input functional clock"
- `type`: "term"
- `primary_page`: 24
- `physical_pages`: [24]
- `anchor`: "input functional clock"

#### MODULE-OR-ABBREVIATION-CTR
- `name`: "CTR"
- `type`: "module_or_abbreviation"
- `primary_page`: 25
- `physical_pages`: [25, 35, 36, 37, 42, 43, 49, 50, 52, 53]
- `anchor`: "CTR"

#### MODULE-OR-ABBREVIATION-VFFQ
- `name`: "VFFQ"
- `type`: "module_or_abbreviation"
- `primary_page`: 25
- `physical_pages`: [25]
- `anchor`: "VFFQ"

#### MODULE-OR-ABBREVIATION-VFFQE
- `name`: "VFFQE"
- `type`: "module_or_abbreviation"
- `primary_page`: 25
- `physical_pages`: [25]
- `anchor`: "VFFQE"

#### MODULE-OR-ABBREVIATION-VTFE
- `name`: "VTFE"
- `type`: "module_or_abbreviation"
- `primary_page`: 25
- `physical_pages`: [25]
- `anchor`: "VTFE"

#### REGISTER-OR-FIELD-MAC-PACKET-FILTER
- `name`: "MAC_Packet_Filter"
- `type`: "register_or_field"
- `primary_page`: 25
- `physical_pages`: [25]
- `anchor`: "MAC_Packet_Filter"

#### REGISTER-OR-FIELD-MAC-RXQ-CTRL4
- `name`: "MAC_RxQ_Ctrl4"
- `type`: "register_or_field"
- `primary_page`: 25
- `physical_pages`: [25]
- `anchor`: "MAC_RxQ_Ctrl4"

#### REGISTER-OR-FIELD-MAC-SYSTEM-TIME-HIGHER-WORD-SECONDS
- `name`: "MAC_System_Time_Higher_Word_Seconds"
- `type`: "register_or_field"
- `primary_page`: 25
- `physical_pages`: [25, 26]
- `anchor`: "MAC_System_Time_Higher_Word_Seconds"

#### REGISTER-OR-FIELD-MAC-VLAN-TAG
- `name`: "MAC_VLAN_Tag"
- `type`: "register_or_field"
- `primary_page`: 25
- `physical_pages`: [25]
- `anchor`: "MAC_VLAN_Tag"

#### TERM-DWC-ETHER
- `name`: "DWC_ether"
- `type`: "term"
- `primary_page`: 25
- `physical_pages`: [25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 44, 52]
- `anchor`: "DWC_ether"

#### TERM-DWC-ETHER-QOS
- `name`: "DWC_ether_qos"
- `type`: "term"
- `primary_page`: 25
- `physical_pages`: [25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 44, 52]
- `anchor`: "DWC_ether_qos"

#### TERM-RECEIVE-QUEUE
- `name`: "Receive Queue"
- `type`: "term"
- `primary_page`: 25
- `physical_pages`: [25, 37, 38, 51, 52]
- `anchor`: "Receive Queue"

#### MODULE-OR-ABBREVIATION-EQOS
- `name`: "EQOS"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26, 29, 33, 45, 49, 51]
- `anchor`: "EQOS"

#### MODULE-OR-ABBREVIATION-IEEE-1588
- `name`: "IEEE 1588"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26, 27, 35, 51]
- `anchor`: "IEEE 1588"

#### MODULE-OR-ABBREVIATION-PTP
- `name`: "PTP"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26, 27, 28, 36, 37, 41, 49, 50, 52, 53]
- `anchor`: "PTP"

#### MODULE-OR-ABBREVIATION-SNAPTYPSEL
- `name`: "SNAPTYPSEL"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26, 27, 28]
- `anchor`: "SNAPTYPSEL"

#### MODULE-OR-ABBREVIATION-TSEVNTENA
- `name`: "TSEVNTENA"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26, 27, 28]
- `anchor`: "TSEVNTENA"

#### MODULE-OR-ABBREVIATION-TSIE
- `name`: "TSIE"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26]
- `anchor`: "TSIE"

#### MODULE-OR-ABBREVIATION-TSIS
- `name`: "TSIS"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26]
- `anchor`: "TSIS"

#### MODULE-OR-ABBREVIATION-TSMSTRENA
- `name`: "TSMSTRENA"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26, 27]
- `anchor`: "TSMSTRENA"

#### MODULE-OR-ABBREVIATION-TSSOVF
- `name`: "TSSOVF"
- `type`: "module_or_abbreviation"
- `primary_page`: 26
- `physical_pages`: [26]
- `anchor`: "TSSOVF"

#### REGISTER-OR-FIELD-MAC-INTERRUPT-ENABLE
- `name`: "MAC_Interrupt_Enable"
- `type`: "register_or_field"
- `primary_page`: 26
- `physical_pages`: [26]
- `anchor`: "MAC_Interrupt_Enable"

#### REGISTER-OR-FIELD-MAC-INTERRUPT-STATUS
- `name`: "MAC_Interrupt_Status"
- `type`: "register_or_field"
- `primary_page`: 26
- `physical_pages`: [26]
- `anchor`: "MAC_Interrupt_Status"

#### REGISTER-OR-FIELD-MAC-SYSTEM-TIME-SECONDS
- `name`: "MAC_System_Time_Seconds"
- `type`: "register_or_field"
- `primary_page`: 26
- `physical_pages`: [26, 36, 37]
- `anchor`: "MAC_System_Time_Seconds"

#### REGISTER-OR-FIELD-MAC-TIMESTAMP-CONTROL
- `name`: "MAC_Timestamp_Control"
- `type`: "register_or_field"
- `primary_page`: 26
- `physical_pages`: [26, 27, 35, 36, 52]
- `anchor`: "MAC_Timestamp_Control"

#### REGISTER-OR-FIELD-MAC-TIMESTAMP-CONTROL-2
- `name`: "MAC_Timestamp_control"
- `type`: "register_or_field"
- `primary_page`: 26
- `physical_pages`: [26, 27, 35, 36, 52]
- `anchor`: "MAC_Timestamp_control"

#### REGISTER-OR-FIELD-MAC-TIMESTAMP-STATUS
- `name`: "MAC_Timestamp_Status"
- `type`: "register_or_field"
- `primary_page`: 26
- `physical_pages`: [26]
- `anchor`: "MAC_Timestamp_Status"

#### TERM-ONE-STEP-TIMESTAMP
- `name`: "one-step timestamp"
- `type`: "term"
- `primary_page`: 26
- `physical_pages`: [26, 27]
- `anchor`: "one-step timestamp"

#### MODULE-OR-ABBREVIATION-AV8021ASMEN
- `name`: "AV8021ASMEN"
- `type`: "module_or_abbreviation"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `anchor`: "AV8021ASMEN"

#### REGISTER-OR-FIELD-802-1AS
- `name`: "802.1AS"
- `type`: "register_or_field"
- `primary_page`: 27
- `physical_pages`: [27]
- `anchor`: "802.1AS"

#### TERM-FOLLOW-UP
- `name`: "Follow_Up"
- `type`: "term"
- `primary_page`: 27
- `physical_pages`: [27]
- `anchor`: "Follow_Up"

#### TERM-PEER-DELAY-RESERVED
- `name`: "Peer Delay Reserved"
- `type`: "term"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `anchor`: "Peer Delay Reserved"

#### MODULE-OR-ABBREVIATION-FSM
- `name`: "FSM"
- `type`: "module_or_abbreviation"
- `primary_page`: 28
- `physical_pages`: [28, 29]
- `anchor`: "FSM"

#### MODULE-OR-ABBREVIATION-TBU-WAIT-FOR-EOF
- `name`: "TBU_WAIT_FOR_EOF"
- `type`: "module_or_abbreviation"
- `primary_page`: 28
- `physical_pages`: [28]
- `anchor`: "TBU_WAIT_FOR_EOF"

#### MODULE-OR-ABBREVIATION-TFC-WAIT-FOR-GNT
- `name`: "TFC_WAIT_FOR_GNT"
- `type`: "module_or_abbreviation"
- `primary_page`: 28
- `physical_pages`: [28]
- `anchor`: "TFC_WAIT_FOR_GNT"

#### MODULE-OR-ABBREVIATION-TPE-LPI
- `name`: "TPE_LPI"
- `type`: "module_or_abbreviation"
- `primary_page`: 28
- `physical_pages`: [28]
- `anchor`: "TPE_LPI"

#### MODULE-OR-ABBREVIATION-TSA
- `name`: "TSA"
- `type`: "module_or_abbreviation"
- `primary_page`: 28
- `physical_pages`: [28, 36, 51, 52]
- `anchor`: "TSA"

#### REGISTER-OR-FIELD-DMA-CH-I
- `name`: "DMA_CH(#i"
- `type`: "register_or_field"
- `primary_page`: 28
- `physical_pages`: [28, 31, 39, 45, 51]
- `anchor`: "DMA_CH(#i"

#### REGISTER-OR-FIELD-MAC-CONFIGURATION
- `name`: "MAC_Configuration"
- `type`: "register_or_field"
- `primary_page`: 28
- `physical_pages`: [28, 29, 49]
- `anchor`: "MAC_Configuration"

#### REGISTER-OR-FIELD-MAC-LPI-CONTROL-STATUS
- `name`: "MAC_LPI_Control_Status"
- `type`: "register_or_field"
- `primary_page`: 28
- `physical_pages`: [28, 29]
- `anchor`: "MAC_LPI_Control_Status"

#### TERM-FSM-TIMEOUT
- `name`: "FSM timeout"
- `type`: "term"
- `primary_page`: 28
- `physical_pages`: [28, 29]
- `anchor`: "FSM timeout"

#### TERM-TIMESTAMP-STATUS
- `name`: "Timestamp status"
- `type`: "term"
- `primary_page`: 28
- `physical_pages`: [28, 51]
- `anchor`: "Timestamp status"

#### REGISTER-OR-FIELD-MAC-DPP-FSM-INTERRUPT-STATUS
- `name`: "MAC_DPP_FSM_Interrupt_Status"
- `type`: "register_or_field"
- `primary_page`: 29
- `physical_pages`: [29]
- `anchor`: "MAC_DPP_FSM_Interrupt_Status"

#### REGISTER-OR-FIELD-MAC-FSM-ACT-TIMER
- `name`: "MAC_FSM_ACT_Timer"
- `type`: "register_or_field"
- `primary_page`: 29
- `physical_pages`: [29]
- `anchor`: "MAC_FSM_ACT_Timer"

#### REGISTER-OR-FIELD-MAC-FSM-CONTROL
- `name`: "MAC_FSM_Control"
- `type`: "register_or_field"
- `primary_page`: 29
- `physical_pages`: [29]
- `anchor`: "MAC_FSM_Control"

#### TERM-ASYNCHRONOUS-FIFO
- `name`: "asynchronous FIFO"
- `type`: "term"
- `primary_page`: 29
- `physical_pages`: [29, 30, 48]
- `anchor`: "asynchronous FIFO"

#### TERM-CDC-DELAY
- `name`: "CDC Delay"
- `type`: "term"
- `primary_page`: 29
- `physical_pages`: [29, 48]
- `anchor`: "CDC Delay"

#### MODULE-OR-ABBREVIATION-STXSTSF
- `name`: "STXSTSF"
- `type`: "module_or_abbreviation"
- `primary_page`: 31
- `physical_pages`: [31, 32]
- `anchor`: "STXSTSF"

#### MODULE-OR-ABBREVIATION-TXSTSFSTS
- `name`: "TXSTSFSTS"
- `type`: "module_or_abbreviation"
- `primary_page`: 31
- `physical_pages`: [31, 32]
- `anchor`: "TXSTSFSTS"

#### REGISTER-OR-FIELD-MTL-TXQ-I
- `name`: "MTL_TxQ(#i"
- `type`: "register_or_field"
- `primary_page`: 31
- `physical_pages`: [31, 32, 33, 34]
- `anchor`: "MTL_TxQ(#i"

#### REGISTER-OR-FIELD-MTL-TXQ-I-DEBUG
- `name`: "MTL_TxQ(#i)_Debug"
- `type`: "register_or_field"
- `primary_page`: 31
- `physical_pages`: [31, 32]
- `anchor`: "MTL_TxQ(#i)_Debug"

#### TERM-DESCRIPTOR
- `name`: "Descriptor"
- `type`: "term"
- `primary_page`: 31
- `physical_pages`: [31, 32, 39, 43, 44, 45, 46, 51, 52]
- `anchor`: "Descriptor"

#### TERM-TRANSMIT-QUEUE
- `name`: "Transmit Queue"
- `type`: "term"
- `primary_page`: 31
- `physical_pages`: [31, 32, 33, 34, 35, 39, 42, 46, 48, 49, 50]
- `anchor`: "Transmit Queue"

#### TERM-TXQ
- `name`: "TxQ"
- `type`: "term"
- `primary_page`: 31
- `physical_pages`: [31, 32, 33, 34, 46, 47, 49, 50]
- `anchor`: "TxQ"

#### REGISTER-OR-FIELD-DMA-CH0-TX-CONTROL
- `name`: "DMA_CH0_TX_Control"
- `type`: "register_or_field"
- `primary_page`: 32
- `physical_pages`: [32]
- `anchor`: "DMA_CH0_TX_Control"

#### MODULE-OR-ABBREVIATION-CBS
- `name`: "CBS"
- `type`: "module_or_abbreviation"
- `primary_page`: 33
- `physical_pages`: [33, 46, 47]
- `anchor`: "CBS"

#### MODULE-OR-ABBREVIATION-GCL
- `name`: "GCL"
- `type`: "module_or_abbreviation"
- `primary_page`: 33
- `physical_pages`: [33, 34, 35, 40, 41, 48, 49, 50, 52, 53]
- `anchor`: "GCL"

#### MODULE-OR-ABBREVIATION-HOL
- `name`: "HOL"
- `type`: "module_or_abbreviation"
- `primary_page`: 33
- `physical_pages`: [33, 44, 51]
- `anchor`: "HOL"

#### MODULE-OR-ABBREVIATION-IPG
- `name`: "IPG"
- `type`: "module_or_abbreviation"
- `primary_page`: 34
- `physical_pages`: [34, 46, 47, 48, 49]
- `anchor`: "IPG"

#### REGISTER-OR-FIELD-MTL-OPERATION-MODE
- `name`: "MTL_Operation_Mode"
- `type`: "register_or_field"
- `primary_page`: 34
- `physical_pages`: [34, 43, 44]
- `anchor`: "MTL_Operation_Mode"

#### REGISTER-OR-FIELD-MTL-EST-CONTROL
- `name`: "MTL_EST_Control"
- `type`: "register_or_field"
- `primary_page`: 35
- `physical_pages`: [35, 41]
- `anchor`: "MTL_EST_Control"

#### REGISTER-OR-FIELD-MTL-EST-STATUS
- `name`: "MTL_EST_Status"
- `type`: "register_or_field"
- `primary_page`: 35
- `physical_pages`: [35]
- `anchor`: "MTL_EST_Status"

#### MODULE-OR-ABBREVIATION-PPSCTRL-PPSCMD
- `name`: "PPSCTRL_PPSCMD"
- `type`: "module_or_abbreviation"
- `primary_page`: 36
- `physical_pages`: [36]
- `anchor`: "PPSCTRL_PPSCMD"

#### REGISTER-OR-FIELD-MAC-PPS0-TARGET-TIME-NANOSECONDS
- `name`: "MAC_PPS0_Target_Time_Nanoseconds"
- `type`: "register_or_field"
- `primary_page`: 36
- `physical_pages`: [36, 37]
- `anchor`: "MAC_PPS0_Target_Time_Nanoseconds"

#### REGISTER-OR-FIELD-MAC-PPS0-TARGET-TIME-SECONDS
- `name`: "MAC_PPS0_Target_Time_Seconds"
- `type`: "register_or_field"
- `primary_page`: 36
- `physical_pages`: [36, 37]
- `anchor`: "MAC_PPS0_Target_Time_Seconds"

#### REGISTER-OR-FIELD-MAC-PPS-CONTROL
- `name`: "MAC_PPS_Control"
- `type`: "register_or_field"
- `primary_page`: 36
- `physical_pages`: [36]
- `anchor`: "MAC_PPS_Control"

#### REGISTER-OR-FIELD-MAC-SYSTEM-TIME-NANOSECONDS
- `name`: "MAC_System_Time_Nanoseconds"
- `type`: "register_or_field"
- `primary_page`: 36
- `physical_pages`: [36, 37]
- `anchor`: "MAC_System_Time_Nanoseconds"

#### REGISTER-OR-FIELD-MAC-TIMESTAMP-ADDEND
- `name`: "MAC_Timestamp_Addend"
- `type`: "register_or_field"
- `primary_page`: 36
- `physical_pages`: [36]
- `anchor`: "MAC_Timestamp_Addend"

#### REGISTER-OR-FIELD-MAC-INDIR-ACCESS-CTRL
- `name`: "MAC_Indir_Access_Ctrl"
- `type`: "register_or_field"
- `primary_page`: 37
- `physical_pages`: [37]
- `anchor`: "MAC_Indir_Access_Ctrl"

#### REGISTER-OR-FIELD-MAC-INDIR-ACCESS-DATA
- `name`: "MAC_Indir_Access_Data"
- `type`: "register_or_field"
- `primary_page`: 37
- `physical_pages`: [37]
- `anchor`: "MAC_Indir_Access_Data"

#### REGISTER-OR-FIELD-MAC-PPS0-INTERVAL
- `name`: "MAC_PPS0_Interval"
- `type`: "register_or_field"
- `primary_page`: 37
- `physical_pages`: [37]
- `anchor`: "MAC_PPS0_Interval"

#### REGISTER-OR-FIELD-MAC-PPS0-WIDTH
- `name`: "MAC_PPS0_Width"
- `type`: "register_or_field"
- `primary_page`: 37
- `physical_pages`: [37]
- `anchor`: "MAC_PPS0_Width"

#### REGISTER-OR-FIELD-MAC-TMRQ-REGS-I
- `name`: "MAC_TMRQ_Regs(#i"
- `type`: "register_or_field"
- `primary_page`: 37
- `physical_pages`: [37]
- `anchor`: "MAC_TMRQ_Regs(#i"

#### REGISTER-OR-FIELD-MAC-TMRQ-REGS0
- `name`: "MAC_TMRQ_Regs0"
- `type`: "register_or_field"
- `primary_page`: 37
- `physical_pages`: [37]
- `anchor`: "MAC_TMRQ_Regs0"

#### TERM-ETHERNET
- `name`: "Ethernet"
- `type`: "term"
- `primary_page`: 37
- `physical_pages`: [37, 38, 44, 47, 49, 50]
- `anchor`: "Ethernet"

#### TERM-FRAME-PREEMPTION
- `name`: "Frame Preemption"
- `type`: "term"
- `primary_page`: 38
- `physical_pages`: [38, 41, 42, 43]
- `anchor`: "Frame Preemption"

#### TERM-MMC-COUNTERS
- `name`: "MMC counters"
- `type`: "term"
- `primary_page`: 41
- `physical_pages`: [41, 42]
- `anchor`: "MMC counters"

#### MODULE-OR-ABBREVIATION-SRSP
- `name`: "SRSP"
- `type`: "module_or_abbreviation"
- `primary_page`: 42
- `physical_pages`: [42, 43]
- `anchor`: "SRSP"

#### MODULE-OR-ABBREVIATION-SVER
- `name`: "SVER"
- `type`: "module_or_abbreviation"
- `primary_page`: 42
- `physical_pages`: [42, 43]
- `anchor`: "SVER"

#### MODULE-OR-ABBREVIATION-TRSP
- `name`: "TRSP"
- `type`: "module_or_abbreviation"
- `primary_page`: 42
- `physical_pages`: [42]
- `anchor`: "TRSP"

#### MODULE-OR-ABBREVIATION-TVER
- `name`: "TVER"
- `type`: "module_or_abbreviation"
- `primary_page`: 42
- `physical_pages`: [42, 43]
- `anchor`: "TVER"

#### REGISTER-OR-FIELD-MAC-FPE-CTRL-STS
- `name`: "MAC_FPE_CTRL_STS"
- `type`: "register_or_field"
- `primary_page`: 42
- `physical_pages`: [42, 43]
- `anchor`: "MAC_FPE_CTRL_STS"

#### TERM-TX-OCTET-COUNT-GOOD-BAD
- `name`: "Tx_Octet_Count_Good_Bad"
- `type`: "term"
- `primary_page`: 42
- `physical_pages`: [42]
- `anchor`: "Tx_Octet_Count_Good_Bad"

#### MODULE-OR-ABBREVIATION-ELIRS
- `name`: "ELIRS"
- `type`: "module_or_abbreviation"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `anchor`: "ELIRS"

#### MODULE-OR-ABBREVIATION-FRP
- `name`: "FRP"
- `type`: "module_or_abbreviation"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `anchor`: "FRP"

#### MODULE-OR-ABBREVIATION-FRPE
- `name`: "FRPE"
- `type`: "module_or_abbreviation"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `anchor`: "FRPE"

#### MODULE-OR-ABBREVIATION-MADRM
- `name`: "MADRM"
- `type`: "module_or_abbreviation"
- `primary_page`: 43
- `physical_pages`: [43]
- `anchor`: "MADRM"

#### MODULE-OR-ABBREVIATION-RDES2
- `name`: "RDES2"
- `type`: "module_or_abbreviation"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `anchor`: "RDES2"

#### MODULE-OR-ABBREVIATION-RXPS
- `name`: "RXPS"
- `type`: "module_or_abbreviation"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `anchor`: "RXPS"

#### REGISTER-OR-FIELD-MTL-RXP-CONTROL-STATUS
- `name`: "MTL_RXP_Control_Status"
- `type`: "register_or_field"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `anchor`: "MTL_RXP_Control_Status"

#### TERM-FLEXIBLE-RECEIVE-PARSER
- `name`: "Flexible Receive Parser"
- `type`: "term"
- `primary_page`: 43
- `physical_pages`: [43]
- `anchor`: "Flexible Receive Parser"

#### REGISTER-OR-FIELD-MAC-ADDRESS0-HIGH
- `name`: "MAC_Address0_High"
- `type`: "register_or_field"
- `primary_page`: 44
- `physical_pages`: [44, 45]
- `anchor`: "MAC_Address0_High"

#### REGISTER-OR-FIELD-MAC-ADDRESS0-LOW
- `name`: "MAC_Address0_Low"
- `type`: "register_or_field"
- `primary_page`: 44
- `physical_pages`: [44, 45]
- `anchor`: "MAC_Address0_Low"

#### TERM-AC-ADDRESS0-HIGH
- `name`: "AC_Address0_High"
- `type`: "term"
- `primary_page`: 44
- `physical_pages`: [44, 45]
- `anchor`: "AC_Address0_High"

#### REGISTER-OR-FIELD-DMA-CH-I-RXDESC-TAIL-POINTER
- `name`: "DMA_CH(#i)_RxDesc_Tail_Pointer"
- `type`: "register_or_field"
- `primary_page`: 45
- `physical_pages`: [45]
- `anchor`: "DMA_CH(#i)_RxDesc_Tail_Pointer"

#### REGISTER-OR-FIELD-DMA-CH-I-TXDESC-TAIL-POINTER
- `name`: "DMA_CH(#i)_TxDesc_Tail_Pointer"
- `type`: "register_or_field"
- `primary_page`: 45
- `physical_pages`: [45]
- `anchor`: "DMA_CH(#i)_TxDesc_Tail_Pointer"

#### REGISTER-OR-FIELD-DMA-CH0-CURRENT-APP-TXDESC
- `name`: "DMA_CH0_Current_App_TxDesc"
- `type`: "register_or_field"
- `primary_page`: 46
- `physical_pages`: [46]
- `anchor`: "DMA_CH0_Current_App_TxDesc"

#### REGISTER-OR-FIELD-DMA-CH0-TXDESC-RING-LENGTH
- `name`: "DMA_CH0_TxDesc_Ring_Length"
- `type`: "register_or_field"
- `primary_page`: 46
- `physical_pages`: [46]
- `anchor`: "DMA_CH0_TxDesc_Ring_Length"

#### REGISTER-OR-FIELD-DMA-CH0-TXDESC-TAIL-POINTER
- `name`: "DMA_CH0_TxDesc_Tail_Pointer"
- `type`: "register_or_field"
- `primary_page`: 46
- `physical_pages`: [46]
- `anchor`: "DMA_CH0_TxDesc_Tail_Pointer"

#### MODULE-OR-ABBREVIATION-TSN
- `name`: "TSN"
- `type`: "module_or_abbreviation"
- `primary_page`: 48
- `physical_pages`: [48]
- `anchor`: "TSN"

#### MODULE-OR-ABBREVIATION-BTR
- `name`: "BTR"
- `type`: "module_or_abbreviation"
- `primary_page`: 49
- `physical_pages`: [49, 50, 52, 53]
- `anchor`: "BTR"

#### MODULE-OR-ABBREVIATION-DWC-EQOS-AV-EST
- `name`: "DWC_EQOS_AV_EST"
- `type`: "module_or_abbreviation"
- `primary_page`: 49
- `physical_pages`: [49]
- `anchor`: "DWC_EQOS_AV_EST"

#### MODULE-OR-ABBREVIATION-LLR
- `name`: "LLR"
- `type`: "module_or_abbreviation"
- `primary_page`: 49
- `physical_pages`: [49, 50]
- `anchor`: "LLR"

#### TERM-BASE-TIME-REGISTER
- `name`: "Base Time Register"
- `type`: "term"
- `primary_page`: 49
- `physical_pages`: [49, 52]
- `anchor`: "Base Time Register"

#### TERM-CYCLE-TIME-REGISTER
- `name`: "Cycle Time Register"
- `type`: "term"
- `primary_page`: 49
- `physical_pages`: [49, 52]
- `anchor`: "Cycle Time Register"

#### MODULE-OR-ABBREVIATION-EQOS-DMA-AHB-AXI3-AXI4
- `name`: "EQOS-DMA/AHB/AXI3/AXI4"
- `type`: "module_or_abbreviation"
- `primary_page`: 51
- `physical_pages`: [51]
- `anchor`: "EQOS-DMA/AHB/AXI3/AXI4"

#### MODULE-OR-ABBREVIATION-RDES1
- `name`: "RDES1"
- `type`: "module_or_abbreviation"
- `primary_page`: 51
- `physical_pages`: [51, 52]
- `anchor`: "RDES1"

#### MODULE-OR-ABBREVIATION-RDES3
- `name`: "RDES3"
- `type`: "module_or_abbreviation"
- `primary_page`: 51
- `physical_pages`: [51, 52]
- `anchor`: "RDES3"

#### MODULE-OR-ABBREVIATION-RPF
- `name`: "RPF"
- `type`: "module_or_abbreviation"
- `primary_page`: 51
- `physical_pages`: [51]
- `anchor`: "RPF"

#### TERM-DMA-MTL-INTERFACE
- `name`: "DMA-MTL interface"
- `type`: "term"
- `primary_page`: 51
- `physical_pages`: [51]
- `anchor`: "DMA-MTL interface"

#### ERRATUM-ID-ERR-SOC-001
- `name`: "ERR_SOC_001"
- `type`: "erratum_id"
- `primary_page`: 54
- `physical_pages`: [54]
- `anchor`: "ERR_SOC_001"

### 8.4 Absence Markers

#### ABSENCE-NO-FORMAL-API-DECLARATIONS
- `name`: "NO_FORMAL_API_DECLARATIONS_DETECTED"
- `type`: "quality_marker"
- `physical_pages`: [1-54]
- `brief`: "No C/API function declaration section was detected in this errata sheet; the document is errata-oriented rather than an API reference."

#### ABSENCE-NO-FORMAL-SWS-REQ-IDS
- `name`: "NO_FORMAL_REQUIREMENT_IDS_DETECTED"
- `type`: "quality_marker"
- `physical_pages`: [1-54]
- `brief`: "No SWS_*, REQ_*, or formal requirement identifiers were detected. ERR_* and Synopsys IDs are erratum identifiers, not source requirement IDs."

## 9. Search Aliases

### ALIAS-FC7300F8MDQ
- `canonical`: "FC7300F8MDQ"
- `aliases`: ["FC7300F8MDQ MCU", "FC7300", "FC7300F8MDQ microcontroller", "Flagchip FC7300F8MDQ", "旗芯 FC7300F8MDQ"]
- `related_ids`: ["TERM-FC7300F8MDQ"]

### ALIAS-ERRATA-SHEET
- `canonical`: "Errata Sheet"
- `aliases`: ["errata", "勘误表", "已知问题", "device limitations", "silicon errata", "device errata"]
- `related_ids`: ["SEC-CH02"]

### ALIAS-WORKAROUND-AVAILABLE
- `canonical`: "Workaround Available"
- `aliases`: ["Status A", "A status", "规避方案可用", "workaround exists"]
- `related_ids`: ["TERM-WORKAROUND-AVAILABLE"]

### ALIAS-ADC-TIMESTAMP-ERRATA
- `canonical`: "ADC timestamp errata"
- `aliases`: ["ADC 时间戳", "SCM_TSTMP_RES", "trigger timestamp", "电平触发时间戳", "ADC/PTIMER/SDADC timestamp"]
- `related_ids`: ["ERRATA-ERR-ADC-3612113"]

### ALIAS-SIRCCSR-LPWKE
- `canonical`: "SIRCCSR LPWKE"
- `aliases`: ["SCG_SIRCCSR.LPWKE", "SIRCCSR[LPWKE]", "LPWKE bit", "SIRC wakeup enable", "SIRC 触发 ADC"]
- `related_ids`: ["ERRATA-ERR-ADC-3612112"]

### ALIAS-DEBUG-JTAG-SWD-PTA10
- `canonical`: "Debug JTAG/SWD PTA10"
- `aliases`: ["JTAG to SWD", "PTA10 ALT7", "SWD 切换", "JTAG 切 SWD", "PTA10 conflict"]
- `related_ids`: ["ERRATA-ERR-DEBUG-3514113"]

### ALIAS-DWT-CYCCNT-LOCKSTEP-RESET
- `canonical`: "DWT_CYCCNT lockstep reset"
- `aliases`: ["DWT CYCCNT", "debug lockstep error", "调试模式锁步错误", "DWT reset issue"]
- `related_ids`: ["ERRATA-ERR-DEBUG-3514112"]

### ALIAS-DMAMUX-SLOT-CONFLICT
- `canonical`: "DMAMUX slot conflict"
- `aliases`: ["DMAMUX slots", "DMA0 DMA1 same module", "DMA mux conflict", "DMA 多路复用冲突"]
- `related_ids`: ["ERRATA-ERR-DMA-3613112", "TBL-0011-0013-DMAMUX-SLOT-CONFLICT"]

### ALIAS-DMA-MONITOR
- `canonical`: "DMA Monitor"
- `aliases`: ["DMA_MON_ERR_STATUS", "MON_CHK_EN", "DMA CFG read", "DMA 监控错误标志"]
- `related_ids`: ["ERRATA-ERR-DMA-3614121"]

### ALIAS-ENHANCED-RX-FIFO
- `canonical`: "Enhanced Rx FIFO"
- `aliases`: ["FLEXCAN Enhanced FIFO", "CAN Enhanced Rx FIFO", "增强型 Rx FIFO", "message buffer locked", "MB locked"]
- `related_ids`: ["ERRATA-ERR-FLEXCAN-3519117", "ERRATA-ERR-FLEXCAN-3519113"]

### ALIAS-QDT-TOOTH-PERIOD
- `canonical`: "QDT tooth_period"
- `aliases`: ["LECNT POSDCNT", "Phase_A Phase_B", "tooth period", "转速计算", "PIT workaround", "Input Capture workaround"]
- `related_ids`: ["ERRATA-ERR-QDT-3612114"]

### ALIAS-RESET-B-AON-CLK-FILTER
- `canonical`: "RESET_B AON_CLK filter"
- `aliases`: ["RGM RESET_B", "AON clock filter", "reset loop", "复位滤波", "RC filter reset"]
- `related_ids`: ["ERRATA-ERR-RGM-3522113"]

### ALIAS-SCG-PLL-ERRATA
- `canonical`: "SCG PLL errata"
- `aliases`: ["PSTDIV1", "PREDIV", "PLL lock failure", "PLL0_CLK1", "PLL1_CLK1", "SCG PLL 锁定失败"]
- `related_ids`: ["ERRATA-ERR-SCG-3712113", "ERRATA-ERR-SCG-3715113"]

### ALIAS-SSI-AK-PROTOCOL-GLITCH
- `canonical`: "SSI AK protocol glitch"
- `aliases`: ["SSI sensor glitch", "AK protocol", "inm inh glitches", "SSI 滤波", "input functional clock below 8MHz"]
- `related_ids`: ["ERRATA-ERR-SSI-3612116"]

### ALIAS-ENET-SYNOPSYS-ERRATA
- `canonical`: "ENET Synopsys errata"
- `aliases`: ["Ethernet errata", "DWC_ether_qos", "EQOS errata", "Synopsys ID", "ENET 已知问题"]
- `related_ids`: ["SEC-02-18"]

### ALIAS-PTP-TIMESTAMP
- `canonical`: "PTP timestamp"
- `aliases`: ["IEEE 1588", "one-step timestamp", "PTP sync", "MAC_System_Time", "时间戳"]
- `related_ids`: ["EXT-ENET-SYNOPSYS-3900281", "EXT-ENET-SYNOPSYS-3876182", "EXT-ENET-SYNOPSYS-5938448"]

### ALIAS-EST-GCL-SCHEDULING
- `canonical`: "EST GCL scheduling"
- `aliases`: ["Enhancements to Scheduled Traffic", "Gate Control List", "GCL", "BTR", "CTR", "TSN scheduling", "EST 调度"]
- `related_ids`: ["EXT-ENET-SYNOPSYS-3368939", "EXT-ENET-SYNOPSYS-3290261", "EXT-ENET-SYNOPSYS-5584644", "EXT-ENET-SYNOPSYS-5575379", "EXT-ENET-SYNOPSYS-3542857"]

### ALIAS-PREVIOUS-CURRENT-ERRATA-ID-MAPPING
- `canonical`: "Previous vs. Current Errata ID Mapping"
- `aliases`: ["Errata ID Mapping", "旧ID到新ID", "Previous Errata ID", "Current Errata ID", "Revision 0.4 ID update"]
- `related_ids`: ["TBL-0005-0006-ERRATA-ID-MAPPING"]
- `mapping`:
  - `ERR_ADC_001` -> `ERR_ADC_3612112`
  - `ERR_ADC_002` -> `ERR_ADC_3612113`
  - `ERR_Debug_001` -> `ERR_Debug_3514113`
  - `ERR_Debug_002` -> `ERR_Debug_3514112`
  - `ERR_DMA_001` -> `ERR_DMA_3613112`
  - `ERR_DMA_002` -> `ERR_DMA_3614121`
  - `ERR_FLEXCAN_001` -> `ERR_FLEXCAN_3519117`
  - `ERR_FLEXCAN_002` -> `ERR_FLEXCAN_3519113`
  - `ERR_LU_001` -> `ERR_LU_3617113`
  - `ERR_HSADC_001` -> `ERR_HSADC_3712112`
  - `ERR_QDT_001` -> `ERR_QDT_3612114`
  - `ERR_RGM_001` -> `ERR_RGM_3522113`
  - `ERR_RGM_002` -> `ERR_RGM_3614122`
  - `ERR_RGM_003` -> `ERR_RGM_3615114`
  - `ERR_SCG_001` -> `ERR_SCG_3712113`
  - `ERR_SSI_001` -> `ERR_SSI_3612116`

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: "Close keyword lookup gaps between FC7300F8MDQ_Errata_Sheet_V0.5.pdf extractable text and this Manifest without copying full PDF prose."
- `source`: `local pypdf text extraction from FC7300F8MDQ_Errata_Sheet_V0.5.pdf`
- `source_pdf_sha256`: `5405c2212dc7098f5bf812644b4eb16b4c12f055a19cbe5ed94b029854d61baa`
- `source_pdf_size_bytes`: `3310663`
- `pdf_page_count`: `54`
- `generated_at`: `2026-06-20T11:22:51Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals, dotted section/version tokens, errata IDs, register/field names and numeric fields with length >= 3.`
- `normalization`: `Known Private Use Area digit glyphs U+F6B1..U+F6BA, ligatures and soft hyphen variants are normalized before token comparison.`
- `scope`: `Text-layer token supplement only; exact errata wording, EN/CN table panels, diagrams and workaround text still require source PDF verification.`
- `unique_missing_terms_added`: `653`
- `technical_missing_terms_added`: `116`
- `pages_with_added_terms`: `53`
- `supplemented_page_term_entries`: `1133`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact erratum descriptions, consequences, workarounds and diagrams in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "activated"
  - "behavior"
  - "being"
  - "Confidential"
  - "describes"
  - "fails"
  - "follows"
  - "indicating"
  - "pattern"
  - "peripherals"
  - "persists"
  - "Proprietary"
  - "real"
  - "series"
  - "Setting"
  - "seven-digit"
  - "situation"
  - "subsystems"
  - "transmitted/received"
  - "updates"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "across"
  - "approximately"
  - "been"
  - "completely"
  - "Confidential"
  - "cross-reference"
  - "Customers"
  - "documents"
  - "ENET-related"
  - "excerpted"
  - "experience"
  - "filtered"
  - "indicates"
  - "items"
  - "limited"
  - "locate"
  - "older"
  - "Potential"
  - "Proprietary"
  - "see"
  - "sensors"
  - "starting"
  - "Their"
  - "variants"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "According"
  - "addresses"
  - "automatically"
  - "behavior"
  - "being"
  - "completed"
  - "Confidential"
  - "detailed"
  - "disabled"
  - "enables"
  - "Furthermore"
  - "indicates"
  - "initial"
  - "operations"
  - "persists"
  - "Proprietary"
  - "sequential"
  - "setting"
  - "situation"
  - "theoretically"
  - "Therefore"
  - "upon"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "010b"
  - "adopted"
  - "allows"
  - "approximately"
  - "behavior"
  - "Confidential"
  - "de-assertion"
  - "discontinuous"
  - "duration"
  - "encounter"
  - "equal"
  - "generation"
  - "noted"
  - "nothing"
  - "original"
  - "Proprietary"
  - "sending"
  - "Since"
  - "single"
  - "stops"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "discontinuous"
  - "held"
  - "make"
  - "processed"
  - "Proprietary"
  - "some"
  - "suggested"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "conflicts"
  - "finished"
  - "happens"
  - "mismatch"
  - "Proprietary"
  - "root"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "AONTIMER"
  - "AONTIMER0"
  - "CH0-3"
  - "CH12-15"
  - "CH16-19"
  - "CH20-23"
  - "CH24"
  - "CH25"
  - "CH26"
  - "CH4-7"
  - "CH8-11"
  - "CMP"
  - "CMP0"
  - "Confidential"
  - "eFTU0"
  - "eFTU1"
  - "eFTU2"
  - "PORTB"
  - "PORTC"
  - "PORTD"
  - "PORTF"
  - "PORTG"
  - "PORTH"
  - "PORTI"
  - "Proprietary"
  - "PTIMER0"
  - "SRC1"
  - "SRC2"
  - "SRC4"
  - "SRC5"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "102"
  - "103"
  - "104"
  - "107"
  - "108"
  - "109"
  - "118"
  - "119"
  - "120"
  - "124"
  - "CH28"
  - "CH29"
  - "CH30"
  - "CH31"
  - "Channel"
  - "Channels"
  - "Confidential"
  - "eFTU1"
  - "eFTU2"
  - "Flash"
  - "FLEXCAN10"
  - "FLEXCAN11"
  - "FLEXCAN12"
  - "FLEXCAN13"
  - "FTU0"
  - "FTU3"
  - "FTU5"
  - "FTU6"
  - "FTU7"
  - "Odd"
  - "Proprietary"
  - "SENT0"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "125"
  - "allowed"
  - "Channel"
  - "Confidential"
  - "operations"
  - "Proprietary"
  - "read/write"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "channel"
  - "Confidential"
  - "later"
  - "Proprietary"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "currently"
  - "frames"
  - "initialization"
  - "matches"
  - "Proprietary"
  - "see"
  - "tick"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "199"
  - "Confidential"
  - "Examples"
  - "fixed"
  - "frames"
  - "indication"
  - "lost"
  - "minimum-length"
  - "new"
  - "Proprietary"
  - "RTR/RRS"
  - "stuff"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "activated"
  - "Another"
  - "Confidential"
  - "depending"
  - "fails"
  - "lost"
  - "Proprietary"
  - "Therefore"
  - "transmitted/received"
  - "unaware"
  - "unserviced"
  - "updates"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "bypassed"
  - "Confidential"
  - "consecutive"
  - "elapsed"
  - "exceeding"
  - "initiates"
  - "longer"
  - "mandatory"
  - "Proprietary"
  - "since"
  - "single"
  - "Specifically"
  - "their"
  - "unavoidably"
  - "untriggered"
  - "unused"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "1000"
  - "120"
  - "Calculate"
  - "channel"
  - "Confidential"
  - "configurable"
  - "CV0-CV1"
  - "CV1-CV0"
  - "lower"
  - "measurement"
  - "Proprietary"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "measurement"
  - "Proprietary"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "causes"
  - "Confidential"
  - "make"
  - "Proprietary"
  - "stuck"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "approximately"
  - "Confidential"
  - "CPUs"
  - "default"
  - "experience"
  - "masters"
  - "memory"
  - "peripherals"
  - "Proprietary"
  - "suggested"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "abnormal"
  - "circuit"
  - "Confidential"
  - "divide-by-1"
  - "metastability"
  - "metastable"
  - "pre-divided"
  - "Proprietary"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "behavior"
  - "comparator"
  - "completely"
  - "Confidential"
  - "conform"
  - "filtered"
  - "influence"
  - "limited"
  - "Proprietary"
  - "relatively"
  - "specification"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "causes"
  - "Confidential"
  - "documents"
  - "ENET-related"
  - "excerpted"
  - "fails"
  - "forwarded"
  - "Further"
  - "h0001"
  - "h0002"
  - "information"
  - "Machine"
  - "perfect"
  - "Proprietary"
  - "Reproducing"
  - "send"
  - "static"
  - "Tagged"
  - "Virtual"
  - "Virtualization"
  - "visit"
  - "website"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "1970"
  - "b00"
  - "closer"
  - "Confidential"
  - "domain"
  - "features"
  - "follows"
  - "hFFFF_FFFF"
  - "indicates"
  - "Initialize"
  - "internally"
  - "January"
  - "likely"
  - "master"
  - "maximum"
  - "operate"
  - "ordinary"
  - "periodic"
  - "polling"
  - "Proprietary"
  - "real"
  - "Reproducing"
  - "rolls"
  - "slave"
  - "systems"
  - "UDP/IP"
  - "years"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "b01"
  - "Confidential"
  - "follows"
  - "generation"
  - "identifies"
  - "inaccuracies"
  - "maintained"
  - "mechanisms"
  - "node"
  - "operates"
  - "original"
  - "performs"
  - "Proprietary"
  - "receives"
  - "Reproducing"
  - "send"
  - "settings"
  - "slave"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "automatic"
  - "Automotive"
  - "b01"
  - "become"
  - "becomes"
  - "categorized"
  - "Confidential"
  - "disabled"
  - "domain"
  - "driven"
  - "driving"
  - "duration"
  - "enables"
  - "enters"
  - "exceeds"
  - "excluded"
  - "Features"
  - "fetched"
  - "FSMs"
  - "generates"
  - "indicates"
  - "longer"
  - "monitoring"
  - "pattern"
  - "Proprietary"
  - "respectively"
  - "resuming"
  - "scenario"
  - "send"
  - "Therefore"
  - "transition"
  - "transitions"
  - "transmitting"
  - "until"
  - "updates"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "automated"
  - "Confidential"
  - "disabled"
  - "domain"
  - "duration"
  - "EQOS-AHB"
  - "EQOS-AXI"
  - "EQOS-AXI4"
  - "every"
  - "features"
  - "flushed"
  - "followed"
  - "FSMs"
  - "generates"
  - "header-payload"
  - "indicating"
  - "information"
  - "occurred"
  - "performs"
  - "pre-empted"
  - "Proprietary"
  - "pushes"
  - "reached"
  - "Reproducing"
  - "sbd_sfty_ue_intr_o"
  - "send"
  - "Single"
  - "synchronizers"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "accepted"
  - "assembly"
  - "cascading"
  - "Channel"
  - "Confidential"
  - "connected"
  - "easily"
  - "effect"
  - "empty"
  - "fetching"
  - "header-payload"
  - "heavy"
  - "latter"
  - "lesser"
  - "observes"
  - "ongoing"
  - "overflows"
  - "performs"
  - "places"
  - "pre-empted"
  - "Proprietary"
  - "reproduced"
  - "Reproducing"
  - "retransmission"
  - "simulations"
  - "stop"
  - "synchronization"
  - "tasks"
  - "Terminates"
  - "Therefore"
  - "transitioning"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Accept"
  - "accesses"
  - "burst"
  - "Bus/Slave/Interconnect"
  - "Cache"
  - "Channel"
  - "coincide"
  - "come"
  - "Confidential"
  - "corrective"
  - "defects"
  - "encountered"
  - "Flush"
  - "generation"
  - "gracefully"
  - "handle"
  - "indicated"
  - "indicates"
  - "indication"
  - "interfaced"
  - "lead"
  - "memory"
  - "misses"
  - "neither"
  - "non-last"
  - "Operating"
  - "Proprietary"
  - "pushed"
  - "reported"
  - "Reproducing"
  - "requires"
  - "restart/reconfigure"
  - "restarting"
  - "serious"
  - "single"
  - "steps"
  - "take"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "1518"
  - "behavior"
  - "burst"
  - "Channel"
  - "Confidential"
  - "corrupted"
  - "Distribute"
  - "error-free"
  - "Operate"
  - "Proprietary"
  - "send"
  - "write-back"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "128"
  - "1Qbu"
  - "1Qbv"
  - "3br"
  - "_Quantum_Weight"
  - "adhere"
  - "being"
  - "Confidential"
  - "controlled"
  - "dedicated"
  - "depends"
  - "describes"
  - "EQOS-CORE"
  - "highest"
  - "hold"
  - "interference"
  - "limited"
  - "maximum"
  - "negative"
  - "ongoing"
  - "other"
  - "participating"
  - "pre-empted"
  - "Proprietary"
  - "providing"
  - "Reproducing"
  - "Robin"
  - "Scheduler"
  - "schedules"
  - "send"
  - "serviced"
  - "Shaper"
  - "though"
  - "until"
  - "utilization"
  - "Weighted"
  - "weights"
  - "window"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "_Quantum_Weight"
  - "availability"
  - "Confidential"
  - "considered"
  - "duration"
  - "every"
  - "fixed"
  - "highest"
  - "independent"
  - "monitoring"
  - "new"
  - "other"
  - "Proprietary"
  - "reported"
  - "Reproducing"
  - "restarts"
  - "scheduler"
  - "schedules"
  - "selects"
  - "send"
  - "serviced"
  - "started"
  - "weight"
  - "weights"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "128"
  - "accuracy"
  - "Confidential"
  - "effective"
  - "elapsed"
  - "improve"
  - "lesser"
  - "monitoring"
  - "new"
  - "options"
  - "Proprietary"
  - "Pulse-Per-Second"
  - "reduce"
  - "reports"
  - "Reproducing"
  - "requires"
  - "scheduler"
  - "send"
  - "slot-time"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "50MHz"
  - "accuracy"
  - "being"
  - "clk_ptp_ref_i"
  - "Confidential"
  - "Connect"
  - "inaccuracies"
  - "inserted"
  - "insignificant"
  - "lesser"
  - "make"
  - "non-zero"
  - "operating"
  - "programs"
  - "Proprietary"
  - "Reproducing"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "100ns"
  - "80ns"
  - "Busy"
  - "Channel"
  - "clk_ptp_ref_i"
  - "Confidential"
  - "duration"
  - "enables"
  - "equal"
  - "h0000_0001"
  - "h0001_0700"
  - "h0001_0701"
  - "half"
  - "half-word"
  - "indicates"
  - "Proprietary"
  - "Queue/DMA"
  - "Reproducing"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "0x2A"
  - "0x4C"
  - "0x52"
  - "0x55"
  - "0x61"
  - "0x7F"
  - "0x9E"
  - "0xB3"
  - "0xD5"
  - "0xE6"
  - "802.3"
  - "absent"
  - "checks"
  - "Confidential"
  - "corrupted"
  - "discarded"
  - "few"
  - "h0700"
  - "might"
  - "MII/GMII"
  - "modes"
  - "non-PREAMBLE"
  - "of-packet"
  - "other"
  - "precedes"
  - "Proprietary"
  - "reasons"
  - "removes"
  - "Repeater"
  - "Reproducing"
  - "retransmission"
  - "Retransmissions"
  - "retransmit"
  - "send"
  - "standard"
  - "successfully"
  - "transient"
  - "transit"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "ati_err_i"
  - "Automotive"
  - "behavior"
  - "belonging"
  - "checker"
  - "Confidential"
  - "context"
  - "corner-case"
  - "corrupted"
  - "corruption"
  - "DMAs"
  - "Features"
  - "forwarded"
  - "indication"
  - "informed"
  - "initiated"
  - "injected"
  - "injection"
  - "injects"
  - "inserted"
  - "interfaces"
  - "interleaving"
  - "interprets"
  - "meanwhile"
  - "memories"
  - "mti_err_i"
  - "neither"
  - "operate"
  - "operations"
  - "other"
  - "processing"
  - "Proprietary"
  - "Protection"
  - "requires"
  - "scenario"
  - "segments"
  - "soon"
  - "terminated"
  - "though"
  - "towards"
  - "updates"
  - "yet"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "alarm"
  - "behavior"
  - "Confidential"
  - "corrupted"
  - "Corruption"
  - "CRC/Pad"
  - "duration"
  - "excessive"
  - "expiry"
  - "false"
  - "features"
  - "few"
  - "fixed"
  - "forwards"
  - "Inject"
  - "injected"
  - "insertion"
  - "might"
  - "operations"
  - "options"
  - "overhead"
  - "performs"
  - "Proprietary"
  - "raising"
  - "Reproducing"
  - "retransmission"
  - "scheduler"
  - "schedules"
  - "seen"
  - "send"
  - "Single-Port"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "almost"
  - "being"
  - "computed"
  - "Confidential"
  - "considering"
  - "depends"
  - "domain"
  - "dropping"
  - "encounter"
  - "exactly"
  - "excessive"
  - "expiry"
  - "fit"
  - "fits"
  - "fixed"
  - "inaccuracies"
  - "maximum"
  - "minor"
  - "operates"
  - "overhead"
  - "Proprietary"
  - "Reproducing"
  - "scheduler"
  - "send"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "16383"
  - "16384B"
  - "accumulates"
  - "being"
  - "Confidential"
  - "duration"
  - "exceed"
  - "exceeds"
  - "indicates"
  - "Jabber"
  - "preempts"
  - "Proprietary"
  - "Reproducing"
  - "respectively"
  - "saturating"
  - "send"
  - "setting"
  - "short"
  - "updates"
  - "within"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "all-zeros"
  - "being"
  - "bypassed"
  - "Confidential"
  - "enables"
  - "equal"
  - "exchange"
  - "Hash"
  - "matched"
  - "processing"
  - "Proprietary"
  - "Reproducing"
  - "some"
  - "though"
  - "yet"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "0x11"
  - "0x112233445566"
  - "0x665544332211"
  - "among"
  - "bigendian"
  - "bypassed"
  - "compared"
  - "Confidential"
  - "consecutive"
  - "corrected"
  - "Domain"
  - "domains"
  - "double"
  - "equal"
  - "follows"
  - "guidelines"
  - "holds"
  - "little-endian"
  - "Management"
  - "non-zero"
  - "Otherwise"
  - "passes"
  - "Power"
  - "processing"
  - "proper"
  - "Proprietary"
  - "providing"
  - "Quality-of-Service"
  - "Reproducing"
  - "send"
  - "Setup"
  - "slowest"
  - "station"
  - "synchronization"
  - "Tx/Rx"
  - "updates"
  - "upper"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "_Current_App_RxDesc"
  - "_RxDesc_List_Address"
  - "_TxDesc_List_Address"
  - "ahead"
  - "beyond"
  - "Confidential"
  - "corrective"
  - "Domain"
  - "dropping"
  - "ensures"
  - "enters"
  - "equal"
  - "exits"
  - "filtering"
  - "finds"
  - "further"
  - "generates"
  - "indicate"
  - "leads"
  - "located"
  - "made"
  - "Management"
  - "moved"
  - "non-EQOS-CORE"
  - "non-EQOS-MTL"
  - "Otherwise"
  - "pointed"
  - "position"
  - "Power"
  - "processing"
  - "prompts"
  - "Proprietary"
  - "Recommendation"
  - "restarts"
  - "Setup"
  - "stop"
  - "suspend"
  - "take"
  - "Tx/Rx"
  - "updates"
  - "yet"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "accumulates"
  - "although"
  - "Audio"
  - "behavior"
  - "Bridging"
  - "Confidential"
  - "decrements"
  - "depends"
  - "Equally"
  - "exited"
  - "fetched"
  - "fifth"
  - "four"
  - "fourth"
  - "had"
  - "increments"
  - "indicates"
  - "indicating"
  - "negative"
  - "opportunity"
  - "owned"
  - "percentage"
  - "positive"
  - "procedure"
  - "Proprietary"
  - "Reproducing"
  - "send"
  - "Shaper"
  - "suspend"
  - "total"
  - "updates"
  - "Video"
  - "zero"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "128"
  - "2.65"
  - "32.65"
  - "assuming"
  - "Audio/Video"
  - "average"
  - "closer"
  - "Confidential"
  - "Consequently"
  - "consumed"
  - "Continuously"
  - "CRC/FCS"
  - "decrements"
  - "depends"
  - "desired"
  - "determine"
  - "effective"
  - "Effectively"
  - "equal"
  - "equation"
  - "estimate"
  - "exceeds"
  - "faster"
  - "Fractional"
  - "guidelines"
  - "increments"
  - "lesser"
  - "measured"
  - "nominal"
  - "overheads"
  - "parameters"
  - "percentage"
  - "Proprietary"
  - "Quality-of-Service"
  - "receives"
  - "repeats"
  - "Reproducing"
  - "reservation"
  - "send"
  - "standard"
  - "stream"
  - "Total"
  - "window"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "accepts"
  - "although"
  - "approximately"
  - "approximatively"
  - "clocks"
  - "completely"
  - "Confidential"
  - "converted"
  - "crossing"
  - "defers"
  - "determined"
  - "domain"
  - "eligible"
  - "enables"
  - "equal"
  - "every"
  - "forwarded"
  - "forwarding"
  - "increased"
  - "incremented"
  - "increments"
  - "indication"
  - "lower"
  - "maintains"
  - "Networking"
  - "one-Gbps"
  - "operating"
  - "overhead"
  - "overheads"
  - "priority"
  - "Proprietary"
  - "reached"
  - "reaches"
  - "receives"
  - "reflects"
  - "Scenario"
  - "scheduler"
  - "Sensitive"
  - "slower"
  - "slowest"
  - "Therefore"
  - "towards"
  - "turn"
  - "two-port"
  - "until"

### TEXTSUP-PAGE-0049
- `physical_page`: `49`
- `additional_text_terms`:
  - "16384"
  - "additionally"
  - "alternate"
  - "and/or"
  - "Confidential"
  - "continuously"
  - "eligible"
  - "ends"
  - "exactly"
  - "exceeds"
  - "fit"
  - "five"
  - "four"
  - "individual"
  - "information"
  - "nine"
  - "one-Gbps"
  - "opens"
  - "overhead"
  - "overheads"
  - "priority"
  - "profile"
  - "programs"
  - "Proprietary"
  - "Quality-of-Service"
  - "Reproducing"
  - "reprogramming"
  - "Scenario"
  - "see"
  - "send"
  - "total"
  - "TxQs"
  - "well"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "130894"
  - "131072"
  - "131074"
  - "16384"
  - "180"
  - "20.27"
  - "20.27.1"
  - "393222"
  - "524296"
  - "Allows"
  - "cascades"
  - "causes"
  - "Confidential"
  - "Continuously"
  - "effect"
  - "even-numbered"
  - "fit"
  - "Gbps"
  - "Guidelines"
  - "individual"
  - "information"
  - "Linked"
  - "nine"
  - "other"
  - "overheads"
  - "Proprietary"
  - "Quality-of-Service"
  - "reached"
  - "Reproducing"
  - "see"
  - "send"
  - "sizes"
  - "their"
  - "total"
  - "TxQs"
  - "wants"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "_Rx_Control"
  - "accepted"
  - "along"
  - "being"
  - "burst"
  - "called"
  - "capturing"
  - "Channels"
  - "Confidential"
  - "context"
  - "enables"
  - "enters"
  - "features"
  - "flush"
  - "flushed"
  - "forwarded"
  - "indicating"
  - "launched"
  - "limited"
  - "made"
  - "neither"
  - "other"
  - "parked"
  - "pointed"
  - "preventing"
  - "Proprietary"
  - "Reproducing"
  - "stopped"
  - "suspend"
  - "suspended"
  - "Therefore"
  - "unavailability"
  - "until"
  - "updates"

### TEXTSUP-PAGE-0052
- `physical_page`: `52`
- `additional_text_terms`:
  - "40a"
  - "capturing"
  - "completely"
  - "Confidential"
  - "eight"
  - "equal"
  - "executing"
  - "expressed"
  - "followed"
  - "follows"
  - "four"
  - "Gate-Control"
  - "guidelines"
  - "Initialize"
  - "integer"
  - "lesser"
  - "longer"
  - "memory"
  - "Proprietary"
  - "Quality-of-Service"
  - "respectively"
  - "scheduler"
  - "send"
  - "seven"
  - "Similarly"
  - "situations"
  - "skips"
  - "Statically"
  - "takes"
  - "twice"
  - "updates"

### TEXTSUP-PAGE-0053
- `physical_page`: `53`
- `additional_text_terms`:
  - "Confidential"
  - "equal"
  - "expressed"
  - "Proprietary"

### TEXTSUP-PAGE-0054
- `physical_page`: `54`
- `additional_text_terms`:
  - "0.1.1"
  - "0.1.2"
  - "0.1.3"
  - "0.2.1"
  - "0.2.2"
  - "0.3.1"
  - "2025"
  - "3340878"
  - "3630627"
  - "across"
  - "alphabetical"
  - "Confidential"
  - "Editorial"
  - "Fixed"
  - "misplacement"
  - "new"
  - "omission"
  - "order"
  - "Preliminary"
  - "Proprietary"
  - "Removed"
  - "See"
  - "Sorted"
  - "variants"

### TEXTSUP-DELTA-SUMMARY
- `purpose`: "Close residual keyword lookup gaps reported by the unified Manual root audit after the base 9A supplement."
- `source`: `local text-layer search against FC7300F8MDQ_Errata_Sheet_V0.5.pdf`
- `source_pdf_sha256`: `5405c2212dc7098f5bf812644b4eb16b4c12f055a19cbe5ed94b029854d61baa`
- `source_pdf_size_bytes`: `3310663`
- `pdf_page_count`: `54`
- `base_supplement_generated_at`: `2026-06-20T11:22:51Z`
- `delta_generated_at`: `2026-06-21T04:04:23Z`
- `tokenization_rule`: `Unified Manual root audit residual token set; terms are added verbatim for exact lookup.`
- `normalization`: `Known Private Use Area digit glyphs U+F6B1..U+F6BA, ligatures, soft hyphen variants, non-breaking spaces and dash variants are normalized before page-location checks.`
- `scope`: `Delta token supplement only; source PDF remains authoritative for values, tables, drawings, screenshots and prose.`
- `delta_unique_missing_terms_added`: `20`
- `delta_technical_missing_terms_added`: `3`
- `delta_pages_with_added_terms`: `13`
- `delta_supplemented_page_term_entries`: `20`
- `cumulative_text_layer_search_supplement_terms`: `673`
- `cumulative_text_layer_search_supplement_technical_terms`: `119`
- `cumulative_text_layer_search_supplement_pages`: `53`
- `cumulative_supplemented_page_term_entries`: `1153`
- `post_delta_text_token_recall`: `1.000`
- `post_delta_technical_token_recall`: `1.000`
- `usage`: `Search delta terms here to locate physical pages, then verify exact context in the source PDF.`

### TEXTSUP-DELTA-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "will"

### TEXTSUP-DELTA-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "i.e"

### TEXTSUP-DELTA-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "also"

### TEXTSUP-DELTA-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "i)_Tx_Control"

### TEXTSUP-DELTA-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Also"

### TEXTSUP-DELTA-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "i)_TX_Control"

### TEXTSUP-DELTA-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "R.3"
  - "R.4"
  - "i)_Quantum_Weight"
  - "use-"

### TEXTSUP-DELTA-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "start-"

### TEXTSUP-DELTA-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Parser(FRP"

### TEXTSUP-DELTA-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "G)MII"
  - "double-"

### TEXTSUP-DELTA-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "i)_Current_App_RxDesc"
  - "i)_Current_App_TxDesc"
  - "i)_RxDesc_List_Address"
  - "i)_TxDesc_List_Address"

### TEXTSUP-DELTA-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "i)_Rx_Control"

### TEXTSUP-DELTA-PAGE-0052
- `physical_page`: `52`
- `additional_text_terms`:
  - "5.40"

## 10. Quality Warnings

### WARN-0001-NO-PDF-OUTLINE
- `severity`: "low"
- `category`: "structure"
- `physical_pages`: [1, 54]
- `affected_ids`: ["SEC-0002-0003-TOC"]
- `message`: "The PDF has no embedded outline/bookmarks; section ranges were generated from visible headings and the table of contents text."
- `recommended_action`: "Use physical_page and anchors rather than relying on PDF bookmarks."

### WARN-0002-OCR-NOT-RUN
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 54]
- `affected_ids`: ["SEG-0001", "FIG-*"]
- `message`: "OCR was not executed because the PDF provides an extractable text layer. Raster timing diagrams and image text were semantically indexed but should be verified visually."
- `recommended_action`: "For figure-specific numeric details, open the source page or rendered page."

### WARN-0003-SPARSE-COVER
- `severity`: "low"
- `category`: "text_extraction"
- `physical_pages`: [1]
- `affected_ids`: ["SEG-0001"]
- `message`: "Physical page 1 is a sparse cover page with only title and revision text."
- `recommended_action`: "Treat it as a cover locator, not a content page."

### WARN-0004-TABLE-LIKE-PANELS
- `severity`: "medium"
- `category`: "table_extraction"
- `physical_pages`: [7, 24]
- `affected_ids`: ["TBL-PANEL-*"]
- `message`: "Many EN/CN description and workaround boxes are table-like layout panels. They are indexed for navigation, but full cell-grid reconstruction was not attempted."
- `recommended_action`: "Verify exact wording and cell continuation against the source PDF."

### WARN-0005-CROSS-PAGE-TABLES
- `severity`: "medium"
- `category`: "table_extraction"
- `physical_pages`: [4, 6, 11, 13]
- `affected_ids`: ["TBL-0004-0005-SUMMARY", "TBL-0005-0006-ERRATA-ID-MAPPING", "TBL-0011-0013-DMAMUX-SLOT-CONFLICT"]
- `message`: "Several tables span pages or continue without repeated full captions; bboxes and captions were grouped manually from page-level detections."
- `recommended_action`: "Use table entries as locators and verify rows on the relevant physical pages."

### WARN-0006-NO-SOURCE-FIGURE-NUMBERS
- `severity`: "low"
- `category`: "figure_index"
- `physical_pages`: [8, 9, 15, 19, 20]
- `affected_ids`: ["FIG-*"]
- `message`: "The source document does not provide formal figure numbers for errata timing diagrams or the FLEXCAN affected-MB diagram. Internal stable FIG IDs were generated."
- `recommended_action`: "Reference internal FIG IDs together with physical_page and anchor."

### WARN-0007-ARM-ATTACHMENTS-NOT-IN-PDF
- `severity`: "medium"
- `category`: "source_scope"
- `physical_pages`: [5]
- `affected_ids`: ["SEC-1-3"]
- `message`: "Section 1.3 says Arm-related errata are in attachments, but such attachments were not present as extracted PDF pages in this source file."
- `recommended_action`: "Do not infer Arm-related errata content from this PDF alone; attach the referenced files separately if needed."

### WARN-0008-NO-FORMAL-REQ-IDS
- `severity`: "info"
- `category`: "requirements"
- `physical_pages`: [1, 54]
- `affected_ids`: ["ABSENCE-NO-FORMAL-SWS-REQ-IDS"]
- `message`: "No formal SWS_*, REQ_*, or similar requirement IDs were detected. ERR_* and Synopsys IDs are defect/erratum identifiers."
- `recommended_action`: "Use ERR_* and Synopsys IDs as erratum locators only."

### WARN-0009-ID-MAPPING-GAP
- `severity`: "low"
- `category`: "source_consistency"
- `physical_pages`: [5, 6, 23, 54]
- `affected_ids`: ["TBL-0005-0006-ERRATA-ID-MAPPING", "ERRATA-ERR-SCG-3715113"]
- `message`: "Table 1 maps previous IDs for earlier errata; ERR_SCG_3715113 was added in Rev.0.5 and has no previous ID in the mapping table."
- `recommended_action`: "Search ERR_SCG_3715113 directly rather than a previous ERR_SCG_00x alias."

## 11. Self Check Report

### Page Coverage
- `pdf_page_count`: 54
- `indexed_physical_pages_count`: 54
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `coverage_status`: "pass"

### Source Integrity
- `source_pdf`: "FC7300F8MDQ_Errata_Sheet_V0.5.pdf"
- `source_pdf_sha256`: "5405c2212dc7098f5bf812644b4eb16b4c12f055a19cbe5ed94b029854d61baa"
- `source_sha256_match`: true
- `status`: "pass"

### Section Range Integrity
- `invalid_ranges`: []
- `sections_without_physical_pages`: []
- `overlapping_ranges`: "expected for parent/child sections and same-page subsection starts"
- `status`: "pass"

### Index Integrity
- `toc_entries_count`: 51
- `page_segment_count`: 54
- `formal_table_count`: 4
- `detected_table_like_region_count`: 48
- `indexed_figure_count`: 9
- `current_errata_id_count`: 17
- `enet_synopsys_errata_count`: 24
- `technical_symbol_index_count`: 302
- `duplicate_ids`: []
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `status`: "pass"

### Table / Figure Integrity
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `tables_without_caption_or_anchor`: []
- `figures_without_caption_or_anchor`: []
- `status`: "pass"

### Standard Page Locator Headings
- `status`: "pass"
- `page_heading_count`: 54
- `missing_page_headings`: []
- `duplicated_page_headings`: []

### Text-Layer Search Supplement

- `status`: "pass"
- `base_generated_at`: "2026-06-20T11:22:51Z"
- `delta_generated_at`: "2026-06-21T04:04:23Z"
- `base_unique_missing_terms_added`: 653
- `base_technical_missing_terms_added`: 116
- `base_pages_with_added_terms`: 53
- `base_supplemented_page_term_entries`: 1133
- `delta_unique_missing_terms_added`: 20
- `delta_technical_missing_terms_added`: 3
- `delta_pages_with_added_terms`: 13
- `delta_supplemented_page_term_entries`: 20
- `cumulative_unique_missing_terms_added`: 673
- `cumulative_technical_missing_terms_added`: 119
- `cumulative_pages_with_added_terms`: 53
- `cumulative_supplemented_page_term_entries`: 1153
- `post_supplement_text_token_recall`: "1.000"
- `post_supplement_technical_token_recall`: "1.000"

### Quality Status
- `quality_warning_count`: 9
- `critical_warnings`: []
- `overall_status`: "pass_with_warnings"

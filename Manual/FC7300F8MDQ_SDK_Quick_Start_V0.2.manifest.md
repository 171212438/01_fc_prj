---
manifest_schema_version: "1.0"
source_pdf: "FC7300F8MDQ_SDK_Quick_Start_V0.2.pdf"
source_pdf_sha256: "c5fec0b26de68636b7b0cc33477700adf44a366b95aa5c6864b25794254cb0de"
source_pdf_size_bytes: 15119797
pdf_page_count: 245
source_document_id: "SDKQS-FC7300F8MDQ-V0.2-Y26M01"
source_document_revision: "Rev.0.2"
generated_at: "2026-06-11T02:11:55.970376+00:00"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.0"
page_numbering_policy: "physical_page is 1-based PDF physical page index; printed_page is auxiliary only"
ocr_status: "not_run_text_layer_available"
pdf_outline_count: 0
overall_status: "pass_with_warnings"
---

# PDF Manifest: FC7300F8MDQ_SDK_Quick_Start_V0.2.pdf

## Retrieval Usage Contract
- `physical_page` is the primary locator and is always the 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a substitute for the source PDF. Verify factual claims against the referenced source page.
- For tables and figures, use `confidence`, `bbox`, `quality_flags`, and `anchor` to decide whether manual source-page verification is required.
- Treat this Manifest as stale if `source_pdf_sha256` does not match the current source PDF.

## 1. Document Metadata
- `source_pdf`: "FC7300F8MDQ_SDK_Quick_Start_V0.2.pdf"
- `source_pdf_sha256`: "c5fec0b26de68636b7b0cc33477700adf44a366b95aa5c6864b25794254cb0de"
- `source_pdf_size_bytes`: 15119797
- `pdf_page_count`: 245
- `source_document_id`: "SDKQS-FC7300F8MDQ-V0.2-Y26M01"
- `source_document_revision`: "Rev.0.2"
- `pdf_format`: "PDF 1.7"
- `pdf_title_metadata`: ""
- `pdf_author_metadata`: ""
- `pdf_producer_metadata`: ""
- `pdf_encryption`: "none"
- `pdf_outline_count`: 0
- `generated_at_utc`: "2026-06-11T02:11:55.970376+00:00"
- `generator`: "chatgpt-pdf-manifest-generator 0.6.0"
- `manifest_schema_version`: "1.0"
- `page_numbering_policy`: "physical_page = 1-based PDF physical page; printed_page recorded separately"

### Extraction Engines
- `text_extraction`: PyMuPDF text layer extraction
- `layout_detection`: PyMuPDF page dimensions, image information, and table finder
- `table_detection`: PyMuPDF `find_tables()` plus manual grouping/filtering for TOC, abbreviations, MCU Ports, channel summary, and revision history tables
- `image_detection`: PyMuPDF image object bboxes; semantic descriptions inferred from visible page headings and surrounding text
- `ocr`: not executed because extractable text layer is available; visual screenshots/diagrams still require source-page verification

## 2. Global Summary
- `topic`: FC7300F8MDQ SDK Quick Start Rev.0.2 for using the Flagchip FC7xxx/FC7300F8MDQ SDK examples and demos.
- `document_scope`: Introduction, SDK directory structure, abbreviations, FC_IDE/IAR/Keil setup, demo-board hardware environment, and 57 peripheral/example groups with prerequisites, MCU ports, and run steps.
- `module_scope`: ADC, AONTIMER, CLK OUT, CMP, CMU, CORDIC, CPM, CRC, DMA, EFTU, EIM/ERM, ENET, FCIIC, FCPIT, FCSMU, FCSPI, FCUART, Flash, FLEXCAN, FPU&DSP, FreeRTOS, FREQM, FS26, FTU, GPIO, HRPWM, HSADC, HSM, INTM, ISM, LIN, LU, Mailbox, MAM, MPU, MSC, Multicore, OTA, Overlay, PMC, PTIMER, QDT, RGM, RTC, SC6258XQ, SCST, SDADC, SEC, SEMA, SENT, SMC, STCU, Systick, TMU, TPU, TSTMP, WDOG.
- `key_chapters`: Chapter 1 Introduction; Chapter 2 Examples and Demos; Revision History; Disclaimer.
- `key_terms`: FC7300F8MDQ, SDKQS, FC_IDE, IAR Embedded Workbench, Keil, J-Link, Debug_Flash, Debug_RAM, FC_Project, IAR_Project, SDK\Example, SDK\Template, UART 115200/8/N/1, GPIO, DMA, ENET, FCSPI, FCUART, FLEXCAN, HSADC, SDADC, QDT, TPU, WDOG.
- `summary`: The document is a quick-start guide for developers running FC7300F8MDQ SDK example projects. It explains the SDK folder structure, supported IDE workflows, demo-board hardware, and step-by-step execution of peripheral demos. This Manifest indexes all physical pages, section paths, demo names, tables, screenshots/sequence diagrams, pins/configurations, and search aliases without replacing the source PDF.

## 3. Table of Contents Index
### FRONT-COVER
- `number`: ""
- `title`: "Cover"
- `path`: "Front Matter / Cover"
- `physical_page_start`: 1
- `physical_page_end`: 1
- `printed_page_start`: null
- `printed_page_end`: null
- `keywords`: ["Cover", "Front", "Matter"]
- `anchor`: "Cover"

### FRONT-TOC
- `number`: ""
- `title`: "Table of Contents"
- `path`: "Front Matter / Table of Contents"
- `physical_page_start`: 2
- `physical_page_end`: 9
- `printed_page_start`: "2"
- `printed_page_end`: "9"
- `keywords`: ["Contents", "Table", "Front", "Matter"]
- `anchor`: "Table of Contents"

### SEC-01-CHAPTER-1-INTRODUCTION
- `number`: "1"
- `title`: "Chapter 1 Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: 10
- `physical_page_end`: 28
- `printed_page_start`: "10"
- `printed_page_end`: "28"
- `keywords`: ["1", "Introduction"]
- `anchor`: "Chapter 1 Introduction"

### SEC-01-01-AUDIENCE
- `number`: "1.1"
- `title`: "Audience"
- `path`: "Chapter 1 Introduction / 1.1 Audience"
- `physical_page_start`: 10
- `physical_page_end`: 10
- `printed_page_start`: "10"
- `printed_page_end`: "10"
- `keywords`: ["1.1", "Audience", "Introduction"]
- `anchor`: "Audience"

### SEC-01-02-CONVENTIONS
- `number`: "1.2"
- `title`: "Conventions"
- `path`: "Chapter 1 Introduction / 1.2 Conventions"
- `physical_page_start`: 10
- `physical_page_end`: 15
- `printed_page_start`: "10"
- `printed_page_end`: "15"
- `keywords`: ["1.2", "Conventions", "Introduction"]
- `anchor`: "Conventions"

### SEC-01-02-01-SDK-DIRECTORY-STRUCTURE
- `number`: "1.2.1"
- `title`: "SDK Directory Structure"
- `path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.1 SDK Directory Structure"
- `physical_page_start`: 10
- `physical_page_end`: 11
- `printed_page_start`: "10"
- `printed_page_end`: "11"
- `keywords`: ["1.2.1", "Directory", "Structure", "Conventions", "Introduction"]
- `anchor`: "SDK Directory Structure"

### SEC-01-02-02-ABBREVIATIONS
- `number`: "1.2.2"
- `title`: "Abbreviations"
- `path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `physical_page_start`: 11
- `physical_page_end`: 15
- `printed_page_start`: "11"
- `printed_page_end`: "15"
- `keywords`: ["1.2.2", "Abbreviations", "Conventions", "Introduction"]
- `anchor`: "Abbreviations"

### SEC-01-03-SUPPORTED-IDE
- `number`: "1.3"
- `title`: "Supported IDE"
- `path`: "Chapter 1 Introduction / 1.3 Supported IDE"
- `physical_page_start`: 15
- `physical_page_end`: 27
- `printed_page_start`: "15"
- `printed_page_end`: "27"
- `keywords`: ["1.3", "IDE", "Supported", "Introduction"]
- `anchor`: "Supported IDE"

### SEC-01-03-01-FC-IDE
- `number`: "1.3.1"
- `title`: "FC_IDE"
- `path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `physical_page_start`: 15
- `physical_page_end`: 18
- `printed_page_start`: "15"
- `printed_page_end`: "18"
- `keywords`: ["1.3.1", "FC_IDE", "IDE", "Introduction", "Supported"]
- `anchor`: "FC_IDE"

### SEC-01-03-02-IAR-EMBEDDED-WORKBENCH
- `number`: "1.3.2"
- `title`: "IAR Embedded Workbench"
- `path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `physical_page_start`: 18
- `physical_page_end`: 20
- `printed_page_start`: "18"
- `printed_page_end`: "20"
- `keywords`: ["1.3.2", "IAR", "IDE", "Embedded", "Workbench", "Introduction", "Supported"]
- `anchor`: "IAR Embedded Workbench"

### SEC-01-03-03-KEIL
- `number`: "1.3.3"
- `title`: "Keil"
- `path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `physical_page_start`: 20
- `physical_page_end`: 27
- `printed_page_start`: "20"
- `printed_page_end`: "27"
- `keywords`: ["1.3.3", "IDE", "Keil", "Introduction", "Supported"]
- `anchor`: "Keil"

### SEC-01-04-HARDWARE-ENVIRONMENT
- `number`: "1.4"
- `title`: "Hardware Environment"
- `path`: "Chapter 1 Introduction / 1.4 Hardware Environment"
- `physical_page_start`: 27
- `physical_page_end`: 29
- `printed_page_start`: "27"
- `printed_page_end`: "29"
- `keywords`: ["1.4", "Environment", "Hardware", "Introduction"]
- `anchor`: "Hardware Environment"

### SEC-02-CHAPTER-2-EXAMPLES-AND-DEMOS
- `number`: "2"
- `title`: "Chapter 2 Examples and Demos"
- `path`: "Chapter 2 Examples and Demos"
- `physical_page_start`: 29
- `physical_page_end`: 242
- `printed_page_start`: "29"
- `printed_page_end`: "242"
- `keywords`: ["2", "Demos", "Examples"]
- `anchor`: "Chapter 2 Examples and Demos"

### SEC-02-01-ADC
- `number`: "2.1"
- `title`: "ADC"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC"
- `physical_page_start`: 29
- `physical_page_end`: 42
- `printed_page_start`: "29"
- `printed_page_end`: "42"
- `keywords`: ["2.1", "ADC", "Demos", "Examples"]
- `anchor`: "ADC"

### SEC-02-01-01-ADC-SINGLE
- `number`: "2.1.1"
- `title`: "ADC_Single"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single"
- `physical_page_start`: 30
- `physical_page_end`: 32
- `printed_page_start`: "30"
- `printed_page_end`: "32"
- `keywords`: ["2.1.1", "ADC_Single", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Single"

### SEC-02-01-01-01-DESCRIPTION
- `number`: "2.1.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `physical_page_start`: 30
- `physical_page_end`: 32
- `printed_page_start`: "30"
- `printed_page_end`: "32"
- `keywords`: ["2.1.1.1", "ADC", "ADC_Single", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-01-01-02-PREREQUISITES
- `number`: "2.1.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.2 Prerequisites"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["2.1.1.2", "ADC", "ADC_Single", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-01-01-03-MCU-PORTS
- `number`: "2.1.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.3 MCU Ports"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["2.1.1.3", "MCU", "ADC", "ADC_Single", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-01-01-04-STEPS-TO-RUN
- `number`: "2.1.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["2.1.1.4", "ADC", "ADC_Single", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-01-02-ADC-SINGLE-DMA
- `number`: "2.1.2"
- `title`: "ADC_Single_DMA"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA"
- `physical_page_start`: 32
- `physical_page_end`: 34
- `printed_page_start`: "32"
- `printed_page_end`: "34"
- `keywords`: ["2.1.2", "ADC_Single_DMA", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Single_DMA"

### SEC-02-01-02-01-PREREQUISITES
- `number`: "2.1.2.1"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.1 Prerequisites"
- `physical_page_start`: 33
- `physical_page_end`: 33
- `printed_page_start`: "33"
- `printed_page_end`: "33"
- `keywords`: ["2.1.2.1", "ADC", "ADC_Single_DMA", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-01-02-02-MCU-PORTS
- `number`: "2.1.2.2"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.2 MCU Ports"
- `physical_page_start`: 33
- `physical_page_end`: 34
- `printed_page_start`: "33"
- `printed_page_end`: "34"
- `keywords`: ["2.1.2.2", "MCU", "ADC", "ADC_Single_DMA", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-01-02-03-STEPS-TO-RUN
- `number`: "2.1.2.3"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.3 Steps to Run"
- `physical_page_start`: 34
- `physical_page_end`: 34
- `printed_page_start`: "34"
- `printed_page_end`: "34"
- `keywords`: ["2.1.2.3", "ADC", "ADC_Single_DMA", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-01-03-ADC-DISCONTINUOUS
- `number`: "2.1.3"
- `title`: "ADC_Discontinuous"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous"
- `physical_page_start`: 34
- `physical_page_end`: 36
- `printed_page_start`: "34"
- `printed_page_end`: "36"
- `keywords`: ["2.1.3", "ADC_Discontinuous", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Discontinuous"

### SEC-02-01-03-01-DESCRIPTION
- `number`: "2.1.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.1 Description"
- `physical_page_start`: 34
- `physical_page_end`: 35
- `printed_page_start`: "34"
- `printed_page_end`: "35"
- `keywords`: ["2.1.3.1", "ADC", "ADC_Discontinuous", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-01-03-02-PREREQUISITES
- `number`: "2.1.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.2 Prerequisites"
- `physical_page_start`: 35
- `physical_page_end`: 35
- `printed_page_start`: "35"
- `printed_page_end`: "35"
- `keywords`: ["2.1.3.2", "ADC", "ADC_Discontinuous", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-01-03-03-MCU-PORTS
- `number`: "2.1.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.3 MCU Ports"
- `physical_page_start`: 35
- `physical_page_end`: 36
- `printed_page_start`: "35"
- `printed_page_end`: "36"
- `keywords`: ["2.1.3.3", "MCU", "ADC", "ADC_Discontinuous", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-01-03-04-STEPS-TO-RUN
- `number`: "2.1.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.4 Steps to Run"
- `physical_page_start`: 36
- `physical_page_end`: 36
- `printed_page_start`: "36"
- `printed_page_end`: "36"
- `keywords`: ["2.1.3.4", "ADC", "ADC_Discontinuous", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-01-04-ADC-COMPARE
- `number`: "2.1.4"
- `title`: "ADC_Compare"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare"
- `physical_page_start`: 36
- `physical_page_end`: 38
- `printed_page_start`: "36"
- `printed_page_end`: "38"
- `keywords`: ["2.1.4", "ADC_Compare", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Compare"

### SEC-02-01-04-01-PREREQUISITES
- `number`: "2.1.4.1"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.1 Prerequisites"
- `physical_page_start`: 37
- `physical_page_end`: 37
- `printed_page_start`: "37"
- `printed_page_end`: "37"
- `keywords`: ["2.1.4.1", "ADC", "ADC_Compare", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-01-04-02-MCU-PORTS
- `number`: "2.1.4.2"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.2 MCU Ports"
- `physical_page_start`: 37
- `physical_page_end`: 38
- `printed_page_start`: "37"
- `printed_page_end`: "38"
- `keywords`: ["2.1.4.2", "MCU", "ADC", "ADC_Compare", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-01-04-03-STEPS-TO-RUN
- `number`: "2.1.4.3"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.3 Steps to Run"
- `physical_page_start`: 38
- `physical_page_end`: 38
- `printed_page_start`: "38"
- `printed_page_end`: "38"
- `keywords`: ["2.1.4.3", "ADC", "ADC_Compare", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-01-05-ADC-SEQUENCE-GROUP
- `number`: "2.1.5"
- `title`: "ADC_Sequence_Group"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group"
- `physical_page_start`: 38
- `physical_page_end`: 40
- `printed_page_start`: "38"
- `printed_page_end`: "40"
- `keywords`: ["2.1.5", "ADC_Sequence_Group", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Sequence_Group"

### SEC-02-01-05-01-PREREQUISITES
- `number`: "2.1.5.1"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.1 Prerequisites"
- `physical_page_start`: 39
- `physical_page_end`: 40
- `printed_page_start`: "39"
- `printed_page_end`: "40"
- `keywords`: ["2.1.5.1", "ADC", "ADC_Sequence_Group", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-01-05-02-MCU-PORTS
- `number`: "2.1.5.2"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.2 MCU Ports"
- `physical_page_start`: 40
- `physical_page_end`: 40
- `printed_page_start`: "40"
- `printed_page_end`: "40"
- `keywords`: ["2.1.5.2", "MCU", "ADC", "ADC_Sequence_Group", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-01-05-03-STEPS-TO-RUN
- `number`: "2.1.5.3"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.3 Steps to Run"
- `physical_page_start`: 40
- `physical_page_end`: 40
- `printed_page_start`: "40"
- `printed_page_end`: "40"
- `keywords`: ["2.1.5.3", "ADC", "ADC_Sequence_Group", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-01-06-ADC-STANDBY
- `number`: "2.1.6"
- `title`: "ADC_Standby"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby"
- `physical_page_start`: 40
- `physical_page_end`: 42
- `printed_page_start`: "40"
- `printed_page_end`: "42"
- `keywords`: ["2.1.6", "ADC_Standby", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Standby"

### SEC-02-01-06-01-PREREQUISITES
- `number`: "2.1.6.1"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.1 Prerequisites"
- `physical_page_start`: 41
- `physical_page_end`: 42
- `printed_page_start`: "41"
- `printed_page_end`: "42"
- `keywords`: ["2.1.6.1", "ADC", "ADC_Standby", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-01-06-02-MCU-PORTS
- `number`: "2.1.6.2"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.2 MCU Ports"
- `physical_page_start`: 42
- `physical_page_end`: 42
- `printed_page_start`: "42"
- `printed_page_end`: "42"
- `keywords`: ["2.1.6.2", "MCU", "ADC", "ADC_Standby", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-01-06-03-STEPS-TO-RUN
- `number`: "2.1.6.3"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.3 Steps to Run"
- `physical_page_start`: 42
- `physical_page_end`: 42
- `printed_page_start`: "42"
- `printed_page_end`: "42"
- `keywords`: ["2.1.6.3", "ADC", "ADC_Standby", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-01-07-ADC-STANDBY-WITH-TSTMP
- `number`: "2.1.7"
- `title`: "ADC_Standby_With_Tstmp"
- `path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.7 ADC_Standby_With_Tstmp"
- `physical_page_start`: 42
- `physical_page_end`: 42
- `printed_page_start`: "42"
- `printed_page_end`: "42"
- `keywords`: ["2.1.7", "ADC_Standby_With_Tstmp", "ADC", "Demos", "Examples"]
- `anchor`: "ADC_Standby_With_Tstmp"

### SEC-02-02-AONTIMER
- `number`: "2.2"
- `title`: "AONTIMER"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER"
- `physical_page_start`: 42
- `physical_page_end`: 45
- `printed_page_start`: "42"
- `printed_page_end`: "45"
- `keywords`: ["2.2", "AONTIMER", "Demos", "Examples"]
- `anchor`: "AONTIMER"

### SEC-02-02-01-AONTIMER-TIMECOUNTER
- `number`: "2.2.1"
- `title`: "AONTIMER_TimeCounter"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter"
- `physical_page_start`: 42
- `physical_page_end`: 44
- `printed_page_start`: "42"
- `printed_page_end`: "44"
- `keywords`: ["2.2.1", "AONTIMER_TimeCounter", "AONTIMER", "Demos", "Examples"]
- `anchor`: "AONTIMER_TimeCounter"

### SEC-02-02-01-01-DESCRIPTION
- `number`: "2.2.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.1 Description"
- `physical_page_start`: 42
- `physical_page_end`: 43
- `printed_page_start`: "42"
- `printed_page_end`: "43"
- `keywords`: ["2.2.1.1", "AONTIMER", "AONTIMER_TimeCounter", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-02-01-02-PREREQUISITES
- `number`: "2.2.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.2 Prerequisites"
- `physical_page_start`: 43
- `physical_page_end`: 43
- `printed_page_start`: "43"
- `printed_page_end`: "43"
- `keywords`: ["2.2.1.2", "AONTIMER", "AONTIMER_TimeCounter", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-02-01-03-MCU-PORTS
- `number`: "2.2.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.3 MCU Ports"
- `physical_page_start`: 43
- `physical_page_end`: 43
- `printed_page_start`: "43"
- `printed_page_end`: "43"
- `keywords`: ["2.2.1.3", "MCU", "AONTIMER", "AONTIMER_TimeCounter", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-02-01-04-STEPS-TO-RUN
- `number`: "2.2.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"
- `physical_page_start`: 43
- `physical_page_end`: 44
- `printed_page_start`: "43"
- `printed_page_end`: "44"
- `keywords`: ["2.2.1.4", "AONTIMER", "AONTIMER_TimeCounter", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-02-02-AONTIMER-PULSECOUNTER
- `number`: "2.2.2"
- `title`: "AONTIMER_PulseCounter"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter"
- `physical_page_start`: 44
- `physical_page_end`: 45
- `printed_page_start`: "44"
- `printed_page_end`: "45"
- `keywords`: ["2.2.2", "AONTIMER_PulseCounter", "AONTIMER", "Demos", "Examples"]
- `anchor`: "AONTIMER_PulseCounter"

### SEC-02-02-02-01-DESCRIPTION
- `number`: "2.2.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.1 Description"
- `physical_page_start`: 44
- `physical_page_end`: 44
- `printed_page_start`: "44"
- `printed_page_end`: "44"
- `keywords`: ["2.2.2.1", "AONTIMER", "AONTIMER_PulseCounter", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-02-02-02-PREREQUISITES
- `number`: "2.2.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.2 Prerequisites"
- `physical_page_start`: 44
- `physical_page_end`: 44
- `printed_page_start`: "44"
- `printed_page_end`: "44"
- `keywords`: ["2.2.2.2", "AONTIMER", "AONTIMER_PulseCounter", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-02-02-03-MCU-PORTS
- `number`: "2.2.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.3 MCU Ports"
- `physical_page_start`: 44
- `physical_page_end`: 44
- `printed_page_start`: "44"
- `printed_page_end`: "44"
- `keywords`: ["2.2.2.3", "MCU", "AONTIMER", "AONTIMER_PulseCounter", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-02-02-04-STEPS-TO-RUN
- `number`: "2.2.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `physical_page_start`: 44
- `physical_page_end`: 45
- `printed_page_start`: "44"
- `printed_page_end`: "45"
- `keywords`: ["2.2.2.4", "AONTIMER", "AONTIMER_PulseCounter", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-03-CLK-OUT
- `number`: "2.3"
- `title`: "CLK OUT"
- `path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT"
- `physical_page_start`: 45
- `physical_page_end`: 48
- `printed_page_start`: "45"
- `printed_page_end`: "48"
- `keywords`: ["2.3", "CLK", "OUT", "Demos", "Examples"]
- `anchor`: "CLK OUT"

### SEC-02-03-01-DESCRIPTION
- `number`: "2.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.1 Description"
- `physical_page_start`: 45
- `physical_page_end`: 46
- `printed_page_start`: "45"
- `printed_page_end`: "46"
- `keywords`: ["2.3.1", "CLK", "OUT", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-03-02-PREREQUISITES
- `number`: "2.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.2 Prerequisites"
- `physical_page_start`: 46
- `physical_page_end`: 47
- `printed_page_start`: "46"
- `printed_page_end`: "47"
- `keywords`: ["2.3.2", "CLK", "OUT", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-03-03-MCU-PORTS
- `number`: "2.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.3 MCU Ports"
- `physical_page_start`: 47
- `physical_page_end`: 47
- `printed_page_start`: "47"
- `printed_page_end`: "47"
- `keywords`: ["2.3.3", "MCU", "CLK", "OUT", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-03-04-STEPS-TO-RUN
- `number`: "2.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run"
- `physical_page_start`: 47
- `physical_page_end`: 48
- `printed_page_start`: "47"
- `printed_page_end`: "48"
- `keywords`: ["2.3.4", "CLK", "OUT", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-04-CMP
- `number`: "2.4"
- `title`: "CMP"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP"
- `physical_page_start`: 48
- `physical_page_end`: 54
- `printed_page_start`: "48"
- `printed_page_end`: "54"
- `keywords`: ["2.4", "CMP", "Demos", "Examples"]
- `anchor`: "CMP"

### SEC-02-04-01-INTRODUCTION
- `number`: "2.4.1"
- `title`: "Introduction"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"
- `physical_page_start`: 48
- `physical_page_end`: 49
- `printed_page_start`: "48"
- `printed_page_end`: "49"
- `keywords`: ["2.4.1", "CMP", "Introduction", "Demos", "Examples"]
- `anchor`: "Introduction"

### SEC-02-04-02-CMP-INTERRUPT
- `number`: "2.4.2"
- `title`: "CMP_Interrupt"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt"
- `physical_page_start`: 49
- `physical_page_end`: 51
- `printed_page_start`: "49"
- `printed_page_end`: "51"
- `keywords`: ["2.4.2", "CMP_Interrupt", "CMP", "Demos", "Examples"]
- `anchor`: "CMP_Interrupt"

### SEC-02-04-02-01-DESCRIPTION
- `number`: "2.4.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.1 Description"
- `physical_page_start`: 49
- `physical_page_end`: 50
- `printed_page_start`: "49"
- `printed_page_end`: "50"
- `keywords`: ["2.4.2.1", "CMP", "CMP_Interrupt", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-04-02-02-PREREQUISITES
- `number`: "2.4.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.2 Prerequisites"
- `physical_page_start`: 50
- `physical_page_end`: 50
- `printed_page_start`: "50"
- `printed_page_end`: "50"
- `keywords`: ["2.4.2.2", "CMP", "CMP_Interrupt", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-04-02-03-MCU-PORTS
- `number`: "2.4.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.3 MCU Ports"
- `physical_page_start`: 50
- `physical_page_end`: 50
- `printed_page_start`: "50"
- `printed_page_end`: "50"
- `keywords`: ["2.4.2.3", "MCU", "CMP", "CMP_Interrupt", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-04-02-04-STEPS-TO-RUN
- `number`: "2.4.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.4 Steps to Run"
- `physical_page_start`: 50
- `physical_page_end`: 51
- `printed_page_start`: "50"
- `printed_page_end`: "51"
- `keywords`: ["2.4.2.4", "CMP", "CMP_Interrupt", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-04-03-CMP-DMA
- `number`: "2.4.3"
- `title`: "CMP_DMA"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA"
- `physical_page_start`: 51
- `physical_page_end`: 52
- `printed_page_start`: "51"
- `printed_page_end`: "52"
- `keywords`: ["2.4.3", "CMP_DMA", "CMP", "Demos", "Examples"]
- `anchor`: "CMP_DMA"

### SEC-02-04-03-01-DESCRIPTION
- `number`: "2.4.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.1 Description"
- `physical_page_start`: 51
- `physical_page_end`: 52
- `printed_page_start`: "51"
- `printed_page_end`: "52"
- `keywords`: ["2.4.3.1", "CMP", "CMP_DMA", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-04-03-02-PREREQUISITES
- `number`: "2.4.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.2 Prerequisites"
- `physical_page_start`: 52
- `physical_page_end`: 52
- `printed_page_start`: "52"
- `printed_page_end`: "52"
- `keywords`: ["2.4.3.2", "CMP", "CMP_DMA", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-04-03-03-MCU-PORTS
- `number`: "2.4.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.3 MCU Ports"
- `physical_page_start`: 52
- `physical_page_end`: 52
- `printed_page_start`: "52"
- `printed_page_end`: "52"
- `keywords`: ["2.4.3.3", "MCU", "CMP", "CMP_DMA", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-04-03-04-STEPS-TO-RUN
- `number`: "2.4.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.4 Steps to Run"
- `physical_page_start`: 52
- `physical_page_end`: 52
- `printed_page_start`: "52"
- `printed_page_end`: "52"
- `keywords`: ["2.4.3.4", "CMP", "CMP_DMA", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-04-04-CMP-CHANNELSCAN-INTERRUPT
- `number`: "2.4.4"
- `title`: "CMP_ChannelScan_Interrupt"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt"
- `physical_page_start`: 52
- `physical_page_end`: 54
- `printed_page_start`: "52"
- `printed_page_end`: "54"
- `keywords`: ["2.4.4", "CMP_ChannelScan_Interrupt", "CMP", "Demos", "Examples"]
- `anchor`: "CMP_ChannelScan_Interrupt"

### SEC-02-04-04-01-DESCRIPTION
- `number`: "2.4.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.1 Description"
- `physical_page_start`: 52
- `physical_page_end`: 53
- `printed_page_start`: "52"
- `printed_page_end`: "53"
- `keywords`: ["2.4.4.1", "CMP", "CMP_ChannelScan_Interrupt", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-04-04-02-PREREQUISITES
- `number`: "2.4.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.2 Prerequisites"
- `physical_page_start`: 53
- `physical_page_end`: 53
- `printed_page_start`: "53"
- `printed_page_end`: "53"
- `keywords`: ["2.4.4.2", "CMP", "CMP_ChannelScan_Interrupt", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-04-04-03-MCU-PORTS
- `number`: "2.4.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.3 MCU Ports"
- `physical_page_start`: 53
- `physical_page_end`: 53
- `printed_page_start`: "53"
- `printed_page_end`: "53"
- `keywords`: ["2.4.4.3", "MCU", "CMP", "CMP_ChannelScan_Interrupt", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-04-04-04-STEPS-TO-RUN
- `number`: "2.4.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `physical_page_start`: 53
- `physical_page_end`: 54
- `printed_page_start`: "53"
- `printed_page_end`: "54"
- `keywords`: ["2.4.4.4", "CMP", "CMP_ChannelScan_Interrupt", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-05-CMU
- `number`: "2.5"
- `title`: "CMU"
- `path`: "Chapter 2 Examples and Demos / 2.5 CMU"
- `physical_page_start`: 54
- `physical_page_end`: 55
- `printed_page_start`: "54"
- `printed_page_end`: "55"
- `keywords`: ["2.5", "CMU", "Demos", "Examples"]
- `anchor`: "CMU"

### SEC-02-05-01-DESCRIPTION
- `number`: "2.5.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.5 CMU / 2.5.1 Description"
- `physical_page_start`: 54
- `physical_page_end`: 54
- `printed_page_start`: "54"
- `printed_page_end`: "54"
- `keywords`: ["2.5.1", "CMU", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-05-02-PREREQUISITES
- `number`: "2.5.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.5 CMU / 2.5.2 Prerequisites"
- `physical_page_start`: 54
- `physical_page_end`: 54
- `printed_page_start`: "54"
- `printed_page_end`: "54"
- `keywords`: ["2.5.2", "CMU", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-05-03-MCU-PORTS
- `number`: "2.5.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.5 CMU / 2.5.3 MCU Ports"
- `physical_page_start`: 54
- `physical_page_end`: 54
- `printed_page_start`: "54"
- `printed_page_end`: "54"
- `keywords`: ["2.5.3", "MCU", "CMU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-05-04-STEPS-TO-RUN
- `number`: "2.5.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.5 CMU / 2.5.4 Steps to Run"
- `physical_page_start`: 54
- `physical_page_end`: 55
- `printed_page_start`: "54"
- `printed_page_end`: "55"
- `keywords`: ["2.5.4", "CMU", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-06-CORDIC
- `number`: "2.6"
- `title`: "CORDIC"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC"
- `physical_page_start`: 55
- `physical_page_end`: 56
- `printed_page_start`: "55"
- `printed_page_end`: "56"
- `keywords`: ["2.6", "CORDIC", "Demos", "Examples"]
- `anchor`: "CORDIC"

### SEC-02-06-01-DESCRIPTION
- `number`: "2.6.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.1 Description"
- `physical_page_start`: 55
- `physical_page_end`: 55
- `printed_page_start`: "55"
- `printed_page_end`: "55"
- `keywords`: ["2.6.1", "CORDIC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-06-02-PREREQUISITES
- `number`: "2.6.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.2 Prerequisites"
- `physical_page_start`: 55
- `physical_page_end`: 55
- `printed_page_start`: "55"
- `printed_page_end`: "55"
- `keywords`: ["2.6.2", "CORDIC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-06-03-MCU-PORTS
- `number`: "2.6.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.3 MCU Ports"
- `physical_page_start`: 55
- `physical_page_end`: 55
- `printed_page_start`: "55"
- `printed_page_end`: "55"
- `keywords`: ["2.6.3", "MCU", "CORDIC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-06-04-STEPS-TO-RUN
- `number`: "2.6.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run"
- `physical_page_start`: 55
- `physical_page_end`: 56
- `printed_page_start`: "55"
- `printed_page_end`: "56"
- `keywords`: ["2.6.4", "CORDIC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-06-04-01-FOR-FC-IDE
- `number`: "2.6.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.1 For FC_IDE"
- `physical_page_start`: 55
- `physical_page_end`: 56
- `printed_page_start`: "55"
- `printed_page_end`: "56"
- `keywords`: ["2.6.4.1", "FC_IDE", "CORDIC", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-06-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.6.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 56
- `physical_page_end`: 56
- `printed_page_start`: "56"
- `printed_page_end`: "56"
- `keywords`: ["2.6.4.2", "IAR", "CORDIC", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-06-04-03-FOR-KEIL
- `number`: "2.6.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil"
- `physical_page_start`: 56
- `physical_page_end`: 56
- `printed_page_start`: "56"
- `printed_page_end`: "56"
- `keywords`: ["2.6.4.3", "CORDIC", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-07-CPM
- `number`: "2.7"
- `title`: "CPM"
- `path`: "Chapter 2 Examples and Demos / 2.7 CPM"
- `physical_page_start`: 56
- `physical_page_end`: 59
- `printed_page_start`: "56"
- `printed_page_end`: "59"
- `keywords`: ["2.7", "CPM", "Demos", "Examples"]
- `anchor`: "CPM"

### SEC-02-07-01-DESCRIPTION
- `number`: "2.7.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.1 Description"
- `physical_page_start`: 56
- `physical_page_end`: 57
- `printed_page_start`: "56"
- `printed_page_end`: "57"
- `keywords`: ["2.7.1", "CPM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-07-02-PREREQUISITES
- `number`: "2.7.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.2 Prerequisites"
- `physical_page_start`: 57
- `physical_page_end`: 57
- `printed_page_start`: "57"
- `printed_page_end`: "57"
- `keywords`: ["2.7.2", "CPM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-07-03-MCU-PORTS
- `number`: "2.7.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.3 MCU Ports"
- `physical_page_start`: 57
- `physical_page_end`: 57
- `printed_page_start`: "57"
- `printed_page_end`: "57"
- `keywords`: ["2.7.3", "MCU", "CPM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-07-04-STEPS-TO-RUN
- `number`: "2.7.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `physical_page_start`: 57
- `physical_page_end`: 59
- `printed_page_start`: "57"
- `printed_page_end`: "59"
- `keywords`: ["2.7.4", "CPM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-08-CRC
- `number`: "2.8"
- `title`: "CRC"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC"
- `physical_page_start`: 59
- `physical_page_end`: 67
- `printed_page_start`: "59"
- `printed_page_end`: "67"
- `keywords`: ["2.8", "CRC", "Demos", "Examples"]
- `anchor`: "CRC"

### SEC-02-08-01-CRC-DEMO
- `number`: "2.8.1"
- `title`: "CRC_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo"
- `physical_page_start`: 60
- `physical_page_end`: 63
- `printed_page_start`: "60"
- `printed_page_end`: "63"
- `keywords`: ["2.8.1", "CRC_Demo", "CRC", "Demos", "Examples"]
- `anchor`: "CRC_Demo"

### SEC-02-08-01-01-DESCRIPTION
- `number`: "2.8.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.1 Description"
- `physical_page_start`: 60
- `physical_page_end`: 60
- `printed_page_start`: "60"
- `printed_page_end`: "60"
- `keywords`: ["2.8.1.1", "CRC", "CRC_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-08-01-02-PREREQUISITES
- `number`: "2.8.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.2 Prerequisites"
- `physical_page_start`: 60
- `physical_page_end`: 60
- `printed_page_start`: "60"
- `printed_page_end`: "60"
- `keywords`: ["2.8.1.2", "CRC", "CRC_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-08-01-03-MCU-PORTS
- `number`: "2.8.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.3 MCU Ports"
- `physical_page_start`: 60
- `physical_page_end`: 61
- `printed_page_start`: "60"
- `printed_page_end`: "61"
- `keywords`: ["2.8.1.3", "MCU", "CRC", "CRC_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-08-01-04-STEPS-TO-RUN
- `number`: "2.8.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `physical_page_start`: 61
- `physical_page_end`: 63
- `printed_page_start`: "61"
- `printed_page_end`: "63"
- `keywords`: ["2.8.1.4", "CRC", "CRC_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-08-02-CRC-DEMO-HARD-SOFT-COMPARE
- `number`: "2.8.2"
- `title`: "CRC_Demo_Hard_Soft_Compare"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare"
- `physical_page_start`: 63
- `physical_page_end`: 64
- `printed_page_start`: "63"
- `printed_page_end`: "64"
- `keywords`: ["2.8.2", "CRC_Demo_Hard_Soft_Compare", "CRC", "Demos", "Examples"]
- `anchor`: "CRC_Demo_Hard_Soft_Compare"

### SEC-02-08-02-01-DESCRIPTION
- `number`: "2.8.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.1 Description"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: ["2.8.2.1", "CRC", "CRC_Demo_Hard_Soft_Compare", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-08-02-02-PREREQUISITES
- `number`: "2.8.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.2 Prerequisites"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: ["2.8.2.2", "CRC", "CRC_Demo_Hard_Soft_Compare", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-08-02-03-MCU-PORTS
- `number`: "2.8.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.3 MCU Ports"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: ["2.8.2.3", "MCU", "CRC", "CRC_Demo_Hard_Soft_Compare", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-08-02-04-STEPS-TO-RUN
- `number`: "2.8.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.4 Steps to Run"
- `physical_page_start`: 63
- `physical_page_end`: 64
- `printed_page_start`: "63"
- `printed_page_end`: "64"
- `keywords`: ["2.8.2.4", "CRC", "CRC_Demo_Hard_Soft_Compare", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-08-03-CRC-DEMO-MULTI-STEP
- `number`: "2.8.3"
- `title`: "CRC_Demo_Multi_Step"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step"
- `physical_page_start`: 64
- `physical_page_end`: 67
- `printed_page_start`: "64"
- `printed_page_end`: "67"
- `keywords`: ["2.8.3", "CRC_Demo_Multi_Step", "CRC", "Demos", "Examples"]
- `anchor`: "CRC_Demo_Multi_Step"

### SEC-02-08-03-01-DESCRIPTION
- `number`: "2.8.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `physical_page_start`: 64
- `physical_page_end`: 66
- `printed_page_start`: "64"
- `printed_page_end`: "66"
- `keywords`: ["2.8.3.1", "CRC", "CRC_Demo_Multi_Step", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-08-03-02-PREREQUISITES
- `number`: "2.8.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.2 Prerequisites"
- `physical_page_start`: 66
- `physical_page_end`: 66
- `printed_page_start`: "66"
- `printed_page_end`: "66"
- `keywords`: ["2.8.3.2", "CRC", "CRC_Demo_Multi_Step", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-08-03-03-MCU-PORTS
- `number`: "2.8.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.3 MCU Ports"
- `physical_page_start`: 66
- `physical_page_end`: 66
- `printed_page_start`: "66"
- `printed_page_end`: "66"
- `keywords`: ["2.8.3.3", "MCU", "CRC", "CRC_Demo_Multi_Step", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-08-03-04-STEPS-TO-RUN
- `number`: "2.8.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run"
- `physical_page_start`: 66
- `physical_page_end`: 67
- `printed_page_start`: "66"
- `printed_page_end`: "67"
- `keywords`: ["2.8.3.4", "CRC", "CRC_Demo_Multi_Step", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-09-DMA
- `number`: "2.9"
- `title`: "DMA"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA"
- `physical_page_start`: 67
- `physical_page_end`: 70
- `printed_page_start`: "67"
- `printed_page_end`: "70"
- `keywords`: ["2.9", "DMA", "Demos", "Examples"]
- `anchor`: "DMA"

### SEC-02-09-01-DMA-MEMCPY
- `number`: "2.9.1"
- `title`: "DMA_Memcpy"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy"
- `physical_page_start`: 67
- `physical_page_end`: 68
- `printed_page_start`: "67"
- `printed_page_end`: "68"
- `keywords`: ["2.9.1", "DMA_Memcpy", "DMA", "Demos", "Examples"]
- `anchor`: "DMA_Memcpy"

### SEC-02-09-01-01-DESCRIPTION
- `number`: "2.9.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.1 Description"
- `physical_page_start`: 67
- `physical_page_end`: 67
- `printed_page_start`: "67"
- `printed_page_end`: "67"
- `keywords`: ["2.9.1.1", "DMA", "DMA_Memcpy", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-09-01-02-PREREQUISITES
- `number`: "2.9.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `physical_page_start`: 67
- `physical_page_end`: 68
- `printed_page_start`: "67"
- `printed_page_end`: "68"
- `keywords`: ["2.9.1.2", "DMA", "DMA_Memcpy", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-09-01-03-MCU-PORTS
- `number`: "2.9.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.3 MCU Ports"
- `physical_page_start`: 68
- `physical_page_end`: 68
- `printed_page_start`: "68"
- `printed_page_end`: "68"
- `keywords`: ["2.9.1.3", "MCU", "DMA", "DMA_Memcpy", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-09-01-04-STEPS-TO-RUN
- `number`: "2.9.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.4 Steps to Run"
- `physical_page_start`: 68
- `physical_page_end`: 68
- `printed_page_start`: "68"
- `printed_page_end`: "68"
- `keywords`: ["2.9.1.4", "DMA", "DMA_Memcpy", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-09-02-DMA-CIRCULARBUFFER
- `number`: "2.9.2"
- `title`: "DMA_CircularBuffer"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer"
- `physical_page_start`: 68
- `physical_page_end`: 70
- `printed_page_start`: "68"
- `printed_page_end`: "70"
- `keywords`: ["2.9.2", "DMA_CircularBuffer", "DMA", "Demos", "Examples"]
- `anchor`: "DMA_CircularBuffer"

### SEC-02-09-02-01-DESCRIPTION
- `number`: "2.9.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.1 Description"
- `physical_page_start`: 68
- `physical_page_end`: 69
- `printed_page_start`: "68"
- `printed_page_end`: "69"
- `keywords`: ["2.9.2.1", "DMA", "DMA_CircularBuffer", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-09-02-02-PREREQUISITES
- `number`: "2.9.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.2 Prerequisites"
- `physical_page_start`: 69
- `physical_page_end`: 69
- `printed_page_start`: "69"
- `printed_page_end`: "69"
- `keywords`: ["2.9.2.2", "DMA", "DMA_CircularBuffer", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-09-02-03-MCU-PORTS
- `number`: "2.9.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.3 MCU Ports"
- `physical_page_start`: 69
- `physical_page_end`: 69
- `printed_page_start`: "69"
- `printed_page_end`: "69"
- `keywords`: ["2.9.2.3", "MCU", "DMA", "DMA_CircularBuffer", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-09-02-04-STEPS-TO-RUN
- `number`: "2.9.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.4 Steps to Run"
- `physical_page_start`: 69
- `physical_page_end`: 70
- `printed_page_start`: "69"
- `printed_page_end`: "70"
- `keywords`: ["2.9.2.4", "DMA", "DMA_CircularBuffer", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-10-EFTU
- `number`: "2.10"
- `title`: "EFTU"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU"
- `physical_page_start`: 70
- `physical_page_end`: 73
- `printed_page_start`: "70"
- `printed_page_end`: "73"
- `keywords`: ["2.10", "EFTU", "Demos", "Examples"]
- `anchor`: "EFTU"

### SEC-02-10-01-EFTU-SIGNALDETECT
- `number`: "2.10.1"
- `title`: "Eftu_SignalDetect"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect"
- `physical_page_start`: 70
- `physical_page_end`: 71
- `printed_page_start`: "70"
- `printed_page_end`: "71"
- `keywords`: ["2.10.1", "EFTU", "Eftu_SignalDetect", "Demos", "Examples"]
- `anchor`: "Eftu_SignalDetect"

### SEC-02-10-01-01-DESCRIPTION
- `number`: "2.10.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.1 Description"
- `physical_page_start`: 70
- `physical_page_end`: 70
- `printed_page_start`: "70"
- `printed_page_end`: "70"
- `keywords`: ["2.10.1.1", "EFTU", "Description", "Demos", "Eftu_SignalDetect", "Examples"]
- `anchor`: "Description"

### SEC-02-10-01-02-PREREQUISITES
- `number`: "2.10.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites"
- `physical_page_start`: 70
- `physical_page_end`: 71
- `printed_page_start`: "70"
- `printed_page_end`: "71"
- `keywords`: ["2.10.1.2", "EFTU", "Prerequisites", "Demos", "Eftu_SignalDetect", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-10-01-03-MCU-PORTS
- `number`: "2.10.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.3 MCU Ports"
- `physical_page_start`: 71
- `physical_page_end`: 71
- `printed_page_start`: "71"
- `printed_page_end`: "71"
- `keywords`: ["2.10.1.3", "MCU", "EFTU", "Ports", "Demos", "Eftu_SignalDetect", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-10-01-04-STEPS-TO-RUN
- `number`: "2.10.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.4 Steps to Run"
- `physical_page_start`: 71
- `physical_page_end`: 71
- `printed_page_start`: "71"
- `printed_page_end`: "71"
- `keywords`: ["2.10.1.4", "EFTU", "Run", "Steps", "Demos", "Eftu_SignalDetect", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-10-02-EFTU-PWMMEASUREMENT
- `number`: "2.10.2"
- `title`: "Eftu_PwmMeasurement"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement"
- `physical_page_start`: 71
- `physical_page_end`: 72
- `printed_page_start`: "71"
- `printed_page_end`: "72"
- `keywords`: ["2.10.2", "EFTU", "Eftu_PwmMeasurement", "Demos", "Examples"]
- `anchor`: "Eftu_PwmMeasurement"

### SEC-02-10-02-01-DESCRIPTION
- `number`: "2.10.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.1 Description"
- `physical_page_start`: 71
- `physical_page_end`: 71
- `printed_page_start`: "71"
- `printed_page_end`: "71"
- `keywords`: ["2.10.2.1", "EFTU", "Description", "Demos", "Eftu_PwmMeasurement", "Examples"]
- `anchor`: "Description"

### SEC-02-10-02-02-PREREQUISITES
- `number`: "2.10.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.2 Prerequisites"
- `physical_page_start`: 71
- `physical_page_end`: 71
- `printed_page_start`: "71"
- `printed_page_end`: "71"
- `keywords`: ["2.10.2.2", "EFTU", "Prerequisites", "Demos", "Eftu_PwmMeasurement", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-10-02-03-MCU-PORTS
- `number`: "2.10.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports"
- `physical_page_start`: 71
- `physical_page_end`: 72
- `printed_page_start`: "71"
- `printed_page_end`: "72"
- `keywords`: ["2.10.2.3", "MCU", "EFTU", "Ports", "Demos", "Eftu_PwmMeasurement", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-10-02-04-STEPS-TO-RUN
- `number`: "2.10.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.4 Steps to Run"
- `physical_page_start`: 72
- `physical_page_end`: 72
- `printed_page_start`: "72"
- `printed_page_end`: "72"
- `keywords`: ["2.10.2.4", "EFTU", "Run", "Steps", "Demos", "Eftu_PwmMeasurement", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-10-03-EFTU-TIMER
- `number`: "2.10.3"
- `title`: "Eftu_Timer"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer"
- `physical_page_start`: 72
- `physical_page_end`: 73
- `printed_page_start`: "72"
- `printed_page_end`: "73"
- `keywords`: ["2.10.3", "EFTU", "Eftu_Timer", "Demos", "Examples"]
- `anchor`: "Eftu_Timer"

### SEC-02-10-03-01-DESCRIPTION
- `number`: "2.10.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.1 Description"
- `physical_page_start`: 72
- `physical_page_end`: 72
- `printed_page_start`: "72"
- `printed_page_end`: "72"
- `keywords`: ["2.10.3.1", "EFTU", "Description", "Demos", "Eftu_Timer", "Examples"]
- `anchor`: "Description"

### SEC-02-10-03-02-PREREQUISITES
- `number`: "2.10.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.2 Prerequisites"
- `physical_page_start`: 72
- `physical_page_end`: 72
- `printed_page_start`: "72"
- `printed_page_end`: "72"
- `keywords`: ["2.10.3.2", "EFTU", "Prerequisites", "Demos", "Eftu_Timer", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-10-03-03-MCU-PORTS
- `number`: "2.10.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.3 MCU Ports"
- `physical_page_start`: 72
- `physical_page_end`: 72
- `printed_page_start`: "72"
- `printed_page_end`: "72"
- `keywords`: ["2.10.3.3", "MCU", "EFTU", "Ports", "Demos", "Eftu_Timer", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-10-03-04-STEPS-TO-RUN
- `number`: "2.10.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run"
- `physical_page_start`: 72
- `physical_page_end`: 73
- `printed_page_start`: "72"
- `printed_page_end`: "73"
- `keywords`: ["2.10.3.4", "EFTU", "Run", "Steps", "Demos", "Eftu_Timer", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-10-04-EFTU-PWM
- `number`: "2.10.4"
- `title`: "Eftu_Pwm"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm"
- `physical_page_start`: 73
- `physical_page_end`: 73
- `printed_page_start`: "73"
- `printed_page_end`: "73"
- `keywords`: ["2.10.4", "EFTU", "Eftu_Pwm", "Demos", "Examples"]
- `anchor`: "Eftu_Pwm"

### SEC-02-10-04-01-DESCRIPTION
- `number`: "2.10.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.1 Description"
- `physical_page_start`: 73
- `physical_page_end`: 73
- `printed_page_start`: "73"
- `printed_page_end`: "73"
- `keywords`: ["2.10.4.1", "EFTU", "Description", "Demos", "Eftu_Pwm", "Examples"]
- `anchor`: "Description"

### SEC-02-10-04-02-PREREQUISITES
- `number`: "2.10.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.2 Prerequisites"
- `physical_page_start`: 73
- `physical_page_end`: 73
- `printed_page_start`: "73"
- `printed_page_end`: "73"
- `keywords`: ["2.10.4.2", "EFTU", "Prerequisites", "Demos", "Eftu_Pwm", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-10-04-03-MCU-PORTS
- `number`: "2.10.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.3 MCU Ports"
- `physical_page_start`: 73
- `physical_page_end`: 73
- `printed_page_start`: "73"
- `printed_page_end`: "73"
- `keywords`: ["2.10.4.3", "MCU", "EFTU", "Ports", "Demos", "Eftu_Pwm", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-10-04-04-STEPS-TO-RUN
- `number`: "2.10.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"
- `physical_page_start`: 73
- `physical_page_end`: 73
- `printed_page_start`: "73"
- `printed_page_end`: "73"
- `keywords`: ["2.10.4.4", "EFTU", "Run", "Steps", "Demos", "Eftu_Pwm", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-11-EIM-ERM
- `number`: "2.11"
- `title`: "EIM/ERM"
- `path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM"
- `physical_page_start`: 73
- `physical_page_end`: 74
- `printed_page_start`: "73"
- `printed_page_end`: "74"
- `keywords`: ["2.11", "EIM/ERM", "Demos", "Examples"]
- `anchor`: "EIM/ERM"

### SEC-02-11-01-DESCRIPTION
- `number`: "2.11.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.1 Description"
- `physical_page_start`: 73
- `physical_page_end`: 74
- `printed_page_start`: "73"
- `printed_page_end`: "74"
- `keywords`: ["2.11.1", "EIM/ERM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-11-02-PREREQUISITES
- `number`: "2.11.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.2 Prerequisites"
- `physical_page_start`: 74
- `physical_page_end`: 74
- `printed_page_start`: "74"
- `printed_page_end`: "74"
- `keywords`: ["2.11.2", "EIM/ERM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-11-03-MCU-PORTS
- `number`: "2.11.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.3 MCU Ports"
- `physical_page_start`: 74
- `physical_page_end`: 74
- `printed_page_start`: "74"
- `printed_page_end`: "74"
- `keywords`: ["2.11.3", "MCU", "EIM/ERM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-11-04-STEPS-TO-RUN
- `number`: "2.11.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run"
- `physical_page_start`: 74
- `physical_page_end`: 74
- `printed_page_start`: "74"
- `printed_page_end`: "74"
- `keywords`: ["2.11.4", "EIM/ERM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-12-ENET
- `number`: "2.12"
- `title`: "ENET"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET"
- `physical_page_start`: 74
- `physical_page_end`: 88
- `printed_page_start`: "74"
- `printed_page_end`: "88"
- `keywords`: ["2.12", "ENET", "Demos", "Examples"]
- `anchor`: "ENET"

### SEC-02-12-01-ENET-LWIP-FREERTOS
- `number`: "2.12.1"
- `title`: "ENET_lwIP_FreeRTOS"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS"
- `physical_page_start`: 75
- `physical_page_end`: 78
- `printed_page_start`: "75"
- `printed_page_end`: "78"
- `keywords`: ["2.12.1", "ENET_lwIP_FreeRTOS", "ENET", "Demos", "Examples"]
- `anchor`: "ENET_lwIP_FreeRTOS"

### SEC-02-12-01-01-DESCRIPTION
- `number`: "2.12.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.1 Description"
- `physical_page_start`: 75
- `physical_page_end`: 75
- `printed_page_start`: "75"
- `printed_page_end`: "75"
- `keywords`: ["2.12.1.1", "ENET", "ENET_lwIP_FreeRTOS", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-12-01-02-PREREQUISITES
- `number`: "2.12.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.2 Prerequisites"
- `physical_page_start`: 75
- `physical_page_end`: 76
- `printed_page_start`: "75"
- `printed_page_end`: "76"
- `keywords`: ["2.12.1.2", "ENET", "ENET_lwIP_FreeRTOS", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-12-01-03-MCU-PORTS
- `number`: "2.12.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.3 MCU Ports"
- `physical_page_start`: 76
- `physical_page_end`: 76
- `printed_page_start`: "76"
- `printed_page_end`: "76"
- `keywords`: ["2.12.1.3", "MCU", "ENET", "ENET_lwIP_FreeRTOS", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-12-01-04-STEPS-TO-RUN
- `number`: "2.12.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `physical_page_start`: 76
- `physical_page_end`: 78
- `printed_page_start`: "76"
- `printed_page_end`: "78"
- `keywords`: ["2.12.1.4", "ENET", "ENET_lwIP_FreeRTOS", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-12-02-ENET-LWIP-NOSYS
- `number`: "2.12.2"
- `title`: "ENET_lwIP_NoSys"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys"
- `physical_page_start`: 78
- `physical_page_end`: 81
- `printed_page_start`: "78"
- `printed_page_end`: "81"
- `keywords`: ["2.12.2", "ENET_lwIP_NoSys", "ENET", "Demos", "Examples"]
- `anchor`: "ENET_lwIP_NoSys"

### SEC-02-12-02-01-DESCRIPTION
- `number`: "2.12.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.1 Description"
- `physical_page_start`: 78
- `physical_page_end`: 79
- `printed_page_start`: "78"
- `printed_page_end`: "79"
- `keywords`: ["2.12.2.1", "ENET", "ENET_lwIP_NoSys", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-12-02-02-PREREQUISITES
- `number`: "2.12.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.2 Prerequisites"
- `physical_page_start`: 79
- `physical_page_end`: 79
- `printed_page_start`: "79"
- `printed_page_end`: "79"
- `keywords`: ["2.12.2.2", "ENET", "ENET_lwIP_NoSys", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-12-02-03-MCU-PORTS
- `number`: "2.12.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.3 MCU Ports"
- `physical_page_start`: 79
- `physical_page_end`: 79
- `printed_page_start`: "79"
- `printed_page_end`: "79"
- `keywords`: ["2.12.2.3", "MCU", "ENET", "ENET_lwIP_NoSys", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-12-02-04-STEPS-TO-RUN
- `number`: "2.12.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `physical_page_start`: 79
- `physical_page_end`: 81
- `printed_page_start`: "79"
- `printed_page_end`: "81"
- `keywords`: ["2.12.2.4", "ENET", "ENET_lwIP_NoSys", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-12-03-RT-THREAD
- `number`: "2.12.3"
- `title`: "RT_THREAD"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD"
- `physical_page_start`: 81
- `physical_page_end`: 85
- `printed_page_start`: "81"
- `printed_page_end`: "85"
- `keywords`: ["2.12.3", "RT_THREAD", "ENET", "Demos", "Examples"]
- `anchor`: "RT_THREAD"

### SEC-02-12-03-01-DESCRIPTION
- `number`: "2.12.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.1 Description"
- `physical_page_start`: 81
- `physical_page_end`: 82
- `printed_page_start`: "81"
- `printed_page_end`: "82"
- `keywords`: ["2.12.3.1", "ENET", "RT_THREAD", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-12-03-02-PREREQUISITES
- `number`: "2.12.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.2 Prerequisites"
- `physical_page_start`: 82
- `physical_page_end`: 82
- `printed_page_start`: "82"
- `printed_page_end`: "82"
- `keywords`: ["2.12.3.2", "ENET", "RT_THREAD", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-12-03-03-MCU-PORTS
- `number`: "2.12.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports"
- `physical_page_start`: 82
- `physical_page_end`: 83
- `printed_page_start`: "82"
- `printed_page_end`: "83"
- `keywords`: ["2.12.3.3", "MCU", "ENET", "RT_THREAD", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-12-03-04-STEPS-TO-RUN
- `number`: "2.12.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `physical_page_start`: 83
- `physical_page_end`: 85
- `printed_page_start`: "83"
- `printed_page_end`: "85"
- `keywords`: ["2.12.3.4", "ENET", "RT_THREAD", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-12-04-RT-THREAD-AMP
- `number`: "2.12.4"
- `title`: "RT_THREAD_AMP"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP"
- `physical_page_start`: 85
- `physical_page_end`: 88
- `printed_page_start`: "85"
- `printed_page_end`: "88"
- `keywords`: ["2.12.4", "RT_THREAD_AMP", "ENET", "Demos", "Examples"]
- `anchor`: "RT_THREAD_AMP"

### SEC-02-12-04-01-DESCRIPTION
- `number`: "2.12.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description"
- `physical_page_start`: 85
- `physical_page_end`: 86
- `printed_page_start`: "85"
- `printed_page_end`: "86"
- `keywords`: ["2.12.4.1", "ENET", "RT_THREAD_AMP", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-12-04-02-PREREQUISITES
- `number`: "2.12.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.2 Prerequisites"
- `physical_page_start`: 86
- `physical_page_end`: 87
- `printed_page_start`: "86"
- `printed_page_end`: "87"
- `keywords`: ["2.12.4.2", "ENET", "RT_THREAD_AMP", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-12-04-03-MCU-PORTS
- `number`: "2.12.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.3 MCU Ports"
- `physical_page_start`: 87
- `physical_page_end`: 87
- `printed_page_start`: "87"
- `printed_page_end`: "87"
- `keywords`: ["2.12.4.3", "MCU", "ENET", "RT_THREAD_AMP", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-12-04-04-STEPS-TO-RUN
- `number`: "2.12.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `physical_page_start`: 87
- `physical_page_end`: 88
- `printed_page_start`: "87"
- `printed_page_end`: "88"
- `keywords`: ["2.12.4.4", "ENET", "RT_THREAD_AMP", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-13-FCIIC
- `number`: "2.13"
- `title`: "FCIIC"
- `path`: "Chapter 2 Examples and Demos / 2.13 FCIIC"
- `physical_page_start`: 88
- `physical_page_end`: 89
- `printed_page_start`: "88"
- `printed_page_end`: "89"
- `keywords`: ["2.13", "FCIIC", "Demos", "Examples"]
- `anchor`: "FCIIC"

### SEC-02-13-01-DESCRIPTION
- `number`: "2.13.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.13 FCIIC / 2.13.1 Description"
- `physical_page_start`: 88
- `physical_page_end`: 88
- `printed_page_start`: "88"
- `printed_page_end`: "88"
- `keywords`: ["2.13.1", "FCIIC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-13-02-PREREQUISITES
- `number`: "2.13.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.13 FCIIC / 2.13.2 Prerequisites"
- `physical_page_start`: 88
- `physical_page_end`: 88
- `printed_page_start`: "88"
- `printed_page_end`: "88"
- `keywords`: ["2.13.2", "FCIIC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-13-03-MCU-PORTS
- `number`: "2.13.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.13 FCIIC / 2.13.3 MCU Ports"
- `physical_page_start`: 88
- `physical_page_end`: 88
- `printed_page_start`: "88"
- `printed_page_end`: "88"
- `keywords`: ["2.13.3", "MCU", "FCIIC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-13-04-STEPS-TO-RUN
- `number`: "2.13.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.13 FCIIC / 2.13.4 Steps to Run"
- `physical_page_start`: 88
- `physical_page_end`: 89
- `printed_page_start`: "88"
- `printed_page_end`: "89"
- `keywords`: ["2.13.4", "FCIIC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-14-FCPIT
- `number`: "2.14"
- `title`: "FCPIT"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT"
- `physical_page_start`: 89
- `physical_page_end`: 94
- `printed_page_start`: "89"
- `printed_page_end`: "94"
- `keywords`: ["2.14", "FCPIT", "Demos", "Examples"]
- `anchor`: "FCPIT"

### SEC-02-14-01-FCPIT-TIMECOUNTER
- `number`: "2.14.1"
- `title`: "FCPIT_TimeCounter"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter"
- `physical_page_start`: 89
- `physical_page_end`: 91
- `printed_page_start`: "89"
- `printed_page_end`: "91"
- `keywords`: ["2.14.1", "FCPIT_TimeCounter", "FCPIT", "Demos", "Examples"]
- `anchor`: "FCPIT_TimeCounter"

### SEC-02-14-01-01-DESCRIPTION
- `number`: "2.14.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.1 Description"
- `physical_page_start`: 89
- `physical_page_end`: 90
- `printed_page_start`: "89"
- `printed_page_end`: "90"
- `keywords`: ["2.14.1.1", "FCPIT", "FCPIT_TimeCounter", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-14-01-02-PREREQUISITES
- `number`: "2.14.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.2 Prerequisites"
- `physical_page_start`: 90
- `physical_page_end`: 90
- `printed_page_start`: "90"
- `printed_page_end`: "90"
- `keywords`: ["2.14.1.2", "FCPIT", "FCPIT_TimeCounter", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-14-01-03-MCU-PORTS
- `number`: "2.14.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.3 MCU Ports"
- `physical_page_start`: 90
- `physical_page_end`: 90
- `printed_page_start`: "90"
- `printed_page_end`: "90"
- `keywords`: ["2.14.1.3", "MCU", "FCPIT", "FCPIT_TimeCounter", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-14-01-04-STEPS-TO-RUN
- `number`: "2.14.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run"
- `physical_page_start`: 90
- `physical_page_end`: 91
- `printed_page_start`: "90"
- `printed_page_end`: "91"
- `keywords`: ["2.14.1.4", "FCPIT", "FCPIT_TimeCounter", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-14-01-04-01-FOR-FC-IDE
- `number`: "2.14.1.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.1 For FC_IDE"
- `physical_page_start`: 90
- `physical_page_end`: 90
- `printed_page_start`: "90"
- `printed_page_end`: "90"
- `keywords`: ["2.14.1.4.1", "FC_IDE", "FCPIT", "FCPIT_TimeCounter", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-14-01-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.14.1.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 90
- `physical_page_end`: 91
- `printed_page_start`: "90"
- `printed_page_end`: "91"
- `keywords`: ["2.14.1.4.2", "IAR", "FCPIT", "FCPIT_TimeCounter", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-14-01-04-03-FOR-KEIL
- `number`: "2.14.1.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil"
- `physical_page_start`: 91
- `physical_page_end`: 91
- `printed_page_start`: "91"
- `printed_page_end`: "91"
- `keywords`: ["2.14.1.4.3", "FCPIT", "FCPIT_TimeCounter", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-14-02-FCPIT-CHAINMODECOUNTER
- `number`: "2.14.2"
- `title`: "FCPIT_ChainModeCounter"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter"
- `physical_page_start`: 91
- `physical_page_end`: 92
- `printed_page_start`: "91"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2", "FCPIT_ChainModeCounter", "FCPIT", "Demos", "Examples"]
- `anchor`: "FCPIT_ChainModeCounter"

### SEC-02-14-02-01-DESCRIPTION
- `number`: "2.14.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.1 Description"
- `physical_page_start`: 91
- `physical_page_end`: 92
- `printed_page_start`: "91"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.1", "FCPIT", "FCPIT_ChainModeCounter", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-14-02-02-PREREQUISITES
- `number`: "2.14.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.2 Prerequisites"
- `physical_page_start`: 92
- `physical_page_end`: 92
- `printed_page_start`: "92"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.2", "FCPIT", "FCPIT_ChainModeCounter", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-14-02-03-MCU-PORTS
- `number`: "2.14.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.3 MCU Ports"
- `physical_page_start`: 92
- `physical_page_end`: 92
- `printed_page_start`: "92"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.3", "MCU", "FCPIT", "FCPIT_ChainModeCounter", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-14-02-04-STEPS-TO-RUN
- `number`: "2.14.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run"
- `physical_page_start`: 92
- `physical_page_end`: 92
- `printed_page_start`: "92"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.4", "FCPIT", "FCPIT_ChainModeCounter", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-14-02-04-01-FOR-FC-IDE
- `number`: "2.14.2.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.1 For FC_IDE"
- `physical_page_start`: 92
- `physical_page_end`: 92
- `printed_page_start`: "92"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.4.1", "FC_IDE", "FCPIT", "FCPIT_ChainModeCounter", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-14-02-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.14.2.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 92
- `physical_page_end`: 92
- `printed_page_start`: "92"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.4.2", "IAR", "FCPIT", "FCPIT_ChainModeCounter", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-14-02-04-03-FOR-KEIL
- `number`: "2.14.2.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.3 For Keil"
- `physical_page_start`: 92
- `physical_page_end`: 92
- `printed_page_start`: "92"
- `printed_page_end`: "92"
- `keywords`: ["2.14.2.4.3", "FCPIT", "FCPIT_ChainModeCounter", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-14-03-FCPIT-TRGSEL
- `number`: "2.14.3"
- `title`: "FCPIT_Trgsel"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel"
- `physical_page_start`: 92
- `physical_page_end`: 94
- `printed_page_start`: "92"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3", "FCPIT_Trgsel", "FCPIT", "Demos", "Examples"]
- `anchor`: "FCPIT_Trgsel"

### SEC-02-14-03-01-DESCRIPTION
- `number`: "2.14.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.1 Description"
- `physical_page_start`: 92
- `physical_page_end`: 94
- `printed_page_start`: "92"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.1", "FCPIT", "FCPIT_Trgsel", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-14-03-02-PREREQUISITES
- `number`: "2.14.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.2 Prerequisites"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.2", "FCPIT", "FCPIT_Trgsel", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-14-03-03-MCU-PORTS
- `number`: "2.14.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.3 MCU Ports"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.3", "MCU", "FCPIT", "FCPIT_Trgsel", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-14-03-04-STEPS-TO-RUN
- `number`: "2.14.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.4", "FCPIT", "FCPIT_Trgsel", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-14-03-04-01-FOR-FC-IDE
- `number`: "2.14.3.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.1 For FC_IDE"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.4.1", "FC_IDE", "FCPIT", "FCPIT_Trgsel", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-14-03-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.14.3.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.4.2", "IAR", "FCPIT", "FCPIT_Trgsel", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-14-03-04-03-FOR-KEIL
- `number`: "2.14.3.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.3 For Keil"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.14.3.4.3", "FCPIT", "FCPIT_Trgsel", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-15-FCSMU
- `number`: "2.15"
- `title`: "FCSMU"
- `path`: "Chapter 2 Examples and Demos / 2.15 FCSMU"
- `physical_page_start`: 94
- `physical_page_end`: 95
- `printed_page_start`: "94"
- `printed_page_end`: "95"
- `keywords`: ["2.15", "FCSMU", "Demos", "Examples"]
- `anchor`: "FCSMU"

### SEC-02-15-01-DESCRIPTION
- `number`: "2.15.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.15 FCSMU / 2.15.1 Description"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.15.1", "FCSMU", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-15-02-PREREQUISITES
- `number`: "2.15.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.15 FCSMU / 2.15.2 Prerequisites"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.15.2", "FCSMU", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-15-03-MCU-PORTS
- `number`: "2.15.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.15 FCSMU / 2.15.3 MCU Ports"
- `physical_page_start`: 94
- `physical_page_end`: 94
- `printed_page_start`: "94"
- `printed_page_end`: "94"
- `keywords`: ["2.15.3", "MCU", "FCSMU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-15-04-STEPS-TO-RUN
- `number`: "2.15.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.15 FCSMU / 2.15.4 Steps to Run"
- `physical_page_start`: 94
- `physical_page_end`: 95
- `printed_page_start`: "94"
- `printed_page_end`: "95"
- `keywords`: ["2.15.4", "FCSMU", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-16-FCSPI
- `number`: "2.16"
- `title`: "FCSPI"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI"
- `physical_page_start`: 95
- `physical_page_end`: 110
- `printed_page_start`: "95"
- `printed_page_end`: "110"
- `keywords`: ["2.16", "FCSPI", "Demos", "Examples"]
- `anchor`: "FCSPI"

### SEC-02-16-01-FCSPI-MASTER-POLLING
- `number`: "2.16.1"
- `title`: "FCSPI_Master_Polling"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling"
- `physical_page_start`: 95
- `physical_page_end`: 99
- `printed_page_start`: "95"
- `printed_page_end`: "99"
- `keywords`: ["2.16.1", "FCSPI_Master_Polling", "FCSPI", "Demos", "Examples"]
- `anchor`: "FCSPI_Master_Polling"

### SEC-02-16-01-01-DESCRIPTION
- `number`: "2.16.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `physical_page_start`: 95
- `physical_page_end`: 98
- `printed_page_start`: "95"
- `printed_page_end`: "98"
- `keywords`: ["2.16.1.1", "FCSPI", "FCSPI_Master_Polling", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-16-01-02-PREREQUISITES
- `number`: "2.16.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.2 Prerequisites"
- `physical_page_start`: 98
- `physical_page_end`: 98
- `printed_page_start`: "98"
- `printed_page_end`: "98"
- `keywords`: ["2.16.1.2", "FCSPI", "FCSPI_Master_Polling", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-16-01-03-MCU-PORTS
- `number`: "2.16.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.3 MCU Ports"
- `physical_page_start`: 98
- `physical_page_end`: 98
- `printed_page_start`: "98"
- `printed_page_end`: "98"
- `keywords`: ["2.16.1.3", "MCU", "FCSPI", "FCSPI_Master_Polling", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-16-01-04-STEPS-TO-RUN
- `number`: "2.16.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"
- `physical_page_start`: 98
- `physical_page_end`: 99
- `printed_page_start`: "98"
- `printed_page_end`: "99"
- `keywords`: ["2.16.1.4", "FCSPI", "FCSPI_Master_Polling", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-16-02-FCSPI-MASTER-INTERRUPT
- `number`: "2.16.2"
- `title`: "FCSPI_Master_Interrupt"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt"
- `physical_page_start`: 99
- `physical_page_end`: 102
- `printed_page_start`: "99"
- `printed_page_end`: "102"
- `keywords`: ["2.16.2", "FCSPI_Master_Interrupt", "FCSPI", "Demos", "Examples"]
- `anchor`: "FCSPI_Master_Interrupt"

### SEC-02-16-02-01-DESCRIPTION
- `number`: "2.16.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"
- `physical_page_start`: 99
- `physical_page_end`: 101
- `printed_page_start`: "99"
- `printed_page_end`: "101"
- `keywords`: ["2.16.2.1", "FCSPI", "FCSPI_Master_Interrupt", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-16-02-02-PREREQUISITES
- `number`: "2.16.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.2 Prerequisites"
- `physical_page_start`: 101
- `physical_page_end`: 102
- `printed_page_start`: "101"
- `printed_page_end`: "102"
- `keywords`: ["2.16.2.2", "FCSPI", "FCSPI_Master_Interrupt", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-16-02-03-MCU-PORTS
- `number`: "2.16.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.3 MCU Ports"
- `physical_page_start`: 102
- `physical_page_end`: 102
- `printed_page_start`: "102"
- `printed_page_end`: "102"
- `keywords`: ["2.16.2.3", "MCU", "FCSPI", "FCSPI_Master_Interrupt", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-16-02-04-STEPS-TO-RUN
- `number`: "2.16.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.4 Steps to Run"
- `physical_page_start`: 102
- `physical_page_end`: 102
- `printed_page_start`: "102"
- `printed_page_end`: "102"
- `keywords`: ["2.16.2.4", "FCSPI", "FCSPI_Master_Interrupt", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-16-03-FCSPI-MASTER-DMA
- `number`: "2.16.3"
- `title`: "FCSPI_Master_DMA"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA"
- `physical_page_start`: 102
- `physical_page_end`: 106
- `printed_page_start`: "102"
- `printed_page_end`: "106"
- `keywords`: ["2.16.3", "FCSPI_Master_DMA", "FCSPI", "Demos", "Examples"]
- `anchor`: "FCSPI_Master_DMA"

### SEC-02-16-03-01-DESCRIPTION
- `number`: "2.16.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `physical_page_start`: 102
- `physical_page_end`: 106
- `printed_page_start`: "102"
- `printed_page_end`: "106"
- `keywords`: ["2.16.3.1", "FCSPI", "FCSPI_Master_DMA", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-16-03-02-PREREQUISITES
- `number`: "2.16.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.2 Prerequisites"
- `physical_page_start`: 106
- `physical_page_end`: 106
- `printed_page_start`: "106"
- `printed_page_end`: "106"
- `keywords`: ["2.16.3.2", "FCSPI", "FCSPI_Master_DMA", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-16-03-03-MCU-PORTS
- `number`: "2.16.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.3 MCU Ports"
- `physical_page_start`: 106
- `physical_page_end`: 106
- `printed_page_start`: "106"
- `printed_page_end`: "106"
- `keywords`: ["2.16.3.3", "MCU", "FCSPI", "FCSPI_Master_DMA", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-16-03-04-STEPS-TO-RUN
- `number`: "2.16.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.4 Steps to Run"
- `physical_page_start`: 106
- `physical_page_end`: 106
- `printed_page_start`: "106"
- `printed_page_end`: "106"
- `keywords`: ["2.16.3.4", "FCSPI", "FCSPI_Master_DMA", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-16-04-FCSPI-SLAVE-INTERRUPT
- `number`: "2.16.4"
- `title`: "FCSPI_Slave_Interrupt"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt"
- `physical_page_start`: 106
- `physical_page_end`: 110
- `printed_page_start`: "106"
- `printed_page_end`: "110"
- `keywords`: ["2.16.4", "FCSPI_Slave_Interrupt", "FCSPI", "Demos", "Examples"]
- `anchor`: "FCSPI_Slave_Interrupt"

### SEC-02-16-04-01-DESCRIPTION
- `number`: "2.16.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `physical_page_start`: 106
- `physical_page_end`: 110
- `printed_page_start`: "106"
- `printed_page_end`: "110"
- `keywords`: ["2.16.4.1", "FCSPI", "FCSPI_Slave_Interrupt", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-16-04-02-PREREQUISITES
- `number`: "2.16.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.2 Prerequisites"
- `physical_page_start`: 110
- `physical_page_end`: 110
- `printed_page_start`: "110"
- `printed_page_end`: "110"
- `keywords`: ["2.16.4.2", "FCSPI", "FCSPI_Slave_Interrupt", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-16-04-03-MCU-PORTS
- `number`: "2.16.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.3 MCU Ports"
- `physical_page_start`: 110
- `physical_page_end`: 110
- `printed_page_start`: "110"
- `printed_page_end`: "110"
- `keywords`: ["2.16.4.3", "MCU", "FCSPI", "FCSPI_Slave_Interrupt", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-16-04-04-STEPS-TO-RUN
- `number`: "2.16.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"
- `physical_page_start`: 110
- `physical_page_end`: 110
- `printed_page_start`: "110"
- `printed_page_end`: "110"
- `keywords`: ["2.16.4.4", "FCSPI", "FCSPI_Slave_Interrupt", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-17-FCUART
- `number`: "2.17"
- `title`: "FCUART"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART"
- `physical_page_start`: 110
- `physical_page_end`: 113
- `printed_page_start`: "110"
- `printed_page_end`: "113"
- `keywords`: ["2.17", "FCUART", "Demos", "Examples"]
- `anchor`: "FCUART"

### SEC-02-17-01-DESCRIPTION
- `number`: "2.17.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.1 Description"
- `physical_page_start`: 110
- `physical_page_end`: 111
- `printed_page_start`: "110"
- `printed_page_end`: "111"
- `keywords`: ["2.17.1", "FCUART", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-17-02-PREREQUISITES
- `number`: "2.17.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.2 Prerequisites"
- `physical_page_start`: 111
- `physical_page_end`: 112
- `printed_page_start`: "111"
- `printed_page_end`: "112"
- `keywords`: ["2.17.2", "FCUART", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-17-03-MCU-PORTS
- `number`: "2.17.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.3 MCU Ports"
- `physical_page_start`: 112
- `physical_page_end`: 112
- `printed_page_start`: "112"
- `printed_page_end`: "112"
- `keywords`: ["2.17.3", "MCU", "FCUART", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-17-04-STEPS-TO-RUN
- `number`: "2.17.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run"
- `physical_page_start`: 112
- `physical_page_end`: 113
- `printed_page_start`: "112"
- `printed_page_end`: "113"
- `keywords`: ["2.17.4", "FCUART", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-17-04-01-FOR-FC-IDE
- `number`: "2.17.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.1 For FC_IDE"
- `physical_page_start`: 112
- `physical_page_end`: 112
- `printed_page_start`: "112"
- `printed_page_end`: "112"
- `keywords`: ["2.17.4.1", "FC_IDE", "FCUART", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-17-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.17.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 112
- `physical_page_end`: 113
- `printed_page_start`: "112"
- `printed_page_end`: "113"
- `keywords`: ["2.17.4.2", "IAR", "FCUART", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-17-04-03-FOR-KEIL
- `number`: "2.17.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.3 For Keil"
- `physical_page_start`: 113
- `physical_page_end`: 113
- `printed_page_start`: "113"
- `printed_page_end`: "113"
- `keywords`: ["2.17.4.3", "FCUART", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-18-FLASH
- `number`: "2.18"
- `title`: "Flash"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash"
- `physical_page_start`: 113
- `physical_page_end`: 119
- `printed_page_start`: "113"
- `printed_page_end`: "119"
- `keywords`: ["2.18", "Flash", "Demos", "Examples"]
- `anchor`: "Flash"

### SEC-02-18-01-FLASH-ASYNC-PROJECT
- `number`: "2.18.1"
- `title`: "Flash_Async_Project"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project"
- `physical_page_start`: 113
- `physical_page_end`: 115
- `printed_page_start`: "113"
- `printed_page_end`: "115"
- `keywords`: ["2.18.1", "Flash_Async_Project", "Demos", "Examples", "Flash"]
- `anchor`: "Flash_Async_Project"

### SEC-02-18-01-01-DESCRIPTION
- `number`: "2.18.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description"
- `physical_page_start`: 113
- `physical_page_end`: 114
- `printed_page_start`: "113"
- `printed_page_end`: "114"
- `keywords`: ["2.18.1.1", "Description", "Demos", "Examples", "Flash", "Flash_Async_Project"]
- `anchor`: "Description"

### SEC-02-18-01-02-PREREQUISITES
- `number`: "2.18.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.2 Prerequisites"
- `physical_page_start`: 114
- `physical_page_end`: 114
- `printed_page_start`: "114"
- `printed_page_end`: "114"
- `keywords`: ["2.18.1.2", "Prerequisites", "Demos", "Examples", "Flash", "Flash_Async_Project"]
- `anchor`: "Prerequisites"

### SEC-02-18-01-03-MCU-PORTS
- `number`: "2.18.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.3 MCU Ports"
- `physical_page_start`: 114
- `physical_page_end`: 114
- `printed_page_start`: "114"
- `printed_page_end`: "114"
- `keywords`: ["2.18.1.3", "MCU", "Ports", "Demos", "Examples", "Flash", "Flash_Async_Project"]
- `anchor`: "MCU Ports"

### SEC-02-18-01-04-STEPS-TO-RUN
- `number`: "2.18.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run"
- `physical_page_start`: 114
- `physical_page_end`: 115
- `printed_page_start`: "114"
- `printed_page_end`: "115"
- `keywords`: ["2.18.1.4", "Run", "Steps", "Demos", "Examples", "Flash", "Flash_Async_Project"]
- `anchor`: "Steps to Run"

### SEC-02-18-02-FLASH-INT-PROJECT
- `number`: "2.18.2"
- `title`: "Flash_INT_Project"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project"
- `physical_page_start`: 115
- `physical_page_end`: 117
- `printed_page_start`: "115"
- `printed_page_end`: "117"
- `keywords`: ["2.18.2", "Flash_INT_Project", "Demos", "Examples", "Flash"]
- `anchor`: "Flash_INT_Project"

### SEC-02-18-02-01-DESCRIPTION
- `number`: "2.18.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description"
- `physical_page_start`: 115
- `physical_page_end`: 116
- `printed_page_start`: "115"
- `printed_page_end`: "116"
- `keywords`: ["2.18.2.1", "Flash_INT_Project", "Description", "Demos", "Examples", "Flash"]
- `anchor`: "Description"

### SEC-02-18-02-02-PREREQUISITES
- `number`: "2.18.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.2 Prerequisites"
- `physical_page_start`: 116
- `physical_page_end`: 116
- `printed_page_start`: "116"
- `printed_page_end`: "116"
- `keywords`: ["2.18.2.2", "Flash_INT_Project", "Prerequisites", "Demos", "Examples", "Flash"]
- `anchor`: "Prerequisites"

### SEC-02-18-02-03-MCU-PORTS
- `number`: "2.18.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.3 MCU Ports"
- `physical_page_start`: 116
- `physical_page_end`: 116
- `printed_page_start`: "116"
- `printed_page_end`: "116"
- `keywords`: ["2.18.2.3", "MCU", "Flash_INT_Project", "Ports", "Demos", "Examples", "Flash"]
- `anchor`: "MCU Ports"

### SEC-02-18-02-04-STEPS-TO-RUN
- `number`: "2.18.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run"
- `physical_page_start`: 116
- `physical_page_end`: 117
- `printed_page_start`: "116"
- `printed_page_end`: "117"
- `keywords`: ["2.18.2.4", "Flash_INT_Project", "Run", "Steps", "Demos", "Examples", "Flash"]
- `anchor`: "Steps to Run"

### SEC-02-18-03-FLASH-SYNC-PROJECT
- `number`: "2.18.3"
- `title`: "Flash_Sync_Project"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project"
- `physical_page_start`: 117
- `physical_page_end`: 119
- `printed_page_start`: "117"
- `printed_page_end`: "119"
- `keywords`: ["2.18.3", "Flash_Sync_Project", "Demos", "Examples", "Flash"]
- `anchor`: "Flash_Sync_Project"

### SEC-02-18-03-01-DESCRIPTION
- `number`: "2.18.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description"
- `physical_page_start`: 117
- `physical_page_end`: 118
- `printed_page_start`: "117"
- `printed_page_end`: "118"
- `keywords`: ["2.18.3.1", "Description", "Demos", "Examples", "Flash", "Flash_Sync_Project"]
- `anchor`: "Description"

### SEC-02-18-03-02-PREREQUISITES
- `number`: "2.18.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.2 Prerequisites"
- `physical_page_start`: 118
- `physical_page_end`: 118
- `printed_page_start`: "118"
- `printed_page_end`: "118"
- `keywords`: ["2.18.3.2", "Prerequisites", "Demos", "Examples", "Flash", "Flash_Sync_Project"]
- `anchor`: "Prerequisites"

### SEC-02-18-03-03-MCU-PORTS
- `number`: "2.18.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.3 MCU Ports"
- `physical_page_start`: 118
- `physical_page_end`: 118
- `printed_page_start`: "118"
- `printed_page_end`: "118"
- `keywords`: ["2.18.3.3", "MCU", "Ports", "Demos", "Examples", "Flash", "Flash_Sync_Project"]
- `anchor`: "MCU Ports"

### SEC-02-18-03-04-STEPS-TO-RUN
- `number`: "2.18.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"
- `physical_page_start`: 118
- `physical_page_end`: 119
- `printed_page_start`: "118"
- `printed_page_end`: "119"
- `keywords`: ["2.18.3.4", "Run", "Steps", "Demos", "Examples", "Flash", "Flash_Sync_Project"]
- `anchor`: "Steps to Run"

### SEC-02-19-FLEXCAN
- `number`: "2.19"
- `title`: "FLEXCAN"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN"
- `physical_page_start`: 119
- `physical_page_end`: 127
- `printed_page_start`: "119"
- `printed_page_end`: "127"
- `keywords`: ["2.19", "FLEXCAN", "Demos", "Examples"]
- `anchor`: "FLEXCAN"

### SEC-02-19-01-CAN-DMA-TRANSMIT
- `number`: "2.19.1"
- `title`: "CAN_DMA_Transmit"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit"
- `physical_page_start`: 119
- `physical_page_end`: 121
- `printed_page_start`: "119"
- `printed_page_end`: "121"
- `keywords`: ["2.19.1", "CAN_DMA_Transmit", "FLEXCAN", "Demos", "Examples"]
- `anchor`: "CAN_DMA_Transmit"

### SEC-02-19-01-01-DESCRIPTION
- `number`: "2.19.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description"
- `physical_page_start`: 119
- `physical_page_end`: 120
- `printed_page_start`: "119"
- `printed_page_end`: "120"
- `keywords`: ["2.19.1.1", "CAN_DMA_Transmit", "FLEXCAN", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-19-01-02-PREREQUISITES
- `number`: "2.19.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.2 Prerequisites"
- `physical_page_start`: 120
- `physical_page_end`: 120
- `printed_page_start`: "120"
- `printed_page_end`: "120"
- `keywords`: ["2.19.1.2", "CAN_DMA_Transmit", "FLEXCAN", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-19-01-03-MCU-PORTS
- `number`: "2.19.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.3 MCU Ports"
- `physical_page_start`: 120
- `physical_page_end`: 120
- `printed_page_start`: "120"
- `printed_page_end`: "120"
- `keywords`: ["2.19.1.3", "MCU", "CAN_DMA_Transmit", "FLEXCAN", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-19-01-04-STEPS-TO-RUN
- `number`: "2.19.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run"
- `physical_page_start`: 120
- `physical_page_end`: 121
- `printed_page_start`: "120"
- `printed_page_end`: "121"
- `keywords`: ["2.19.1.4", "CAN_DMA_Transmit", "FLEXCAN", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-19-02-CAN-ENHANCEFIFO-DMA
- `number`: "2.19.2"
- `title`: "CAN_EnhanceFIFO_DMA"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA"
- `physical_page_start`: 121
- `physical_page_end`: 123
- `printed_page_start`: "121"
- `printed_page_end`: "123"
- `keywords`: ["2.19.2", "CAN_EnhanceFIFO_DMA", "FLEXCAN", "Demos", "Examples"]
- `anchor`: "CAN_EnhanceFIFO_DMA"

### SEC-02-19-02-01-DESCRIPTION
- `number`: "2.19.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.1 Description"
- `physical_page_start`: 121
- `physical_page_end`: 122
- `printed_page_start`: "121"
- `printed_page_end`: "122"
- `keywords`: ["2.19.2.1", "CAN_EnhanceFIFO_DMA", "FLEXCAN", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-19-02-02-PREREQUISITES
- `number`: "2.19.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.2 Prerequisites"
- `physical_page_start`: 122
- `physical_page_end`: 122
- `printed_page_start`: "122"
- `printed_page_end`: "122"
- `keywords`: ["2.19.2.2", "CAN_EnhanceFIFO_DMA", "FLEXCAN", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-19-02-03-MCU-PORTS
- `number`: "2.19.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.3 MCU Ports"
- `physical_page_start`: 122
- `physical_page_end`: 122
- `printed_page_start`: "122"
- `printed_page_end`: "122"
- `keywords`: ["2.19.2.3", "MCU", "CAN_EnhanceFIFO_DMA", "FLEXCAN", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-19-02-04-STEPS-TO-RUN
- `number`: "2.19.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run"
- `physical_page_start`: 122
- `physical_page_end`: 123
- `printed_page_start`: "122"
- `printed_page_end`: "123"
- `keywords`: ["2.19.2.4", "CAN_EnhanceFIFO_DMA", "FLEXCAN", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-19-03-CAN-LEGACYFIFO-DMA
- `number`: "2.19.3"
- `title`: "CAN_LegacyFIFO_DMA"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA"
- `physical_page_start`: 123
- `physical_page_end`: 124
- `printed_page_start`: "123"
- `printed_page_end`: "124"
- `keywords`: ["2.19.3", "CAN_LegacyFIFO_DMA", "FLEXCAN", "Demos", "Examples"]
- `anchor`: "CAN_LegacyFIFO_DMA"

### SEC-02-19-03-01-DESCRIPTION
- `number`: "2.19.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.1 Description"
- `physical_page_start`: 123
- `physical_page_end`: 123
- `printed_page_start`: "123"
- `printed_page_end`: "123"
- `keywords`: ["2.19.3.1", "CAN_LegacyFIFO_DMA", "FLEXCAN", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-19-03-02-PREREQUISITES
- `number`: "2.19.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.2 Prerequisites"
- `physical_page_start`: 123
- `physical_page_end`: 123
- `printed_page_start`: "123"
- `printed_page_end`: "123"
- `keywords`: ["2.19.3.2", "CAN_LegacyFIFO_DMA", "FLEXCAN", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-19-03-03-MCU-PORTS
- `number`: "2.19.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports"
- `physical_page_start`: 123
- `physical_page_end`: 124
- `printed_page_start`: "123"
- `printed_page_end`: "124"
- `keywords`: ["2.19.3.3", "MCU", "CAN_LegacyFIFO_DMA", "FLEXCAN", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-19-03-04-STEPS-TO-RUN
- `number`: "2.19.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.4 Steps to Run"
- `physical_page_start`: 124
- `physical_page_end`: 124
- `printed_page_start`: "124"
- `printed_page_end`: "124"
- `keywords`: ["2.19.3.4", "CAN_LegacyFIFO_DMA", "FLEXCAN", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-19-04-CAN-MB-ENHANCEDFIFO
- `number`: "2.19.4"
- `title`: "CAN_MB_EnhancedFIFO"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO"
- `physical_page_start`: 124
- `physical_page_end`: 126
- `printed_page_start`: "124"
- `printed_page_end`: "126"
- `keywords`: ["2.19.4", "CAN_MB_EnhancedFIFO", "FLEXCAN", "Demos", "Examples"]
- `anchor`: "CAN_MB_EnhancedFIFO"

### SEC-02-19-04-01-DESCRIPTION
- `number`: "2.19.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description"
- `physical_page_start`: 124
- `physical_page_end`: 125
- `printed_page_start`: "124"
- `printed_page_end`: "125"
- `keywords`: ["2.19.4.1", "CAN_MB_EnhancedFIFO", "FLEXCAN", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-19-04-02-PREREQUISITES
- `number`: "2.19.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.2 Prerequisites"
- `physical_page_start`: 125
- `physical_page_end`: 125
- `printed_page_start`: "125"
- `printed_page_end`: "125"
- `keywords`: ["2.19.4.2", "CAN_MB_EnhancedFIFO", "FLEXCAN", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-19-04-03-MCU-PORTS
- `number`: "2.19.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.3 MCU Ports"
- `physical_page_start`: 125
- `physical_page_end`: 125
- `printed_page_start`: "125"
- `printed_page_end`: "125"
- `keywords`: ["2.19.4.3", "MCU", "CAN_MB_EnhancedFIFO", "FLEXCAN", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-19-04-04-STEPS-TO-RUN
- `number`: "2.19.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run"
- `physical_page_start`: 125
- `physical_page_end`: 126
- `printed_page_start`: "125"
- `printed_page_end`: "126"
- `keywords`: ["2.19.4.4", "CAN_MB_EnhancedFIFO", "FLEXCAN", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-19-05-CAN-MB-LEGACYFIFO
- `number`: "2.19.5"
- `title`: "CAN_MB_LegacyFIFO"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO"
- `physical_page_start`: 126
- `physical_page_end`: 127
- `printed_page_start`: "126"
- `printed_page_end`: "127"
- `keywords`: ["2.19.5", "CAN_MB_LegacyFIFO", "FLEXCAN", "Demos", "Examples"]
- `anchor`: "CAN_MB_LegacyFIFO"

### SEC-02-19-05-01-DESCRIPTION
- `number`: "2.19.5.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.1 Description"
- `physical_page_start`: 126
- `physical_page_end`: 126
- `printed_page_start`: "126"
- `printed_page_end`: "126"
- `keywords`: ["2.19.5.1", "CAN_MB_LegacyFIFO", "FLEXCAN", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-19-05-02-PREREQUISITES
- `number`: "2.19.5.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.2 Prerequisites"
- `physical_page_start`: 126
- `physical_page_end`: 126
- `printed_page_start`: "126"
- `printed_page_end`: "126"
- `keywords`: ["2.19.5.2", "CAN_MB_LegacyFIFO", "FLEXCAN", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-19-05-03-MCU-PORTS
- `number`: "2.19.5.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"
- `physical_page_start`: 126
- `physical_page_end`: 127
- `printed_page_start`: "126"
- `printed_page_end`: "127"
- `keywords`: ["2.19.5.3", "MCU", "CAN_MB_LegacyFIFO", "FLEXCAN", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-19-05-04-STEPS-TO-RUN
- `number`: "2.19.5.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"
- `physical_page_start`: 127
- `physical_page_end`: 127
- `printed_page_start`: "127"
- `printed_page_end`: "127"
- `keywords`: ["2.19.5.4", "CAN_MB_LegacyFIFO", "FLEXCAN", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-20-FPU-AND-DSP
- `number`: "2.20"
- `title`: "FPU&DSP"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP"
- `physical_page_start`: 127
- `physical_page_end`: 131
- `printed_page_start`: "127"
- `printed_page_end`: "131"
- `keywords`: ["2.20", "DSP", "FPU", "Demos", "Examples"]
- `anchor`: "FPU&DSP"

### SEC-02-20-01-DESCRIPTION
- `number`: "2.20.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `physical_page_start`: 127
- `physical_page_end`: 130
- `printed_page_start`: "127"
- `printed_page_end`: "130"
- `keywords`: ["2.20.1", "DSP", "FPU", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-20-02-PREREQUISITES
- `number`: "2.20.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.2 Prerequisites"
- `physical_page_start`: 130
- `physical_page_end`: 130
- `printed_page_start`: "130"
- `printed_page_end`: "130"
- `keywords`: ["2.20.2", "DSP", "FPU", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-20-03-MCU-PORTS
- `number`: "2.20.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.3 MCU Ports"
- `physical_page_start`: 130
- `physical_page_end`: 130
- `printed_page_start`: "130"
- `printed_page_end`: "130"
- `keywords`: ["2.20.3", "MCU", "DSP", "FPU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-20-04-STEPS-TO-RUN
- `number`: "2.20.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run"
- `physical_page_start`: 130
- `physical_page_end`: 131
- `printed_page_start`: "130"
- `printed_page_end`: "131"
- `keywords`: ["2.20.4", "DSP", "FPU", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-20-04-01-FOR-FC-IDE
- `number`: "2.20.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.1 For FC_IDE"
- `physical_page_start`: 130
- `physical_page_end`: 130
- `printed_page_start`: "130"
- `printed_page_end`: "130"
- `keywords`: ["2.20.4.1", "FC_IDE", "DSP", "FPU", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-20-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.20.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 130
- `physical_page_end`: 130
- `printed_page_start`: "130"
- `printed_page_end`: "130"
- `keywords`: ["2.20.4.2", "IAR", "DSP", "FPU", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-20-04-03-FOR-KEIL
- `number`: "2.20.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `physical_page_start`: 130
- `physical_page_end`: 131
- `printed_page_start`: "130"
- `printed_page_end`: "131"
- `keywords`: ["2.20.4.3", "DSP", "FPU", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-21-FREERTOS
- `number`: "2.21"
- `title`: "FreeRTOS"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS"
- `physical_page_start`: 131
- `physical_page_end`: 132
- `printed_page_start`: "131"
- `printed_page_end`: "132"
- `keywords`: ["2.21", "FreeRTOS", "Demos", "Examples"]
- `anchor`: "FreeRTOS"

### SEC-02-21-01-DESCRIPTION
- `number`: "2.21.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.1 Description"
- `physical_page_start`: 131
- `physical_page_end`: 131
- `printed_page_start`: "131"
- `printed_page_end`: "131"
- `keywords`: ["2.21.1", "FreeRTOS", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-21-02-PREREQUISITES
- `number`: "2.21.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.2 Prerequisites"
- `physical_page_start`: 131
- `physical_page_end`: 132
- `printed_page_start`: "131"
- `printed_page_end`: "132"
- `keywords`: ["2.21.2", "FreeRTOS", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-21-03-MCU-PORTS
- `number`: "2.21.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.3 MCU Ports"
- `physical_page_start`: 132
- `physical_page_end`: 132
- `printed_page_start`: "132"
- `printed_page_end`: "132"
- `keywords`: ["2.21.3", "MCU", "FreeRTOS", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-21-04-STEPS-TO-RUN
- `number`: "2.21.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run"
- `physical_page_start`: 132
- `physical_page_end`: 132
- `printed_page_start`: "132"
- `printed_page_end`: "132"
- `keywords`: ["2.21.4", "FreeRTOS", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-21-04-01-FOR-FC-IDE
- `number`: "2.21.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.1 For FC_IDE"
- `physical_page_start`: 132
- `physical_page_end`: 132
- `printed_page_start`: "132"
- `printed_page_end`: "132"
- `keywords`: ["2.21.4.1", "FC_IDE", "FreeRTOS", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-21-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.21.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 132
- `physical_page_end`: 132
- `printed_page_start`: "132"
- `printed_page_end`: "132"
- `keywords`: ["2.21.4.2", "IAR", "FreeRTOS", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-21-04-03-FOR-KEIL
- `number`: "2.21.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.3 For Keil"
- `physical_page_start`: 132
- `physical_page_end`: 132
- `printed_page_start`: "132"
- `printed_page_end`: "132"
- `keywords`: ["2.21.4.3", "FreeRTOS", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-22-FREQM
- `number`: "2.22"
- `title`: "FREQM"
- `path`: "Chapter 2 Examples and Demos / 2.22 FREQM"
- `physical_page_start`: 132
- `physical_page_end`: 133
- `printed_page_start`: "132"
- `printed_page_end`: "133"
- `keywords`: ["2.22", "FREQM", "Demos", "Examples"]
- `anchor`: "FREQM"

### SEC-02-22-01-DESCRIPTION
- `number`: "2.22.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.22 FREQM / 2.22.1 Description"
- `physical_page_start`: 132
- `physical_page_end`: 132
- `printed_page_start`: "132"
- `printed_page_end`: "132"
- `keywords`: ["2.22.1", "FREQM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-22-02-PREREQUISITES
- `number`: "2.22.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.22 FREQM / 2.22.2 Prerequisites"
- `physical_page_start`: 132
- `physical_page_end`: 133
- `printed_page_start`: "132"
- `printed_page_end`: "133"
- `keywords`: ["2.22.2", "FREQM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-22-03-MCU-PORTS
- `number`: "2.22.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.22 FREQM / 2.22.3 MCU Ports"
- `physical_page_start`: 133
- `physical_page_end`: 133
- `printed_page_start`: "133"
- `printed_page_end`: "133"
- `keywords`: ["2.22.3", "MCU", "FREQM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-22-04-STEPS-TO-RUN
- `number`: "2.22.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.22 FREQM / 2.22.4 Steps to Run"
- `physical_page_start`: 133
- `physical_page_end`: 133
- `printed_page_start`: "133"
- `printed_page_end`: "133"
- `keywords`: ["2.22.4", "FREQM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-23-FS26
- `number`: "2.23"
- `title`: "FS26"
- `path`: "Chapter 2 Examples and Demos / 2.23 FS26"
- `physical_page_start`: 133
- `physical_page_end`: 134
- `printed_page_start`: "133"
- `printed_page_end`: "134"
- `keywords`: ["2.23", "FS26", "Demos", "Examples"]
- `anchor`: "FS26"

### SEC-02-23-01-DESCRIPTION
- `number`: "2.23.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.1 Description"
- `physical_page_start`: 133
- `physical_page_end`: 133
- `printed_page_start`: "133"
- `printed_page_end`: "133"
- `keywords`: ["2.23.1", "Description", "Demos", "Examples", "FS26"]
- `anchor`: "Description"

### SEC-02-23-02-PREREQUISITES
- `number`: "2.23.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.2 Prerequisites"
- `physical_page_start`: 133
- `physical_page_end`: 133
- `printed_page_start`: "133"
- `printed_page_end`: "133"
- `keywords`: ["2.23.2", "Prerequisites", "Demos", "Examples", "FS26"]
- `anchor`: "Prerequisites"

### SEC-02-23-03-MCU-PORTS
- `number`: "2.23.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports"
- `physical_page_start`: 133
- `physical_page_end`: 134
- `printed_page_start`: "133"
- `printed_page_end`: "134"
- `keywords`: ["2.23.3", "MCU", "Ports", "Demos", "Examples", "FS26"]
- `anchor`: "MCU Ports"

### SEC-02-23-04-STEPS-TO-RUN
- `number`: "2.23.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"
- `physical_page_start`: 134
- `physical_page_end`: 134
- `printed_page_start`: "134"
- `printed_page_end`: "134"
- `keywords`: ["2.23.4", "Run", "Steps", "Demos", "Examples", "FS26"]
- `anchor`: "Steps to Run"

### SEC-02-24-FTU
- `number`: "2.24"
- `title`: "FTU"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU"
- `physical_page_start`: 134
- `physical_page_end`: 140
- `printed_page_start`: "134"
- `printed_page_end`: "140"
- `keywords`: ["2.24", "FTU", "Demos", "Examples"]
- `anchor`: "FTU"

### SEC-02-24-01-INPUTCAPTURE
- `number`: "2.24.1"
- `title`: "InputCapture"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.1 InputCapture"
- `physical_page_start`: 135
- `physical_page_end`: 135
- `printed_page_start`: "135"
- `printed_page_end`: "135"
- `keywords`: ["2.24.1", "FTU", "InputCapture", "Demos", "Examples"]
- `anchor`: "InputCapture"

### SEC-02-24-01-01-DESCRIPTION
- `number`: "2.24.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.1 InputCapture / 2.24.1.1 Description"
- `physical_page_start`: 135
- `physical_page_end`: 135
- `printed_page_start`: "135"
- `printed_page_end`: "135"
- `keywords`: ["2.24.1.1", "FTU", "Description", "Demos", "Examples", "InputCapture"]
- `anchor`: "Description"

### SEC-02-24-01-02-PREREQUISITES
- `number`: "2.24.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.1 InputCapture / 2.24.1.2 Prerequisites"
- `physical_page_start`: 135
- `physical_page_end`: 135
- `printed_page_start`: "135"
- `printed_page_end`: "135"
- `keywords`: ["2.24.1.2", "FTU", "Prerequisites", "Demos", "Examples", "InputCapture"]
- `anchor`: "Prerequisites"

### SEC-02-24-01-03-MCU-PORTS
- `number`: "2.24.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.1 InputCapture / 2.24.1.3 MCU Ports"
- `physical_page_start`: 135
- `physical_page_end`: 135
- `printed_page_start`: "135"
- `printed_page_end`: "135"
- `keywords`: ["2.24.1.3", "MCU", "FTU", "Ports", "Demos", "Examples", "InputCapture"]
- `anchor`: "MCU Ports"

### SEC-02-24-01-04-STEPS-TO-RUN
- `number`: "2.24.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.1 InputCapture / 2.24.1.4 Steps to Run"
- `physical_page_start`: 135
- `physical_page_end`: 135
- `printed_page_start`: "135"
- `printed_page_end`: "135"
- `keywords`: ["2.24.1.4", "FTU", "Run", "Steps", "Demos", "Examples", "InputCapture"]
- `anchor`: "Steps to Run"

### SEC-02-24-02-TIMECOUNTER
- `number`: "2.24.2"
- `title`: "TimeCounter"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter"
- `physical_page_start`: 135
- `physical_page_end`: 137
- `printed_page_start`: "135"
- `printed_page_end`: "137"
- `keywords`: ["2.24.2", "FTU", "TimeCounter", "Demos", "Examples"]
- `anchor`: "TimeCounter"

### SEC-02-24-02-01-DESCRIPTION
- `number`: "2.24.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.1 Description"
- `physical_page_start`: 135
- `physical_page_end`: 136
- `printed_page_start`: "135"
- `printed_page_end`: "136"
- `keywords`: ["2.24.2.1", "FTU", "Description", "Demos", "Examples", "TimeCounter"]
- `anchor`: "Description"

### SEC-02-24-02-02-PREREQUISITES
- `number`: "2.24.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.2 Prerequisites"
- `physical_page_start`: 136
- `physical_page_end`: 136
- `printed_page_start`: "136"
- `printed_page_end`: "136"
- `keywords`: ["2.24.2.2", "FTU", "Prerequisites", "Demos", "Examples", "TimeCounter"]
- `anchor`: "Prerequisites"

### SEC-02-24-02-03-MCU-PORTS
- `number`: "2.24.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.3 MCU Ports"
- `physical_page_start`: 136
- `physical_page_end`: 136
- `printed_page_start`: "136"
- `printed_page_end`: "136"
- `keywords`: ["2.24.2.3", "MCU", "FTU", "Ports", "Demos", "Examples", "TimeCounter"]
- `anchor`: "MCU Ports"

### SEC-02-24-02-04-STEPS-TO-RUN
- `number`: "2.24.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run"
- `physical_page_start`: 136
- `physical_page_end`: 137
- `printed_page_start`: "136"
- `printed_page_end`: "137"
- `keywords`: ["2.24.2.4", "FTU", "Run", "Steps", "Demos", "Examples", "TimeCounter"]
- `anchor`: "Steps to Run"

### SEC-02-24-03-OUTPUTCOMPARE
- `number`: "2.24.3"
- `title`: "OutputCompare"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare"
- `physical_page_start`: 137
- `physical_page_end`: 138
- `printed_page_start`: "137"
- `printed_page_end`: "138"
- `keywords`: ["2.24.3", "FTU", "OutputCompare", "Demos", "Examples"]
- `anchor`: "OutputCompare"

### SEC-02-24-03-01-DESCRIPTION
- `number`: "2.24.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.1 Description"
- `physical_page_start`: 137
- `physical_page_end`: 137
- `printed_page_start`: "137"
- `printed_page_end`: "137"
- `keywords`: ["2.24.3.1", "FTU", "Description", "Demos", "Examples", "OutputCompare"]
- `anchor`: "Description"

### SEC-02-24-03-02-PREREQUISITES
- `number`: "2.24.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.2 Prerequisites"
- `physical_page_start`: 137
- `physical_page_end`: 137
- `printed_page_start`: "137"
- `printed_page_end`: "137"
- `keywords`: ["2.24.3.2", "FTU", "Prerequisites", "Demos", "Examples", "OutputCompare"]
- `anchor`: "Prerequisites"

### SEC-02-24-03-03-MCU-PORTS
- `number`: "2.24.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.3 MCU Ports"
- `physical_page_start`: 137
- `physical_page_end`: 137
- `printed_page_start`: "137"
- `printed_page_end`: "137"
- `keywords`: ["2.24.3.3", "MCU", "FTU", "Ports", "Demos", "Examples", "OutputCompare"]
- `anchor`: "MCU Ports"

### SEC-02-24-03-04-STEPS-TO-RUN
- `number`: "2.24.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run"
- `physical_page_start`: 137
- `physical_page_end`: 138
- `printed_page_start`: "137"
- `printed_page_end`: "138"
- `keywords`: ["2.24.3.4", "FTU", "Run", "Steps", "Demos", "Examples", "OutputCompare"]
- `anchor`: "Steps to Run"

### SEC-02-24-04-PWM
- `number`: "2.24.4"
- `title`: "PWM"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM"
- `physical_page_start`: 138
- `physical_page_end`: 139
- `printed_page_start`: "138"
- `printed_page_end`: "139"
- `keywords`: ["2.24.4", "PWM", "FTU", "Demos", "Examples"]
- `anchor`: "PWM"

### SEC-02-24-04-01-DESCRIPTION
- `number`: "2.24.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.1 Description"
- `physical_page_start`: 138
- `physical_page_end`: 138
- `printed_page_start`: "138"
- `printed_page_end`: "138"
- `keywords`: ["2.24.4.1", "FTU", "PWM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-24-04-02-PREREQUISITES
- `number`: "2.24.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.2 Prerequisites"
- `physical_page_start`: 138
- `physical_page_end`: 138
- `printed_page_start`: "138"
- `printed_page_end`: "138"
- `keywords`: ["2.24.4.2", "FTU", "PWM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-24-04-03-MCU-PORTS
- `number`: "2.24.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.3 MCU Ports"
- `physical_page_start`: 138
- `physical_page_end`: 139
- `printed_page_start`: "138"
- `printed_page_end`: "139"
- `keywords`: ["2.24.4.3", "MCU", "FTU", "PWM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-24-04-04-STEPS-TO-RUN
- `number`: "2.24.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.4 Steps to Run"
- `physical_page_start`: 139
- `physical_page_end`: 139
- `printed_page_start`: "139"
- `printed_page_end`: "139"
- `keywords`: ["2.24.4.4", "FTU", "PWM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-24-05-QUADRATUREDECODER
- `number`: "2.24.5"
- `title`: "QuadratureDecoder"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder"
- `physical_page_start`: 139
- `physical_page_end`: 140
- `printed_page_start`: "139"
- `printed_page_end`: "140"
- `keywords`: ["2.24.5", "FTU", "QuadratureDecoder", "Demos", "Examples"]
- `anchor`: "QuadratureDecoder"

### SEC-02-24-05-01-DESCRIPTION
- `number`: "2.24.5.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.1 Description"
- `physical_page_start`: 139
- `physical_page_end`: 139
- `printed_page_start`: "139"
- `printed_page_end`: "139"
- `keywords`: ["2.24.5.1", "FTU", "Description", "Demos", "Examples", "QuadratureDecoder"]
- `anchor`: "Description"

### SEC-02-24-05-02-PREREQUISITES
- `number`: "2.24.5.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"
- `physical_page_start`: 139
- `physical_page_end`: 140
- `printed_page_start`: "139"
- `printed_page_end`: "140"
- `keywords`: ["2.24.5.2", "FTU", "Prerequisites", "Demos", "Examples", "QuadratureDecoder"]
- `anchor`: "Prerequisites"

### SEC-02-24-05-03-MCU-PORTS
- `number`: "2.24.5.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.3 MCU Ports"
- `physical_page_start`: 140
- `physical_page_end`: 140
- `printed_page_start`: "140"
- `printed_page_end`: "140"
- `keywords`: ["2.24.5.3", "MCU", "FTU", "Ports", "Demos", "Examples", "QuadratureDecoder"]
- `anchor`: "MCU Ports"

### SEC-02-24-05-04-STEPS-TO-RUN
- `number`: "2.24.5.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.4 Steps to Run"
- `physical_page_start`: 140
- `physical_page_end`: 140
- `printed_page_start`: "140"
- `printed_page_end`: "140"
- `keywords`: ["2.24.5.4", "FTU", "Run", "Steps", "Demos", "Examples", "QuadratureDecoder"]
- `anchor`: "Steps to Run"

### SEC-02-25-GPIO
- `number`: "2.25"
- `title`: "GPIO"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO"
- `physical_page_start`: 140
- `physical_page_end`: 144
- `printed_page_start`: "140"
- `printed_page_end`: "144"
- `keywords`: ["2.25", "GPIO", "Demos", "Examples"]
- `anchor`: "GPIO"

### SEC-02-25-01-GPIO-TOGGLE
- `number`: "2.25.1"
- `title`: "GPIO_Toggle"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle"
- `physical_page_start`: 140
- `physical_page_end`: 142
- `printed_page_start`: "140"
- `printed_page_end`: "142"
- `keywords`: ["2.25.1", "GPIO_Toggle", "GPIO", "Demos", "Examples"]
- `anchor`: "GPIO_Toggle"

### SEC-02-25-01-01-DESCRIPTION
- `number`: "2.25.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"
- `physical_page_start`: 140
- `physical_page_end`: 141
- `printed_page_start`: "140"
- `printed_page_end`: "141"
- `keywords`: ["2.25.1.1", "GPIO", "GPIO_Toggle", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-25-01-02-PREREQUISITES
- `number`: "2.25.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.2 Prerequisites"
- `physical_page_start`: 141
- `physical_page_end`: 141
- `printed_page_start`: "141"
- `printed_page_end`: "141"
- `keywords`: ["2.25.1.2", "GPIO", "GPIO_Toggle", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-25-01-03-MCU-PORTS
- `number`: "2.25.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.3 MCU Ports"
- `physical_page_start`: 141
- `physical_page_end`: 141
- `printed_page_start`: "141"
- `printed_page_end`: "141"
- `keywords`: ["2.25.1.3", "MCU", "GPIO", "GPIO_Toggle", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-25-01-04-STEPS-TO-RUN
- `number`: "2.25.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run"
- `physical_page_start`: 141
- `physical_page_end`: 142
- `printed_page_start`: "141"
- `printed_page_end`: "142"
- `keywords`: ["2.25.1.4", "GPIO", "GPIO_Toggle", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-25-01-04-01-FOR-FC-IDE
- `number`: "2.25.1.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.1 For FC_IDE"
- `physical_page_start`: 141
- `physical_page_end`: 141
- `printed_page_start`: "141"
- `printed_page_end`: "141"
- `keywords`: ["2.25.1.4.1", "FC_IDE", "GPIO", "GPIO_Toggle", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-25-01-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.25.1.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 141
- `physical_page_end`: 141
- `printed_page_start`: "141"
- `printed_page_end`: "141"
- `keywords`: ["2.25.1.4.2", "IAR", "GPIO", "GPIO_Toggle", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-25-01-04-03-FOR-KEIL
- `number`: "2.25.1.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil"
- `physical_page_start`: 141
- `physical_page_end`: 142
- `printed_page_start`: "141"
- `printed_page_end`: "142"
- `keywords`: ["2.25.1.4.3", "GPIO", "GPIO_Toggle", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-25-02-GPIO-EDGEDETECT
- `number`: "2.25.2"
- `title`: "GPIO_EdgeDetect"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect"
- `physical_page_start`: 142
- `physical_page_end`: 143
- `printed_page_start`: "142"
- `printed_page_end`: "143"
- `keywords`: ["2.25.2", "GPIO_EdgeDetect", "GPIO", "Demos", "Examples"]
- `anchor`: "GPIO_EdgeDetect"

### SEC-02-25-02-01-DESCRIPTION
- `number`: "2.25.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.1 Description"
- `physical_page_start`: 142
- `physical_page_end`: 142
- `printed_page_start`: "142"
- `printed_page_end`: "142"
- `keywords`: ["2.25.2.1", "GPIO", "GPIO_EdgeDetect", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-25-02-02-PREREQUISITES
- `number`: "2.25.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.2 Prerequisites"
- `physical_page_start`: 142
- `physical_page_end`: 142
- `printed_page_start`: "142"
- `printed_page_end`: "142"
- `keywords`: ["2.25.2.2", "GPIO", "GPIO_EdgeDetect", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-25-02-03-MCU-PORTS
- `number`: "2.25.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.3 MCU Ports"
- `physical_page_start`: 142
- `physical_page_end`: 142
- `printed_page_start`: "142"
- `printed_page_end`: "142"
- `keywords`: ["2.25.2.3", "MCU", "GPIO", "GPIO_EdgeDetect", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-25-02-04-STEPS-TO-RUN
- `number`: "2.25.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run"
- `physical_page_start`: 142
- `physical_page_end`: 143
- `printed_page_start`: "142"
- `printed_page_end`: "143"
- `keywords`: ["2.25.2.4", "GPIO", "GPIO_EdgeDetect", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-25-02-04-01-FOR-FC-IDE
- `number`: "2.25.2.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE"
- `physical_page_start`: 142
- `physical_page_end`: 143
- `printed_page_start`: "142"
- `printed_page_end`: "143"
- `keywords`: ["2.25.2.4.1", "FC_IDE", "GPIO", "GPIO_EdgeDetect", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-25-02-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.25.2.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 143
- `physical_page_end`: 143
- `printed_page_start`: "143"
- `printed_page_end`: "143"
- `keywords`: ["2.25.2.4.2", "IAR", "GPIO", "GPIO_EdgeDetect", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-25-02-04-03-FOR-KEIL
- `number`: "2.25.2.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.3 For Keil"
- `physical_page_start`: 143
- `physical_page_end`: 143
- `printed_page_start`: "143"
- `printed_page_end`: "143"
- `keywords`: ["2.25.2.4.3", "GPIO", "GPIO_EdgeDetect", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-25-03-GPIO-DIGITALFILTER
- `number`: "2.25.3"
- `title`: "GPIO_DigitalFilter"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter"
- `physical_page_start`: 143
- `physical_page_end`: 144
- `printed_page_start`: "143"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3", "GPIO_DigitalFilter", "GPIO", "Demos", "Examples"]
- `anchor`: "GPIO_DigitalFilter"

### SEC-02-25-03-01-DESCRIPTION
- `number`: "2.25.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.1 Description"
- `physical_page_start`: 143
- `physical_page_end`: 143
- `printed_page_start`: "143"
- `printed_page_end`: "143"
- `keywords`: ["2.25.3.1", "GPIO", "GPIO_DigitalFilter", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-25-03-02-PREREQUISITES
- `number`: "2.25.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.2 Prerequisites"
- `physical_page_start`: 143
- `physical_page_end`: 144
- `printed_page_start`: "143"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3.2", "GPIO", "GPIO_DigitalFilter", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-25-03-03-MCU-PORTS
- `number`: "2.25.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.3 MCU Ports"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3.3", "MCU", "GPIO", "GPIO_DigitalFilter", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-25-03-04-STEPS-TO-RUN
- `number`: "2.25.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3.4", "GPIO", "GPIO_DigitalFilter", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-25-03-04-01-FOR-FC-IDE
- `number`: "2.25.3.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.1 For FC_IDE"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3.4.1", "FC_IDE", "GPIO", "GPIO_DigitalFilter", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-25-03-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.25.3.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3.4.2", "IAR", "GPIO", "GPIO_DigitalFilter", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-25-03-04-03-FOR-KEIL
- `number`: "2.25.3.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.25.3.4.3", "GPIO", "GPIO_DigitalFilter", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-26-HRPWM
- `number`: "2.26"
- `title`: "HRPWM"
- `path`: "Chapter 2 Examples and Demos / 2.26 HRPWM"
- `physical_page_start`: 144
- `physical_page_end`: 145
- `printed_page_start`: "144"
- `printed_page_end`: "145"
- `keywords`: ["2.26", "HRPWM", "Demos", "Examples"]
- `anchor`: "HRPWM"

### SEC-02-26-01-DESCRIPTION
- `number`: "2.26.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.1 Description"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.26.1", "HRPWM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-26-02-PREREQUISITES
- `number`: "2.26.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.2 Prerequisites"
- `physical_page_start`: 144
- `physical_page_end`: 144
- `printed_page_start`: "144"
- `printed_page_end`: "144"
- `keywords`: ["2.26.2", "HRPWM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-26-03-MCU-PORTS
- `number`: "2.26.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.3 MCU Ports"
- `physical_page_start`: 144
- `physical_page_end`: 145
- `printed_page_start`: "144"
- `printed_page_end`: "145"
- `keywords`: ["2.26.3", "MCU", "HRPWM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-26-04-STEPS-TO-RUN
- `number`: "2.26.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.4 Steps to Run"
- `physical_page_start`: 145
- `physical_page_end`: 145
- `printed_page_start`: "145"
- `printed_page_end`: "145"
- `keywords`: ["2.26.4", "HRPWM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-27-HSADC
- `number`: "2.27"
- `title`: "HSADC"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC"
- `physical_page_start`: 145
- `physical_page_end`: 153
- `printed_page_start`: "145"
- `printed_page_end`: "153"
- `keywords`: ["2.27", "HSADC", "Demos", "Examples"]
- `anchor`: "HSADC"

### SEC-02-27-01-HSADC-SINGLE
- `number`: "2.27.1"
- `title`: "HSADC_Single"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single"
- `physical_page_start`: 147
- `physical_page_end`: 149
- `printed_page_start`: "147"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1", "HSADC_Single", "HSADC", "Demos", "Examples"]
- `anchor`: "HSADC_Single"

### SEC-02-27-01-01-DESCRIPTION
- `number`: "2.27.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `physical_page_start`: 147
- `physical_page_end`: 149
- `printed_page_start`: "147"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.1", "HSADC", "HSADC_Single", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-27-01-02-PREREQUISITES
- `number`: "2.27.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.2 Prerequisites"
- `physical_page_start`: 149
- `physical_page_end`: 149
- `printed_page_start`: "149"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.2", "HSADC", "HSADC_Single", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-27-01-03-MCU-PORTS
- `number`: "2.27.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.3 MCU Ports"
- `physical_page_start`: 149
- `physical_page_end`: 149
- `printed_page_start`: "149"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.3", "MCU", "HSADC", "HSADC_Single", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-27-01-04-STEPS-TO-RUN
- `number`: "2.27.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run"
- `physical_page_start`: 149
- `physical_page_end`: 149
- `printed_page_start`: "149"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.4", "HSADC", "HSADC_Single", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-27-01-04-01-FOR-FC-IDE
- `number`: "2.27.1.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.1 For FC_IDE"
- `physical_page_start`: 149
- `physical_page_end`: 149
- `printed_page_start`: "149"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.4.1", "FC_IDE", "HSADC", "HSADC_Single", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-27-01-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.27.1.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 149
- `physical_page_end`: 149
- `printed_page_start`: "149"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.4.2", "IAR", "HSADC", "HSADC_Single", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-27-01-04-03-FOR-KEIL
- `number`: "2.27.1.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"
- `physical_page_start`: 149
- `physical_page_end`: 149
- `printed_page_start`: "149"
- `printed_page_end`: "149"
- `keywords`: ["2.27.1.4.3", "HSADC", "HSADC_Single", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-27-02-HSADC-SEQUENCE-GROUP
- `number`: "2.27.2"
- `title`: "HSADC_Sequence_Group"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group"
- `physical_page_start`: 149
- `physical_page_end`: 151
- `printed_page_start`: "149"
- `printed_page_end`: "151"
- `keywords`: ["2.27.2", "HSADC_Sequence_Group", "HSADC", "Demos", "Examples"]
- `anchor`: "HSADC_Sequence_Group"

### SEC-02-27-02-01-PREREQUISITES
- `number`: "2.27.2.1"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.1 Prerequisites"
- `physical_page_start`: 150
- `physical_page_end`: 150
- `printed_page_start`: "150"
- `printed_page_end`: "150"
- `keywords`: ["2.27.2.1", "HSADC", "HSADC_Sequence_Group", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-27-02-02-MCU-PORTS
- `number`: "2.27.2.2"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.2 MCU Ports"
- `physical_page_start`: 150
- `physical_page_end`: 150
- `printed_page_start`: "150"
- `printed_page_end`: "150"
- `keywords`: ["2.27.2.2", "MCU", "HSADC", "HSADC_Sequence_Group", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-27-02-03-STEPS-TO-RUN
- `number`: "2.27.2.3"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run"
- `physical_page_start`: 150
- `physical_page_end`: 151
- `printed_page_start`: "150"
- `printed_page_end`: "151"
- `keywords`: ["2.27.2.3", "HSADC", "HSADC_Sequence_Group", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-27-03-HSADC-SINGLE-INTERNAL-TRIGGER
- `number`: "2.27.3"
- `title`: "HSADC_Single_Internal_Trigger"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.3 HSADC_Single_Internal_Trigger"
- `physical_page_start`: 151
- `physical_page_end`: 151
- `printed_page_start`: "151"
- `printed_page_end`: "151"
- `keywords`: ["2.27.3", "HSADC_Single_Internal_Trigger", "HSADC", "Demos", "Examples"]
- `anchor`: "HSADC_Single_Internal_Trigger"

### SEC-02-27-04-HSADC-FAST-COMPARE
- `number`: "2.27.4"
- `title`: "HSADC_Fast_Compare"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare"
- `physical_page_start`: 151
- `physical_page_end`: 153
- `printed_page_start`: "151"
- `printed_page_end`: "153"
- `keywords`: ["2.27.4", "HSADC_Fast_Compare", "HSADC", "Demos", "Examples"]
- `anchor`: "HSADC_Fast_Compare"

### SEC-02-27-04-01-PREREQUISITES
- `number`: "2.27.4.1"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.1 Prerequisites"
- `physical_page_start`: 152
- `physical_page_end`: 152
- `printed_page_start`: "152"
- `printed_page_end`: "152"
- `keywords`: ["2.27.4.1", "HSADC", "HSADC_Fast_Compare", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-27-04-02-MCU-PORTS
- `number`: "2.27.4.2"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.2 MCU Ports"
- `physical_page_start`: 152
- `physical_page_end`: 153
- `printed_page_start`: "152"
- `printed_page_end`: "153"
- `keywords`: ["2.27.4.2", "MCU", "HSADC", "HSADC_Fast_Compare", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-27-04-03-STEPS-TO-RUN
- `number`: "2.27.4.3"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.3 Steps to Run"
- `physical_page_start`: 153
- `physical_page_end`: 153
- `printed_page_start`: "153"
- `printed_page_end`: "153"
- `keywords`: ["2.27.4.3", "HSADC", "HSADC_Fast_Compare", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-28-HSM
- `number`: "2.28"
- `title`: "HSM"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM"
- `physical_page_start`: 153
- `physical_page_end`: 155
- `printed_page_start`: "153"
- `printed_page_end`: "155"
- `keywords`: ["2.28", "HSM", "Demos", "Examples"]
- `anchor`: "HSM"

### SEC-02-28-01-DESCRIPTION
- `number`: "2.28.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.1 Description"
- `physical_page_start`: 153
- `physical_page_end`: 154
- `printed_page_start`: "153"
- `printed_page_end`: "154"
- `keywords`: ["2.28.1", "HSM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-28-02-PREREQUISITES
- `number`: "2.28.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.2 Prerequisites"
- `physical_page_start`: 154
- `physical_page_end`: 154
- `printed_page_start`: "154"
- `printed_page_end`: "154"
- `keywords`: ["2.28.2", "HSM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-28-03-MCU-PORTS
- `number`: "2.28.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.3 MCU Ports"
- `physical_page_start`: 154
- `physical_page_end`: 154
- `printed_page_start`: "154"
- `printed_page_end`: "154"
- `keywords`: ["2.28.3", "MCU", "HSM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-28-04-STEPS-TO-RUN
- `number`: "2.28.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run"
- `physical_page_start`: 154
- `physical_page_end`: 155
- `printed_page_start`: "154"
- `printed_page_end`: "155"
- `keywords`: ["2.28.4", "HSM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-28-04-01-01-FOR-FC-IDE
- `number`: "2.28.4.1.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.1 For FC_IDE"
- `physical_page_start`: 154
- `physical_page_end`: 155
- `printed_page_start`: "154"
- `printed_page_end`: "155"
- `keywords`: ["2.28.4.1.1", "FC_IDE", "HSM", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-28-04-01-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.28.4.1.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.2 For IAR Embedded Workbench"
- `physical_page_start`: 155
- `physical_page_end`: 155
- `printed_page_start`: "155"
- `printed_page_end`: "155"
- `keywords`: ["2.28.4.1.2", "IAR", "HSM", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-28-04-01-03-FOR-KEIL
- `number`: "2.28.4.1.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.3 For Keil"
- `physical_page_start`: 155
- `physical_page_end`: 155
- `printed_page_start`: "155"
- `printed_page_end`: "155"
- `keywords`: ["2.28.4.1.3", "HSM", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-29-INTM
- `number`: "2.29"
- `title`: "INTM"
- `path`: "Chapter 2 Examples and Demos / 2.29 INTM"
- `physical_page_start`: 155
- `physical_page_end`: 157
- `printed_page_start`: "155"
- `printed_page_end`: "157"
- `keywords`: ["2.29", "INTM", "Demos", "Examples"]
- `anchor`: "INTM"

### SEC-02-29-01-DESCRIPTION
- `number`: "2.29.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.1 Description"
- `physical_page_start`: 155
- `physical_page_end`: 156
- `printed_page_start`: "155"
- `printed_page_end`: "156"
- `keywords`: ["2.29.1", "INTM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-29-02-PREREQUISITES
- `number`: "2.29.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites"
- `physical_page_start`: 156
- `physical_page_end`: 157
- `printed_page_start`: "156"
- `printed_page_end`: "157"
- `keywords`: ["2.29.2", "INTM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-29-03-MCU-PORTS
- `number`: "2.29.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.3 MCU Ports"
- `physical_page_start`: 157
- `physical_page_end`: 157
- `printed_page_start`: "157"
- `printed_page_end`: "157"
- `keywords`: ["2.29.3", "MCU", "INTM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-29-04-STEPS-TO-RUN
- `number`: "2.29.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.4 Steps to Run"
- `physical_page_start`: 157
- `physical_page_end`: 157
- `printed_page_start`: "157"
- `printed_page_end`: "157"
- `keywords`: ["2.29.4", "INTM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-30-ISM
- `number`: "2.30"
- `title`: "ISM"
- `path`: "Chapter 2 Examples and Demos / 2.30 ISM"
- `physical_page_start`: 157
- `physical_page_end`: 158
- `printed_page_start`: "157"
- `printed_page_end`: "158"
- `keywords`: ["2.30", "ISM", "Demos", "Examples"]
- `anchor`: "ISM"

### SEC-02-30-01-DESCRIPTION
- `number`: "2.30.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.1 Description"
- `physical_page_start`: 157
- `physical_page_end`: 157
- `printed_page_start`: "157"
- `printed_page_end`: "157"
- `keywords`: ["2.30.1", "ISM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-30-02-PREREQUISITES
- `number`: "2.30.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.2 Prerequisites"
- `physical_page_start`: 157
- `physical_page_end`: 157
- `printed_page_start`: "157"
- `printed_page_end`: "157"
- `keywords`: ["2.30.2", "ISM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-30-03-MCU-PORTS
- `number`: "2.30.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.3 MCU Ports"
- `physical_page_start`: 157
- `physical_page_end`: 157
- `printed_page_start`: "157"
- `printed_page_end`: "157"
- `keywords`: ["2.30.3", "MCU", "ISM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-30-04-STEPS-TO-RUN
- `number`: "2.30.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.4 Steps to Run"
- `physical_page_start`: 157
- `physical_page_end`: 158
- `printed_page_start`: "157"
- `printed_page_end`: "158"
- `keywords`: ["2.30.4", "ISM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-31-LIN
- `number`: "2.31"
- `title`: "LIN"
- `path`: "Chapter 2 Examples and Demos / 2.31 LIN"
- `physical_page_start`: 158
- `physical_page_end`: 161
- `printed_page_start`: "158"
- `printed_page_end`: "161"
- `keywords`: ["2.31", "LIN", "Demos", "Examples"]
- `anchor`: "LIN"

### SEC-02-31-01-DESCRIPTION
- `number`: "2.31.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.1 Description"
- `physical_page_start`: 158
- `physical_page_end`: 158
- `printed_page_start`: "158"
- `printed_page_end`: "158"
- `keywords`: ["2.31.1", "LIN", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-31-02-PREREQUISITES
- `number`: "2.31.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites"
- `physical_page_start`: 158
- `physical_page_end`: 159
- `printed_page_start`: "158"
- `printed_page_end`: "159"
- `keywords`: ["2.31.2", "LIN", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-31-03-MCU-PORTS
- `number`: "2.31.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.3 MCU Ports"
- `physical_page_start`: 159
- `physical_page_end`: 159
- `printed_page_start`: "159"
- `printed_page_end`: "159"
- `keywords`: ["2.31.3", "MCU", "LIN", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-31-04-STEPS-TO-RUN
- `number`: "2.31.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run"
- `physical_page_start`: 159
- `physical_page_end`: 161
- `printed_page_start`: "159"
- `printed_page_end`: "161"
- `keywords`: ["2.31.4", "LIN", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-32-LU
- `number`: "2.32"
- `title`: "LU"
- `path`: "Chapter 2 Examples and Demos / 2.32 LU"
- `physical_page_start`: 161
- `physical_page_end`: 162
- `printed_page_start`: "161"
- `printed_page_end`: "162"
- `keywords`: ["2.32", "Demos", "Examples"]
- `anchor`: "LU"

### SEC-02-32-01-DESCRIPTION
- `number`: "2.32.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.1 Description"
- `physical_page_start`: 161
- `physical_page_end`: 161
- `printed_page_start`: "161"
- `printed_page_end`: "161"
- `keywords`: ["2.32.1", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-32-02-PREREQUISITES
- `number`: "2.32.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.2 Prerequisites"
- `physical_page_start`: 161
- `physical_page_end`: 161
- `printed_page_start`: "161"
- `printed_page_end`: "161"
- `keywords`: ["2.32.2", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-32-03-MCU-PORTS
- `number`: "2.32.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.3 MCU Ports"
- `physical_page_start`: 161
- `physical_page_end`: 161
- `printed_page_start`: "161"
- `printed_page_end`: "161"
- `keywords`: ["2.32.3", "MCU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-32-04-STEPS-TO-RUN
- `number`: "2.32.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.4 Steps to Run"
- `physical_page_start`: 161
- `physical_page_end`: 162
- `printed_page_start`: "161"
- `printed_page_end`: "162"
- `keywords`: ["2.32.4", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-33-MAILBOX
- `number`: "2.33"
- `title`: "Mailbox"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox"
- `physical_page_start`: 162
- `physical_page_end`: 165
- `printed_page_start`: "162"
- `printed_page_end`: "165"
- `keywords`: ["2.33", "Mailbox", "Demos", "Examples"]
- `anchor`: "Mailbox"

### SEC-02-33-01-DESCRIPTION
- `number`: "2.33.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.1 Description"
- `physical_page_start`: 162
- `physical_page_end`: 162
- `printed_page_start`: "162"
- `printed_page_end`: "162"
- `keywords`: ["2.33.1", "Description", "Demos", "Examples", "Mailbox"]
- `anchor`: "Description"

### SEC-02-33-02-PREREQUISITES
- `number`: "2.33.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.2 Prerequisites"
- `physical_page_start`: 162
- `physical_page_end`: 162
- `printed_page_start`: "162"
- `printed_page_end`: "162"
- `keywords`: ["2.33.2", "Prerequisites", "Demos", "Examples", "Mailbox"]
- `anchor`: "Prerequisites"

### SEC-02-33-03-MCU-PORTS
- `number`: "2.33.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"
- `physical_page_start`: 162
- `physical_page_end`: 163
- `printed_page_start`: "162"
- `printed_page_end`: "163"
- `keywords`: ["2.33.3", "MCU", "Ports", "Demos", "Examples", "Mailbox"]
- `anchor`: "MCU Ports"

### SEC-02-33-04-STEPS-TO-RUN
- `number`: "2.33.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run"
- `physical_page_start`: 163
- `physical_page_end`: 165
- `printed_page_start`: "163"
- `printed_page_end`: "165"
- `keywords`: ["2.33.4", "Run", "Steps", "Demos", "Examples", "Mailbox"]
- `anchor`: "Steps to Run"

### SEC-02-33-04-01-FOR-FC-IDE
- `number`: "2.33.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `physical_page_start`: 163
- `physical_page_end`: 165
- `printed_page_start`: "163"
- `printed_page_end`: "165"
- `keywords`: ["2.33.4.1", "FC_IDE", "Demos", "Examples", "Mailbox", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-33-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.33.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 165
- `physical_page_end`: 165
- `printed_page_start`: "165"
- `printed_page_end`: "165"
- `keywords`: ["2.33.4.2", "IAR", "Embedded", "Workbench", "Demos", "Examples", "Mailbox", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-33-04-03-FOR-KEIL
- `number`: "2.33.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.3 For Keil"
- `physical_page_start`: 165
- `physical_page_end`: 165
- `printed_page_start`: "165"
- `printed_page_end`: "165"
- `keywords`: ["2.33.4.3", "Keil", "Demos", "Examples", "Mailbox", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-34-MAM
- `number`: "2.34"
- `title`: "MAM"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM"
- `physical_page_start`: 165
- `physical_page_end`: 167
- `printed_page_start`: "165"
- `printed_page_end`: "167"
- `keywords`: ["2.34", "MAM", "Demos", "Examples"]
- `anchor`: "MAM"

### SEC-02-34-01-DESCRIPTION
- `number`: "2.34.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.1 Description"
- `physical_page_start`: 165
- `physical_page_end`: 165
- `printed_page_start`: "165"
- `printed_page_end`: "165"
- `keywords`: ["2.34.1", "MAM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-34-02-PREREQUISITES
- `number`: "2.34.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.2 Prerequisites"
- `physical_page_start`: 165
- `physical_page_end`: 166
- `printed_page_start`: "165"
- `printed_page_end`: "166"
- `keywords`: ["2.34.2", "MAM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-34-03-MCU-PORTS
- `number`: "2.34.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.3 MCU Ports"
- `physical_page_start`: 166
- `physical_page_end`: 166
- `printed_page_start`: "166"
- `printed_page_end`: "166"
- `keywords`: ["2.34.3", "MCU", "MAM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-34-04-STEPS-TO-RUN
- `number`: "2.34.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run"
- `physical_page_start`: 166
- `physical_page_end`: 167
- `printed_page_start`: "166"
- `printed_page_end`: "167"
- `keywords`: ["2.34.4", "MAM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-34-04-01-FOR-FC-IDE
- `number`: "2.34.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.1 For FC_IDE"
- `physical_page_start`: 166
- `physical_page_end`: 166
- `printed_page_start`: "166"
- `printed_page_end`: "166"
- `keywords`: ["2.34.4.1", "FC_IDE", "MAM", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-34-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.34.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 166
- `physical_page_end`: 166
- `printed_page_start`: "166"
- `printed_page_end`: "166"
- `keywords`: ["2.34.4.2", "IAR", "MAM", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-34-04-03-FOR-KEIL
- `number`: "2.34.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.3 For Keil"
- `physical_page_start`: 166
- `physical_page_end`: 167
- `printed_page_start`: "166"
- `printed_page_end`: "167"
- `keywords`: ["2.34.4.3", "MAM", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-35-MPU
- `number`: "2.35"
- `title`: "MPU"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU"
- `physical_page_start`: 167
- `physical_page_end`: 168
- `printed_page_start`: "167"
- `printed_page_end`: "168"
- `keywords`: ["2.35", "MPU", "Demos", "Examples"]
- `anchor`: "MPU"

### SEC-02-35-01-DESCRIPTION
- `number`: "2.35.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.1 Description"
- `physical_page_start`: 167
- `physical_page_end`: 167
- `printed_page_start`: "167"
- `printed_page_end`: "167"
- `keywords`: ["2.35.1", "MPU", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-35-02-PREREQUISITES
- `number`: "2.35.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.2 Prerequisites"
- `physical_page_start`: 167
- `physical_page_end`: 167
- `printed_page_start`: "167"
- `printed_page_end`: "167"
- `keywords`: ["2.35.2", "MPU", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-35-03-MCU-PORTS
- `number`: "2.35.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.3 MCU Ports"
- `physical_page_start`: 167
- `physical_page_end`: 167
- `printed_page_start`: "167"
- `printed_page_end`: "167"
- `keywords`: ["2.35.3", "MCU", "MPU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-35-04-STEPS-TO-RUN
- `number`: "2.35.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run"
- `physical_page_start`: 167
- `physical_page_end`: 168
- `printed_page_start`: "167"
- `printed_page_end`: "168"
- `keywords`: ["2.35.4", "MPU", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-35-04-01-FOR-FC-IDE
- `number`: "2.35.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.1 For FC_IDE"
- `physical_page_start`: 167
- `physical_page_end`: 168
- `printed_page_start`: "167"
- `printed_page_end`: "168"
- `keywords`: ["2.35.4.1", "FC_IDE", "MPU", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-35-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.35.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 168
- `physical_page_end`: 168
- `printed_page_start`: "168"
- `printed_page_end`: "168"
- `keywords`: ["2.35.4.2", "IAR", "MPU", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-35-04-03-FOR-KEIL
- `number`: "2.35.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.3 For Keil"
- `physical_page_start`: 168
- `physical_page_end`: 168
- `printed_page_start`: "168"
- `printed_page_end`: "168"
- `keywords`: ["2.35.4.3", "MPU", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-36-MSC
- `number`: "2.36"
- `title`: "MSC"
- `path`: "Chapter 2 Examples and Demos / 2.36 MSC"
- `physical_page_start`: 168
- `physical_page_end`: 171
- `printed_page_start`: "168"
- `printed_page_end`: "171"
- `keywords`: ["2.36", "MSC", "Demos", "Examples"]
- `anchor`: "MSC"

### SEC-02-36-01-DESCRIPTION
- `number`: "2.36.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.1 Description"
- `physical_page_start`: 170
- `physical_page_end`: 170
- `printed_page_start`: "170"
- `printed_page_end`: "170"
- `keywords`: ["2.36.1", "MSC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-36-02-PREREQUISITES
- `number`: "2.36.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.2 Prerequisites"
- `physical_page_start`: 170
- `physical_page_end`: 170
- `printed_page_start`: "170"
- `printed_page_end`: "170"
- `keywords`: ["2.36.2", "MSC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-36-03-MCU-PORTS
- `number`: "2.36.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.3 MCU Ports"
- `physical_page_start`: 170
- `physical_page_end`: 170
- `printed_page_start`: "170"
- `printed_page_end`: "170"
- `keywords`: ["2.36.3", "MCU", "MSC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-36-04-STEPS-TO-RUN
- `number`: "2.36.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"
- `physical_page_start`: 170
- `physical_page_end`: 171
- `printed_page_start`: "170"
- `printed_page_end`: "171"
- `keywords`: ["2.36.4", "MSC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-37-MULTICORE
- `number`: "2.37"
- `title`: "Multicore"
- `path`: "Chapter 2 Examples and Demos / 2.37 Multicore"
- `physical_page_start`: 171
- `physical_page_end`: 172
- `printed_page_start`: "171"
- `printed_page_end`: "172"
- `keywords`: ["2.37", "Multicore", "Demos", "Examples"]
- `anchor`: "Multicore"

### SEC-02-37-01-DESCRIPTION
- `number`: "2.37.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.1 Description"
- `physical_page_start`: 171
- `physical_page_end`: 171
- `printed_page_start`: "171"
- `printed_page_end`: "171"
- `keywords`: ["2.37.1", "Description", "Demos", "Examples", "Multicore"]
- `anchor`: "Description"

### SEC-02-37-02-PREREQUISITES
- `number`: "2.37.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.2 Prerequisites"
- `physical_page_start`: 171
- `physical_page_end`: 171
- `printed_page_start`: "171"
- `printed_page_end`: "171"
- `keywords`: ["2.37.2", "Prerequisites", "Demos", "Examples", "Multicore"]
- `anchor`: "Prerequisites"

### SEC-02-37-03-MCU-PORTS
- `number`: "2.37.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"
- `physical_page_start`: 171
- `physical_page_end`: 172
- `printed_page_start`: "171"
- `printed_page_end`: "172"
- `keywords`: ["2.37.3", "MCU", "Ports", "Demos", "Examples", "Multicore"]
- `anchor`: "MCU Ports"

### SEC-02-37-04-STEPS-TO-RUN
- `number`: "2.37.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.4 Steps to Run"
- `physical_page_start`: 172
- `physical_page_end`: 172
- `printed_page_start`: "172"
- `printed_page_end`: "172"
- `keywords`: ["2.37.4", "Run", "Steps", "Demos", "Examples", "Multicore"]
- `anchor`: "Steps to Run"

### SEC-02-38-OTA
- `number`: "2.38"
- `title`: "OTA"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA"
- `physical_page_start`: 172
- `physical_page_end`: 180
- `printed_page_start`: "172"
- `printed_page_end`: "180"
- `keywords`: ["2.38", "OTA", "Demos", "Examples"]
- `anchor`: "OTA"

### SEC-02-38-01-OTA-REGISTERMODE
- `number`: "2.38.1"
- `title`: "OTA_RegisterMode"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode"
- `physical_page_start`: 172
- `physical_page_end`: 176
- `printed_page_start`: "172"
- `printed_page_end`: "176"
- `keywords`: ["2.38.1", "OTA_RegisterMode", "OTA", "Demos", "Examples"]
- `anchor`: "OTA_RegisterMode"

### SEC-02-38-01-01-DESCRIPTION
- `number`: "2.38.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description"
- `physical_page_start`: 172
- `physical_page_end`: 173
- `printed_page_start`: "172"
- `printed_page_end`: "173"
- `keywords`: ["2.38.1.1", "OTA", "OTA_RegisterMode", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-38-01-02-CODE-LOGIC
- `number`: "2.38.1.2"
- `title`: "Code Logic"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.2 Code Logic"
- `physical_page_start`: 173
- `physical_page_end`: 174
- `printed_page_start`: "173"
- `printed_page_end`: "174"
- `keywords`: ["2.38.1.2", "OTA", "OTA_RegisterMode", "Code", "Logic", "Demos", "Examples"]
- `anchor`: "Code Logic"

### SEC-02-38-01-03-PREREQUISITES
- `number`: "2.38.1.3"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.3 Prerequisites"
- `physical_page_start`: 174
- `physical_page_end`: 174
- `printed_page_start`: "174"
- `printed_page_end`: "174"
- `keywords`: ["2.38.1.3", "OTA", "OTA_RegisterMode", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-38-01-04-MCU-PORTS
- `number`: "2.38.1.4"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.4 MCU Ports"
- `physical_page_start`: 174
- `physical_page_end`: 174
- `printed_page_start`: "174"
- `printed_page_end`: "174"
- `keywords`: ["2.38.1.4", "MCU", "OTA", "OTA_RegisterMode", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-38-01-05-STEPS-TO-RUN
- `number`: "2.38.1.5"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.5 Steps to Run"
- `physical_page_start`: 174
- `physical_page_end`: 174
- `printed_page_start`: "174"
- `printed_page_end`: "174"
- `keywords`: ["2.38.1.5", "OTA", "OTA_RegisterMode", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-38-01-06-COMPILATION-AND-PROGRAMMING-STEPS
- `number`: "2.38.1.6"
- `title`: "Compilation and Programming Steps"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `physical_page_start`: 174
- `physical_page_end`: 176
- `printed_page_start`: "174"
- `printed_page_end`: "176"
- `keywords`: ["2.38.1.6", "OTA", "OTA_RegisterMode", "Compilation", "Programming", "Steps", "Demos", "Examples"]
- `anchor`: "Compilation and Programming Steps"

### SEC-02-38-01-07-NOTES
- `number`: "2.38.1.7"
- `title`: "Notes"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.7 Notes"
- `physical_page_start`: 176
- `physical_page_end`: 176
- `printed_page_start`: "176"
- `printed_page_end`: "176"
- `keywords`: ["2.38.1.7", "OTA", "OTA_RegisterMode", "Notes", "Demos", "Examples"]
- `anchor`: "Notes"

### SEC-02-38-02-OTA-NVRMODE
- `number`: "2.38.2"
- `title`: "OTA_NvrMode"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode"
- `physical_page_start`: 176
- `physical_page_end`: 180
- `printed_page_start`: "176"
- `printed_page_end`: "180"
- `keywords`: ["2.38.2", "OTA_NvrMode", "OTA", "Demos", "Examples"]
- `anchor`: "OTA_NvrMode"

### SEC-02-38-02-01-DESCRIPTION
- `number`: "2.38.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.1 Description"
- `physical_page_start`: 176
- `physical_page_end`: 177
- `printed_page_start`: "176"
- `printed_page_end`: "177"
- `keywords`: ["2.38.2.1", "OTA", "OTA_NvrMode", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-38-02-02-CODE-LOGIC
- `number`: "2.38.2.2"
- `title`: "Code Logic"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.2 Code Logic"
- `physical_page_start`: 177
- `physical_page_end`: 177
- `printed_page_start`: "177"
- `printed_page_end`: "177"
- `keywords`: ["2.38.2.2", "OTA", "OTA_NvrMode", "Code", "Logic", "Demos", "Examples"]
- `anchor`: "Code Logic"

### SEC-02-38-02-03-PREREQUISITES
- `number`: "2.38.2.3"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.3 Prerequisites"
- `physical_page_start`: 177
- `physical_page_end`: 178
- `printed_page_start`: "177"
- `printed_page_end`: "178"
- `keywords`: ["2.38.2.3", "OTA", "OTA_NvrMode", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-38-02-04-MCU-PORTS
- `number`: "2.38.2.4"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.4 MCU Ports"
- `physical_page_start`: 178
- `physical_page_end`: 178
- `printed_page_start`: "178"
- `printed_page_end`: "178"
- `keywords`: ["2.38.2.4", "MCU", "OTA", "OTA_NvrMode", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-38-02-05-STEPS-TO-RUN
- `number`: "2.38.2.5"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.5 Steps to Run"
- `physical_page_start`: 178
- `physical_page_end`: 178
- `printed_page_start`: "178"
- `printed_page_end`: "178"
- `keywords`: ["2.38.2.5", "OTA", "OTA_NvrMode", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-38-02-06-COMPILATION-AND-PROGRAMMING-STEPS
- `number`: "2.38.2.6"
- `title`: "Compilation and Programming Steps"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `physical_page_start`: 178
- `physical_page_end`: 180
- `printed_page_start`: "178"
- `printed_page_end`: "180"
- `keywords`: ["2.38.2.6", "OTA", "OTA_NvrMode", "Compilation", "Programming", "Steps", "Demos", "Examples"]
- `anchor`: "Compilation and Programming Steps"

### SEC-02-38-02-07-NOTES
- `number`: "2.38.2.7"
- `title`: "Notes"
- `path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.7 Notes"
- `physical_page_start`: 180
- `physical_page_end`: 180
- `printed_page_start`: "180"
- `printed_page_end`: "180"
- `keywords`: ["2.38.2.7", "OTA", "OTA_NvrMode", "Notes", "Demos", "Examples"]
- `anchor`: "Notes"

### SEC-02-39-OVERLAY
- `number`: "2.39"
- `title`: "Overlay"
- `path`: "Chapter 2 Examples and Demos / 2.39 Overlay"
- `physical_page_start`: 180
- `physical_page_end`: 183
- `printed_page_start`: "180"
- `printed_page_end`: "183"
- `keywords`: ["2.39", "Overlay", "Demos", "Examples"]
- `anchor`: "Overlay"

### SEC-02-39-01-DESCRIPTION
- `number`: "2.39.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.1 Description"
- `physical_page_start`: 180
- `physical_page_end`: 181
- `printed_page_start`: "180"
- `printed_page_end`: "181"
- `keywords`: ["2.39.1", "Description", "Demos", "Examples", "Overlay"]
- `anchor`: "Description"

### SEC-02-39-02-PREREQUISITES
- `number`: "2.39.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.2 Prerequisites"
- `physical_page_start`: 181
- `physical_page_end`: 181
- `printed_page_start`: "181"
- `printed_page_end`: "181"
- `keywords`: ["2.39.2", "Prerequisites", "Demos", "Examples", "Overlay"]
- `anchor`: "Prerequisites"

### SEC-02-39-03-MCU-PORTS
- `number`: "2.39.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.3 MCU Ports"
- `physical_page_start`: 181
- `physical_page_end`: 181
- `printed_page_start`: "181"
- `printed_page_end`: "181"
- `keywords`: ["2.39.3", "MCU", "Ports", "Demos", "Examples", "Overlay"]
- `anchor`: "MCU Ports"

### SEC-02-39-04-STEPS-TO-RUN
- `number`: "2.39.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `physical_page_start`: 181
- `physical_page_end`: 183
- `printed_page_start`: "181"
- `printed_page_end`: "183"
- `keywords`: ["2.39.4", "Run", "Steps", "Demos", "Examples", "Overlay"]
- `anchor`: "Steps to Run"

### SEC-02-40-PMC
- `number`: "2.40"
- `title`: "PMC"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC"
- `physical_page_start`: 183
- `physical_page_end`: 184
- `printed_page_start`: "183"
- `printed_page_end`: "184"
- `keywords`: ["2.40", "PMC", "Demos", "Examples"]
- `anchor`: "PMC"

### SEC-02-40-01-DESCRIPTION
- `number`: "2.40.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"
- `physical_page_start`: 183
- `physical_page_end`: 184
- `printed_page_start`: "183"
- `printed_page_end`: "184"
- `keywords`: ["2.40.1", "PMC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-40-02-PREREQUISITES
- `number`: "2.40.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.2 Prerequisites"
- `physical_page_start`: 184
- `physical_page_end`: 184
- `printed_page_start`: "184"
- `printed_page_end`: "184"
- `keywords`: ["2.40.2", "PMC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-40-03-MCU-PORTS
- `number`: "2.40.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.3 MCU Ports"
- `physical_page_start`: 184
- `physical_page_end`: 184
- `printed_page_start`: "184"
- `printed_page_end`: "184"
- `keywords`: ["2.40.3", "MCU", "PMC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-40-04-STEPS-TO-RUN
- `number`: "2.40.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run"
- `physical_page_start`: 184
- `physical_page_end`: 184
- `printed_page_start`: "184"
- `printed_page_end`: "184"
- `keywords`: ["2.40.4", "PMC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-40-04-01-FOR-FC-IDE
- `number`: "2.40.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.1 For FC_IDE"
- `physical_page_start`: 184
- `physical_page_end`: 184
- `printed_page_start`: "184"
- `printed_page_end`: "184"
- `keywords`: ["2.40.4.1", "FC_IDE", "PMC", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-40-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.40.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 184
- `physical_page_end`: 184
- `printed_page_start`: "184"
- `printed_page_end`: "184"
- `keywords`: ["2.40.4.2", "IAR", "PMC", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-40-04-03-FOR-KEIL
- `number`: "2.40.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"
- `physical_page_start`: 184
- `physical_page_end`: 184
- `printed_page_start`: "184"
- `printed_page_end`: "184"
- `keywords`: ["2.40.4.3", "PMC", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-41-PTIMER
- `number`: "2.41"
- `title`: "PTIMER"
- `path`: "Chapter 2 Examples and Demos / 2.41 PTIMER"
- `physical_page_start`: 184
- `physical_page_end`: 186
- `printed_page_start`: "184"
- `printed_page_end`: "186"
- `keywords`: ["2.41", "PTIMER", "Demos", "Examples"]
- `anchor`: "PTIMER"

### SEC-02-41-01-DESCRIPTION
- `number`: "2.41.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.1 Description"
- `physical_page_start`: 184
- `physical_page_end`: 185
- `printed_page_start`: "184"
- `printed_page_end`: "185"
- `keywords`: ["2.41.1", "PTIMER", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-41-02-PREREQUISITES
- `number`: "2.41.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.2 Prerequisites"
- `physical_page_start`: 185
- `physical_page_end`: 185
- `printed_page_start`: "185"
- `printed_page_end`: "185"
- `keywords`: ["2.41.2", "PTIMER", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-41-03-MCU-PORTS
- `number`: "2.41.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `physical_page_start`: 185
- `physical_page_end`: 186
- `printed_page_start`: "185"
- `printed_page_end`: "186"
- `keywords`: ["2.41.3", "MCU", "PTIMER", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-41-04-STEPS-TO-RUN
- `number`: "2.41.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.4 Steps to Run"
- `physical_page_start`: 186
- `physical_page_end`: 186
- `printed_page_start`: "186"
- `printed_page_end`: "186"
- `keywords`: ["2.41.4", "PTIMER", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-QDT
- `number`: "2.42"
- `title`: "QDT"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT"
- `physical_page_start`: 186
- `physical_page_end`: 193
- `printed_page_start`: "186"
- `printed_page_end`: "193"
- `keywords`: ["2.42", "QDT", "Demos", "Examples"]
- `anchor`: "QDT"

### SEC-02-42-01-QDT-IC-DEMO
- `number`: "2.42.1"
- `title`: "QDT_IC_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo"
- `physical_page_start`: 186
- `physical_page_end`: 187
- `printed_page_start`: "186"
- `printed_page_end`: "187"
- `keywords`: ["2.42.1", "QDT_IC_Demo", "QDT", "Demos", "Examples"]
- `anchor`: "QDT_IC_Demo"

### SEC-02-42-01-01-DESCRIPTION
- `number`: "2.42.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.1 Description"
- `physical_page_start`: 186
- `physical_page_end`: 186
- `printed_page_start`: "186"
- `printed_page_end`: "186"
- `keywords`: ["2.42.1.1", "QDT", "QDT_IC_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-42-01-02-PREREQUISITES
- `number`: "2.42.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.2 Prerequisites"
- `physical_page_start`: 186
- `physical_page_end`: 186
- `printed_page_start`: "186"
- `printed_page_end`: "186"
- `keywords`: ["2.42.1.2", "QDT", "QDT_IC_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-42-01-03-MCU-PORTS
- `number`: "2.42.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.3 MCU Ports"
- `physical_page_start`: 186
- `physical_page_end`: 186
- `printed_page_start`: "186"
- `printed_page_end`: "186"
- `keywords`: ["2.42.1.3", "MCU", "QDT", "QDT_IC_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-42-01-04-STEPS-TO-RUN
- `number`: "2.42.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run"
- `physical_page_start`: 186
- `physical_page_end`: 187
- `printed_page_start`: "186"
- `printed_page_end`: "187"
- `keywords`: ["2.42.1.4", "QDT", "QDT_IC_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-01-04-01-FOR-FC-IDE
- `number`: "2.42.1.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE"
- `physical_page_start`: 186
- `physical_page_end`: 187
- `printed_page_start`: "186"
- `printed_page_end`: "187"
- `keywords`: ["2.42.1.4.1", "FC_IDE", "QDT", "QDT_IC_Demo", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-42-01-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.42.1.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 187
- `physical_page_end`: 187
- `printed_page_start`: "187"
- `printed_page_end`: "187"
- `keywords`: ["2.42.1.4.2", "IAR", "QDT", "QDT_IC_Demo", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-42-01-04-03-FOR-KEIL
- `number`: "2.42.1.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil"
- `physical_page_start`: 187
- `physical_page_end`: 187
- `printed_page_start`: "187"
- `printed_page_end`: "187"
- `keywords`: ["2.42.1.4.3", "QDT", "QDT_IC_Demo", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-42-02-QDT-ICDM-DEMO
- `number`: "2.42.2"
- `title`: "QDT_ICDM_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo"
- `physical_page_start`: 187
- `physical_page_end`: 188
- `printed_page_start`: "187"
- `printed_page_end`: "188"
- `keywords`: ["2.42.2", "QDT_ICDM_Demo", "QDT", "Demos", "Examples"]
- `anchor`: "QDT_ICDM_Demo"

### SEC-02-42-02-01-DESCRIPTION
- `number`: "2.42.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.1 Description"
- `physical_page_start`: 187
- `physical_page_end`: 187
- `printed_page_start`: "187"
- `printed_page_end`: "187"
- `keywords`: ["2.42.2.1", "QDT", "QDT_ICDM_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-42-02-02-PREREQUISITES
- `number`: "2.42.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.2 Prerequisites"
- `physical_page_start`: 187
- `physical_page_end`: 187
- `printed_page_start`: "187"
- `printed_page_end`: "187"
- `keywords`: ["2.42.2.2", "QDT", "QDT_ICDM_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-42-02-03-MCU-PORTS
- `number`: "2.42.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.3 MCU Ports"
- `physical_page_start`: 187
- `physical_page_end`: 188
- `printed_page_start`: "187"
- `printed_page_end`: "188"
- `keywords`: ["2.42.2.3", "MCU", "QDT", "QDT_ICDM_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-42-02-04-STEPS-TO-RUN
- `number`: "2.42.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run"
- `physical_page_start`: 188
- `physical_page_end`: 188
- `printed_page_start`: "188"
- `printed_page_end`: "188"
- `keywords`: ["2.42.2.4", "QDT", "QDT_ICDM_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-02-04-01-FOR-FC-IDE
- `number`: "2.42.2.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.1 For FC_IDE"
- `physical_page_start`: 188
- `physical_page_end`: 188
- `printed_page_start`: "188"
- `printed_page_end`: "188"
- `keywords`: ["2.42.2.4.1", "FC_IDE", "QDT", "QDT_ICDM_Demo", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-42-02-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.42.2.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 188
- `physical_page_end`: 188
- `printed_page_start`: "188"
- `printed_page_end`: "188"
- `keywords`: ["2.42.2.4.2", "IAR", "QDT", "QDT_ICDM_Demo", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-42-02-04-03-FOR-KEIL
- `number`: "2.42.2.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil"
- `physical_page_start`: 188
- `physical_page_end`: 188
- `printed_page_start`: "188"
- `printed_page_end`: "188"
- `keywords`: ["2.42.2.4.3", "QDT", "QDT_ICDM_Demo", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-42-03-QDT-ICENM-DEMO
- `number`: "2.42.3"
- `title`: "QDT_ICENM_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo"
- `physical_page_start`: 188
- `physical_page_end`: 189
- `printed_page_start`: "188"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3", "QDT_ICENM_Demo", "QDT", "Demos", "Examples"]
- `anchor`: "QDT_ICENM_Demo"

### SEC-02-42-03-01-DESCRIPTION
- `number`: "2.42.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.1 Description"
- `physical_page_start`: 188
- `physical_page_end`: 188
- `printed_page_start`: "188"
- `printed_page_end`: "188"
- `keywords`: ["2.42.3.1", "QDT", "QDT_ICENM_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-42-03-02-PREREQUISITES
- `number`: "2.42.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.2 Prerequisites"
- `physical_page_start`: 188
- `physical_page_end`: 189
- `printed_page_start`: "188"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3.2", "QDT", "QDT_ICENM_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-42-03-03-MCU-PORTS
- `number`: "2.42.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.3 MCU Ports"
- `physical_page_start`: 189
- `physical_page_end`: 189
- `printed_page_start`: "189"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3.3", "MCU", "QDT", "QDT_ICENM_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-42-03-04-STEPS-TO-RUN
- `number`: "2.42.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run"
- `physical_page_start`: 189
- `physical_page_end`: 189
- `printed_page_start`: "189"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3.4", "QDT", "QDT_ICENM_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-03-04-01-FOR-FC-IDE
- `number`: "2.42.3.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.1 For FC_IDE"
- `physical_page_start`: 189
- `physical_page_end`: 189
- `printed_page_start`: "189"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3.4.1", "FC_IDE", "QDT", "QDT_ICENM_Demo", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-42-03-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.42.3.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 189
- `physical_page_end`: 189
- `printed_page_start`: "189"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3.4.2", "IAR", "QDT", "QDT_ICENM_Demo", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-42-03-04-03-FOR-KEIL
- `number`: "2.42.3.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil"
- `physical_page_start`: 189
- `physical_page_end`: 189
- `printed_page_start`: "189"
- `printed_page_end`: "189"
- `keywords`: ["2.42.3.4.3", "QDT", "QDT_ICENM_Demo", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-42-04-QDT-ICEXPENM-DEMO
- `number`: "2.42.4"
- `title`: "QDT_ICEXPENM_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo"
- `physical_page_start`: 189
- `physical_page_end`: 191
- `printed_page_start`: "189"
- `printed_page_end`: "191"
- `keywords`: ["2.42.4", "QDT_ICEXPENM_Demo", "QDT", "Demos", "Examples"]
- `anchor`: "QDT_ICEXPENM_Demo"

### SEC-02-42-04-01-DESCRIPTION
- `number`: "2.42.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.1 Description"
- `physical_page_start`: 189
- `physical_page_end`: 189
- `printed_page_start`: "189"
- `printed_page_end`: "189"
- `keywords`: ["2.42.4.1", "QDT", "QDT_ICEXPENM_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-42-04-02-PREREQUISITES
- `number`: "2.42.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.2 Prerequisites"
- `physical_page_start`: 189
- `physical_page_end`: 190
- `printed_page_start`: "189"
- `printed_page_end`: "190"
- `keywords`: ["2.42.4.2", "QDT", "QDT_ICEXPENM_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-42-04-03-MCU-PORTS
- `number`: "2.42.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.3 MCU Ports"
- `physical_page_start`: 190
- `physical_page_end`: 190
- `printed_page_start`: "190"
- `printed_page_end`: "190"
- `keywords`: ["2.42.4.3", "MCU", "QDT", "QDT_ICEXPENM_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-42-04-04-STEPS-TO-RUN
- `number`: "2.42.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run"
- `physical_page_start`: 190
- `physical_page_end`: 191
- `printed_page_start`: "190"
- `printed_page_end`: "191"
- `keywords`: ["2.42.4.4", "QDT", "QDT_ICEXPENM_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-04-04-01-FOR-FC-IDE
- `number`: "2.42.4.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.1 For FC_IDE"
- `physical_page_start`: 190
- `physical_page_end`: 190
- `printed_page_start`: "190"
- `printed_page_end`: "190"
- `keywords`: ["2.42.4.4.1", "FC_IDE", "QDT", "QDT_ICEXPENM_Demo", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-42-04-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.42.4.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 190
- `physical_page_end`: 190
- `printed_page_start`: "190"
- `printed_page_end`: "190"
- `keywords`: ["2.42.4.4.2", "IAR", "QDT", "QDT_ICEXPENM_Demo", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-42-04-04-03-FOR-KEIL
- `number`: "2.42.4.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil"
- `physical_page_start`: 190
- `physical_page_end`: 191
- `printed_page_start`: "190"
- `printed_page_end`: "191"
- `keywords`: ["2.42.4.4.3", "QDT", "QDT_ICEXPENM_Demo", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-42-05-QDT-ICPM-DEMO
- `number`: "2.42.5"
- `title`: "QDT_ICPM_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo"
- `physical_page_start`: 191
- `physical_page_end`: 192
- `printed_page_start`: "191"
- `printed_page_end`: "192"
- `keywords`: ["2.42.5", "QDT_ICPM_Demo", "QDT", "Demos", "Examples"]
- `anchor`: "QDT_ICPM_Demo"

### SEC-02-42-05-01-DESCRIPTION
- `number`: "2.42.5.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.1 Description"
- `physical_page_start`: 191
- `physical_page_end`: 191
- `printed_page_start`: "191"
- `printed_page_end`: "191"
- `keywords`: ["2.42.5.1", "QDT", "QDT_ICPM_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-42-05-02-PREREQUISITES
- `number`: "2.42.5.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.2 Prerequisites"
- `physical_page_start`: 191
- `physical_page_end`: 191
- `printed_page_start`: "191"
- `printed_page_end`: "191"
- `keywords`: ["2.42.5.2", "QDT", "QDT_ICPM_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-42-05-03-MCU-PORTS
- `number`: "2.42.5.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.3 MCU Ports"
- `physical_page_start`: 191
- `physical_page_end`: 191
- `printed_page_start`: "191"
- `printed_page_end`: "191"
- `keywords`: ["2.42.5.3", "MCU", "QDT", "QDT_ICPM_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-42-05-04-STEPS-TO-RUN
- `number`: "2.42.5.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run"
- `physical_page_start`: 191
- `physical_page_end`: 192
- `printed_page_start`: "191"
- `printed_page_end`: "192"
- `keywords`: ["2.42.5.4", "QDT", "QDT_ICPM_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-05-04-01-FOR-FC-IDE
- `number`: "2.42.5.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.1 For FC_IDE"
- `physical_page_start`: 191
- `physical_page_end`: 191
- `printed_page_start`: "191"
- `printed_page_end`: "191"
- `keywords`: ["2.42.5.4.1", "FC_IDE", "QDT", "QDT_ICPM_Demo", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-42-05-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.42.5.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 191
- `physical_page_end`: 192
- `printed_page_start`: "191"
- `printed_page_end`: "192"
- `keywords`: ["2.42.5.4.2", "IAR", "QDT", "QDT_ICPM_Demo", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-42-05-04-03-FOR-KEIL
- `number`: "2.42.5.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.3 For Keil"
- `physical_page_start`: 192
- `physical_page_end`: 192
- `printed_page_start`: "192"
- `printed_page_end`: "192"
- `keywords`: ["2.42.5.4.3", "QDT", "QDT_ICPM_Demo", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-42-06-QDT-QUAD-DEMO
- `number`: "2.42.6"
- `title`: "QDT_QUAD_Demo"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo"
- `physical_page_start`: 192
- `physical_page_end`: 193
- `printed_page_start`: "192"
- `printed_page_end`: "193"
- `keywords`: ["2.42.6", "QDT_QUAD_Demo", "QDT", "Demos", "Examples"]
- `anchor`: "QDT_QUAD_Demo"

### SEC-02-42-06-01-DESCRIPTION
- `number`: "2.42.6.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.1 Description"
- `physical_page_start`: 192
- `physical_page_end`: 192
- `printed_page_start`: "192"
- `printed_page_end`: "192"
- `keywords`: ["2.42.6.1", "QDT", "QDT_QUAD_Demo", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-42-06-02-PREREQUISITES
- `number`: "2.42.6.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.2 Prerequisites"
- `physical_page_start`: 192
- `physical_page_end`: 192
- `printed_page_start`: "192"
- `printed_page_end`: "192"
- `keywords`: ["2.42.6.2", "QDT", "QDT_QUAD_Demo", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-42-06-03-MCU-PORTS
- `number`: "2.42.6.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.3 MCU Ports"
- `physical_page_start`: 192
- `physical_page_end`: 192
- `printed_page_start`: "192"
- `printed_page_end`: "192"
- `keywords`: ["2.42.6.3", "MCU", "QDT", "QDT_QUAD_Demo", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-42-06-04-STEPS-TO-RUN
- `number`: "2.42.6.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run"
- `physical_page_start`: 192
- `physical_page_end`: 193
- `printed_page_start`: "192"
- `printed_page_end`: "193"
- `keywords`: ["2.42.6.4", "QDT", "QDT_QUAD_Demo", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-42-06-04-01-FOR-FC-IDE
- `number`: "2.42.6.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"
- `physical_page_start`: 192
- `physical_page_end`: 193
- `printed_page_start`: "192"
- `printed_page_end`: "193"
- `keywords`: ["2.42.6.4.1", "FC_IDE", "QDT", "QDT_QUAD_Demo", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-42-06-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.42.6.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 193
- `physical_page_end`: 193
- `printed_page_start`: "193"
- `printed_page_end`: "193"
- `keywords`: ["2.42.6.4.2", "IAR", "QDT", "QDT_QUAD_Demo", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-42-06-04-03-FOR-KEIL
- `number`: "2.42.6.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.3 For Keil"
- `physical_page_start`: 193
- `physical_page_end`: 193
- `printed_page_start`: "193"
- `printed_page_end`: "193"
- `keywords`: ["2.42.6.4.3", "QDT", "QDT_QUAD_Demo", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-43-RGM
- `number`: "2.43"
- `title`: "RGM"
- `path`: "Chapter 2 Examples and Demos / 2.43 RGM"
- `physical_page_start`: 193
- `physical_page_end`: 194
- `printed_page_start`: "193"
- `printed_page_end`: "194"
- `keywords`: ["2.43", "RGM", "Demos", "Examples"]
- `anchor`: "RGM"

### SEC-02-43-01-DESCRIPTION
- `number`: "2.43.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.1 Description"
- `physical_page_start`: 193
- `physical_page_end`: 194
- `printed_page_start`: "193"
- `printed_page_end`: "194"
- `keywords`: ["2.43.1", "RGM", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-43-02-PREREQUISITES
- `number`: "2.43.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.2 Prerequisites"
- `physical_page_start`: 194
- `physical_page_end`: 194
- `printed_page_start`: "194"
- `printed_page_end`: "194"
- `keywords`: ["2.43.2", "RGM", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-43-03-MCU-PORTS
- `number`: "2.43.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.3 MCU Ports"
- `physical_page_start`: 194
- `physical_page_end`: 194
- `printed_page_start`: "194"
- `printed_page_end`: "194"
- `keywords`: ["2.43.3", "MCU", "RGM", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-43-04-STEPS-TO-RUN
- `number`: "2.43.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.4 Steps to Run"
- `physical_page_start`: 194
- `physical_page_end`: 194
- `printed_page_start`: "194"
- `printed_page_end`: "194"
- `keywords`: ["2.43.4", "RGM", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-44-RTC
- `number`: "2.44"
- `title`: "RTC"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC"
- `physical_page_start`: 194
- `physical_page_end`: 201
- `printed_page_start`: "194"
- `printed_page_end`: "201"
- `keywords`: ["2.44", "RTC", "Demos", "Examples"]
- `anchor`: "RTC"

### SEC-02-44-01-RTC-ALARM
- `number`: "2.44.1"
- `title`: "RTC_Alarm"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm"
- `physical_page_start`: 195
- `physical_page_end`: 196
- `printed_page_start`: "195"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1", "RTC_Alarm", "RTC", "Demos", "Examples"]
- `anchor`: "RTC_Alarm"

### SEC-02-44-01-01-DESCRIPTION
- `number`: "2.44.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.1 Description"
- `physical_page_start`: 195
- `physical_page_end`: 195
- `printed_page_start`: "195"
- `printed_page_end`: "195"
- `keywords`: ["2.44.1.1", "RTC", "RTC_Alarm", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-44-01-02-PREREQUISITES
- `number`: "2.44.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites"
- `physical_page_start`: 195
- `physical_page_end`: 196
- `printed_page_start`: "195"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1.2", "RTC", "RTC_Alarm", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-44-01-03-MCU-PORTS
- `number`: "2.44.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.3 MCU Ports"
- `physical_page_start`: 196
- `physical_page_end`: 196
- `printed_page_start`: "196"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1.3", "MCU", "RTC", "RTC_Alarm", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-44-01-04-STEPS-TO-RUN
- `number`: "2.44.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run"
- `physical_page_start`: 196
- `physical_page_end`: 196
- `printed_page_start`: "196"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1.4", "RTC", "RTC_Alarm", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-44-01-04-01-FOR-FC-IDE
- `number`: "2.44.1.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.1 For FC_IDE"
- `physical_page_start`: 196
- `physical_page_end`: 196
- `printed_page_start`: "196"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1.4.1", "FC_IDE", "RTC", "RTC_Alarm", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-44-01-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.44.1.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 196
- `physical_page_end`: 196
- `printed_page_start`: "196"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1.4.2", "IAR", "RTC", "RTC_Alarm", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-44-01-04-03-FOR-KEIL
- `number`: "2.44.1.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.3 For Keil"
- `physical_page_start`: 196
- `physical_page_end`: 196
- `printed_page_start`: "196"
- `printed_page_end`: "196"
- `keywords`: ["2.44.1.4.3", "RTC", "RTC_Alarm", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-44-02-RTC-SECONDINTERRUPT
- `number`: "2.44.2"
- `title`: "RTC_SecondInterrupt"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt"
- `physical_page_start`: 196
- `physical_page_end`: 198
- `printed_page_start`: "196"
- `printed_page_end`: "198"
- `keywords`: ["2.44.2", "RTC_SecondInterrupt", "RTC", "Demos", "Examples"]
- `anchor`: "RTC_SecondInterrupt"

### SEC-02-44-02-01-DESCRIPTION
- `number`: "2.44.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.1 Description"
- `physical_page_start`: 196
- `physical_page_end`: 197
- `printed_page_start`: "196"
- `printed_page_end`: "197"
- `keywords`: ["2.44.2.1", "RTC", "RTC_SecondInterrupt", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-44-02-02-PREREQUISITES
- `number`: "2.44.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.2 Prerequisites"
- `physical_page_start`: 197
- `physical_page_end`: 197
- `printed_page_start`: "197"
- `printed_page_end`: "197"
- `keywords`: ["2.44.2.2", "RTC", "RTC_SecondInterrupt", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-44-02-03-MCU-PORTS
- `number`: "2.44.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.3 MCU Ports"
- `physical_page_start`: 197
- `physical_page_end`: 197
- `printed_page_start`: "197"
- `printed_page_end`: "197"
- `keywords`: ["2.44.2.3", "MCU", "RTC", "RTC_SecondInterrupt", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-44-02-04-STEPS-TO-RUN
- `number`: "2.44.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run"
- `physical_page_start`: 197
- `physical_page_end`: 198
- `printed_page_start`: "197"
- `printed_page_end`: "198"
- `keywords`: ["2.44.2.4", "RTC", "RTC_SecondInterrupt", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-44-02-04-01-FOR-FC-IDE
- `number`: "2.44.2.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.1 For FC_IDE"
- `physical_page_start`: 197
- `physical_page_end`: 197
- `printed_page_start`: "197"
- `printed_page_end`: "197"
- `keywords`: ["2.44.2.4.1", "FC_IDE", "RTC", "RTC_SecondInterrupt", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-44-02-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.44.2.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 197
- `physical_page_end`: 198
- `printed_page_start`: "197"
- `printed_page_end`: "198"
- `keywords`: ["2.44.2.4.2", "IAR", "RTC", "RTC_SecondInterrupt", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-44-02-04-03-FOR-KEIL
- `number`: "2.44.2.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil"
- `physical_page_start`: 198
- `physical_page_end`: 198
- `printed_page_start`: "198"
- `printed_page_end`: "198"
- `keywords`: ["2.44.2.4.3", "RTC", "RTC_SecondInterrupt", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-44-03-RTC-OVERFLOW
- `number`: "2.44.3"
- `title`: "RTC_Overflow"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow"
- `physical_page_start`: 198
- `physical_page_end`: 199
- `printed_page_start`: "198"
- `printed_page_end`: "199"
- `keywords`: ["2.44.3", "RTC_Overflow", "RTC", "Demos", "Examples"]
- `anchor`: "RTC_Overflow"

### SEC-02-44-03-01-DESCRIPTION
- `number`: "2.44.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.1 Description"
- `physical_page_start`: 198
- `physical_page_end`: 198
- `printed_page_start`: "198"
- `printed_page_end`: "198"
- `keywords`: ["2.44.3.1", "RTC", "RTC_Overflow", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-44-03-02-PREREQUISITES
- `number`: "2.44.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.2 Prerequisites"
- `physical_page_start`: 198
- `physical_page_end`: 198
- `printed_page_start`: "198"
- `printed_page_end`: "198"
- `keywords`: ["2.44.3.2", "RTC", "RTC_Overflow", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-44-03-03-MCU-PORTS
- `number`: "2.44.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.3 MCU Ports"
- `physical_page_start`: 198
- `physical_page_end`: 199
- `printed_page_start`: "198"
- `printed_page_end`: "199"
- `keywords`: ["2.44.3.3", "MCU", "RTC", "RTC_Overflow", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-44-03-04-STEPS-TO-RUN
- `number`: "2.44.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.4 Steps to Run"
- `physical_page_start`: 199
- `physical_page_end`: 199
- `printed_page_start`: "199"
- `printed_page_end`: "199"
- `keywords`: ["2.44.3.4", "RTC", "RTC_Overflow", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-44-03-04-01-FOR-FC-IDE
- `number`: "2.44.3.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.4 Steps to Run / 2.44.3.4.1 For FC_IDE"
- `physical_page_start`: 199
- `physical_page_end`: 199
- `printed_page_start`: "199"
- `printed_page_end`: "199"
- `keywords`: ["2.44.3.4.1", "FC_IDE", "RTC", "RTC_Overflow", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-44-03-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.44.3.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.4 Steps to Run / 2.44.3.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 199
- `physical_page_end`: 199
- `printed_page_start`: "199"
- `printed_page_end`: "199"
- `keywords`: ["2.44.3.4.2", "IAR", "RTC", "RTC_Overflow", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-44-03-04-03-FOR-KEIL
- `number`: "2.44.3.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.4 Steps to Run / 2.44.3.4.3 For Keil"
- `physical_page_start`: 199
- `physical_page_end`: 199
- `printed_page_start`: "199"
- `printed_page_end`: "199"
- `keywords`: ["2.44.3.4.3", "RTC", "RTC_Overflow", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-44-04-RTC-SETREADTIME
- `number`: "2.44.4"
- `title`: "RTC_SetReadTime"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime"
- `physical_page_start`: 199
- `physical_page_end`: 201
- `printed_page_start`: "199"
- `printed_page_end`: "201"
- `keywords`: ["2.44.4", "RTC_SetReadTime", "RTC", "Demos", "Examples"]
- `anchor`: "RTC_SetReadTime"

### SEC-02-44-04-01-DESCRIPTION
- `number`: "2.44.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.1 Description"
- `physical_page_start`: 199
- `physical_page_end`: 200
- `printed_page_start`: "199"
- `printed_page_end`: "200"
- `keywords`: ["2.44.4.1", "RTC", "RTC_SetReadTime", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-44-04-02-PREREQUISITES
- `number`: "2.44.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.2 Prerequisites"
- `physical_page_start`: 200
- `physical_page_end`: 200
- `printed_page_start`: "200"
- `printed_page_end`: "200"
- `keywords`: ["2.44.4.2", "RTC", "RTC_SetReadTime", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-44-04-03-MCU-PORTS
- `number`: "2.44.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.3 MCU Ports"
- `physical_page_start`: 200
- `physical_page_end`: 200
- `printed_page_start`: "200"
- `printed_page_end`: "200"
- `keywords`: ["2.44.4.3", "MCU", "RTC", "RTC_SetReadTime", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-44-04-04-STEPS-TO-RUN
- `number`: "2.44.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run"
- `physical_page_start`: 200
- `physical_page_end`: 201
- `printed_page_start`: "200"
- `printed_page_end`: "201"
- `keywords`: ["2.44.4.4", "RTC", "RTC_SetReadTime", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-44-04-04-01-FOR-FC-IDE
- `number`: "2.44.4.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE"
- `physical_page_start`: 200
- `physical_page_end`: 201
- `printed_page_start`: "200"
- `printed_page_end`: "201"
- `keywords`: ["2.44.4.4.1", "FC_IDE", "RTC", "RTC_SetReadTime", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-44-04-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.44.4.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 201
- `physical_page_end`: 201
- `printed_page_start`: "201"
- `printed_page_end`: "201"
- `keywords`: ["2.44.4.4.2", "IAR", "RTC", "RTC_SetReadTime", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-44-04-04-03-FOR-KEIL
- `number`: "2.44.4.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"
- `physical_page_start`: 201
- `physical_page_end`: 201
- `printed_page_start`: "201"
- `printed_page_end`: "201"
- `keywords`: ["2.44.4.4.3", "RTC", "RTC_SetReadTime", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-45-SC6258XQ
- `number`: "2.45"
- `title`: "SC6258XQ"
- `path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ"
- `physical_page_start`: 201
- `physical_page_end`: 203
- `printed_page_start`: "201"
- `printed_page_end`: "203"
- `keywords`: ["2.45", "SC6258XQ", "Demos", "Examples"]
- `anchor`: "SC6258XQ"

### SEC-02-45-01-DESCRIPTION
- `number`: "2.45.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.1 Description"
- `physical_page_start`: 201
- `physical_page_end`: 201
- `printed_page_start`: "201"
- `printed_page_end`: "201"
- `keywords`: ["2.45.1", "Description", "Demos", "Examples", "SC6258XQ"]
- `anchor`: "Description"

### SEC-02-45-02-PREREQUISITES
- `number`: "2.45.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.2 Prerequisites"
- `physical_page_start`: 201
- `physical_page_end`: 201
- `printed_page_start`: "201"
- `printed_page_end`: "201"
- `keywords`: ["2.45.2", "Prerequisites", "Demos", "Examples", "SC6258XQ"]
- `anchor`: "Prerequisites"

### SEC-02-45-03-MCU-PORTS
- `number`: "2.45.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.3 MCU Ports"
- `physical_page_start`: 201
- `physical_page_end`: 201
- `printed_page_start`: "201"
- `printed_page_end`: "201"
- `keywords`: ["2.45.3", "MCU", "Ports", "Demos", "Examples", "SC6258XQ"]
- `anchor`: "MCU Ports"

### SEC-02-45-04-STEPS-TO-RUN
- `number`: "2.45.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run"
- `physical_page_start`: 201
- `physical_page_end`: 203
- `printed_page_start`: "201"
- `printed_page_end`: "203"
- `keywords`: ["2.45.4", "Run", "Steps", "Demos", "Examples", "SC6258XQ"]
- `anchor`: "Steps to Run"

### SEC-02-46-SCST
- `number`: "2.46"
- `title`: "SCST"
- `path`: "Chapter 2 Examples and Demos / 2.46 SCST"
- `physical_page_start`: 203
- `physical_page_end`: 204
- `printed_page_start`: "203"
- `printed_page_end`: "204"
- `keywords`: ["2.46", "SCST", "Demos", "Examples"]
- `anchor`: "SCST"

### SEC-02-46-01-DESCRIPTION
- `number`: "2.46.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.1 Description"
- `physical_page_start`: 203
- `physical_page_end`: 203
- `printed_page_start`: "203"
- `printed_page_end`: "203"
- `keywords`: ["2.46.1", "SCST", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-46-02-PREREQUISITES
- `number`: "2.46.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.2 Prerequisites"
- `physical_page_start`: 203
- `physical_page_end`: 203
- `printed_page_start`: "203"
- `printed_page_end`: "203"
- `keywords`: ["2.46.2", "SCST", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-46-03-MCU-PORTS
- `number`: "2.46.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.3 MCU Ports"
- `physical_page_start`: 203
- `physical_page_end`: 204
- `printed_page_start`: "203"
- `printed_page_end`: "204"
- `keywords`: ["2.46.3", "MCU", "SCST", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-46-04-STEPS-TO-RUN
- `number`: "2.46.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.4 Steps to Run"
- `physical_page_start`: 204
- `physical_page_end`: 204
- `printed_page_start`: "204"
- `printed_page_end`: "204"
- `keywords`: ["2.46.4", "SCST", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-47-SDADC
- `number`: "2.47"
- `title`: "SDADC"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC"
- `physical_page_start`: 204
- `physical_page_end`: 209
- `printed_page_start`: "204"
- `printed_page_end`: "209"
- `keywords`: ["2.47", "SDADC", "Demos", "Examples"]
- `anchor`: "SDADC"

### SEC-02-47-01-SDADC-SINGLE
- `number`: "2.47.1"
- `title`: "SDADC_Single"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single"
- `physical_page_start`: 204
- `physical_page_end`: 206
- `printed_page_start`: "204"
- `printed_page_end`: "206"
- `keywords`: ["2.47.1", "SDADC_Single", "SDADC", "Demos", "Examples"]
- `anchor`: "SDADC_Single"

### SEC-02-47-01-01-DESCRIPTION
- `number`: "2.47.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description"
- `physical_page_start`: 204
- `physical_page_end`: 205
- `printed_page_start`: "204"
- `printed_page_end`: "205"
- `keywords`: ["2.47.1.1", "SDADC", "SDADC_Single", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-47-01-02-PREREQUISITES
- `number`: "2.47.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.2 Prerequisites"
- `physical_page_start`: 205
- `physical_page_end`: 205
- `printed_page_start`: "205"
- `printed_page_end`: "205"
- `keywords`: ["2.47.1.2", "SDADC", "SDADC_Single", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-47-01-03-MCU-PORTS
- `number`: "2.47.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.3 MCU Ports"
- `physical_page_start`: 205
- `physical_page_end`: 205
- `printed_page_start`: "205"
- `printed_page_end`: "205"
- `keywords`: ["2.47.1.3", "MCU", "SDADC", "SDADC_Single", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-47-01-04-STEPS-TO-RUN
- `number`: "2.47.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.4 Steps to Run"
- `physical_page_start`: 205
- `physical_page_end`: 206
- `printed_page_start`: "205"
- `printed_page_end`: "206"
- `keywords`: ["2.47.1.4", "SDADC", "SDADC_Single", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-47-02-SDADC-CONTINOUS
- `number`: "2.47.2"
- `title`: "SDADC_Continous"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous"
- `physical_page_start`: 206
- `physical_page_end`: 207
- `printed_page_start`: "206"
- `printed_page_end`: "207"
- `keywords`: ["2.47.2", "SDADC_Continous", "SDADC", "Demos", "Examples"]
- `anchor`: "SDADC_Continous"

### SEC-02-47-02-01-DESCRIPTION
- `number`: "2.47.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.1 Description"
- `physical_page_start`: 206
- `physical_page_end`: 207
- `printed_page_start`: "206"
- `printed_page_end`: "207"
- `keywords`: ["2.47.2.1", "SDADC", "SDADC_Continous", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-47-02-02-PREREQUISITES
- `number`: "2.47.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.2 Prerequisites"
- `physical_page_start`: 207
- `physical_page_end`: 207
- `printed_page_start`: "207"
- `printed_page_end`: "207"
- `keywords`: ["2.47.2.2", "SDADC", "SDADC_Continous", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-47-02-03-MCU-PORTS
- `number`: "2.47.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.3 MCU Ports"
- `physical_page_start`: 207
- `physical_page_end`: 207
- `printed_page_start`: "207"
- `printed_page_end`: "207"
- `keywords`: ["2.47.2.3", "MCU", "SDADC", "SDADC_Continous", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-47-02-04-STEPS-TO-RUN
- `number`: "2.47.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.4 Steps to Run"
- `physical_page_start`: 207
- `physical_page_end`: 207
- `printed_page_start`: "207"
- `printed_page_end`: "207"
- `keywords`: ["2.47.2.4", "SDADC", "SDADC_Continous", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-47-03-SDADC-CALIBRATION
- `number`: "2.47.3"
- `title`: "SDADC_Calibration"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration"
- `physical_page_start`: 207
- `physical_page_end`: 209
- `printed_page_start`: "207"
- `printed_page_end`: "209"
- `keywords`: ["2.47.3", "SDADC_Calibration", "SDADC", "Demos", "Examples"]
- `anchor`: "SDADC_Calibration"

### SEC-02-47-03-01-DESCRIPTION
- `number`: "2.47.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.1 Description"
- `physical_page_start`: 207
- `physical_page_end`: 208
- `printed_page_start`: "207"
- `printed_page_end`: "208"
- `keywords`: ["2.47.3.1", "SDADC", "SDADC_Calibration", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-47-03-02-PREREQUISITES
- `number`: "2.47.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.2 Prerequisites"
- `physical_page_start`: 208
- `physical_page_end`: 208
- `printed_page_start`: "208"
- `printed_page_end`: "208"
- `keywords`: ["2.47.3.2", "SDADC", "SDADC_Calibration", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-47-03-03-MCU-PORTS
- `number`: "2.47.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.3 MCU Ports"
- `physical_page_start`: 208
- `physical_page_end`: 208
- `printed_page_start`: "208"
- `printed_page_end`: "208"
- `keywords`: ["2.47.3.3", "MCU", "SDADC", "SDADC_Calibration", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-47-03-04-STEPS-TO-RUN
- `number`: "2.47.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `physical_page_start`: 208
- `physical_page_end`: 209
- `printed_page_start`: "208"
- `printed_page_end`: "209"
- `keywords`: ["2.47.3.4", "SDADC", "SDADC_Calibration", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-48-SEC
- `number`: "2.48"
- `title`: "SEC"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC"
- `physical_page_start`: 209
- `physical_page_end`: 210
- `printed_page_start`: "209"
- `printed_page_end`: "210"
- `keywords`: ["2.48", "SEC", "Demos", "Examples"]
- `anchor`: "SEC"

### SEC-02-48-01-DESCRIPTION
- `number`: "2.48.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.1 Description"
- `physical_page_start`: 209
- `physical_page_end`: 209
- `printed_page_start`: "209"
- `printed_page_end`: "209"
- `keywords`: ["2.48.1", "SEC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-48-02-PREREQUISITES
- `number`: "2.48.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.2 Prerequisites"
- `physical_page_start`: 209
- `physical_page_end`: 209
- `printed_page_start`: "209"
- `printed_page_end`: "209"
- `keywords`: ["2.48.2", "SEC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-48-03-MCU-PORTS
- `number`: "2.48.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.3 MCU Ports"
- `physical_page_start`: 209
- `physical_page_end`: 210
- `printed_page_start`: "209"
- `printed_page_end`: "210"
- `keywords`: ["2.48.3", "MCU", "SEC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-48-04-STEPS-TO-RUN
- `number`: "2.48.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run"
- `physical_page_start`: 210
- `physical_page_end`: 210
- `printed_page_start`: "210"
- `printed_page_end`: "210"
- `keywords`: ["2.48.4", "SEC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-48-04-01-FOR-FC-IDE
- `number`: "2.48.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.1 For FC_IDE"
- `physical_page_start`: 210
- `physical_page_end`: 210
- `printed_page_start`: "210"
- `printed_page_end`: "210"
- `keywords`: ["2.48.4.1", "FC_IDE", "SEC", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-48-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.48.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 210
- `physical_page_end`: 210
- `printed_page_start`: "210"
- `printed_page_end`: "210"
- `keywords`: ["2.48.4.2", "IAR", "SEC", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-48-04-03-FOR-KEIL
- `number`: "2.48.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.3 For Keil"
- `physical_page_start`: 210
- `physical_page_end`: 210
- `printed_page_start`: "210"
- `printed_page_end`: "210"
- `keywords`: ["2.48.4.3", "SEC", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-49-SEMA
- `number`: "2.49"
- `title`: "SEMA"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA"
- `physical_page_start`: 210
- `physical_page_end`: 211
- `printed_page_start`: "210"
- `printed_page_end`: "211"
- `keywords`: ["2.49", "SEMA", "Demos", "Examples"]
- `anchor`: "SEMA"

### SEC-02-49-01-DESCRIPTION
- `number`: "2.49.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.1 Description"
- `physical_page_start`: 210
- `physical_page_end`: 210
- `printed_page_start`: "210"
- `printed_page_end`: "210"
- `keywords`: ["2.49.1", "SEMA", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-49-02-PREREQUISITES
- `number`: "2.49.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.2 Prerequisites"
- `physical_page_start`: 210
- `physical_page_end`: 211
- `printed_page_start`: "210"
- `printed_page_end`: "211"
- `keywords`: ["2.49.2", "SEMA", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-49-03-MCU-PORTS
- `number`: "2.49.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.3 MCU Ports"
- `physical_page_start`: 211
- `physical_page_end`: 211
- `printed_page_start`: "211"
- `printed_page_end`: "211"
- `keywords`: ["2.49.3", "MCU", "SEMA", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-49-04-STEPS-TO-RUN
- `number`: "2.49.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.4 Steps to Run"
- `physical_page_start`: 211
- `physical_page_end`: 211
- `printed_page_start`: "211"
- `printed_page_end`: "211"
- `keywords`: ["2.49.4", "SEMA", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-49-04-01-FOR-FC-IDE
- `number`: "2.49.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.4 Steps to Run / 2.49.4.1 For FC_IDE"
- `physical_page_start`: 211
- `physical_page_end`: 211
- `printed_page_start`: "211"
- `printed_page_end`: "211"
- `keywords`: ["2.49.4.1", "FC_IDE", "SEMA", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-49-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.49.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.4 Steps to Run / 2.49.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 211
- `physical_page_end`: 211
- `printed_page_start`: "211"
- `printed_page_end`: "211"
- `keywords`: ["2.49.4.2", "IAR", "SEMA", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-49-04-03-FOR-KEIL
- `number`: "2.49.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.49 SEMA / 2.49.4 Steps to Run / 2.49.4.3 For Keil"
- `physical_page_start`: 211
- `physical_page_end`: 211
- `printed_page_start`: "211"
- `printed_page_end`: "211"
- `keywords`: ["2.49.4.3", "SEMA", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-50-SENT
- `number`: "2.50"
- `title`: "SENT"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT"
- `physical_page_start`: 211
- `physical_page_end`: 217
- `printed_page_start`: "211"
- `printed_page_end`: "217"
- `keywords`: ["2.50", "SENT", "Demos", "Examples"]
- `anchor`: "SENT"

### SEC-02-50-01-SENT-POLLING
- `number`: "2.50.1"
- `title`: "SENT_Polling"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling"
- `physical_page_start`: 211
- `physical_page_end`: 213
- `printed_page_start`: "211"
- `printed_page_end`: "213"
- `keywords`: ["2.50.1", "SENT_Polling", "SENT", "Demos", "Examples"]
- `anchor`: "SENT_Polling"

### SEC-02-50-01-01-DESCRIPTION
- `number`: "2.50.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.1 Description"
- `physical_page_start`: 211
- `physical_page_end`: 211
- `printed_page_start`: "211"
- `printed_page_end`: "211"
- `keywords`: ["2.50.1.1", "SENT", "SENT_Polling", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-50-01-02-PREREQUISITES
- `number`: "2.50.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.2 Prerequisites"
- `physical_page_start`: 211
- `physical_page_end`: 212
- `printed_page_start`: "211"
- `printed_page_end`: "212"
- `keywords`: ["2.50.1.2", "SENT", "SENT_Polling", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-50-01-03-MCU-PORTS
- `number`: "2.50.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.3 MCU Ports"
- `physical_page_start`: 212
- `physical_page_end`: 212
- `printed_page_start`: "212"
- `printed_page_end`: "212"
- `keywords`: ["2.50.1.3", "MCU", "SENT", "SENT_Polling", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-50-01-04-STEPS-TO-RUN
- `number`: "2.50.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run"
- `physical_page_start`: 212
- `physical_page_end`: 213
- `printed_page_start`: "212"
- `printed_page_end`: "213"
- `keywords`: ["2.50.1.4", "SENT", "SENT_Polling", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-50-01-04-01-FOR-FC-IDE
- `number`: "2.50.1.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.1 For FC_IDE"
- `physical_page_start`: 212
- `physical_page_end`: 212
- `printed_page_start`: "212"
- `printed_page_end`: "212"
- `keywords`: ["2.50.1.4.1", "FC_IDE", "SENT", "SENT_Polling", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-50-01-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.50.1.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 212
- `physical_page_end`: 213
- `printed_page_start`: "212"
- `printed_page_end`: "213"
- `keywords`: ["2.50.1.4.2", "IAR", "SENT", "SENT_Polling", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-50-01-04-03-FOR-KEIL
- `number`: "2.50.1.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.3 For Keil"
- `physical_page_start`: 213
- `physical_page_end`: 213
- `printed_page_start`: "213"
- `printed_page_end`: "213"
- `keywords`: ["2.50.1.4.3", "SENT", "SENT_Polling", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-50-02-SENT-INTERRUPT
- `number`: "2.50.2"
- `title`: "SENT_Interrupt"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt"
- `physical_page_start`: 213
- `physical_page_end`: 214
- `printed_page_start`: "213"
- `printed_page_end`: "214"
- `keywords`: ["2.50.2", "SENT_Interrupt", "SENT", "Demos", "Examples"]
- `anchor`: "SENT_Interrupt"

### SEC-02-50-02-01-DESCRIPTION
- `number`: "2.50.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.1 Description"
- `physical_page_start`: 213
- `physical_page_end`: 213
- `printed_page_start`: "213"
- `printed_page_end`: "213"
- `keywords`: ["2.50.2.1", "SENT", "SENT_Interrupt", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-50-02-02-PREREQUISITES
- `number`: "2.50.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.2 Prerequisites"
- `physical_page_start`: 213
- `physical_page_end`: 213
- `printed_page_start`: "213"
- `printed_page_end`: "213"
- `keywords`: ["2.50.2.2", "SENT", "SENT_Interrupt", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-50-02-03-MCU-PORTS
- `number`: "2.50.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.3 MCU Ports"
- `physical_page_start`: 213
- `physical_page_end`: 213
- `printed_page_start`: "213"
- `printed_page_end`: "213"
- `keywords`: ["2.50.2.3", "MCU", "SENT", "SENT_Interrupt", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-50-02-04-STEPS-TO-RUN
- `number`: "2.50.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run"
- `physical_page_start`: 213
- `physical_page_end`: 214
- `printed_page_start`: "213"
- `printed_page_end`: "214"
- `keywords`: ["2.50.2.4", "SENT", "SENT_Interrupt", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-50-02-04-01-FOR-FC-IDE
- `number`: "2.50.2.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.1 For FC_IDE"
- `physical_page_start`: 213
- `physical_page_end`: 214
- `printed_page_start`: "213"
- `printed_page_end`: "214"
- `keywords`: ["2.50.2.4.1", "FC_IDE", "SENT", "SENT_Interrupt", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-50-02-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.50.2.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 214
- `physical_page_end`: 214
- `printed_page_start`: "214"
- `printed_page_end`: "214"
- `keywords`: ["2.50.2.4.2", "IAR", "SENT", "SENT_Interrupt", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-50-02-04-03-FOR-KEIL
- `number`: "2.50.2.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.3 For Keil"
- `physical_page_start`: 214
- `physical_page_end`: 214
- `printed_page_start`: "214"
- `printed_page_end`: "214"
- `keywords`: ["2.50.2.4.3", "SENT", "SENT_Interrupt", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-50-03-SENT-DMA
- `number`: "2.50.3"
- `title`: "SENT_Dma"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma"
- `physical_page_start`: 214
- `physical_page_end`: 216
- `printed_page_start`: "214"
- `printed_page_end`: "216"
- `keywords`: ["2.50.3", "SENT_Dma", "SENT", "Demos", "Examples"]
- `anchor`: "SENT_Dma"

### SEC-02-50-03-01-DESCRIPTION
- `number`: "2.50.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.1 Description"
- `physical_page_start`: 214
- `physical_page_end`: 214
- `printed_page_start`: "214"
- `printed_page_end`: "214"
- `keywords`: ["2.50.3.1", "SENT", "SENT_Dma", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-50-03-02-PREREQUISITES
- `number`: "2.50.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.2 Prerequisites"
- `physical_page_start`: 214
- `physical_page_end`: 215
- `printed_page_start`: "214"
- `printed_page_end`: "215"
- `keywords`: ["2.50.3.2", "SENT", "SENT_Dma", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-50-03-03-MCU-PORTS
- `number`: "2.50.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.3 MCU Ports"
- `physical_page_start`: 215
- `physical_page_end`: 215
- `printed_page_start`: "215"
- `printed_page_end`: "215"
- `keywords`: ["2.50.3.3", "MCU", "SENT", "SENT_Dma", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-50-03-04-STEPS-TO-RUN
- `number`: "2.50.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run"
- `physical_page_start`: 215
- `physical_page_end`: 216
- `printed_page_start`: "215"
- `printed_page_end`: "216"
- `keywords`: ["2.50.3.4", "SENT", "SENT_Dma", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-50-03-04-01-FOR-FC-IDE
- `number`: "2.50.3.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.1 For FC_IDE"
- `physical_page_start`: 215
- `physical_page_end`: 215
- `printed_page_start`: "215"
- `printed_page_end`: "215"
- `keywords`: ["2.50.3.4.1", "FC_IDE", "SENT", "SENT_Dma", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-50-03-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.50.3.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 215
- `physical_page_end`: 216
- `printed_page_start`: "215"
- `printed_page_end`: "216"
- `keywords`: ["2.50.3.4.2", "IAR", "SENT", "SENT_Dma", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-50-03-04-03-FOR-KEIL
- `number`: "2.50.3.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.3 For Keil"
- `physical_page_start`: 216
- `physical_page_end`: 216
- `printed_page_start`: "216"
- `printed_page_end`: "216"
- `keywords`: ["2.50.3.4.3", "SENT", "SENT_Dma", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-50-04-SENT-SPC
- `number`: "2.50.4"
- `title`: "SENT_SPC"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC"
- `physical_page_start`: 216
- `physical_page_end`: 217
- `printed_page_start`: "216"
- `printed_page_end`: "217"
- `keywords`: ["2.50.4", "SENT_SPC", "SENT", "Demos", "Examples"]
- `anchor`: "SENT_SPC"

### SEC-02-50-04-01-DESCRIPTION
- `number`: "2.50.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.1 Description"
- `physical_page_start`: 216
- `physical_page_end`: 216
- `printed_page_start`: "216"
- `printed_page_end`: "216"
- `keywords`: ["2.50.4.1", "SENT", "SENT_SPC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-50-04-02-PREREQUISITES
- `number`: "2.50.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.2 Prerequisites"
- `physical_page_start`: 216
- `physical_page_end`: 216
- `printed_page_start`: "216"
- `printed_page_end`: "216"
- `keywords`: ["2.50.4.2", "SENT", "SENT_SPC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-50-04-03-MCU-PORTS
- `number`: "2.50.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.3 MCU Ports"
- `physical_page_start`: 216
- `physical_page_end`: 216
- `printed_page_start`: "216"
- `printed_page_end`: "216"
- `keywords`: ["2.50.4.3", "MCU", "SENT", "SENT_SPC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-50-04-04-STEPS-TO-RUN
- `number`: "2.50.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run"
- `physical_page_start`: 216
- `physical_page_end`: 217
- `printed_page_start`: "216"
- `printed_page_end`: "217"
- `keywords`: ["2.50.4.4", "SENT", "SENT_SPC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-50-04-04-01-FOR-FC-IDE
- `number`: "2.50.4.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.1 For FC_IDE"
- `physical_page_start`: 216
- `physical_page_end`: 217
- `printed_page_start`: "216"
- `printed_page_end`: "217"
- `keywords`: ["2.50.4.4.1", "FC_IDE", "SENT", "SENT_SPC", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-50-04-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.50.4.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 217
- `physical_page_end`: 217
- `printed_page_start`: "217"
- `printed_page_end`: "217"
- `keywords`: ["2.50.4.4.2", "IAR", "SENT", "SENT_SPC", "Embedded", "Workbench", "Demos", "Examples"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-50-04-04-03-FOR-KEIL
- `number`: "2.50.4.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.3 For Keil"
- `physical_page_start`: 217
- `physical_page_end`: 217
- `printed_page_start`: "217"
- `printed_page_end`: "217"
- `keywords`: ["2.50.4.4.3", "SENT", "SENT_SPC", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-51-SMC
- `number`: "2.51"
- `title`: "SMC"
- `path`: "Chapter 2 Examples and Demos / 2.51 SMC"
- `physical_page_start`: 217
- `physical_page_end`: 219
- `printed_page_start`: "217"
- `printed_page_end`: "219"
- `keywords`: ["2.51", "SMC", "Demos", "Examples"]
- `anchor`: "SMC"

### SEC-02-51-01-DESCRIPTION
- `number`: "2.51.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.1 Description"
- `physical_page_start`: 217
- `physical_page_end`: 218
- `printed_page_start`: "217"
- `printed_page_end`: "218"
- `keywords`: ["2.51.1", "SMC", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-51-02-PREREQUISITES
- `number`: "2.51.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.2 Prerequisites"
- `physical_page_start`: 218
- `physical_page_end`: 218
- `printed_page_start`: "218"
- `printed_page_end`: "218"
- `keywords`: ["2.51.2", "SMC", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-51-03-MCU-PORTS
- `number`: "2.51.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"
- `physical_page_start`: 218
- `physical_page_end`: 219
- `printed_page_start`: "218"
- `printed_page_end`: "219"
- `keywords`: ["2.51.3", "MCU", "SMC", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-51-04-STEPS-TO-RUN
- `number`: "2.51.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.4 Steps to Run"
- `physical_page_start`: 219
- `physical_page_end`: 219
- `printed_page_start`: "219"
- `printed_page_end`: "219"
- `keywords`: ["2.51.4", "SMC", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-52-STCU
- `number`: "2.52"
- `title`: "STCU"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU"
- `physical_page_start`: 219
- `physical_page_end`: 221
- `printed_page_start`: "219"
- `printed_page_end`: "221"
- `keywords`: ["2.52", "STCU", "Demos", "Examples"]
- `anchor`: "STCU"

### SEC-02-52-01-DESCRIPTION
- `number`: "2.52.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"
- `physical_page_start`: 219
- `physical_page_end`: 220
- `printed_page_start`: "219"
- `printed_page_end`: "220"
- `keywords`: ["2.52.1", "STCU", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-52-02-PREREQUISITES
- `number`: "2.52.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites"
- `physical_page_start`: 220
- `physical_page_end`: 221
- `printed_page_start`: "220"
- `printed_page_end`: "221"
- `keywords`: ["2.52.2", "STCU", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-52-03-MCU-PORTS
- `number`: "2.52.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.3 MCU Ports"
- `physical_page_start`: 221
- `physical_page_end`: 221
- `printed_page_start`: "221"
- `printed_page_end`: "221"
- `keywords`: ["2.52.3", "MCU", "STCU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-52-04-STEPS-TO-RUN
- `number`: "2.52.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run"
- `physical_page_start`: 221
- `physical_page_end`: 221
- `printed_page_start`: "221"
- `printed_page_end`: "221"
- `keywords`: ["2.52.4", "STCU", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-52-04-01-01-FOR-FC-IDE
- `number`: "2.52.4.1.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.1 For FC_IDE"
- `physical_page_start`: 221
- `physical_page_end`: 221
- `printed_page_start`: "221"
- `printed_page_end`: "221"
- `keywords`: ["2.52.4.1.1", "FC_IDE", "STCU", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-52-04-01-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.52.4.1.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.2 For IAR Embedded Workbench"
- `physical_page_start`: 221
- `physical_page_end`: 221
- `printed_page_start`: "221"
- `printed_page_end`: "221"
- `keywords`: ["2.52.4.1.2", "IAR", "STCU", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-52-04-01-03-FOR-KEIL
- `number`: "2.52.4.1.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.3 For Keil"
- `physical_page_start`: 221
- `physical_page_end`: 221
- `printed_page_start`: "221"
- `printed_page_end`: "221"
- `keywords`: ["2.52.4.1.3", "STCU", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-53-SYSTICK
- `number`: "2.53"
- `title`: "Systick"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick"
- `physical_page_start`: 221
- `physical_page_end`: 222
- `printed_page_start`: "221"
- `printed_page_end`: "222"
- `keywords`: ["2.53", "Systick", "Demos", "Examples"]
- `anchor`: "Systick"

### SEC-02-53-01-DESCRIPTION
- `number`: "2.53.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.1 Description"
- `physical_page_start`: 221
- `physical_page_end`: 221
- `printed_page_start`: "221"
- `printed_page_end`: "221"
- `keywords`: ["2.53.1", "Description", "Demos", "Examples", "Systick"]
- `anchor`: "Description"

### SEC-02-53-02-PREREQUISITES
- `number`: "2.53.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.2 Prerequisites"
- `physical_page_start`: 221
- `physical_page_end`: 222
- `printed_page_start`: "221"
- `printed_page_end`: "222"
- `keywords`: ["2.53.2", "Prerequisites", "Demos", "Examples", "Systick"]
- `anchor`: "Prerequisites"

### SEC-02-53-03-MCU-PORTS
- `number`: "2.53.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.3 MCU Ports"
- `physical_page_start`: 222
- `physical_page_end`: 222
- `printed_page_start`: "222"
- `printed_page_end`: "222"
- `keywords`: ["2.53.3", "MCU", "Ports", "Demos", "Examples", "Systick"]
- `anchor`: "MCU Ports"

### SEC-02-53-04-STEPS-TO-RUN
- `number`: "2.53.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run"
- `physical_page_start`: 222
- `physical_page_end`: 222
- `printed_page_start`: "222"
- `printed_page_end`: "222"
- `keywords`: ["2.53.4", "Run", "Steps", "Demos", "Examples", "Systick"]
- `anchor`: "Steps to Run"

### SEC-02-53-04-01-FOR-FC-IDE
- `number`: "2.53.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.1 For FC_IDE"
- `physical_page_start`: 222
- `physical_page_end`: 222
- `printed_page_start`: "222"
- `printed_page_end`: "222"
- `keywords`: ["2.53.4.1", "FC_IDE", "Demos", "Examples", "Run", "Steps", "Systick"]
- `anchor`: "For FC_IDE"

### SEC-02-53-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.53.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 222
- `physical_page_end`: 222
- `printed_page_start`: "222"
- `printed_page_end`: "222"
- `keywords`: ["2.53.4.2", "IAR", "Embedded", "Workbench", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-53-04-03-FOR-KEIL
- `number`: "2.53.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"
- `physical_page_start`: 222
- `physical_page_end`: 222
- `printed_page_start`: "222"
- `printed_page_end`: "222"
- `keywords`: ["2.53.4.3", "Keil", "Demos", "Examples", "Run", "Steps", "Systick"]
- `anchor`: "For Keil"

### SEC-02-54-TMU
- `number`: "2.54"
- `title`: "TMU"
- `path`: "Chapter 2 Examples and Demos / 2.54 TMU"
- `physical_page_start`: 222
- `physical_page_end`: 225
- `printed_page_start`: "222"
- `printed_page_end`: "225"
- `keywords`: ["2.54", "TMU", "Demos", "Examples"]
- `anchor`: "TMU"

### SEC-02-54-01-DESCRIPTION
- `number`: "2.54.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.1 Description"
- `physical_page_start`: 222
- `physical_page_end`: 224
- `printed_page_start`: "222"
- `printed_page_end`: "224"
- `keywords`: ["2.54.1", "TMU", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-54-02-PREREQUISITES
- `number`: "2.54.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.2 Prerequisites"
- `physical_page_start`: 224
- `physical_page_end`: 225
- `printed_page_start`: "224"
- `printed_page_end`: "225"
- `keywords`: ["2.54.2", "TMU", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-54-03-MCU-PORTS
- `number`: "2.54.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.3 MCU Ports"
- `physical_page_start`: 225
- `physical_page_end`: 225
- `printed_page_start`: "225"
- `printed_page_end`: "225"
- `keywords`: ["2.54.3", "MCU", "TMU", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-54-04-STEPS-TO-RUN
- `number`: "2.54.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.4 Steps to Run"
- `physical_page_start`: 225
- `physical_page_end`: 225
- `printed_page_start`: "225"
- `printed_page_end`: "225"
- `keywords`: ["2.54.4", "TMU", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-55-TPU
- `number`: "2.55"
- `title`: "TPU"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU"
- `physical_page_start`: 225
- `physical_page_end`: 236
- `printed_page_start`: "225"
- `printed_page_end`: "236"
- `keywords`: ["2.55", "TPU", "Demos", "Examples"]
- `anchor`: "TPU"

### SEC-02-55-01-TPU-PWM-NONFLEXCORE
- `number`: "2.55.1"
- `title`: "Tpu_Pwm_NonFlexCore"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore"
- `physical_page_start`: 225
- `physical_page_end`: 227
- `printed_page_start`: "225"
- `printed_page_end`: "227"
- `keywords`: ["2.55.1", "TPU", "Tpu_Pwm_NonFlexCore", "Demos", "Examples"]
- `anchor`: "Tpu_Pwm_NonFlexCore"

### SEC-02-55-01-01-DESCRIPTION
- `number`: "2.55.1.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `physical_page_start`: 225
- `physical_page_end`: 227
- `printed_page_start`: "225"
- `printed_page_end`: "227"
- `keywords`: ["2.55.1.1", "TPU", "Description", "Demos", "Examples", "Tpu_Pwm_NonFlexCore"]
- `anchor`: "Description"

### SEC-02-55-01-02-PREREQUISITES
- `number`: "2.55.1.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.2 Prerequisites"
- `physical_page_start`: 227
- `physical_page_end`: 227
- `printed_page_start`: "227"
- `printed_page_end`: "227"
- `keywords`: ["2.55.1.2", "TPU", "Prerequisites", "Demos", "Examples", "Tpu_Pwm_NonFlexCore"]
- `anchor`: "Prerequisites"

### SEC-02-55-01-03-MCU-PORTS
- `number`: "2.55.1.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.3 MCU Ports"
- `physical_page_start`: 227
- `physical_page_end`: 227
- `printed_page_start`: "227"
- `printed_page_end`: "227"
- `keywords`: ["2.55.1.3", "MCU", "TPU", "Ports", "Demos", "Examples", "Tpu_Pwm_NonFlexCore"]
- `anchor`: "MCU Ports"

### SEC-02-55-01-04-STEPS-TO-RUN
- `number`: "2.55.1.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.4 Steps to Run"
- `physical_page_start`: 227
- `physical_page_end`: 227
- `printed_page_start`: "227"
- `printed_page_end`: "227"
- `keywords`: ["2.55.1.4", "TPU", "Run", "Steps", "Demos", "Examples", "Tpu_Pwm_NonFlexCore"]
- `anchor`: "Steps to Run"

### SEC-02-55-02-TPU-CAPTURE-HOST
- `number`: "2.55.2"
- `title`: "Tpu_Capture_Host"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host"
- `physical_page_start`: 227
- `physical_page_end`: 229
- `printed_page_start`: "227"
- `printed_page_end`: "229"
- `keywords`: ["2.55.2", "TPU", "Tpu_Capture_Host", "Demos", "Examples"]
- `anchor`: "Tpu_Capture_Host"

### SEC-02-55-02-01-DESCRIPTION
- `number`: "2.55.2.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.1 Description"
- `physical_page_start`: 227
- `physical_page_end`: 228
- `printed_page_start`: "227"
- `printed_page_end`: "228"
- `keywords`: ["2.55.2.1", "TPU", "Description", "Demos", "Examples", "Tpu_Capture_Host"]
- `anchor`: "Description"

### SEC-02-55-02-02-PREREQUISITES
- `number`: "2.55.2.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.2 Prerequisites"
- `physical_page_start`: 228
- `physical_page_end`: 229
- `printed_page_start`: "228"
- `printed_page_end`: "229"
- `keywords`: ["2.55.2.2", "TPU", "Prerequisites", "Demos", "Examples", "Tpu_Capture_Host"]
- `anchor`: "Prerequisites"

### SEC-02-55-02-03-MCU-PORTS
- `number`: "2.55.2.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.3 MCU Ports"
- `physical_page_start`: 229
- `physical_page_end`: 229
- `printed_page_start`: "229"
- `printed_page_end`: "229"
- `keywords`: ["2.55.2.3", "MCU", "TPU", "Ports", "Demos", "Examples", "Tpu_Capture_Host"]
- `anchor`: "MCU Ports"

### SEC-02-55-02-04-STEPS-TO-RUN
- `number`: "2.55.2.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.4 Steps to Run"
- `physical_page_start`: 229
- `physical_page_end`: 229
- `printed_page_start`: "229"
- `printed_page_end`: "229"
- `keywords`: ["2.55.2.4", "TPU", "Run", "Steps", "Demos", "Examples", "Tpu_Capture_Host"]
- `anchor`: "Steps to Run"

### SEC-02-55-03-TPU-HOST
- `number`: "2.55.3"
- `title`: "Tpu_Host"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host"
- `physical_page_start`: 229
- `physical_page_end`: 232
- `printed_page_start`: "229"
- `printed_page_end`: "232"
- `keywords`: ["2.55.3", "TPU", "Tpu_Host", "Demos", "Examples"]
- `anchor`: "Tpu_Host"

### SEC-02-55-03-01-DESCRIPTION
- `number`: "2.55.3.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.1 Description"
- `physical_page_start`: 229
- `physical_page_end`: 230
- `printed_page_start`: "229"
- `printed_page_end`: "230"
- `keywords`: ["2.55.3.1", "TPU", "Description", "Demos", "Examples", "Tpu_Host"]
- `anchor`: "Description"

### SEC-02-55-03-02-PREREQUISITES
- `number`: "2.55.3.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.2 Prerequisites"
- `physical_page_start`: 230
- `physical_page_end`: 231
- `printed_page_start`: "230"
- `printed_page_end`: "231"
- `keywords`: ["2.55.3.2", "TPU", "Prerequisites", "Demos", "Examples", "Tpu_Host"]
- `anchor`: "Prerequisites"

### SEC-02-55-03-03-MCU-PORTS
- `number`: "2.55.3.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.3 MCU Ports"
- `physical_page_start`: 231
- `physical_page_end`: 231
- `printed_page_start`: "231"
- `printed_page_end`: "231"
- `keywords`: ["2.55.3.3", "MCU", "TPU", "Ports", "Demos", "Examples", "Tpu_Host"]
- `anchor`: "MCU Ports"

### SEC-02-55-03-04-STEPS-TO-RUN
- `number`: "2.55.3.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run"
- `physical_page_start`: 231
- `physical_page_end`: 232
- `printed_page_start`: "231"
- `printed_page_end`: "232"
- `keywords`: ["2.55.3.4", "TPU", "Run", "Steps", "Demos", "Examples", "Tpu_Host"]
- `anchor`: "Steps to Run"

### SEC-02-55-03-04-01-FOR-FC-IDE
- `number`: "2.55.3.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.1 For FC_IDE"
- `physical_page_start`: 231
- `physical_page_end`: 231
- `printed_page_start`: "231"
- `printed_page_end`: "231"
- `keywords`: ["2.55.3.4.1", "FC_IDE", "TPU", "Demos", "Examples", "Run", "Steps", "Tpu_Host"]
- `anchor`: "For FC_IDE"

### SEC-02-55-03-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.55.3.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 231
- `physical_page_end`: 231
- `printed_page_start`: "231"
- `printed_page_end`: "231"
- `keywords`: ["2.55.3.4.2", "IAR", "TPU", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-55-03-04-03-FOR-KEIL
- `number`: "2.55.3.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `physical_page_start`: 231
- `physical_page_end`: 232
- `printed_page_start`: "231"
- `printed_page_end`: "232"
- `keywords`: ["2.55.3.4.3", "TPU", "Keil", "Demos", "Examples", "Run", "Steps", "Tpu_Host"]
- `anchor`: "For Keil"

### SEC-02-55-04-TPU-PWM-FLEXCORE
- `number`: "2.55.4"
- `title`: "Tpu_Pwm_FlexCore"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore"
- `physical_page_start`: 232
- `physical_page_end`: 234
- `printed_page_start`: "232"
- `printed_page_end`: "234"
- `keywords`: ["2.55.4", "TPU", "Tpu_Pwm_FlexCore", "Demos", "Examples"]
- `anchor`: "Tpu_Pwm_FlexCore"

### SEC-02-55-04-01-DESCRIPTION
- `number`: "2.55.4.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.1 Description"
- `physical_page_start`: 232
- `physical_page_end`: 234
- `printed_page_start`: "232"
- `printed_page_end`: "234"
- `keywords`: ["2.55.4.1", "TPU", "Description", "Demos", "Examples", "Tpu_Pwm_FlexCore"]
- `anchor`: "Description"

### SEC-02-55-04-02-PREREQUISITES
- `number`: "2.55.4.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.2 Prerequisites"
- `physical_page_start`: 234
- `physical_page_end`: 234
- `printed_page_start`: "234"
- `printed_page_end`: "234"
- `keywords`: ["2.55.4.2", "TPU", "Prerequisites", "Demos", "Examples", "Tpu_Pwm_FlexCore"]
- `anchor`: "Prerequisites"

### SEC-02-55-04-03-MCU-PORTS
- `number`: "2.55.4.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.3 MCU Ports"
- `physical_page_start`: 234
- `physical_page_end`: 234
- `printed_page_start`: "234"
- `printed_page_end`: "234"
- `keywords`: ["2.55.4.3", "MCU", "TPU", "Ports", "Demos", "Examples", "Tpu_Pwm_FlexCore"]
- `anchor`: "MCU Ports"

### SEC-02-55-04-04-STEPS-TO-RUN
- `number`: "2.55.4.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.4 Steps to Run"
- `physical_page_start`: 234
- `physical_page_end`: 234
- `printed_page_start`: "234"
- `printed_page_end`: "234"
- `keywords`: ["2.55.4.4", "TPU", "Run", "Steps", "Demos", "Examples", "Tpu_Pwm_FlexCore"]
- `anchor`: "Steps to Run"

### SEC-02-55-05-TPU-CAPTURE-FLEXCORE
- `number`: "2.55.5"
- `title`: "Tpu_Capture_FlexCore"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore"
- `physical_page_start`: 234
- `physical_page_end`: 236
- `printed_page_start`: "234"
- `printed_page_end`: "236"
- `keywords`: ["2.55.5", "TPU", "Tpu_Capture_FlexCore", "Demos", "Examples"]
- `anchor`: "Tpu_Capture_FlexCore"

### SEC-02-55-05-01-DESCRIPTION
- `number`: "2.55.5.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `physical_page_start`: 234
- `physical_page_end`: 236
- `printed_page_start`: "234"
- `printed_page_end`: "236"
- `keywords`: ["2.55.5.1", "TPU", "Description", "Demos", "Examples", "Tpu_Capture_FlexCore"]
- `anchor`: "Description"

### SEC-02-55-05-02-PREREQUISITES
- `number`: "2.55.5.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.2 Prerequisites"
- `physical_page_start`: 236
- `physical_page_end`: 236
- `printed_page_start`: "236"
- `printed_page_end`: "236"
- `keywords`: ["2.55.5.2", "TPU", "Prerequisites", "Demos", "Examples", "Tpu_Capture_FlexCore"]
- `anchor`: "Prerequisites"

### SEC-02-55-05-03-MCU-PORTS
- `number`: "2.55.5.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.3 MCU Ports"
- `physical_page_start`: 236
- `physical_page_end`: 236
- `printed_page_start`: "236"
- `printed_page_end`: "236"
- `keywords`: ["2.55.5.3", "MCU", "TPU", "Ports", "Demos", "Examples", "Tpu_Capture_FlexCore"]
- `anchor`: "MCU Ports"

### SEC-02-55-05-04-STEPS-TO-RUN
- `number`: "2.55.5.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.4 Steps to Run"
- `physical_page_start`: 236
- `physical_page_end`: 236
- `printed_page_start`: "236"
- `printed_page_end`: "236"
- `keywords`: ["2.55.5.4", "TPU", "Run", "Steps", "Demos", "Examples", "Tpu_Capture_FlexCore"]
- `anchor`: "Steps to Run"

### SEC-02-56-TSTMP
- `number`: "2.56"
- `title`: "TSTMP"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP"
- `physical_page_start`: 236
- `physical_page_end`: 238
- `printed_page_start`: "236"
- `printed_page_end`: "238"
- `keywords`: ["2.56", "TSTMP", "Demos", "Examples"]
- `anchor`: "TSTMP"

### SEC-02-56-01-DESCRIPTION
- `number`: "2.56.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.1 Description"
- `physical_page_start`: 236
- `physical_page_end`: 237
- `printed_page_start`: "236"
- `printed_page_end`: "237"
- `keywords`: ["2.56.1", "TSTMP", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-56-02-PREREQUISITES
- `number`: "2.56.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.2 Prerequisites"
- `physical_page_start`: 237
- `physical_page_end`: 238
- `printed_page_start`: "237"
- `printed_page_end`: "238"
- `keywords`: ["2.56.2", "TSTMP", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-56-03-MCU-PORTS
- `number`: "2.56.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.3 MCU Ports"
- `physical_page_start`: 238
- `physical_page_end`: 238
- `printed_page_start`: "238"
- `printed_page_end`: "238"
- `keywords`: ["2.56.3", "MCU", "TSTMP", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-56-04-STEPS-TO-RUN
- `number`: "2.56.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.4 Steps to Run"
- `physical_page_start`: 238
- `physical_page_end`: 238
- `printed_page_start`: "238"
- `printed_page_end`: "238"
- `keywords`: ["2.56.4", "TSTMP", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### SEC-02-56-04-01-FOR-FC-IDE
- `number`: "2.56.4.1"
- `title`: "For FC_IDE"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.4 Steps to Run / 2.56.4.1 For FC_IDE"
- `physical_page_start`: 238
- `physical_page_end`: 238
- `printed_page_start`: "238"
- `printed_page_end`: "238"
- `keywords`: ["2.56.4.1", "FC_IDE", "TSTMP", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For FC_IDE"

### SEC-02-56-04-02-FOR-IAR-EMBEDDED-WORKBENCH
- `number`: "2.56.4.2"
- `title`: "For IAR Embedded Workbench"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.4 Steps to Run / 2.56.4.2 For IAR Embedded Workbench"
- `physical_page_start`: 238
- `physical_page_end`: 238
- `printed_page_start`: "238"
- `printed_page_end`: "238"
- `keywords`: ["2.56.4.2", "IAR", "TSTMP", "Embedded", "Workbench", "Demos", "Examples", "Run"]
- `anchor`: "For IAR Embedded Workbench"

### SEC-02-56-04-03-FOR-KEIL
- `number`: "2.56.4.3"
- `title`: "For Keil"
- `path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.4 Steps to Run / 2.56.4.3 For Keil"
- `physical_page_start`: 238
- `physical_page_end`: 238
- `printed_page_start`: "238"
- `printed_page_end`: "238"
- `keywords`: ["2.56.4.3", "TSTMP", "Keil", "Demos", "Examples", "Run", "Steps"]
- `anchor`: "For Keil"

### SEC-02-57-WDOG
- `number`: "2.57"
- `title`: "WDOG"
- `path`: "Chapter 2 Examples and Demos / 2.57 WDOG"
- `physical_page_start`: 238
- `physical_page_end`: 242
- `printed_page_start`: "238"
- `printed_page_end`: "242"
- `keywords`: ["2.57", "WDOG", "Demos", "Examples"]
- `anchor`: "WDOG"

### SEC-02-57-01-DESCRIPTION
- `number`: "2.57.1"
- `title`: "Description"
- `path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.1 Description"
- `physical_page_start`: 238
- `physical_page_end`: 240
- `printed_page_start`: "238"
- `printed_page_end`: "240"
- `keywords`: ["2.57.1", "WDOG", "Description", "Demos", "Examples"]
- `anchor`: "Description"

### SEC-02-57-02-PREREQUISITES
- `number`: "2.57.2"
- `title`: "Prerequisites"
- `path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.2 Prerequisites"
- `physical_page_start`: 240
- `physical_page_end`: 241
- `printed_page_start`: "240"
- `printed_page_end`: "241"
- `keywords`: ["2.57.2", "WDOG", "Prerequisites", "Demos", "Examples"]
- `anchor`: "Prerequisites"

### SEC-02-57-03-MCU-PORTS
- `number`: "2.57.3"
- `title`: "MCU Ports"
- `path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.3 MCU Ports"
- `physical_page_start`: 241
- `physical_page_end`: 241
- `printed_page_start`: "241"
- `printed_page_end`: "241"
- `keywords`: ["2.57.3", "MCU", "WDOG", "Ports", "Demos", "Examples"]
- `anchor`: "MCU Ports"

### SEC-02-57-04-STEPS-TO-RUN
- `number`: "2.57.4"
- `title`: "Steps to Run"
- `path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `physical_page_start`: 241
- `physical_page_end`: 242
- `printed_page_start`: "241"
- `printed_page_end`: "242"
- `keywords`: ["2.57.4", "WDOG", "Run", "Steps", "Demos", "Examples"]
- `anchor`: "Steps to Run"

### BACK-REVISION-HISTORY
- `number`: ""
- `title`: "Revision History"
- `path`: "Back Matter / Revision History"
- `physical_page_start`: 243
- `physical_page_end`: 243
- `printed_page_start`: "243"
- `printed_page_end`: "243"
- `keywords`: ["History", "Revision", "Back", "Matter"]
- `anchor`: "Revision History"

### BACK-DISCLAIMER
- `number`: ""
- `title`: "Disclaimer"
- `path`: "Back Matter / Disclaimer"
- `physical_page_start`: 244
- `physical_page_end`: 244
- `printed_page_start`: "244"
- `printed_page_end`: "244"
- `keywords`: ["Disclaimer", "Back", "Matter"]
- `anchor`: "Disclaimer"

### BACK-TRAILING-PAGE
- `number`: ""
- `title`: "Trailing sparse page"
- `path`: "Back Matter / Trailing sparse page"
- `physical_page_start`: 245
- `physical_page_end`: 245
- `printed_page_start`: "245"
- `printed_page_end`: "245"
- `keywords`: ["sparse", "Trailing", "Back", "Matter"]
- `anchor`: "Trailing sparse page"

## 4. Page Locator Map

Each `PAGE-*` item maps one 1-based PDF physical page to its best-known section path and short source anchor.
### PAGE-0001
- `physical_page`: 1
- `printed_page`: null
- `section_path`: "Front Matter / Cover"
- `content_types`: ["cover", "sparse_or_blank"]
- `anchor`: ""

### PAGE-0002
- `physical_page`: 2
- `printed_page`: "2"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "Table of Contents"

### PAGE-0003
- `physical_page`: 3
- `printed_page`: "3"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.10.1 Eftu_SignalDetect ..............................................................................................."

### PAGE-0004
- `physical_page`: 4
- `printed_page`: "4"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.14.1 FCPIT_TimeCounter ..............................................................................................."

### PAGE-0005
- `physical_page`: 5
- `printed_page`: "5"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.22.1 Description ....................................................................................................."

### PAGE-0006
- `physical_page`: 6
- `printed_page`: "6"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.29.4 Steps to Run ...................................................................................................."

### PAGE-0007
- `physical_page`: 7
- `printed_page`: "7"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.37.3 MCU Ports ......................................................................................................."

### PAGE-0008
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.45.2 Prerequisites ..................................................................................................."

### PAGE-0009
- `physical_page`: 9
- `printed_page`: "9"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `anchor`: "2.53.2 Prerequisites ..................................................................................................."

### PAGE-0010
- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.1 SDK Directory Structure"
- `content_types`: ["text", "image"]
- `anchor`: "Chapter 1 Introduction"

### PAGE-0011
- `physical_page`: 11
- `printed_page`: "11"
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `anchor`: "1.2.2 Abbreviations"

### PAGE-0012
- `physical_page`: 12
- `printed_page`: "12"
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `anchor`: "Abbreviation"

### PAGE-0013
- `physical_page`: 13
- `printed_page`: "13"
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `anchor`: "Abbreviation"

### PAGE-0014
- `physical_page`: 14
- `printed_page`: "14"
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `anchor`: "Abbreviation"

### PAGE-0015
- `physical_page`: 15
- `printed_page`: "15"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `content_types`: ["text"]
- `anchor`: "1.3.1 FC_IDE"

### PAGE-0016
- `physical_page`: 16
- `printed_page`: "16"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "Select Build Project to build the project."

### PAGE-0017
- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "Note: If there is only one debug option for a project, there will be no pop-up dialog, and the debug will start"

### PAGE-0018
- `physical_page`: 18
- `printed_page`: "18"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "1.3.2 IAR Embedded Workbench"

### PAGE-0019
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "Select the installation path of Keil under Search (IAR Systems) Result, and click Start Patch."

### PAGE-0020
- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "1.3.3 Keil"

### PAGE-0021
- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "Double-click Keil_Patch_SetupTool_vX.X.X.exe (Latest version)."

### PAGE-0022
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "\"Patch Keil successfully!\" will be displayed if patched successfully. Then you can close the setup program."

### PAGE-0023
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "After opening a Keil project, click the icon"

### PAGE-0024
- `physical_page`: 24
- `printed_page`: "24"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "In the Debug tab, select J-LINK / J-TRACE Cortex from the Use drop-down list, and click Settings."

### PAGE-0025
- `physical_page`: 25
- `printed_page`: "25"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "In the Flash Download tab, click Add."

### PAGE-0026
- `physical_page`: 26
- `printed_page`: "26"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "After completing the adding, FC7300-related information will be displayed in the Programming Algorithm box,"

### PAGE-0027
- `physical_page`: 27
- `printed_page`: "27"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `anchor`: "Hardware Environment"

### PAGE-0028
- `physical_page`: 28
- `printed_page`: "28"
- `section_path`: "Chapter 1 Introduction / 1.4 Hardware Environment"
- `content_types`: ["text", "image"]
- `anchor`: "Bottom view:"

### PAGE-0029
- `physical_page`: 29
- `printed_page`: "29"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC"
- `content_types`: ["text", "image"]
- `anchor`: "Chapter 2 Examples and Demos"

### PAGE-0030
- `physical_page`: 30
- `printed_page`: "30"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.1 ADC_Single"

### PAGE-0031
- `physical_page`: 31
- `printed_page`: "31"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "First, initialize the system and peripheral clock, and then the ADC ports."

### PAGE-0032
- `physical_page`: 32
- `printed_page`: "32"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.1.2 Prerequisites"

### PAGE-0033
- `physical_page`: 33
- `printed_page`: "33"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.2 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.2.1 Prerequisites"

### PAGE-0034
- `physical_page`: 34
- `printed_page`: "34"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.1.2.3 Steps to Run"

### PAGE-0035
- `physical_page`: 35
- `printed_page`: "35"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.3.2 Prerequisites"

### PAGE-0036
- `physical_page`: 36
- `printed_page`: "36"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.1.3.4 Steps to Run"

### PAGE-0037
- `physical_page`: 37
- `printed_page`: "37"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.2 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.4.1 Prerequisites"

### PAGE-0038
- `physical_page`: 38
- `printed_page`: "38"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.3 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.1.4.3 Steps to Run"

### PAGE-0039
- `physical_page`: 39
- `printed_page`: "39"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.1 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.5.1 Prerequisites"

### PAGE-0040
- `physical_page`: 40
- `printed_page`: "40"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.3 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.1.5.2 MCU Ports"

### PAGE-0041
- `physical_page`: 41
- `printed_page`: "41"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.1 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.6.1 Prerequisites"

### PAGE-0042
- `physical_page`: 42
- `printed_page`: "42"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.1.6.2 MCU Ports"

### PAGE-0043
- `physical_page`: 43
- `printed_page`: "43"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.2.1.2 Prerequisites"

### PAGE-0044
- `physical_page`: 44
- `printed_page`: "44"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.2.2 AONTIMER_PulseCounter"

### PAGE-0045
- `physical_page`: 45
- `printed_page`: "45"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.3.1 Description"

### PAGE-0046
- `physical_page`: 46
- `printed_page`: "46"
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.3.2 Prerequisites"

### PAGE-0047
- `physical_page`: 47
- `printed_page`: "47"
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.3.3 MCU Ports"

### PAGE-0048
- `physical_page`: 48
- `printed_page`: "48"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"
- `content_types`: ["text", "image"]
- `anchor`: "2.4.1 Introduction"

### PAGE-0049
- `physical_page`: 49
- `printed_page`: "49"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.4.2 CMP_Interrupt"

### PAGE-0050
- `physical_page`: 50
- `printed_page`: "50"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.4.2.2 Prerequisites"

### PAGE-0051
- `physical_page`: 51
- `printed_page`: "51"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.4.3 CMP_DMA"

### PAGE-0052
- `physical_page`: 52
- `printed_page`: "52"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.4.3.2 Prerequisites"

### PAGE-0053
- `physical_page`: 53
- `printed_page`: "53"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.4.4.2 Prerequisites"

### PAGE-0054
- `physical_page`: 54
- `printed_page`: "54"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.5.1 Description"

### PAGE-0055
- `physical_page`: 55
- `printed_page`: "55"
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.6.1 Description"

### PAGE-0056
- `physical_page`: 56
- `printed_page`: "56"
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.6.4.2 For IAR Embedded Workbench"

### PAGE-0057
- `physical_page`: 57
- `printed_page`: "57"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.7.2 Prerequisites"

### PAGE-0058
- `physical_page`: 58
- `printed_page`: "58"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "Select GNU Arm Cross Assembler > Preprocessor, add __FPU_PRESENT=1 and FPU_USED_ENABLE, and then"

### PAGE-0059
- `physical_page`: 59
- `printed_page`: "59"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "Build the project and download it."

### PAGE-0060
- `physical_page`: 60
- `printed_page`: "60"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.8.1 CRC_Demo"

### PAGE-0061
- `physical_page`: 61
- `printed_page`: "61"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.8.1.4 Steps to Run"

### PAGE-0062
- `physical_page`: 62
- `printed_page`: "62"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "The result of CRC_16_CCITT_FALSE:"

### PAGE-0063
- `physical_page`: 63
- `printed_page`: "63"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.8.2 CRC_Demo_Hard_Soft_Compare"

### PAGE-0064
- `physical_page`: 64
- `printed_page`: "64"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.8.3 CRC_Demo_Multi_Step"

### PAGE-0065
- `physical_page`: 65
- `printed_page`: "65"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0066
- `physical_page`: 66
- `printed_page`: "66"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.8.3.2 Prerequisites"

### PAGE-0067
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.9.1 DMA_Memcpy"

### PAGE-0068
- `physical_page`: 68
- `printed_page`: "68"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.9.1.3 MCU Ports"

### PAGE-0069
- `physical_page`: 69
- `printed_page`: "69"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.9.2.2 Prerequisites"

### PAGE-0070
- `physical_page`: 70
- `printed_page`: "70"
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.10 EFTU"

### PAGE-0071
- `physical_page`: 71
- `printed_page`: "71"
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports"
- `content_types`: ["text"]
- `anchor`: "2.10.1.3 MCU Ports"

### PAGE-0072
- `physical_page`: 72
- `printed_page`: "72"
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.10.2.4 Steps to Run"

### PAGE-0073
- `physical_page`: 73
- `printed_page`: "73"
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.10.4.1 Description"

### PAGE-0074
- `physical_page`: 74
- `printed_page`: "74"
- `section_path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.11.2 Prerequisites"

### PAGE-0075
- `physical_page`: 75
- `printed_page`: "75"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.1 ENET_lwIP_FreeRTOS"

### PAGE-0076
- `physical_page`: 76
- `printed_page`: "76"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.12.1.3 MCU Ports"

### PAGE-0077
- `physical_page`: 77
- `printed_page`: "77"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "Connect to TCP server with net tools (netassist):"

### PAGE-0078
- `physical_page`: 78
- `printed_page`: "78"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.2 ENET_lwIP_NoSys"

### PAGE-0079
- `physical_page`: 79
- `printed_page`: "79"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.12.2.2 Prerequisites"

### PAGE-0080
- `physical_page`: 80
- `printed_page`: "80"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "The ethernet driver and lwip stack are implemented in this project. You can use the lwip raw interface or socket"

### PAGE-0081
- `physical_page`: 81
- `printed_page`: "81"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.3 RT_THREAD"

### PAGE-0082
- `physical_page`: 82
- `printed_page`: "82"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.3.2 Prerequisites"

### PAGE-0083
- `physical_page`: 83
- `printed_page`: "83"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.12.3.4 Steps to Run"

### PAGE-0084
- `physical_page`: 84
- `printed_page`: "84"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "Enter help on the console, all implemented command will be listed."

### PAGE-0085
- `physical_page`: 85
- `printed_page`: "85"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.4 RT_THREAD_AMP"

### PAGE-0086
- `physical_page`: 86
- `printed_page`: "86"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.4.2 Prerequisites"

### PAGE-0087
- `physical_page`: 87
- `printed_page`: "87"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.12.4.3 MCU Ports"

### PAGE-0088
- `physical_page`: 88
- `printed_page`: "88"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.13 FCIIC"

### PAGE-0089
- `physical_page`: 89
- `printed_page`: "89"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.14 FCPIT"

### PAGE-0090
- `physical_page`: 90
- `printed_page`: "90"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "2.14.1.2 Prerequisites"

### PAGE-0091
- `physical_page`: 91
- `printed_page`: "91"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.14.1.4.3 For Keil"

### PAGE-0092
- `physical_page`: 92
- `printed_page`: "92"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.14.2.2 Prerequisites"

### PAGE-0093
- `physical_page`: 93
- `printed_page`: "93"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0094
- `physical_page`: 94
- `printed_page`: "94"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.14.3.2 Prerequisites"

### PAGE-0095
- `physical_page`: 95
- `printed_page`: "95"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.16 FCSPI"

### PAGE-0096
- `physical_page`: 96
- `printed_page`: "96"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "The sequence diagram of the demo is as follows:"

### PAGE-0097
- `physical_page`: 97
- `printed_page`: "97"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "The actual waveform of this demo is shown in the figure below:"

### PAGE-0098
- `physical_page`: 98
- `printed_page`: "98"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.16.1.2 Prerequisites"

### PAGE-0099
- `physical_page`: 99
- `printed_page`: "99"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.16.2 FCSPI_Master_Interrupt"

### PAGE-0100
- `physical_page`: 100
- `printed_page`: "100"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "SPI3 has a set of pin-outs on the board, you can use a logic analyzer to connect these pins to observe the waveforms."

### PAGE-0101
- `physical_page`: 101
- `printed_page`: "101"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.16.2.2 Prerequisites"

### PAGE-0102
- `physical_page`: 102
- `printed_page`: "102"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.16.2.3 MCU Ports"

### PAGE-0103
- `physical_page`: 103
- `printed_page`: "103"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "The sequence diagram of the demo is as follows:"

### PAGE-0104
- `physical_page`: 104
- `printed_page`: "104"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0105
- `physical_page`: 105
- `printed_page`: "105"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0106
- `physical_page`: 106
- `printed_page`: "106"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.16.3.2 Prerequisites"

### PAGE-0107
- `physical_page`: 107
- `printed_page`: "107"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "The sequence diagram of the demo is as follows:"

### PAGE-0108
- `physical_page`: 108
- `printed_page`: "108"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0109
- `physical_page`: 109
- `printed_page`: "109"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0110
- `physical_page`: 110
- `printed_page`: "110"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.16.4.2 Prerequisites"

### PAGE-0111
- `physical_page`: 111
- `printed_page`: "111"
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.17.2 Prerequisites"

### PAGE-0112
- `physical_page`: 112
- `printed_page`: "112"
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "2.17.3 MCU Ports"

### PAGE-0113
- `physical_page`: 113
- `printed_page`: "113"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.17.4.3 For Keil"

### PAGE-0114
- `physical_page`: 114
- `printed_page`: "114"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.18.1.2 Prerequisites"

### PAGE-0115
- `physical_page`: 115
- `printed_page`: "115"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.18.2 Flash_INT_Project"

### PAGE-0116
- `physical_page`: 116
- `printed_page`: "116"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.18.2.2 Prerequisites"

### PAGE-0117
- `physical_page`: 117
- `printed_page`: "117"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.18.3 Flash_Sync_Project"

### PAGE-0118
- `physical_page`: 118
- `printed_page`: "118"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.18.3.2 Prerequisites"

### PAGE-0119
- `physical_page`: 119
- `printed_page`: "119"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.19 FLEXCAN"

### PAGE-0120
- `physical_page`: 120
- `printed_page`: "120"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.19.1.2 Prerequisites"

### PAGE-0121
- `physical_page`: 121
- `printed_page`: "121"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.19.2 CAN_EnhanceFIFO_DMA"

### PAGE-0122
- `physical_page`: 122
- `printed_page`: "122"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.19.2.2 Prerequisites"

### PAGE-0123
- `physical_page`: 123
- `printed_page`: "123"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.19.3 CAN_LegacyFIFO_DMA"

### PAGE-0124
- `physical_page`: 124
- `printed_page`: "124"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.19.3.4 Steps to Run"

### PAGE-0125
- `physical_page`: 125
- `printed_page`: "125"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.19.4.2 Prerequisites"

### PAGE-0126
- `physical_page`: 126
- `printed_page`: "126"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.19.5 CAN_MB_LegacyFIFO"

### PAGE-0127
- `physical_page`: 127
- `printed_page`: "127"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.19.5.4 Steps to Run"

### PAGE-0128
- `physical_page`: 128
- `printed_page`: "128"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0129
- `physical_page`: 129
- `printed_page`: "129"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "Enable FPU based on whether hardware is enabled or not in the system_init function."

### PAGE-0130
- `physical_page`: 130
- `printed_page`: "130"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.20.2 Prerequisites"

### PAGE-0131
- `physical_page`: 131
- `printed_page`: "131"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.21 FreeRTOS"

### PAGE-0132
- `physical_page`: 132
- `printed_page`: "132"
- `section_path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.21.3 MCU Ports"

### PAGE-0133
- `physical_page`: 133
- `printed_page`: "133"
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.22.3 MCU Ports"

### PAGE-0134
- `physical_page`: 134
- `printed_page`: "134"
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.23.4 Steps to Run"

### PAGE-0135
- `physical_page`: 135
- `printed_page`: "135"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.24.1 InputCapture"

### PAGE-0136
- `physical_page`: 136
- `printed_page`: "136"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.24.2.2 Prerequisites"

### PAGE-0137
- `physical_page`: 137
- `printed_page`: "137"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.24.3 OutputCompare"

### PAGE-0138
- `physical_page`: 138
- `printed_page`: "138"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.24.4 PWM"

### PAGE-0139
- `physical_page`: 139
- `printed_page`: "139"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"
- `content_types`: ["text"]
- `anchor`: "2.24.4.4 Steps to Run"

### PAGE-0140
- `physical_page`: 140
- `printed_page`: "140"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.24.5.3 MCU Ports"

### PAGE-0141
- `physical_page`: 141
- `printed_page`: "141"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.25.1.2 Prerequisites"

### PAGE-0142
- `physical_page`: 142
- `printed_page`: "142"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.25.2 GPIO_EdgeDetect"

### PAGE-0143
- `physical_page`: 143
- `printed_page`: "143"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.25.2.4.2 For IAR Embedded Workbench"

### PAGE-0144
- `physical_page`: 144
- `printed_page`: "144"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.25.3.3 MCU Ports"

### PAGE-0145
- `physical_page`: 145
- `printed_page`: "145"
- `section_path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.26.4 Steps to Run"

### PAGE-0146
- `physical_page`: 146
- `printed_page`: "146"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC"
- `content_types`: ["text", "image"]
- `anchor`: "You may want to watch HSADC result by UART, then you can connect a type-c USB cable to the USB-to-UART interface on"

### PAGE-0147
- `physical_page`: 147
- `printed_page`: "147"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.27.1 HSADC_Single"

### PAGE-0148
- `physical_page`: 148
- `printed_page`: "148"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "First you need to initialize the system and peripheral clock, and then the HSADC ports."

### PAGE-0149
- `physical_page`: 149
- `printed_page`: "149"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.27.1.2 Prerequisites"

### PAGE-0150
- `physical_page`: 150
- `printed_page`: "150"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.27.2.1 Prerequisites"

### PAGE-0151
- `physical_page`: 151
- `printed_page`: "151"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.27.3 HSADC_Single_Internal_Trigger"

### PAGE-0152
- `physical_page`: 152
- `printed_page`: "152"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.2 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.27.4.1 Prerequisites"

### PAGE-0153
- `physical_page`: 153
- `printed_page`: "153"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.3 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.27.4.3 Steps to Run"

### PAGE-0154
- `physical_page`: 154
- `printed_page`: "154"
- `section_path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.28.2 Prerequisites"

### PAGE-0155
- `physical_page`: 155
- `printed_page`: "155"
- `section_path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.28.4.1.2 For IAR Embedded Workbench"

### PAGE-0156
- `physical_page`: 156
- `printed_page`: "156"
- `section_path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.29.2 Prerequisites"

### PAGE-0157
- `physical_page`: 157
- `printed_page`: "157"
- `section_path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.29.3 MCU Ports"

### PAGE-0158
- `physical_page`: 158
- `printed_page`: "158"
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.31 LIN"

### PAGE-0159
- `physical_page`: 159
- `printed_page`: "159"
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.31.3 MCU Ports"

### PAGE-0160
- `physical_page`: 160
- `printed_page`: "160"
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0161
- `physical_page`: 161
- `printed_page`: "161"
- `section_path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.32 LU"

### PAGE-0162
- `physical_page`: 162
- `printed_page`: "162"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.33 Mailbox"

### PAGE-0163
- `physical_page`: 163
- `printed_page`: "163"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.33.4 Steps to Run"

### PAGE-0164
- `physical_page`: 164
- `printed_page`: "164"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "Debug Settings for CoreB:"

### PAGE-0165
- `physical_page`: 165
- `printed_page`: "165"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.33.4.2 For IAR Embedded Workbench"

### PAGE-0166
- `physical_page`: 166
- `printed_page`: "166"
- `section_path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.34.3 MCU Ports"

### PAGE-0167
- `physical_page`: 167
- `printed_page`: "167"
- `section_path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.35 MPU"

### PAGE-0168
- `physical_page`: 168
- `printed_page`: "168"
- `section_path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.35.4.2 For IAR Embedded Workbench"

### PAGE-0169
- `physical_page`: 169
- `printed_page`: "169"
- `section_path`: "Chapter 2 Examples and Demos / 2.36 MSC"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0170
- `physical_page`: 170
- `printed_page`: "170"
- `section_path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.36.1 Description"

### PAGE-0171
- `physical_page`: 171
- `printed_page`: "171"
- `section_path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.37 Multicore"

### PAGE-0172
- `physical_page`: 172
- `printed_page`: "172"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.37.4 Steps to Run"

### PAGE-0173
- `physical_page`: 173
- `printed_page`: "173"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.2 Code Logic"
- `content_types`: ["text", "image"]
- `anchor`: "2.38.1.2 Code Logic"

### PAGE-0174
- `physical_page`: 174
- `printed_page`: "174"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `content_types`: ["text"]
- `anchor`: "2.38.1.3 Prerequisites"

### PAGE-0175
- `physical_page`: 175
- `printed_page`: "175"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `content_types`: ["text", "image"]
- `anchor`: "> Choose the output file path, then add the generated byte data and length to AppCode.c/h"

### PAGE-0176
- `physical_page`: 176
- `printed_page`: "176"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.38.1.7 Notes"

### PAGE-0177
- `physical_page`: 177
- `printed_page`: "177"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.3 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.38.2.2 Code Logic"

### PAGE-0178
- `physical_page`: 178
- `printed_page`: "178"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `content_types`: ["text"]
- `anchor`: "2.38.2.4 MCU Ports"

### PAGE-0179
- `physical_page`: 179
- `printed_page`: "179"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `content_types`: ["text", "image"]
- `anchor`: "> Choose the output file path, then add the generated byte data and length to AppCode.c/h"

### PAGE-0180
- `physical_page`: 180
- `printed_page`: "180"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.7 Notes"
- `content_types`: ["text", "image"]
- `anchor`: "2.38.2.7 Notes"

### PAGE-0181
- `physical_page`: 181
- `printed_page`: "181"
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.39.2 Prerequisites"

### PAGE-0182
- `physical_page`: 182
- `printed_page`: "182"
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "Plug in the 12V power."

### PAGE-0183
- `physical_page`: 183
- `printed_page`: "183"
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.40 PMC"

### PAGE-0184
- `physical_page`: 184
- `printed_page`: "184"
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.40.2 Prerequisites"

### PAGE-0185
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.41.2 Prerequisites"

### PAGE-0186
- `physical_page`: 186
- `printed_page`: "186"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE"
- `content_types`: ["text"]
- `anchor`: "2.41.4 Steps to Run"

### PAGE-0187
- `physical_page`: 187
- `printed_page`: "187"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.1.4.2 For IAR Embedded Workbench"

### PAGE-0188
- `physical_page`: 188
- `printed_page`: "188"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.2.4 Steps to Run"

### PAGE-0189
- `physical_page`: 189
- `printed_page`: "189"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.3.3 MCU Ports"

### PAGE-0190
- `physical_page`: 190
- `printed_page`: "190"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.4.3 MCU Ports"

### PAGE-0191
- `physical_page`: 191
- `printed_page`: "191"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.5 QDT_ICPM_Demo"

### PAGE-0192
- `physical_page`: 192
- `printed_page`: "192"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.5.4.3 For Keil"

### PAGE-0193
- `physical_page`: 193
- `printed_page`: "193"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.42.6.4.2 For IAR Embedded Workbench"

### PAGE-0194
- `physical_page`: 194
- `printed_page`: "194"
- `section_path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.43.2 Prerequisites"

### PAGE-0195
- `physical_page`: 195
- `printed_page`: "195"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.44.1 RTC_Alarm"

### PAGE-0196
- `physical_page`: 196
- `printed_page`: "196"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.44.1.3 MCU Ports"

### PAGE-0197
- `physical_page`: 197
- `printed_page`: "197"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "2.44.2.2 Prerequisites"

### PAGE-0198
- `physical_page`: 198
- `printed_page`: "198"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.44.2.4.3 For Keil"

### PAGE-0199
- `physical_page`: 199
- `printed_page`: "199"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.4 Steps to Run / 2.44.3.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.44.3.4 Steps to Run"

### PAGE-0200
- `physical_page`: 200
- `printed_page`: "200"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `anchor`: "2.44.4.2 Prerequisites"

### PAGE-0201
- `physical_page`: 201
- `printed_page`: "201"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.44.4.4.2 For IAR Embedded Workbench"

### PAGE-0202
- `physical_page`: 202
- `printed_page`: "202"
- `section_path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "Import the SC6258XQ project, then build and download it."

### PAGE-0203
- `physical_page`: 203
- `printed_page`: "203"
- `section_path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.46 SCST"

### PAGE-0204
- `physical_page`: 204
- `printed_page`: "204"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.46.4 Steps to Run"

### PAGE-0205
- `physical_page`: 205
- `printed_page`: "205"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.47.1.2 Prerequisites"

### PAGE-0206
- `physical_page`: 206
- `printed_page`: "206"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.47.2 SDADC_Continous"

### PAGE-0207
- `physical_page`: 207
- `printed_page`: "207"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.47.2.2 Prerequisites"

### PAGE-0208
- `physical_page`: 208
- `printed_page`: "208"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.47.3.2 Prerequisites"

### PAGE-0209
- `physical_page`: 209
- `printed_page`: "209"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: "2.48 SEC"

### PAGE-0210
- `physical_page`: 210
- `printed_page`: "210"
- `section_path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.48.4 Steps to Run"

### PAGE-0211
- `physical_page`: 211
- `printed_page`: "211"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.2 Prerequisites"
- `content_types`: ["text"]
- `anchor`: "2.49.3 MCU Ports"

### PAGE-0212
- `physical_page`: 212
- `printed_page`: "212"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "2.50.1.3 MCU Ports"

### PAGE-0213
- `physical_page`: 213
- `printed_page`: "213"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.1 For FC_IDE"
- `content_types`: ["text"]
- `anchor`: "2.50.1.4.3 For Keil"

### PAGE-0214
- `physical_page`: 214
- `printed_page`: "214"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.50.2.4.2 For IAR Embedded Workbench"

### PAGE-0215
- `physical_page`: 215
- `printed_page`: "215"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `anchor`: "2.50.3.3 MCU Ports"

### PAGE-0216
- `physical_page`: 216
- `printed_page`: "216"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.1 For FC_IDE"
- `content_types`: ["text"]
- `anchor`: "2.50.3.4.3 For Keil"

### PAGE-0217
- `physical_page`: 217
- `printed_page`: "217"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.50.4.4.2 For IAR Embedded Workbench"

### PAGE-0218
- `physical_page`: 218
- `printed_page`: "218"
- `section_path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"
- `content_types`: ["text", "image"]
- `anchor`: "2.51.2 Prerequisites"

### PAGE-0219
- `physical_page`: 219
- `printed_page`: "219"
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.51.4 Steps to Run"

### PAGE-0220
- `physical_page`: 220
- `printed_page`: "220"
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.52.2 Prerequisites"

### PAGE-0221
- `physical_page`: 221
- `printed_page`: "221"
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.52.3 MCU Ports"

### PAGE-0222
- `physical_page`: 222
- `printed_page`: "222"
- `section_path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.53.3 MCU Ports"

### PAGE-0223
- `physical_page`: 223
- `printed_page`: "223"
- `section_path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "The sequence diagram of the demo is as follows:"

### PAGE-0224
- `physical_page`: 224
- `printed_page`: "224"
- `section_path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.54.2 Prerequisites"

### PAGE-0225
- `physical_page`: 225
- `printed_page`: "225"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "2.54.3 MCU Ports"

### PAGE-0226
- `physical_page`: 226
- `printed_page`: "226"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "Note: Using this method will greatly consume CPU resources, especially when the PWM frequency is high, the interrupt"

### PAGE-0227
- `physical_page`: 227
- `printed_page`: "227"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.55.1.2 Prerequisites"

### PAGE-0228
- `physical_page`: 228
- `printed_page`: "228"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.55.2.2 Prerequisites"

### PAGE-0229
- `physical_page`: 229
- `printed_page`: "229"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.55.2.3 MCU Ports"

### PAGE-0230
- `physical_page`: 230
- `printed_page`: "230"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.55.3.2 Prerequisites"

### PAGE-0231
- `physical_page`: 231
- `printed_page`: "231"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `content_types`: ["text", "image"]
- `anchor`: "2.55.3.3 MCU Ports"

### PAGE-0232
- `physical_page`: 232
- `printed_page`: "232"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.55.4 Tpu_Pwm_FlexCore"

### PAGE-0233
- `physical_page`: 233
- `printed_page`: "233"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0234
- `physical_page`: 234
- `printed_page`: "234"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `content_types`: ["text"]
- `anchor`: "2.55.4.2 Prerequisites"

### PAGE-0235
- `physical_page`: 235
- `printed_page`: "235"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0236
- `physical_page`: 236
- `printed_page`: "236"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.55.5.2 Prerequisites"

### PAGE-0237
- `physical_page`: 237
- `printed_page`: "237"
- `section_path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.2 Prerequisites"
- `content_types`: ["text", "image"]
- `anchor`: "2.56.2 Prerequisites"

### PAGE-0238
- `physical_page`: 238
- `printed_page`: "238"
- `section_path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.4 Steps to Run / 2.56.4.3 For Keil"
- `content_types`: ["text"]
- `anchor`: "2.56.3 MCU Ports"

### PAGE-0239
- `physical_page`: 239
- `printed_page`: "239"
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.1 Description"
- `content_types`: ["text", "image"]
- `anchor`: "WDOG initialization settings are as following:"

### PAGE-0240
- `physical_page`: 240
- `printed_page`: "240"
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.2 Prerequisites"
- `content_types`: ["text"]
- `anchor`: "2.57.2 Prerequisites"

### PAGE-0241
- `physical_page`: 241
- `printed_page`: "241"
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `content_types`: ["text"]
- `anchor`: "2.57.3 MCU Ports"

### PAGE-0242
- `physical_page`: 242
- `printed_page`: "242"
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `content_types`: ["text", "image"]
- `anchor`: ""

### PAGE-0243
- `physical_page`: 243
- `printed_page`: "243"
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["revision_history", "text"]
- `anchor`: "Revision History"

### PAGE-0244
- `physical_page`: 244
- `printed_page`: "244"
- `section_path`: "Back Matter / Disclaimer"
- `content_types`: ["legal_disclaimer", "text"]
- `anchor`: "Disclaimer"

### PAGE-0245
- `physical_page`: 245
- `printed_page`: "245"
- `section_path`: "Back Matter / Trailing sparse page"
- `content_types`: ["sparse_or_blank"]
- `anchor`: ""

## 5. Page Segment Index
### SEG-0001
- `physical_pages`: 1
- `printed_pages`: []
- `section_path`: "Front Matter / Cover"
- `content_types`: ["cover", "sparse_or_blank"]
- `summary`: "Cover page for FC7300F8MDQ SDK Quick Start Rev.0.2."
- `keywords`: ["Rev"]
- `anchors`:
  - null

### SEG-0002
- `physical_pages`: 2
- `printed_pages`: ["2"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["ADC", "ADC_Compare", "ADC_Discontinuous", "ADC_Sequence_Group", "ADC_Single", "ADC_Single_DMA", "ADC_Standby", "ADC_Standby_With_Tstmp", "AONTIMER", "AONTIMER_PulseCounter", "AONTIMER_TimeCounter", "CLK"]
- `anchors`:
  - `p2`: "Table of Contents"

### SEG-0003
- `physical_pages`: 3
- `printed_pages`: ["3"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Ports", "Run", "Steps", "Description", "Prerequisites", "CORDIC", "CPM", "CRC", "CRC_Demo", "CRC_Demo_Hard_Soft_Compare", "CRC_Demo_Multi_Step"]
- `anchors`:
  - `p3`: "2.10.1 Eftu_SignalDetect ..............................................................................................."

### SEG-0004
- `physical_pages`: 4
- `printed_pages`: ["4"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Description", "Ports", "Prerequisites", "Run", "Steps", "CAN_DMA_Transmit", "CAN_EnhanceFIFO_DMA", "CAN_LegacyFIFO_DMA", "CAN_MB_EnhancedFIFO", "CAN_MB_LegacyFIFO", "DSP"]
- `anchors`:
  - `p4`: "2.14.1 FCPIT_TimeCounter ..............................................................................................."

### SEG-0005
- `physical_pages`: 5
- `printed_pages`: ["5"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Description", "Ports", "Prerequisites", "Run", "Steps", "FREQM", "FTU", "GPIO", "GPIO_DigitalFilter", "GPIO_EdgeDetect", "GPIO_Toggle"]
- `anchors`:
  - `p5`: "2.22.1 Description ....................................................................................................."

### SEG-0006
- `physical_pages`: 6
- `printed_pages`: ["6"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Description", "Prerequisites", "Run", "Steps", "Ports", "ISM", "LIN", "MAM", "MPU", "MSC", "Mailbox"]
- `anchors`:
  - `p6`: "2.29.4 Steps to Run ...................................................................................................."

### SEG-0007
- `physical_pages`: 7
- `printed_pages`: ["7"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Description", "Ports", "Run", "Steps", "Prerequisites", "OTA", "OTA_NvrMode", "OTA_RegisterMode", "PMC", "PTIMER", "QDT"]
- `anchors`:
  - `p7`: "2.37.3 MCU Ports ......................................................................................................."

### SEG-0008
- `physical_pages`: 8
- `printed_pages`: ["8"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Description", "Ports", "Prerequisites", "Run", "Steps", "SCST", "SDADC", "SDADC_Calibration", "SDADC_Continous", "SDADC_Single", "SEC"]
- `anchors`:
  - `p8`: "2.45.2 Prerequisites ..................................................................................................."

### SEG-0009
- `physical_pages`: 9
- `printed_pages`: ["9"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Table of Contents page listing quick-start chapters, IDE setup sections, peripheral example sections, revision history, and disclaimer."
- `keywords`: ["MCU", "Ports", "Prerequisites", "Run", "Steps", "Description", "TMU", "TPU", "TSTMP", "WDOG", "Disclaimer", "History"]
- `anchors`:
  - `p9`: "2.53.2 Prerequisites ..................................................................................................."

### SEG-0010
- `physical_pages`: 10
- `printed_pages`: ["10"]
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.1 SDK Directory Structure"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.2.1 SDK Directory Structure. Main page content: Chapter 1 Introduction The Flagchip FC7xxx MCU Software Development Kit (SDK) is a collection of software development tools that allows software engineers to develop diverse applications for the FC7xxx MCU family easier. This toolkit integrates essential software"
- `keywords`: ["MCU", "software", "FC7300F8MDQ", "FC7xxx", "applications", "develop", "family", "allows", "Audience", "basic", "cases", "circuits"]
- `anchors`:
  - `p10`: "Chapter 1 Introduction"

### SEG-0011
- `physical_pages`: 11
- `printed_pages`: ["11"]
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Indexes 1.2.2 Abbreviations. Main page content: 1.2.2 Abbreviations The following abbreviations are used in this document. Abbreviation Description"
- `keywords`: ["Advanced", "AHB-Lite", "Bus", "APB", "CPU", "ACC", "ADC", "AFCB", "AHB", "AHBD", "AHBP", "AHBS"]
- `anchors`:
  - `p11`: "1.2.2 Abbreviations"

### SEG-0012
- `physical_pages`: 12
- `printed_pages`: ["12"]
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Indexes 1.2.2 Abbreviations. Main page content: Abbreviation Description DMAMUX Direct Memory Access Multiplexer"
- `keywords`: ["Unit", "Memory", "DMAMUX", "DPFPU", "DSE", "DSP", "DTCM", "DWP", "DWT", "ECB", "ECC", "ECM"]
- `anchors`:
  - `p12`: "Abbreviation"

### SEG-0013
- `physical_pages`: 13
- `printed_pages`: ["13"]
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Indexes 1.2.2 Abbreviations. Main page content: Abbreviation Description Global Time Base Human-Machine Interface"
- `keywords`: ["Memory", "Interrupt", "Data", "GTB", "HMI", "HRPWM", "HSADC", "HSM", "HVD", "IIC/I2C", "Interface", "INTM"]
- `anchors`:
  - `p13`: "Abbreviation"

### SEG-0014
- `physical_pages`: 14
- `printed_pages`: ["14"]
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Indexes 1.2.2 Abbreviations. Main page content: Abbreviation Description Oscillator Peripheral Access Protection"
- `keywords`: ["System", "Clock", "Controller", "Data", "PWM", "Control", "Management", "OSC", "PAP", "PCC", "Peripheral", "PIT"]
- `anchors`:
  - `p14`: "Abbreviation"

### SEG-0015
- `physical_pages`: 15
- `printed_pages`: ["15"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `content_types`: ["text"]
- `summary`: "Indexes 1.3.1 FC_IDE. Main page content: Abbreviation Description SPFPU Single-precision Floating Point Unit"
- `keywords`: ["FC_IDE", "Debug_RAM", "Unit", "IDE", "select", "FC_Project", "IAR", "IDEs", "Interface", "loaded", "Port", "project"]
- `anchors`:
  - `p15`: "1.3.1 FC_IDE"

### SEG-0016
- `physical_pages`: 16
- `printed_pages`: ["16"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.1 FC_IDE. Main page content: Select Build Project to build the project. Create configuration and debug. There are two ways to create configuration and debug for a project. Method 1: Click the upside-down triangle icon ("
- `keywords`: ["debug", "Application", "configuration", "Debug", "icon", "project", "begins", "Build", "build", "Click", "Create", "create"]
- `anchors`:
  - `p16`: "Select Build Project to build the project."

### SEG-0017
- `physical_pages`: 17
- `printed_pages`: ["17"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.1 FC_IDE. Main page content: Note: If there is only one debug option for a project, there will be no pop-up dialog, and the debug will start immediately. Method 2: Click the upside-down triangle icon ("
- `keywords`: ["Debug", "Configurations", "dialog", "GDB", "SEGGER", "there", "debug", "icon", "Note", "project", "select", "Application"]
- `anchors`:
  - `p17`: "Note: If there is only one debug option for a project, there will be no pop-up dialog, and the debug will start"

### SEG-0018
- `physical_pages`: 18
- `printed_pages`: ["18"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.2 IAR Embedded Workbench. Main page content: Click Debug to start debugging. At the same time, this process will download the binary file of the project program to the target MCU. For details on how to get started with the FC_IDE, refer to the FC_IDE User Guide. 1.3.2 IAR Embedded Workbench"
- `keywords`: ["IAR", "FC_IDE", "IDE", "MCU", "debugging", "details", "Embedded", "how", "Workbench", "add", "also", "applications"]
- `anchors`:
  - `p18`: "1.3.2 IAR Embedded Workbench"

### SEG-0019
- `physical_pages`: 19
- `printed_pages`: ["19"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.2 IAR Embedded Workbench. Main page content: Select the installation path of Keil under Search (IAR Systems) Result, and click Start Patch. Note: If there is no installation path shown, click Add Path to add the path manually, click Confirm, and then click Start Patch."
- `keywords`: ["click", "IAR", "path", "installation", "Patch", "Add", "add", "Confirm", "Keil", "manually", "Note", "Path"]
- `anchors`:
  - `p19`: "Select the installation path of Keil under Search (IAR Systems) Result, and click Start Patch."

### SEG-0020
- `physical_pages`: 20
- `printed_pages`: ["20"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: \"Patch IAR successfully!\" will be displayed if patched successfully. Then you can close the setup program. 1.3.3 Keil Before running an example by using the Keil, take the following two steps: Install Patch for Keil."
- `keywords`: ["Keil", "IAR", "Patch", "steps", "successfully", "add", "chips", "close", "displayed", "example", "following", "follows"]
- `anchors`:
  - `p20`: "1.3.3 Keil"

### SEG-0021
- `physical_pages`: 21
- `printed_pages`: ["21"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: Double-click Keil_Patch_SetupTool_vX.X.X.exe (Latest version). Select \"我接受安装须知\", and click OK. Select the installation path of Keil under Search (Keil Systems) Result, and click Start Patch. Note: If there is no installation path shown, click Add Path to add the path manually, cl"
- `keywords`: ["click", "path", "installation", "Keil", "Patch", "Select", "Add", "add", "Confirm", "Double-click", "exe", "Keil_Patch_SetupTool_vX"]
- `anchors`:
  - `p21`: "Double-click Keil_Patch_SetupTool_vX.X.X.exe (Latest version)."

### SEG-0022
- `physical_pages`: 22
- `printed_pages`: ["22"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: \"Patch Keil successfully!\" will be displayed if patched successfully. Then you can close the setup program."
- `keywords`: ["successfully", "close", "displayed", "Keil", "Patch", "patched", "program", "setup"]
- `anchors`:
  - `p22`: "\"Patch Keil successfully!\" will be displayed if patched successfully. Then you can close the setup program."

### SEG-0023
- `physical_pages`: 23
- `printed_pages`: ["23"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: After opening a Keil project, click the icon (Options for Target) in the toolbar, and click the Device tab, the Flagchip series pack information will be shown. Configure Keil before downloading or debugging."
- `keywords`: ["click", "Keil", "project", "debugging", "downloading", "icon", "Options", "Target", "toolbar", "Configure", "Device", "following"]
- `anchors`:
  - `p23`: "After opening a Keil project, click the icon"

### SEG-0024
- `physical_pages`: 24
- `printed_pages`: ["24"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: In the Debug tab, select J-LINK / J-TRACE Cortex from the Use drop-down list, and click Settings. Under the JTAG Device Tool Chain, the FC7300 series-related information will be displayed. Note: Make sure \"JTAG\" is selected for Ports."
- `keywords`: ["JTAG", "J-LINK", "J-TRACE", "Chain", "click", "Cortex", "Debug", "Device", "displayed", "drop-down", "FC7300", "information"]
- `anchors`:
  - `p24`: "In the Debug tab, select J-LINK / J-TRACE Cortex from the Use drop-down list, and click Settings."

### SEG-0025
- `physical_pages`: 25
- `printed_pages`: ["25"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: In the Flash Download tab, click Add. In the pop-up Add Flash Programming Algorithm dialog box, select \"FC7300 8MB Flash\" and click Add."
- `keywords`: ["Add", "Flash", "click", "Algorithm", "box", "dialog", "Download", "FC7300", "pop-up", "Programming", "select", "tab"]
- `anchors`:
  - `p25`: "In the Flash Download tab, click Add."

### SEG-0026
- `physical_pages`: 26
- `printed_pages`: ["26"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: After completing the adding, FC7300-related information will be displayed in the Programming Algorithm box, and click 确定. In the Debug tab, click OK, then you can start downloading or debugging."
- `keywords`: ["click", "adding", "Algorithm", "box", "completing", "Debug", "debugging", "displayed", "downloading", "FC7300-related", "information", "Programming"]
- `anchors`:
  - `p26`: "After completing the adding, FC7300-related information will be displayed in the Programming Algorithm box,"

### SEG-0027
- `physical_pages`: 27
- `printed_pages`: ["27"]
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.3.3 Keil. Main page content: Hardware Environment The top view and bottom view of the FC7300F8MDQ demo board are as follows. Top view:"
- `keywords`: ["FC7300F8MDQ", "view", "board", "bottom", "demo", "Environment", "follows", "Hardware", "top", "Top"]
- `anchors`:
  - `p27`: "Hardware Environment"

### SEG-0028
- `physical_pages`: 28
- `printed_pages`: ["28"]
- `section_path`: "Chapter 1 Introduction / 1.4 Hardware Environment"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 1.4 Hardware Environment. Main page content: Bottom view:"
- `keywords`: ["Bottom", "view"]
- `anchors`:
  - `p28`: "Bottom view:"

### SEG-0029
- `physical_pages`: 29
- `printed_pages`: ["29"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1 ADC within the SDK Examples and Demos chapter. Main page content: Chapter 2 Examples and Demos Besides the peripheral drivers described in FC7300 SDK User Guide, the SDK comes with a number of example applications covering the most common use cases. This chapter describes several driver examples for different peripherals. With these examples, u"
- `keywords`: ["ADC", "internal", "voltage", "ADC0_CHANNEL_11", "ADC0_CHANNEL_V11", "ADC0_CHANNEL_V25", "ADC0_CHANNEL_VBG_BUFFER", "examples", "Internal", "PTA29", "UART", "USB"]
- `anchors`:
  - `p29`: "Chapter 2 Examples and Demos"

### SEG-0030
- `physical_pages`: 30
- `printed_pages`: ["30"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.1.1 Description within the SDK Examples and Demos chapter. Main page content: UART data format: 115200/8/N/1. There are seven ADC demos: 2.1.1 ADC_Single 2.1.1.1 Description"
- `keywords`: ["ADC", "ADC_Single", "UART", "demo", "sequence", "data", "demos", "Description", "diagram", "follows", "format", "how"]
- `anchors`:
  - `p30`: "2.1.1 ADC_Single"

### SEG-0031
- `physical_pages`: 31
- `printed_pages`: ["31"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.1.1 Description within the SDK Examples and Demos chapter. Main page content: First, initialize the system and peripheral clock, and then the ADC ports. In the ADC initialization function, specify the ADC resolution, trigger mode, and sequence mode. You can also configure the ADC sample time and average mode, etc. After initializing the ADC instance, confi"
- `keywords`: ["ADC", "instance", "interrupt", "configure", "mode", "result", "specify", "which", "callback", "channels", "function", "also"]
- `anchors`:
  - `p31`: "First, initialize the system and peripheral clock, and then the ADC ports."

### SEG-0032
- `physical_pages`: 32
- `printed_pages`: ["32"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.1.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["IAR", "DMA", "ADC_Single", "FC_IDE", "ADC", "FC7300F8MDQ", "steps", "sure", "ADC0_SE11", "ADC_Single_DMA", "CPU", "data"]
- `anchors`:
  - `p32`: "2.1.1.2 Prerequisites"

### SEG-0033
- `physical_pages`: 33
- `printed_pages`: ["33"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.2 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.2.2 MCU Ports within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows: 2.1.2.1 Prerequisites Same as ADC_Single. 2.1.2.2 MCU Ports"
- `keywords`: ["ADC_Single", "MCU", "Same", "demo", "diagram", "follows", "Ports", "Prerequisites", "sequence"]
- `anchors`:
  - `p33`: "2.1.2.1 Prerequisites"

### SEG-0034
- `physical_pages`: 34
- `printed_pages`: ["34"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.1.3.1 Description within the SDK Examples and Demos chapter. Main page content: 2.1.2.3 Steps to Run Same as ADC_Single. 2.1.3 ADC_Discontinuous 2.1.3.1 Description"
- `keywords`: ["ADC", "ADC_Single", "PTIMER", "ADC_Discontinuous", "demo", "channels", "mode", "between", "configure", "control", "Description", "different"]
- `anchors`:
  - `p34`: "2.1.2.3 Steps to Run"

### SEG-0035
- `physical_pages`: 35
- `printed_pages`: ["35"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.3.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.1.3.2 Prerequisites Same as ADC_Single. 2.1.3.3 MCU Ports Same as ADC_Single."
- `keywords`: ["ADC_Single", "MCU", "Same", "Ports", "Prerequisites"]
- `anchors`:
  - `p35`: "2.1.3.2 Prerequisites"

### SEG-0036
- `physical_pages`: 36
- `printed_pages`: ["36"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.1.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.1.3.4 Steps to Run Same as ADC_Single. 2.1.4 ADC_Compare The purpose of this demo is to show you the usage of ADC compare feature mode. In this demo, you can configure the ADC"
- `keywords`: ["ADC", "ADC_Single", "demo", "ADC_Compare", "compare", "mode", "beyond", "callback", "configure", "enter", "feature", "initialization"]
- `anchors`:
  - `p36`: "2.1.3.4 Steps to Run"

### SEG-0037
- `physical_pages`: 37
- `printed_pages`: ["37"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.2 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.4.2 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.1.4.1 Prerequisites Same as ADC_Single 2.1.4.2 MCU Ports Same as ADC_Single"
- `keywords`: ["ADC_Single", "MCU", "Same", "Ports", "Prerequisites"]
- `anchors`:
  - `p37`: "2.1.4.1 Prerequisites"

### SEG-0038
- `physical_pages`: 38
- `printed_pages`: ["38"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.3 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.1.4.3 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.1.4.3 Steps to Run The main steps are the same as ADC_Single. If you adjust the adjustable resistor on the board, the program will enter the interrupt callback function of the comparison function. 2.1.5 ADC_Sequence_Group"
- `keywords`: ["ADC", "ADC_Sequence_Group", "ADC_Single", "FC7300F8MDQ", "FTU", "mode", "demo", "function", "groups", "they", "triggered", "adjust"]
- `anchors`:
  - `p38`: "2.1.4.3 Steps to Run"

### SEG-0039
- `physical_pages`: 39
- `printed_pages`: ["39"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.1 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.5.1 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.1.5.1 Prerequisites Same as ADC_Single."
- `keywords`: ["ADC_Single", "Prerequisites", "Same"]
- `anchors`:
  - `p39`: "2.1.5.1 Prerequisites"

### SEG-0040
- `physical_pages`: 40
- `printed_pages`: ["40"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.3 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.1.5.3 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.1.5.2 MCU Ports Same as ADC_Single. 2.1.5.3 Steps to Run Same as ADC_Single."
- `keywords`: ["ADC", "mode", "ADC_Single", "ADC1", "ADC2", "ADC_Standby", "AONTIMER", "chip", "conversion", "FC7300F8MDQ", "MCU", "standby"]
- `anchors`:
  - `p40`: "2.1.5.2 MCU Ports"

### SEG-0041
- `physical_pages`: 41
- `printed_pages`: ["41"]
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.1 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.1.6.1 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.1.6.1 Prerequisites Same as ADC_Single."
- `keywords`: ["ADC_Single", "Prerequisites", "Same"]
- `anchors`:
  - `p41`: "2.1.6.1 Prerequisites"

### SEG-0042
- `physical_pages`: 42
- `printed_pages`: ["42"]
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.2.1.1 Description within the SDK Examples and Demos chapter. Main page content: 2.1.6.2 MCU Ports Same as ADC_Single. 2.1.6.3 Steps to Run Same as ADC_Single."
- `keywords`: ["AONTIMER", "ADC_Single", "AONTIMER_TimeCounter", "demo", "ADC", "ADC_Standby_With_Tstmp", "ADC_Standy", "AONTIMER_PulseCounter", "LED", "MCU", "TSTMP", "Same"]
- `anchors`:
  - `p42`: "2.1.6.2 MCU Ports"

### SEG-0043
- `physical_pages`: 43
- `printed_pages`: ["43"]
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.2.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.2.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or micro-USB cable"
- `keywords`: ["IAR", "FC_IDE", "ALT1", "FC7300F8MDQ", "GPIO", "MUX", "steps", "AONTIMER", "AONTIMER_TimeCounter", "described", "example", "IAR_Project"]
- `anchors`:
  - `p43`: "2.2.1.2 Prerequisites"

### SEG-0044
- `physical_pages`: 44
- `printed_pages`: ["44"]
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.2.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.2.2 AONTIMER_PulseCounter 2.2.2.1 Description This demo shows how to use AONTIMER to generate an interrupt after capturing10 input pulses, and LED will be toggled. The sequence diagram of the demo is as follows:"
- `keywords`: ["FC_IDE", "MUX", "ALT1", "FC7300F8MDQ", "GPIO", "IAR", "ALT3", "AONTIMER", "AONTIMER0_CLK1", "AONTIMER_PulseCounter", "example", "LED"]
- `anchors`:
  - `p44`: "2.2.2 AONTIMER_PulseCounter"

### SEG-0045
- `physical_pages`: 45
- `printed_pages`: ["45"]
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.2.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench. Open the directory: SDK\\Example\\AONTIMER\\AONTIMER_PulseCounter\\_Project\\IAR_Project, and double-click the Aontimer_PluseCounter IAR project file with the suffix \""
- `keywords`: ["IAR", "clock", "AONTIMER", "AONTIMER_PulseCounter", "CLK", "demo", "FOSC", "FOSC_FREQUENCY", "IAR_Project", "Keil", "LED", "Note"]
- `anchors`:
  - `p45`: "2.3.1 Description"

### SEG-0046
- `physical_pages`: 46
- `printed_pages`: ["46"]
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.3.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["FC7300F8MDQ", "USB", "adapter", "Board", "cable", "computer", "debug", "debugger", "Demo", "example", "following", "J-Link"]
- `anchors`:
  - `p46`: "2.3.2 Prerequisites"

### SEG-0047
- `physical_pages`: 47
- `printed_pages`: ["47"]
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.3.3 MCU Ports Port E10: MUX = ALT2, SCG_CLOCKOUT Clock out pin 2.3.4 Steps to Run"
- `keywords`: ["UART", "FC_IDE", "IAR", "MCU", "steps", "ALT2", "bit", "described", "FC7300F8MDQ", "JTAG", "LED", "MUX"]
- `anchors`:
  - `p47`: "2.3.3 MCU Ports"

### SEG-0048
- `physical_pages`: 48
- `printed_pages`: ["48"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.4.1 Introduction within the SDK Examples and Demos chapter. Main page content: 2.4.1 Introduction The input pins are shown in the following table: CMP0_IN0 PTA23"
- `keywords`: ["CMP", "CMP0_IN2", "CMP0_IN3", "PTD17", "PTG4", "CMP0", "CMP0_IN0", "CMP0_IN1", "CMP0_IN4", "CMP0_IN5", "CMP0_IN6", "CMP0_IN7"]
- `anchors`:
  - `p48`: "2.4.1 Introduction"

### SEG-0049
- `physical_pages`: 49
- `printed_pages`: ["49"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.4.2.1 Description within the SDK Examples and Demos chapter. Main page content: 2.4.2 CMP_Interrupt 2.4.2.1 Description This demo is used in CMP module with interrupt. The sequence diagram of the demo is as follows:"
- `keywords`: ["CMP", "CMP_Interrupt", "demo", "Description", "diagram", "follows", "interrupt", "module", "sequence", "used"]
- `anchors`:
  - `p49`: "2.4.2 CMP_Interrupt"

### SEG-0050
- `physical_pages`: 50
- `printed_pages`: ["50"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.4.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: When analog voltage inputs of two channels are different, the CMP module will force an interrupt. 2.4.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board"
- `keywords`: ["FC_IDE", "IAR", "CMP", "example", "FC7300F8MDQ", "MCU", "run", "USB", "following", "steps", "sure", "active"]
- `anchors`:
  - `p50`: "2.4.2.2 Prerequisites"

### SEG-0051
- `physical_pages`: 51
- `printed_pages`: ["51"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.4.3.1 Description within the SDK Examples and Demos chapter. Main page content: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench. Open the directory: SDK\\Example\\CMP\\CMP_Interrupt\\_Project\\IAR_Project, and double-click the CMP_Interrupt IAR project file with the suffix \".eww\"."
- `keywords`: ["IAR", "CMP", "CMP_Interrupt", "DMA", "CMP_DMA", "IAR_Project", "Keil", "demo", "described", "make", "module", "Note"]
- `anchors`:
  - `p51`: "2.4.3 CMP_DMA"

### SEG-0052
- `physical_pages`: 52
- `printed_pages`: ["52"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.4.4.1 Description within the SDK Examples and Demos chapter. Main page content: 2.4.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["CMP", "IAR", "FC_IDE", "CMP_DMA", "module", "steps", "sure", "CMP_ChannelScan_Interrupt", "DAC", "described", "example", "FC7300F8MDQ"]
- `anchors`:
  - `p52`: "2.4.3.2 Prerequisites"

### SEG-0053
- `physical_pages`: 53
- `printed_pages`: ["53"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.4.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.4.4.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["FC_IDE", "IAR", "example", "FC7300F8MDQ", "MCU", "run", "USB", "following", "steps", "sure", "active", "Board"]
- `anchors`:
  - `p53`: "2.4.4.2 Prerequisites"

### SEG-0054
- `physical_pages`: 54
- `printed_pages`: ["54"]
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.4.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench. Open the directory: SDK\\Example\\CMP\\CMP_ChannelScan_Interrupt\\_Project\\IAR_Project, and double-click the CMP_ChannelScan_Interrupt IAR project file with the suffi"
- `keywords`: ["IAR", "UART", "USB", "steps", "CMU", "described", "example", "FC7300F8MDQ", "Keil", "ALT3", "CMP_ChannelScan_Interrupt", "FC_IDE"]
- `anchors`:
  - `p54`: "2.5.1 Description"

### SEG-0055
- `physical_pages`: 55
- `printed_pages`: ["55"]
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.6.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: If the count value is between min and max, it means the clock is working normally. CORDIC 2.6.1 Description This demo is just for CORDIC drive test. CORDIC is a simplified algorithm module, which transforms many complex"
- `keywords`: ["USB", "FC7300F8MDQ", "UART", "CORDIC", "FC_IDE", "ALT3", "FCUART1", "MUX", "TYPE-C", "USB-2-UART", "cable", "MCU"]
- `anchors`:
  - `p55`: "2.6.1 Description"

### SEG-0056
- `physical_pages`: 56
- `printed_pages`: ["56"]
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.6.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.6.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "CPM", "CPM_UserIRQHandler", "FPU", "FPU-generated", "IAR_Project", "Keil", "Note", "steps", "Cordic_Demo", "described", "Embedded"]
- `anchors`:
  - `p56`: "2.6.4.2 For IAR Embedded Workbench"

### SEG-0057
- `physical_pages`: 57
- `printed_pages`: ["57"]
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.7.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: The demo tells the user how to check whether the interrupt is caused by the FPU or others when a CPM interrupt occurs. If the interrupt is caused by the FPU, the user needs to set a flag and disables the CPM interrupt. The user cannot read FPSCR in ISR. In ISR, the value is read "
- `keywords`: ["USB", "FPU", "UART", "CPM", "interrupt", "ISR", "ALT3", "FC7300F8MDQ", "FCUART1", "MUX", "TYPE-C", "ABI"]
- `anchors`:
  - `p57`: "2.7.2 Prerequisites"

### SEG-0058
- `physical_pages`: 58
- `printed_pages`: ["58"]
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.7.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Select GNU Arm Cross Assembler > Preprocessor, add __FPU_PRESENT=1 and FPU_USED_ENABLE, and then click Apply. Click the Apply and Close button."
- `keywords`: ["FPU_USED_ENABLE", "GNU", "Apply", "add", "Arm", "Assembler", "button", "click", "Click", "Close", "Cross", "Preprocessor"]
- `anchors`:
  - `p58`: "Select GNU Arm Cross Assembler > Preprocessor, add __FPU_PRESENT=1 and FPU_USED_ENABLE, and then"

### SEG-0059
- `physical_pages`: 59
- `printed_pages`: ["59"]
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.7.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Build the project and download it. The steps to run the example are as follows: Plug in the USB Type-C cable and open the up-machine (UART2 115200/8/N/1). Import the Cpm_Example project, then build and download it."
- `keywords`: ["CRC", "bit", "CRC_DATA", "data", "CRC_CR", "mode", "steps", "FC_IDE", "IAR", "USB", "WAS", "CCITT"]
- `anchors`:
  - `p59`: "Build the project and download it."

### SEG-0060
- `physical_pages`: 60
- `printed_pages`: ["60"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.8.1.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.8.1 CRC_Demo 2.8.1.1 Description This demo is used in the CRC module with test data. The sequence diagram of the demo is as follows:"
- `keywords`: ["CRC", "USB", "FC7300F8MDQ", "UART", "ALT3", "CRC_Demo", "DATA", "FCUART1", "MCU", "MUX", "TXD", "TYPE-C"]
- `anchors`:
  - `p60`: "2.8.1 CRC_Demo"

### SEG-0061
- `physical_pages`: 61
- `printed_pages`: ["61"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.8.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Port A19: MUX = ALT3, UART1_RX FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection 2.8.1.4 Steps to Run"
- `keywords`: ["FC_IDE", "UART", "USB", "ALT3", "CRC_16_CCITT", "CRC_16_USB", "FC7300F8MDQ", "FCUART1", "MUX", "RXD", "TYPE-C", "UART1_RX"]
- `anchors`:
  - `p61`: "2.8.1.4 Steps to Run"

### SEG-0062
- `physical_pages`: 62
- `printed_pages`: ["62"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.8.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: The result of CRC_16_CCITT_FALSE: The result of CRC_16_MODBUS: For IAR Embedded Workbench To run the example by using the IAR, take the following steps:"
- `keywords`: ["IAR", "CRC_16_CCITT_FALSE", "CRC_16_MODBUS", "result", "Embedded", "example", "following", "run", "steps", "take", "Workbench"]
- `anchors`:
  - `p62`: "The result of CRC_16_CCITT_FALSE:"

### SEG-0063
- `physical_pages`: 63
- `printed_pages`: ["63"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.8.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench. directory: SDK\\Example\\CRC\\CRC_Demo\\_Project\\IAR_Project,"
- `keywords`: ["MUX", "USB", "CRC", "IAR", "UART", "ALT1", "FC_IDE", "GPIO", "Port", "ALT3", "FC7300F8MDQ", "FCUART1"]
- `anchors`:
  - `p63`: "2.8.2 CRC_Demo_Hard_Soft_Compare"

### SEG-0064
- `physical_pages`: 64
- `printed_pages`: ["64"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.8.3.1 Description within the SDK Examples and Demos chapter. Main page content: For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "CRC", "CRC_Demo_Hard_Soft_Compare", "CRC_Demo_Multi_Step", "IAR_Project", "Keil", "steps", "all", "calculation", "data", "demo", "described"]
- `anchors`:
  - `p64`: "2.8.3 CRC_Demo_Multi_Step"

### SEG-0065
- `physical_pages`: 65
- `printed_pages`: ["65"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.8.3.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0066
- `physical_pages`: 66
- `printed_pages`: ["66"]
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.8.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: When the input data is written successfully, the CRC result can be read from DATA register immediately. After CRC calculation, the seed value must be reset before the next CRC calculation. 2.8.3.2 Prerequisites To run the example, make sure you have the following materials:"
- `keywords`: ["IAR", "MUX", "USB", "CRC", "UART", "ALT1", "FC_IDE", "GPIO", "Port", "ALT3", "CRC_Demo_Multi_Step", "FC7300F8MDQ"]
- `anchors`:
  - `p66`: "2.8.3.2 Prerequisites"

### SEG-0067
- `physical_pages`: 67
- `printed_pages`: ["67"]
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.9.1.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: For Keil Note: Before using the Keil, make sure you have performed the steps described in Chapter 1.3.3 Keil. There are two DMA demos: DMA_Memcpy and DMA_CircularBuffer. 2.9.1 DMA_Memcpy"
- `keywords`: ["DMA", "Bsp_DMA_Init", "DMA_Channel0_TransferComplete", "DMA_Init", "DMA_InitChannel", "DMA_InitChannelInterrupt", "DMA_Memcpy", "DMA_StartChannel", "Board", "DMA_CircularBuffer", "FC7300F8MDQ", "Keil"]
- `anchors`:
  - `p67`: "2.9.1 DMA_Memcpy"

### SEG-0068
- `physical_pages`: 68
- `printed_pages`: ["68"]
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.9.2.1 Description within the SDK Examples and Demos chapter. Main page content: 1 USB Type-C cable 1 Personal computer 1 J-Link debugger 2.9.1.3 MCU Ports"
- `keywords`: ["DMA", "IAR", "buffer", "FC_IDE", "circular", "DMA_Memcpy", "steps", "described", "destStr", "DMA_CircularBuffer", "example", "IAR_Project"]
- `anchors`:
  - `p68`: "2.9.1.3 MCU Ports"

### SEG-0069
- `physical_pages`: 69
- `printed_pages`: ["69"]
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.9.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: buffer is 32 bytes, then the source data address should be 32 byte aligned. And if the source circular buffer is 100 bytes, then the source data address should be 128 byte aligned. And this rule applies to the destination address, too. 2.9.2.2 Prerequisites"
- `keywords`: ["buffer", "source", "FC_IDE", "destination", "DMA", "address", "byte", "bytes", "FC7300F8MDQ", "MCU", "transfer", "USB"]
- `anchors`:
  - `p69`: "2.9.2.2 Prerequisites"

### SEG-0070
- `physical_pages`: 70
- `printed_pages`: ["70"]
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.10.1.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "EFTU", "DMA_CircularBuffer", "DMA", "example", "FC7300F8MDQ", "IAR_Project", "Keil", "LED", "make", "PWM", "steps"]
- `anchors`:
  - `p70`: "2.10 EFTU"

### SEG-0071
- `physical_pages`: 71
- `printed_pages`: ["71"]
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports"
- `content_types`: ["text"]
- `summary`: "Indexes 2.10.2.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 1 Personal computer 1 Digital Oscilloscope 1 J-Link debugger 2.10.1.3 MCU Ports"
- `keywords`: ["USB", "MUX", "UART", "Port", "ALT3", "FCUART1", "TYPE-C", "FC7300F8MDQ", "ALT1", "ALT6", "connection", "Connector"]
- `anchors`:
  - `p71`: "2.10.1.3 MCU Ports"

### SEG-0072
- `physical_pages`: 72
- `printed_pages`: ["72"]
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.10.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Port A26: MUX = ALT1, GPIO Output Port D31: MUX = ALT1, GPIO Output 2.10.2.4 Steps to Run The steps to run the example are as follows:"
- `keywords`: ["MUX", "steps", "USB", "ALT1", "described", "FC_IDE", "GPIO", "IAR", "Port", "refer", "UART", "EFTU"]
- `anchors`:
  - `p72`: "2.10.2.4 Steps to Run"

### SEG-0073
- `physical_pages`: 73
- `printed_pages`: ["73"]
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.10.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Eftu_Pwm 2.10.4.1 Description This example shows how to use the EFTU module to generate Pwm wave. you can send \"a\" to increase the duty cycle. You can send \"m\" to increase the duty cycle, send \"f\" to generate the fault, or can send \"c\" to clear the fault."
- `keywords`: ["MUX", "Port", "USB", "UART", "ALT1", "ALT3", "GPIO", "PWM", "EFTU", "FC7300F8MDQ", "FC_IDE", "FCUART1"]
- `anchors`:
  - `p73`: "2.10.4.1 Description"

### SEG-0074
- `physical_pages`: 74
- `printed_pages`: ["74"]
- `section_path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.11.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.11.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["EIM/ERM", "ENET", "FC_IDE", "IAR", "MCU", "steps", "USB", "CPU0", "described", "DTCM0/1", "ENET_lwIP_FreeRTOS", "ENET_lwIP_NoSys"]
- `anchors`:
  - `p74`: "2.11.2 Prerequisites"

### SEG-0075
- `physical_pages`: 75
- `printed_pages`: ["75"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.1.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.12.1 ENET_lwIP_FreeRTOS 2.12.1.1 Description This demo shows how to use LWIP and ENET driver with no operation system. Board-level configurations such as system clock and port IO are initialized in prvSetupHardware function."
- `keywords`: ["PHY", "FC7300F8MDQ", "MCU", "PHY_JL311X", "PHY_JL311X_YT8531", "RGMII", "Board", "connected", "demo", "Demo", "ENET", "ENET_lwIP_FreeRTOS"]
- `anchors`:
  - `p75`: "2.12.1 ENET_lwIP_FreeRTOS"

### SEG-0076
- `physical_pages`: 76
- `printed_pages`: ["76"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.12.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 1 Power adapter 12 V 1 USB Type-C cable 1 Personal computer 1 J-Link debugger"
- `keywords`: ["MUX", "board", "Port", "wired", "ALT5", "ENET", "ALT1", "ETH", "GPIO", "GPIOOUT", "CLK", "ENET_MDIO"]
- `anchors`:
  - `p76`: "2.12.1.3 MCU Ports"

### SEG-0077
- `physical_pages`: 77
- `printed_pages`: ["77"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Connect to TCP server with net tools (netassist): Start a TCP client on PC, select the IP address (192.168.1.200) of demo board as the remote host address, and select the port 23456 (Ports used in TCP demo). Connect the server, send packets, and the demo board will"
- `keywords`: ["demo", "TCP", "UDP", "address", "board", "packets", "select", "host", "port", "send", "back", "Connect"]
- `anchors`:
  - `p77`: "Connect to TCP server with net tools (netassist):"

### SEG-0078
- `physical_pages`: 78
- `printed_pages`: ["78"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.2.1 Description within the SDK Examples and Demos chapter. Main page content: 2.12.2 ENET_lwIP_NoSys 2.12.2.1 Description This demo shows how to use LWIP and ENET driver with no operation system. Board-level configurations such as system clock and port IO are initialized in prvSetupHardware function."
- `keywords`: ["PHY", "FC7300F8MDQ", "MCU", "PHY_JL311X", "PHY_JL311X_YT8531", "RGMII", "connected", "demo", "ENET", "ENET_lwIP_NoSys", "function", "interface"]
- `anchors`:
  - `p78`: "2.12.2 ENET_lwIP_NoSys"

### SEG-0079
- `physical_pages`: 79
- `printed_pages`: ["79"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.12.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.12.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["MUX", "board", "Port", "wired", "ALT5", "ENET", "ALT1", "ETH", "GPIO", "GPIOOUT", "CLK", "ENET_MDIO"]
- `anchors`:
  - `p79`: "2.12.2.2 Prerequisites"

### SEG-0080
- `physical_pages`: 80
- `printed_pages`: ["80"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: The ethernet driver and lwip stack are implemented in this project. You can use the lwip raw interface or socket interface for network applications. The default MAC address and IP address (192.168.1.200) are defined in enet_confg.h. We have implemented a TCP server demo and a UDP"
- `keywords`: ["demo", "address", "TCP", "UDP", "board", "packets", "select", "host", "MAC", "port", "send", "server"]
- `anchors`:
  - `p80`: "The ethernet driver and lwip stack are implemented in this project. You can use the lwip raw interface or socket"

### SEG-0081
- `physical_pages`: 81
- `printed_pages`: ["81"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.3.1 Description within the SDK Examples and Demos chapter. Main page content: 2.12.3 RT_THREAD 2.12.3.1 Description The purpose of this demo is to show you the basic usage of RTTHREAD operation system and ENET SDK driver. Board-level configurations such as system clock system tick, port io, heap and console are initialized in board.c."
- `keywords`: ["PHY", "FC7300F8MDQ", "MCU", "PHY_JL311X", "PHY_JL311X_YT8531", "RGMII", "via", "connected", "ENET", "interface", "JL311X", "PHY_TYPE"]
- `anchors`:
  - `p81`: "2.12.3 RT_THREAD"

### SEG-0082
- `physical_pages`: 82
- `printed_pages`: ["82"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.3.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.12.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["ALT1", "MUX", "GPIO", "board", "FC7300F8MDQ", "Port", "wired", "ETH", "ETH_EN", "GPIOOUT", "LED1", "LED2"]
- `anchors`:
  - `p82`: "2.12.3.2 Prerequisites"

### SEG-0083
- `physical_pages`: 83
- `printed_pages`: ["83"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.12.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Port E26: GPIOOUT, 1000BaseT1 ETH_WAKE ETH WAKE - wired on board Port B19: MUX = ALT1, GPIOIN, 1000BaseT1 ETH_INT_N ETH INH - wired on board"
- `keywords`: ["MUX", "board", "Port", "ALT5", "wired", "ENET", "ETH", "ALT1", "CLK", "ENET_MDIO", "FC_IDE", "GPIOOUT"]
- `anchors`:
  - `p83`: "2.12.3.4 Steps to Run"

### SEG-0084
- `physical_pages`: 84
- `printed_pages`: ["84"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Console. Enter help on the console, all implemented command will be listed. The ping command is available on the console, you can use ping command to ping other devices. The ethernet driver and lwip stack are implemented in this project. You can use the lwip raw interface or sock"
- `keywords`: ["TCP", "demo", "address", "command", "implemented", "MAC", "ping", "server", "UDP", "applications", "board", "Connect"]
- `anchors`:
  - `p84`: "Enter help on the console, all implemented command will be listed."

### SEG-0085
- `physical_pages`: 85
- `printed_pages`: ["85"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.4.1 Description within the SDK Examples and Demos chapter. Main page content: Test UDP demo with net tools (netassist): i. Start a UDP communication on PC, select the local IP address (192.168.1.42) of your PC as the local host address, and select the port 23457 (Ports used in UDP demo). Click open and configure the IP and port of"
- `keywords`: ["demo", "UDP", "ENET", "RT_THREAD_AMP", "RTTHREAD", "address", "board", "host", "local", "packets", "port", "select"]
- `anchors`:
  - `p85`: "2.12.4 RT_THREAD_AMP"

### SEG-0086
- `physical_pages`: 86
- `printed_pages`: ["86"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.4.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: Board-level configurations such as system clock system tick, port io, heap and console are initialized in board.c. All data, bss, heap, stack, rtthread system heap are allocated to the separate DTCM for each core. User command line is supported on the UART console via USB Type-C."
- `keywords`: ["USB", "DTCM", "FC7300F8MDQ", "heap", "LED1", "LED2", "LED3", "system", "UART", "console", "core", "Type-C"]
- `anchors`:
  - `p86`: "2.12.4.2 Prerequisites"

### SEG-0087
- `physical_pages`: 87
- `printed_pages`: ["87"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.12.4.3 MCU Ports Port A26: MUX = ALT1, GPIO Output LED1 - wired on board Port D31: MUX = ALT1, GPIO Output"
- `keywords`: ["ALT1", "GPIO", "MUX", "board", "FC_IDE", "IAR", "described", "FC7300F8MDQ", "LED1", "LED2", "LED3", "LEDs"]
- `anchors`:
  - `p87`: "2.12.4.3 MCU Ports"

### SEG-0088
- `physical_pages`: 88
- `printed_pages`: ["88"]
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.12.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.13 FCIIC 2.13.1 Description This demo is just for IIC test and contains the EEPROM write/read demo. 2.13.2 Prerequisites"
- `keywords`: ["USB", "MUX", "UART", "ALT3", "ALT4", "FC7300F8MDQ", "FC_IDE", "FCUART1", "MCU", "Port", "TYPE-C", "EEPROM"]
- `anchors`:
  - `p88`: "2.13 FCIIC"

### SEG-0089
- `physical_pages`: 89
- `printed_pages`: ["89"]
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.14.1.1 Description within the SDK Examples and Demos chapter. Main page content: To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench. To use the Keil, refer to the steps described in Chapter 1.3.3 Keil. Normally, the MCU will write data to EEPROM and read the written data, and then upload the data to the PC via"
- `keywords`: ["FCPIT", "FCPIT_TimeCounter", "IAR", "data", "demo", "EEPROM", "FCPIT_ChainModeCounter", "FCPIT_Trgsel", "LED", "MCU", "UART", "described"]
- `anchors`:
  - `p89`: "2.14 FCPIT"

### SEG-0090
- `physical_pages`: 90
- `printed_pages`: ["90"]
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.14.1.4.2 For IAR Embedded Workbench within the SDK Examples and Demos chapter. Main page content: 2.14.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["FC_IDE", "IAR", "example", "FC7300F8MDQ", "MCU", "run", "following", "steps", "adapter", "Board", "computer", "debugger"]
- `anchors`:
  - `p90`: "2.14.1.2 Prerequisites"

### SEG-0091
- `physical_pages`: 91
- `printed_pages`: ["91"]
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.14.1.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench. directory: SDK\\Example\\FCPIT\\FCPIT_TimeCounter\\_Project\\IAR_Project,"
- `keywords`: ["IAR", "FCPIT", "FCPIT_TimeCounter", "demo", "FCPIT_ChainModeCounter", "IAR_Project", "Keil", "LED", "project", "channels", "described", "make"]
- `anchors`:
  - `p91`: "2.14.1.4.3 For Keil"

### SEG-0092
- `physical_pages`: 92
- `printed_pages`: ["92"]
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.14.2.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.14.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["IAR", "FC_IDE", "FCPIT", "FCPIT_ChainModeCounter", "steps", "demo", "described", "example", "FC7300F8MDQ", "FCPIT_Trgsel", "IAR_Project", "Keil"]
- `anchors`:
  - `p92`: "2.14.2.2 Prerequisites"

### SEG-0093
- `physical_pages`: 93
- `printed_pages`: ["93"]
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.14.3.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0094
- `physical_pages`: 94
- `printed_pages`: ["94"]
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.14.3.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.14.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["IAR", "example", "FC_IDE", "run", "steps", "FC7300F8MDQ", "FCPIT_Trgsel", "FCSMU", "make", "MCU", "sure", "USB"]
- `anchors`:
  - `p94`: "2.14.3.2 Prerequisites"

### SEG-0095
- `physical_pages`: 95
- `printed_pages`: ["95"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.1.1 Description within the SDK Examples and Demos chapter. Main page content: Download the FCSMU_Demo program to the MCU by JTAG. Note: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["FCSPI2", "FCSPI_TransmitReceive", "FCUART1", "FC_IDE", "GD25Q32", "IAR", "Initialize", "MCU", "SPI", "SPI2", "api", "BSP_FCUART_Init"]
- `anchors`:
  - `p95`: "2.16 FCSPI"

### SEG-0096
- `physical_pages`: 96
- `printed_pages`: ["96"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.1.1 Description within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows:"
- `keywords`: ["demo", "diagram", "follows", "sequence"]
- `anchors`:
  - `p96`: "The sequence diagram of the demo is as follows:"

### SEG-0097
- `physical_pages`: 97
- `printed_pages`: ["97"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.1.1 Description within the SDK Examples and Demos chapter. Main page content: The actual waveform of this demo is shown in the figure below:"
- `keywords`: ["actual", "below", "demo", "figure", "shown", "waveform"]
- `anchors`:
  - `p97`: "The actual waveform of this demo is shown in the figure below:"

### SEG-0098
- `physical_pages`: 98
- `printed_pages`: ["98"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.16.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["MUX", "ALT3", "pin", "ALT1", "GPIO", "FC7300F8MDQ", "MCU", "UART", "USB", "FCSPI2_PCS0", "FCSPI2_SCK", "FCSPI2_SIN"]
- `anchors`:
  - `p98`: "2.16.1.2 Prerequisites"

### SEG-0099
- `physical_pages`: 99
- `printed_pages`: ["99"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.16.2.1 Description within the SDK Examples and Demos chapter. Main page content: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench. To use the Keil, refer to the steps described in Chapter 1.3.3 Keil. 2.16.2 FCSPI_Master_Interrupt"
- `keywords`: ["transfer", "SPI", "FCSPI3", "FCUART1", "FCSPI_TransmitReceive_IT", "FCSPIn_IRQHandler", "interrupt", "mode", "FC_IDE", "function", "IAR", "Initialize"]
- `anchors`:
  - `p99`: "2.16.2 FCSPI_Master_Interrupt"

### SEG-0100
- `physical_pages`: 100
- `printed_pages`: ["100"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.2.1 Description within the SDK Examples and Demos chapter. Main page content: SPI3 has a set of pin-outs on the board, you can use a logic analyzer to connect these pins to observe the waveforms. The sequence diagram of the demo is as follows:"
- `keywords`: ["SPI3", "analyzer", "board", "connect", "demo", "diagram", "follows", "logic", "observe", "pin-outs", "pins", "sequence"]
- `anchors`:
  - `p100`: "SPI3 has a set of pin-outs on the board, you can use a logic analyzer to connect these pins to observe the waveforms."

### SEG-0101
- `physical_pages`: 101
- `printed_pages`: ["101"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.2.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.16.2.2 Prerequisites To run the example, make sure you have the following materials:"
- `keywords`: ["example", "following", "make", "materials", "Prerequisites", "run", "sure"]
- `anchors`:
  - `p101`: "2.16.2.2 Prerequisites"

### SEG-0102
- `physical_pages`: 102
- `printed_pages`: ["102"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.16.3.1 Description within the SDK Examples and Demos chapter. Main page content: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V 1 USB Type-C cable 1 Personal computer"
- `keywords`: ["DMA", "MUX", "FCSPI3", "FCUART1", "SPI", "transfer", "ALT4", "mode", "pin", "ALT1", "GPIO", "Initialize"]
- `anchors`:
  - `p102`: "2.16.2.3 MCU Ports"

### SEG-0103
- `physical_pages`: 103
- `printed_pages`: ["103"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.3.1 Description within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows:"
- `keywords`: ["demo", "diagram", "follows", "sequence"]
- `anchors`:
  - `p103`: "The sequence diagram of the demo is as follows:"

### SEG-0104
- `physical_pages`: 104
- `printed_pages`: ["104"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.3.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0105
- `physical_pages`: 105
- `printed_pages`: ["105"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.3.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0106
- `physical_pages`: 106
- `printed_pages`: ["106"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.16.4.1 Description within the SDK Examples and Demos chapter. Main page content: 2.16.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["MUX", "ALT4", "pin", "ALT1", "GPIO", "UART", "ALT3", "FC7300F8MDQ", "mode", "FCSPI3", "FCSPI3_PCS0", "FCSPI3_SCK"]
- `anchors`:
  - `p106`: "2.16.3.2 Prerequisites"

### SEG-0107
- `physical_pages`: 107
- `printed_pages`: ["107"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.4.1 Description within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows: Bsp_Clock_Init : Initialize the system and peripheral clock(FCSPI3 / FCSPI6 / FCUART1). Bsp_Port_Init :Initialize port pins used by FCSPI3/FCSPI6 and FCUART1. BSP_FCUART_Init: Initialize FCUART1."
- `keywords`: ["FCSPI3", "FCSPI6", "FCUART1", "Initialize", "BSP_FCUART_Init", "data", "FCSPI3/FCSPI6", "FCSPI_TransmitReceive_IT", "NVIC", "SPI3", "SPI6", "demo"]
- `anchors`:
  - `p107`: "The sequence diagram of the demo is as follows:"

### SEG-0108
- `physical_pages`: 108
- `printed_pages`: ["108"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.4.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0109
- `physical_pages`: 109
- `printed_pages`: ["109"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.16.4.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0110
- `physical_pages`: 110
- `printed_pages`: ["110"]
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.16.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.16.4.2 Prerequisites Same as FCSPI_Master_Polling 2.16.4.3 MCU Ports PTA26: MUX = ALT1, GPIO"
- `keywords`: ["MUX", "Demo", "Uart", "ALT4", "DMA", "pin", "ALT1", "data", "GPIO", "UART", "ALT3", "FCSPI_Master_Polling"]
- `anchors`:
  - `p110`: "2.16.4.2 Prerequisites"

### SEG-0111
- `physical_pages`: 111
- `printed_pages`: ["111"]
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.17.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.17.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["FC7300F8MDQ", "USB", "Board", "cable", "Demo", "example", "following", "make", "materials", "Prerequisites", "run", "sure"]
- `anchors`:
  - `p111`: "2.17.2 Prerequisites"

### SEG-0112
- `physical_pages`: 112
- `printed_pages`: ["112"]
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.17.4.2 For IAR Embedded Workbench within the SDK Examples and Demos chapter. Main page content: 1 USB-2-UART cable 1 Personal computer 1 J-Link debugger 2.17.3 MCU Ports"
- `keywords`: ["USB", "UART", "FC7300F8MDQ", "FC_IDE", "UART1", "ALT3", "FCUART1", "IAR", "MCU", "MUX", "TYPE-C", "USB-2-UART"]
- `anchors`:
  - `p112`: "2.17.3 MCU Ports"

### SEG-0113
- `physical_pages`: 113
- `printed_pages`: ["113"]
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.18.1.1 Description within the SDK Examples and Demos chapter. Main page content: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench. directory: SDK\\Example\\UART\\"
- `keywords`: ["IAR", "Flash", "Flash_Async_Project", "Flash_INT_Project", "IAR_Project", "Keil", "UART", "Uart_DMA_Transmit", "Uart_Idle_DMA", "demo", "described", "make"]
- `anchors`:
  - `p113`: "2.17.4.3 For Keil"

### SEG-0114
- `physical_pages`: 114
- `printed_pages`: ["114"]
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.18.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.18.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or Micro USB line"
- `keywords`: ["USB", "UART", "ALT3", "FC7300F8MDQ", "FC_IDE", "FCUART1", "IAR", "MUX", "steps", "TYPE-C", "described", "MCU"]
- `anchors`:
  - `p114`: "2.18.1.2 Prerequisites"

### SEG-0115
- `physical_pages`: 115
- `printed_pages`: ["115"]
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.18.2.1 Description within the SDK Examples and Demos chapter. Main page content: 2.18.2 Flash_INT_Project 2.18.2.1 Description This demo shows the interrupt erase and program features of Flash. The sequence diagram of the demo is as follows:"
- `keywords`: ["Flash_INT_Project", "demo", "Description", "diagram", "erase", "features", "Flash", "follows", "interrupt", "program", "sequence", "shows"]
- `anchors`:
  - `p115`: "2.18.2 Flash_INT_Project"

### SEG-0116
- `physical_pages`: 116
- `printed_pages`: ["116"]
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.18.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.18.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or Micro USB line"
- `keywords`: ["USB", "UART", "ALT3", "FC7300F8MDQ", "FC_IDE", "FCUART1", "IAR", "MUX", "steps", "TYPE-C", "described", "MCU"]
- `anchors`:
  - `p116`: "2.18.2.2 Prerequisites"

### SEG-0117
- `physical_pages`: 117
- `printed_pages`: ["117"]
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.18.3.1 Description within the SDK Examples and Demos chapter. Main page content: 2.18.3 Flash_Sync_Project 2.18.3.1 Description This demo project shows the synchronous erase and program features of Flash. The sequence diagram of the demo is as follows:"
- `keywords`: ["demo", "Description", "diagram", "erase", "features", "Flash", "Flash_Sync_Project", "follows", "program", "project", "sequence", "shows"]
- `anchors`:
  - `p117`: "2.18.3 Flash_Sync_Project"

### SEG-0118
- `physical_pages`: 118
- `printed_pages`: ["118"]
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.18.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.18.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or Micro USB line"
- `keywords`: ["USB", "UART", "ALT3", "FC7300F8MDQ", "FC_IDE", "FCUART1", "IAR", "MUX", "steps", "TYPE-C", "described", "MCU"]
- `anchors`:
  - `p118`: "2.18.3.2 Prerequisites"

### SEG-0119
- `physical_pages`: 119
- `printed_pages`: ["119"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.19.1.1 Description within the SDK Examples and Demos chapter. Main page content: 2.19 FLEXCAN 2.19.1 CAN_DMA_Transmit 2.19.1.1 Description This demo illustrates how to use Direct Memory Access (DMA) for CAN test, transmitting data on the CAN bus."
- `keywords`: ["CAN_DMA_Transmit", "clock", "DMA", "FLEXCAN", "bit", "demo", "Initialization", "module", "necessary", "rate", "system", "timing"]
- `anchors`:
  - `p119`: "2.19 FLEXCAN"

### SEG-0120
- `physical_pages`: 120
- `printed_pages`: ["120"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.19.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: DMA Initialization: Set up the Direct Memory Access (DMA) controller to handle the transmission of CAN messages. This involves configuring the DMA channels, setting the source and destination addresses, and defining the data transfer size and priority."
- `keywords`: ["MUX", "Function", "Port", "DMA", "ALT3", "GPIO", "ALT2", "ALT4", "buffers", "FC7300F8MDQ", "MCU", "output"]
- `anchors`:
  - `p120`: "2.19.1.2 Prerequisites"

### SEG-0121
- `physical_pages`: 121
- `printed_pages`: ["121"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.19.2.1 Description within the SDK Examples and Demos chapter. Main page content: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. Make sure \"Debug_Flash\" is selected as the active build configuration. To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench. To use the Keil, refer to the steps described in C"
- `keywords`: ["DMA", "module", "CAN_EnhanceFIFO_DMA", "FC_IDE", "IAR", "clock", "CPU", "data", "described", "FIFO", "Initialization", "MCU"]
- `anchors`:
  - `p121`: "2.19.2 CAN_EnhanceFIFO_DMA"

### SEG-0122
- `physical_pages`: 122
- `printed_pages`: ["122"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.19.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.19.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB-To-CAN device"
- `keywords`: ["MUX", "Function", "Port", "ALT3", "GPIO", "MCU", "ALT2", "ALT4", "FC7300F8MDQ", "FC_IDE", "IAR", "output"]
- `anchors`:
  - `p122`: "2.19.2.2 Prerequisites"

### SEG-0123
- `physical_pages`: 123
- `printed_pages`: ["123"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.19.3.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.19.3 CAN_LegacyFIFO_DMA 2.19.3.1 Description This demo illustrates how to use Direct Memory Access (DMA) for CAN test, transmitting data on the CAN bus. The CAN_LegacyFIFO_DMAdemo illustrates the process of initializing the CAN module with LegacyFIFO FIFO, setting up"
- `keywords`: ["DMA", "MUX", "Function", "GPIO", "module", "Port", "ALT3", "FC7300F8MDQ", "Access", "CAN1_RX", "CAN1_STB", "CAN1_TX"]
- `anchors`:
  - `p123`: "2.19.3 CAN_LegacyFIFO_DMA"

### SEG-0124
- `physical_pages`: 124
- `printed_pages`: ["124"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.19.4.1 Description within the SDK Examples and Demos chapter. Main page content: Port D16: MUX = ALT3, Function = CAN2_TX Port D15: MUX = ALT3, Function = CAN2_RX Port A22: MUX = GPIO output, Function = CAN5_SLT Port E15: MUX = ALT3, Function = CAN5_RX"
- `keywords`: ["MUX", "Function", "Port", "ALT3", "ALT2", "ALT4", "CAN_MB_EnhancedFIFO", "FC_IDE", "FIFO", "IAR", "MCU", "module"]
- `anchors`:
  - `p124`: "2.19.3.4 Steps to Run"

### SEG-0125
- `physical_pages`: 125
- `printed_pages`: ["125"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.19.4.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: completion, and reception. Enable CAN Module: Enable the CAN module to start the communication process. Start Message Transmission: Initiate the transmission of CAN messages. If using Enhanced FIFO with interrupts, the transmission will trigger interrupts upon completion."
- `keywords`: ["MUX", "Function", "Port", "ALT3", "GPIO", "MCU", "ALT2", "ALT4", "FC7300F8MDQ", "FC_IDE", "IAR", "output"]
- `anchors`:
  - `p125`: "2.19.4.2 Prerequisites"

### SEG-0126
- `physical_pages`: 126
- `printed_pages`: ["126"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.19.5.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.19.5 CAN_MB_LegacyFIFO 2.19.5.1 Description The CAN_MB_LegacyFIFO demo demonstrates how to initialize the CAN module, configure Message Buffers (MBs) and Legacy FIFO, and handle CAN message reception and transmission via interrupt processing."
- `keywords`: ["MUX", "Function", "Port", "ALT3", "GPIO", "FIFO", "module", "CAN_MB_LegacyFIFO", "FC7300F8MDQ", "output", "transmission", "CAN1_RX"]
- `anchors`:
  - `p126`: "2.19.5 CAN_MB_LegacyFIFO"

### SEG-0127
- `physical_pages`: 127
- `printed_pages`: ["127"]
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.19.5.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Port E16: MUX = ALT3, Function = CAN5_TX Port G9: MUX = ALT2, Function = CAN6_RX Port F11: MUX = ALT2, Function = CAN6_TX Port H15: MUX = ALT3, Function = CAN7_RX"
- `keywords`: ["MUX", "Function", "FPU", "Port", "ALT3", "IDE", "ALT2", "ALT4", "CMSIS", "DSP", "FC_IDE", "IAR"]
- `anchors`:
  - `p127`: "2.19.5.4 Steps to Run"

### SEG-0128
- `physical_pages`: 128
- `printed_pages`: ["128"]
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.20.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0129
- `physical_pages`: 129
- `printed_pages`: ["129"]
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.20.1 Description within the SDK Examples and Demos chapter. Main page content: Enable FPU based on whether hardware is enabled or not in the system_init function."
- `keywords`: ["FPU", "based", "Enable", "enabled", "function", "hardware", "system_init", "whether"]
- `anchors`:
  - `p129`: "Enable FPU based on whether hardware is enabled or not in the system_init function."

### SEG-0130
- `physical_pages`: 130
- `printed_pages`: ["130"]
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.20.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: The following demonstrates how to add DSP support. Add the following macro: Driver_CM7_DSP_ENABLE 2.20.2 Prerequisites To run the example, make sure you have the following materials:"
- `keywords`: ["IAR", "FC_IDE", "following", "steps", "described", "Driver_CM7_DSP_ENABLE", "DSP", "example", "FC7300F8MDQ", "FPU_DSP", "IAR_Project", "Keil"]
- `anchors`:
  - `p130`: "2.20.2 Prerequisites"

### SEG-0131
- `physical_pages`: 131
- `printed_pages`: ["131"]
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.20.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.21 FreeRTOS 2.21.1 Description This demo shows how to use the FreeRTOS. For the main function, we first initialize the system clock and GPIOs, and then get the clock frequency to a global variable"
- `keywords`: ["FreeRTOS", "clock", "FC7300F8MDQ", "GPIOs", "LED", "SYSTICK", "demo", "initialize", "number", "task", "Board", "create"]
- `anchors`:
  - `p131`: "2.21 FreeRTOS"

### SEG-0132
- `physical_pages`: 132
- `printed_pages`: ["132"]
- `section_path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.21.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 USB Type-C cable 1 Personal computer 1 J-Link debugger 2.21.3 MCU Ports"
- `keywords`: ["IAR", "example", "ALT1", "FC_IDE", "FREQM", "GPIO", "MUX", "board", "clock", "FC7300F8MDQ", "FreeRTOS", "Initialize"]
- `anchors`:
  - `p132`: "2.21.3 MCU Ports"

### SEG-0133
- `physical_pages`: 133
- `printed_pages`: ["133"]
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.23.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 1 J-Link debugger 2.22.3 MCU Ports Port A18: MUX = ALT3, UART1_TX FCUART1 TXD, UART converted to USB. Connector (USB"
- `keywords`: ["UART", "USB", "ALT3", "MUX", "FCUART1", "Port", "TYPE-C", "FC7300F8MDQ", "MCU", "connection", "Connector", "converted"]
- `anchors`:
  - `p133`: "2.22.3 MCU Ports"

### SEG-0134
- `physical_pages`: 134
- `printed_pages`: ["134"]
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.23.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Port A28: MUX = ALT5, FCSPI1_SCK Serial clock pin Port A27: MUX = ALT5, FCSPI1_PCS0 Chip select pin"
- `keywords`: ["ALT5", "MUX", "pin", "FC_IDE", "FTU", "IAR", "MCU", "Port", "steps", "described", "FC7300F8MDQ", "FCSMU"]
- `anchors`:
  - `p134`: "2.23.4 Steps to Run"

### SEG-0135
- `physical_pages`: 135
- `printed_pages`: ["135"]
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.24.2.1 Description within the SDK Examples and Demos chapter. Main page content: 2.24.1 InputCapture 2.24.1.1 Description This example shows how to use the FTU module as an input capture. You can send \"I\" from the serial port to generate a rising edge. And the serial port will output the timestamp."
- `keywords`: ["MUX", "UART", "USB", "FTU", "Port", "ALT1", "ALT3", "example", "FC7300F8MDQ", "FC_IDE", "FCUART1", "GPIO"]
- `anchors`:
  - `p135`: "2.24.1 InputCapture"

### SEG-0136
- `physical_pages`: 136
- `printed_pages`: ["136"]
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.24.2.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.24.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["UART", "USB", "MUX", "ALT1", "ALT3", "FC7300F8MDQ", "FC_IDE", "FCUART1", "GPIO", "IAR", "MCU", "Port"]
- `anchors`:
  - `p136`: "2.24.2.2 Prerequisites"

### SEG-0137
- `physical_pages`: 137
- `printed_pages`: ["137"]
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.24.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.24.3 OutputCompare 2.24.3.1 Description This example shows how to generate two different PWM signals with different periods by the FTU module. You will see MOTOR1 I-W generates a 7.81KHz signal and MOTOR1 E-W generates a 3.91KHz signal. And the LED will toggle."
- `keywords`: ["MUX", "UART", "USB", "MOTOR1", "Port", "ALT2", "ALT3", "FC7300F8MDQ", "FCUART1", "LED", "signal", "TYPE-C"]
- `anchors`:
  - `p137`: "2.24.3 OutputCompare"

### SEG-0138
- `physical_pages`: 138
- `printed_pages`: ["138"]
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.24.4.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: Download the OutputCompare program to the MCU and debug it. Note: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["PWM", "USB", "FC7300F8MDQ", "FC_IDE", "IAR", "MCU", "MOTOR1", "UART", "ALT3", "cycle", "described", "duty"]
- `anchors`:
  - `p138`: "2.24.4 PWM"

### SEG-0139
- `physical_pages`: 139
- `printed_pages`: ["139"]
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"
- `content_types`: ["text"]
- `summary`: "Indexes 2.24.5.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: Port A19: MUX = ALT3, UART1_RX FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection Port D31: MUX=ALT1, GPIO Output"
- `keywords`: ["MUX", "Port", "ALT2", "MOTOR1", "Output", "UART", "USB", "ALT1", "FC7300F8MDQ", "FC_IDE", "GPIO", "IAR"]
- `anchors`:
  - `p139`: "2.24.4.4 Steps to Run"

### SEG-0140
- `physical_pages`: 140
- `printed_pages`: ["140"]
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.25.1.1 Description within the SDK Examples and Demos chapter. Main page content: 2.24.5.3 MCU Ports Port A18: MUX = ALT3, UART1_TX FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `keywords`: ["MUX", "GPIO", "Port", "UART", "USB", "ALT1", "Output", "ALT3", "ALT6", "demo", "FC_IDE", "FCUART1"]
- `anchors`:
  - `p140`: "2.24.5.3 MCU Ports"

### SEG-0141
- `physical_pages`: 141
- `printed_pages`: ["141"]
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.25.1.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.25.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["IAR", "GPIO", "ALT1", "FC_IDE", "MUX", "FC7300F8MDQ", "steps", "board", "described", "example", "GPIO_Toggle", "GPIO_TOGGLE"]
- `anchors`:
  - `p141`: "2.25.1.2 Prerequisites"

### SEG-0142
- `physical_pages`: 142
- `printed_pages`: ["142"]
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.25.2.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: 2.25.2 GPIO_EdgeDetect 2.25.2.1 Description This demo shows how to use PORT and GPIO to detect the input rising edge and toggle pins through the SDK. This demo project will separately toggle LED1/LED2/LED3 when detecting input falling/rising/falling and rising edge at the"
- `keywords`: ["GPIO", "MUX", "ALT1", "Port", "FC_IDE", "FC7300F8MDQ", "KEY1", "KEY2", "KEY3", "ALT7", "board", "demo"]
- `anchors`:
  - `p142`: "2.25.2 GPIO_EdgeDetect"

### SEG-0143
- `physical_pages`: 143
- `printed_pages`: ["143"]
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.25.2.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.25.2.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "demo", "GPIO", "GPIO_EdgeDetect", "edge", "FC7300F8MDQ", "GPIO_DigitalFilter", "IAR_Project", "input", "Keil", "KEY1", "KEY2"]
- `anchors`:
  - `p143`: "2.25.2.4.2 For IAR Embedded Workbench"

### SEG-0144
- `physical_pages`: 144
- `printed_pages`: ["144"]
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.25.3.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 Personal computer 1 J-Link debugger 2.25.3.3 MCU Ports Port A26: MUX = ALT1, GPIO Output"
- `keywords`: ["MUX", "GPIO", "IAR", "ALT1", "Port", "FC7300F8MDQ", "FC_IDE", "USB", "example", "GPIO_DigitalFilter", "HRPWM", "MCU"]
- `anchors`:
  - `p144`: "2.25.3.3 MCU Ports"

### SEG-0145
- `physical_pages`: 145
- `printed_pages`: ["145"]
- `section_path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.26.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Port A18: MUX = ALT3, UART1_TX FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection Port A26: MUX = ALT1, GPIO Output"
- `keywords`: ["HSADC", "MUX", "ALT1", "FC_IDE", "GPIO", "HRPWM", "IAR", "Port", "steps", "UART", "USB", "ALT3"]
- `anchors`:
  - `p145`: "2.26.4 Steps to Run"

### SEG-0146
- `physical_pages`: 146
- `printed_pages`: ["146"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.27 HSADC within the SDK Examples and Demos chapter. Main page content: You may want to watch HSADC result by UART, then you can connect a type-c USB cable to the USB-to-UART interface on demo board."
- `keywords`: ["HSADC", "UART", "USB", "USB-to-UART", "board", "cable", "connect", "demo", "interface", "may", "result", "type-c"]
- `anchors`:
  - `p146`: "You may want to watch HSADC result by UART, then you can connect a type-c USB cable to the USB-to-UART interface on"

### SEG-0147
- `physical_pages`: 147
- `printed_pages`: ["147"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.27.1.1 Description within the SDK Examples and Demos chapter. Main page content: UART data format: 115200/8/N/1 There are four HSADC demos: 2.27.1 HSADC_Single 2.27.1.1 Description"
- `keywords`: ["HSADC", "HSADC_Single", "UART", "demo", "sequence", "data", "demos", "Description", "diagram", "follows", "format", "four"]
- `anchors`:
  - `p147`: "2.27.1 HSADC_Single"

### SEG-0148
- `physical_pages`: 148
- `printed_pages`: ["148"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.27.1.1 Description within the SDK Examples and Demos chapter. Main page content: First you need to initialize the system and peripheral clock, and then the HSADC ports. In the HSADC initialization function, you should specify the HSADC resolution, trigger mode and sequence mode, you could also configure the HSADC sample time and average mode, etc."
- `keywords`: ["HSADC", "instance", "interrupt", "configure", "could", "mode", "result", "specify", "which", "callback", "channels", "function"]
- `anchors`:
  - `p148`: "First you need to initialize the system and peripheral clock, and then the HSADC ports."

### SEG-0149
- `physical_pages`: 149
- `printed_pages`: ["149"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.27.1.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.27.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["IAR", "HSADC", "FC_IDE", "FC7300F8MDQ", "HSADC_Single", "steps", "sure", "described", "example", "HSADC0_SE2", "HSADC0_SE3", "HSADC_Sequence_Group"]
- `anchors`:
  - `p149`: "2.27.1.2 Prerequisites"

### SEG-0150
- `physical_pages`: 150
- `printed_pages`: ["150"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.27.2.3 Steps to Run within the SDK Examples and Demos chapter. Main page content: In this demo, we initialize two groups of HSADC, and they both be triggered by FTU reload trigger event. 2.27.2.1 Prerequisites Same as HSADC_Single. 2.27.2.2 MCU Ports"
- `keywords`: ["HSADC_Single", "FTU", "HSADC", "MCU", "Same", "both", "demo", "event", "groups", "initialize", "Ports", "Prerequisites"]
- `anchors`:
  - `p150`: "2.27.2.1 Prerequisites"

### SEG-0151
- `physical_pages`: 151
- `printed_pages`: ["151"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.27.2.3 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.27.3 HSADC_Single_Internal_Trigger This demo is quite like HSADC_Single demo, the only difference is that the HSADC conversion is triggered by an internal timer. 2.27.4 HSADC_Fast_Compare The purpose of this demo is to show you the usage of HSADC fast compare feature mode."
- `keywords`: ["HSADC", "compare", "conversion", "demo", "fast", "HSADC_Fast_Compare", "HSADC_FCREF", "HSADC_Single", "HSADC_Single_Internal_Trigger", "time", "defined", "difference"]
- `anchors`:
  - `p151`: "2.27.3 HSADC_Single_Internal_Trigger"

### SEG-0152
- `physical_pages`: 152
- `printed_pages`: ["152"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.2 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.27.4.2 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.27.4.1 Prerequisites Same as HSADC_Single. 2.27.4.2 MCU Ports Same as HSADC_Single."
- `keywords`: ["HSADC_Single", "MCU", "Same", "Ports", "Prerequisites"]
- `anchors`:
  - `p152`: "2.27.4.1 Prerequisites"

### SEG-0153
- `physical_pages`: 153
- `printed_pages`: ["153"]
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.3 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.27.4.3 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.27.4.3 Steps to Run The main steps are same as HSADC_Single. If you adjust the adjustable resistor on the board, the program will enter the interrupt callback function of the comparison function. 2.28 HSM"
- `keywords`: ["HSM", "command", "driver", "APIs", "HSADC_Single", "HSM_Init", "ISR", "send", "structure", "function", "mailbox", "mode"]
- `anchors`:
  - `p153`: "2.27.4.3 Steps to Run"

### SEG-0154
- `physical_pages`: 154
- `printed_pages`: ["154"]
- `section_path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.28.4.1.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: 2.28.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or micro-USB cable"
- `keywords`: ["FC_IDE", "FC7300F8MDQ", "MCU", "micro-USB", "example", "run", "adapter", "Board", "cable", "computer", "debugger", "Demo"]
- `anchors`:
  - `p154`: "2.28.2 Prerequisites"

### SEG-0155
- `physical_pages`: 155
- `printed_pages`: ["155"]
- `section_path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.28.4.1.3 For Keil within the SDK Examples and Demos chapter. Main page content: Note: Make sure \"Debug_Flash\" is selected as the active build configuration. After building and debugging, you can get the operation result by u32HSMStatusRet of the configuration struct. 2.28.4.1.2 For IAR Embedded Workbench To run the example by using the IAR, take the followin"
- `keywords`: ["IAR", "INTM", "HSM", "IAR_Project", "Keil", "Note", "steps", "sure", "u32HSMStatusRet", "configuration", "described", "Embedded"]
- `anchors`:
  - `p155`: "2.28.4.1.2 For IAR Embedded Workbench"

### SEG-0156
- `physical_pages`: 156
- `printed_pages`: ["156"]
- `section_path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.29.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows: 2.29.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board"
- `keywords`: ["FC7300F8MDQ", "Board", "demo", "Demo", "diagram", "example", "following", "follows", "make", "materials", "Prerequisites", "run"]
- `anchors`:
  - `p156`: "2.29.2 Prerequisites"

### SEG-0157
- `physical_pages`: 157
- `printed_pages`: ["157"]
- `section_path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.30.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 1 Power adapter 12 V 1 USB Type-C cable 1 Personal computer 1 J-Link debugger"
- `keywords`: ["USB", "MCU", "UART", "steps", "ALT3", "FC7300F8MDQ", "FC_IDE", "FCUART1", "IAR", "ISM", "MUX", "than"]
- `anchors`:
  - `p157`: "2.29.3 MCU Ports"

### SEG-0158
- `physical_pages`: 158
- `printed_pages`: ["158"]
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.31.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: Plug in the USB Type-C cable and open the up-machine (115200/8/N/1). Download the ISM_Demo program to the MCU by JTAG. Note: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE."
- `keywords`: ["data", "FC_IDE", "IAR", "LIN", "Master", "MCU", "node", "described", "FC7300F8MDQ", "ISM_Demo", "JTAG", "LED"]
- `anchors`:
  - `p158`: "2.31 LIN"

### SEG-0159
- `physical_pages`: 159
- `printed_pages`: ["159"]
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.31.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 1 USB-2-UART cable 1 Personal computer 1 J-Link debugger 2.31.3 MCU Ports"
- `keywords`: ["FC_IDE", "IAR", "LIN2", "LIN6", "LIN_Master", "steps", "UART", "USB-2-UART", "described", "FC7300F8MDQ", "MCU", "refer"]
- `anchors`:
  - `p159`: "2.31.3 MCU Ports"

### SEG-0160
- `physical_pages`: 160
- `printed_pages`: ["160"]
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.31.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0161
- `physical_pages`: 161
- `printed_pages`: ["161"]
- `section_path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.32.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.32 LU 2.32.1 Description This demo project shows how to use LU module to implement GPIO trigger FCPIT through the SDK. This demo project will toggle LED after 1-second when PortC11 has an input signal."
- `keywords`: ["FC7300F8MDQ", "FC_IDE", "IAR", "LED", "PTC11", "steps", "VCC", "described", "FCPIT", "GPIO", "LU_Demo", "MCU"]
- `anchors`:
  - `p161`: "2.32 LU"

### SEG-0162
- `physical_pages`: 162
- `printed_pages`: ["162"]
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.33.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.33 Mailbox 2.33.1 Description There are three demos: Mutex, ShortMessage, and LongMessage. Mutex: This example shows how to use the MB module as a mutex between multiple cores."
- `keywords`: ["MUX", "ALT3", "example", "FC7300F8MDQ", "Port", "between", "cores", "FCUART2_TX", "GPIO", "how", "LED", "MCU"]
- `anchors`:
  - `p162`: "2.33 Mailbox"

### SEG-0163
- `physical_pages`: 163
- `printed_pages`: ["163"]
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.33.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: 2.33.4 Steps to Run First, connect the USB Type-C cable to the demo board and PC. And open the UART debug terminal (USB-SERIAL CH340/115200/8/N/1). Then, connect PTI18 to a serial TXD port(115200/8/n/1)."
- `keywords`: ["FC_IDE", "port", "ELF1", "FC7300F8MD_CORE0", "GDB", "PTI18", "SWO", "TXD", "UART", "USB", "USB-SERIAL", "connect"]
- `anchors`:
  - `p163`: "2.33.4 Steps to Run"

### SEG-0164
- `physical_pages`: 164
- `printed_pages`: ["164"]
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.33.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: Debug Settings for CoreB: Device Name: FC7300F8MD_CORE1. GDB port: 2337(Different from CoreA). SWO port: 2338(Different from CoreA)."
- `keywords`: ["CoreA", "Different", "FC7300F8MD_CORE1", "GDB", "port", "SWO", "CoreB", "Debug", "Device", "executable", "Load", "Name"]
- `anchors`:
  - `p164`: "Debug Settings for CoreB:"

### SEG-0165
- `physical_pages`: 165
- `printed_pages`: ["165"]
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.33.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: Debug two Cores. 2.33.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded"
- `keywords`: ["IAR", "access", "MAM", "each", "IAR_Project", "Keil", "make", "steps", "sure", "block", "Debug", "described"]
- `anchors`:
  - `p165`: "2.33.4.2 For IAR Embedded Workbench"

### SEG-0166
- `physical_pages`: 166
- `printed_pages`: ["166"]
- `section_path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.34.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable 1 Personal computer 1 J-Link debugger"
- `keywords`: ["IAR", "FC_IDE", "MAM_Demo", "steps", "USB", "access", "block", "described", "FC7300F8MDQ", "IAR_Project", "Keil", "MAM"]
- `anchors`:
  - `p166`: "2.34.3 MCU Ports"

### SEG-0167
- `physical_pages`: 167
- `printed_pages`: ["167"]
- `section_path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.35.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: 2.35 MPU 2.35.1 Description MPU is realized by the ARM Cortex M7 kernel. The driver just provides APIs to enable/disable the MPU and MPU region. For the details, refer to the related documents of the ARM Corporation."
- `keywords`: ["MPU", "FC_IDE", "line", "ARM", "APIs", "below", "FC7300F8MDQ", "MCU", "micro-USB", "MPU_TEST_ADDR", "Run", "shown"]
- `anchors`:
  - `p167`: "2.35 MPU"

### SEG-0168
- `physical_pages`: 168
- `printed_pages`: ["168"]
- `section_path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.35.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.35.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "MSC", "board", "IAR_Project", "Keil", "MPU", "slave", "steps", "TLE8718", "described", "Embedded", "example"]
- `anchors`:
  - `p168`: "2.35.4.2 For IAR Embedded Workbench"

### SEG-0169
- `physical_pages`: 169
- `printed_pages`: ["169"]
- `section_path`: "Chapter 2 Examples and Demos / 2.36 MSC"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.36 MSC within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0170
- `physical_pages`: 170
- `printed_pages`: ["170"]
- `section_path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.36.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.36.1 Description This example demonstrates the functionality of the MSC module on the demo board. The master board sends data frames and command frames to the MSC slave board (TLE8718) to control and query its output stages. The communication results"
- `keywords`: ["MSC", "board", "slave", "Connect", "FC7300F8MDQ", "MSC1", "MUX", "UART", "ALT4", "ALT5", "Board", "demo"]
- `anchors`:
  - `p170`: "2.36.1 Description"

### SEG-0171
- `physical_pages`: 171
- `printed_pages`: ["171"]
- `section_path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.37.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: The LEDs on the MSC slave board will blink to indicate active communication, and the UART terminal will print the following text. Notes: Ensure the power supply and signal connections are correct to avoid communication errors."
- `keywords`: ["UART", "FC7300F8MDQ", "communication", "GPIO", "LED1", "LED2", "LEDs", "MCU", "MSC", "USB", "Board", "demo"]
- `anchors`:
  - `p171`: "2.37 Multicore"

### SEG-0172
- `physical_pages`: 172
- `printed_pages`: ["172"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.1.1 Description within the SDK Examples and Demos chapter. Main page content: Port A14, Core2 Led Toggle Port A18: MUX = ALT3, UART1_TX FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `keywords`: ["UART", "USB", "Port", "LED", "ALT3", "Core", "FC_IDE", "FCUART1", "IAR", "MUX", "OTA", "steps"]
- `anchors`:
  - `p172`: "2.37.4 Steps to Run"

### SEG-0173
- `physical_pages`: 173
- `printed_pages`: ["173"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.2 Code Logic"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.1.2 Code Logic within the SDK Examples and Demos chapter. Main page content: OTA_RegisterMode demonstrates how to implement flash bank swap by directly operating registers. This type of bank swap takes effect immediately after register configuration, meaning the specified swap range is exchanged right away. This project consists of two parts: Bootloader c"
- `keywords`: ["APP", "code", "bank", "swap", "area", "bootloader", "version", "OTA", "both", "LED", "main", "areas"]
- `anchors`:
  - `p173`: "2.38.1.2 Code Logic"

### SEG-0174
- `physical_pages`: 174
- `printed_pages`: ["174"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `content_types`: ["text"]
- `summary`: "Indexes 2.38.1.6 Compilation and Programming Steps within the SDK Examples and Demos chapter. Main page content: 2.38.1.3 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["ALT1", "GPIO", "MUX", "board", "FC7300F8MDQ", "FC_IDE", "IAR", "MCU", "steps", "APP", "described", "JTAG"]
- `anchors`:
  - `p174`: "2.38.1.3 Prerequisites"

### SEG-0175
- `physical_pages`: 175
- `printed_pages`: ["175"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.1.6 Compilation and Programming Steps within the SDK Examples and Demos chapter. Main page content: > Choose the output file path, then add the generated byte data and length to AppCode.c/h"
- `keywords`: ["add", "AppCode", "byte", "c/h", "Choose", "data", "file", "generated", "length", "output", "path"]
- `anchors`:
  - `p175`: "> Choose the output file path, then add the generated byte data and length to AppCode.c/h"

### SEG-0176
- `physical_pages`: 176
- `printed_pages`: ["176"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.2.1 Description within the SDK Examples and Demos chapter. Main page content: Program the bootloader code to the device 2.38.1.7 Notes FC7300F8MDQT1B chip has 4 banks and 8 blocks, each block is 1M. Block0/1 can be swapped with block4/5, and block2/3 can be swapped with block6/7. The swap range can be configured and must be 8K aligned."
- `keywords`: ["APP", "bank", "code", "area", "NVR", "address", "flash", "OTA", "OTA_NvrMode", "chip", "configuration", "FC7300F8MDQT1B"]
- `anchors`:
  - `p176`: "2.38.1.7 Notes"

### SEG-0177
- `physical_pages`: 177
- `printed_pages`: ["177"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.3 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.2.3 Prerequisites within the SDK Examples and Demos chapter. Main page content: The project has two compilation options for building bootloader and APP code respectively. For FC7300F8MDQT1B project, the linker file shows BOOTLOADER code and APP code sections. In NVR-based bank swap mode, the FLASH_APP_VER area definition must match the offset configured in N"
- `keywords`: ["APP", "code", "version", "bank", "bootloader", "FLASH_APP_VER", "LED", "NVR", "BOOTLOADER", "FC7300F8MDQ", "FC7300F8MDQT1B", "LEDs"]
- `anchors`:
  - `p177`: "2.38.2.2 Code Logic"

### SEG-0178
- `physical_pages`: 178
- `printed_pages`: ["178"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `content_types`: ["text"]
- `summary`: "Indexes 2.38.2.6 Compilation and Programming Steps within the SDK Examples and Demos chapter. Main page content: 1 J-Link debugger 2.38.2.4 MCU Ports Port A26: MUX = ALT1, GPIO Output LED1 - wired on board"
- `keywords`: ["ALT1", "GPIO", "MUX", "board", "FC_IDE", "IAR", "MCU", "steps", "APP", "described", "FC7300F8MDQ", "JTAG"]
- `anchors`:
  - `p178`: "2.38.2.4 MCU Ports"

### SEG-0179
- `physical_pages`: 179
- `printed_pages`: ["179"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.2.6 Compilation and Programming Steps within the SDK Examples and Demos chapter. Main page content: > Choose the output file path, then add the generated byte data and length to AppCode.c/h Before programming, it is recommended to run the unlock script once, then download the corresponding chip's NVR configuration from OTA_NvrMode/Nvr_config, and finally program the bootloader "
- `keywords`: ["NVR", "OTA_NvrMode/Nvr_config", "add", "AppCode", "bootloader", "byte", "c/h", "chip", "Choose", "code", "configuration", "corresponding"]
- `anchors`:
  - `p179`: "> Choose the output file path, then add the generated byte data and length to AppCode.c/h"

### SEG-0180
- `physical_pages`: 180
- `printed_pages`: ["180"]
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.7 Notes"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.38.2.7 Notes within the SDK Examples and Demos chapter. Main page content: NVR configuration mainly targets OTAC0/OTAC_HIGH0/ OTAC1/OTAC1_HIGH0. OTAC0 controls banks 0/2 and OTAC1 controls banks 1/3. OTAC need to be configured with OTA enable, bank swap start address offset, end address offset, OTA version offset, and which block the OTA version is loca"
- `keywords`: ["bank", "address", "OTA", "APP", "demo", "banks", "FAR", "FC7300F8MDQT1B", "NVR", "offset", "OTAC", "OTAC0"]
- `anchors`:
  - `p180`: "2.38.2.7 Notes"

### SEG-0181
- `physical_pages`: 181
- `printed_pages`: ["181"]
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.39.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.39.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["USB", "GPIO", "MUX", "Port", "UART", "ALT1", "ALT3", "FC7300F8MDQ", "FCUART1", "OUT", "TYPE-C", "MCU"]
- `anchors`:
  - `p181`: "2.39.2 Prerequisites"

### SEG-0182
- `physical_pages`: 182
- `printed_pages`: ["182"]
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.39.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Plug in the 12V power. Plug in the USB Type-C cable and open the up-machine (115200/8/N/1). Download the OVERLAY or FAR program to the MCU by JTAG. Note:"
- `keywords`: ["MCU", "FAR", "FC_IDE", "IAR", "OVERLAY", "data", "described", "flash", "JTAG", "overlaying", "RAM", "refer"]
- `anchors`:
  - `p182`: "Plug in the 12V power."

### SEG-0183
- `physical_pages`: 183
- `printed_pages`: ["183"]
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.40.1 Description within the SDK Examples and Demos chapter. Main page content: Figure 2. FAR Demo Print Message 2.40 PMC 2.40.1 Description This demo shows how to detect voltage anomalies. An interrupt will be requested when the voltage anomalies are detected."
- `keywords`: ["PMC", "FAR", "PMC0_IRQHandler", "PMC_UserIRQHandler", "voltage", "anomalies", "demo", "function", "interrupt", "according", "always", "call"]
- `anchors`:
  - `p183`: "2.40 PMC"

### SEG-0184
- `physical_pages`: 184
- `printed_pages`: ["184"]
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.40.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.40.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or micro-USB cable"
- `keywords`: ["IAR", "MCU", "FC_IDE", "ADC", "FC7300F8MDQ", "Ptimer", "steps", "ADC_Discontinuous", "demo", "described", "example", "IAR_Project"]
- `anchors`:
  - `p184`: "2.40.2 Prerequisites"

### SEG-0185
- `physical_pages`: 185
- `printed_pages`: ["185"]
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.41.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.41.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["eInstance", "GPIO", "ALT1", "MUX", "Board", "FC7300F8MDQ", "PTIMER", "PTIMER_Enable", "PTIMER_GenerateSWTrigger", "PTIMER_Init", "PTIMER_LoadValue", "PTIMER_SetPeriod"]
- `anchors`:
  - `p185`: "2.41.2 Prerequisites"

### SEG-0186
- `physical_pages`: 186
- `printed_pages`: ["186"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE"
- `content_types`: ["text"]
- `summary`: "Indexes 2.42.1.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: 2.41.4 Steps to Run The steps to run the example are as follows: Download the PTIMER_Demo program to the MCU by JTAG. Note:"
- `keywords`: ["MUX", "FC_IDE", "USB", "Port", "UART", "QDT", "steps", "ALT1", "ALT2", "ALT3", "described", "FC7300F8MDQ"]
- `anchors`:
  - `p186`: "2.41.4 Steps to Run"

### SEG-0187
- `physical_pages`: 187
- `printed_pages`: ["187"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.1.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: Connect H4 port with I2 port, and connect H5 port with H3 port. Create a \"GDB SEGGER J-Link Debugging\" configuration, and then click Debug. Then you can see the below output via the UART tool: 2.42.1.4.2 For IAR Embedded Workbench"
- `keywords`: ["IAR", "MUX", "UART", "USB", "Port", "ALT2", "ALT3", "FC7300F8MDQ", "FCUART1", "port", "QDT", "TYPE-C"]
- `anchors`:
  - `p187`: "2.42.1.4.2 For IAR Embedded Workbench"

### SEG-0188
- `physical_pages`: 188
- `printed_pages`: ["188"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.2.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: Port H3: MUX = ALT1, GPIO 2.42.2.4 Steps to Run 2.42.2.4.1 For FC_IDE To run the example by using the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE."
- `keywords`: ["IAR", "FC_IDE", "make", "port", "project", "QDT", "steps", "sure", "ALT1", "click", "configuration", "described"]
- `anchors`:
  - `p188`: "2.42.2.4 Steps to Run"

### SEG-0189
- `physical_pages`: 189
- `printed_pages`: ["189"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.3.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.42.3.3 MCU Ports Port A19: MUX = ALT3, UART1_RX FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `keywords`: ["IAR", "MUX", "UART", "Port", "USB", "FC_IDE", "ALT1", "ALT2", "ALT3", "FCUART1", "GPIO", "make"]
- `anchors`:
  - `p189`: "2.42.3.3 MCU Ports"

### SEG-0190
- `physical_pages`: 190
- `printed_pages`: ["190"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.4.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable 1 Personal computer 1 J-Link debugger"
- `keywords`: ["IAR", "MUX", "UART", "USB", "Port", "FC_IDE", "ALT1", "ALT2", "ALT3", "FC7300F8MDQ", "FCUART1", "GPIO"]
- `anchors`:
  - `p190`: "2.42.4.3 MCU Ports"

### SEG-0191
- `physical_pages`: 191
- `printed_pages`: ["191"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.5.4.2 For IAR Embedded Workbench within the SDK Examples and Demos chapter. Main page content: 2.42.5 QDT_ICPM_Demo 2.42.5.1 Description This demo shows the general configuration process to use the QDT module with IC mode. 2.42.5.2 Prerequisites"
- `keywords`: ["MUX", "IAR", "UART", "USB", "Port", "FC_IDE", "ALT1", "ALT2", "ALT3", "FC7300F8MDQ", "FCUART1", "GPIO"]
- `anchors`:
  - `p191`: "2.42.5 QDT_ICPM_Demo"

### SEG-0192
- `physical_pages`: 192
- `printed_pages`: ["192"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.6.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: After the project being opened in the IAR, click the Download and Debug button in the toolbar. 2.42.5.4.3 For Keil Note: Before using the Keil, make sure you have performed the steps described in Chapter 1.3.3 Keil. 2.42.6 QDT_QUAD_Demo"
- `keywords`: ["MUX", "UART", "USB", "Port", "FC_IDE", "ALT1", "ALT2", "ALT3", "FC7300F8MDQ", "FCUART1", "GPIO", "port"]
- `anchors`:
  - `p192`: "2.42.5.4.3 For Keil"

### SEG-0193
- `physical_pages`: 193
- `printed_pages`: ["193"]
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.42.6.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.42.6.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "RGM", "MCU", "project", "demo", "generate", "IAR_Project", "Keil", "KEY1", "KEY2", "LED", "QDT"]
- `anchors`:
  - `p193`: "2.42.6.4.2 For IAR Embedded Workbench"

### SEG-0194
- `physical_pages`: 194
- `printed_pages`: ["194"]
- `section_path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.43.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.43.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["USB", "UART", "FC7300F8MDQ", "MCU", "ALT3", "FC_IDE", "FCUART1", "IAR", "MUX", "RTC", "steps", "TYPE-C"]
- `anchors`:
  - `p194`: "2.43.2 Prerequisites"

### SEG-0195
- `physical_pages`: 195
- `printed_pages`: ["195"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.44.1.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.44.1 RTC_Alarm 2.44.1.1 Description This demo shows how to use the RTC to generate 1-second period interrupts through the SDK. This demo project will toggle LED every second. The interrupt source is the RTC alarm interrupt."
- `keywords`: ["RTC", "demo", "LED", "RTC_Alarm", "interrupt", "second", "alarm", "Description", "diagram", "every", "example", "following"]
- `anchors`:
  - `p195`: "2.44.1 RTC_Alarm"

### SEG-0196
- `physical_pages`: 196
- `printed_pages`: ["196"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.44.1.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or micro-USB cable 1 Personal computer 1 J-Link debugger"
- `keywords`: ["IAR", "FC_IDE", "RTC", "FC7300F8MDQ", "GPIO", "MUX", "RTC_Alarm", "steps", "ALT1", "ALT2", "demo", "described"]
- `anchors`:
  - `p196`: "2.44.1.3 MCU Ports"

### SEG-0197
- `physical_pages`: 197
- `printed_pages`: ["197"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.44.2.4.2 For IAR Embedded Workbench within the SDK Examples and Demos chapter. Main page content: 2.44.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or micro-USB cable"
- `keywords`: ["IAR", "FC_IDE", "FC7300F8MDQ", "GPIO", "MUX", "RTC_SecondInterrupt", "ALT1", "ALT2", "example", "IAR_Project", "LED1", "LED2"]
- `anchors`:
  - `p197`: "2.44.2.2 Prerequisites"

### SEG-0198
- `physical_pages`: 198
- `printed_pages`: ["198"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.44.2.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: After the project being opened in the IAR, click the Download and Debug button in the toolbar. 2.44.2.4.3 For Keil Note: Before using the Keil, make sure you have performed the steps described in Chapter 1.3.3 Keil. 2.44.3 RTC_Overflow"
- `keywords`: ["FC7300F8MDQ", "GPIO", "MUX", "ALT1", "ALT2", "demo", "IAR", "Keil", "LED", "LED1", "LED2", "MCU"]
- `anchors`:
  - `p198`: "2.44.2.4.3 For Keil"

### SEG-0199
- `physical_pages`: 199
- `printed_pages`: ["199"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow / 2.44.3.4 Steps to Run / 2.44.3.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.44.3.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.44.3.4 Steps to Run 2.44.3.4.1 For FC_IDE To run the example by using the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. 2.44.3.4.2 For IAR Embedded Workbench"
- `keywords`: ["IAR", "FC_IDE", "steps", "demo", "described", "IAR_Project", "Keil", "LED", "real", "RTC", "RTC_Overflow", "RTC_OverFlow"]
- `anchors`:
  - `p199`: "2.44.3.4 Steps to Run"

### SEG-0200
- `physical_pages`: 200
- `printed_pages`: ["200"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.44.4.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: 2.44.4.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V or micro-USB cable"
- `keywords`: ["MUX", "UART", "USB", "FC_IDE", "ALT3", "FC7300F8MDQ", "FCUART1", "GPIO", "Port", "TYPE-C", "ALT1", "ALT2"]
- `anchors`:
  - `p200`: "2.44.4.2 Prerequisites"

### SEG-0201
- `physical_pages`: 201
- `printed_pages`: ["201"]
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.44.4.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.44.4.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["MUX", "IAR", "Port", "ALT3", "ALT4", "UART", "USB", "pin", "FC7300F8MDQ", "FCUART2", "RTC_SetReadTime", "sure"]
- `anchors`:
  - `p201`: "2.44.4.4.2 For IAR Embedded Workbench"

### SEG-0202
- `physical_pages`: 202
- `printed_pages`: ["202"]
- `section_path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.45.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Import the SC6258XQ project, then build and download it. Note: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["FC_IDE", "IAR", "described", "FCSMU", "refer", "steps", "board", "Keil", "Power", "build", "cause", "debug"]
- `anchors`:
  - `p202`: "Import the SC6258XQ project, then build and download it."

### SEG-0203
- `physical_pages`: 203
- `printed_pages`: ["203"]
- `section_path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.46.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: 2.46 SCST 2.46.1 Description The SCST demo uses M7ST API to provide diagnostic testing for the Cortex-M7 processor. M7ST API contains a set of atomic tests to achieve the claimed fault coverage."
- `keywords`: ["USB", "UART", "ALT3", "API", "FC7300F8MDQ", "FCUART1", "MUX", "SCST", "TYPE-C", "MCU", "RXD", "TXD"]
- `anchors`:
  - `p203`: "2.46 SCST"

### SEG-0204
- `physical_pages`: 204
- `printed_pages`: ["204"]
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.47.1.1 Description within the SDK Examples and Demos chapter. Main page content: Users use serial communication to interact with test demo. 2.46.4 Steps to Run The steps to run the example are as follows: First, plug in the USB Type-C cable and open the up-machine (UART1 115200/8/N/1). Turn on the power, then demo"
- `keywords`: ["SDADC", "UART", "FC_IDE", "IAR", "sampling", "SDADC_Single", "steps", "demo", "described", "FC7300F8MDQ_Debug_Ram", "MCU", "refer"]
- `anchors`:
  - `p204`: "2.46.4 Steps to Run"

### SEG-0205
- `physical_pages`: 205
- `printed_pages`: ["205"]
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.47.1.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: Note: 1) Ensure proper clock and UART configurations. 2) Adjust the sampling frequency based on application requirements. The sequence diagram of the demo is as follows:"
- `keywords`: ["UART", "USB", "ALT3", "FC7300F8MDQ", "FCUART1", "MUX", "TYPE-C", "MCU", "RXD", "TXD", "UART1_RX", "UART1_TX"]
- `anchors`:
  - `p205`: "2.47.1.2 Prerequisites"

### SEG-0206
- `physical_pages`: 206
- `printed_pages`: ["206"]
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.47.2.1 Description within the SDK Examples and Demos chapter. Main page content: Import the SDADC_Single project, then build and download it. Note: To use the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["FIFO", "UART", "sampling", "SDADC", "FC_IDE", "IAR", "results", "described", "refer", "SDADC_Continous", "SDADC_Single", "steps"]
- `anchors`:
  - `p206`: "2.47.2 SDADC_Continous"

### SEG-0207
- `physical_pages`: 207
- `printed_pages`: ["207"]
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.47.3.1 Description within the SDK Examples and Demos chapter. Main page content: 2.47.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["UART", "USB", "SDADC", "ALT3", "calibration", "FC7300F8MDQ", "FC_IDE", "FCUART1", "IAR", "MUX", "steps", "TYPE-C"]
- `anchors`:
  - `p207`: "2.47.2.2 Prerequisites"

### SEG-0208
- `physical_pages`: 208
- `printed_pages`: ["208"]
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.47.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.47.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable"
- `keywords`: ["USB", "UART", "ALT3", "FC7300F8MDQ", "FC_IDE", "FCUART1", "MUX", "TYPE-C", "MCU", "RXD", "SDADC_Calibration", "TXD"]
- `anchors`:
  - `p208`: "2.47.3.2 Prerequisites"

### SEG-0209
- `physical_pages`: 209
- `printed_pages`: ["209"]
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.47.3.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: To use the IAR, refer to the steps described in Chapter 1.3.2 IAR Embedded Workbench. To use the Keil, refer to the steps described in Chapter 1.3.3 Keil. Print the calibration results via UART. 2.48 SEC"
- `keywords`: ["UART", "USB", "SEC", "ALT3", "FC7300F8MDQ", "FCUART1", "IAR", "MUX", "TYPE-C", "MCU", "NVR", "RXD"]
- `anchors`:
  - `p209`: "2.48 SEC"

### SEG-0210
- `physical_pages`: 210
- `printed_pages`: ["210"]
- `section_path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.48.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.48.4 Steps to Run 2.48.4.1 For FC_IDE To run the example by using the FC_IDE, refer to the steps described in Chapter 1.3.1 FC_IDE. Note: Make sure \"Debug_Flash\" is selected as the active build configuration."
- `keywords`: ["IAR", "FC_IDE", "lock", "spin", "steps", "Core", "example", "LED1", "LED2", "Lock", "print", "Spin"]
- `anchors`:
  - `p210`: "2.48.4 Steps to Run"

### SEG-0211
- `physical_pages`: 211
- `printed_pages`: ["211"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.2 Prerequisites"
- `content_types`: ["text"]
- `summary`: "Indexes 2.50.1.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.49.3 MCU Ports Port A19: MUX = ALT3, UART1_RX FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `keywords`: ["IAR", "USB", "UART", "MUX", "FC_IDE", "SENT", "ALT3", "FC7300F8MDQ", "FCUART1", "GPIO", "Port", "SENT_Polling"]
- `anchors`:
  - `p211`: "2.49.3 MCU Ports"

### SEG-0212
- `physical_pages`: 212
- `printed_pages`: ["212"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.50.1.4.2 For IAR Embedded Workbench within the SDK Examples and Demos chapter. Main page content: 2.50.1.3 MCU Ports Port A18: MUX = ALT3, UART1_TX FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `keywords`: ["IAR", "UART", "USB", "FC_IDE", "MUX", "ALT3", "FCUART1", "RXD", "TYPE-C", "ALT4", "FC7300F8MDQ", "IAR_Project"]
- `anchors`:
  - `p212`: "2.50.1.3 MCU Ports"

### SEG-0213
- `physical_pages`: 213
- `printed_pages`: ["213"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.1 For FC_IDE"
- `content_types`: ["text"]
- `summary`: "Indexes 2.50.2.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: After the project being opened in the IAR, click the Download and Debug button in the toolbar. 2.50.1.4.3 For Keil Note: Before using the Keil, make sure you have performed the steps described in Chapter 1.3.3 Keil. 2.50.2 SENT_Interrupt"
- `keywords`: ["UART", "USB", "FC_IDE", "MUX", "ALT3", "FC7300F8MDQ", "FCUART1", "RXD", "TYPE-C", "ALT4", "IAR", "Keil"]
- `anchors`:
  - `p213`: "2.50.1.4.3 For Keil"

### SEG-0214
- `physical_pages`: 214
- `printed_pages`: ["214"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.50.2.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.50.2.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "SENT", "SENT_Interrupt", "DMA", "FC7300F8MDQ", "IAR_Project", "Keil", "make", "MLX90367LDC", "SENT_Dma", "steps", "sure"]
- `anchors`:
  - `p214`: "2.50.2.4.2 For IAR Embedded Workbench"

### SEG-0215
- `physical_pages`: 215
- `printed_pages`: ["215"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.50.3.4.2 For IAR Embedded Workbench within the SDK Examples and Demos chapter. Main page content: 1 Personal computer 1 J-Link debugger 2.50.3.3 MCU Ports Port A18: MUX = ALT3, UART1_TX"
- `keywords`: ["UART", "IAR", "USB", "FC_IDE", "MUX", "ALT3", "FCUART1", "RXD", "TYPE-C", "ALT4", "FC7300F8MDQ", "MCU"]
- `anchors`:
  - `p215`: "2.50.3.3 MCU Ports"

### SEG-0216
- `physical_pages`: 216
- `printed_pages`: ["216"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.1 For FC_IDE"
- `content_types`: ["text"]
- `summary`: "Indexes 2.50.4.4.1 For FC_IDE within the SDK Examples and Demos chapter. Main page content: Open the directory: SDK\\Example\\SENT\\SENT_Dma\\_Project\\IAR_Project, and double-click the SENT_DMA IAR project file with the suffix \".eww\". After the project being opened in the IAR, click the Download and Debug button in the toolbar. 2.50.3.4.3 For Keil"
- `keywords`: ["UART", "USB", "FC_IDE", "MUX", "ALT3", "FC7300F8MDQ", "FCUART1", "IAR", "RXD", "SENT", "TYPE-C", "ALT4"]
- `anchors`:
  - `p216`: "2.50.3.4.3 For Keil"

### SEG-0217
- `physical_pages`: 217
- `printed_pages`: ["217"]
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.50.4.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.50.4.4.2 For IAR Embedded Workbench To run the example by using the IAR, take the following steps: Note: Before using the IAR, make sure you have performed the steps described in Chapter 1.3.2 IAR Embedded Workbench."
- `keywords`: ["IAR", "demo", "mode", "SENT_SPC", "IAR_Project", "Keil", "KEY3", "low", "power", "PTA11", "SDK_FC7xxx_SMC_Demo", "SDK_FC7xxx_SMC_Demo_Multicore"]
- `anchors`:
  - `p217`: "2.50.4.4.2 For IAR Embedded Workbench"

### SEG-0218
- `physical_pages`: 218
- `printed_pages`: ["218"]
- `section_path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.51.3 MCU Ports within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows: 2.51.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board"
- `keywords`: ["ALT3", "MUX", "USB", "FC7300F8MDQ", "FCUART0", "TXD", "UART", "FCUART1", "MCU", "Port", "RXD", "TYPE-C"]
- `anchors`:
  - `p218`: "2.51.2 Prerequisites"

### SEG-0219
- `physical_pages`: 219
- `printed_pages`: ["219"]
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.52.1 Description within the SDK Examples and Demos chapter. Main page content: Port A19: MUX = ALT3, UART1_RX FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection Port A26: MUX = ALT1, GPIO Output"
- `keywords`: ["MUX", "ALT1", "GPIO", "Port", "demo", "STCU", "UART", "SRAM", "USB", "FC_IDE", "IAR", "steps"]
- `anchors`:
  - `p219`: "2.51.4 Steps to Run"

### SEG-0220
- `physical_pages`: 220
- `printed_pages`: ["220"]
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.52.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: the sequence diagram of the demo after self test done is as follows: 2.52.2 Prerequisites To run the example, make sure you have the following materials:"
- `keywords`: ["demo", "diagram", "done", "example", "following", "follows", "make", "materials", "Prerequisites", "run", "self", "sequence"]
- `anchors`:
  - `p220`: "2.52.2 Prerequisites"

### SEG-0221
- `physical_pages`: 221
- `printed_pages`: ["221"]
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.52.4.1.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable 1 Personal computer 1 J-Link debugger"
- `keywords`: ["IAR", "FC_IDE", "FC7300F8MDQ", "steps", "sure", "USB", "described", "example", "IAR_Project", "Keil", "make", "MCU"]
- `anchors`:
  - `p221`: "2.52.3 MCU Ports"

### SEG-0222
- `physical_pages`: 222
- `printed_pages`: ["222"]
- `section_path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.53.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 Personal computer 1 J-Link debugger 2.53.3 MCU Ports Port A26: MUX = PORT_GPIO_MODE"
- `keywords`: ["IAR", "FC_IDE", "MUX", "PORT_GPIO_MODE", "steps", "temperature", "TMU", "described", "FC7300F8MDQ", "IAR_Project", "Keil", "LED1"]
- `anchors`:
  - `p222`: "2.53.3 MCU Ports"

### SEG-0223
- `physical_pages`: 223
- `printed_pages`: ["223"]
- `section_path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.54.1 Description within the SDK Examples and Demos chapter. Main page content: The sequence diagram of the demo is as follows:"
- `keywords`: ["demo", "diagram", "follows", "sequence"]
- `anchors`:
  - `p223`: "The sequence diagram of the demo is as follows:"

### SEG-0224
- `physical_pages`: 224
- `printed_pages`: ["224"]
- `section_path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.54.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.54.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power adapter 12 V"
- `keywords`: ["FC7300F8MDQ", "USB", "adapter", "Board", "cable", "computer", "debugger", "Demo", "example", "following", "J-Link", "make"]
- `anchors`:
  - `p224`: "2.54.2 Prerequisites"

### SEG-0225
- `physical_pages`: 225
- `printed_pages`: ["225"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.1.1 Description within the SDK Examples and Demos chapter. Main page content: 2.54.3 MCU Ports Port A19: MUX = ALT3, UART1_RX FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `keywords`: ["USB", "UART", "TPU", "ALT3", "FC_IDE", "FCUART1", "IAR", "MCU", "MUX", "project", "PWM", "steps"]
- `anchors`:
  - `p225`: "2.54.3 MCU Ports"

### SEG-0226
- `physical_pages`: 226
- `printed_pages`: ["226"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.1.1 Description within the SDK Examples and Demos chapter. Main page content: Note: Using this method will greatly consume CPU resources, especially when the PWM frequency is high, the interrupt frequency will be too high, causing the software to be unable to perform other tasks."
- `keywords`: ["CPU", "PWM", "frequency", "high", "causing", "consume", "especially", "greatly", "interrupt", "method", "Note", "other"]
- `anchors`:
  - `p226`: "Note: Using this method will greatly consume CPU resources, especially when the PWM frequency is high, the interrupt"

### SEG-0227
- `physical_pages`: 227
- `printed_pages`: ["227"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.55.2.1 Description within the SDK Examples and Demos chapter. Main page content: 2.55.1.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power Adapter 12 V"
- `keywords`: ["project", "PWM", "demo", "FC7300F8MDQ", "FC_IDE", "frequency", "IAR", "LED3", "MUX", "steps", "ALT1", "ALT3"]
- `anchors`:
  - `p227`: "2.55.1.2 Prerequisites"

### SEG-0228
- `physical_pages`: 228
- `printed_pages`: ["228"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.2.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.55.2.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board"
- `keywords`: ["FC7300F8MDQ", "Board", "Demo", "example", "following", "make", "materials", "Prerequisites", "run", "sure"]
- `anchors`:
  - `p228`: "2.55.2.2 Prerequisites"

### SEG-0229
- `physical_pages`: 229
- `printed_pages`: ["229"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.55.3.1 Description within the SDK Examples and Demos chapter. Main page content: 1 Power Adapter 12 V 1 Personal computer 1 J-Link debugger Dupont Lines"
- `keywords`: ["project", "FlexCore", "PWM", "TPU", "FC_IDE", "IAR", "MUX", "steps", "ALT1", "ALT2", "CPU", "demo"]
- `anchors`:
  - `p229`: "2.55.2.3 MCU Ports"

### SEG-0230
- `physical_pages`: 230
- `printed_pages`: ["230"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.3.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.55.3.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power Adapter 12 V"
- `keywords`: ["FC7300F8MDQ", "Adapter", "Board", "computer", "debugger", "Demo", "example", "following", "J-Link", "make", "materials", "Personal"]
- `anchors`:
  - `p230`: "2.55.3.2 Prerequisites"

### SEG-0231
- `physical_pages`: 231
- `printed_pages`: ["231"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.3.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.55.3.3 MCU Ports Port G14: MUX = ALT2, TPU0_CH8 For capturing PWM pulse Port C6: MUX = ALT3, TPU0_CH0"
- `keywords`: ["IAR", "FC_IDE", "MUX", "ALT2", "project", "PWM", "steps", "ALT3", "described", "FC7300F8MDQ", "GPIO", "IAR_Project"]
- `anchors`:
  - `p231`: "2.55.3.3 MCU Ports"

### SEG-0232
- `physical_pages`: 232
- `printed_pages`: ["232"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.55.3.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 2.55.4 Tpu_Pwm_FlexCore 2.55.4.1 Description This demo project shows how to be used in conjunction with the project Tpu_Host. Post-build hex of this project will be downloaded by the project Tpu_Host and can be debugged by downloading the hex to RAM directly."
- `keywords`: ["project", "hex", "RAM", "Tpu_Host", "directly", "downloaded", "additional", "compilation", "conjunction", "debug", "debugged", "demo"]
- `anchors`:
  - `p232`: "2.55.4 Tpu_Pwm_FlexCore"

### SEG-0233
- `physical_pages`: 233
- `printed_pages`: ["233"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.4.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0234
- `physical_pages`: 234
- `printed_pages`: ["234"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `content_types`: ["text"]
- `summary`: "Indexes 2.55.5.1 Description within the SDK Examples and Demos chapter. Main page content: 2.55.4.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power Adapter 12 V"
- `keywords`: ["project", "FC7300F8MDQ", "FC_IDE", "hex", "IAR", "MUX", "PWM", "RAM", "steps", "ALT1", "ALT3", "described"]
- `anchors`:
  - `p234`: "2.55.4.2 Prerequisites"

### SEG-0235
- `physical_pages`: 235
- `printed_pages`: ["235"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.55.5.1 Description within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0236
- `physical_pages`: 236
- `printed_pages`: ["236"]
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.55.5.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 2.55.5.2 Prerequisites To run the example, make sure you have the following materials: 1 FC7300F8MDQ Demo Board 1 Power Adapter 12 V"
- `keywords`: ["POR", "FC7300F8MDQ", "FC_IDE", "IAR", "MUX", "PWM", "steps", "ALT1", "ALT2", "demo", "described", "GND"]
- `anchors`:
  - `p236`: "2.55.5.2 Prerequisites"

### SEG-0237
- `physical_pages`: 237
- `printed_pages`: ["237"]
- `section_path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.2 Prerequisites"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.56.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: 2.56.2 Prerequisites To run the example, make sure you have the following materials:"
- `keywords`: ["example", "following", "make", "materials", "Prerequisites", "run", "sure"]
- `anchors`:
  - `p237`: "2.56.2 Prerequisites"

### SEG-0238
- `physical_pages`: 238
- `printed_pages`: ["238"]
- `section_path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.4 Steps to Run / 2.56.4.3 For Keil"
- `content_types`: ["text"]
- `summary`: "Indexes 2.56.4.3 For Keil within the SDK Examples and Demos chapter. Main page content: 1 FC7300F8MDQ Demo Board 1 USB Type-C cable 1 Personal computer 1 J-Link Debugger"
- `keywords`: ["IAR", "FC_IDE", "Note", "steps", "TSTMP_Interrupt", "demo", "described", "FC7300F8MD_CORE0", "FC7300F8MDQ", "IAR_Project", "Keil", "MCU"]
- `anchors`:
  - `p238`: "2.56.3 MCU Ports"

### SEG-0239
- `physical_pages`: 239
- `printed_pages`: ["239"]
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.1 Description"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.57.1 Description within the SDK Examples and Demos chapter. Main page content: WDOG initialization settings are as following: WDOG_CfgType Wdog_InitStruct = {0}; Wdog_InitStruct.bWinEnable= true; /* set WDOG source as SIRC, form the EVB board, current value is 12 000 000 Hz */"
- `keywords`: ["Wdog_InitStruct", "WDOG", "EVB", "false", "set", "SIRC", "value", "WDOG_CfgType", "WDOG_REACTION_INT_1024_CYCLE", "WDOG_SIRC_CLK", "WDOG_TST_DISABLED", "out"]
- `anchors`:
  - `p239`: "WDOG initialization settings are as following:"

### SEG-0240
- `physical_pages`: 240
- `printed_pages`: ["240"]
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.2 Prerequisites"
- `content_types`: ["text"]
- `summary`: "Indexes 2.57.2 Prerequisites within the SDK Examples and Demos chapter. Main page content: Wdog_InitStruct.u16TimeoutValue= 56250U; g_tWdogHandle.eIntance = WDOG_INSTANCE_0; /* set the IRQ callback function */ g_tWdogHandle.tSettings.pISRCallback = WDOG0_IRQHandler_Callback;"
- `keywords`: ["WDOG", "reset", "YES", "Bsp_CLOCK_Init", "BSP_FCUART_Init", "FC7300F8MDQ", "g_tWdogHandle", "IRQ", "pISRCallback", "POR", "RGM", "SRIE"]
- `anchors`:
  - `p240`: "2.57.2 Prerequisites"

### SEG-0241
- `physical_pages`: 241
- `printed_pages`: ["241"]
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `content_types`: ["text"]
- `summary`: "Indexes 2.57.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: 1 Power adapter 12 V 1 USB Type-C cable 1 Personal computer 1 PC UART tool"
- `keywords`: ["UART", "USB", "watchdog", "MCU", "MUX", "ALT3", "FC_IDE", "FCUART1", "IAR", "steps", "TYPE-C", "described"]
- `anchors`:
  - `p241`: "2.57.3 MCU Ports"

### SEG-0242
- `physical_pages`: 242
- `printed_pages`: ["242"]
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `content_types`: ["text", "image"]
- `summary`: "Indexes 2.57.4 Steps to Run within the SDK Examples and Demos chapter. Main page content: "
- `keywords`: []
- `anchors`:
  - null

### SEG-0243
- `physical_pages`: 243
- `printed_pages`: ["243"]
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["revision_history", "text"]
- `summary`: "Revision History table listing Rev.0.1 preliminary version and Rev.0.2 updates to FCSPI, Flash, LIN, LU, OTA, HSADC, SC6258XQ, demo board information, and typos."
- `keywords`: ["FCSPI", "HSADC", "LIN", "OTA", "Revision", "Updated", "Added", "board", "Changes", "Date", "demo", "descriptions"]
- `anchors`:
  - `p243`: "Revision History"

### SEG-0244
- `physical_pages`: 244
- `printed_pages`: ["244"]
- `section_path`: "Back Matter / Disclaimer"
- `content_types`: ["legal_disclaimer", "text"]
- `summary`: "Disclaimer page for SDK drivers and example applications, intellectual property, change notice, warranties, and liability limitations."
- `keywords`: ["any", "information", "MCU", "applications", "document", "included", "purposes", "resources", "accuracy", "authorized", "change", "circuits"]
- `anchors`:
  - `p244`: "Disclaimer"

### SEG-0245
- `physical_pages`: 245
- `printed_pages`: ["245"]
- `section_path`: "Back Matter / Trailing sparse page"
- `content_types`: ["sparse_or_blank"]
- `summary`: "Trailing sparse page containing only document header/footer information."
- `keywords`: []
- `anchors`:
  - null

## 6. Table Index
### TBL-0002-0009-TOC
- `source_table_number`: null
- `caption`: "Table of Contents"
- `physical_pages`: 2-9
- `section_path`: "Front Matter / Table of Contents"
- `bbox`: null
- `key_fields`: ["section number", "title", "physical page"]
- `summary`: "Table of Contents listing Chapter 1 Introduction, Chapter 2 Examples and Demos, Revision History, and Disclaimer."
- `anchor`: "Table of Contents"
- `confidence`: 0.95
- `quality_flags`: ["table_like_navigation_index", "dotted_leader_toc"]

### TBL-0011-0015-ABBREVIATIONS
- `source_table_number`: null
- `caption`: "Abbreviations"
- `physical_pages`: 11-15
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"
- `bbox`: "multiple_page_table"
- `key_fields`: ["No.", "Abbreviation", "Description"]
- `summary`: "Abbreviation glossary with 185 entries covering MCU, bus, debug, clock, safety, communication, and timer terms."
- `anchor`: "1.2.2 Abbreviations"
- `confidence`: 0.96
- `quality_flags`: ["multi_page_table", "table_grid_detected_by_pymupdf"]

### TBL-0029-001
- `source_table_number`: null
- `caption`: "Channel Summary - 2.1 ADC"
- `physical_pages`: 29
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC"
- `bbox`: [30.56, 225.66, 564.76, 312.96]
- `key_fields`: ["Channel", "Type", "Description"]
- `summary`: "Channel Summary - 2.1 ADC. Representative row anchor: ADC0_CHANNEL_VBG_BUFFER | Internal | VBG Buffer reference; ADC0_CHANNEL_V11 | Internal | 1.1V internal voltage"
- `anchor`: "Channel | Type | Description"
- `confidence`: 0.92
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0032-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.1.1.4 Steps to Run"
- `physical_pages`: 32
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"
- `bbox`: [30.52, 188.32, 564.8, 223.4]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.1.1.4 Steps to Run. Representative row anchor: ADC0_SE11 (PTA29) | Varistor_0 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0043-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.2.1.4 Steps to Run"
- `physical_pages`: 43
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"
- `bbox`: [30.54, 459.82, 564.78, 512.3]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.2.1.4 Steps to Run. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0044-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.2.2.4 Steps to Run"
- `physical_pages`: 44
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `bbox`: [30.55, 573.22, 564.77, 643.16]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.2.2.4 Steps to Run. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0047-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.3.4 Steps to Run"
- `physical_pages`: 47
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run"
- `bbox`: [30.52, 56.8, 564.8, 91.88]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.3.4 Steps to Run. Representative row anchor: Port E10: MUX = ALT2, SCG_CLOCKOUT | Clock out pin"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0048-001
- `source_table_number`: null
- `caption`: "CMP input pin mapping"
- `physical_pages`: 48
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"
- `bbox`: [30.57, 427.92, 564.75, 567.54]
- `key_fields`: ["CMP instance", "input", "pin"]
- `summary`: "CMP input pin mapping. Representative row anchor:  | CMP0_IN1 | PTA24 | ;  | CMP0_IN2 | PTG4 | "
- `anchor`: "CMP0 | CMP0_IN0 | PTA23 | "
- `confidence`: 0.82
- `quality_flags`: ["table_grid_detected_by_pymupdf", "source_table_without_header_row"]

### TBL-0054-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.4.4.4 Steps to Run"
- `physical_pages`: 54
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `bbox`: [30.54, 436.06, 564.78, 522.44]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.4.4.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0055-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.6.4.1 For FC_IDE"
- `physical_pages`: 55
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.1 For FC_IDE"
- `bbox`: [30.54, 521.02, 564.78, 607.4]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.6.4.1 For FC_IDE. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0057-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.7.4 Steps to Run"
- `physical_pages`: 57
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `bbox`: [30.54, 560.98, 564.78, 647.3]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.7.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0060-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.8.1 CRC_Demo"
- `physical_pages`: 60
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.3 MCU Ports"
- `bbox`: [30.52, 726.28, 564.8, 778.28]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.8.1 CRC_Demo. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0061-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.8.1.4 Steps to Run"
- `physical_pages`: 61
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `bbox`: [30.52, 37.06, 564.8, 89.06]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.8.1.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0063-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.8.2.4 Steps to Run"
- `physical_pages`: 63
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.4 Steps to Run"
- `bbox`: [30.57, 449.2, 564.75, 587.9]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.8.2.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0066-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.8.3.4 Steps to Run"
- `physical_pages`: 66
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run"
- `bbox`: [30.57, 211.24, 564.75, 349.94]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.8.3.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0071-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.10.2 Eftu_PwmMeasurement"
- `physical_pages`: 71
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports"
- `bbox`: [30.56, 112.66, 564.76, 251.36]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.10.2 Eftu_PwmMeasurement. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0071-002
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.10.2 Eftu_PwmMeasurement"
- `physical_pages`: 71
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports"
- `bbox`: [30.56, 682.66, 564.76, 786.5]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.10.2 Eftu_PwmMeasurement. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0072-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.10.3.4 Steps to Run"
- `physical_pages`: 72
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run"
- `bbox`: [30.55, 37.06, 564.77, 89.54]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.10.3.4 Steps to Run. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0072-002
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.10.3.4 Steps to Run"
- `physical_pages`: 72
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run"
- `bbox`: [30.55, 503.92, 564.77, 625.16]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.10.3.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0073-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.10.4.4 Steps to Run"
- `physical_pages`: 73
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"
- `bbox`: [30.58, 273.52, 564.74, 464.54]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.10.4.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0076-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.12.1.4 Steps to Run"
- `physical_pages`: 76
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `bbox`: [30.59, 129.64, 564.73, 565.76]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.12.1.4 Steps to Run. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0079-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.12.2.4 Steps to Run"
- `physical_pages`: 79
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `bbox`: [30.59, 188.32, 564.73, 624.44]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.12.2.4 Steps to Run. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0082-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.12.3 RT_THREAD"
- `physical_pages`: 82
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports"
- `bbox`: [30.56, 685.48, 564.76, 772.82]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.12.3 RT_THREAD. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0083-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.12.3.4 Steps to Run"
- `physical_pages`: 83
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `bbox`: [30.59, 37.06, 564.73, 403.46]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.12.3.4 Steps to Run. Representative row anchor: Port E26: GPIOOUT, 1000BaseT1 ETH_WAKE | ETH WAKE - wired on board; Port B19: MUX = ALT1, GPIOIN, 1000BaseT1 ETH_INT_N | ETH INH - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0087-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.12.4.4 Steps to Run"
- `physical_pages`: 87
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `bbox`: [30.55, 55.9, 564.77, 125.78]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.12.4.4 Steps to Run. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0088-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.12.4.4 Steps to Run"
- `physical_pages`: 88
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `bbox`: [30.56, 504.46, 564.76, 625.7]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.12.4.4 Steps to Run. Representative row anchor: Port E1: MUX = ALT4, SCL | -; Port E0: MUX = ALT4, SDA | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0098-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.16.1.4 Steps to Run"
- `physical_pages`: 98
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"
- `bbox`: [30.58, 483.64, 564.74, 658.22]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.16.1.4 Steps to Run. Representative row anchor: PTA26: MUX = ALT1, GPIO | LED1; PTC3: MUX = ALT1, GPIO | WP#(refer to GD25Q32 data sheet)"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0102-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.16.3.1 Description"
- `physical_pages`: 102
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `bbox`: [30.58, 163.48, 564.74, 338.06]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.16.3.1 Description. Representative row anchor: PTA26: MUX = ALT1, GPIO | LED1; PTD31: MUX = ALT1, GPIO | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0106-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.16.4.1 Description"
- `physical_pages`: 106
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `bbox`: [30.58, 228.22, 564.74, 402.74]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.16.4.1 Description. Representative row anchor: PTA26: MUX = ALT1, GPIO | LED1; PTD31: MUX = ALT1, GPIO | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0110-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.16.4.4 Steps to Run"
- `physical_pages`: 110
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"
- `bbox`: [30.58, 120.58, 564.74, 295.16]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.16.4.4 Steps to Run. Representative row anchor: PTA26: MUX = ALT1, GPIO | LED1; PTD31: MUX = ALT1, GPIO | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0112-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.17.4.2 For IAR Embedded Workbench"
- `physical_pages`: 112
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench"
- `bbox`: [30.54, 113.62, 564.78, 200.0]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.17.4.2 For IAR Embedded Workbench. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0114-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.18.1.4 Steps to Run"
- `physical_pages`: 114
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run"
- `bbox`: [30.54, 498.4, 564.78, 584.78]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.18.1.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0116-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.18.2.4 Steps to Run"
- `physical_pages`: 116
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run"
- `bbox`: [30.54, 438.4, 564.78, 524.78]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.18.2.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0118-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.18.3.4 Steps to Run"
- `physical_pages`: 118
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"
- `bbox`: [30.54, 450.4, 564.78, 536.78]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.18.3.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0120-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.1.4 Steps to Run"
- `physical_pages`: 120
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run"
- `bbox`: [30.59, 380.62, 564.73, 677.24]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.1.4 Steps to Run. Representative row anchor: Port C7: MUX = GPIO output, Function = CAN1_STB | -; Port E23: MUX = ALT3, Function = CAN1_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0122-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.2.4 Steps to Run"
- `physical_pages`: 122
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run"
- `bbox`: [30.59, 188.32, 564.73, 484.94]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.2.4 Steps to Run. Representative row anchor: Port C7: MUX = GPIO output, Function = CAN1_STB | -; Port E23: MUX = ALT3, Function = CAN1_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0123-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.3 CAN_LegacyFIFO_DMA"
- `physical_pages`: 123
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports"
- `bbox`: [30.57, 667.9, 564.75, 772.7]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.3 CAN_LegacyFIFO_DMA. Representative row anchor: Port C7: MUX = GPIO output, Function = CAN1_STB | -; Port E23: MUX = ALT3, Function = CAN1_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0124-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.4.1 Description"
- `physical_pages`: 124
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description"
- `bbox`: [30.58, 37.06, 564.74, 246.5]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.4.1 Description. Representative row anchor: Port D16: MUX = ALT3, Function = CAN2_TX | -; Port D15: MUX = ALT3, Function = CAN2_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0125-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.4.4 Steps to Run"
- `physical_pages`: 125
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run"
- `bbox`: [30.59, 262.06, 564.73, 558.68]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.4.4 Steps to Run. Representative row anchor: Port C7: MUX = GPIO output, Function = CAN1_STB | -; Port E23: MUX = ALT3, Function = CAN1_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0126-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.5 CAN_MB_LegacyFIFO"
- `physical_pages`: 126
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"
- `bbox`: [30.58, 604.72, 564.74, 779.3]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.5 CAN_MB_LegacyFIFO. Representative row anchor: Port C7: MUX = GPIO output, Function = CAN1_STB | -; Port E23: MUX = ALT3, Function = CAN1_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0127-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.19.5.4 Steps to Run"
- `physical_pages`: 127
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"
- `bbox`: [30.57, 37.06, 564.75, 176.72]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.19.5.4 Steps to Run. Representative row anchor: Port E16: MUX = ALT3, Function = CAN5_TX | -; Port G9: MUX = ALT2, Function = CAN6_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0132-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.21.4.3 For Keil"
- `physical_pages`: 132
- `section_path`: "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.3 For Keil"
- `bbox`: [30.55, 113.62, 564.77, 183.56]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.21.4.3 For Keil. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0133-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.23 FS26"
- `physical_pages`: 133
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports"
- `bbox`: [30.55, 79.78, 564.77, 166.1]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.23 FS26. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0133-002
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.23 FS26"
- `physical_pages`: 133
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports"
- `bbox`: [30.55, 659.62, 564.77, 780.92]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.23 FS26. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0134-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.23.4 Steps to Run"
- `physical_pages`: 134
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"
- `bbox`: [30.56, 37.06, 564.76, 124.4]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.23.4 Steps to Run. Representative row anchor: Port A28: MUX = ALT5, FCSPI1_SCK | Serial clock pin; Port A27: MUX = ALT5, FCSPI1_PCS0 | Chip select pin"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0135-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.24.2.1 Description"
- `physical_pages`: 135
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.1 Description"
- `bbox`: [30.57, 255.82, 564.75, 394.52]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.24.2.1 Description. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0136-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.24.2.4 Steps to Run"
- `physical_pages`: 136
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run"
- `bbox`: [30.56, 421.06, 564.76, 542.3]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.24.2.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0137-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.24.3.4 Steps to Run"
- `physical_pages`: 137
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run"
- `bbox`: [30.57, 528.46, 564.75, 667.16]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.24.3.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0138-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.24.4 PWM"
- `physical_pages`: 138
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.3 MCU Ports"
- `bbox`: [30.52, 725.02, 564.8, 777.02]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.24.4 PWM. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0139-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.24.5.2 Prerequisites"
- `physical_pages`: 139
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"
- `bbox`: [30.57, 37.06, 564.75, 176.24]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.24.5.2 Prerequisites. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port D31: MUX=ALT1, GPIO Output | LED control pin"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0140-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.25.1.1 Description"
- `physical_pages`: 140
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"
- `bbox`: [30.57, 55.9, 564.75, 229.46]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.25.1.1 Description. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0141-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.25.1.4.3 For Keil"
- `physical_pages`: 141
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil"
- `bbox`: [30.55, 449.68, 564.77, 519.62]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.25.1.4.3 For Keil. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0142-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.25.2.4.1 For FC_IDE"
- `physical_pages`: 142
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE"
- `bbox`: [30.57, 573.28, 564.75, 695.54]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.25.2.4.1 For FC_IDE. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0144-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.25.3.4.3 For Keil"
- `physical_pages`: 144
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil"
- `bbox`: [30.56, 95.74, 564.76, 218.0]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.25.3.4.3 For Keil. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0144-002
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.25.3.4.3 For Keil"
- `physical_pages`: 144
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil"
- `bbox`: [30.56, 733.96, 564.76, 785.96]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.25.3.4.3 For Keil. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0145-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.26.4 Steps to Run"
- `physical_pages`: 145
- `section_path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.4 Steps to Run"
- `bbox`: [30.55, 37.06, 564.77, 141.38]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.26.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A26: MUX = ALT1, GPIO Output | LED1"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0145-002
- `source_table_number`: null
- `caption`: "Channel Summary - 2.26.4 Steps to Run"
- `physical_pages`: 145
- `section_path`: "Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.4 Steps to Run"
- `bbox`: [30.55, 381.54, 564.77, 433.98]
- `key_fields`: ["Channel", "Type", "Description"]
- `summary`: "Channel Summary - 2.26.4 Steps to Run. Representative row anchor: HSADC0_CHANNEL_2 | External | Connected to the free pin; HSADC0_CHANNEL_3 | External | Connected to the free pin"
- `anchor`: "Channel | Type | Description"
- `confidence`: 0.92
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0149-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.27.1.4.3 For Keil"
- `physical_pages`: 149
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"
- `bbox`: [30.54, 188.32, 564.78, 240.8]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.27.1.4.3 For Keil. Representative row anchor: HSADC0_SE2 (PTH0) | Free pin - wired on board; HSADC0_SE3 (PTH1) | Free pin - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0157-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.30.4 Steps to Run"
- `physical_pages`: 157
- `section_path`: "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.4 Steps to Run"
- `bbox`: [30.54, 130.54, 564.78, 216.92]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.30.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0161-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.32.4 Steps to Run"
- `physical_pages`: 161
- `section_path`: "Chapter 2 Examples and Demos / 2.32 LU / 2.32.4 Steps to Run"
- `bbox`: [30.52, 282.52, 564.8, 317.6]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.32.4 Steps to Run. Representative row anchor: TRGMUX IN10(PTC11) | C11 (P5100) --- connect key or other to VCC"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0162-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.33 Mailbox"
- `physical_pages`: 162
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"
- `bbox`: [30.56, 657.94, 564.76, 745.34]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.33 Mailbox. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | Output information of Core 0; Port A19: MUX = ALT3, UART1_RX | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0170-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.36.4 Steps to Run"
- `physical_pages`: 170
- `section_path`: "Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"
- `bbox`: [30.56, 283.72, 564.76, 371.06]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.36.4 Steps to Run. Representative row anchor: Port A2: MUX = ALT4, MSC1 FCLP | -; Port D24: MUX = ALT4, MSC1 SOP | -"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0171-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.37 Multicore"
- `physical_pages`: 171
- `section_path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"
- `bbox`: [30.54, 719.98, 564.78, 772.46]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.37 Multicore. Representative row anchor: Port A26, Core0 Led Toggle | LED1; Port D31, Core1 Led Toggle | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0172-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping continuation - 2.38.1.1 Description"
- `physical_pages`: 172
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description"
- `bbox`: [30.54, 37.06, 564.78, 123.44]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping continuation - 2.38.1.1 Description. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Port A14, Core2 Led Toggle | LED3"
- `confidence`: 0.72
- `quality_flags`: ["table_grid_detected_by_pymupdf", "continuation_table_without_repeated_header"]

### TBL-0174-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.38.1.6 Compilation and Programming Steps"
- `physical_pages`: 174
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `bbox`: [30.55, 171.4, 564.77, 241.34]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.38.1.6 Compilation and Programming Steps. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0178-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.38.2.6 Compilation and Programming Steps"
- `physical_pages`: 178
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `bbox`: [30.55, 78.82, 564.77, 148.76]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.38.2.6 Compilation and Programming Steps. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1 - wired on board; Port D31: MUX = ALT1, GPIO Output | LED2 - wired on board"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0181-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.39.4 Steps to Run"
- `physical_pages`: 181
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `bbox`: [30.56, 601.66, 564.76, 722.9]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.39.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0184-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.40.4.3 For Keil"
- `physical_pages`: 184
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"
- `bbox`: [30.55, 173.26, 564.77, 243.2]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.40.4.3 For Keil. Representative row anchor: V11 | Voltage on MCU: 1P1; V25 | Voltage on MCU: 2P5V"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0185-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.41 PTIMER"
- `physical_pages`: 185
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [30.55, 704.38, 564.77, 774.26]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.41 PTIMER. Representative row anchor: Port A26: MUX = ALT1, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0186-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.42.1.4.1 For FC_IDE"
- `physical_pages`: 186
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE"
- `bbox`: [30.57, 501.7, 564.75, 657.8]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.42.1.4.1 For FC_IDE. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0187-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.42.1.4.3 For Keil"
- `physical_pages`: 187
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil"
- `bbox`: [30.57, 635.56, 564.75, 774.26]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.42.1.4.3 For Keil. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0188-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping continuation - 2.42.2.4.3 For Keil"
- `physical_pages`: 188
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil"
- `bbox`: [30.48, 37.06, 564.84, 54.68]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping continuation - 2.42.2.4.3 For Keil"
- `anchor`: "Port H3: MUX = ALT1, GPIO | -"
- `confidence`: 0.72
- `quality_flags`: ["table_grid_detected_by_pymupdf", "continuation_table_without_repeated_header"]

### TBL-0189-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.42.3.4.3 For Keil"
- `physical_pages`: 189
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil"
- `bbox`: [30.57, 55.9, 564.75, 212.0]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.42.3.4.3 For Keil. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0190-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.42.4.4.3 For Keil"
- `physical_pages`: 190
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil"
- `bbox`: [30.57, 129.64, 564.75, 285.74]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.42.4.4.3 For Keil. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0191-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.42.5.4.2 For IAR Embedded Workbench"
- `physical_pages`: 191
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench"
- `bbox`: [30.57, 238.9, 564.75, 395.0]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.42.5.4.2 For IAR Embedded Workbench. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0192-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.42.6.4.1 For FC_IDE"
- `physical_pages`: 192
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"
- `bbox`: [30.57, 324.64, 564.75, 480.8]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.42.6.4.1 For FC_IDE. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0194-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.43.4 Steps to Run"
- `physical_pages`: 194
- `section_path`: "Chapter 2 Examples and Demos / 2.43 RGM / 2.43.4 Steps to Run"
- `bbox`: [30.54, 190.18, 564.78, 276.56]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.43.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0196-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.44.1.4.3 For Keil"
- `physical_pages`: 196
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.3 For Keil"
- `bbox`: [30.54, 129.64, 564.78, 182.12]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.44.1.4.3 For Keil. Representative row anchor: Port A26: MUX = ALT2, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0197-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.44.2.4.2 For IAR Embedded Workbench"
- `physical_pages`: 197
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench"
- `bbox`: [30.54, 514.9, 564.78, 567.38]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.44.2.4.2 For IAR Embedded Workbench. Representative row anchor: Port A26: MUX = ALT2, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0198-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.44.2.4.3 For Keil"
- `physical_pages`: 198
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil"
- `bbox`: [30.54, 714.04, 564.78, 766.52]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.44.2.4.3 For Keil. Representative row anchor: Port A26: MUX = ALT2, GPIO Output | LED1; Port D31: MUX = ALT1, GPIO Output | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0200-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.44.4.4.1 For FC_IDE"
- `physical_pages`: 200
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE"
- `bbox`: [30.56, 565.9, 564.76, 687.14]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.44.4.4.1 For FC_IDE. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0201-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.44.4.4.3 For Keil"
- `physical_pages`: 201
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"
- `bbox`: [30.58, 448.06, 564.74, 639.02]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.44.4.4.3 For Keil. Representative row anchor: Port A30: MUX = ALT3, UART2_RX | FCUART2 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port D17: MUX = ALT3, UART2_TX | FCUART2 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0203-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.46 SCST"
- `physical_pages`: 203
- `section_path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.3 MCU Ports"
- `bbox`: [30.54, 684.7, 564.78, 771.08]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.46 SCST. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0205-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.47.1.4 Steps to Run"
- `physical_pages`: 205
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.4 Steps to Run"
- `bbox`: [30.54, 622.3, 564.78, 708.68]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.47.1.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0207-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.47.3.1 Description"
- `physical_pages`: 207
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.1 Description"
- `bbox`: [30.54, 188.32, 564.78, 274.7]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.47.3.1 Description. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0208-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.47.3.4 Steps to Run"
- `physical_pages`: 208
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `bbox`: [30.54, 584.92, 564.78, 671.3]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.47.3.4 Steps to Run. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0209-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.47.3.4 Steps to Run"
- `physical_pages`: 209
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `bbox`: [30.54, 640.84, 564.78, 727.22]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.47.3.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0211-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.50.1.2 Prerequisites"
- `physical_pages`: 211
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.2 Prerequisites"
- `bbox`: [30.56, 56.8, 564.76, 178.04]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.50.1.2 Prerequisites. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0212-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.50.1.4.2 For IAR Embedded Workbench"
- `physical_pages`: 212
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench"
- `bbox`: [30.55, 55.9, 564.77, 159.68]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.50.1.4.2 For IAR Embedded Workbench. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0213-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.50.2.4.1 For FC_IDE"
- `physical_pages`: 213
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.1 For FC_IDE"
- `bbox`: [30.55, 341.62, 564.77, 445.4]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.50.2.4.1 For FC_IDE. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0215-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.50.3.4.2 For IAR Embedded Workbench"
- `physical_pages`: 215
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench"
- `bbox`: [30.55, 95.74, 564.77, 199.58]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.50.3.4.2 For IAR Embedded Workbench. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0216-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.50.4.4.1 For FC_IDE"
- `physical_pages`: 216
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.1 For FC_IDE"
- `bbox`: [30.55, 375.46, 564.77, 479.3]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.50.4.4.1 For FC_IDE. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0218-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.51 SMC"
- `physical_pages`: 218
- `section_path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"
- `bbox`: [30.55, 698.62, 564.77, 785.48]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.51 SMC. Representative row anchor: Port F23: MUX = ALT3, UART0_TX | FCUART0 TXD; Port G21: MUX = ALT3, UART0_RX | FCUART0 RXD"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0219-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.52.1 Description"
- `physical_pages`: 219
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"
- `bbox`: [30.58, 37.06, 564.74, 211.1]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.52.1 Description. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A26: MUX = ALT1, GPIO Output | LED1"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0222-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.53.4.3 For Keil"
- `physical_pages`: 222
- `section_path`: "Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"
- `bbox`: [30.55, 96.7, 564.77, 166.64]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.53.4.3 For Keil. Representative row anchor: Port A26: MUX = PORT_GPIO_MODE | LED1; Port D31: MUX = PORT_GPIO_MODE | LED2"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0225-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.55.1.1 Description"
- `physical_pages`: 225
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `bbox`: [30.54, 56.8, 564.78, 143.18]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.55.1.1 Description. Representative row anchor: Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0227-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.55.2.1 Description"
- `physical_pages`: 227
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.1 Description"
- `bbox`: [30.54, 223.24, 564.78, 275.78]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.55.2.1 Description. Representative row anchor: Port C6: MUX = ALT3, TPU0_CH0 | For outputting PWM pulse; Port A26: MUX = ALT1, GPIO Output | For toggling LED3"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0229-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.55.3.1 Description"
- `physical_pages`: 229
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.1 Description"
- `bbox`: [30.54, 141.64, 564.78, 194.12]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.55.3.1 Description. Representative row anchor: Port G14: MUX = ALT2, TPU0_CH8 | For capturing PWM pulse; Port A26: MUX = ALT1, GPIO Output | For toggling LED3"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0231-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.55.3.4.3 For Keil"
- `physical_pages`: 231
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `bbox`: [30.55, 55.9, 564.77, 125.78]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.55.3.4.3 For Keil. Representative row anchor: Port G14: MUX = ALT2, TPU0_CH8 | For capturing PWM pulse; Port C6: MUX = ALT3, TPU0_CH0 | For outputting PWM pulse"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0234-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.55.5.1 Description"
- `physical_pages`: 234
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `bbox`: [30.54, 200.32, 564.78, 252.8]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.55.5.1 Description. Representative row anchor: Port C6: MUX = ALT3, TPU0_CH0 | For outputting PWM pulse; Port A26: MUX = ALT1, GPIO Output | For toggling LED3"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0236-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.55.5.4 Steps to Run"
- `physical_pages`: 236
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.4 Steps to Run"
- `bbox`: [30.54, 200.32, 564.78, 252.8]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.55.5.4 Steps to Run. Representative row anchor: Port G14: MUX = ALT2, TPU0_CH8 | For capturing PWM pulse; Port A26: MUX = ALT1, GPIO Output | For toggling LED3"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0241-001
- `source_table_number`: null
- `caption`: "MCU Ports / Demo Board Pin Mapping - 2.57.4 Steps to Run"
- `physical_pages`: 241
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `bbox`: [30.55, 130.54, 564.77, 234.38]
- `key_fields`: ["Pin Function", "FC7300F8MDQ Demo Board"]
- `summary`: "MCU Ports / Demo Board Pin Mapping - 2.57.4 Steps to Run. Representative row anchor: Port A18: MUX = ALT3, UART1_TX | FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Port A19: MUX = ALT3, UART1_RX | FCUART1 RXD, UART convert"
- `anchor`: "Pin Function | FC7300F8MDQ Demo Board"
- `confidence`: 0.88
- `quality_flags`: ["table_grid_detected_by_pymupdf"]

### TBL-0243-001
- `source_table_number`: null
- `caption`: "Revision History"
- `physical_pages`: 243
- `section_path`: "Back Matter / Revision History"
- `bbox`: [30.24, 78.66, 565.07, 198.66]
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Revision History. Representative row anchor: 0.1 |  |  | 2024/12/24 |  |  | Preliminary version |  | ; 0.2 |  |  | 2026/01/15 |  |  | - Updated the example descriptions in Section 2.16 FCSPI, Section 2.18 Flash, Section 2.30 "
- `anchor`: " | Revision |  |  | Date |  |  | Changes | "
- `confidence`: 0.90
- `quality_flags`: ["table_grid_detected_by_pymupdf", "merged_cells_detected"]

## 7. Figure / Image Index
### FIG-0010-001
- `source_figure_number`: null
- `caption`: "SDK directory structure diagram"
- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 1 Introduction / 1.2 Conventions / 1.2.1 SDK Directory Structure"
- `bbox`: [70.9, 311.79, 524.4, 777.77]
- `image_pixels`: [1890, 1942]
- `semantic_description`: "Diagram showing Example and Template directory trees, including ADC example subfolders, Sources, Include, _Project, Device, Driver, HwA, MiddleWare, Tools, and FC_Project."
- `keywords`: ["SDK directory", "Example", "Template", "FC_Project", "Sources", "Include"]
- `anchor`: "SDK directory structure diagram"
- `confidence`: 0.86
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0016-001
- `source_figure_number`: null
- `caption`: "FC_IDE build configuration screenshot"
- `physical_page`: 16
- `printed_page`: "16"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `bbox`: [150.65, 36.9, 462.65, 385.39]
- `image_pixels`: [624, 697]
- `semantic_description`: "Screenshot illustrating FC_IDE build configuration or debug launch steps."
- `keywords`: ["FC_IDE", "Build Configuration", "Debug As", "FC Application"]
- `anchor`: "FC_IDE build configuration screenshot"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0016-002
- `source_figure_number`: null
- `caption`: "FC_IDE build/debug screenshot"
- `physical_page`: 16
- `printed_page`: "16"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `bbox`: [71.45, 487.02, 524.91, 626.62]
- `image_pixels`: [1283, 395]
- `semantic_description`: "Screenshot illustrating FC_IDE build configuration or debug launch steps."
- `keywords`: ["FC_IDE", "Build Configuration", "Debug As", "FC Application"]
- `anchor`: "FC_IDE build/debug screenshot"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0017-001
- `source_figure_number`: null
- `caption`: "IDE setup/debug screenshot"
- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `bbox`: [212.63, 36.9, 439.38, 407.14]
- `image_pixels`: [512, 836]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["IDE", "debug", "screenshot"]
- `anchor`: "IDE setup/debug screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0017-002
- `source_figure_number`: null
- `caption`: "IDE setup/debug screenshot"
- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"
- `bbox`: [127.4, 531.96, 467.48, 670.53]
- `image_pixels`: [832, 339]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["IDE", "debug", "screenshot"]
- `anchor`: "IDE setup/debug screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0018-001
- `source_figure_number`: null
- `caption`: "IAR Embedded Workbench patch/setup screenshot"
- `physical_page`: 18
- `printed_page`: "18"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `bbox`: [98.9, 36.9, 495.71, 297.9]
- `image_pixels`: [1531, 1007]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["IAR", "patch", "IAR Patch Setup", "Debug"]
- `anchor`: "IAR Embedded Workbench patch/setup screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0019-001
- `source_figure_number`: null
- `caption`: "IAR Embedded Workbench patch/setup screenshot"
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `bbox`: [99.25, 36.9, 496.05, 315.76]
- `image_pixels`: [1191, 837]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["IAR", "patch", "IAR Patch Setup", "Debug"]
- `anchor`: "IAR Embedded Workbench patch/setup screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0019-002
- `source_figure_number`: null
- `caption`: "IAR Embedded Workbench patch/setup screenshot"
- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"
- `bbox`: [99.25, 349.77, 496.05, 627.68]
- `image_pixels`: [791, 554]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["IAR", "patch", "IAR Patch Setup", "Debug"]
- `anchor`: "IAR Embedded Workbench patch/setup screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0020-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.25, 36.89, 496.05, 313.65]
- `image_pixels`: [790, 551]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0020-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.25, 347.97, 496.05, 624.88]
- `image_pixels`: [791, 552]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0021-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.25, 105.16, 496.05, 385.08]
- `image_pixels`: [791, 558]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0021-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.25, 419.23, 496.05, 698.15]
- `image_pixels`: [791, 556]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0022-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 36.9, 496.03, 333.49]
- `image_pixels`: [792, 592]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0022-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 367.37, 496.03, 663.97]
- `image_pixels`: [792, 592]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0023-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 70.77, 496.02, 133.07]
- `image_pixels`: [535, 84]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0023-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 139.07, 496.06, 437.82]
- `image_pixels`: [623, 469]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0023-003
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [96.65, 523.57, 497.9, 586.57]
- `image_pixels`: [535, 84]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0024-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 24
- `printed_page`: "24"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 53.83, 496.03, 353.18]
- `image_pixels`: [623, 470]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0024-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 24
- `printed_page`: "24"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 404.0, 496.07, 759.85]
- `image_pixels`: [716, 642]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0025-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 25
- `printed_page`: "25"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [106.32, 53.83, 488.97, 398.33]
- `image_pixels`: [722, 650]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0025-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 25
- `printed_page`: "25"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [115.32, 444.21, 497.97, 784.17]
- `image_pixels`: [717, 637]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0026-001
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 26
- `printed_page`: "26"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.25, 70.77, 496.05, 424.56]
- `image_pixels`: [720, 642]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0026-002
- `source_figure_number`: null
- `caption`: "Keil patch/debug configuration screenshot"
- `physical_page`: 26
- `printed_page`: "26"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [99.23, 458.65, 496.04, 757.05]
- `image_pixels`: [625, 470]
- `semantic_description`: "Screenshot associated with Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil; used for IDE setup, patching, build, download, or debug configuration."
- `keywords`: ["Keil", "J-LINK", "Flash Download", "FC7300 8MB Flash"]
- `anchor`: "Keil patch/debug configuration screenshot"
- `confidence`: 0.75
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0027-001
- `source_figure_number`: null
- `caption`: "FC7300F8MDQ demo board top view"
- `physical_page`: 27
- `printed_page`: "27"
- `section_path`: "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"
- `bbox`: [36.0, 103.47, 559.29, 520.17]
- `image_pixels`: [1763, 1404]
- `semantic_description`: "Top-view photo of the demo board with annotated ports/connectors including IO ports, RGB LEDs, USB Type-C/UART, JTAG/debug, CAN/LIN interfaces, and power connectors."
- `keywords`: ["demo board", "top view", "IO ports", "JTAG", "USB", "CAN", "LIN"]
- `anchor`: "FC7300F8MDQ demo board top view"
- `confidence`: 0.86
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0028-001
- `source_figure_number`: null
- `caption`: "FC7300F8MDQ demo board bottom view"
- `physical_page`: 28
- `printed_page`: "28"
- `section_path`: "Chapter 1 Introduction / 1.4 Hardware Environment"
- `bbox`: [92.13, 59.83, 503.17, 442.48]
- `image_pixels`: [1303, 1213]
- `semantic_description`: "Bottom-view photo of the demo board with Flash location called out."
- `keywords`: ["demo board", "bottom view", "Flash"]
- `anchor`: "FC7300F8MDQ demo board bottom view"
- `confidence`: 0.86
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0029-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.1 ADC"
- `physical_page`: 29
- `printed_page`: "29"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC"
- `bbox`: [155.93, 359.02, 439.37, 736.92]
- `image_pixels`: [1269, 1692]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.1 ADC."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.1 ADC"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0030-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.1.1.1 Description"
- `physical_page`: 30
- `printed_page`: "30"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `bbox`: [155.93, 36.9, 439.37, 380.29]
- `image_pixels`: [927, 1123]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.1.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0031-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.1.1.1 Description"
- `physical_page`: 31
- `printed_page`: "31"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description"
- `bbox`: [155.93, 36.9, 439.37, 586.84]
- `image_pixels`: [518, 1005]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.1.1.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0032-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.1.1.4 Steps to Run"
- `physical_page`: 32
- `printed_page`: "32"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"
- `bbox`: [136.82, 357.05, 476.39, 460.4]
- `image_pixels`: [795, 242]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.1.1.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0033-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.1.2.2 MCU Ports"
- `physical_page`: 33
- `printed_page`: "33"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.2 MCU Ports"
- `bbox`: [170.1, 59.83, 425.2, 677.9]
- `image_pixels`: [518, 1255]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA / 2.1.2.2 MCU Ports; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.1.2.2 MCU Ports"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0035-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.1.3.3 MCU Ports"
- `physical_page`: 35
- `printed_page`: "35"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.3 MCU Ports"
- `bbox`: [155.93, 36.9, 439.37, 669.0]
- `image_pixels`: [687, 1532]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous / 2.1.3.3 MCU Ports. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.1.3.3 MCU Ports"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0037-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.1.4.2 MCU Ports"
- `physical_page`: 37
- `printed_page`: "37"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.2 MCU Ports"
- `bbox`: [155.93, 36.9, 439.38, 648.49]
- `image_pixels`: [622, 1342]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare / 2.1.4.2 MCU Ports. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.1.4.2 MCU Ports"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0039-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.1.5.1 Prerequisites"
- `physical_page`: 39
- `printed_page`: "39"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.1 Prerequisites"
- `bbox`: [136.23, 36.9, 459.08, 734.79]
- `image_pixels`: [575, 1243]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group / 2.1.5.1 Prerequisites. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.1.5.1 Prerequisites"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0041-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.1.6.1 Prerequisites"
- `physical_page`: 41
- `printed_page`: "41"
- `section_path`: "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.1 Prerequisites"
- `bbox`: [127.8, 36.89, 467.5, 734.79]
- `image_pixels`: [623, 1280]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby / 2.1.6.1 Prerequisites. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.1.6.1 Prerequisites"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0042-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.2.1.1 Description"
- `physical_page`: 42
- `printed_page`: "42"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.1 Description"
- `bbox`: [174.8, 269.56, 420.5, 509.61]
- `image_pixels`: [654, 639]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.2.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0043-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.2.1.4 Steps to Run"
- `physical_page`: 43
- `printed_page`: "43"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"
- `bbox`: [89.9, 36.9, 505.19, 319.35]
- `image_pixels`: [963, 655]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.2.1.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0044-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.2.2.4 Steps to Run"
- `physical_page`: 44
- `printed_page`: "44"
- `section_path`: "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"
- `bbox`: [89.9, 150.29, 505.2, 432.74]
- `image_pixels`: [963, 655]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.2.2.4 Steps to Run"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0046-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.3.2 Prerequisites"
- `physical_page`: 46
- `printed_page`: "46"
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.2 Prerequisites"
- `bbox`: [98.93, 36.9, 510.52, 604.49]
- `image_pixels`: [686, 946]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.3.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0047-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.3.4 Steps to Run"
- `physical_page`: 47
- `printed_page`: "47"
- `section_path`: "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run"
- `bbox`: [89.9, 349.99, 505.2, 623.19]
- `image_pixels`: [935, 615]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.3.4 Steps to Run"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0048-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.4.1 Introduction"
- `physical_page`: 48
- `printed_page`: "48"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"
- `bbox`: [89.9, 36.9, 505.2, 335.3]
- `image_pixels`: [906, 651]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.4.1 Introduction"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0049-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.4.2.1 Description"
- `physical_page`: 49
- `printed_page`: "49"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.1 Description"
- `bbox`: [89.9, 36.89, 505.2, 459.19]
- `image_pixels`: [950, 966]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.4.2.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0050-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.4.2.4 Steps to Run"
- `physical_page`: 50
- `printed_page`: "50"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.4 Steps to Run"
- `bbox`: [127.57, 36.9, 467.7, 471.0]
- `image_pixels`: [684, 873]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt / 2.4.2.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.4.2.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0051-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.4.3.1 Description"
- `physical_page`: 51
- `printed_page`: "51"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.1 Description"
- `bbox`: [127.57, 286.86, 467.7, 738.86]
- `image_pixels`: [684, 909]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA / 2.4.3.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.4.3.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0053-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.4.4.4 Steps to Run"
- `physical_page`: 53
- `printed_page`: "53"
- `section_path`: "Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run"
- `bbox`: [127.57, 36.9, 467.7, 471.0]
- `image_pixels`: [684, 873]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt / 2.4.4.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.4.4.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0055-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.6.4.1 For FC_IDE"
- `physical_page`: 55
- `printed_page`: "55"
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.1 For FC_IDE"
- `bbox`: [140.75, 36.9, 454.55, 229.49]
- `image_pixels`: [523, 321]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.1 For FC_IDE."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.6.4.1 For FC_IDE"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0056-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.6.4.3 For Keil"
- `physical_page`: 56
- `printed_page`: "56"
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil"
- `bbox`: [93.0, 36.89, 270.02, 158.3]
- `image_pixels`: [347, 238]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.6.4.3 For Keil"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0056-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.6.4.3 For Keil"
- `physical_page`: 56
- `printed_page`: "56"
- `section_path`: "Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil"
- `bbox`: [152.57, 453.98, 442.72, 737.46]
- `image_pixels`: [654, 639]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.6.4.3 For Keil"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0057-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.7.4 Steps to Run"
- `physical_page`: 57
- `printed_page`: "57"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `bbox`: [89.9, 139.58, 505.2, 418.28]
- `image_pixels`: [909, 610]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.7.4 Steps to Run"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0058-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.7.4 Steps to Run"
- `physical_page`: 58
- `printed_page`: "58"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `bbox`: [70.9, 36.89, 524.4, 360.88]
- `image_pixels`: [1411, 1008]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.7.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0058-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.7.4 Steps to Run"
- `physical_page`: 58
- `printed_page`: "58"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `bbox`: [70.93, 429.71, 524.38, 759.56]
- `image_pixels`: [1365, 993]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.7.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0059-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.7.4 Steps to Run"
- `physical_page`: 59
- `printed_page`: "59"
- `section_path`: "Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run"
- `bbox`: [97.45, 213.34, 497.84, 446.99]
- `image_pixels`: [1705, 995]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.7 CPM / 2.7.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.7.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0060-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.8.1.3 MCU Ports"
- `physical_page`: 60
- `printed_page`: "60"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.3 MCU Ports"
- `bbox`: [127.57, 150.29, 467.69, 545.89]
- `image_pixels`: [1600, 1861]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.3 MCU Ports; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.8.1.3 MCU Ports"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0061-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.8.1.4 Steps to Run"
- `physical_page`: 61
- `printed_page`: "61"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `bbox`: [212.63, 222.72, 382.29, 478.33]
- `image_pixels`: [381, 574]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.8.1.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0061-002
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.8.1.4 Steps to Run"
- `physical_page`: 61
- `printed_page`: "61"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `bbox`: [215.0, 501.31, 379.95, 770.64]
- `image_pixels`: [354, 578]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.8.1.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0062-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.8.1.4 Steps to Run"
- `physical_page`: 62
- `printed_page`: "62"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `bbox`: [215.88, 76.77, 379.1, 362.06]
- `image_pixels`: [333, 582]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.8.1.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0062-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.8.1.4 Steps to Run"
- `physical_page`: 62
- `printed_page`: "62"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run"
- `bbox`: [212.63, 408.0, 382.45, 690.57]
- `image_pixels`: [340, 578]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo / 2.8.1.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.8.1.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0064-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.8.3.1 Description"
- `physical_page`: 64
- `printed_page`: "64"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `bbox`: [207.45, 36.9, 405.43, 288.34]
- `image_pixels`: [374, 475]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.8.3.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0065-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.8.3.1 Description"
- `physical_page`: 65
- `printed_page`: "65"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description"
- `bbox`: [172.95, 36.89, 422.35, 792.18]
- `image_pixels`: [636, 1926]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.8.3.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0066-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.8.3.4 Steps to Run"
- `physical_page`: 66
- `printed_page`: "66"
- `section_path`: "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run"
- `bbox`: [192.27, 500.55, 402.77, 622.87]
- `image_pixels`: [296, 172]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.8.3.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0067-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [128.15, 234.38, 275.05, 274.99]
- `image_pixels`: [257, 71]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [145.29, 234.38, 428.23, 274.99]
- `image_pixels`: [495, 71]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-003
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [349.92, 234.38, 467.67, 274.99]
- `image_pixels`: [206, 71]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-004
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [128.15, 673.65, 275.05, 719.41]
- `image_pixels`: [257, 80]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-005
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [145.29, 673.65, 428.23, 719.41]
- `image_pixels`: [495, 80]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-006
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [349.92, 673.65, 467.67, 719.41]
- `image_pixels`: [206, 80]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-007
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [164.73, 254.4, 428.8, 299.01]
- `image_pixels`: [462, 78]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-008
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [176.73, 295.58, 396.22, 341.91]
- `image_pixels`: [384, 81]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-009
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [179.02, 340.76, 413.94, 385.38]
- `image_pixels`: [411, 78]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0067-010
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"
- `bbox`: [227.03, 542.67, 365.93, 587.28]
- `image_pixels`: [243, 78]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.9.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0068-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.9.2.1 Description"
- `physical_page`: 68
- `printed_page`: "68"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.1 Description"
- `bbox`: [108.23, 256.98, 504.98, 453.78]
- `image_pixels`: [744, 369]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.9.2.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0069-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.9.2.4 Steps to Run"
- `physical_page`: 69
- `printed_page`: "69"
- `section_path`: "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.4 Steps to Run"
- `bbox`: [136.57, 355.55, 476.72, 677.84]
- `image_pixels`: [839, 795]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer / 2.9.2.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.9.2.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0070-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.10.1.2 Prerequisites"
- `physical_page`: 70
- `printed_page`: "70"
- `section_path`: "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites"
- `bbox`: [127.57, 36.9, 467.72, 359.19]
- `image_pixels`: [839, 795]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.10.1.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0074-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.11.4 Steps to Run"
- `physical_page`: 74
- `printed_page`: "74"
- `section_path`: "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run"
- `bbox`: [89.9, 443.06, 505.2, 686.56]
- `image_pixels`: [1704, 999]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.11.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0075-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.12.1.2 Prerequisites"
- `physical_page`: 75
- `printed_page`: "75"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.2 Prerequisites"
- `bbox`: [127.57, 257.92, 467.72, 713.27]
- `image_pixels`: [682, 913]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.12.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0077-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.12.1.4 Steps to Run"
- `physical_page`: 77
- `printed_page`: "77"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `bbox`: [90.0, 110.65, 505.3, 373.95]
- `image_pixels`: [1112, 705]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.12.1.4 Steps to Run"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0077-002
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.12.1.4 Steps to Run"
- `physical_page`: 77
- `printed_page`: "77"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"
- `bbox`: [90.0, 487.57, 505.3, 750.77]
- `image_pixels`: [1095, 694]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.12.1.4 Steps to Run"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0078-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.12.2.1 Description"
- `physical_page`: 78
- `printed_page`: "78"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.1 Description"
- `bbox`: [141.75, 257.92, 453.55, 775.01]
- `image_pixels`: [524, 869]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.12.2.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0080-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.12.2.4 Steps to Run"
- `physical_page`: 80
- `printed_page`: "80"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run"
- `bbox`: [90.0, 167.46, 505.3, 430.76]
- `image_pixels`: [1112, 705]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.12.2.4 Steps to Run"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0081-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.12.3.1 Description"
- `physical_page`: 81
- `printed_page`: "81"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.1 Description"
- `bbox`: [90.0, 36.9, 505.3, 300.1]
- `image_pixels`: [1095, 694]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.12.3.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0082-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.12.3.3 MCU Ports"
- `physical_page`: 82
- `printed_page`: "82"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports"
- `bbox`: [90.0, 36.89, 505.3, 528.04]
- `image_pixels`: [712, 842]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.12.3.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0084-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.12.3.4 Steps to Run"
- `physical_page`: 84
- `printed_page`: "84"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"
- `bbox`: [150.75, 36.9, 462.53, 336.24]
- `image_pixels`: [450, 432]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.12.3.4 Steps to Run"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0085-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.12.4.1 Description"
- `physical_page`: 85
- `printed_page`: "85"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description"
- `bbox`: [90.0, 36.9, 505.3, 300.2]
- `image_pixels`: [1112, 705]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.12.4.1 Description"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0085-002
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.12.4.1 Description"
- `physical_page`: 85
- `printed_page`: "85"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description"
- `bbox`: [90.0, 413.82, 505.3, 677.02]
- `image_pixels`: [1095, 694]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.1 Description; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.12.4.1 Description"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0086-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.12.4.2 Prerequisites"
- `physical_page`: 86
- `printed_page`: "86"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.2 Prerequisites"
- `bbox`: [91.5, 121.58, 506.8, 654.68]
- `image_pixels`: [712, 914]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.12.4.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0087-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.12.4.4 Steps to Run"
- `physical_page`: 87
- `printed_page`: "87"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `bbox`: [150.75, 281.35, 462.53, 580.7]
- `image_pixels`: [450, 432]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.12.4.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0088-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.12.4.4 Steps to Run"
- `physical_page`: 88
- `printed_page`: "88"
- `section_path`: "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"
- `bbox`: [175.43, 106.3, 419.88, 345.12]
- `image_pixels`: [654, 639]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.12.4.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0089-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.14.1.1 Description"
- `physical_page`: 89
- `printed_page`: "89"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.1 Description"
- `bbox`: [127.57, 110.65, 467.69, 345.9]
- `image_pixels`: [947, 655]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.14.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0090-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.14.1.4.2 For IAR Embedded Workbench"
- `physical_page`: 90
- `printed_page`: "90"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.2 For IAR Embedded Workbench"
- `bbox`: [127.57, 36.9, 467.72, 491.04]
- `image_pixels`: [716, 956]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.2 For IAR Embedded Workbench."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.14.1.4.2 For IAR Embedded Workbench"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0091-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.14.1.4.3 For Keil"
- `physical_page`: 91
- `printed_page`: "91"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil"
- `bbox`: [127.57, 303.79, 467.72, 783.14]
- `image_pixels`: [716, 1009]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.14.1.4.3 For Keil"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0093-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.14.3.1 Description"
- `physical_page`: 93
- `printed_page`: "93"
- `section_path`: "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.1 Description"
- `bbox`: [118.2, 36.9, 477.1, 734.79]
- `image_pixels`: [884, 1719]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.14.3.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0095-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.16.1.1 Description"
- `physical_page`: 95
- `printed_page`: "95"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `bbox`: [75.0, 173.46, 490.19, 453.2]
- `image_pixels`: [699, 471]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.16.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0096-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.16.1.1 Description"
- `physical_page`: 96
- `printed_page`: "96"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `bbox`: [70.9, 36.89, 524.4, 320.21]
- `image_pixels`: [850, 531]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.16.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0097-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.16.1.1 Description"
- `physical_page`: 97
- `printed_page`: "97"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description"
- `bbox`: [90.0, 36.9, 505.3, 687.24]
- `image_pixels`: [818, 1281]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.16.1.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0098-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.16.1.4 Steps to Run"
- `physical_page`: 98
- `printed_page`: "98"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"
- `bbox`: [90.0, 36.9, 505.3, 303.3]
- `image_pixels`: [753, 483]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.16.1.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0100-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.16.2.1 Description"
- `physical_page`: 100
- `printed_page`: "100"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"
- `bbox`: [70.9, 36.9, 524.4, 411.88]
- `image_pixels`: [803, 664]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.16.2.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0101-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.16.2.2 Prerequisites"
- `physical_page`: 101
- `printed_page`: "101"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.2 Prerequisites"
- `bbox`: [128.15, 36.9, 466.9, 734.8]
- `image_pixels`: [815, 1679]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.2 Prerequisites. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.16.2.2 Prerequisites"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0103-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.16.3.1 Description"
- `physical_page`: 103
- `printed_page`: "103"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `bbox`: [70.9, 36.9, 524.4, 472.81]
- `image_pixels`: [850, 817]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.16.3.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0104-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.16.3.1 Description"
- `physical_page`: 104
- `printed_page`: "104"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `bbox`: [36.0, 36.9, 481.47, 608.71]
- `image_pixels`: [1111, 1426]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.16.3.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0105-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.16.3.1 Description"
- `physical_page`: 105
- `printed_page`: "105"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"
- `bbox`: [75.35, 36.89, 519.95, 565.97]
- `image_pixels`: [1111, 1322]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.16.3.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0107-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.16.4.1 Description"
- `physical_page`: 107
- `printed_page`: "107"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `bbox`: [130.65, 36.9, 464.66, 260.65]
- `image_pixels`: [1021, 685]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.16.4.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0107-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.16.4.1 Description"
- `physical_page`: 107
- `printed_page`: "107"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `bbox`: [72.0, 481.65, 525.47, 697.47]
- `image_pixels`: [956, 455]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.16.4.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0108-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.16.4.1 Description"
- `physical_page`: 108
- `printed_page`: "108"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `bbox`: [108.6, 36.9, 486.7, 783.24]
- `image_pixels`: [803, 1585]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.16.4.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0109-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.16.4.1 Description"
- `physical_page`: 109
- `printed_page`: "109"
- `section_path`: "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description"
- `bbox`: [88.15, 36.9, 507.15, 622.89]
- `image_pixels`: [803, 1123]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.16.4.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0111-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.17.2 Prerequisites"
- `physical_page`: 111
- `printed_page`: "111"
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.2 Prerequisites"
- `bbox`: [141.75, 36.89, 453.54, 693.89]
- `image_pixels`: [718, 1513]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.17.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0112-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.17.4.2 For IAR Embedded Workbench"
- `physical_page`: 112
- `printed_page`: "112"
- `section_path`: "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench"
- `bbox`: [127.57, 387.31, 467.7, 743.16]
- `image_pixels`: [692, 724]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.17.4.2 For IAR Embedded Workbench"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0113-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.18.1.1 Description"
- `physical_page`: 113
- `printed_page`: "113"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description"
- `bbox`: [180.27, 258.86, 415.02, 488.21]
- `image_pixels`: [654, 639]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.18.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0114-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.18.1.4 Steps to Run"
- `physical_page`: 114
- `printed_page`: "114"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run"
- `bbox`: [89.9, 36.89, 505.2, 357.14]
- `image_pixels`: [970, 748]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.18.1.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0115-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.18.2.1 Description"
- `physical_page`: 115
- `printed_page`: "115"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description"
- `bbox`: [36.0, 36.9, 530.84, 226.95]
- `image_pixels`: [1924, 739]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.18.2.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0115-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.18.2.1 Description"
- `physical_page`: 115
- `printed_page`: "115"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description"
- `bbox`: [36.0, 255.88, 530.89, 462.63]
- `image_pixels`: [1915, 800]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.18.2.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0116-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.18.2.4 Steps to Run"
- `physical_page`: 116
- `printed_page`: "116"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run"
- `bbox`: [89.9, 36.9, 505.2, 297.15]
- `image_pixels`: [1007, 631]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.18.2.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0117-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.18.3.1 Description"
- `physical_page`: 117
- `printed_page`: "117"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description"
- `bbox`: [42.55, 36.9, 552.71, 236.7]
- `image_pixels`: [1920, 752]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.18.3.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0117-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.18.3.1 Description"
- `physical_page`: 117
- `printed_page`: "117"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description"
- `bbox`: [42.55, 265.63, 552.7, 527.03]
- `image_pixels`: [1893, 970]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.18.3.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0118-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.18.3.4 Steps to Run"
- `physical_page`: 118
- `printed_page`: "118"
- `section_path`: "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"
- `bbox`: [89.9, 36.89, 505.2, 309.29]
- `image_pixels`: [962, 631]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.18.3.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0119-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.19.1.1 Description"
- `physical_page`: 119
- `printed_page`: "119"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description"
- `bbox`: [36.0, 36.89, 546.15, 298.29]
- `image_pixels`: [1891, 969]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.19.1.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0119-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.19.1.1 Description"
- `physical_page`: 119
- `printed_page`: "119"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description"
- `bbox`: [36.0, 327.23, 546.17, 579.43]
- `image_pixels`: [1962, 970]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.19.1.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0121-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.19.2.1 Description"
- `physical_page`: 121
- `printed_page`: "121"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.1 Description"
- `bbox`: [89.9, 133.59, 505.2, 414.23]
- `image_pixels`: [947, 640]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.19.2.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0123-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.19.3.3 MCU Ports"
- `physical_page`: 123
- `printed_page`: "123"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports"
- `bbox`: [89.9, 36.9, 505.2, 153.95]
- `image_pixels`: [1100, 310]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.19.3.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0124-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.19.4.1 Description"
- `physical_page`: 124
- `printed_page`: "124"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description"
- `bbox`: [89.9, 441.91, 505.2, 569.56]
- `image_pixels`: [1119, 344]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.19.4.1 Description"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0126-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.19.5.3 MCU Ports"
- `physical_page`: 126
- `printed_page`: "126"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"
- `bbox`: [89.9, 36.89, 505.2, 164.54]
- `image_pixels`: [1119, 344]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.19.5.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0127-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.19.5.4 Steps to Run"
- `physical_page`: 127
- `printed_page`: "127"
- `section_path`: "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"
- `bbox`: [89.9, 372.16, 505.2, 510.46]
- `image_pixels`: [1105, 368]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.19.5.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0128-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.20.1 Description"
- `physical_page`: 128
- `printed_page`: "128"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `bbox`: [155.93, 36.89, 439.38, 550.53]
- `image_pixels`: [447, 810]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.20.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0129-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.20.1 Description"
- `physical_page`: 129
- `printed_page`: "129"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `bbox`: [89.9, 36.89, 505.2, 432.59]
- `image_pixels`: [953, 908]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.20.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0129-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.20.1 Description"
- `physical_page`: 129
- `printed_page`: "129"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description"
- `bbox`: [127.57, 484.77, 467.68, 753.87]
- `image_pixels`: [886, 701]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.20.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0130-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.20.4.3 For Keil"
- `physical_page`: 130
- `printed_page`: "130"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `bbox`: [89.9, 82.77, 505.2, 353.32]
- `image_pixels`: [990, 645]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.20.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0131-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.20.4.3 For Keil"
- `physical_page`: 131
- `printed_page`: "131"
- `section_path`: "Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil"
- `bbox`: [141.75, 208.99, 453.54, 713.79]
- `image_pixels`: [546, 884]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.20 FPU&DSP / 2.20.4 Steps to Run / 2.20.4.3 For Keil; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.20.4.3 For Keil"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0133-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.23.3 MCU Ports"
- `physical_page`: 133
- `printed_page`: "133"
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports"
- `bbox`: [140.43, 362.49, 454.47, 424.7]
- `image_pixels`: [419, 83]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.23.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0134-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.23.4 Steps to Run"
- `physical_page`: 134
- `printed_page`: "134"
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"
- `bbox`: [75.0, 354.66, 490.3, 446.96]
- `image_pixels`: [594, 132]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.23.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0134-002
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.23.4 Steps to Run"
- `physical_page`: 134
- `printed_page`: "134"
- `section_path`: "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"
- `bbox`: [75.0, 476.6, 490.3, 664.8]
- `image_pixels`: [620, 281]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.23.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0136-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.24.2.4 Steps to Run"
- `physical_page`: 136
- `printed_page`: "136"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run"
- `bbox`: [127.57, 36.89, 467.7, 263.64]
- `image_pixels`: [480, 320]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.24.2.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0137-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.24.3.4 Steps to Run"
- `physical_page`: 137
- `printed_page`: "137"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run"
- `bbox`: [127.57, 144.29, 467.7, 371.04]
- `image_pixels`: [480, 320]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.24.3.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0138-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.24.4.3 MCU Ports"
- `physical_page`: 138
- `printed_page`: "138"
- `section_path`: "Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.3 MCU Ports"
- `bbox`: [127.57, 317.92, 467.7, 544.67]
- `image_pixels`: [480, 320]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.24 FTU / 2.24.4 PWM / 2.24.4.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.24.4.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0141-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.25.1.4.3 For Keil"
- `physical_page`: 141
- `printed_page`: "141"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil"
- `bbox`: [155.93, 36.9, 439.37, 309.2]
- `image_pixels`: [534, 513]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.25.1.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0142-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.25.2.4.1 For FC_IDE"
- `physical_page`: 142
- `printed_page`: "142"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE"
- `bbox`: [90.0, 167.23, 505.3, 432.78]
- `image_pixels`: [1001, 640]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.25.2.4.1 For FC_IDE"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0143-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.25.2.4.3 For Keil"
- `physical_page`: 143
- `printed_page`: "143"
- `section_path`: "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.3 For Keil"
- `bbox`: [90.0, 383.55, 505.3, 700.8]
- `image_pixels`: [1004, 767]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.3 For Keil; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.25.2.4.3 For Keil"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0146-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.27 HSADC"
- `physical_page`: 146
- `printed_page`: "146"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC"
- `bbox`: [127.57, 36.9, 467.72, 490.39]
- `image_pixels`: [1269, 1692]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.27 HSADC."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.27 HSADC"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0147-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.27.1.1 Description"
- `physical_page`: 147
- `printed_page`: "147"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `bbox`: [127.57, 36.9, 467.72, 448.99]
- `image_pixels`: [927, 1123]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.27.1.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0148-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.27.1.1 Description"
- `physical_page`: 148
- `printed_page`: "148"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description"
- `bbox`: [155.93, 36.9, 439.38, 568.38]
- `image_pixels`: [536, 1005]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.27.1.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0149-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.27.1.4.3 For Keil"
- `physical_page`: 149
- `printed_page`: "149"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"
- `bbox`: [136.82, 374.49, 476.39, 477.84]
- `image_pixels`: [795, 242]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.27.1.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0150-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.27.2.3 Steps to Run"
- `physical_page`: 150
- `printed_page`: "150"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run"
- `bbox`: [155.93, 59.83, 439.37, 624.78]
- `image_pixels`: [593, 1182]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group / 2.27.2.3 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.27.2.3 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0152-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.27.4.2 MCU Ports"
- `physical_page`: 152
- `printed_page`: "152"
- `section_path`: "Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.2 MCU Ports"
- `bbox`: [127.57, 36.9, 467.72, 646.14]
- `image_pixels`: [536, 960]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare / 2.27.4.2 MCU Ports. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.27.4.2 MCU Ports"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0154-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.28.4.1.1 For FC_IDE"
- `physical_page`: 154
- `printed_page`: "154"
- `section_path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.1 For FC_IDE"
- `bbox`: [127.57, 36.89, 467.72, 562.54]
- `image_pixels`: [620, 958]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.1 For FC_IDE."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.28.4.1.1 For FC_IDE"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0155-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.28.4.1.3 For Keil"
- `physical_page`: 155
- `printed_page`: "155"
- `section_path`: "Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.3 For Keil"
- `bbox`: [54.0, 76.77, 507.48, 388.52]
- `image_pixels`: [1478, 1016]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.3 For Keil. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.28.4.1.3 For Keil"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0156-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.29.2 Prerequisites"
- `physical_page`: 156
- `printed_page`: "156"
- `section_path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites"
- `bbox`: [175.9, 36.89, 419.4, 274.79]
- `image_pixels`: [654, 639]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.29.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0156-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.29.2 Prerequisites"
- `physical_page`: 156
- `printed_page`: "156"
- `section_path`: "Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites"
- `bbox`: [89.9, 303.73, 505.2, 719.03]
- `image_pixels`: [842, 842]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.29 INTM / 2.29.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.29.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0158-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.31.2 Prerequisites"
- `physical_page`: 158
- `printed_page`: "158"
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites"
- `bbox`: [140.75, 184.4, 454.55, 276.2]
- `image_pixels`: [523, 153]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.31.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0158-002
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.31.2 Prerequisites"
- `physical_page`: 158
- `printed_page`: "158"
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites"
- `bbox`: [155.93, 369.14, 439.36, 641.48]
- `image_pixels`: [1270, 1220]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.31.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0160-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.31.4 Steps to Run"
- `physical_page`: 160
- `printed_page`: "160"
- `section_path`: "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run"
- `bbox`: [126.65, 36.9, 468.65, 734.79]
- `image_pixels`: [643, 1312]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.31 LIN / 2.31.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.31.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0162-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.33.3 MCU Ports"
- `physical_page`: 162
- `printed_page`: "162"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"
- `bbox`: [127.57, 36.89, 467.71, 372.44]
- `image_pixels`: [1041, 1027]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.33.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0163-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.33.4.1 For FC_IDE"
- `physical_page`: 163
- `printed_page`: "163"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `bbox`: [90.0, 262.86, 505.3, 529.86]
- `image_pixels`: [843, 542]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.33.4.1 For FC_IDE"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0164-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.33.4.1 For FC_IDE"
- `physical_page`: 164
- `printed_page`: "164"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `bbox`: [90.0, 36.9, 505.3, 387.8]
- `image_pixels`: [845, 714]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.33.4.1 For FC_IDE"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0164-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.33.4.1 For FC_IDE"
- `physical_page`: 164
- `printed_page`: "164"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE"
- `bbox`: [89.6, 484.48, 504.9, 734.73]
- `image_pixels`: [800, 482]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.1 For FC_IDE. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.33.4.1 For FC_IDE"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0165-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.33.4.3 For Keil"
- `physical_page`: 165
- `printed_page`: "165"
- `section_path`: "Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.3 For Keil"
- `bbox`: [89.6, 36.9, 504.9, 349.85]
- `image_pixels`: [775, 584]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.4 Steps to Run / 2.33.4.3 For Keil. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.33.4.3 For Keil"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0166-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.34.4.3 For Keil"
- `physical_page`: 166
- `printed_page`: "166"
- `section_path`: "Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.3 For Keil"
- `bbox`: [70.9, 294.62, 524.37, 514.42]
- `image_pixels`: [1436, 696]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.34 MAM / 2.34.4 Steps to Run / 2.34.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.34.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0167-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.35.4.1 For FC_IDE"
- `physical_page`: 167
- `printed_page`: "167"
- `section_path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.1 For FC_IDE"
- `bbox`: [155.93, 435.65, 439.37, 650.95]
- `image_pixels`: [574, 436]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.1 For FC_IDE."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.35.4.1 For FC_IDE"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0168-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.35.4.3 For Keil"
- `physical_page`: 168
- `printed_page`: "168"
- `section_path`: "Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.3 For Keil"
- `bbox`: [155.93, 36.9, 439.19, 100.7]
- `image_pixels`: [337, 104]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.35.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0169-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.36 MSC"
- `physical_page`: 169
- `printed_page`: "169"
- `section_path`: "Chapter 2 Examples and Demos / 2.36 MSC"
- `bbox`: [166.4, 36.89, 428.8, 734.79]
- `image_pixels`: [706, 1877]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.36 MSC. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.36 MSC"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0171-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.37.3 MCU Ports"
- `physical_page`: 171
- `printed_page`: "171"
- `section_path`: "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"
- `bbox`: [90.0, 76.77, 505.27, 388.62]
- `image_pixels`: [751, 564]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.37.3 MCU Ports"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0172-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.38.1.1 Description"
- `physical_page`: 172
- `printed_page`: "172"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description"
- `bbox`: [36.0, 330.73, 559.3, 650.68]
- `image_pixels`: [1320, 807]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.38.1.1 Description"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0173-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.38.1.2 Code Logic"
- `physical_page`: 173
- `printed_page`: "173"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.2 Code Logic"
- `bbox`: [89.9, 430.47, 505.2, 778.37]
- `image_pixels`: [943, 790]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.2 Code Logic; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.38.1.2 Code Logic"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0175-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.38.1.6 Compilation and Programming Steps"
- `physical_page`: 175
- `printed_page`: "175"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"
- `bbox`: [99.27, 36.9, 514.57, 411.05]
- `image_pixels`: [676, 609]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.38.1.6 Compilation and Programming Steps"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0176-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.38.2.1 Description"
- `physical_page`: 176
- `printed_page`: "176"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.1 Description"
- `bbox`: [100.4, 36.9, 515.7, 411.05]
- `image_pixels`: [676, 609]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.38.2.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0177-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.38.2.3 Prerequisites"
- `physical_page`: 177
- `printed_page`: "177"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.3 Prerequisites"
- `bbox`: [89.9, 333.78, 505.2, 681.68]
- `image_pixels`: [943, 790]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.3 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.38.2.3 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0179-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.38.2.6 Compilation and Programming Steps"
- `physical_page`: 179
- `printed_page`: "179"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `bbox`: [89.9, 36.9, 505.2, 411.05]
- `image_pixels`: [676, 609]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.38.2.6 Compilation and Programming Steps"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0179-002
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.38.2.6 Compilation and Programming Steps"
- `physical_page`: 179
- `printed_page`: "179"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps"
- `bbox`: [89.9, 439.98, 505.2, 713.18]
- `image_pixels`: [599, 394]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.38.2.6 Compilation and Programming Steps"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0180-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.38.2.7 Notes"
- `physical_page`: 180
- `printed_page`: "180"
- `section_path`: "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.7 Notes"
- `bbox`: [90.05, 329.43, 505.25, 706.23]
- `image_pixels`: [815, 740]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.7 Notes; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.38.2.7 Notes"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0181-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.39.4 Steps to Run"
- `physical_page`: 181
- `printed_page`: "181"
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `bbox`: [145.27, 36.9, 450.02, 419.38]
- `image_pixels`: [541, 679]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.39.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0182-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.39.4 Steps to Run"
- `physical_page`: 182
- `printed_page`: "182"
- `section_path`: "Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"
- `bbox`: [115.77, 241.21, 479.52, 715.21]
- `image_pixels`: [485, 632]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.39.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0183-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.40.1 Description"
- `physical_page`: 183
- `printed_page`: "183"
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"
- `bbox`: [176.15, 36.9, 418.4, 82.65]
- `image_pixels`: [323, 61]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.40.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0183-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.40.1 Description"
- `physical_page`: 183
- `printed_page`: "183"
- `section_path`: "Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"
- `bbox`: [102.32, 290.42, 499.14, 719.22]
- `image_pixels`: [670, 724]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.40.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0185-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [128.09, 37.42, 261.74, 74.35]
- `image_pixels`: [257, 71]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-002
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [143.7, 37.42, 401.1, 74.35]
- `image_pixels`: [495, 71]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-003
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [338.7, 37.42, 467.67, 74.35]
- `image_pixels`: [248, 71]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-004
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [128.09, 497.31, 261.74, 538.93]
- `image_pixels`: [257, 80]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-005
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [143.7, 497.31, 401.1, 538.93]
- `image_pixels`: [495, 80]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-006
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [338.7, 497.31, 467.67, 538.93]
- `image_pixels`: [248, 80]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-007
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [176.46, 55.62, 416.7, 96.2]
- `image_pixels`: [462, 78]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-008
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [172.3, 93.08, 371.98, 135.22]
- `image_pixels`: [384, 81]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-009
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [187.38, 147.71, 357.42, 189.85]
- `image_pixels`: [327, 81]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-010
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [179.58, 189.33, 413.58, 229.39]
- `image_pixels`: [450, 77]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0185-011
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `physical_page`: 185
- `printed_page`: "185"
- `section_path`: "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"
- `bbox`: [205.06, 410.95, 387.58, 451.53]
- `image_pixels`: [351, 78]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.41.3 MCU Ports"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0187-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.42.1.4.3 For Keil"
- `physical_page`: 187
- `printed_page`: "187"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil"
- `bbox`: [122.52, 93.71, 490.13, 205.07]
- `image_pixels`: [538, 163]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.42.1.4.3 For Keil"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0188-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.42.2.4.3 For Keil"
- `physical_page`: 188
- `printed_page`: "188"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil"
- `bbox`: [134.15, 233.16, 478.51, 372.77]
- `image_pixels`: [545, 221]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.42.2.4.3 For Keil"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0189-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.42.3.4.3 For Keil"
- `physical_page`: 189
- `printed_page`: "189"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil"
- `bbox`: [118.4, 390.48, 494.36, 444.87]
- `image_pixels`: [560, 81]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.42.3.4.3 For Keil"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0190-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.42.4.4.3 For Keil"
- `physical_page`: 190
- `printed_page`: "190"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil"
- `bbox`: [113.9, 464.23, 499.34, 523.93]
- `image_pixels`: [581, 90]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.42.4.4.3 For Keil"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0191-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.42.5.4.2 For IAR Embedded Workbench"
- `physical_page`: 191
- `printed_page`: "191"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench"
- `bbox`: [115.4, 573.51, 497.37, 630.64]
- `image_pixels`: [548, 82]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.42.5.4.2 For IAR Embedded Workbench"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0192-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.42.6.4.1 For FC_IDE"
- `physical_page`: 192
- `printed_page`: "192"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"
- `bbox`: [127.4, 659.26, 485.66, 741.28]
- `image_pixels`: [559, 128]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.42.6.4.1 For FC_IDE"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0193-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.42.6.4.3 For Keil"
- `physical_page`: 193
- `printed_page`: "193"
- `section_path`: "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.3 For Keil"
- `bbox`: [127.57, 368.49, 467.7, 782.04]
- `image_pixels`: [681, 828]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.3 For Keil; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.42.6.4.3 For Keil"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0195-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.44.1.2 Prerequisites"
- `physical_page`: 195
- `printed_page`: "195"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites"
- `bbox`: [169.32, 36.9, 425.97, 287.64]
- `image_pixels`: [654, 639]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.44.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0195-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.44.1.2 Prerequisites"
- `physical_page`: 195
- `printed_page`: "195"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites"
- `bbox`: [36.0, 407.04, 451.3, 744.54]
- `image_pixels`: [806, 655]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.44.1.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0197-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.44.2.4.2 For IAR Embedded Workbench"
- `physical_page`: 197
- `printed_page`: "197"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench"
- `bbox`: [89.9, 36.9, 505.2, 374.39]
- `image_pixels`: [806, 655]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.44.2.4.2 For IAR Embedded Workbench"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0198-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.44.2.4.3 For Keil"
- `physical_page`: 198
- `printed_page`: "198"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil"
- `bbox`: [89.9, 236.04, 505.2, 573.54]
- `image_pixels`: [806, 655]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.44.2.4.3 For Keil"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0200-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.44.4.4.1 For FC_IDE"
- `physical_page`: 200
- `printed_page`: "200"
- `section_path`: "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE"
- `bbox`: [89.9, 36.9, 505.2, 424.79]
- `image_pixels`: [864, 807]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.44.4.4.1 For FC_IDE"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0202-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.45.4 Steps to Run"
- `physical_page`: 202
- `printed_page`: "202"
- `section_path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run"
- `bbox`: [96.0, 36.9, 511.3, 368.45]
- `image_pixels`: [1621, 1294]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.45.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0202-002
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.45.4 Steps to Run"
- `physical_page`: 202
- `printed_page`: "202"
- `section_path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run"
- `bbox`: [75.0, 499.01, 490.3, 566.21]
- `image_pixels`: [587, 95]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.45.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0202-003
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.45.4 Steps to Run"
- `physical_page`: 202
- `printed_page`: "202"
- `section_path`: "Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run"
- `bbox`: [75.0, 606.39, 490.3, 728.29]
- `image_pixels`: [586, 172]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.45 SC6258XQ / 2.45.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.45.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0203-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.46.3 MCU Ports"
- `physical_page`: 203
- `printed_page`: "203"
- `section_path`: "Chapter 2 Examples and Demos / 2.46 SCST / 2.46.3 MCU Ports"
- `bbox`: [89.9, 175.11, 505.2, 508.46]
- `image_pixels`: [1171, 940]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.46 SCST / 2.46.3 MCU Ports; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.46.3 MCU Ports"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0204-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.47.1.1 Description"
- `physical_page`: 204
- `printed_page`: "204"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description"
- `bbox`: [79.9, 306.85, 533.4, 594.7]
- `image_pixels`: [1459, 926]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.47.1.1 Description"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0205-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.47.1.4 Steps to Run"
- `physical_page`: 205
- `printed_page`: "205"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.4 Steps to Run"
- `bbox`: [89.9, 128.65, 505.2, 464.9]
- `image_pixels`: [653, 529]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.4 Steps to Run; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.47.1.4 Steps to Run"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0206-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.47.2.1 Description"
- `physical_page`: 206
- `printed_page`: "206"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.1 Description"
- `bbox`: [89.9, 417.42, 505.2, 763.17]
- `image_pixels`: [686, 571]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.47.2.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0208-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.47.3.4 Steps to Run"
- `physical_page`: 208
- `printed_page`: "208"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `bbox`: [127.57, 36.9, 467.72, 427.49]
- `image_pixels`: [525, 603]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.47.3.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0209-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.47.3.4 Steps to Run"
- `physical_page`: 209
- `printed_page`: "209"
- `section_path`: "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run"
- `bbox`: [159.65, 214.99, 449.8, 498.46]
- `image_pixels`: [654, 639]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.4 Steps to Run."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.47.3.4 Steps to Run"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0210-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.48.4.3 For Keil"
- `physical_page`: 210
- `printed_page`: "210"
- `section_path`: "Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.3 For Keil"
- `bbox`: [75.0, 364.37, 490.2, 454.3]
- `image_pixels`: [808, 175]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.48 SEC / 2.48.4 Steps to Run / 2.48.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.48.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0212-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.50.1.4.2 For IAR Embedded Workbench"
- `physical_page`: 212
- `printed_page`: "212"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench"
- `bbox`: [90.0, 293.35, 505.3, 655.95]
- `image_pixels`: [969, 846]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.50.1.4.2 For IAR Embedded Workbench"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0214-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.50.2.4.3 For Keil"
- `physical_page`: 214
- `printed_page`: "214"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.3 For Keil"
- `bbox`: [90.0, 36.9, 505.3, 412.1]
- `image_pixels`: [911, 823]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.50.2.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0215-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.50.3.4.2 For IAR Embedded Workbench"
- `physical_page`: 215
- `printed_page`: "215"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench"
- `bbox`: [90.0, 316.29, 505.3, 707.79]
- `image_pixels`: [873, 823]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.50.3.4.2 For IAR Embedded Workbench"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0217-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.50.4.4.3 For Keil"
- `physical_page`: 217
- `printed_page`: "217"
- `section_path`: "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.3 For Keil"
- `bbox`: [90.0, 36.9, 505.3, 418.05]
- `image_pixels`: [851, 781]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.3 For Keil. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.50.4.4.3 For Keil"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0218-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.51.3 MCU Ports"
- `physical_page`: 218
- `printed_page`: "218"
- `section_path`: "Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"
- `bbox`: [127.57, 59.83, 467.71, 539.28]
- `image_pixels`: [696, 981]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.51.3 MCU Ports"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0220-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.52.2 Prerequisites"
- `physical_page`: 220
- `printed_page`: "220"
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites"
- `bbox`: [125.8, 36.9, 469.5, 352.17]
- `image_pixels`: [931, 854]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.52.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0220-002
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.52.2 Prerequisites"
- `physical_page`: 220
- `printed_page`: "220"
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites"
- `bbox`: [136.9, 404.07, 458.4, 742.52]
- `image_pixels`: [930, 979]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.52 STCU / 2.52.2 Prerequisites; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.52.2 Prerequisites"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0221-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.52.4.1.3 For Keil"
- `physical_page`: 221
- `printed_page`: "221"
- `section_path`: "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.3 For Keil"
- `bbox`: [170.15, 264.86, 442.4, 393.86]
- `image_pixels`: [363, 172]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.52 STCU / 2.52.4 Steps to Run / 2.52.4.1.3 For Keil; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.52.4.1.3 For Keil"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0223-001
- `source_figure_number`: null
- `caption`: "Sequence diagram - 2.54.1 Description"
- `physical_page`: 223
- `printed_page`: "223"
- `section_path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.1 Description"
- `bbox`: [152.57, 36.9, 442.72, 320.37]
- `image_pixels`: [654, 639]
- `semantic_description`: "Sequence diagram or flow chart for Chapter 2 Examples and Demos / 2.54 TMU / 2.54.1 Description; shows application, BSP, driver, initialization, start, callback, or interrupt flow for the example."
- `keywords`: ["sequence diagram", "BSP", "driver", "initialization", "callback"]
- `anchor`: "Sequence diagram - 2.54.1 Description"
- `confidence`: 0.78
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number"]

### FIG-0224-001
- `source_figure_number`: null
- `caption`: "UART / tool output screenshot - 2.54.2 Prerequisites"
- `physical_page`: 224
- `printed_page`: "224"
- `section_path`: "Chapter 2 Examples and Demos / 2.54 TMU / 2.54.2 Prerequisites"
- `bbox`: [120.48, 36.9, 474.83, 603.87]
- `image_pixels`: [845, 1352]
- `semantic_description`: "Screenshot or console-output image associated with Chapter 2 Examples and Demos / 2.54 TMU / 2.54.2 Prerequisites; used to verify demo execution results."
- `keywords`: ["UART", "console", "output", "demo result"]
- `anchor`: "UART / tool output screenshot - 2.54.2 Prerequisites"
- `confidence`: 0.73
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0225-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.55.1.1 Description"
- `physical_page`: 225
- `printed_page`: "225"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `bbox`: [89.9, 339.55, 505.2, 603.4]
- `image_pixels`: [1459, 927]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.55.1.1 Description"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0226-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.55.1.1 Description"
- `physical_page`: 226
- `printed_page`: "226"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description"
- `bbox`: [98.9, 76.77, 513.75, 774.67]
- `image_pixels`: [790, 1329]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore / 2.55.1.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.55.1.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0228-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.55.2.2 Prerequisites"
- `physical_page`: 228
- `printed_page`: "228"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.2 Prerequisites"
- `bbox`: [89.9, 36.9, 505.2, 694.75]
- `image_pixels`: [916, 1451]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.55.2.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0230-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.55.3.2 Prerequisites"
- `physical_page`: 230
- `printed_page`: "230"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.2 Prerequisites"
- `bbox`: [89.9, 36.9, 505.2, 622.89]
- `image_pixels`: [815, 1150]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.2 Prerequisites."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.55.3.2 Prerequisites"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0231-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.55.3.4.3 For Keil"
- `physical_page`: 231
- `printed_page`: "231"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"
- `bbox`: [57.25, 253.48, 525.7, 567.78]
- `image_pixels`: [1115, 748]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.55.3.4.3 For Keil"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0233-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.55.4.1 Description"
- `physical_page`: 233
- `printed_page`: "233"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.1 Description"
- `bbox`: [131.88, 36.9, 463.42, 734.8]
- `image_pixels`: [829, 1745]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore / 2.55.4.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.55.4.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0235-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.55.5.1 Description"
- `physical_page`: 235
- `printed_page`: "235"
- `section_path`: "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"
- `bbox`: [129.55, 36.89, 465.75, 734.79]
- `image_pixels`: [948, 1968]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.55.5.1 Description"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0237-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.56.2 Prerequisites"
- `physical_page`: 237
- `printed_page`: "237"
- `section_path`: "Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.2 Prerequisites"
- `bbox`: [111.32, 36.9, 483.97, 734.79]
- `image_pixels`: [684, 1281]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.56 TSTMP / 2.56.2 Prerequisites. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.56.2 Prerequisites"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0239-001
- `source_figure_number`: null
- `caption`: "Demo board/photo illustration - 2.57.1 Description"
- `physical_page`: 239
- `printed_page`: "239"
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.1 Description"
- `bbox`: [152.05, 36.9, 464.85, 363.52]
- `image_pixels`: [956, 998]
- `semantic_description`: "Photo or screenshot associated with hardware setup for Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.1 Description."
- `keywords`: ["demo board", "hardware setup", "connection"]
- `anchor`: "Demo board/photo illustration - 2.57.1 Description"
- `confidence`: 0.72
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

### FIG-0242-001
- `source_figure_number`: null
- `caption`: "Embedded screenshot/diagram - 2.57.4 Steps to Run"
- `physical_page`: 242
- `printed_page`: "242"
- `section_path`: "Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"
- `bbox`: [159.35, 36.9, 453.95, 663.29]
- `image_pixels`: [491, 1044]
- `semantic_description`: "Embedded image associated with Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run. No formal source figure number or caption was detected."
- `keywords`: ["screenshot", "diagram", "example"]
- `anchor`: "Embedded screenshot/diagram - 2.57.4 Steps to Run"
- `confidence`: 0.65
- `quality_flags`: ["generated_internal_id", "no_formal_figure_number", "semantic_description_from_page_context"]

## 8. Term / API / Config / Requirement Index
### TERM-ACC
- `name`: "ACC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "ARMv7 Cache Controller"
- `anchors`:
  - `p11`: "ACC"
- `aliases`: ["ARMv7 Cache Controller"]
- `quality_flags`: []

### TERM-ADC
- `name`: "ADC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Analog-to-Digital Converter"
- `anchors`:
  - `p11`: "ADC"
- `aliases`: ["Analog-to-Digital Converter"]
- `quality_flags`: []

### TERM-AFCB
- `name`: "AFCB"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Advanced Flagchip Bus (APB Bridge)"
- `anchors`:
  - `p11`: "AFCB"
- `aliases`: ["Advanced Flagchip Bus (APB Bridge)"]
- `quality_flags`: []

### TERM-AHB
- `name`: "AHB"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Advanced High-Performance Bus"
- `anchors`:
  - `p11`: "AHB"
- `aliases`: ["Advanced High-Performance Bus"]
- `quality_flags`: []

### TERM-AHBD
- `name`: "AHBD"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "AHB-Lite Debug"
- `anchors`:
  - `p11`: "AHBD"
- `aliases`: ["AHB-Lite Debug"]
- `quality_flags`: []

### TERM-AHBP
- `name`: "AHBP"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "AHB-Lite Peripheral"
- `anchors`:
  - `p11`: "AHBP"
- `aliases`: ["AHB-Lite Peripheral"]
- `quality_flags`: []

### TERM-AHBS
- `name`: "AHBS"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "AHB-Lite Slave"
- `anchors`:
  - `p11`: "AHBS"
- `aliases`: ["AHB-Lite Slave"]
- `quality_flags`: []

### TERM-AMBA
- `name`: "AMBA"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Advanced Microcontroller Bus Architecture"
- `anchors`:
  - `p11`: "AMBA"
- `aliases`: ["Advanced Microcontroller Bus Architecture"]
- `quality_flags`: []

### TERM-AMP
- `name`: "AMP"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Asymmetric Multi-Processing"
- `anchors`:
  - `p11`: "AMP"
- `aliases`: ["Asymmetric Multi-Processing"]
- `quality_flags`: []

### TERM-AOI
- `name`: "AOI"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "AND/OR/INVERT"
- `anchors`:
  - `p11`: "AOI"
- `aliases`: ["AND/OR/INVERT"]
- `quality_flags`: []

### TERM-AONTIMER
- `name`: "AONTIMER"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Always-on Timer"
- `anchors`:
  - `p11`: "AONTIMER"
- `aliases`: ["Always-on Timer"]
- `quality_flags`: []

### TERM-AP
- `name`: "AP"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Access Port"
- `anchors`:
  - `p11`: "AP"
- `aliases`: ["Access Port"]
- `quality_flags`: []

### TERM-APB
- `name`: "APB"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Advanced Peripheral Bus"
- `anchors`:
  - `p11`: "APB"
- `aliases`: ["Advanced Peripheral Bus"]
- `quality_flags`: []

### TERM-AVB
- `name`: "AVB"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Audio Video Bridging"
- `anchors`:
  - `p11`: "AVB"
- `aliases`: ["Audio Video Bridging"]
- `quality_flags`: []

### TERM-AXI
- `name`: "AXI"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Advanced eXtensible Interface"
- `anchors`:
  - `p11`: "AXI"
- `aliases`: ["Advanced eXtensible Interface"]
- `quality_flags`: []

### TERM-BG
- `name`: "BG"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Bandgap"
- `anchors`:
  - `p11`: "BG"
- `aliases`: ["Bandgap"]
- `quality_flags`: []

### TERM-BGA
- `name`: "BGA"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Ball Grid Array"
- `anchors`:
  - `p11`: "BGA"
- `aliases`: ["Ball Grid Array"]
- `quality_flags`: []

### TERM-BIU
- `name`: "BIU"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Bus Interface Unit"
- `anchors`:
  - `p11`: "BIU"
- `aliases`: ["Bus Interface Unit"]
- `quality_flags`: []

### TERM-BJT
- `name`: "BJT"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Bipolar Junction Transistor"
- `anchors`:
  - `p11`: "BJT"
- `aliases`: ["Bipolar Junction Transistor"]
- `quality_flags`: []

### TERM-BTB
- `name`: "BTB"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Back-to-Back"
- `anchors`:
  - `p11`: "BTB"
- `aliases`: ["Back-to-Back"]
- `quality_flags`: []

### TERM-CBC
- `name`: "CBC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Cipher Block Chaining"
- `anchors`:
  - `p11`: "CBC"
- `aliases`: ["Cipher Block Chaining"]
- `quality_flags`: []

### TERM-CCM
- `name`: "CCM"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Counter with CBC-MAC"
- `anchors`:
  - `p11`: "CCM"
- `aliases`: ["Counter with CBC-MAC"]
- `quality_flags`: []

### TERM-CCU
- `name`: "CCU"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Code Cache Unit"
- `anchors`:
  - `p11`: "CCU"
- `aliases`: ["Code Cache Unit"]
- `quality_flags`: []

### TERM-CGC
- `name`: "CGC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Clock Gating Control"
- `anchors`:
  - `p11`: "CGC"
- `aliases`: ["Clock Gating Control"]
- `quality_flags`: []

### TERM-CIC
- `name`: "CIC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Cascaded Integrator Comb"
- `anchors`:
  - `p11`: "CIC"
- `aliases`: ["Cascaded Integrator Comb"]
- `quality_flags`: []

### TERM-CPM
- `name`: "CPM"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "CPU Private Module"
- `anchors`:
  - `p11`: "CPM"
- `aliases`: ["CPU Private Module"]
- `quality_flags`: []

### TERM-CMAC
- `name`: "CMAC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Cipher-based Message Authentication Code"
- `anchors`:
  - `p11`: "CMAC"
- `aliases`: ["Cipher-based Message Authentication Code"]
- `quality_flags`: []

### TERM-CMU
- `name`: "CMU"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Clock Monitor Unit"
- `anchors`:
  - `p11`: "CMU"
- `aliases`: ["Clock Monitor Unit"]
- `quality_flags`: []

### TERM-COCO
- `name`: "COCO"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Conversion Complete"
- `anchors`:
  - `p11`: "COCO"
- `aliases`: ["Conversion Complete"]
- `quality_flags`: []

### TERM-CPWM
- `name`: "CPWM"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Center-aligned Pulse-Width Modulation"
- `anchors`:
  - `p11`: "CPWM"
- `aliases`: ["Center-aligned Pulse-Width Modulation"]
- `quality_flags`: []

### TERM-CRC
- `name`: "CRC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Cyclic Redundancy Check"
- `anchors`:
  - `p11`: "CRC"
- `aliases`: ["Cyclic Redundancy Check"]
- `quality_flags`: []

### TERM-CSC
- `name`: "CSC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "CPU System Control"
- `anchors`:
  - `p11`: "CSC"
- `aliases`: ["CPU System Control"]
- `quality_flags`: []

### TERM-CTCM
- `name`: "CTCM"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Code Tightly-Coupled Memory"
- `anchors`:
  - `p11`: "CTCM"
- `aliases`: ["Code Tightly-Coupled Memory"]
- `quality_flags`: []

### TERM-CTI
- `name`: "CTI"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Cross Trigger Interface"
- `anchors`:
  - `p11`: "CTI"
- `aliases`: ["Cross Trigger Interface"]
- `quality_flags`: []

### TERM-CTM
- `name`: "CTM"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Cross Trigger Matrix"
- `anchors`:
  - `p11`: "CTM"
- `aliases`: ["Cross Trigger Matrix"]
- `quality_flags`: []

### TERM-CTR
- `name`: "CTR"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Counter"
- `anchors`:
  - `p11`: "CTR"
- `aliases`: ["Counter"]
- `quality_flags`: []

### TERM-DAC
- `name`: "DAC"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Digital-to-Analog Converter"
- `anchors`:
  - `p11`: "DAC"
- `aliases`: ["Digital-to-Analog Converter"]
- `quality_flags`: []

### TERM-DDR
- `name`: "DDR"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Double Data Rate"
- `anchors`:
  - `p11`: "DDR"
- `aliases`: ["Double Data Rate"]
- `quality_flags`: []

### TERM-DMA
- `name`: "DMA"
- `type`: "term_abbreviation"
- `primary_page`: 11
- `physical_pages`: 11
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Direct Memory Access"
- `anchors`:
  - `p11`: "DMA"
- `aliases`: ["Direct Memory Access"]
- `quality_flags`: []

### TERM-DMAMUX
- `name`: "DMAMUX"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Direct Memory Access Multiplexer"
- `anchors`:
  - `p12`: "DMAMUX"
- `aliases`: ["Direct Memory Access Multiplexer"]
- `quality_flags`: []

### TERM-DP
- `name`: "DP"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Debug Port"
- `anchors`:
  - `p12`: "DP"
- `aliases`: ["Debug Port"]
- `quality_flags`: []

### TERM-DPFPU
- `name`: "DPFPU"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Double-precision Floating Point Unit"
- `anchors`:
  - `p12`: "DPFPU"
- `aliases`: ["Double-precision Floating Point Unit"]
- `quality_flags`: []

### TERM-DSE
- `name`: "DSE"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Driver Strength Enable"
- `anchors`:
  - `p12`: "DSE"
- `aliases`: ["Driver Strength Enable"]
- `quality_flags`: []

### TERM-DSP
- `name`: "DSP"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Digital Signal Processing"
- `anchors`:
  - `p12`: "DSP"
- `aliases`: ["Digital Signal Processing"]
- `quality_flags`: []

### TERM-DTCM
- `name`: "DTCM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Data Tightly-Coupled Memory"
- `anchors`:
  - `p12`: "DTCM"
- `aliases`: ["Data Tightly-Coupled Memory"]
- `quality_flags`: []

### TERM-DWP
- `name`: "DWP"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Domain Write Protection"
- `anchors`:
  - `p12`: "DWP"
- `aliases`: ["Domain Write Protection"]
- `quality_flags`: []

### TERM-DWT
- `name`: "DWT"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Data Watchpoint and Trace"
- `anchors`:
  - `p12`: "DWT"
- `aliases`: ["Data Watchpoint and Trace"]
- `quality_flags`: []

### TERM-ECB
- `name`: "ECB"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Electronic Codebook Book"
- `anchors`:
  - `p12`: "ECB"
- `aliases`: ["Electronic Codebook Book"]
- `quality_flags`: []

### TERM-ECC
- `name`: "ECC"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Error Correction Code"
- `anchors`:
  - `p12`: "ECC"
- `aliases`: ["Error Correction Code"]
- `quality_flags`: []

### TERM-ECM
- `name`: "ECM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Event Combiner Module"
- `anchors`:
  - `p12`: "ECM"
- `aliases`: ["Event Combiner Module"]
- `quality_flags`: []

### TERM-EEPROM
- `name`: "EEPROM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Electronically Erasable Programmable Read-Only Memory"
- `anchors`:
  - `p12`: "EEPROM"
- `aliases`: ["Electronically Erasable Programmable Read-Only Memory"]
- `quality_flags`: []

### TERM-EFTU
- `name`: "eFTU"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Enhanced Flexible Timer Unit"
- `anchors`:
  - `p12`: "eFTU"
- `aliases`: ["Enhanced Flexible Timer Unit"]
- `quality_flags`: []

### TERM-EIM
- `name`: "EIM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Error Injection Module"
- `anchors`:
  - `p12`: "EIM"
- `aliases`: ["Error Injection Module"]
- `quality_flags`: []

### TERM-EPPB
- `name`: "EPPB"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "External Private Peripheral Bus"
- `anchors`:
  - `p12`: "EPPB"
- `aliases`: ["External Private Peripheral Bus"]
- `quality_flags`: []

### TERM-EPWM
- `name`: "EPWM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Edge-aligned Pulse-Width Modulation"
- `anchors`:
  - `p12`: "EPWM"
- `aliases`: ["Edge-aligned Pulse-Width Modulation"]
- `quality_flags`: []

### TERM-ERM
- `name`: "ERM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Error Reporting Module"
- `anchors`:
  - `p12`: "ERM"
- `aliases`: ["Error Reporting Module"]
- `quality_flags`: []

### TERM-ETB
- `name`: "ETB"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Embedded Trace Buffer"
- `anchors`:
  - `p12`: "ETB"
- `aliases`: ["Embedded Trace Buffer"]
- `quality_flags`: []

### TERM-ETM
- `name`: "ETM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Embedded Trace Macro"
- `anchors`:
  - `p12`: "ETM"
- `aliases`: ["Embedded Trace Macro"]
- `quality_flags`: []

### TERM-EVITA
- `name`: "EVITA"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "E-safety Vehicle Intrusion Protected Applications"
- `anchors`:
  - `p12`: "EVITA"
- `aliases`: ["E-safety Vehicle Intrusion Protected Applications"]
- `quality_flags`: []

### TERM-EVTG
- `name`: "EVTG"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Event Generator"
- `anchors`:
  - `p12`: "EVTG"
- `aliases`: ["Event Generator"]
- `quality_flags`: []

### TERM-FCIIC
- `name`: "FCIIC"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flagchip (FC) Inter-Integrated Circuit"
- `anchors`:
  - `p12`: "FCIIC"
- `aliases`: ["Flagchip (FC) Inter-Integrated Circuit"]
- `quality_flags`: []

### TERM-FCPIT
- `name`: "FCPIT"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flagchip (FC) Programmable Interrupt Timer"
- `anchors`:
  - `p12`: "FCPIT"
- `aliases`: ["Flagchip (FC) Programmable Interrupt Timer"]
- `quality_flags`: []

### TERM-FCSMU
- `name`: "FCSMU"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Fault Control and Safety Management Unit"
- `anchors`:
  - `p12`: "FCSMU"
- `aliases`: ["Fault Control and Safety Management Unit"]
- `quality_flags`: []

### TERM-FCSPI
- `name`: "FCSPI"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flagchip (FC) Serial Peripheral Interface"
- `anchors`:
  - `p12`: "FCSPI"
- `aliases`: ["Flagchip (FC) Serial Peripheral Interface"]
- `quality_flags`: []

### TERM-FCUART
- `name`: "FCUART"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flagchip (FC) Universal Asynchronous Receiver/Transmitter"
- `anchors`:
  - `p12`: "FCUART"
- `aliases`: ["Flagchip (FC) Universal Asynchronous Receiver/Transmitter"]
- `quality_flags`: []

### TERM-FF
- `name`: "FF"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flip-Flop"
- `anchors`:
  - `p12`: "FF"
- `aliases`: ["Flip-Flop"]
- `quality_flags`: []

### TERM-FIFO
- `name`: "FIFO"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "First In First Out"
- `anchors`:
  - `p12`: "FIFO"
- `aliases`: ["First In First Out"]
- `quality_flags`: []

### TERM-FIRC
- `name`: "FIRC"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Fast Internal Reference Clock"
- `anchors`:
  - `p12`: "FIRC"
- `aliases`: ["Fast Internal Reference Clock"]
- `quality_flags`: []

### TERM-FLEXCAN
- `name`: "FLEXCAN"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "FLEX Controller Area Network"
- `anchors`:
  - `p12`: "FLEXCAN"
- `aliases`: ["FLEX Controller Area Network"]
- `quality_flags`: []

### TERM-FMC
- `name`: "FMC"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flash Memory Controller"
- `anchors`:
  - `p12`: "FMC"
- `aliases`: ["Flash Memory Controller"]
- `quality_flags`: []

### TERM-FOSC
- `name`: "FOSC"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Fast Oscillator"
- `anchors`:
  - `p12`: "FOSC"
- `aliases`: ["Fast Oscillator"]
- `quality_flags`: []

### TERM-FPB
- `name`: "FPB"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flash Patch and Breakpoint"
- `anchors`:
  - `p12`: "FPB"
- `aliases`: ["Flash Patch and Breakpoint"]
- `quality_flags`: []

### TERM-FPC
- `name`: "FPC"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Filter & Prescaler Channel"
- `anchors`:
  - `p12`: "FPC"
- `aliases`: ["Filter & Prescaler Channel"]
- `quality_flags`: []

### TERM-FPM
- `name`: "FPM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Full Performance Mode"
- `anchors`:
  - `p12`: "FPM"
- `aliases`: ["Full Performance Mode"]
- `quality_flags`: []

### TERM-FPU
- `name`: "FPU"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Floating Point Unit"
- `anchors`:
  - `p12`: "FPU"
- `aliases`: ["Floating Point Unit"]
- `quality_flags`: []

### TERM-FREQM
- `name`: "FREQM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Frequency Measurement"
- `anchors`:
  - `p12`: "FREQM"
- `aliases`: ["Frequency Measurement"]
- `quality_flags`: []

### TERM-FSE
- `name`: "FSE"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Fast Select Enable"
- `anchors`:
  - `p12`: "FSE"
- `aliases`: ["Fast Select Enable"]
- `quality_flags`: []

### TERM-FSM
- `name`: "FSM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Finite State Machine"
- `anchors`:
  - `p12`: "FSM"
- `aliases`: ["Finite State Machine"]
- `quality_flags`: []

### TERM-FTU
- `name`: "FTU"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Flexible Timer Unit"
- `anchors`:
  - `p12`: "FTU"
- `aliases`: ["Flexible Timer Unit"]
- `quality_flags`: []

### TERM-GCM
- `name`: "GCM"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Galois/Counter Mode"
- `anchors`:
  - `p12`: "GCM"
- `aliases`: ["Galois/Counter Mode"]
- `quality_flags`: []

### TERM-GPIO
- `name`: "GPIO"
- `type`: "term_abbreviation"
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "General-Purpose Input/Output"
- `anchors`:
  - `p12`: "GPIO"
- `aliases`: ["General-Purpose Input/Output"]
- `quality_flags`: []

### TERM-GTB
- `name`: "GTB"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Global Time Base"
- `anchors`:
  - `p13`: "GTB"
- `aliases`: ["Global Time Base"]
- `quality_flags`: []

### TERM-HMI
- `name`: "HMI"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Human-Machine Interface"
- `anchors`:
  - `p13`: "HMI"
- `aliases`: ["Human-Machine Interface"]
- `quality_flags`: []

### TERM-HRPWM
- `name`: "HRPWM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "High Resolution PWM"
- `anchors`:
  - `p13`: "HRPWM"
- `aliases`: ["High Resolution PWM"]
- `quality_flags`: []

### TERM-HSADC
- `name`: "HSADC"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "High-Speed Analog-to-Digital Converter"
- `anchors`:
  - `p13`: "HSADC"
- `aliases`: ["High-Speed Analog-to-Digital Converter"]
- `quality_flags`: []

### TERM-HSM
- `name`: "HSM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Hardware Secure Module"
- `anchors`:
  - `p13`: "HSM"
- `aliases`: ["Hardware Secure Module"]
- `quality_flags`: []

### TERM-HVD
- `name`: "HVD"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "High-Voltage Detect"
- `anchors`:
  - `p13`: "HVD"
- `aliases`: ["High-Voltage Detect"]
- `quality_flags`: []

### TERM-IIC-I2C
- `name`: "IIC/I2C"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Inter-Integrated Circuit"
- `anchors`:
  - `p13`: "IIC/I2C"
- `aliases`: ["Inter-Integrated Circuit"]
- `quality_flags`: []

### TERM-INTM
- `name`: "INTM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Interrupt Monitor"
- `anchors`:
  - `p13`: "INTM"
- `aliases`: ["Interrupt Monitor"]
- `quality_flags`: []

### TERM-IRC
- `name`: "IRC"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Internal Reference Clock"
- `anchors`:
  - `p13`: "IRC"
- `aliases`: ["Internal Reference Clock"]
- `quality_flags`: []

### TERM-IRQ
- `name`: "IRQ"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Interrupt Request"
- `anchors`:
  - `p13`: "IRQ"
- `aliases`: ["Interrupt Request"]
- `quality_flags`: []

### TERM-ISM
- `name`: "ISM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Interface Safety Monitor"
- `anchors`:
  - `p13`: "ISM"
- `aliases`: ["Interface Safety Monitor"]
- `quality_flags`: []

### TERM-ISP
- `name`: "ISP"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "In-System Program"
- `anchors`:
  - `p13`: "ISP"
- `aliases`: ["In-System Program"]
- `quality_flags`: []

### TERM-ITCM
- `name`: "ITCM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Instruction Tightly-Coupled Memory"
- `anchors`:
  - `p13`: "ITCM"
- `aliases`: ["Instruction Tightly-Coupled Memory"]
- `quality_flags`: []

### TERM-ITM
- `name`: "ITM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Instrumentation Trace Macrocell"
- `anchors`:
  - `p13`: "ITM"
- `aliases`: ["Instrumentation Trace Macrocell"]
- `quality_flags`: []

### TERM-LAM
- `name`: "LAM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Logic Analyzer Module"
- `anchors`:
  - `p13`: "LAM"
- `aliases`: ["Logic Analyzer Module"]
- `quality_flags`: []

### TERM-LBIST
- `name`: "LBIST"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Logic Built-In Self-Test"
- `anchors`:
  - `p13`: "LBIST"
- `aliases`: ["Logic Built-In Self-Test"]
- `quality_flags`: []

### TERM-LDO
- `name`: "LDO"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Low Dropout"
- `anchors`:
  - `p13`: "LDO"
- `aliases`: ["Low Dropout"]
- `quality_flags`: []

### TERM-LIN
- `name`: "LIN"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Local Interconnect Network"
- `anchors`:
  - `p13`: "LIN"
- `aliases`: ["Local Interconnect Network"]
- `quality_flags`: []

### TERM-LQFP
- `name`: "LQFP"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Low-profile Quad Flat Package"
- `anchors`:
  - `p13`: "LQFP"
- `aliases`: ["Low-profile Quad Flat Package"]
- `quality_flags`: []

### TERM-LU
- `name`: "LU"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Logic Unit"
- `anchors`:
  - `p13`: "LU"
- `aliases`: ["Logic Unit"]
- `quality_flags`: []

### TERM-LVD
- `name`: "LVD"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Low-Voltage Detect"
- `anchors`:
  - `p13`: "LVD"
- `aliases`: ["Low-Voltage Detect"]
- `quality_flags`: []

### TERM-LVDS
- `name`: "LVDS"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Low Voltage Differential Signaling"
- `anchors`:
  - `p13`: "LVDS"
- `aliases`: ["Low Voltage Differential Signaling"]
- `quality_flags`: []

### TERM-LVR
- `name`: "LVR"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Low-Voltage Reset"
- `anchors`:
  - `p13`: "LVR"
- `aliases`: ["Low-Voltage Reset"]
- `quality_flags`: []

### TERM-MAM
- `name`: "MAM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Matrix Access Monitor"
- `anchors`:
  - `p13`: "MAM"
- `aliases`: ["Matrix Access Monitor"]
- `quality_flags`: []

### TERM-MAP
- `name`: "MAP"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Memory Access Protection"
- `anchors`:
  - `p13`: "MAP"
- `aliases`: ["Memory Access Protection"]
- `quality_flags`: []

### TERM-MB
- `name`: "MB"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Mailbox"
- `anchors`:
  - `p13`: "MB"
- `aliases`: ["Mailbox"]
- `quality_flags`: []

### TERM-MBIST
- `name`: "MBIST"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Memory Built-In Self-Test"
- `anchors`:
  - `p13`: "MBIST"
- `aliases`: ["Memory Built-In Self-Test"]
- `quality_flags`: []

### TERM-MDC
- `name`: "MDC"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Management Data Clock"
- `anchors`:
  - `p13`: "MDC"
- `aliases`: ["Management Data Clock"]
- `quality_flags`: []

### TERM-MDI
- `name`: "MDI"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Mailbox Data Input"
- `anchors`:
  - `p13`: "MDI"
- `aliases`: ["Mailbox Data Input"]
- `quality_flags`: []

### TERM-MDIO
- `name`: "MDIO"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Management Data Input/Output"
- `anchors`:
  - `p13`: "MDIO"
- `aliases`: ["Management Data Input/Output"]
- `quality_flags`: []

### TERM-MII
- `name`: "MII"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Media Independent Interface"
- `anchors`:
  - `p13`: "MII"
- `aliases`: ["Media Independent Interface"]
- `quality_flags`: []

### TERM-MISO
- `name`: "MISO"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Master In Slave Out"
- `anchors`:
  - `p13`: "MISO"
- `aliases`: ["Master In Slave Out"]
- `quality_flags`: []

### TERM-MOSI
- `name`: "MOSI"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Master Out Slave In"
- `anchors`:
  - `p13`: "MOSI"
- `aliases`: ["Master Out Slave In"]
- `quality_flags`: []

### TERM-MPU
- `name`: "MPU"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Memory Protection Unit"
- `anchors`:
  - `p13`: "MPU"
- `aliases`: ["Memory Protection Unit"]
- `quality_flags`: []

### TERM-MSC
- `name`: "MSC"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Micro Second Channel"
- `anchors`:
  - `p13`: "MSC"
- `aliases`: ["Micro Second Channel"]
- `quality_flags`: []

### TERM-MVA
- `name`: "MVA"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Modified Virtual Address"
- `anchors`:
  - `p13`: "MVA"
- `aliases`: ["Modified Virtual Address"]
- `quality_flags`: []

### TERM-NMI
- `name`: "NMI"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Non-maskable Interrupt"
- `anchors`:
  - `p13`: "NMI"
- `aliases`: ["Non-maskable Interrupt"]
- `quality_flags`: []

### TERM-NPN
- `name`: "NPN"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Negative-Positive-Negative"
- `anchors`:
  - `p13`: "NPN"
- `aliases`: ["Negative-Positive-Negative"]
- `quality_flags`: []

### TERM-NVIC
- `name`: "NVIC"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Nested Vectored Interrupt Controller"
- `anchors`:
  - `p13`: "NVIC"
- `aliases`: ["Nested Vectored Interrupt Controller"]
- `quality_flags`: []

### TERM-NVM
- `name`: "NVM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Non-volatile Memory"
- `anchors`:
  - `p13`: "NVM"
- `aliases`: ["Non-volatile Memory"]
- `quality_flags`: []

### TERM-NVR
- `name`: "NVR"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Non-volatile Region"
- `anchors`:
  - `p13`: "NVR"
- `aliases`: ["Non-volatile Region"]
- `quality_flags`: []

### TERM-OPAM
- `name`: "OPAM"
- `type`: "term_abbreviation"
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Operational Amplifier"
- `anchors`:
  - `p13`: "OPAM"
- `aliases`: ["Operational Amplifier"]
- `quality_flags`: []

### TERM-OSC
- `name`: "OSC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Oscillator"
- `anchors`:
  - `p14`: "OSC"
- `aliases`: ["Oscillator"]
- `quality_flags`: []

### TERM-PAP
- `name`: "PAP"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Peripheral Access Protection"
- `anchors`:
  - `p14`: "PAP"
- `aliases`: ["Peripheral Access Protection"]
- `quality_flags`: []

### TERM-PCC
- `name`: "PCC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Peripheral Configuration Control"
- `anchors`:
  - `p14`: "PCC"
- `aliases`: ["Peripheral Configuration Control"]
- `quality_flags`: []

### TERM-PIT
- `name`: "PIT"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Programmable Interrupt Timer"
- `anchors`:
  - `p14`: "PIT"
- `aliases`: ["Programmable Interrupt Timer"]
- `quality_flags`: []

### TERM-PLL
- `name`: "PLL"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Phase-Locked Loop"
- `anchors`:
  - `p14`: "PLL"
- `aliases`: ["Phase-Locked Loop"]
- `quality_flags`: []

### TERM-PMC
- `name`: "PMC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Power Management Controller"
- `anchors`:
  - `p14`: "PMC"
- `aliases`: ["Power Management Controller"]
- `quality_flags`: []

### TERM-PMIC
- `name`: "PMIC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Power Management Integrated Circuit"
- `anchors`:
  - `p14`: "PMIC"
- `aliases`: ["Power Management Integrated Circuit"]
- `quality_flags`: []

### TERM-PNET
- `name`: "PNET"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Pretended Networking"
- `anchors`:
  - `p14`: "PNET"
- `aliases`: ["Pretended Networking"]
- `quality_flags`: []

### TERM-POR
- `name`: "POR"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Power-on Reset"
- `anchors`:
  - `p14`: "POR"
- `aliases`: ["Power-on Reset"]
- `quality_flags`: []

### TERM-PPB
- `name`: "PPB"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Private Peripheral Bus"
- `anchors`:
  - `p14`: "PPB"
- `aliases`: ["Private Peripheral Bus"]
- `quality_flags`: []

### TERM-PTAT
- `name`: "PTAT"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Proportional-to-Absolute Temperature"
- `anchors`:
  - `p14`: "PTAT"
- `aliases`: ["Proportional-to-Absolute Temperature"]
- `quality_flags`: []

### TERM-PTP
- `name`: "PTP"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Precision Time Protocol"
- `anchors`:
  - `p14`: "PTP"
- `aliases`: ["Precision Time Protocol"]
- `quality_flags`: []

### TERM-PWM
- `name`: "PWM"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Pulse Width Modulation"
- `anchors`:
  - `p14`: "PWM"
- `aliases`: ["Pulse Width Modulation"]
- `quality_flags`: []

### TERM-QDT
- `name`: "QDT"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Quadrature Decode Timer"
- `anchors`:
  - `p14`: "QDT"
- `aliases`: ["Quadrature Decode Timer"]
- `quality_flags`: []

### TERM-RCC
- `name`: "RCC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Reset and Clock Controller"
- `anchors`:
  - `p14`: "RCC"
- `aliases`: ["Reset and Clock Controller"]
- `quality_flags`: []

### TERM-RGM
- `name`: "RGM"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Reset Generation Module"
- `anchors`:
  - `p14`: "RGM"
- `aliases`: ["Reset Generation Module"]
- `quality_flags`: []

### TERM-RMII
- `name`: "RMII"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Reduced Media Independent Interface"
- `anchors`:
  - `p14`: "RMII"
- `aliases`: ["Reduced Media Independent Interface"]
- `quality_flags`: []

### TERM-RPM
- `name`: "RPM"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Reduce Power Mode"
- `anchors`:
  - `p14`: "RPM"
- `aliases`: ["Reduce Power Mode"]
- `quality_flags`: []

### TERM-RSA
- `name`: "RSA"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Rivest-Shamir-Adleman"
- `anchors`:
  - `p14`: "RSA"
- `aliases`: ["Rivest-Shamir-Adleman"]
- `quality_flags`: []

### TERM-RTC
- `name`: "RTC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Real-Time Clock"
- `anchors`:
  - `p14`: "RTC"
- `aliases`: ["Real-Time Clock"]
- `quality_flags`: []

### TERM-RWDS
- `name`: "RWDS"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Read/Write Data Strobe"
- `anchors`:
  - `p14`: "RWDS"
- `aliases`: ["Read/Write Data Strobe"]
- `quality_flags`: []

### TERM-RWW
- `name`: "RWW"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Read-While-Write"
- `anchors`:
  - `p14`: "RWW"
- `aliases`: ["Read-While-Write"]
- `quality_flags`: []

### TERM-SBC
- `name`: "SBC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "System Basis Chip"
- `anchors`:
  - `p14`: "SBC"
- `aliases`: ["System Basis Chip"]
- `quality_flags`: []

### TERM-SCG
- `name`: "SCG"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "System Clock Generator"
- `anchors`:
  - `p14`: "SCG"
- `aliases`: ["System Clock Generator"]
- `quality_flags`: []

### TERM-SCL
- `name`: "SCL"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Serial Clock Line"
- `anchors`:
  - `p14`: "SCL"
- `aliases`: ["Serial Clock Line"]
- `quality_flags`: []

### TERM-SCM
- `name`: "SCM"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "System Control Module"
- `anchors`:
  - `p14`: "SCM"
- `aliases`: ["System Control Module"]
- `quality_flags`: []

### TERM-SCS
- `name`: "SCS"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "System Control Space"
- `anchors`:
  - `p14`: "SCS"
- `aliases`: ["System Control Space"]
- `quality_flags`: []

### TERM-SDA
- `name`: "SDA"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Serial Data Line"
- `anchors`:
  - `p14`: "SDA"
- `aliases`: ["Serial Data Line"]
- `quality_flags`: []

### TERM-SDADC
- `name`: "SDADC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Sigma Delta Analog-to-Digital Converter"
- `anchors`:
  - `p14`: "SDADC"
- `aliases`: ["Sigma Delta Analog-to-Digital Converter"]
- `quality_flags`: []

### TERM-SDR
- `name`: "SDR"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Single Data Rate"
- `anchors`:
  - `p14`: "SDR"
- `aliases`: ["Single Data Rate"]
- `quality_flags`: []

### TERM-SEC
- `name`: "SEC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Security Controller"
- `anchors`:
  - `p14`: "SEC"
- `aliases`: ["Security Controller"]
- `quality_flags`: []

### TERM-SECDED
- `name`: "SECDED"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Single-bit Error Correction and Double-bit Error Detection"
- `anchors`:
  - `p14`: "SECDED"
- `aliases`: ["Single-bit Error Correction and Double-bit Error Detection"]
- `quality_flags`: []

### TERM-SEMA
- `name`: "SEMA"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Semaphore"
- `anchors`:
  - `p14`: "SEMA"
- `aliases`: ["Semaphore"]
- `quality_flags`: []

### TERM-SENT
- `name`: "SENT"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Single Edge Nibble Transmission"
- `anchors`:
  - `p14`: "SENT"
- `aliases`: ["Single Edge Nibble Transmission"]
- `quality_flags`: []

### TERM-SIMD
- `name`: "SIMD"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Single Instruction Multiple Data"
- `anchors`:
  - `p14`: "SIMD"
- `aliases`: ["Single Instruction Multiple Data"]
- `quality_flags`: []

### TERM-SIRC
- `name`: "SIRC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Slow Internal Reference Clock"
- `anchors`:
  - `p14`: "SIRC"
- `aliases`: ["Slow Internal Reference Clock"]
- `quality_flags`: []

### TERM-SMBUS
- `name`: "SMBUS"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "System Management Bus"
- `anchors`:
  - `p14`: "SMBUS"
- `aliases`: ["System Management Bus"]
- `quality_flags`: []

### TERM-SMC
- `name`: "SMC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "System Mode Controller"
- `anchors`:
  - `p14`: "SMC"
- `aliases`: ["System Mode Controller"]
- `quality_flags`: []

### TERM-SMP
- `name`: "SMP"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Symmetric Multi-Processing"
- `anchors`:
  - `p14`: "SMP"
- `aliases`: ["Symmetric Multi-Processing"]
- `quality_flags`: []

### TERM-SOG
- `name`: "SOG"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Sea of Gate"
- `anchors`:
  - `p14`: "SOG"
- `aliases`: ["Sea of Gate"]
- `quality_flags`: []

### TERM-SOSC
- `name`: "SOSC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Slow Oscillator"
- `anchors`:
  - `p14`: "SOSC"
- `aliases`: ["Slow Oscillator"]
- `quality_flags`: []

### TERM-SPC
- `name`: "SPC"
- `type`: "term_abbreviation"
- `primary_page`: 14
- `physical_pages`: 14
- `section_paths`: ["Chapter 1 Introduction / 1.2 Conventions / 1.2.2 Abbreviations"]
- `brief`: "Short PWM Code"
- `anchors`:
  - `p14`: "SPC"
- `aliases`: ["Short PWM Code"]
- `quality_flags`: []

### TERM-SPFPU
- `name`: "SPFPU"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Single-precision Floating Point Unit"
- `anchors`:
  - `p15`: "SPFPU"
- `aliases`: ["Single-precision Floating Point Unit"]
- `quality_flags`: []

### TERM-SPI
- `name`: "SPI"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Serial Peripheral Interface"
- `anchors`:
  - `p15`: "SPI"
- `aliases`: ["Serial Peripheral Interface"]
- `quality_flags`: []

### TERM-SRE
- `name`: "SRE"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Slew Rate Enable"
- `anchors`:
  - `p15`: "SRE"
- `aliases`: ["Slew Rate Enable"]
- `quality_flags`: []

### TERM-SSI
- `name`: "SSI"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Speed and Sensor Interface"
- `anchors`:
  - `p15`: "SSI"
- `aliases`: ["Speed and Sensor Interface"]
- `quality_flags`: []

### TERM-STCU
- `name`: "STCU"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Safety Test and Control Unit"
- `anchors`:
  - `p15`: "STCU"
- `aliases`: ["Safety Test and Control Unit"]
- `quality_flags`: []

### TERM-SWD
- `name`: "SWD"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Serial Wire Debug"
- `anchors`:
  - `p15`: "SWD"
- `aliases`: ["Serial Wire Debug"]
- `quality_flags`: []

### TERM-SWJ-DP
- `name`: "SWJ-DP"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Serial Wire/JTAG Debug Port"
- `anchors`:
  - `p15`: "SWJ-DP"
- `aliases`: ["Serial Wire/JTAG Debug Port"]
- `quality_flags`: []

### TERM-SYSTICK
- `name`: "SysTick"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "System Tick Timer"
- `anchors`:
  - `p15`: "SysTick"
- `aliases`: ["System Tick Timer"]
- `quality_flags`: []

### TERM-TAP
- `name`: "TAP"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Test Access Port"
- `anchors`:
  - `p15`: "TAP"
- `aliases`: ["Test Access Port"]
- `quality_flags`: []

### TERM-TCM
- `name`: "TCM"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Tightly-Coupled Memory"
- `anchors`:
  - `p15`: "TCM"
- `aliases`: ["Tightly-Coupled Memory"]
- `quality_flags`: []

### TERM-TMU
- `name`: "TMU"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Temperature Monitor Unit"
- `anchors`:
  - `p15`: "TMU"
- `aliases`: ["Temperature Monitor Unit"]
- `quality_flags`: []

### TERM-TPIU
- `name`: "TPIU"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Trace Port Interface Unit"
- `anchors`:
  - `p15`: "TPIU"
- `aliases`: ["Trace Port Interface Unit"]
- `quality_flags`: []

### TERM-TRGSEL
- `name`: "TRGSEL"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Trigger Select"
- `anchors`:
  - `p15`: "TRGSEL"
- `aliases`: ["Trigger Select"]
- `quality_flags`: []

### TERM-TSN
- `name`: "TSN"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Time-Sensitive Networking"
- `anchors`:
  - `p15`: "TSN"
- `aliases`: ["Time-Sensitive Networking"]
- `quality_flags`: []

### TERM-TSTMP
- `name`: "TSTMP"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Timer Stamp"
- `anchors`:
  - `p15`: "TSTMP"
- `aliases`: ["Timer Stamp"]
- `quality_flags`: []

### TERM-UART
- `name`: "UART"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Universal Asynchronous Receiver and Transmitter"
- `anchors`:
  - `p15`: "UART"
- `aliases`: ["Universal Asynchronous Receiver and Transmitter"]
- `quality_flags`: []

### TERM-VCO
- `name`: "VCO"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Voltage-Controlled Oscillator"
- `anchors`:
  - `p15`: "VCO"
- `aliases`: ["Voltage-Controlled Oscillator"]
- `quality_flags`: []

### TERM-WDOG
- `name`: "WDOG"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Watchdog"
- `anchors`:
  - `p15`: "WDOG"
- `aliases`: ["Watchdog"]
- `quality_flags`: []

### TERM-WIC
- `name`: "WIC"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Wake-up Interrupt Controller"
- `anchors`:
  - `p15`: "WIC"
- `aliases`: ["Wake-up Interrupt Controller"]
- `quality_flags`: []

### TERM-WKU
- `name`: "WKU"
- `type`: "term_abbreviation"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Wake-up Unit"
- `anchors`:
  - `p15`: "WKU"
- `aliases`: ["Wake-up Unit"]
- `quality_flags`: []

### MODULE-ADC
- `name`: "ADC"
- `type`: "module_or_demo_group"
- `primary_page`: 29
- `physical_pages`: 29-42
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC"]
- `brief`: "SDK quick start example group or peripheral section: ADC."
- `anchors`:
  - `p29`: "ADC"
- `aliases`: []
- `quality_flags`: []

### MODULE-AONTIMER
- `name`: "AONTIMER"
- `type`: "module_or_demo_group"
- `primary_page`: 42
- `physical_pages`: 42-45
- `section_paths`: ["Chapter 2 Examples and Demos / 2.2 AONTIMER"]
- `brief`: "SDK quick start example group or peripheral section: AONTIMER."
- `anchors`:
  - `p42`: "AONTIMER"
- `aliases`: []
- `quality_flags`: []

### MODULE-CLK-OUT
- `name`: "CLK OUT"
- `type`: "module_or_demo_group"
- `primary_page`: 45
- `physical_pages`: 45-48
- `section_paths`: ["Chapter 2 Examples and Demos / 2.3 CLK OUT"]
- `brief`: "SDK quick start example group or peripheral section: CLK OUT."
- `anchors`:
  - `p45`: "CLK OUT"
- `aliases`: ["CLK_OUT"]
- `quality_flags`: []

### MODULE-CMP
- `name`: "CMP"
- `type`: "module_or_demo_group"
- `primary_page`: 48
- `physical_pages`: 48-54
- `section_paths`: ["Chapter 2 Examples and Demos / 2.4 CMP"]
- `brief`: "SDK quick start example group or peripheral section: CMP."
- `anchors`:
  - `p48`: "CMP"
- `aliases`: []
- `quality_flags`: []

### MODULE-CMU
- `name`: "CMU"
- `type`: "module_or_demo_group"
- `primary_page`: 54
- `physical_pages`: 54-55
- `section_paths`: ["Chapter 2 Examples and Demos / 2.5 CMU"]
- `brief`: "SDK quick start example group or peripheral section: CMU."
- `anchors`:
  - `p54`: "CMU"
- `aliases`: []
- `quality_flags`: []

### MODULE-CORDIC
- `name`: "CORDIC"
- `type`: "module_or_demo_group"
- `primary_page`: 55
- `physical_pages`: 55-56
- `section_paths`: ["Chapter 2 Examples and Demos / 2.6 CORDIC"]
- `brief`: "SDK quick start example group or peripheral section: CORDIC."
- `anchors`:
  - `p55`: "CORDIC"
- `aliases`: []
- `quality_flags`: []

### MODULE-CPM
- `name`: "CPM"
- `type`: "module_or_demo_group"
- `primary_page`: 56
- `physical_pages`: 56-59
- `section_paths`: ["Chapter 2 Examples and Demos / 2.7 CPM"]
- `brief`: "SDK quick start example group or peripheral section: CPM."
- `anchors`:
  - `p56`: "CPM"
- `aliases`: []
- `quality_flags`: []

### MODULE-CRC
- `name`: "CRC"
- `type`: "module_or_demo_group"
- `primary_page`: 59
- `physical_pages`: 59-67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.8 CRC"]
- `brief`: "SDK quick start example group or peripheral section: CRC."
- `anchors`:
  - `p59`: "CRC"
- `aliases`: []
- `quality_flags`: []

### MODULE-DMA
- `name`: "DMA"
- `type`: "module_or_demo_group"
- `primary_page`: 67
- `physical_pages`: 67-70
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA"]
- `brief`: "SDK quick start example group or peripheral section: DMA."
- `anchors`:
  - `p67`: "DMA"
- `aliases`: []
- `quality_flags`: []

### MODULE-EFTU
- `name`: "EFTU"
- `type`: "module_or_demo_group"
- `primary_page`: 70
- `physical_pages`: 70-73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU"]
- `brief`: "SDK quick start example group or peripheral section: EFTU."
- `anchors`:
  - `p70`: "EFTU"
- `aliases`: []
- `quality_flags`: []

### MODULE-EIM-ERM
- `name`: "EIM/ERM"
- `type`: "module_or_demo_group"
- `primary_page`: 73
- `physical_pages`: 73-74
- `section_paths`: ["Chapter 2 Examples and Demos / 2.11 EIM/ERM"]
- `brief`: "SDK quick start example group or peripheral section: EIM/ERM."
- `anchors`:
  - `p73`: "EIM/ERM"
- `aliases`: []
- `quality_flags`: []

### MODULE-ENET
- `name`: "ENET"
- `type`: "module_or_demo_group"
- `primary_page`: 74
- `physical_pages`: 74-88
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET"]
- `brief`: "SDK quick start example group or peripheral section: ENET."
- `anchors`:
  - `p74`: "ENET"
- `aliases`: []
- `quality_flags`: []

### MODULE-FCIIC
- `name`: "FCIIC"
- `type`: "module_or_demo_group"
- `primary_page`: 88
- `physical_pages`: 88-89
- `section_paths`: ["Chapter 2 Examples and Demos / 2.13 FCIIC"]
- `brief`: "SDK quick start example group or peripheral section: FCIIC."
- `anchors`:
  - `p88`: "FCIIC"
- `aliases`: []
- `quality_flags`: []

### MODULE-FCPIT
- `name`: "FCPIT"
- `type`: "module_or_demo_group"
- `primary_page`: 89
- `physical_pages`: 89-94
- `section_paths`: ["Chapter 2 Examples and Demos / 2.14 FCPIT"]
- `brief`: "SDK quick start example group or peripheral section: FCPIT."
- `anchors`:
  - `p89`: "FCPIT"
- `aliases`: []
- `quality_flags`: []

### MODULE-FCSMU
- `name`: "FCSMU"
- `type`: "module_or_demo_group"
- `primary_page`: 94
- `physical_pages`: 94-95
- `section_paths`: ["Chapter 2 Examples and Demos / 2.15 FCSMU"]
- `brief`: "SDK quick start example group or peripheral section: FCSMU."
- `anchors`:
  - `p94`: "FCSMU"
- `aliases`: []
- `quality_flags`: []

### MODULE-FCSPI
- `name`: "FCSPI"
- `type`: "module_or_demo_group"
- `primary_page`: 95
- `physical_pages`: 95-110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI"]
- `brief`: "SDK quick start example group or peripheral section: FCSPI."
- `anchors`:
  - `p95`: "FCSPI"
- `aliases`: []
- `quality_flags`: []

### MODULE-FCUART
- `name`: "FCUART"
- `type`: "module_or_demo_group"
- `primary_page`: 110
- `physical_pages`: 110-113
- `section_paths`: ["Chapter 2 Examples and Demos / 2.17 FCUART"]
- `brief`: "SDK quick start example group or peripheral section: FCUART."
- `anchors`:
  - `p110`: "FCUART"
- `aliases`: []
- `quality_flags`: []

### MODULE-FLASH
- `name`: "Flash"
- `type`: "module_or_demo_group"
- `primary_page`: 113
- `physical_pages`: 113-119
- `section_paths`: ["Chapter 2 Examples and Demos / 2.18 Flash"]
- `brief`: "SDK quick start example group or peripheral section: Flash."
- `anchors`:
  - `p113`: "Flash"
- `aliases`: []
- `quality_flags`: []

### MODULE-FLEXCAN
- `name`: "FLEXCAN"
- `type`: "module_or_demo_group"
- `primary_page`: 119
- `physical_pages`: 119-127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN"]
- `brief`: "SDK quick start example group or peripheral section: FLEXCAN."
- `anchors`:
  - `p119`: "FLEXCAN"
- `aliases`: []
- `quality_flags`: []

### MODULE-FPU-AND-DSP
- `name`: "FPU&DSP"
- `type`: "module_or_demo_group"
- `primary_page`: 127
- `physical_pages`: 127-131
- `section_paths`: ["Chapter 2 Examples and Demos / 2.20 FPU&DSP"]
- `brief`: "SDK quick start example group or peripheral section: FPU&DSP."
- `anchors`:
  - `p127`: "FPU&DSP"
- `aliases`: []
- `quality_flags`: []

### MODULE-FREERTOS
- `name`: "FreeRTOS"
- `type`: "module_or_demo_group"
- `primary_page`: 131
- `physical_pages`: 131-132
- `section_paths`: ["Chapter 2 Examples and Demos / 2.21 FreeRTOS"]
- `brief`: "SDK quick start example group or peripheral section: FreeRTOS."
- `anchors`:
  - `p131`: "FreeRTOS"
- `aliases`: []
- `quality_flags`: []

### MODULE-FREQM
- `name`: "FREQM"
- `type`: "module_or_demo_group"
- `primary_page`: 132
- `physical_pages`: 132-133
- `section_paths`: ["Chapter 2 Examples and Demos / 2.22 FREQM"]
- `brief`: "SDK quick start example group or peripheral section: FREQM."
- `anchors`:
  - `p132`: "FREQM"
- `aliases`: []
- `quality_flags`: []

### MODULE-FS26
- `name`: "FS26"
- `type`: "module_or_demo_group"
- `primary_page`: 133
- `physical_pages`: 133-134
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26"]
- `brief`: "SDK quick start example group or peripheral section: FS26."
- `anchors`:
  - `p133`: "FS26"
- `aliases`: []
- `quality_flags`: []

### MODULE-FTU
- `name`: "FTU"
- `type`: "module_or_demo_group"
- `primary_page`: 134
- `physical_pages`: 134-140
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU"]
- `brief`: "SDK quick start example group or peripheral section: FTU."
- `anchors`:
  - `p134`: "FTU"
- `aliases`: []
- `quality_flags`: []

### MODULE-GPIO
- `name`: "GPIO"
- `type`: "module_or_demo_group"
- `primary_page`: 140
- `physical_pages`: 140-144
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO"]
- `brief`: "SDK quick start example group or peripheral section: GPIO."
- `anchors`:
  - `p140`: "GPIO"
- `aliases`: []
- `quality_flags`: []

### MODULE-HRPWM
- `name`: "HRPWM"
- `type`: "module_or_demo_group"
- `primary_page`: 144
- `physical_pages`: 144-145
- `section_paths`: ["Chapter 2 Examples and Demos / 2.26 HRPWM"]
- `brief`: "SDK quick start example group or peripheral section: HRPWM."
- `anchors`:
  - `p144`: "HRPWM"
- `aliases`: []
- `quality_flags`: []

### MODULE-HSADC
- `name`: "HSADC"
- `type`: "module_or_demo_group"
- `primary_page`: 145
- `physical_pages`: 145-153
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC"]
- `brief`: "SDK quick start example group or peripheral section: HSADC."
- `anchors`:
  - `p145`: "HSADC"
- `aliases`: []
- `quality_flags`: []

### MODULE-HSM
- `name`: "HSM"
- `type`: "module_or_demo_group"
- `primary_page`: 153
- `physical_pages`: 153-155
- `section_paths`: ["Chapter 2 Examples and Demos / 2.28 HSM"]
- `brief`: "SDK quick start example group or peripheral section: HSM."
- `anchors`:
  - `p153`: "HSM"
- `aliases`: []
- `quality_flags`: []

### MODULE-INTM
- `name`: "INTM"
- `type`: "module_or_demo_group"
- `primary_page`: 155
- `physical_pages`: 155-157
- `section_paths`: ["Chapter 2 Examples and Demos / 2.29 INTM"]
- `brief`: "SDK quick start example group or peripheral section: INTM."
- `anchors`:
  - `p155`: "INTM"
- `aliases`: []
- `quality_flags`: []

### MODULE-ISM
- `name`: "ISM"
- `type`: "module_or_demo_group"
- `primary_page`: 157
- `physical_pages`: 157-158
- `section_paths`: ["Chapter 2 Examples and Demos / 2.30 ISM"]
- `brief`: "SDK quick start example group or peripheral section: ISM."
- `anchors`:
  - `p157`: "ISM"
- `aliases`: []
- `quality_flags`: []

### MODULE-LIN
- `name`: "LIN"
- `type`: "module_or_demo_group"
- `primary_page`: 158
- `physical_pages`: 158-161
- `section_paths`: ["Chapter 2 Examples and Demos / 2.31 LIN"]
- `brief`: "SDK quick start example group or peripheral section: LIN."
- `anchors`:
  - `p158`: "LIN"
- `aliases`: []
- `quality_flags`: []

### MODULE-LU
- `name`: "LU"
- `type`: "module_or_demo_group"
- `primary_page`: 161
- `physical_pages`: 161-162
- `section_paths`: ["Chapter 2 Examples and Demos / 2.32 LU"]
- `brief`: "SDK quick start example group or peripheral section: LU."
- `anchors`:
  - `p161`: "LU"
- `aliases`: []
- `quality_flags`: []

### MODULE-MAILBOX
- `name`: "Mailbox"
- `type`: "module_or_demo_group"
- `primary_page`: 162
- `physical_pages`: 162-165
- `section_paths`: ["Chapter 2 Examples and Demos / 2.33 Mailbox"]
- `brief`: "SDK quick start example group or peripheral section: Mailbox."
- `anchors`:
  - `p162`: "Mailbox"
- `aliases`: []
- `quality_flags`: []

### MODULE-MAM
- `name`: "MAM"
- `type`: "module_or_demo_group"
- `primary_page`: 165
- `physical_pages`: 165-167
- `section_paths`: ["Chapter 2 Examples and Demos / 2.34 MAM"]
- `brief`: "SDK quick start example group or peripheral section: MAM."
- `anchors`:
  - `p165`: "MAM"
- `aliases`: []
- `quality_flags`: []

### MODULE-MPU
- `name`: "MPU"
- `type`: "module_or_demo_group"
- `primary_page`: 167
- `physical_pages`: 167-168
- `section_paths`: ["Chapter 2 Examples and Demos / 2.35 MPU"]
- `brief`: "SDK quick start example group or peripheral section: MPU."
- `anchors`:
  - `p167`: "MPU"
- `aliases`: []
- `quality_flags`: []

### MODULE-MSC
- `name`: "MSC"
- `type`: "module_or_demo_group"
- `primary_page`: 168
- `physical_pages`: 168-171
- `section_paths`: ["Chapter 2 Examples and Demos / 2.36 MSC"]
- `brief`: "SDK quick start example group or peripheral section: MSC."
- `anchors`:
  - `p168`: "MSC"
- `aliases`: []
- `quality_flags`: []

### MODULE-MULTICORE
- `name`: "Multicore"
- `type`: "module_or_demo_group"
- `primary_page`: 171
- `physical_pages`: 171-172
- `section_paths`: ["Chapter 2 Examples and Demos / 2.37 Multicore"]
- `brief`: "SDK quick start example group or peripheral section: Multicore."
- `anchors`:
  - `p171`: "Multicore"
- `aliases`: []
- `quality_flags`: []

### MODULE-OTA
- `name`: "OTA"
- `type`: "module_or_demo_group"
- `primary_page`: 172
- `physical_pages`: 172-180
- `section_paths`: ["Chapter 2 Examples and Demos / 2.38 OTA"]
- `brief`: "SDK quick start example group or peripheral section: OTA."
- `anchors`:
  - `p172`: "OTA"
- `aliases`: []
- `quality_flags`: []

### MODULE-OVERLAY
- `name`: "Overlay"
- `type`: "module_or_demo_group"
- `primary_page`: 180
- `physical_pages`: 180-183
- `section_paths`: ["Chapter 2 Examples and Demos / 2.39 Overlay"]
- `brief`: "SDK quick start example group or peripheral section: Overlay."
- `anchors`:
  - `p180`: "Overlay"
- `aliases`: []
- `quality_flags`: []

### MODULE-PMC
- `name`: "PMC"
- `type`: "module_or_demo_group"
- `primary_page`: 183
- `physical_pages`: 183-184
- `section_paths`: ["Chapter 2 Examples and Demos / 2.40 PMC"]
- `brief`: "SDK quick start example group or peripheral section: PMC."
- `anchors`:
  - `p183`: "PMC"
- `aliases`: []
- `quality_flags`: []

### MODULE-PTIMER
- `name`: "PTIMER"
- `type`: "module_or_demo_group"
- `primary_page`: 184
- `physical_pages`: 184-186
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER"]
- `brief`: "SDK quick start example group or peripheral section: PTIMER."
- `anchors`:
  - `p184`: "PTIMER"
- `aliases`: []
- `quality_flags`: []

### MODULE-QDT
- `name`: "QDT"
- `type`: "module_or_demo_group"
- `primary_page`: 186
- `physical_pages`: 186-193
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT"]
- `brief`: "SDK quick start example group or peripheral section: QDT."
- `anchors`:
  - `p186`: "QDT"
- `aliases`: []
- `quality_flags`: []

### MODULE-RGM
- `name`: "RGM"
- `type`: "module_or_demo_group"
- `primary_page`: 193
- `physical_pages`: 193-194
- `section_paths`: ["Chapter 2 Examples and Demos / 2.43 RGM"]
- `brief`: "SDK quick start example group or peripheral section: RGM."
- `anchors`:
  - `p193`: "RGM"
- `aliases`: []
- `quality_flags`: []

### MODULE-RTC
- `name`: "RTC"
- `type`: "module_or_demo_group"
- `primary_page`: 194
- `physical_pages`: 194-201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC"]
- `brief`: "SDK quick start example group or peripheral section: RTC."
- `anchors`:
  - `p194`: "RTC"
- `aliases`: []
- `quality_flags`: []

### MODULE-SC6258XQ
- `name`: "SC6258XQ"
- `type`: "module_or_demo_group"
- `primary_page`: 201
- `physical_pages`: 201-203
- `section_paths`: ["Chapter 2 Examples and Demos / 2.45 SC6258XQ"]
- `brief`: "SDK quick start example group or peripheral section: SC6258XQ."
- `anchors`:
  - `p201`: "SC6258XQ"
- `aliases`: []
- `quality_flags`: []

### MODULE-SCST
- `name`: "SCST"
- `type`: "module_or_demo_group"
- `primary_page`: 203
- `physical_pages`: 203-204
- `section_paths`: ["Chapter 2 Examples and Demos / 2.46 SCST"]
- `brief`: "SDK quick start example group or peripheral section: SCST."
- `anchors`:
  - `p203`: "SCST"
- `aliases`: []
- `quality_flags`: []

### MODULE-SDADC
- `name`: "SDADC"
- `type`: "module_or_demo_group"
- `primary_page`: 204
- `physical_pages`: 204-209
- `section_paths`: ["Chapter 2 Examples and Demos / 2.47 SDADC"]
- `brief`: "SDK quick start example group or peripheral section: SDADC."
- `anchors`:
  - `p204`: "SDADC"
- `aliases`: []
- `quality_flags`: []

### MODULE-SEC
- `name`: "SEC"
- `type`: "module_or_demo_group"
- `primary_page`: 209
- `physical_pages`: 209-210
- `section_paths`: ["Chapter 2 Examples and Demos / 2.48 SEC"]
- `brief`: "SDK quick start example group or peripheral section: SEC."
- `anchors`:
  - `p209`: "SEC"
- `aliases`: []
- `quality_flags`: []

### MODULE-SEMA
- `name`: "SEMA"
- `type`: "module_or_demo_group"
- `primary_page`: 210
- `physical_pages`: 210-211
- `section_paths`: ["Chapter 2 Examples and Demos / 2.49 SEMA"]
- `brief`: "SDK quick start example group or peripheral section: SEMA."
- `anchors`:
  - `p210`: "SEMA"
- `aliases`: []
- `quality_flags`: []

### MODULE-SENT
- `name`: "SENT"
- `type`: "module_or_demo_group"
- `primary_page`: 211
- `physical_pages`: 211-217
- `section_paths`: ["Chapter 2 Examples and Demos / 2.50 SENT"]
- `brief`: "SDK quick start example group or peripheral section: SENT."
- `anchors`:
  - `p211`: "SENT"
- `aliases`: []
- `quality_flags`: []

### MODULE-SMC
- `name`: "SMC"
- `type`: "module_or_demo_group"
- `primary_page`: 217
- `physical_pages`: 217-219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.51 SMC"]
- `brief`: "SDK quick start example group or peripheral section: SMC."
- `anchors`:
  - `p217`: "SMC"
- `aliases`: []
- `quality_flags`: []

### MODULE-STCU
- `name`: "STCU"
- `type`: "module_or_demo_group"
- `primary_page`: 219
- `physical_pages`: 219-221
- `section_paths`: ["Chapter 2 Examples and Demos / 2.52 STCU"]
- `brief`: "SDK quick start example group or peripheral section: STCU."
- `anchors`:
  - `p219`: "STCU"
- `aliases`: []
- `quality_flags`: []

### MODULE-SYSTICK
- `name`: "Systick"
- `type`: "module_or_demo_group"
- `primary_page`: 221
- `physical_pages`: 221-222
- `section_paths`: ["Chapter 2 Examples and Demos / 2.53 Systick"]
- `brief`: "SDK quick start example group or peripheral section: Systick."
- `anchors`:
  - `p221`: "Systick"
- `aliases`: []
- `quality_flags`: []

### MODULE-TMU
- `name`: "TMU"
- `type`: "module_or_demo_group"
- `primary_page`: 222
- `physical_pages`: 222-225
- `section_paths`: ["Chapter 2 Examples and Demos / 2.54 TMU"]
- `brief`: "SDK quick start example group or peripheral section: TMU."
- `anchors`:
  - `p222`: "TMU"
- `aliases`: []
- `quality_flags`: []

### MODULE-TPU
- `name`: "TPU"
- `type`: "module_or_demo_group"
- `primary_page`: 225
- `physical_pages`: 225-236
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU"]
- `brief`: "SDK quick start example group or peripheral section: TPU."
- `anchors`:
  - `p225`: "TPU"
- `aliases`: []
- `quality_flags`: []

### MODULE-TSTMP
- `name`: "TSTMP"
- `type`: "module_or_demo_group"
- `primary_page`: 236
- `physical_pages`: 236-238
- `section_paths`: ["Chapter 2 Examples and Demos / 2.56 TSTMP"]
- `brief`: "SDK quick start example group or peripheral section: TSTMP."
- `anchors`:
  - `p236`: "TSTMP"
- `aliases`: []
- `quality_flags`: []

### MODULE-WDOG
- `name`: "WDOG"
- `type`: "module_or_demo_group"
- `primary_page`: 238
- `physical_pages`: 238-242
- `section_paths`: ["Chapter 2 Examples and Demos / 2.57 WDOG"]
- `brief`: "SDK quick start example group or peripheral section: WDOG."
- `anchors`:
  - `p238`: "WDOG"
- `aliases`: []
- `quality_flags`: []

### EXAMPLE-ADC-SINGLE
- `name`: "ADC_Single"
- `type`: "example_demo"
- `primary_page`: 30
- `physical_pages`: 30-32
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single"]
- `brief`: "SDK example/demo section for ADC_Single."
- `anchors`:
  - `p30`: "ADC_Single"
- `aliases`: ["ADC Single", "adc_single"]
- `quality_flags`: []

### EXAMPLE-ADC-SINGLE-DMA
- `name`: "ADC_Single_DMA"
- `type`: "example_demo"
- `primary_page`: 32
- `physical_pages`: 32-34
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.2 ADC_Single_DMA"]
- `brief`: "SDK example/demo section for ADC_Single_DMA."
- `anchors`:
  - `p32`: "ADC_Single_DMA"
- `aliases`: ["ADC Single DMA", "adc_single_dma"]
- `quality_flags`: []

### EXAMPLE-ADC-DISCONTINUOUS
- `name`: "ADC_Discontinuous"
- `type`: "example_demo"
- `primary_page`: 34
- `physical_pages`: 34-36
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.3 ADC_Discontinuous"]
- `brief`: "SDK example/demo section for ADC_Discontinuous."
- `anchors`:
  - `p34`: "ADC_Discontinuous"
- `aliases`: ["ADC Discontinuous", "adc_discontinuous"]
- `quality_flags`: []

### EXAMPLE-ADC-COMPARE
- `name`: "ADC_Compare"
- `type`: "example_demo"
- `primary_page`: 36
- `physical_pages`: 36-38
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.4 ADC_Compare"]
- `brief`: "SDK example/demo section for ADC_Compare."
- `anchors`:
  - `p36`: "ADC_Compare"
- `aliases`: ["ADC Compare", "adc_compare"]
- `quality_flags`: []

### EXAMPLE-ADC-SEQUENCE-GROUP
- `name`: "ADC_Sequence_Group"
- `type`: "example_demo"
- `primary_page`: 38
- `physical_pages`: 38-40
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.5 ADC_Sequence_Group"]
- `brief`: "SDK example/demo section for ADC_Sequence_Group."
- `anchors`:
  - `p38`: "ADC_Sequence_Group"
- `aliases`: ["ADC Sequence Group", "adc_sequence_group"]
- `quality_flags`: []

### EXAMPLE-ADC-STANDBY
- `name`: "ADC_Standby"
- `type`: "example_demo"
- `primary_page`: 40
- `physical_pages`: 40-42
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.6 ADC_Standby"]
- `brief`: "SDK example/demo section for ADC_Standby."
- `anchors`:
  - `p40`: "ADC_Standby"
- `aliases`: ["ADC Standby", "adc_standby"]
- `quality_flags`: []

### EXAMPLE-ADC-STANDBY-WITH-TSTMP
- `name`: "ADC_Standby_With_Tstmp"
- `type`: "example_demo"
- `primary_page`: 42
- `physical_pages`: 42
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.7 ADC_Standby_With_Tstmp"]
- `brief`: "SDK example/demo section for ADC_Standby_With_Tstmp."
- `anchors`:
  - `p42`: "ADC_Standby_With_Tstmp"
- `aliases`: ["ADC Standby With Tstmp", "adc_standby_with_tstmp"]
- `quality_flags`: []

### EXAMPLE-AONTIMER-TIMECOUNTER
- `name`: "AONTIMER_TimeCounter"
- `type`: "example_demo"
- `primary_page`: 42
- `physical_pages`: 42-44
- `section_paths`: ["Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter"]
- `brief`: "SDK example/demo section for AONTIMER_TimeCounter."
- `anchors`:
  - `p42`: "AONTIMER_TimeCounter"
- `aliases`: ["AONTIMER TimeCounter", "aontimer_timecounter"]
- `quality_flags`: []

### EXAMPLE-AONTIMER-PULSECOUNTER
- `name`: "AONTIMER_PulseCounter"
- `type`: "example_demo"
- `primary_page`: 44
- `physical_pages`: 44-45
- `section_paths`: ["Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter"]
- `brief`: "SDK example/demo section for AONTIMER_PulseCounter."
- `anchors`:
  - `p44`: "AONTIMER_PulseCounter"
- `aliases`: ["AONTIMER PulseCounter", "aontimer_pulsecounter"]
- `quality_flags`: []

### EXAMPLE-CMP-INTERRUPT
- `name`: "CMP_Interrupt"
- `type`: "example_demo"
- `primary_page`: 49
- `physical_pages`: 49-51
- `section_paths`: ["Chapter 2 Examples and Demos / 2.4 CMP / 2.4.2 CMP_Interrupt"]
- `brief`: "SDK example/demo section for CMP_Interrupt."
- `anchors`:
  - `p49`: "CMP_Interrupt"
- `aliases`: ["CMP Interrupt", "cmp_interrupt"]
- `quality_flags`: []

### EXAMPLE-CMP-DMA
- `name`: "CMP_DMA"
- `type`: "example_demo"
- `primary_page`: 51
- `physical_pages`: 51-52
- `section_paths`: ["Chapter 2 Examples and Demos / 2.4 CMP / 2.4.3 CMP_DMA"]
- `brief`: "SDK example/demo section for CMP_DMA."
- `anchors`:
  - `p51`: "CMP_DMA"
- `aliases`: ["CMP DMA", "cmp_dma"]
- `quality_flags`: []

### EXAMPLE-CMP-CHANNELSCAN-INTERRUPT
- `name`: "CMP_ChannelScan_Interrupt"
- `type`: "example_demo"
- `primary_page`: 52
- `physical_pages`: 52-54
- `section_paths`: ["Chapter 2 Examples and Demos / 2.4 CMP / 2.4.4 CMP_ChannelScan_Interrupt"]
- `brief`: "SDK example/demo section for CMP_ChannelScan_Interrupt."
- `anchors`:
  - `p52`: "CMP_ChannelScan_Interrupt"
- `aliases`: ["CMP ChannelScan Interrupt", "cmp_channelscan_interrupt"]
- `quality_flags`: []

### EXAMPLE-CRC-DEMO
- `name`: "CRC_Demo"
- `type`: "example_demo"
- `primary_page`: 60
- `physical_pages`: 60-63
- `section_paths`: ["Chapter 2 Examples and Demos / 2.8 CRC / 2.8.1 CRC_Demo"]
- `brief`: "SDK example/demo section for CRC_Demo."
- `anchors`:
  - `p60`: "CRC_Demo"
- `aliases`: ["CRC Demo", "crc_demo"]
- `quality_flags`: []

### EXAMPLE-CRC-DEMO-HARD-SOFT-COMPARE
- `name`: "CRC_Demo_Hard_Soft_Compare"
- `type`: "example_demo"
- `primary_page`: 63
- `physical_pages`: 63-64
- `section_paths`: ["Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare"]
- `brief`: "SDK example/demo section for CRC_Demo_Hard_Soft_Compare."
- `anchors`:
  - `p63`: "CRC_Demo_Hard_Soft_Compare"
- `aliases`: ["CRC Demo Hard Soft Compare", "crc_demo_hard_soft_compare"]
- `quality_flags`: []

### EXAMPLE-CRC-DEMO-MULTI-STEP
- `name`: "CRC_Demo_Multi_Step"
- `type`: "example_demo"
- `primary_page`: 64
- `physical_pages`: 64-67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step"]
- `brief`: "SDK example/demo section for CRC_Demo_Multi_Step."
- `anchors`:
  - `p64`: "CRC_Demo_Multi_Step"
- `aliases`: ["CRC Demo Multi Step", "crc_demo_multi_step"]
- `quality_flags`: []

### EXAMPLE-DMA-MEMCPY
- `name`: "DMA_Memcpy"
- `type`: "example_demo"
- `primary_page`: 67
- `physical_pages`: 67-68
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy"]
- `brief`: "SDK example/demo section for DMA_Memcpy."
- `anchors`:
  - `p67`: "DMA_Memcpy"
- `aliases`: ["DMA Memcpy", "dma_memcpy"]
- `quality_flags`: []

### EXAMPLE-DMA-CIRCULARBUFFER
- `name`: "DMA_CircularBuffer"
- `type`: "example_demo"
- `primary_page`: 68
- `physical_pages`: 68-70
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.2 DMA_CircularBuffer"]
- `brief`: "SDK example/demo section for DMA_CircularBuffer."
- `anchors`:
  - `p68`: "DMA_CircularBuffer"
- `aliases`: ["DMA CircularBuffer", "dma_circularbuffer"]
- `quality_flags`: []

### EXAMPLE-EFTU-SIGNALDETECT
- `name`: "Eftu_SignalDetect"
- `type`: "example_demo"
- `primary_page`: 70
- `physical_pages`: 70-71
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect"]
- `brief`: "SDK example/demo section for Eftu_SignalDetect."
- `anchors`:
  - `p70`: "Eftu_SignalDetect"
- `aliases`: ["Eftu SignalDetect", "eftu_signaldetect"]
- `quality_flags`: []

### EXAMPLE-EFTU-PWMMEASUREMENT
- `name`: "Eftu_PwmMeasurement"
- `type`: "example_demo"
- `primary_page`: 71
- `physical_pages`: 71-72
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement"]
- `brief`: "SDK example/demo section for Eftu_PwmMeasurement."
- `anchors`:
  - `p71`: "Eftu_PwmMeasurement"
- `aliases`: ["Eftu PwmMeasurement", "eftu_pwmmeasurement"]
- `quality_flags`: []

### EXAMPLE-EFTU-TIMER
- `name`: "Eftu_Timer"
- `type`: "example_demo"
- `primary_page`: 72
- `physical_pages`: 72-73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer"]
- `brief`: "SDK example/demo section for Eftu_Timer."
- `anchors`:
  - `p72`: "Eftu_Timer"
- `aliases`: ["Eftu Timer", "eftu_timer"]
- `quality_flags`: []

### EXAMPLE-EFTU-PWM
- `name`: "Eftu_Pwm"
- `type`: "example_demo"
- `primary_page`: 73
- `physical_pages`: 73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm"]
- `brief`: "SDK example/demo section for Eftu_Pwm."
- `anchors`:
  - `p73`: "Eftu_Pwm"
- `aliases`: ["Eftu Pwm", "eftu_pwm"]
- `quality_flags`: []

### EXAMPLE-ENET-LWIP-FREERTOS
- `name`: "ENET_lwIP_FreeRTOS"
- `type`: "example_demo"
- `primary_page`: 75
- `physical_pages`: 75-78
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS"]
- `brief`: "SDK example/demo section for ENET_lwIP_FreeRTOS."
- `anchors`:
  - `p75`: "ENET_lwIP_FreeRTOS"
- `aliases`: ["ENET lwIP FreeRTOS", "enet_lwip_freertos"]
- `quality_flags`: []

### EXAMPLE-ENET-LWIP-NOSYS
- `name`: "ENET_lwIP_NoSys"
- `type`: "example_demo"
- `primary_page`: 78
- `physical_pages`: 78-81
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys"]
- `brief`: "SDK example/demo section for ENET_lwIP_NoSys."
- `anchors`:
  - `p78`: "ENET_lwIP_NoSys"
- `aliases`: ["ENET lwIP NoSys", "enet_lwip_nosys"]
- `quality_flags`: []

### EXAMPLE-RT-THREAD
- `name`: "RT_THREAD"
- `type`: "example_demo"
- `primary_page`: 81
- `physical_pages`: 81-85
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD"]
- `brief`: "SDK example/demo section for RT_THREAD."
- `anchors`:
  - `p81`: "RT_THREAD"
- `aliases`: ["RT THREAD", "rt_thread"]
- `quality_flags`: []

### EXAMPLE-RT-THREAD-AMP
- `name`: "RT_THREAD_AMP"
- `type`: "example_demo"
- `primary_page`: 85
- `physical_pages`: 85-88
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP"]
- `brief`: "SDK example/demo section for RT_THREAD_AMP."
- `anchors`:
  - `p85`: "RT_THREAD_AMP"
- `aliases`: ["RT THREAD AMP", "rt_thread_amp"]
- `quality_flags`: []

### EXAMPLE-FCPIT-TIMECOUNTER
- `name`: "FCPIT_TimeCounter"
- `type`: "example_demo"
- `primary_page`: 89
- `physical_pages`: 89-91
- `section_paths`: ["Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter"]
- `brief`: "SDK example/demo section for FCPIT_TimeCounter."
- `anchors`:
  - `p89`: "FCPIT_TimeCounter"
- `aliases`: ["FCPIT TimeCounter", "fcpit_timecounter"]
- `quality_flags`: []

### EXAMPLE-FCPIT-CHAINMODECOUNTER
- `name`: "FCPIT_ChainModeCounter"
- `type`: "example_demo"
- `primary_page`: 91
- `physical_pages`: 91-92
- `section_paths`: ["Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter"]
- `brief`: "SDK example/demo section for FCPIT_ChainModeCounter."
- `anchors`:
  - `p91`: "FCPIT_ChainModeCounter"
- `aliases`: ["FCPIT ChainModeCounter", "fcpit_chainmodecounter"]
- `quality_flags`: []

### EXAMPLE-FCPIT-TRGSEL
- `name`: "FCPIT_Trgsel"
- `type`: "example_demo"
- `primary_page`: 92
- `physical_pages`: 92-94
- `section_paths`: ["Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel"]
- `brief`: "SDK example/demo section for FCPIT_Trgsel."
- `anchors`:
  - `p92`: "FCPIT_Trgsel"
- `aliases`: ["FCPIT Trgsel", "fcpit_trgsel"]
- `quality_flags`: []

### EXAMPLE-FCSPI-MASTER-POLLING
- `name`: "FCSPI_Master_Polling"
- `type`: "example_demo"
- `primary_page`: 95
- `physical_pages`: 95-99
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling"]
- `brief`: "SDK example/demo section for FCSPI_Master_Polling."
- `anchors`:
  - `p95`: "FCSPI_Master_Polling"
- `aliases`: ["FCSPI Master Polling", "fcspi_master_polling"]
- `quality_flags`: []

### EXAMPLE-FCSPI-MASTER-INTERRUPT
- `name`: "FCSPI_Master_Interrupt"
- `type`: "example_demo"
- `primary_page`: 99
- `physical_pages`: 99-102
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt"]
- `brief`: "SDK example/demo section for FCSPI_Master_Interrupt."
- `anchors`:
  - `p99`: "FCSPI_Master_Interrupt"
- `aliases`: ["FCSPI Master Interrupt", "fcspi_master_interrupt"]
- `quality_flags`: []

### EXAMPLE-FCSPI-MASTER-DMA
- `name`: "FCSPI_Master_DMA"
- `type`: "example_demo"
- `primary_page`: 102
- `physical_pages`: 102-106
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA"]
- `brief`: "SDK example/demo section for FCSPI_Master_DMA."
- `anchors`:
  - `p102`: "FCSPI_Master_DMA"
- `aliases`: ["FCSPI Master DMA", "fcspi_master_dma"]
- `quality_flags`: []

### EXAMPLE-FCSPI-SLAVE-INTERRUPT
- `name`: "FCSPI_Slave_Interrupt"
- `type`: "example_demo"
- `primary_page`: 106
- `physical_pages`: 106-110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt"]
- `brief`: "SDK example/demo section for FCSPI_Slave_Interrupt."
- `anchors`:
  - `p106`: "FCSPI_Slave_Interrupt"
- `aliases`: ["FCSPI Slave Interrupt", "fcspi_slave_interrupt"]
- `quality_flags`: []

### EXAMPLE-FLASH-ASYNC-PROJECT
- `name`: "Flash_Async_Project"
- `type`: "example_demo"
- `primary_page`: 113
- `physical_pages`: 113-115
- `section_paths`: ["Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project"]
- `brief`: "SDK example/demo section for Flash_Async_Project."
- `anchors`:
  - `p113`: "Flash_Async_Project"
- `aliases`: ["Flash Async Project", "flash_async_project"]
- `quality_flags`: []

### EXAMPLE-FLASH-INT-PROJECT
- `name`: "Flash_INT_Project"
- `type`: "example_demo"
- `primary_page`: 115
- `physical_pages`: 115-117
- `section_paths`: ["Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project"]
- `brief`: "SDK example/demo section for Flash_INT_Project."
- `anchors`:
  - `p115`: "Flash_INT_Project"
- `aliases`: ["Flash INT Project", "flash_int_project"]
- `quality_flags`: []

### EXAMPLE-FLASH-SYNC-PROJECT
- `name`: "Flash_Sync_Project"
- `type`: "example_demo"
- `primary_page`: 117
- `physical_pages`: 117-119
- `section_paths`: ["Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project"]
- `brief`: "SDK example/demo section for Flash_Sync_Project."
- `anchors`:
  - `p117`: "Flash_Sync_Project"
- `aliases`: ["Flash Sync Project", "flash_sync_project"]
- `quality_flags`: []

### EXAMPLE-CAN-DMA-TRANSMIT
- `name`: "CAN_DMA_Transmit"
- `type`: "example_demo"
- `primary_page`: 119
- `physical_pages`: 119-121
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit"]
- `brief`: "SDK example/demo section for CAN_DMA_Transmit."
- `anchors`:
  - `p119`: "CAN_DMA_Transmit"
- `aliases`: ["CAN DMA Transmit", "can_dma_transmit"]
- `quality_flags`: []

### EXAMPLE-CAN-ENHANCEFIFO-DMA
- `name`: "CAN_EnhanceFIFO_DMA"
- `type`: "example_demo"
- `primary_page`: 121
- `physical_pages`: 121-123
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA"]
- `brief`: "SDK example/demo section for CAN_EnhanceFIFO_DMA."
- `anchors`:
  - `p121`: "CAN_EnhanceFIFO_DMA"
- `aliases`: ["CAN EnhanceFIFO DMA", "can_enhancefifo_dma"]
- `quality_flags`: []

### EXAMPLE-CAN-LEGACYFIFO-DMA
- `name`: "CAN_LegacyFIFO_DMA"
- `type`: "example_demo"
- `primary_page`: 123
- `physical_pages`: 123-124
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA"]
- `brief`: "SDK example/demo section for CAN_LegacyFIFO_DMA."
- `anchors`:
  - `p123`: "CAN_LegacyFIFO_DMA"
- `aliases`: ["CAN LegacyFIFO DMA", "can_legacyfifo_dma"]
- `quality_flags`: []

### EXAMPLE-CAN-MB-ENHANCEDFIFO
- `name`: "CAN_MB_EnhancedFIFO"
- `type`: "example_demo"
- `primary_page`: 124
- `physical_pages`: 124-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO"]
- `brief`: "SDK example/demo section for CAN_MB_EnhancedFIFO."
- `anchors`:
  - `p124`: "CAN_MB_EnhancedFIFO"
- `aliases`: ["CAN MB EnhancedFIFO", "can_mb_enhancedfifo"]
- `quality_flags`: []

### EXAMPLE-CAN-MB-LEGACYFIFO
- `name`: "CAN_MB_LegacyFIFO"
- `type`: "example_demo"
- `primary_page`: 126
- `physical_pages`: 126-127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO"]
- `brief`: "SDK example/demo section for CAN_MB_LegacyFIFO."
- `anchors`:
  - `p126`: "CAN_MB_LegacyFIFO"
- `aliases`: ["CAN MB LegacyFIFO", "can_mb_legacyfifo"]
- `quality_flags`: []

### EXAMPLE-TIMECOUNTER
- `name`: "TimeCounter"
- `type`: "example_demo"
- `primary_page`: 135
- `physical_pages`: 135-137
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter"]
- `brief`: "SDK example/demo section for TimeCounter."
- `anchors`:
  - `p135`: "TimeCounter"
- `aliases`: ["timecounter"]
- `quality_flags`: []

### EXAMPLE-OUTPUTCOMPARE
- `name`: "OutputCompare"
- `type`: "example_demo"
- `primary_page`: 137
- `physical_pages`: 137-138
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare"]
- `brief`: "SDK example/demo section for OutputCompare."
- `anchors`:
  - `p137`: "OutputCompare"
- `aliases`: ["outputcompare"]
- `quality_flags`: []

### EXAMPLE-GPIO-TOGGLE
- `name`: "GPIO_Toggle"
- `type`: "example_demo"
- `primary_page`: 140
- `physical_pages`: 140-142
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle"]
- `brief`: "SDK example/demo section for GPIO_Toggle."
- `anchors`:
  - `p140`: "GPIO_Toggle"
- `aliases`: ["GPIO Toggle", "gpio_toggle"]
- `quality_flags`: []

### EXAMPLE-GPIO-EDGEDETECT
- `name`: "GPIO_EdgeDetect"
- `type`: "example_demo"
- `primary_page`: 142
- `physical_pages`: 142-143
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect"]
- `brief`: "SDK example/demo section for GPIO_EdgeDetect."
- `anchors`:
  - `p142`: "GPIO_EdgeDetect"
- `aliases`: ["GPIO EdgeDetect", "gpio_edgedetect"]
- `quality_flags`: []

### EXAMPLE-GPIO-DIGITALFILTER
- `name`: "GPIO_DigitalFilter"
- `type`: "example_demo"
- `primary_page`: 143
- `physical_pages`: 143-144
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter"]
- `brief`: "SDK example/demo section for GPIO_DigitalFilter."
- `anchors`:
  - `p143`: "GPIO_DigitalFilter"
- `aliases`: ["GPIO DigitalFilter", "gpio_digitalfilter"]
- `quality_flags`: []

### EXAMPLE-HSADC-SINGLE
- `name`: "HSADC_Single"
- `type`: "example_demo"
- `primary_page`: 147
- `physical_pages`: 147-149
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single"]
- `brief`: "SDK example/demo section for HSADC_Single."
- `anchors`:
  - `p147`: "HSADC_Single"
- `aliases`: ["HSADC Single", "hsadc_single"]
- `quality_flags`: []

### EXAMPLE-HSADC-SEQUENCE-GROUP
- `name`: "HSADC_Sequence_Group"
- `type`: "example_demo"
- `primary_page`: 149
- `physical_pages`: 149-151
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.2 HSADC_Sequence_Group"]
- `brief`: "SDK example/demo section for HSADC_Sequence_Group."
- `anchors`:
  - `p149`: "HSADC_Sequence_Group"
- `aliases`: ["HSADC Sequence Group", "hsadc_sequence_group"]
- `quality_flags`: []

### EXAMPLE-HSADC-SINGLE-INTERNAL-TRIGGER
- `name`: "HSADC_Single_Internal_Trigger"
- `type`: "example_demo"
- `primary_page`: 151
- `physical_pages`: 151
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.3 HSADC_Single_Internal_Trigger"]
- `brief`: "SDK example/demo section for HSADC_Single_Internal_Trigger."
- `anchors`:
  - `p151`: "HSADC_Single_Internal_Trigger"
- `aliases`: ["HSADC Single Internal Trigger", "hsadc_single_internal_trigger"]
- `quality_flags`: []

### EXAMPLE-HSADC-FAST-COMPARE
- `name`: "HSADC_Fast_Compare"
- `type`: "example_demo"
- `primary_page`: 151
- `physical_pages`: 151-153
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.4 HSADC_Fast_Compare"]
- `brief`: "SDK example/demo section for HSADC_Fast_Compare."
- `anchors`:
  - `p151`: "HSADC_Fast_Compare"
- `aliases`: ["HSADC Fast Compare", "hsadc_fast_compare"]
- `quality_flags`: []

### EXAMPLE-OTA-REGISTERMODE
- `name`: "OTA_RegisterMode"
- `type`: "example_demo"
- `primary_page`: 172
- `physical_pages`: 172-176
- `section_paths`: ["Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode"]
- `brief`: "SDK example/demo section for OTA_RegisterMode."
- `anchors`:
  - `p172`: "OTA_RegisterMode"
- `aliases`: ["OTA RegisterMode", "ota_registermode"]
- `quality_flags`: []

### EXAMPLE-OTA-NVRMODE
- `name`: "OTA_NvrMode"
- `type`: "example_demo"
- `primary_page`: 176
- `physical_pages`: 176-180
- `section_paths`: ["Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode"]
- `brief`: "SDK example/demo section for OTA_NvrMode."
- `anchors`:
  - `p176`: "OTA_NvrMode"
- `aliases`: ["OTA NvrMode", "ota_nvrmode"]
- `quality_flags`: []

### EXAMPLE-QDT-IC-DEMO
- `name`: "QDT_IC_Demo"
- `type`: "example_demo"
- `primary_page`: 186
- `physical_pages`: 186-187
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo"]
- `brief`: "SDK example/demo section for QDT_IC_Demo."
- `anchors`:
  - `p186`: "QDT_IC_Demo"
- `aliases`: ["QDT IC Demo", "qdt_ic_demo"]
- `quality_flags`: []

### EXAMPLE-QDT-ICDM-DEMO
- `name`: "QDT_ICDM_Demo"
- `type`: "example_demo"
- `primary_page`: 187
- `physical_pages`: 187-188
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo"]
- `brief`: "SDK example/demo section for QDT_ICDM_Demo."
- `anchors`:
  - `p187`: "QDT_ICDM_Demo"
- `aliases`: ["QDT ICDM Demo", "qdt_icdm_demo"]
- `quality_flags`: []

### EXAMPLE-QDT-ICENM-DEMO
- `name`: "QDT_ICENM_Demo"
- `type`: "example_demo"
- `primary_page`: 188
- `physical_pages`: 188-189
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo"]
- `brief`: "SDK example/demo section for QDT_ICENM_Demo."
- `anchors`:
  - `p188`: "QDT_ICENM_Demo"
- `aliases`: ["QDT ICENM Demo", "qdt_icenm_demo"]
- `quality_flags`: []

### EXAMPLE-QDT-ICEXPENM-DEMO
- `name`: "QDT_ICEXPENM_Demo"
- `type`: "example_demo"
- `primary_page`: 189
- `physical_pages`: 189-191
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo"]
- `brief`: "SDK example/demo section for QDT_ICEXPENM_Demo."
- `anchors`:
  - `p189`: "QDT_ICEXPENM_Demo"
- `aliases`: ["QDT ICEXPENM Demo", "qdt_icexpenm_demo"]
- `quality_flags`: []

### EXAMPLE-QDT-ICPM-DEMO
- `name`: "QDT_ICPM_Demo"
- `type`: "example_demo"
- `primary_page`: 191
- `physical_pages`: 191-192
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo"]
- `brief`: "SDK example/demo section for QDT_ICPM_Demo."
- `anchors`:
  - `p191`: "QDT_ICPM_Demo"
- `aliases`: ["QDT ICPM Demo", "qdt_icpm_demo"]
- `quality_flags`: []

### EXAMPLE-QDT-QUAD-DEMO
- `name`: "QDT_QUAD_Demo"
- `type`: "example_demo"
- `primary_page`: 192
- `physical_pages`: 192-193
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo"]
- `brief`: "SDK example/demo section for QDT_QUAD_Demo."
- `anchors`:
  - `p192`: "QDT_QUAD_Demo"
- `aliases`: ["QDT QUAD Demo", "qdt_quad_demo"]
- `quality_flags`: []

### EXAMPLE-RTC-ALARM
- `name`: "RTC_Alarm"
- `type`: "example_demo"
- `primary_page`: 195
- `physical_pages`: 195-196
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm"]
- `brief`: "SDK example/demo section for RTC_Alarm."
- `anchors`:
  - `p195`: "RTC_Alarm"
- `aliases`: ["RTC Alarm", "rtc_alarm"]
- `quality_flags`: []

### EXAMPLE-RTC-SECONDINTERRUPT
- `name`: "RTC_SecondInterrupt"
- `type`: "example_demo"
- `primary_page`: 196
- `physical_pages`: 196-198
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt"]
- `brief`: "SDK example/demo section for RTC_SecondInterrupt."
- `anchors`:
  - `p196`: "RTC_SecondInterrupt"
- `aliases`: ["RTC SecondInterrupt", "rtc_secondinterrupt"]
- `quality_flags`: []

### EXAMPLE-RTC-OVERFLOW
- `name`: "RTC_Overflow"
- `type`: "example_demo"
- `primary_page`: 198
- `physical_pages`: 198-199
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.3 RTC_Overflow"]
- `brief`: "SDK example/demo section for RTC_Overflow."
- `anchors`:
  - `p198`: "RTC_Overflow"
- `aliases`: ["RTC Overflow", "rtc_overflow"]
- `quality_flags`: []

### EXAMPLE-RTC-SETREADTIME
- `name`: "RTC_SetReadTime"
- `type`: "example_demo"
- `primary_page`: 199
- `physical_pages`: 199-201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime"]
- `brief`: "SDK example/demo section for RTC_SetReadTime."
- `anchors`:
  - `p199`: "RTC_SetReadTime"
- `aliases`: ["RTC SetReadTime", "rtc_setreadtime"]
- `quality_flags`: []

### EXAMPLE-SDADC-SINGLE
- `name`: "SDADC_Single"
- `type`: "example_demo"
- `primary_page`: 204
- `physical_pages`: 204-206
- `section_paths`: ["Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single"]
- `brief`: "SDK example/demo section for SDADC_Single."
- `anchors`:
  - `p204`: "SDADC_Single"
- `aliases`: ["SDADC Single", "sdadc_single"]
- `quality_flags`: []

### EXAMPLE-SDADC-CONTINOUS
- `name`: "SDADC_Continous"
- `type`: "example_demo"
- `primary_page`: 206
- `physical_pages`: 206-207
- `section_paths`: ["Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous"]
- `brief`: "SDK example/demo section for SDADC_Continous."
- `anchors`:
  - `p206`: "SDADC_Continous"
- `aliases`: ["SDADC Continous", "sdadc_continous"]
- `quality_flags`: []

### EXAMPLE-SDADC-CALIBRATION
- `name`: "SDADC_Calibration"
- `type`: "example_demo"
- `primary_page`: 207
- `physical_pages`: 207-209
- `section_paths`: ["Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration"]
- `brief`: "SDK example/demo section for SDADC_Calibration."
- `anchors`:
  - `p207`: "SDADC_Calibration"
- `aliases`: ["SDADC Calibration", "sdadc_calibration"]
- `quality_flags`: []

### EXAMPLE-SENT-POLLING
- `name`: "SENT_Polling"
- `type`: "example_demo"
- `primary_page`: 211
- `physical_pages`: 211-213
- `section_paths`: ["Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling"]
- `brief`: "SDK example/demo section for SENT_Polling."
- `anchors`:
  - `p211`: "SENT_Polling"
- `aliases`: ["SENT Polling", "sent_polling"]
- `quality_flags`: []

### EXAMPLE-SENT-INTERRUPT
- `name`: "SENT_Interrupt"
- `type`: "example_demo"
- `primary_page`: 213
- `physical_pages`: 213-214
- `section_paths`: ["Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt"]
- `brief`: "SDK example/demo section for SENT_Interrupt."
- `anchors`:
  - `p213`: "SENT_Interrupt"
- `aliases`: ["SENT Interrupt", "sent_interrupt"]
- `quality_flags`: []

### EXAMPLE-SENT-DMA
- `name`: "SENT_Dma"
- `type`: "example_demo"
- `primary_page`: 214
- `physical_pages`: 214-216
- `section_paths`: ["Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma"]
- `brief`: "SDK example/demo section for SENT_Dma."
- `anchors`:
  - `p214`: "SENT_Dma"
- `aliases`: ["SENT Dma", "sent_dma"]
- `quality_flags`: []

### EXAMPLE-SENT-SPC
- `name`: "SENT_SPC"
- `type`: "example_demo"
- `primary_page`: 216
- `physical_pages`: 216-217
- `section_paths`: ["Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC"]
- `brief`: "SDK example/demo section for SENT_SPC."
- `anchors`:
  - `p216`: "SENT_SPC"
- `aliases`: ["SENT SPC", "sent_spc"]
- `quality_flags`: []

### EXAMPLE-TPU-PWM-NONFLEXCORE
- `name`: "Tpu_Pwm_NonFlexCore"
- `type`: "example_demo"
- `primary_page`: 225
- `physical_pages`: 225-227
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.1 Tpu_Pwm_NonFlexCore"]
- `brief`: "SDK example/demo section for Tpu_Pwm_NonFlexCore."
- `anchors`:
  - `p225`: "Tpu_Pwm_NonFlexCore"
- `aliases`: ["Tpu Pwm NonFlexCore", "tpu_pwm_nonflexcore"]
- `quality_flags`: []

### EXAMPLE-TPU-CAPTURE-HOST
- `name`: "Tpu_Capture_Host"
- `type`: "example_demo"
- `primary_page`: 227
- `physical_pages`: 227-229
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host"]
- `brief`: "SDK example/demo section for Tpu_Capture_Host."
- `anchors`:
  - `p227`: "Tpu_Capture_Host"
- `aliases`: ["Tpu Capture Host", "tpu_capture_host"]
- `quality_flags`: []

### EXAMPLE-TPU-HOST
- `name`: "Tpu_Host"
- `type`: "example_demo"
- `primary_page`: 229
- `physical_pages`: 229-232
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host"]
- `brief`: "SDK example/demo section for Tpu_Host."
- `anchors`:
  - `p229`: "Tpu_Host"
- `aliases`: ["Tpu Host", "tpu_host"]
- `quality_flags`: []

### EXAMPLE-TPU-PWM-FLEXCORE
- `name`: "Tpu_Pwm_FlexCore"
- `type`: "example_demo"
- `primary_page`: 232
- `physical_pages`: 232-234
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.4 Tpu_Pwm_FlexCore"]
- `brief`: "SDK example/demo section for Tpu_Pwm_FlexCore."
- `anchors`:
  - `p232`: "Tpu_Pwm_FlexCore"
- `aliases`: ["Tpu Pwm FlexCore", "tpu_pwm_flexcore"]
- `quality_flags`: []

### EXAMPLE-TPU-CAPTURE-FLEXCORE
- `name`: "Tpu_Capture_FlexCore"
- `type`: "example_demo"
- `primary_page`: 234
- `physical_pages`: 234-236
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore"]
- `brief`: "SDK example/demo section for Tpu_Capture_FlexCore."
- `anchors`:
  - `p234`: "Tpu_Capture_FlexCore"
- `aliases`: ["Tpu Capture FlexCore", "tpu_capture_flexcore"]
- `quality_flags`: []

### PIN-ADC0-SE11-PTA29
- `name`: "ADC0_SE11 (PTA29)"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Varistor_0 - wired on board"
- `anchors`:
  - `p32`: "ADC0_SE11 (PTA29)"
- `aliases`: ["Varistor_0 - wired on board"]
- `quality_flags`: []

### PIN-PORT-A26-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port A26: MUX = ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 43
- `physical_pages`: 43-44, 63, 66, 71-73, 76, 79, 82, 87, 132, 141-142, 144-145, 174, 178, 185, 219, 227, 229, 234, 236
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: For toggling LED3; LED1; LED1 - wired on board"
- `anchors`:
  - `p43`: "Port A26: MUX = ALT1, GPIO Output"
- `aliases`: ["For toggling LED3; LED1; LED1 - wired on board"]
- `quality_flags`: []

### PIN-PORT-D31-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port D31: MUX = ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 43
- `physical_pages`: 43-44, 63, 66, 71-73, 76, 79, 82, 87, 132, 137, 141-142, 144-145, 174, 178, 185, 196-198, 200, 211, 219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: LED control pin; LED2; LED2 - wired on board"
- `anchors`:
  - `p43`: "Port D31: MUX = ALT1, GPIO Output"
- `aliases`: ["LED control pin; LED2; LED2 - wired on board"]
- `quality_flags`: []

### PIN-PORT-A14-MUX-ALT3-AONTIMER0-CLK1
- `name`: "Port A14: MUX = ALT3, AONTIMER0_CLK1"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 44
- `physical_pages`: 44
- `section_paths`: ["Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Use key or other connect to this pin to VCC_MCU"
- `anchors`:
  - `p44`: "Port A14: MUX = ALT3, AONTIMER0_CLK1"
- `aliases`: ["Use key or other connect to this pin to VCC_MCU"]
- `quality_flags`: []

### PIN-PORT-E10-MUX-ALT2-SCG-CLOCKOUT
- `name`: "Port E10: MUX = ALT2, SCG_CLOCKOUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 47
- `physical_pages`: 47
- `section_paths`: ["Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Clock out pin"
- `anchors`:
  - `p47`: "Port E10: MUX = ALT2, SCG_CLOCKOUT"
- `aliases`: ["Clock out pin"]
- `quality_flags`: []

### PIN-PORT-A18-MUX-ALT3-UART1-TX
- `name`: "Port A18: MUX = ALT3, UART1_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 54
- `physical_pages`: 54-55, 57, 60, 63, 66, 71-73, 88, 112, 114, 116, 118, 133, 135-138, 140, 145, 157, 162, 172, 181, 186-187, 189-192, 194, 200, 203, 205, 207-209, 211-213, 215-216, 218, 225, 241
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Output information of Core 0"
- `anchors`:
  - `p54`: "Port A18: MUX = ALT3, UART1_TX"
- `aliases`: ["FCUART1 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection; Output information of Core 0"]
- `quality_flags`: []

### PIN-PORT-A19-MUX-ALT3-UART1-RX
- `name`: "Port A19: MUX = ALT3, UART1_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 54
- `physical_pages`: 54-55, 57, 61, 63, 66, 71-73, 88, 112, 114, 116, 118, 133, 135-137, 139-140, 144, 157, 162, 172, 181, 186-187, 189-192, 194, 200, 203, 205, 207-209, 211-213, 215-216, 219, 225, 241
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.2 Flash_INT_Project / 2.18.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.3 Flash_Sync_Project / 2.18.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -; FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchors`:
  - `p54`: "Port A19: MUX = ALT3, UART1_RX"
- `aliases`: ["-; FCUART1 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"]
- `quality_flags`: []

### PIN-PORT-A14-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port A14: MUX = ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 63
- `physical_pages`: 63, 66, 174, 178, 185, 219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps", "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.2 OTA_NvrMode / 2.38.2.6 Compilation and Programming Steps", "Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports", "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description", "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.2 CRC_Demo_Hard_Soft_Compare / 2.8.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.8 CRC / 2.8.3 CRC_Demo_Multi_Step / 2.8.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: LED3; LED3 - wired on board"
- `anchors`:
  - `p63`: "Port A14: MUX = ALT1, GPIO Output"
- `aliases`: ["LED3; LED3 - wired on board"]
- `quality_flags`: []

### PIN-PORT-D28-MUX-ALT6-EFTU0-TIM5
- `name`: "Port D28: MUX = ALT6, EFTU0_TIM5"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 71
- `physical_pages`: 71
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: Eftu0 Tim channel 5 input pin"
- `anchors`:
  - `p71`: "Port D28: MUX = ALT6, EFTU0_TIM5"
- `aliases`: ["Eftu0 Tim channel 5 input pin"]
- `quality_flags`: []

### PIN-PORT-A1-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port A1: MUX = ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 73
- `physical_pages`: 73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Fault generation pin"
- `anchors`:
  - `p73`: "Port A1: MUX = ALT1, GPIO Output"
- `aliases`: ["Fault generation pin"]
- `quality_flags`: []

### PIN-PORT-C19-MUX-ALT6-EFTU2-OUT7
- `name`: "Port C19: MUX = ALT6, EFTU2_OUT7"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 73
- `physical_pages`: 73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: PWM output pin"
- `anchors`:
  - `p73`: "Port C19: MUX = ALT6, EFTU2_OUT7"
- `aliases`: ["PWM output pin"]
- `quality_flags`: []

### PIN-PORT-C9-MUX-ALT3-FTU-FLT10
- `name`: "Port C9: MUX = ALT3, FTU_FLT10"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 73
- `physical_pages`: 73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Fault input pin"
- `anchors`:
  - `p73`: "Port C9: MUX = ALT3, FTU_FLT10"
- `aliases`: ["Fault input pin"]
- `quality_flags`: []

### PIN-PORT-D19-MUX-ALT4-EFTU2-OUT23
- `name`: "Port D19: MUX = ALT4, EFTU2_OUT23"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 73
- `physical_pages`: 73
- `section_paths`: ["Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: PWM output pin"
- `anchors`:
  - `p73`: "Port D19: MUX = ALT4, EFTU2_OUT23"
- `aliases`: ["PWM output pin"]
- `quality_flags`: []

### PIN-PORT-B19-MUX-ALT1-GPIOIN-1000BASET1-ETH-INT-N
- `name`: "Port B19: MUX = ALT1, GPIOIN, 1000BaseT1 ETH_INT_N"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ETH INH - wired on board"
- `anchors`:
  - `p76`: "Port B19: MUX = ALT1, GPIOIN, 1000BaseT1 ETH_INT_N"
- `aliases`: ["ETH INH - wired on board"]
- `quality_flags`: []

### PIN-PORT-B20-MUX-ALT5-ENET-PPS0
- `name`: "Port B20: MUX = ALT5, ENET_PPS0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET PPS0 -output pin on board"
- `anchors`:
  - `p76`: "Port B20: MUX = ALT5, ENET_PPS0"
- `aliases`: ["ENET PPS0 -output pin on board"]
- `quality_flags`: []

### PIN-PORT-B26-MUX-ALT1-GPIOOUT-1000BASET1-ETH-EN
- `name`: "Port B26: MUX = ALT1, GPIOOUT, 1000BaseT1 ETH_EN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 82
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: ETH EN - wired on board"
- `anchors`:
  - `p76`: "Port B26: MUX = ALT1, GPIOOUT, 1000BaseT1 ETH_EN"
- `aliases`: ["ETH EN - wired on board"]
- `quality_flags`: []

### PIN-PORT-B4-MUX-ALT5-ENET-MDIO
- `name`: "Port B4: MUX = ALT5, ENET_MDIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET MDIO - wired on board; MDIO Select - wired on board"
- `anchors`:
  - `p76`: "Port B4: MUX = ALT5, ENET_MDIO"
- `aliases`: ["ENET MDIO - wired on board; MDIO Select - wired on board"]
- `quality_flags`: []

### PIN-PORT-B5-MUX-ALT5-ENET-MDC
- `name`: "Port B5: MUX = ALT5, ENET_MDC"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET MDC - wired on board"
- `anchors`:
  - `p76`: "Port B5: MUX = ALT5, ENET_MDC"
- `aliases`: ["ENET MDC - wired on board"]
- `quality_flags`: []

### PIN-PORT-C0-MUX-ALT5-ENET-RXD1
- `name`: "Port C0: MUX = ALT5, ENET_RXD1"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET RXD1 - wired on board"
- `anchors`:
  - `p76`: "Port C0: MUX = ALT5, ENET_RXD1"
- `aliases`: ["ENET RXD1 - wired on board"]
- `quality_flags`: []

### PIN-PORT-C15-MUX-ALT5-ENET-RXD3
- `name`: "Port C15: MUX = ALT5, ENET_RXD3"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET RXD3 - wired on board"
- `anchors`:
  - `p76`: "Port C15: MUX = ALT5, ENET_RXD3"
- `aliases`: ["ENET RXD3 - wired on board"]
- `quality_flags`: []

### PIN-PORT-C1-MUX-ALT5-ENET-RXD0
- `name`: "Port C1: MUX = ALT5, ENET_RXD0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET RXD0 - wired on board"
- `anchors`:
  - `p76`: "Port C1: MUX = ALT5, ENET_RXD0"
- `aliases`: ["ENET RXD0 - wired on board"]
- `quality_flags`: []

### PIN-PORT-C2-MUX-ALT5-ENET-TXD0
- `name`: "Port C2: MUX = ALT5, ENET_TXD0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET TXD0 - wired on board"
- `anchors`:
  - `p76`: "Port C2: MUX = ALT5, ENET_TXD0"
- `aliases`: ["ENET TXD0 - wired on board"]
- `quality_flags`: []

### PIN-PORT-D10-MUX-ALT5-ENET-RX-CLK
- `name`: "Port D10: MUX = ALT5, ENET_RX_CLK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET RX CLK - wired on board"
- `anchors`:
  - `p76`: "Port D10: MUX = ALT5, ENET_RX_CLK"
- `aliases`: ["ENET RX CLK - wired on board"]
- `quality_flags`: []

### PIN-PORT-D11-MUX-ALT5-ENET-TX-CLK
- `name`: "Port D11: MUX = ALT5, ENET_TX_CLK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET TX CLK - wired on board"
- `anchors`:
  - `p76`: "Port D11: MUX = ALT5, ENET_TX_CLK"
- `aliases`: ["ENET TX CLK - wired on board"]
- `quality_flags`: []

### PIN-PORT-D12-MUX-ALT5-ENET-TX-EN-CTRL
- `name`: "Port D12: MUX = ALT5, ENET_TX_EN_CTRL"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET TX EN - wired on board"
- `anchors`:
  - `p76`: "Port D12: MUX = ALT5, ENET_TX_EN_CTRL"
- `aliases`: ["ENET TX EN - wired on board"]
- `quality_flags`: []

### PIN-PORT-D5-MUX-ALT5-ENET-TXD3
- `name`: "Port D5: MUX = ALT5, ENET_TXD3"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET TXD3 - wired on board"
- `anchors`:
  - `p76`: "Port D5: MUX = ALT5, ENET_TXD3"
- `aliases`: ["ENET TXD3 - wired on board"]
- `quality_flags`: []

### PIN-PORT-D6-MUX-ALT5-ENET-TXD2
- `name`: "Port D6: MUX = ALT5, ENET_TXD2"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET TXD2 - wired on board"
- `anchors`:
  - `p76`: "Port D6: MUX = ALT5, ENET_TXD2"
- `aliases`: ["ENET TXD2 - wired on board"]
- `quality_flags`: []

### PIN-PORT-D7-MUX-ALT5-ENET-TXD1
- `name`: "Port D7: MUX = ALT5, ENET_TXD1"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET TXD1 - wired on board"
- `anchors`:
  - `p76`: "Port D7: MUX = ALT5, ENET_TXD1"
- `aliases`: ["ENET TXD1 - wired on board"]
- `quality_flags`: []

### PIN-PORT-D8-MUX-ALT5-ENET-RX-DV-CTRL
- `name`: "Port D8: MUX = ALT5, ENET_RX_DV_CTRL"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET RX DV - wired on board"
- `anchors`:
  - `p76`: "Port D8: MUX = ALT5, ENET_RX_DV_CTRL"
- `aliases`: ["ENET RX DV - wired on board"]
- `quality_flags`: []

### PIN-PORT-D9-MUX-ALT5-ENET-RXD2
- `name`: "Port D9: MUX = ALT5, ENET_RXD2"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET RXD2 - wired on board"
- `anchors`:
  - `p76`: "Port D9: MUX = ALT5, ENET_RXD2"
- `aliases`: ["ENET RXD2 - wired on board"]
- `quality_flags`: []

### PIN-PORT-E20-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port E20: MUX = ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 82, 87, 132, 141-142, 144
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.21 FreeRTOS / 2.21.4 Steps to Run / 2.21.4.3 For Keil", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.4 Steps to Run / 2.25.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: LED3 - wired on board"
- `anchors`:
  - `p76`: "Port E20: MUX = ALT1, GPIO Output"
- `aliases`: ["LED3 - wired on board"]
- `quality_flags`: []

### PIN-PORT-E26-GPIOOUT-1000BASET1-ETH-WAKE
- `name`: "Port E26: GPIOOUT, 1000BaseT1 ETH_WAKE"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ETH WAKE - wired on board"
- `anchors`:
  - `p76`: "Port E26: GPIOOUT, 1000BaseT1 ETH_WAKE"
- `aliases`: ["ETH WAKE - wired on board"]
- `quality_flags`: []

### PIN-PORT-E8-MUX-ALT1-GPIOOUT-ETH-RST
- `name`: "Port E8: MUX = ALT1: GPIOOUT, ETH RST"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ETH RST - wired on board"
- `anchors`:
  - `p76`: "Port E8: MUX = ALT1: GPIOOUT, ETH RST"
- `aliases`: ["ETH RST - wired on board"]
- `quality_flags`: []

### PIN-PORT-G8-MUX-ALT5-ENET-REF-CLK
- `name`: "Port G8: MUX = ALT5, ENET_REF_CLK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 76
- `physical_pages`: 76, 79, 83
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.2 ENET_lwIP_NoSys / 2.12.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.3 RT_THREAD / 2.12.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: ENET REFCLK - wired on board"
- `anchors`:
  - `p76`: "Port G8: MUX = ALT5, ENET_REF_CLK"
- `aliases`: ["ENET REFCLK - wired on board"]
- `quality_flags`: []

### PIN-PORT-E0-MUX-ALT4-SDA
- `name`: "Port E0: MUX = ALT4, SDA"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 88
- `physical_pages`: 88
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p88`: "Port E0: MUX = ALT4, SDA"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-E1-MUX-ALT4-SCL
- `name`: "Port E1: MUX = ALT4, SCL"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 88
- `physical_pages`: 88
- `section_paths`: ["Chapter 2 Examples and Demos / 2.12 ENET / 2.12.4 RT_THREAD_AMP / 2.12.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p88`: "Port E1: MUX = ALT4, SCL"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PTA18-MUX-ALT3-FCUART1-TX
- `name`: "PTA18: MUX = ALT3, FCUART1_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98, 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: UART transmit pin"
- `anchors`:
  - `p98`: "PTA18: MUX = ALT3, FCUART1_TX"
- `aliases`: ["UART transmit pin"]
- `quality_flags`: []

### PIN-PTA19-MUX-ALT3-FCUART1-RX
- `name`: "PTA19: MUX = ALT3, FCUART1_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98, 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: UART receive pin"
- `anchors`:
  - `p98`: "PTA19: MUX = ALT3, FCUART1_RX"
- `aliases`: ["UART receive pin"]
- `quality_flags`: []

### PIN-PTA26-MUX-ALT1-GPIO
- `name`: "PTA26: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98, 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: LED1"
- `anchors`:
  - `p98`: "PTA26: MUX = ALT1, GPIO"
- `aliases`: ["LED1"]
- `quality_flags`: []

### PIN-PTB23-MUX-ALT3-FCSPI2-PCS0
- `name`: "PTB23: MUX = ALT3, FCSPI2_PCS0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Chip select pin"
- `anchors`:
  - `p98`: "PTB23: MUX = ALT3, FCSPI2_PCS0"
- `aliases`: ["Chip select pin"]
- `quality_flags`: []

### PIN-PTB31-MUX-ALT3-FCSPI2-SCK
- `name`: "PTB31: MUX = ALT3, FCSPI2_SCK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial clock pin"
- `anchors`:
  - `p98`: "PTB31: MUX = ALT3, FCSPI2_SCK"
- `aliases`: ["Serial clock pin"]
- `quality_flags`: []

### PIN-PTC16-MUX-ALT3-FCSPI2-SOUT
- `name`: "PTC16: MUX = ALT3, FCSPI2_SOUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial output pin"
- `anchors`:
  - `p98`: "PTC16: MUX = ALT3, FCSPI2_SOUT"
- `aliases`: ["Serial output pin"]
- `quality_flags`: []

### PIN-PTC18-MUX-ALT3-FCSPI2-SIN
- `name`: "PTC18: MUX = ALT3, FCSPI2_SIN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial input pin"
- `anchors`:
  - `p98`: "PTC18: MUX = ALT3, FCSPI2_SIN"
- `aliases`: ["Serial input pin"]
- `quality_flags`: []

### PIN-PTC3-MUX-ALT1-GPIO
- `name`: "PTC3: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: WP#(refer to GD25Q32 data sheet)"
- `anchors`:
  - `p98`: "PTC3: MUX = ALT1, GPIO"
- `aliases`: ["WP#(refer to GD25Q32 data sheet)"]
- `quality_flags`: []

### PIN-PTC7-MUX-ALT1-GPIO
- `name`: "PTC7: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 98
- `physical_pages`: 98
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: HOLD#( refer to GD25Q32 data sheet)"
- `anchors`:
  - `p98`: "PTC7: MUX = ALT1, GPIO"
- `aliases`: ["HOLD#( refer to GD25Q32 data sheet)"]
- `quality_flags`: []

### PIN-PTA14-MUX-ALT1-GPIO
- `name`: "PTA14: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 102
- `physical_pages`: 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: LED3"
- `anchors`:
  - `p102`: "PTA14: MUX = ALT1, GPIO"
- `aliases`: ["LED3"]
- `quality_flags`: []

### PIN-PTD31-MUX-ALT1-GPIO
- `name`: "PTD31: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 102
- `physical_pages`: 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: LED2"
- `anchors`:
  - `p102`: "PTD31: MUX = ALT1, GPIO"
- `aliases`: ["LED2"]
- `quality_flags`: []

### PIN-PTF8-MUX-ALT4-FCSPI3-SIN
- `name`: "PTF8: MUX = ALT4, FCSPI3_SIN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 102
- `physical_pages`: 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial input pin"
- `anchors`:
  - `p102`: "PTF8: MUX = ALT4, FCSPI3_SIN"
- `aliases`: ["Serial input pin"]
- `quality_flags`: []

### PIN-PTG6-MUX-ALT4-FCSPI3-SOUT
- `name`: "PTG6: MUX = ALT4, FCSPI3_SOUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 102
- `physical_pages`: 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial output pin"
- `anchors`:
  - `p102`: "PTG6: MUX = ALT4, FCSPI3_SOUT"
- `aliases`: ["Serial output pin"]
- `quality_flags`: []

### PIN-PTG7-MUX-ALT4-FCSPI3-PCS0
- `name`: "PTG7: MUX = ALT4, FCSPI3_PCS0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 102
- `physical_pages`: 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Chip select pin"
- `anchors`:
  - `p102`: "PTG7: MUX = ALT4, FCSPI3_PCS0"
- `aliases`: ["Chip select pin"]
- `quality_flags`: []

### PIN-PTH21-MUX-ALT4-FCSPI3-SCK
- `name`: "PTH21: MUX = ALT4, FCSPI3_SCK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 102
- `physical_pages`: 102, 106, 110
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.1 Description", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.4 FCSPI_Slave_Interrupt / 2.16.4.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial clock pin"
- `anchors`:
  - `p102`: "PTH21: MUX = ALT4, FCSPI3_SCK"
- `aliases`: ["Serial clock pin"]
- `quality_flags`: []

### PIN-PORT-A22-MUX-GPIO-OUTPUT-FUNCTION-CAN5-SLT
- `name`: "Port A22: MUX = GPIO output, Function = CAN5_SLT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port A22: MUX = GPIO output, Function = CAN5_SLT"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-A31-MUX-GPIO-OUTPUT-FUNCTION-CAN2-EN
- `name`: "Port A31: MUX = GPIO output, Function = CAN2_EN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122-123, 125-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port A31: MUX = GPIO output, Function = CAN2_EN"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-B18-MUX-GPIO-OUTPUT-FUNCTION-CAN2-STBN
- `name`: "Port B18: MUX = GPIO output, Function = CAN2_STBn"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122-123, 125-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port B18: MUX = GPIO output, Function = CAN2_STBn"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-C7-MUX-GPIO-OUTPUT-FUNCTION-CAN1-STB
- `name`: "Port C7: MUX = GPIO output, Function = CAN1_STB"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122-123, 125-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port C7: MUX = GPIO output, Function = CAN1_STB"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-D15-MUX-ALT3-FUNCTION-CAN2-RX
- `name`: "Port D15: MUX = ALT3, Function = CAN2_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port D15: MUX = ALT3, Function = CAN2_RX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-D16-MUX-ALT3-FUNCTION-CAN2-TX
- `name`: "Port D16: MUX = ALT3, Function = CAN2_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port D16: MUX = ALT3, Function = CAN2_TX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-E15-MUX-ALT3-FUNCTION-CAN5-RX
- `name`: "Port E15: MUX = ALT3, Function = CAN5_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port E15: MUX = ALT3, Function = CAN5_RX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-E16-MUX-ALT3-FUNCTION-CAN5-TX
- `name`: "Port E16: MUX = ALT3, Function = CAN5_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port E16: MUX = ALT3, Function = CAN5_TX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-E23-MUX-ALT3-FUNCTION-CAN1-RX
- `name`: "Port E23: MUX = ALT3, Function = CAN1_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122-123, 125-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port E23: MUX = ALT3, Function = CAN1_RX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-E24-MUX-ALT3-FUNCTION-CAN1-TX
- `name`: "Port E24: MUX = ALT3, Function = CAN1_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122-123, 125-126
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.3 CAN_LegacyFIFO_DMA / 2.19.3.3 MCU Ports", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port E24: MUX = ALT3, Function = CAN1_TX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-F11-MUX-ALT2-FUNCTION-CAN6-TX
- `name`: "Port F11: MUX = ALT2, Function = CAN6_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port F11: MUX = ALT2, Function = CAN6_TX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-G17-MUX-ALT3-FUNCTION-CAN7-TX
- `name`: "Port G17: MUX = ALT3, Function = CAN7_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port G17: MUX = ALT3, Function = CAN7_TX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-G9-MUX-ALT2-FUNCTION-CAN6-RX
- `name`: "Port G9: MUX = ALT2, Function = CAN6_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port G9: MUX = ALT2, Function = CAN6_RX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-H15-MUX-ALT3-FUNCTION-CAN7-RX
- `name`: "Port H15: MUX = ALT3, Function = CAN7_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port H15: MUX = ALT3, Function = CAN7_RX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-I3-MUX-ALT4-FUNCTION-CAN8-TX
- `name`: "Port I3: MUX = ALT4, Function = CAN8_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port I3: MUX = ALT4, Function = CAN8_TX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-I4-MUX-ALT4-FUNCTION-CAN8-RX
- `name`: "Port I4: MUX = ALT4, Function = CAN8_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 120
- `physical_pages`: 120, 122, 124-125, 127
- `section_paths`: ["Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.1 CAN_DMA_Transmit / 2.19.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p120`: "Port I4: MUX = ALT4, Function = CAN8_RX"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-A16-MUX-ALT3-FCSMU-PIN0
- `name`: "Port A16: MUX = ALT3, FCSMU_PIN0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 133
- `physical_pages`: 133, 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports", "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p133`: "Port A16: MUX = ALT3, FCSMU_PIN0"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-E17-MUX-ALT3-FCSMU-PIN1
- `name`: "Port E17: MUX = ALT3, FCSMU_PIN1"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 133
- `physical_pages`: 133, 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports", "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p133`: "Port E17: MUX = ALT3, FCSMU_PIN1"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-A27-MUX-ALT5-FCSPI1-PCS0
- `name`: "Port A27: MUX = ALT5, FCSPI1_PCS0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 134
- `physical_pages`: 134
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Chip select pin"
- `anchors`:
  - `p134`: "Port A27: MUX = ALT5, FCSPI1_PCS0"
- `aliases`: ["Chip select pin"]
- `quality_flags`: []

### PIN-PORT-A28-MUX-ALT5-FCSPI1-SCK
- `name`: "Port A28: MUX = ALT5, FCSPI1_SCK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 134
- `physical_pages`: 134
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial clock pin"
- `anchors`:
  - `p134`: "Port A28: MUX = ALT5, FCSPI1_SCK"
- `aliases`: ["Serial clock pin"]
- `quality_flags`: []

### PIN-PORT-A29-MUX-ALT5-FCSPI1-SIN
- `name`: "Port A29: MUX = ALT5, FCSPI1_SIN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 134
- `physical_pages`: 134
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial input pin"
- `anchors`:
  - `p134`: "Port A29: MUX = ALT5, FCSPI1_SIN"
- `aliases`: ["Serial input pin"]
- `quality_flags`: []

### PIN-PORT-E12-MUX-ALT5-FCSPI1-SOUT
- `name`: "Port E12: MUX = ALT5, FCSPI1_SOUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 134
- `physical_pages`: 134
- `section_paths`: ["Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Serial output pin"
- `anchors`:
  - `p134`: "Port E12: MUX = ALT5, FCSPI1_SOUT"
- `aliases`: ["Serial output pin"]
- `quality_flags`: []

### PIN-PORT-A12-MUX-ALT2-FTU0-CH7
- `name`: "Port A12: MUX=ALT2, FTU0_CH7"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 135
- `physical_pages`: 135
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.1 Description"]
- `brief`: "Demo board pin mapping. Board side: FTU input capture pin"
- `anchors`:
  - `p135`: "Port A12: MUX=ALT2, FTU0_CH7"
- `aliases`: ["FTU input capture pin"]
- `quality_flags`: []

### PIN-PORT-A13-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port A13: MUX=ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 135
- `physical_pages`: 135, 140
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.1 Description", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"]
- `brief`: "Demo board pin mapping. Board side: Output to FTU input capture pin; Output to Phase B"
- `anchors`:
  - `p135`: "Port A13: MUX=ALT1, GPIO Output"
- `aliases`: ["Output to FTU input capture pin; Output to Phase B"]
- `quality_flags`: []

### PIN-PORT-A25-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port A25: MUX=ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 136
- `physical_pages`: 136
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.2 TimeCounter / 2.24.2.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Output a 100Hz signal"
- `anchors`:
  - `p136`: "Port A25: MUX=ALT1, GPIO Output"
- `aliases`: ["Output a 100Hz signal"]
- `quality_flags`: []

### PIN-PORT-A13-MUX-ALT2-FTU0-CH3
- `name`: "Port A13: MUX = ALT2, FTU0_CH3"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 137
- `physical_pages`: 137
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.3 OutputCompare / 2.24.3.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Output a 7.81KHz signal"
- `anchors`:
  - `p137`: "Port A13: MUX = ALT2, FTU0_CH3"
- `aliases`: ["Output a 7.81KHz signal"]
- `quality_flags`: []

### PIN-PORT-A14-MUX-ALT2-FTU-FLT17
- `name`: "Port A14: MUX=ALT2, FTU_FLT17"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 139
- `physical_pages`: 139
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"]
- `brief`: "Demo board pin mapping. Board side: Fault input pin"
- `anchors`:
  - `p139`: "Port A14: MUX=ALT2, FTU_FLT17"
- `aliases`: ["Fault input pin"]
- `quality_flags`: []

### PIN-PORT-D3-MUX-ALT2-FTU3-CH7
- `name`: "Port D3: MUX=ALT2, FTU3_CH7"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 139
- `physical_pages`: 139
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"]
- `brief`: "Demo board pin mapping. Board side: Output a complement signal"
- `anchors`:
  - `p139`: "Port D3: MUX=ALT2, FTU3_CH7"
- `aliases`: ["Output a complement signal"]
- `quality_flags`: []

### PIN-PORT-D4-MUX-ALT2-FTU3-CH6
- `name`: "Port D4: MUX=ALT2, FTU3_CH6"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 139
- `physical_pages`: 139
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"]
- `brief`: "Demo board pin mapping. Board side: Output a variable PWM signal"
- `anchors`:
  - `p139`: "Port D4: MUX=ALT2, FTU3_CH6"
- `aliases`: ["Output a variable PWM signal"]
- `quality_flags`: []

### PIN-PORT-E13-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port E13: MUX=ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 139
- `physical_pages`: 139
- `section_paths`: ["Chapter 2 Examples and Demos / 2.24 FTU / 2.24.5 QuadratureDecoder / 2.24.5.2 Prerequisites"]
- `brief`: "Demo board pin mapping. Board side: Output to fault input"
- `anchors`:
  - `p139`: "Port E13: MUX=ALT1, GPIO Output"
- `aliases`: ["Output to fault input"]
- `quality_flags`: []

### PIN-PORT-A12-MUX-ALT1-GPIO-OUTPUT
- `name`: "Port A12: MUX=ALT1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 140
- `physical_pages`: 140
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"]
- `brief`: "Demo board pin mapping. Board side: Output to Phase A"
- `anchors`:
  - `p140`: "Port A12: MUX=ALT1, GPIO Output"
- `aliases`: ["Output to Phase A"]
- `quality_flags`: []

### PIN-PORT-G22-MUX-ALT6-FTU1-QD-PHA
- `name`: "Port G22: MUX=ALT6, FTU1_QD_PHA"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 140
- `physical_pages`: 140
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"]
- `brief`: "Demo board pin mapping. Board side: Phase A input"
- `anchors`:
  - `p140`: "Port G22: MUX=ALT6, FTU1_QD_PHA"
- `aliases`: ["Phase A input"]
- `quality_flags`: []

### PIN-PORT-G23-MUX-ALT6-FTU1-QD-PHB
- `name`: "Port G23: MUX=ALT6, FTU1_QD_PHB"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 140
- `physical_pages`: 140
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.1 GPIO_Toggle / 2.25.1.1 Description"]
- `brief`: "Demo board pin mapping. Board side: Phase B input"
- `anchors`:
  - `p140`: "Port G23: MUX=ALT6, FTU1_QD_PHB"
- `aliases`: ["Phase B input"]
- `quality_flags`: []

### PIN-PORT-A11-MUX-ALT7-NMI
- `name`: "Port A11: MUX = ALT7, NMI"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 142
- `physical_pages`: 142, 144, 219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"]
- `brief`: "Demo board pin mapping. Board side: -; KEY3"
- `anchors`:
  - `p142`: "Port A11: MUX = ALT7, NMI"
- `aliases`: ["-; KEY3"]
- `quality_flags`: []

### PIN-PORT-D20-MUX-ALT1-GPIO-IN
- `name`: "Port D20: MUX = ALT1, GPIO IN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 142
- `physical_pages`: 142, 144, 219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"]
- `brief`: "Demo board pin mapping. Board side: -; KEY1"
- `anchors`:
  - `p142`: "Port D20: MUX = ALT1, GPIO IN"
- `aliases`: ["-; KEY1"]
- `quality_flags`: []

### PIN-PORT-D26-MUX-ALT1-GPIO-IN
- `name`: "Port D26: MUX = ALT1, GPIO IN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 142
- `physical_pages`: 142, 144, 219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.2 GPIO_EdgeDetect / 2.25.2.4 Steps to Run / 2.25.2.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.25 GPIO / 2.25.3 GPIO_DigitalFilter / 2.25.3.4 Steps to Run / 2.25.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"]
- `brief`: "Demo board pin mapping. Board side: -; KEY2"
- `anchors`:
  - `p142`: "Port D26: MUX = ALT1, GPIO IN"
- `aliases`: ["-; KEY2"]
- `quality_flags`: []

### PIN-PORT-E13-MUX-ALT4-HRPWM0-CH5
- `name`: "Port E13: MUX = ALT4, HRPWM0_CH5"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 145
- `physical_pages`: 145
- `section_paths`: ["Chapter 2 Examples and Demos / 2.26 HRPWM / 2.26.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: HRPWM output pin"
- `anchors`:
  - `p145`: "Port E13: MUX = ALT4, HRPWM0_CH5"
- `aliases`: ["HRPWM output pin"]
- `quality_flags`: []

### PIN-HSADC0-SE2-PTH0
- `name`: "HSADC0_SE2 (PTH0)"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 149
- `physical_pages`: 149
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Free pin - wired on board"
- `anchors`:
  - `p149`: "HSADC0_SE2 (PTH0)"
- `aliases`: ["Free pin - wired on board"]
- `quality_flags`: []

### PIN-HSADC0-SE3-PTH1
- `name`: "HSADC0_SE3 (PTH1)"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 149
- `physical_pages`: 149
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Free pin - wired on board"
- `anchors`:
  - `p149`: "HSADC0_SE3 (PTH1)"
- `aliases`: ["Free pin - wired on board"]
- `quality_flags`: []

### PIN-TRGMUX-IN10-PTC11
- `name`: "TRGMUX IN10(PTC11)"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 161
- `physical_pages`: 161
- `section_paths`: ["Chapter 2 Examples and Demos / 2.32 LU / 2.32.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: C11 (P5100) --- connect key or other to VCC"
- `anchors`:
  - `p161`: "TRGMUX IN10(PTC11)"
- `aliases`: ["C11 (P5100) --- connect key or other to VCC"]
- `quality_flags`: []

### PIN-PORT-D-MUX-1-GPIO-OUTPUT
- `name`: "Port D, MUX = 1, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 162
- `physical_pages`: 162
- `section_paths`: ["Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: LED(D2E13) control pin"
- `anchors`:
  - `p162`: "Port D, MUX = 1, GPIO Output"
- `aliases`: ["LED(D2E13) control pin"]
- `quality_flags`: []

### PIN-PORT-I18-MUX-4-FCUART2-TX
- `name`: "Port I18, MUX = 4, FCUART2_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 162
- `physical_pages`: 162
- `section_paths`: ["Chapter 2 Examples and Demos / 2.33 Mailbox / 2.33.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: Output information of Core 1"
- `anchors`:
  - `p162`: "Port I18, MUX = 4, FCUART2_TX"
- `aliases`: ["Output information of Core 1"]
- `quality_flags`: []

### PIN-PORT-A2-MUX-ALT4-MSC1-FCLP
- `name`: "Port A2: MUX = ALT4, MSC1 FCLP"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 170
- `physical_pages`: 170
- `section_paths`: ["Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p170`: "Port A2: MUX = ALT4, MSC1 FCLP"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-B8-MUX-ALT5-MSC1-SDI0
- `name`: "Port B8: MUX = ALT5, MSC1 SDI0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 170
- `physical_pages`: 170
- `section_paths`: ["Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p170`: "Port B8: MUX = ALT5, MSC1 SDI0"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-D24-MUX-ALT4-MSC1-SOP
- `name`: "Port D24: MUX = ALT4, MSC1 SOP"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 170
- `physical_pages`: 170
- `section_paths`: ["Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p170`: "Port D24: MUX = ALT4, MSC1 SOP"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-D27-MUX-ALT5-MSC1-EN0
- `name`: "Port D27: MUX = ALT5, MSC1 EN0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 170
- `physical_pages`: 170
- `section_paths`: ["Chapter 2 Examples and Demos / 2.36 MSC / 2.36.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p170`: "Port D27: MUX = ALT5, MSC1 EN0"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-A26-CORE0-LED-TOGGLE
- `name`: "Port A26, Core0 Led Toggle"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 171
- `physical_pages`: 171
- `section_paths`: ["Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: LED1"
- `anchors`:
  - `p171`: "Port A26, Core0 Led Toggle"
- `aliases`: ["LED1"]
- `quality_flags`: []

### PIN-PORT-D31-CORE1-LED-TOGGLE
- `name`: "Port D31, Core1 Led Toggle"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 171
- `physical_pages`: 171
- `section_paths`: ["Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: LED2"
- `anchors`:
  - `p171`: "Port D31, Core1 Led Toggle"
- `aliases`: ["LED2"]
- `quality_flags`: []

### PIN-PORT-A14-CORE2-LED-TOGGLE
- `name`: "Port A14, Core2 Led Toggle"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 172
- `physical_pages`: 172
- `section_paths`: ["Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.1 Description"]
- `brief`: "Demo board pin mapping. Board side: LED3"
- `anchors`:
  - `p172`: "Port A14, Core2 Led Toggle"
- `aliases`: ["LED3"]
- `quality_flags`: []

### PIN-PORT-A26-MUX-ALT1-GPIO-OUT
- `name`: "Port A26: MUX = ALT1, GPIO OUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 181
- `physical_pages`: 181
- `section_paths`: ["Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: GPIO Port"
- `anchors`:
  - `p181`: "Port A26: MUX = ALT1, GPIO OUT"
- `aliases`: ["GPIO Port"]
- `quality_flags`: []

### PIN-PORT-D31-MUX-ALT1-GPIO-OUT
- `name`: "Port D31: MUX = ALT1, GPIO OUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 181
- `physical_pages`: 181
- `section_paths`: ["Chapter 2 Examples and Demos / 2.39 Overlay / 2.39.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: GPIO Port"
- `anchors`:
  - `p181`: "Port D31: MUX = ALT1, GPIO OUT"
- `aliases`: ["GPIO Port"]
- `quality_flags`: []

### PIN-V11
- `name`: "V11"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 184
- `physical_pages`: 184
- `section_paths`: ["Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Voltage on MCU: 1P1"
- `anchors`:
  - `p184`: "V11"
- `aliases`: ["Voltage on MCU: 1P1"]
- `quality_flags`: []

### PIN-V25
- `name`: "V25"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 184
- `physical_pages`: 184
- `section_paths`: ["Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Voltage on MCU: 2P5V"
- `anchors`:
  - `p184`: "V25"
- `aliases`: ["Voltage on MCU: 2P5V"]
- `quality_flags`: []

### PIN-VDD-HV-A
- `name`: "VDD_HV_A"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 184
- `physical_pages`: 184
- `section_paths`: ["Chapter 2 Examples and Demos / 2.40 PMC / 2.40.4 Steps to Run / 2.40.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Voltage on MCU: 5V"
- `anchors`:
  - `p184`: "VDD_HV_A"
- `aliases`: ["Voltage on MCU: 5V"]
- `quality_flags`: []

### PIN-PORT-H3-MUX-ALT1-GPIO
- `name`: "Port H3: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 186
- `physical_pages`: 186, 188-192
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.2 QDT_ICDM_Demo / 2.42.2.4 Steps to Run / 2.42.2.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p186`: "Port H3: MUX = ALT1, GPIO"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-H4-MUX-ALT2-QDT0-PHA
- `name`: "Port H4: MUX = ALT2, QDT0_PHA"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 186
- `physical_pages`: 186-187, 189-192
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p186`: "Port H4: MUX = ALT2, QDT0_PHA"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-H5-MUX-ALT2-QDT0-PHB
- `name`: "Port H5: MUX = ALT2, QDT0_PHB"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 186
- `physical_pages`: 186-187, 189-192
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p186`: "Port H5: MUX = ALT2, QDT0_PHB"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-I2-MUX-ALT1-GPIO
- `name`: "Port I2: MUX = ALT1, GPIO"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 186
- `physical_pages`: 186-187, 189-192
- `section_paths`: ["Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.1 QDT_IC_Demo / 2.42.1.4 Steps to Run / 2.42.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.3 QDT_ICENM_Demo / 2.42.3.4 Steps to Run / 2.42.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.4 QDT_ICEXPENM_Demo / 2.42.4.4 Steps to Run / 2.42.4.4.3 For Keil", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.5 QDT_ICPM_Demo / 2.42.5.4 Steps to Run / 2.42.5.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.42 QDT / 2.42.6 QDT_QUAD_Demo / 2.42.6.4 Steps to Run / 2.42.6.4.1 For FC_IDE"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p186`: "Port I2: MUX = ALT1, GPIO"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-A26-MUX-ALT2-GPIO-OUTPUT
- `name`: "Port A26: MUX = ALT2, GPIO Output"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 196
- `physical_pages`: 196-198, 200, 211, 231
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.1 RTC_Alarm / 2.44.1.4 Steps to Run / 2.44.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.2 RTC_SecondInterrupt / 2.44.2.4 Steps to Run / 2.44.2.4.3 For Keil", "Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.2 Prerequisites", "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: For toggling LED3; LED1"
- `anchors`:
  - `p196`: "Port A26: MUX = ALT2, GPIO Output"
- `aliases`: ["For toggling LED3; LED1"]
- `quality_flags`: []

### PIN-PORT-A30-MUX-ALT3-UART2-RX
- `name`: "Port A30: MUX = ALT3, UART2_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 201
- `physical_pages`: 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: FCUART2 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchors`:
  - `p201`: "Port A30: MUX = ALT3, UART2_RX"
- `aliases`: ["FCUART2 RXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"]
- `quality_flags`: []

### PIN-PORT-D17-MUX-ALT3-UART2-TX
- `name`: "Port D17: MUX = ALT3, UART2_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 201
- `physical_pages`: 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: FCUART2 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"
- `anchors`:
  - `p201`: "Port D17: MUX = ALT3, UART2_TX"
- `aliases`: ["FCUART2 TXD, UART converted to USB. Connector (USB TYPE-C) for external UART connection"]
- `quality_flags`: []

### PIN-PORT-F3-MUX-ALT4-FCSPI6-SIN
- `name`: "Port F3: MUX = ALT4, FCSPI6_SIN"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 201
- `physical_pages`: 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Serial input pin"
- `anchors`:
  - `p201`: "Port F3: MUX = ALT4, FCSPI6_SIN"
- `aliases`: ["Serial input pin"]
- `quality_flags`: []

### PIN-PORT-F4-MUX-ALT4-FCSPI6-SCK
- `name`: "Port F4: MUX = ALT4, FCSPI6_SCK"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 201
- `physical_pages`: 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Serial clock pin"
- `anchors`:
  - `p201`: "Port F4: MUX = ALT4, FCSPI6_SCK"
- `aliases`: ["Serial clock pin"]
- `quality_flags`: []

### PIN-PORT-F5-MUX-ALT4-FCSPI6-SOUT
- `name`: "Port F5: MUX = ALT4, FCSPI6_SOUT"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 201
- `physical_pages`: 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Serial output pin"
- `anchors`:
  - `p201`: "Port F5: MUX = ALT4, FCSPI6_SOUT"
- `aliases`: ["Serial output pin"]
- `quality_flags`: []

### PIN-PORT-I2-MUX-ALT4-FCSPI6-PCS1
- `name`: "Port I2: MUX = ALT4, FCSPI6_PCS1"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 201
- `physical_pages`: 201
- `section_paths`: ["Chapter 2 Examples and Demos / 2.44 RTC / 2.44.4 RTC_SetReadTime / 2.44.4.4 Steps to Run / 2.44.4.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: Chip select pin"
- `anchors`:
  - `p201`: "Port I2: MUX = ALT4, FCSPI6_PCS1"
- `aliases`: ["Chip select pin"]
- `quality_flags`: []

### PIN-PORT-E19-MUX-ALT4-SENT0-RXD2
- `name`: "Port E19: MUX = ALT4, SENT0_RXD2"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 212
- `physical_pages`: 212-213, 215-216
- `section_paths`: ["Chapter 2 Examples and Demos / 2.50 SENT / 2.50.1 SENT_Polling / 2.50.1.4 Steps to Run / 2.50.1.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.2 SENT_Interrupt / 2.50.2.4 Steps to Run / 2.50.2.4.1 For FC_IDE", "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.3 SENT_Dma / 2.50.3.4 Steps to Run / 2.50.3.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.50 SENT / 2.50.4 SENT_SPC / 2.50.4.4 Steps to Run / 2.50.4.4.1 For FC_IDE"]
- `brief`: "Demo board pin mapping. Board side: SENT0, Channel 2, RXD"
- `anchors`:
  - `p212`: "Port E19: MUX = ALT4, SENT0_RXD2"
- `aliases`: ["SENT0, Channel 2, RXD"]
- `quality_flags`: []

### PIN-PORT-F23-MUX-ALT3-UART0-TX
- `name`: "Port F23: MUX = ALT3, UART0_TX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 218
- `physical_pages`: 218
- `section_paths`: ["Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: FCUART0 TXD"
- `anchors`:
  - `p218`: "Port F23: MUX = ALT3, UART0_TX"
- `aliases`: ["FCUART0 TXD"]
- `quality_flags`: []

### PIN-PORT-G21-MUX-ALT3-UART0-RX
- `name`: "Port G21: MUX = ALT3, UART0_RX"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 218
- `physical_pages`: 218
- `section_paths`: ["Chapter 2 Examples and Demos / 2.51 SMC / 2.51.3 MCU Ports"]
- `brief`: "Demo board pin mapping. Board side: FCUART0 RXD"
- `anchors`:
  - `p218`: "Port G21: MUX = ALT3, UART0_RX"
- `aliases`: ["FCUART0 RXD"]
- `quality_flags`: []

### PIN-PORT-F21-MUX-ALT1-GPIO-IN-WAKEUP
- `name`: "Port F21: MUX = ALT1, GPIO IN wakeup"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 219
- `physical_pages`: 219
- `section_paths`: ["Chapter 2 Examples and Demos / 2.52 STCU / 2.52.1 Description"]
- `brief`: "Demo board pin mapping. Board side: -"
- `anchors`:
  - `p219`: "Port F21: MUX = ALT1, GPIO IN wakeup"
- `aliases`: ["-"]
- `quality_flags`: []

### PIN-PORT-A13-MUX-PORT-GPIO-MODE
- `name`: "Port A13: MUX = PORT_GPIO_MODE"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 222
- `physical_pages`: 222
- `section_paths`: ["Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: LED3"
- `anchors`:
  - `p222`: "Port A13: MUX = PORT_GPIO_MODE"
- `aliases`: ["LED3"]
- `quality_flags`: []

### PIN-PORT-A26-MUX-PORT-GPIO-MODE
- `name`: "Port A26: MUX = PORT_GPIO_MODE"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 222
- `physical_pages`: 222
- `section_paths`: ["Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: LED1"
- `anchors`:
  - `p222`: "Port A26: MUX = PORT_GPIO_MODE"
- `aliases`: ["LED1"]
- `quality_flags`: []

### PIN-PORT-D31-MUX-PORT-GPIO-MODE
- `name`: "Port D31: MUX = PORT_GPIO_MODE"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 222
- `physical_pages`: 222
- `section_paths`: ["Chapter 2 Examples and Demos / 2.53 Systick / 2.53.4 Steps to Run / 2.53.4.3 For Keil"]
- `brief`: "Demo board pin mapping. Board side: LED2"
- `anchors`:
  - `p222`: "Port D31: MUX = PORT_GPIO_MODE"
- `aliases`: ["LED2"]
- `quality_flags`: []

### PIN-PORT-C6-MUX-ALT3-TPU0-CH0
- `name`: "Port C6: MUX = ALT3, TPU0_CH0"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 227
- `physical_pages`: 227, 231, 234
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.2 Tpu_Capture_Host / 2.55.2.1 Description", "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.1 Description"]
- `brief`: "Demo board pin mapping. Board side: For outputting PWM pulse"
- `anchors`:
  - `p227`: "Port C6: MUX = ALT3, TPU0_CH0"
- `aliases`: ["For outputting PWM pulse"]
- `quality_flags`: []

### PIN-PORT-G14-MUX-ALT2-TPU0-CH8
- `name`: "Port G14: MUX = ALT2, TPU0_CH8"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 229
- `physical_pages`: 229, 231, 236
- `section_paths`: ["Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.1 Description", "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.3 Tpu_Host / 2.55.3.4 Steps to Run / 2.55.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.55 TPU / 2.55.5 Tpu_Capture_FlexCore / 2.55.5.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: For capturing PWM pulse"
- `anchors`:
  - `p229`: "Port G14: MUX = ALT2, TPU0_CH8"
- `aliases`: ["For capturing PWM pulse"]
- `quality_flags`: []

### PIN-PORT-D20-MUX-GPIO-KEY-1
- `name`: "Port D20: MUX = GPIO, Key 1"
- `type`: "mcu_pin_or_port_config"
- `primary_page`: 241
- `physical_pages`: 241
- `section_paths`: ["Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.4 Steps to Run"]
- `brief`: "Demo board pin mapping. Board side: Pressing Key 1 would trigger the watchdog feed process"
- `anchors`:
  - `p241`: "Port D20: MUX = GPIO, Key 1"
- `aliases`: ["Pressing Key 1 would trigger the watchdog feed process"]
- `quality_flags`: []

### API-ADC0-SE11
- `name`: "ADC0_SE11(PTA29)"
- `type`: "function_or_api_call"
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: ADC0_SE11(PTA29)."
- `anchors`:
  - `p32`: "ADC0_SE11(PTA29)"
- `aliases`: ["ADC0_SE11"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-CMP0-IN2
- `name`: "CMP0_IN2(PTG4)"
- `type`: "function_or_api_call"
- `primary_page`: 48
- `physical_pages`: 48
- `section_paths`: ["Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: CMP0_IN2(PTG4)."
- `anchors`:
  - `p48`: "CMP0_IN2(PTG4)"
- `aliases`: ["CMP0_IN2"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-CMP0-IN3
- `name`: "CMP0_IN3(PTD17)"
- `type`: "function_or_api_call"
- `primary_page`: 48
- `physical_pages`: 48
- `section_paths`: ["Chapter 2 Examples and Demos / 2.4 CMP / 2.4.1 Introduction"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: CMP0_IN3(PTD17)."
- `anchors`:
  - `p48`: "CMP0_IN3(PTD17)"
- `aliases`: ["CMP0_IN3"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-CPM-USERIRQHANDLER
- `name`: "CPM_UserIRQHandler()"
- `type`: "function_or_api_call"
- `primary_page`: 56
- `physical_pages`: 56
- `section_paths`: ["Chapter 2 Examples and Demos / 2.6 CORDIC / 2.6.4 Steps to Run / 2.6.4.3 For Keil"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: CPM_UserIRQHandler()."
- `anchors`:
  - `p56`: "CPM_UserIRQHandler()"
- `aliases`: ["CPM_UserIRQHandler"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-BSP-CLOCK-INIT
- `name`: "Bsp_Clock_Init()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67, 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports", "Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Bsp_Clock_Init()."
- `anchors`:
  - `p67`: "Bsp_Clock_Init()"
- `aliases`: ["Bsp_Clock_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-BSP-DMA-INIT
- `name`: "Bsp_DMA_Init()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Bsp_DMA_Init()."
- `anchors`:
  - `p67`: "Bsp_DMA_Init()"
- `aliases`: ["Bsp_DMA_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-BSP-DMA-START
- `name`: "Bsp_Dma_Start()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Bsp_Dma_Start()."
- `anchors`:
  - `p67`: "Bsp_Dma_Start()"
- `aliases`: ["Bsp_Dma_Start"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-DMA-CHANNEL0-TRANSFERCOMPLETE
- `name`: "DMA_Channel0_TransferComplete()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: DMA_Channel0_TransferComplete()."
- `anchors`:
  - `p67`: "DMA_Channel0_TransferComplete()"
- `aliases`: ["DMA_Channel0_TransferComplete"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-DMA-INIT
- `name`: "DMA_Init()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: DMA_Init()."
- `anchors`:
  - `p67`: "DMA_Init()"
- `aliases`: ["DMA_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-DMA-INITCHANNEL
- `name`: "DMA_InitChannel()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: DMA_InitChannel()."
- `anchors`:
  - `p67`: "DMA_InitChannel()"
- `aliases`: ["DMA_InitChannel"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-DMA-INITCHANNELINTERRUPT
- `name`: "DMA_InitChannelInterrupt()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: DMA_InitChannelInterrupt()."
- `anchors`:
  - `p67`: "DMA_InitChannelInterrupt()"
- `aliases`: ["DMA_InitChannelInterrupt"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-DMA-STARTCHANNEL
- `name`: "DMA_StartChannel()"
- `type`: "function_or_api_call"
- `primary_page`: 67
- `physical_pages`: 67
- `section_paths`: ["Chapter 2 Examples and Demos / 2.9 DMA / 2.9.1 DMA_Memcpy / 2.9.1.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: DMA_StartChannel()."
- `anchors`:
  - `p67`: "DMA_StartChannel()"
- `aliases`: ["DMA_StartChannel"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-ERM-USERIRQHANDLER
- `name`: "ERM_UserIRQHandler()"
- `type`: "function_or_api_call"
- `primary_page`: 74
- `physical_pages`: 74
- `section_paths`: ["Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: ERM_UserIRQHandler()."
- `anchors`:
  - `p74`: "ERM_UserIRQHandler()"
- `aliases`: ["ERM_UserIRQHandler"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-FCSPI-TRANSMITRECEIVE-IT
- `name`: "FCSPI_TransmitReceive_IT()"
- `type`: "function_or_api_call"
- `primary_page`: 99
- `physical_pages`: 99
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: FCSPI_TransmitReceive_IT()."
- `anchors`:
  - `p99`: "FCSPI_TransmitReceive_IT()"
- `aliases`: ["FCSPI_TransmitReceive_IT"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-FCSPIN-IRQHANDLER
- `name`: "FCSPIn_IRQHandler()"
- `type`: "function_or_api_call"
- `primary_page`: 99
- `physical_pages`: 99
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.2 FCSPI_Master_Interrupt / 2.16.2.1 Description"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: FCSPIn_IRQHandler()."
- `anchors`:
  - `p99`: "FCSPIn_IRQHandler()"
- `aliases`: ["FCSPIn_IRQHandler"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-FCSPI-TRANSMITRECEIVE-DMA
- `name`: "FCSPI_TransmitReceive_DMA()"
- `type`: "function_or_api_call"
- `primary_page`: 102
- `physical_pages`: 102
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: FCSPI_TransmitReceive_DMA()."
- `anchors`:
  - `p102`: "FCSPI_TransmitReceive_DMA()"
- `aliases`: ["FCSPI_TransmitReceive_DMA"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-FCSPIN-DMADONECALLBACK-RX
- `name`: "FCSPIn_DmaDoneCallback_Rx()"
- `type`: "function_or_api_call"
- `primary_page`: 102
- `physical_pages`: 102
- `section_paths`: ["Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.3 FCSPI_Master_DMA / 2.16.3.1 Description"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: FCSPIn_DmaDoneCallback_Rx()."
- `anchors`:
  - `p102`: "FCSPIn_DmaDoneCallback_Rx()"
- `aliases`: ["FCSPIn_DmaDoneCallback_Rx"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-HSADC0-SE2
- `name`: "HSADC0_SE2(PTH0)"
- `type`: "function_or_api_call"
- `primary_page`: 149
- `physical_pages`: 149
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: HSADC0_SE2(PTH0)."
- `anchors`:
  - `p149`: "HSADC0_SE2(PTH0)"
- `aliases`: ["HSADC0_SE2"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-HSADC0-SE3
- `name`: "HSADC0_SE3(PTH1)"
- `type`: "function_or_api_call"
- `primary_page`: 149
- `physical_pages`: 149
- `section_paths`: ["Chapter 2 Examples and Demos / 2.27 HSADC / 2.27.1 HSADC_Single / 2.27.1.4 Steps to Run / 2.27.1.4.3 For Keil"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: HSADC0_SE3(PTH1)."
- `anchors`:
  - `p149`: "HSADC0_SE3(PTH1)"
- `aliases`: ["HSADC0_SE3"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-HSM-INTERRUPT
- `name`: "Hsm_Interrupt(orHsm_Poll)"
- `type`: "function_or_api_call"
- `primary_page`: 155
- `physical_pages`: 155
- `section_paths`: ["Chapter 2 Examples and Demos / 2.28 HSM / 2.28.4 Steps to Run / 2.28.4.1.3 For Keil"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Hsm_Interrupt(orHsm_Poll)."
- `anchors`:
  - `p155`: "Hsm_Interrupt(orHsm_Poll)"
- `aliases`: ["Hsm_Interrupt"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-MSC
- `name`: "MSC(MasterSerialCommunication)"
- `type`: "function_or_api_call"
- `primary_page`: 168
- `physical_pages`: 168
- `section_paths`: ["Chapter 2 Examples and Demos / 2.35 MPU / 2.35.4 Steps to Run / 2.35.4.3 For Keil"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: MSC(MasterSerialCommunication)."
- `anchors`:
  - `p168`: "MSC(MasterSerialCommunication)"
- `aliases`: ["MSC"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PMC0-IRQHANDLER
- `name`: "PMC0_IRQHandler()"
- `type`: "function_or_api_call"
- `primary_page`: 183
- `physical_pages`: 183
- `section_paths`: ["Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PMC0_IRQHandler()."
- `anchors`:
  - `p183`: "PMC0_IRQHandler()"
- `aliases`: ["PMC0_IRQHandler"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PMC-USERIRQHANDLER
- `name`: "PMC_UserIRQHandler()"
- `type`: "function_or_api_call"
- `primary_page`: 183
- `physical_pages`: 183
- `section_paths`: ["Chapter 2 Examples and Demos / 2.40 PMC / 2.40.1 Description"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PMC_UserIRQHandler()."
- `anchors`:
  - `p183`: "PMC_UserIRQHandler()"
- `aliases`: ["PMC_UserIRQHandler"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-BSP-PORT-INIT
- `name`: "Bsp_Port_Init()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Bsp_Port_Init()."
- `anchors`:
  - `p185`: "Bsp_Port_Init()"
- `aliases`: ["Bsp_Port_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-BSP-PTIMER-INIT
- `name`: "Bsp_Ptimer_Init()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Bsp_Ptimer_Init()."
- `anchors`:
  - `p185`: "Bsp_Ptimer_Init()"
- `aliases`: ["Bsp_Ptimer_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-BSP-PTIMER-TRIGGERSTART
- `name`: "Bsp_Ptimer_TriggerStart()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: Bsp_Ptimer_TriggerStart()."
- `anchors`:
  - `p185`: "Bsp_Ptimer_TriggerStart()"
- `aliases`: ["Bsp_Ptimer_TriggerStart"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-ENABLE
- `name`: "PTIMER_Enable()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_Enable()."
- `anchors`:
  - `p185`: "PTIMER_Enable()"
- `aliases`: ["PTIMER_Enable"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-GENERATESWTRIGGER
- `name`: "PTIMER_GenerateSWTrigger()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_GenerateSWTrigger()."
- `anchors`:
  - `p185`: "PTIMER_GenerateSWTrigger()"
- `aliases`: ["PTIMER_GenerateSWTrigger"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-INIT
- `name`: "PTIMER_Init()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_Init()."
- `anchors`:
  - `p185`: "PTIMER_Init()"
- `aliases`: ["PTIMER_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-INITCHANNEL
- `name`: "PTIMER_InitChannel()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_InitChannel()."
- `anchors`:
  - `p185`: "PTIMER_InitChannel()"
- `aliases`: ["PTIMER_InitChannel"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-INITINTERRUPT
- `name`: "PTIMER_InitInterrupt(eInstance,pInterruptCfg)"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_InitInterrupt(eInstance,pInterruptCfg)."
- `anchors`:
  - `p185`: "PTIMER_InitInterrupt(eInstance,pInterruptCfg)"
- `aliases`: ["PTIMER_InitInterrupt"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-LOADVALUE
- `name`: "PTIMER_LoadValue()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_LoadValue()."
- `anchors`:
  - `p185`: "PTIMER_LoadValue()"
- `aliases`: ["PTIMER_LoadValue"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-PTIMER-SETPERIOD
- `name`: "PTIMER_SetPeriod()"
- `type`: "function_or_api_call"
- `primary_page`: 185
- `physical_pages`: 185
- `section_paths`: ["Chapter 2 Examples and Demos / 2.41 PTIMER / 2.41.3 MCU Ports"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: PTIMER_SetPeriod()."
- `anchors`:
  - `p185`: "PTIMER_SetPeriod()"
- `aliases`: ["PTIMER_SetPeriod"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### API-WDOG-INIT
- `name`: "WDOG_Init(&amp;g_tWdogHandle,&amp;Wdog_InitStruct)"
- `type`: "function_or_api_call"
- `primary_page`: 240
- `physical_pages`: 240
- `section_paths`: ["Chapter 2 Examples and Demos / 2.57 WDOG / 2.57.2 Prerequisites"]
- `brief`: "Function/API-like call shown in quick-start sequence diagram or instructions: WDOG_Init(&amp;g_tWdogHandle,&amp;Wdog_InitStruct)."
- `anchors`:
  - `p240`: "WDOG_Init(&amp;g_tWdogHandle,&amp;Wdog_InitStruct)"
- `aliases`: ["WDOG_Init"]
- `quality_flags`: ["not_a_formal_api_reference_verify_against_sdk_user_guide"]

### CFG-FC-IDE
- `name`: "FC_IDE"
- `type`: "tool_or_configuration"
- `primary_page`: 2
- `physical_pages`: 2, 15, 18, 32, 43-44, 47, 50, 52-55, 57, 59, 61, 63, 66, 68-69, 71-74, 76, 79, 83, 87-88, 90, 92, 94-95, 99, 112, 114, 116, 118, 121-122, 124-125, 127, 130, 132-136, 138-142, 144-145, 149, 154, 157-159, 161, 163, 166-167, 170, 172, 174, 178, 182, 184, 186, 188-192, 194, 196-197, 199-200, 202, 204, 206-208, 210-213, 215-216, 219, 221-222, 225, 227, 229, 231, 234, 236, 238, 241
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p2`: "FC_IDE"
- `aliases`: ["FC IDE", "Flagchip IDE", "FC_IDE User Guide"]
- `quality_flags`: []

### CFG-IAR-EMBEDDED-WORKBENCH
- `name`: "IAR Embedded Workbench"
- `type`: "tool_or_configuration"
- `primary_page`: 2
- `physical_pages`: 2, 15, 18-20, 32, 43-45, 47, 50-54, 56, 59, 62-64, 66, 68, 70-74, 76, 79, 83, 87, 89-92, 94-95, 99, 112-114, 116, 118, 121-122, 124-125, 127, 130, 132-136, 138-141, 143-145, 149, 155, 157-159, 161, 165-166, 168, 170, 172, 174, 178, 182, 184, 186-194, 196-199, 201-202, 204, 206-207, 209-217, 219, 221-222, 225, 227, 229, 231, 234, 236, 238, 241, 244
- `section_paths`: ["Back Matter / Disclaimer", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil", "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p2`: "IAR Embedded Workbench"
- `aliases`: ["IAR", "EWARM", "IAR_Project", ".eww"]
- `quality_flags`: []

### CFG-KEIL
- `name`: "Keil"
- `type`: "tool_or_configuration"
- `primary_page`: 2
- `physical_pages`: 2, 15, 19-23, 32, 43, 45, 47, 51-52, 54, 56, 59, 63-64, 67-68, 70-74, 76, 79, 83, 87, 89, 91-92, 94-95, 99, 113-114, 116, 118, 121-122, 124-125, 127, 130, 132-136, 138-141, 143-145, 149, 155, 157-159, 161, 165-166, 168, 170, 172, 174, 178, 182, 184, 186-190, 192-194, 196, 198-199, 201-202, 204, 206-207, 209-211, 213-214, 216-217, 219, 221-222, 225, 227, 229, 231, 234, 236, 238, 241
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil", "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p2`: "Keil"
- `aliases`: ["MDK-ARM", "uVision", "Keil_Project", ".uvprojx"]
- `quality_flags`: []

### CFG-DEBUG-FLASH
- `name`: "Debug_Flash"
- `type`: "tool_or_configuration"
- `primary_page`: 15
- `physical_pages`: 15, 32, 50, 52-53, 55, 61, 63, 66, 112, 121-122, 124-125, 127, 149, 155, 186, 188-192, 210, 212-213, 215-216, 221
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.17 FCUART / 2.17.4 Steps to Run / 2.17.4.2 For IAR Embedded Workbench", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.2 CAN_EnhanceFIFO_DMA / 2.19.2.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.1 Description", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.4 CAN_MB_EnhancedFIFO / 2.19.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.19 FLEXCAN / 2.19.5 CAN_MB_LegacyFIFO / 2.19.5.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p15`: "Debug_Flash"
- `aliases`: ["flash debug configuration", "load to Flash"]
- `quality_flags`: []

### CFG-DEBUG-RAM
- `name`: "Debug_RAM"
- `type`: "tool_or_configuration"
- `primary_page`: 15
- `physical_pages`: 15, 204
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p15`: "Debug_RAM"
- `aliases`: ["RAM debug configuration", "load to RAM"]
- `quality_flags`: []

### CFG-GDB-SEGGER-J-LINK-DEBUGGING
- `name`: "GDB SEGGER J-Link Debugging"
- `type`: "tool_or_configuration"
- `primary_page`: 17
- `physical_pages`: 17, 24, 32, 43-44, 46, 50, 52-55, 57, 60, 63, 66, 68-69, 71-74, 76, 79, 82, 86, 90, 92, 94, 98, 102, 106, 112, 114, 116, 118, 120, 122-123, 125-126, 130, 132-133, 135-139, 141-142, 144, 149, 154, 157, 159, 161-162, 166-167, 170, 174, 178, 181, 184-192, 194, 196-198, 200-201, 203, 205, 207-211, 213, 215-216, 218, 221-222, 224, 227, 229-230, 234, 236, 238
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil", "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.2 Eftu_PwmMeasurement / 2.10.2.3 MCU Ports", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.3 Eftu_Timer / 2.10.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.4 Eftu_Pwm / 2.10.4.4 Steps to Run", "Chapter 2 Examples and Demos / 2.11 EIM/ERM / 2.11.4 Steps to Run", "Chapter 2 Examples and Demos / 2.12 ENET / 2.12.1 ENET_lwIP_FreeRTOS / 2.12.1.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p17`: "GDB SEGGER J-Link Debugging"
- `aliases`: ["J-Link", "SEGGER J-Link", "debug configuration"]
- `quality_flags`: []

### CFG-FC-PROJECT
- `name`: "FC_Project"
- `type`: "tool_or_configuration"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p15`: "FC_Project"
- `aliases`: ["SDK\\Example\\...\\_Project\\FC_Project", "FC_IDE project"]
- `quality_flags`: []

### CFG-IAR-PROJECT
- `name`: "IAR_Project"
- `type`: "tool_or_configuration"
- `primary_page`: 32
- `physical_pages`: 32, 43, 45, 51-52, 54, 56, 63-64, 66, 68, 70, 91-92, 94, 113, 130, 132, 141, 143-144, 149, 155, 165-166, 168, 184, 187-191, 193, 196-197, 199, 201, 210-212, 214, 216-217, 221-222, 231, 238
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites", "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.3 For Keil", "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description", "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.2 AONTIMER_PulseCounter / 2.2.2.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p32`: "IAR_Project"
- `aliases`: ["SDK\\Example\\...\\_Project\\IAR_Project"]
- `quality_flags`: []

### CFG-KEIL-PATCH-SETUPTOOL-VX-X-X-EXE
- `name`: "Keil_Patch_SetupTool_vX.X.X.exe"
- `type`: "tool_or_configuration"
- `primary_page`: 21
- `physical_pages`: 21
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p21`: "Keil_Patch_SetupTool_vX.X.X.exe"
- `aliases`: ["Keil patch setup tool"]
- `quality_flags`: []

### CFG-IAR-PATCH-SETUP-VX-X-X-EXE
- `name`: "IAR Patch Setup vX.X.X.exe"
- `type`: "tool_or_configuration"
- `primary_page`: 18
- `physical_pages`: 18
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.2 IAR Embedded Workbench"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p18`: "IAR Patch Setup vX.X.X.exe"
- `aliases`: ["IAR patch setup tool"]
- `quality_flags`: []

### CFG-FC7300-8MB-FLASH
- `name`: "FC7300 8MB Flash"
- `type`: "tool_or_configuration"
- `primary_page`: 25
- `physical_pages`: 25
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p25`: "FC7300 8MB Flash"
- `aliases`: ["Keil Flash Programming Algorithm"]
- `quality_flags`: []

### CFG-UART-115200-8-N-1
- `name`: "UART 115200/8/N/1"
- `type`: "tool_or_configuration"
- `primary_page`: 29
- `physical_pages`: 29, 146, 171
- `section_paths`: ["Chapter 2 Examples and Demos / 2.1 ADC", "Chapter 2 Examples and Demos / 2.27 HSADC", "Chapter 2 Examples and Demos / 2.37 Multicore / 2.37.3 MCU Ports"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p29`: "UART 115200/8/N/1"
- `aliases`: ["115200 baud", "UART terminal", "USB-to-UART"]
- `quality_flags`: []

### CFG-JTAG
- `name`: "JTAG"
- `type`: "tool_or_configuration"
- `primary_page`: 15
- `physical_pages`: 15, 24, 47, 95, 133, 157-158, 174, 178, 182, 186, 194, 219, 241
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 1 Introduction / 1.3 Supported IDE / 1.3.3 Keil", "Chapter 2 Examples and Demos / 2.16 FCSPI / 2.16.1 FCSPI_Master_Polling / 2.16.1.1 Description", "Chapter 2 Examples and Demos / 2.23 FS26 / 2.23.3 MCU Ports", "Chapter 2 Examples and Demos / 2.3 CLK OUT / 2.3.4 Steps to Run", "Chapter 2 Examples and Demos / 2.30 ISM / 2.30.4 Steps to Run", "Chapter 2 Examples and Demos / 2.31 LIN / 2.31.2 Prerequisites", "Chapter 2 Examples and Demos / 2.38 OTA / 2.38.1 OTA_RegisterMode / 2.38.1.6 Compilation and Programming Steps"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p15`: "JTAG"
- `aliases`: ["Joint Test Action Group", "JTAG port"]
- `quality_flags`: []

### CFG-SWD
- `name`: "SWD"
- `type`: "tool_or_configuration"
- `primary_page`: 15
- `physical_pages`: 15
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p15`: "SWD"
- `aliases`: ["Serial Wire Debug", "SWD programming/debugging"]
- `quality_flags`: []

### CFG-SDK-EXAMPLE
- `name`: "SDK\\Example"
- `type`: "tool_or_configuration"
- `primary_page`: 15
- `physical_pages`: 15, 32, 43, 45, 51-52, 54, 56, 63-64, 66, 68, 70, 91-92, 94, 113, 130, 132, 141, 143-144, 149, 155, 165-166, 168, 184, 187-191, 193, 196-197, 199, 201, 210-212, 214, 216-217, 221-222, 231, 238
- `section_paths`: ["Chapter 1 Introduction / 1.3 Supported IDE / 1.3.1 FC_IDE", "Chapter 2 Examples and Demos / 2.1 ADC / 2.1.1 ADC_Single / 2.1.1.4 Steps to Run", "Chapter 2 Examples and Demos / 2.10 EFTU / 2.10.1 Eftu_SignalDetect / 2.10.1.2 Prerequisites", "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.1 FCPIT_TimeCounter / 2.14.1.4 Steps to Run / 2.14.1.4.3 For Keil", "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.2 FCPIT_ChainModeCounter / 2.14.2.4 Steps to Run / 2.14.2.4.3 For Keil", "Chapter 2 Examples and Demos / 2.14 FCPIT / 2.14.3 FCPIT_Trgsel / 2.14.3.4 Steps to Run / 2.14.3.4.3 For Keil", "Chapter 2 Examples and Demos / 2.18 Flash / 2.18.1 Flash_Async_Project / 2.18.1.1 Description", "Chapter 2 Examples and Demos / 2.2 AONTIMER / 2.2.1 AONTIMER_TimeCounter / 2.2.1.4 Steps to Run"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p15`: "SDK\\Example"
- `aliases`: ["SDK Example directory", "Example folder"]
- `quality_flags`: []

### CFG-SDADC-CONTINOUS
- `name`: "SDADC_Continous"
- `type`: "tool_or_configuration"
- `primary_page`: 8
- `physical_pages`: 8, 204, 206-207
- `section_paths`: ["Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.1 SDADC_Single / 2.47.1.1 Description", "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.2 SDADC_Continous / 2.47.2.1 Description", "Chapter 2 Examples and Demos / 2.47 SDADC / 2.47.3 SDADC_Calibration / 2.47.3.1 Description", "Front Matter / Table of Contents"]
- `brief`: "Tool, build/debug configuration, SDK directory, or communication setting used by the quick-start procedure."
- `anchors`:
  - `p8`: "SDADC_Continous"
- `aliases`: ["SDADC_Continuous", "source spelling Continous"]
- `quality_flags`: []

### NO-FORMAL-REQUIREMENT-IDS-DETECTED
- `name`: "NO_FORMAL_REQUIREMENT_IDS_DETECTED"
- `type`: "requirement_detection_status"
- `primary_page`: 1
- `physical_pages`: 1-245
- `section_paths`: ["Document-wide"]
- `brief`: "No formal SWS_* or REQ_* requirement identifiers were detected. Internal Manifest IDs are navigation aids only."
- `anchors`:
  - `p1`: "FC7300F8MDQ SDK Quick Start"
- `aliases`: ["SWS", "REQ", "requirement ID", "需求编号"]
- `quality_flags`: ["not_source_requirement_id"]

## 9. Search Aliases
### ALIAS-DOC-FC7300F8MDQ-SDK-QUICK-START
- `canonical`: "FC7300F8MDQ SDK Quick Start"
- `aliases`: ["SDK Quick Start", "FC7300 SDK Quick Start", "FC7300F8MDQ 快速开始", "SDKQS-FC7300F8MDQ", "SDKQS"]
- `related_ids`: []

### ALIAS-FC-IDE
- `canonical`: "FC_IDE"
- `aliases`: ["FC IDE", "Flagchip IDE", "FC_IDE User Guide", "FC_Project"]
- `related_ids`: ["CFG-FC-IDE"]

### ALIAS-IAR
- `canonical`: "IAR Embedded Workbench"
- `aliases`: ["IAR", "IAR EWARM", "IAR_Project", ".eww"]
- `related_ids`: ["CFG-IAR-EMBEDDED-WORKBENCH"]

### ALIAS-KEIL
- `canonical`: "Keil"
- `aliases`: ["MDK-ARM", "uVision", "Keil_Project", ".uvprojx"]
- `related_ids`: ["CFG-KEIL"]

### ALIAS-DEBUG-CONFIG
- `canonical`: "Debug_Flash / Debug_RAM"
- `aliases`: ["Build Configuration", "Set Active", "flash download", "RAM download"]
- `related_ids`: ["CFG-DEBUG-FLASH", "CFG-DEBUG-RAM"]

### ALIAS-JLINK
- `canonical`: "GDB SEGGER J-Link Debugging"
- `aliases`: ["J-Link", "SEGGER", "J-LINK / J-TRACE Cortex", "Debug Configurations"]
- `related_ids`: ["CFG-GDB-SEGGER-J-LINK-DEBUGGING"]

### ALIAS-UART
- `canonical`: "UART 115200/8/N/1"
- `aliases`: ["115200 baud", "115200Kbps", "USB-to-UART", "UART terminal", "type-c USB cable"]
- `related_ids`: ["CFG-UART-115200-8-N-1"]

### ALIAS-SDADC-CONTINOUS-TYPO
- `canonical`: "SDADC_Continous"
- `aliases`: ["SDADC_Continuous", "SDADC continuous", "source spelling Continous"]
- `related_ids`: ["CFG-SDADC-CONTINOUS", "EXAMPLE-SDADC-CONTINOUS"]

### ALIAS-MODULE-ADC
- `canonical`: "ADC"
- `aliases`: ["ADC", "ADC", "adc"]
- `related_ids`: ["MODULE-ADC"]

### ALIAS-MODULE-AONTIMER
- `canonical`: "AONTIMER"
- `aliases`: ["AONTIMER", "AONTIMER", "aontimer"]
- `related_ids`: ["MODULE-AONTIMER"]

### ALIAS-MODULE-CLK-OUT
- `canonical`: "CLK OUT"
- `aliases`: ["CLK_OUT", "CLK OUT", "clk out"]
- `related_ids`: ["MODULE-CLK-OUT"]

### ALIAS-MODULE-CMP
- `canonical`: "CMP"
- `aliases`: ["CMP", "CMP", "cmp"]
- `related_ids`: ["MODULE-CMP"]

### ALIAS-MODULE-CMU
- `canonical`: "CMU"
- `aliases`: ["CMU", "CMU", "cmu"]
- `related_ids`: ["MODULE-CMU"]

### ALIAS-MODULE-CORDIC
- `canonical`: "CORDIC"
- `aliases`: ["CORDIC", "CORDIC", "cordic"]
- `related_ids`: ["MODULE-CORDIC"]

### ALIAS-MODULE-CPM
- `canonical`: "CPM"
- `aliases`: ["CPM", "CPM", "cpm"]
- `related_ids`: ["MODULE-CPM"]

### ALIAS-MODULE-CRC
- `canonical`: "CRC"
- `aliases`: ["CRC", "CRC", "crc"]
- `related_ids`: ["MODULE-CRC"]

### ALIAS-MODULE-DMA
- `canonical`: "DMA"
- `aliases`: ["DMA", "DMA", "dma"]
- `related_ids`: ["MODULE-DMA"]

### ALIAS-MODULE-EFTU
- `canonical`: "EFTU"
- `aliases`: ["EFTU", "EFTU", "eftu"]
- `related_ids`: ["MODULE-EFTU"]

### ALIAS-MODULE-EIM-ERM
- `canonical`: "EIM/ERM"
- `aliases`: ["EIM/ERM", "EIM/ERM", "eim/erm"]
- `related_ids`: ["MODULE-EIM-ERM"]

### ALIAS-MODULE-ENET
- `canonical`: "ENET"
- `aliases`: ["ENET", "ENET", "enet"]
- `related_ids`: ["MODULE-ENET"]

### ALIAS-MODULE-FCIIC
- `canonical`: "FCIIC"
- `aliases`: ["FCIIC", "FCIIC", "fciic"]
- `related_ids`: ["MODULE-FCIIC"]

### ALIAS-MODULE-FCPIT
- `canonical`: "FCPIT"
- `aliases`: ["FCPIT", "FCPIT", "fcpit"]
- `related_ids`: ["MODULE-FCPIT"]

### ALIAS-MODULE-FCSMU
- `canonical`: "FCSMU"
- `aliases`: ["FCSMU", "FCSMU", "fcsmu"]
- `related_ids`: ["MODULE-FCSMU"]

### ALIAS-MODULE-FCSPI
- `canonical`: "FCSPI"
- `aliases`: ["FCSPI", "FCSPI", "fcspi"]
- `related_ids`: ["MODULE-FCSPI"]

### ALIAS-MODULE-FCUART
- `canonical`: "FCUART"
- `aliases`: ["FCUART", "FCUART", "fcuart"]
- `related_ids`: ["MODULE-FCUART"]

### ALIAS-MODULE-FLASH
- `canonical`: "Flash"
- `aliases`: ["Flash", "Flash", "flash"]
- `related_ids`: ["MODULE-FLASH"]

### ALIAS-MODULE-FLEXCAN
- `canonical`: "FLEXCAN"
- `aliases`: ["FLEXCAN", "FLEXCAN", "flexcan"]
- `related_ids`: ["MODULE-FLEXCAN"]

### ALIAS-MODULE-FPU-AND-DSP
- `canonical`: "FPU&DSP"
- `aliases`: ["FPU&DSP", "FPU&DSP", "fpu&dsp"]
- `related_ids`: ["MODULE-FPU-AND-DSP"]

### ALIAS-MODULE-FREERTOS
- `canonical`: "FreeRTOS"
- `aliases`: ["FreeRTOS", "FreeRTOS", "freertos"]
- `related_ids`: ["MODULE-FREERTOS"]

### ALIAS-MODULE-FREQM
- `canonical`: "FREQM"
- `aliases`: ["FREQM", "FREQM", "freqm"]
- `related_ids`: ["MODULE-FREQM"]

### ALIAS-MODULE-FS26
- `canonical`: "FS26"
- `aliases`: ["FS26", "FS26", "fs26"]
- `related_ids`: ["MODULE-FS26"]

### ALIAS-MODULE-FTU
- `canonical`: "FTU"
- `aliases`: ["FTU", "FTU", "ftu"]
- `related_ids`: ["MODULE-FTU"]

### ALIAS-MODULE-GPIO
- `canonical`: "GPIO"
- `aliases`: ["GPIO", "GPIO", "gpio"]
- `related_ids`: ["MODULE-GPIO"]

### ALIAS-MODULE-HRPWM
- `canonical`: "HRPWM"
- `aliases`: ["HRPWM", "HRPWM", "hrpwm"]
- `related_ids`: ["MODULE-HRPWM"]

### ALIAS-MODULE-HSADC
- `canonical`: "HSADC"
- `aliases`: ["HSADC", "HSADC", "hsadc"]
- `related_ids`: ["MODULE-HSADC"]

### ALIAS-MODULE-HSM
- `canonical`: "HSM"
- `aliases`: ["HSM", "HSM", "hsm"]
- `related_ids`: ["MODULE-HSM"]

### ALIAS-MODULE-INTM
- `canonical`: "INTM"
- `aliases`: ["INTM", "INTM", "intm"]
- `related_ids`: ["MODULE-INTM"]

### ALIAS-MODULE-ISM
- `canonical`: "ISM"
- `aliases`: ["ISM", "ISM", "ism"]
- `related_ids`: ["MODULE-ISM"]

### ALIAS-MODULE-LIN
- `canonical`: "LIN"
- `aliases`: ["LIN", "LIN", "lin"]
- `related_ids`: ["MODULE-LIN"]

### ALIAS-MODULE-LU
- `canonical`: "LU"
- `aliases`: ["LU", "LU", "lu"]
- `related_ids`: ["MODULE-LU"]

### ALIAS-MODULE-MAILBOX
- `canonical`: "Mailbox"
- `aliases`: ["Mailbox", "Mailbox", "mailbox"]
- `related_ids`: ["MODULE-MAILBOX"]

### ALIAS-MODULE-MAM
- `canonical`: "MAM"
- `aliases`: ["MAM", "MAM", "mam"]
- `related_ids`: ["MODULE-MAM"]

### ALIAS-MODULE-MPU
- `canonical`: "MPU"
- `aliases`: ["MPU", "MPU", "mpu"]
- `related_ids`: ["MODULE-MPU"]

### ALIAS-MODULE-MSC
- `canonical`: "MSC"
- `aliases`: ["MSC", "MSC", "msc"]
- `related_ids`: ["MODULE-MSC"]

### ALIAS-MODULE-MULTICORE
- `canonical`: "Multicore"
- `aliases`: ["Multicore", "Multicore", "multicore"]
- `related_ids`: ["MODULE-MULTICORE"]

### ALIAS-MODULE-OTA
- `canonical`: "OTA"
- `aliases`: ["OTA", "OTA", "ota"]
- `related_ids`: ["MODULE-OTA"]

### ALIAS-MODULE-OVERLAY
- `canonical`: "Overlay"
- `aliases`: ["Overlay", "Overlay", "overlay"]
- `related_ids`: ["MODULE-OVERLAY"]

### ALIAS-MODULE-PMC
- `canonical`: "PMC"
- `aliases`: ["PMC", "PMC", "pmc"]
- `related_ids`: ["MODULE-PMC"]

### ALIAS-MODULE-PTIMER
- `canonical`: "PTIMER"
- `aliases`: ["PTIMER", "PTIMER", "ptimer"]
- `related_ids`: ["MODULE-PTIMER"]

### ALIAS-MODULE-QDT
- `canonical`: "QDT"
- `aliases`: ["QDT", "QDT", "qdt"]
- `related_ids`: ["MODULE-QDT"]

### ALIAS-MODULE-RGM
- `canonical`: "RGM"
- `aliases`: ["RGM", "RGM", "rgm"]
- `related_ids`: ["MODULE-RGM"]

### ALIAS-MODULE-RTC
- `canonical`: "RTC"
- `aliases`: ["RTC", "RTC", "rtc"]
- `related_ids`: ["MODULE-RTC"]

### ALIAS-MODULE-SC6258XQ
- `canonical`: "SC6258XQ"
- `aliases`: ["SC6258XQ", "SC6258XQ", "sc6258xq"]
- `related_ids`: ["MODULE-SC6258XQ"]

### ALIAS-MODULE-SCST
- `canonical`: "SCST"
- `aliases`: ["SCST", "SCST", "scst"]
- `related_ids`: ["MODULE-SCST"]

### ALIAS-MODULE-SDADC
- `canonical`: "SDADC"
- `aliases`: ["SDADC", "SDADC", "sdadc"]
- `related_ids`: ["MODULE-SDADC"]

### ALIAS-MODULE-SEC
- `canonical`: "SEC"
- `aliases`: ["SEC", "SEC", "sec"]
- `related_ids`: ["MODULE-SEC"]

### ALIAS-MODULE-SEMA
- `canonical`: "SEMA"
- `aliases`: ["SEMA", "SEMA", "sema"]
- `related_ids`: ["MODULE-SEMA"]

### ALIAS-MODULE-SENT
- `canonical`: "SENT"
- `aliases`: ["SENT", "SENT", "sent"]
- `related_ids`: ["MODULE-SENT"]

### ALIAS-MODULE-SMC
- `canonical`: "SMC"
- `aliases`: ["SMC", "SMC", "smc"]
- `related_ids`: ["MODULE-SMC"]

### ALIAS-MODULE-STCU
- `canonical`: "STCU"
- `aliases`: ["STCU", "STCU", "stcu"]
- `related_ids`: ["MODULE-STCU"]

### ALIAS-MODULE-SYSTICK
- `canonical`: "Systick"
- `aliases`: ["Systick", "Systick", "systick"]
- `related_ids`: ["MODULE-SYSTICK"]

### ALIAS-MODULE-TMU
- `canonical`: "TMU"
- `aliases`: ["TMU", "TMU", "tmu"]
- `related_ids`: ["MODULE-TMU"]

### ALIAS-MODULE-TPU
- `canonical`: "TPU"
- `aliases`: ["TPU", "TPU", "tpu"]
- `related_ids`: ["MODULE-TPU"]

### ALIAS-MODULE-TSTMP
- `canonical`: "TSTMP"
- `aliases`: ["TSTMP", "TSTMP", "tstmp"]
- `related_ids`: ["MODULE-TSTMP"]

### ALIAS-MODULE-WDOG
- `canonical`: "WDOG"
- `aliases`: ["WDOG", "WDOG", "wdog"]
- `related_ids`: ["MODULE-WDOG"]

## 10. Quality Warnings
### WARN-DOC-OUTLINE-0001
- `severity`: "medium"
- `category`: "document_structure"
- `physical_pages`: 2-9
- `affected_ids`: []
- `message`: "PDF has no embedded outline/bookmarks; Manifest section index was generated from visible Table of Contents and body headings."
- `recommended_action`: "Use physical_page and anchors; verify hierarchical ranges against source PDF when needed."

### WARN-OCR-0001
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: []
- `affected_ids`: []
- `message`: "OCR was not executed because an extractable text layer is available on all substantive pages; screenshots/photos were not OCR-expanded."
- `recommended_action`: "Verify visual-only screenshot contents against rendered/source pages."

### WARN-FIGURE-0001
- `severity`: "medium"
- `category`: "figure_extraction"
- `physical_pages`: 10, 16-33, 35, 37, 39, 41-44, 46-51, 53, 55-62, 64-70, 74-75, 77-78, 80-82, 84-91, 93, 95-98, 100-101, 103-105, 107-109, 111-119, 121, 123-124, 126-131, 133-134, 136-138, 141-143, 146-150, 152, 154-156, 158, 160, 162-169, 171-173, 175-177, 179-183, 185, 187-193, 195, 197-198, 200, 202-206, 208-210, 212, 214-215, 217-218, 220-221, 223-226, 228, 230-231, 233, 235, 237, 239, 242
- `affected_ids`: []
- `message`: "Most embedded images are screenshots, hardware photos, or sequence diagrams without formal source figure numbers/captions; Manifest generated internal FIG-* IDs and semantic descriptions from page context."
- `recommended_action`: "Use bbox/page anchors for navigation and inspect the source PDF image for exact visual details."

### WARN-TABLE-0001
- `severity`: "medium"
- `category`: "table_extraction"
- `physical_pages`: 2-9, 11-15, 29, 32, 43-44, 47-48, 54-55, 57, 60-61, 63, 66, 71-73, 76, 79, 82-83, 87-88, 98, 102, 106, 110, 112, 114, 116, 118, 120, 122-127, 132-142, 144-145, 149, 157, 161-162, 170-172, 174, 178, 181, 184-192, 194, 196-198, 200-201, 203, 205, 207-209, 211-213, 215-216, 218-219, 222, 225, 227, 229, 231, 234, 236, 241, 243
- `affected_ids`: []
- `message`: "Tables were indexed using PyMuPDF table detection and manual grouping. Cell-level reconstruction is not treated as authoritative, especially for MCU Ports continuation tables and revision-history merged cells."
- `recommended_action`: "Use table entries for locating pages, then verify exact rows/cells in the PDF."

### WARN-TABLE-0002
- `severity`: "low"
- `category`: "false_positive_filtering"
- `physical_pages`: 67, 185
- `affected_ids`: []
- `message`: "Sequence diagrams on some pages were detected by the table finder as table-like regions and were excluded from the Table Index; they are represented in Figure/Image Index instead."
- `recommended_action`: "Search FIG-* entries or page segments for sequence diagrams."

### WARN-SOURCE-TYPO-0001
- `severity`: "low"
- `category`: "source_spelling"
- `physical_pages`: 206
- `affected_ids`: ["ALIAS-SDADC-CONTINOUS-TYPO"]
- `message`: "Source Table of Contents / section title uses \"SDADC_Continous\" spelling; Manifest preserves source spelling and adds SDADC_Continuous as a search alias."
- `recommended_action`: "Search both SDADC_Continous and SDADC_Continuous."

### WARN-PAGE-SPARSE-0245
- `severity`: "low"
- `category`: "sparse_page"
- `physical_pages`: 245
- `affected_ids`: ["PAGE-0245", "SEG-0245"]
- `message`: "Physical page 245 contains only sparse document header/footer text and no substantive body content."
- `recommended_action`: "No action needed unless checking final-page layout."

### WARN-REQ-0001
- `severity`: "info"
- `category`: "requirements"
- `physical_pages`: []
- `affected_ids`: []
- `message`: "No formal SWS_* or REQ_* requirement identifiers were detected. EXAMPLE-*, CFG-*, PIN-*, and API-* IDs are Manifest-generated navigation IDs, not source requirement IDs."
- `recommended_action`: "Do not cite internal IDs as source requirements."

## 11. Self Check Report

### Page Coverage
- `pdf_page_count`: 245
- `indexed_physical_pages_count`: 245
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `coverage_status`: "pass"

### Section Ranges
- `section_index_entries`: 702
- `invalid_ranges`: []
- `sections_without_pages`: []
- `status`: "pass"

### Source Integrity
- `source_pdf_sha256`: "c5fec0b26de68636b7b0cc33477700adf44a366b95aa5c6864b25794254cb0de"
- `manifest_source_pdf_sha256`: "c5fec0b26de68636b7b0cc33477700adf44a366b95aa5c6864b25794254cb0de"
- `sha256_match`: true
- `status`: "pass"

### Index Integrity
- `page_locator_items`: 245
- `page_segment_items`: 245
- `table_index_items`: 103
- `figure_index_items`: 222
- `symbol_index_items`: 492
- `search_alias_items`: 65
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `status`: "pass"

### Table / Figure Integrity
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `tables_without_caption_or_anchor`: []
- `figures_without_caption_or_anchor`: []
- `status`: "pass"

### Overall
- `overall_status`: "pass_with_warnings"
- `manifest_role`: "structured retrieval index; not a replacement for source PDF original content"

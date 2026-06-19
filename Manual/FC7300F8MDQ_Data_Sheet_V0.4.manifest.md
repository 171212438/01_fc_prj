---
manifest_schema_version: "1.0"
source_pdf: "FC7300F8MDQ_Data_Sheet_V0.4.pdf"
source_pdf_sha256: "be9b872fdb6d82557e5dd7b215003e87834795a02b4707f36ccd3875d63be351"
source_pdf_size_bytes: 3460933
pdf_page_count: 69
source_document_id: "DS-FC7300F8MDQ-V0.4-Y26M01"
source_document_revision: "Rev. 0.4"
generated_at: "2026-06-10T10:06:20+00:00"
generator_name: "pdf-manifest-generator"
generator_version: "0.4.0-chatgpt"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is auxiliary and must not be used as primary locator"
manifest_role: "structured retrieval index; not a replacement for source PDF original content"
overall_status: "pass_with_warnings"
---
# PDF Manifest: FC7300F8MDQ_Data_Sheet_V0.4.pdf
## Retrieval Usage Contract
- `physical_page` is the primary locator and is always 1-based.
- `printed_page` is auxiliary; do not use it as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- For factual answers, use Manifest entries to locate the source PDF page, then verify against the PDF.
- Treat entries with `confidence < 0.70` or non-empty `quality_flags` as requiring manual verification.
- Treat this Manifest as stale if `source_pdf_sha256` does not match the current source PDF.

## 1. Document Metadata
- `source_pdf`: "FC7300F8MDQ_Data_Sheet_V0.4.pdf"
- `source_pdf_sha256`: "be9b872fdb6d82557e5dd7b215003e87834795a02b4707f36ccd3875d63be351"
- `source_pdf_size_bytes`: 3460933
- `pdf_page_count`: 69
- `source_document_id`: "DS-FC7300F8MDQ-V0.4-Y26M01"
- `source_document_revision`: "Rev. 0.4"
- `pdf_format`: "PDF 1.7"
- `pdf_encryption`: "none"
- `pdf_outline_count`: 0
- `generated_at`: "2026-06-10T10:06:20+00:00"
- `generator`: "pdf-manifest-generator 0.4.0-chatgpt"
- `manifest_schema_version`: "1.0"
- `page_numbering_policy`: "physical_page = 1-based PDF physical page; printed_page recorded separately"
- `extraction_text_engine`: "PyMuPDF get_text(text)"
- `extraction_visual_check`: "render_pdf.py at 120 DPI; selected pages inspected"
- `ocr_status`: "not_executed_text_layer_available"

## 2. Global Summary
- `topic`: FC7300F8MDQ microcontroller data sheet covering ordering information, feature summary, electrical characteristics, analog/peripheral timing, package, pinout, and revision history.
- `module_scope`: General ratings, power/clock/NVM/analog specifications, FCSPI/MSC/ENET/LU/debug electrical timing, 320LFBGA package and pinout.
- `key_chapters`: Chapter 3 General; Chapter 5 Clock Specification; Chapter 7 Analog; Chapter 8 Peripherals; Chapter 11 Pinout.
- `key_terms`: FC7300F8MDQ, Cortex-M7, ASIL-D, EVITA, HSM, VDD_HV_A, VDD_HV_B, V11, V25, ADC, SDADC, HSADC, FCSPI, ENET, SWD, JTAG, 320LFBGA.
- `summary`: This document is a preliminary Flagchip FC7300F8MDQ data sheet. It provides device ordering rules, abbreviations, major feature capabilities, power/thermal/clock/IO/NVM/analog/peripheral/debug electrical specifications, mechanical package information, pinout definitions, and revision history. The Manifest preserves source physical pages, captions, short anchors, and confidence/quality annotations for retrieval.

## 3. Table of Contents Index
### FRONT-COVER

- `number`: ""
- `title`: "Cover"
- `path`: "Front Matter / Cover"
- `physical_page_start`: 1
- `physical_page_end`: 1
- `printed_page_start`: null
- `printed_page_end`: null
- `keywords`: ["cover", "revision", "data sheet"]
- `anchor`: "FC7300F8MDQ Data Sheet"

### FRONT-TOC

- `number`: ""
- `title`: "Table of Contents"
- `path`: "Front Matter / Table of Contents"
- `physical_page_start`: 2
- `physical_page_end`: 4
- `printed_page_start`: "2"
- `printed_page_end`: "4"
- `keywords`: ["table of contents", "chapters", "sections"]
- `anchor`: "Table of Contents"

### FRONT-FIGURES

- `number`: ""
- `title`: "List of Figures"
- `path`: "Front Matter / List of Figures"
- `physical_page_start`: 5
- `physical_page_end`: 5
- `printed_page_start`: "5"
- `printed_page_end`: "5"
- `keywords`: ["figures", "captions", "diagram index"]
- `anchor`: "List of Figures"

### FRONT-TABLES

- `number`: ""
- `title`: "List of Tables"
- `path`: "Front Matter / List of Tables"
- `physical_page_start`: 6
- `physical_page_end`: 7
- `printed_page_start`: "6"
- `printed_page_end`: "7"
- `keywords`: ["tables", "captions", "specification index"]
- `anchor`: "List of Tables"

### SEC-01

- `number`: "1"
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: 8
- `physical_page_end`: 12
- `printed_page_start`: "8"
- `printed_page_end`: "12"
- `keywords`: ["introduction", "ordering", "abbreviations"]
- `anchor`: "Chapter 1 Introduction"

### SEC-01-01

- `number`: "1.1"
- `title`: "Part Ordering"
- `path`: "Chapter 1 Introduction / 1.1 Part Ordering"
- `physical_page_start`: 8
- `physical_page_end`: 8
- `printed_page_start`: "8"
- `printed_page_end`: "8"
- `keywords`: ["part ordering", "orderable part number", "branding", "package", "temperature"]
- `anchor`: "1.1 Part Ordering"

### SEC-01-01-01

- `number`: "1.1.1"
- `title`: "Orderable Part Number"
- `path`: "Chapter 1 Introduction / 1.1 Part Ordering / 1.1.1 Orderable Part Number"
- `physical_page_start`: 8
- `physical_page_end`: 8
- `printed_page_start`: "8"
- `printed_page_end`: "8"
- `keywords`: ["orderable part number", "xlsx", "standard orderable part numbers"]
- `anchor`: "1.1.1 Orderable Part Number"

### SEC-01-02

- `number`: "1.2"
- `title`: "Abbreviations"
- `path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `physical_page_start`: 9
- `physical_page_end`: 12
- `printed_page_start`: "9"
- `printed_page_end`: "12"
- `keywords`: ["abbreviations", "terminology", "glossary"]
- `anchor`: "1.2 Abbreviations"

### SEC-02

- `number`: "2"
- `title`: "Features"
- `path`: "Chapter 2 Features"
- `physical_page_start`: 13
- `physical_page_end`: 17
- `printed_page_start`: "13"
- `printed_page_end`: "17"
- `keywords`: ["features", "block diagram", "feature summary", "Cortex-M7", "ASIL-D"]
- `anchor`: "Chapter 2 Features"

### SEC-02-01

- `number`: "2.1"
- `title`: "Block Diagram"
- `path`: "Chapter 2 Features / 2.1 Block Diagram"
- `physical_page_start`: 13
- `physical_page_end`: 13
- `printed_page_start`: "13"
- `printed_page_end`: "13"
- `keywords`: ["block diagram", "cores", "memory", "peripherals", "HSM"]
- `anchor`: "2.1 Block Diagram"

### SEC-02-02

- `number`: "2.2"
- `title`: "Feature Summary"
- `path`: "Chapter 2 Features / 2.2 Feature Summary"
- `physical_page_start`: 14
- `physical_page_end`: 17
- `printed_page_start`: "14"
- `printed_page_end`: "17"
- `keywords`: ["feature summary", "operating environment", "memory", "analog", "timers", "communications", "safety"]
- `anchor`: "2.2 Feature Summary"

### SEC-03

- `number`: "3"
- `title`: "General"
- `path`: "Chapter 3 General"
- `physical_page_start`: 18
- `physical_page_end`: 24
- `printed_page_start`: "18"
- `printed_page_end`: "24"
- `keywords`: ["general", "electrical ratings", "operating condition", "ESD", "IDD", "LDO"]
- `anchor`: "Chapter 3 General"

### SEC-03-01

- `number`: "3.1"
- `title`: "Absolute Maximum Ratings"
- `path`: "Chapter 3 General / 3.1 Absolute Maximum Ratings"
- `physical_page_start`: 18
- `physical_page_end`: 18
- `printed_page_start`: "18"
- `printed_page_end`: "18"
- `keywords`: ["absolute maximum ratings", "VDD_HV_A", "V11", "VREFH", "temperature"]
- `anchor`: "3.1 Absolute Maximum Ratings"

### SEC-03-02

- `number`: "3.2"
- `title`: "Operation Condition"
- `path`: "Chapter 3 General / 3.2 Operation Condition"
- `physical_page_start`: 18
- `physical_page_end`: 19
- `printed_page_start`: "18"
- `printed_page_end`: "19"
- `keywords`: ["operating requirements", "power sequencing", "VDD_HV_A", "VDDA", "V11"]
- `anchor`: "3.2 Operation Condition"

### SEC-03-03

- `number`: "3.3"
- `title`: "Thermal Operating Condition"
- `path`: "Chapter 3 General / 3.3 Thermal Operating Condition"
- `physical_page_start`: 19
- `physical_page_end`: 19
- `printed_page_start`: "19"
- `printed_page_end`: "19"
- `keywords`: ["thermal", "TA", "TJ", "junction temperature"]
- `anchor`: "3.3 Thermal Operating Condition"

### SEC-03-04

- `number`: "3.4"
- `title`: "Clock Operating Condition"
- `path`: "Chapter 3 General / 3.4 Clock Operating Condition"
- `physical_page_start`: 19
- `physical_page_end`: 21
- `printed_page_start`: "19"
- `printed_page_end`: "21"
- `keywords`: ["functional clock", "module clocks", "SCG", "PCC", "ENET", "ADC"]
- `anchor`: "3.4 Clock Operating Condition"

### SEC-03-05

- `number`: "3.5"
- `title`: "LVR, LVD, HVD, and POR Operating Requirements"
- `path`: "Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"
- `physical_page_start`: 21
- `physical_page_end`: 21
- `printed_page_start`: "21"
- `printed_page_end`: "21"
- `keywords`: ["LVR", "LVD", "HVD", "POR", "bandgap"]
- `anchor`: "3.5 LVR, LVD, HVD, and POR Operating Requirements"

### SEC-03-06

- `number`: "3.6"
- `title`: "Power Mode Transition"
- `path`: "Chapter 3 General / 3.6 Power Mode Transition"
- `physical_page_start`: 22
- `physical_page_end`: 22
- `printed_page_start`: "22"
- `printed_page_end`: "22"
- `keywords`: ["power mode transition", "RUN", "STOP", "Standby", "TBD"]
- `anchor`: "3.6 Power Mode Transition"

### SEC-03-07

- `number`: "3.7"
- `title`: "Chip IDD"
- `path`: "Chapter 3 General / 3.7 Chip IDD"
- `physical_page_start`: 22
- `physical_page_end`: 23
- `printed_page_start`: "22"
- `printed_page_end`: "23"
- `keywords`: ["IDD", "RUN current", "low power current", "STOP", "Standby"]
- `anchor`: "3.7 Chip IDD"

### SEC-03-08

- `number`: "3.8"
- `title`: "PMC Internal LDO"
- `path`: "Chapter 3 General / 3.8 PMC Internal LDO"
- `physical_page_start`: 23
- `physical_page_end`: 23
- `printed_page_start`: "23"
- `printed_page_end`: "23"
- `keywords`: ["PMC", "V25 LDO", "V11 RPM LDO", "capacitor"]
- `anchor`: "3.8 PMC Internal LDO"

### SEC-03-09

- `number`: "3.9"
- `title`: "ESD Ratings"
- `path`: "Chapter 3 General / 3.9 ESD Ratings"
- `physical_page_start`: 24
- `physical_page_end`: 24
- `printed_page_start`: "24"
- `printed_page_end`: "24"
- `keywords`: ["ESD", "HBM", "CDM", "AEC-Q100", "latch-up"]
- `anchor`: "3.9 ESD Ratings"

### SEC-04

- `number`: "4"
- `title`: "I/O Parameter"
- `path`: "Chapter 4 I/O Parameter"
- `physical_page_start`: 25
- `physical_page_end`: 28
- `printed_page_start`: "25"
- `printed_page_end`: "28"
- `keywords`: ["I/O", "IO", "DC specification", "AC specification", "pads"]
- `anchor`: "Chapter 4 I/O Parameter"

### SEC-04-01

- `number`: "4.1"
- `title`: "I/O Structure"
- `path`: "Chapter 4 I/O Parameter / 4.1 I/O Structure"
- `physical_page_start`: 25
- `physical_page_end`: 25
- `printed_page_start`: "25"
- `printed_page_end`: "25"
- `keywords`: ["I/O structure", "output control", "pad"]
- `anchor`: "4.1 I/O Structure"

### SEC-04-02

- `number`: "4.2"
- `title`: "IO DC Specification"
- `path`: "Chapter 4 I/O Parameter / 4.2 IO DC Specification"
- `physical_page_start`: 25
- `physical_page_end`: 27
- `printed_page_start`: "25"
- `printed_page_end`: "27"
- `keywords`: ["IO DC", "3V IO", "5V IO", "VIH", "VIL", "pullup", "pulldown"]
- `anchor`: "4.2 IO DC Specification"

### SEC-04-03

- `number`: "4.3"
- `title`: "IO AC Specification"
- `path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `physical_page_start`: 27
- `physical_page_end`: 28
- `printed_page_start`: "27"
- `printed_page_end`: "28"
- `keywords`: ["IO AC", "rise time", "fall time", "SRE", "DSE", "pad frequency"]
- `anchor`: "4.3 IO AC Specification"

### SEC-05

- `number`: "5"
- `title`: "Clock Specification"
- `path`: "Chapter 5 Clock Specification"
- `physical_page_start`: 29
- `physical_page_end`: 31
- `printed_page_start`: "29"
- `printed_page_end`: "31"
- `keywords`: ["clock", "oscillator", "FOSC", "SOSC", "FIRC96M", "SIRC12M", "SIRC32k", "PLL"]
- `anchor`: "Chapter 5 Clock Specification"

### SEC-05-01

- `number`: "5.1"
- `title`: "FOSC Specification"
- `path`: "Chapter 5 Clock Specification / 5.1 FOSC Specification"
- `physical_page_start`: 29
- `physical_page_end`: 29
- `printed_page_start`: "29"
- `printed_page_end`: "29"
- `keywords`: ["FOSC", "crystal", "gmcrit", "startup time", "EXTAL", "XTAL"]
- `anchor`: "5.1 FOSC Specification"

### SEC-05-02

- `number`: "5.2"
- `title`: "SOSC Specification"
- `path`: "Chapter 5 Clock Specification / 5.2 SOSC Specification"
- `physical_page_start`: 30
- `physical_page_end`: 30
- `printed_page_start`: "30"
- `printed_page_end`: "30"
- `keywords`: ["SOSC", "32.768 kHz", "slow oscillator"]
- `anchor`: "5.2 SOSC Specification"

### SEC-05-03

- `number`: "5.3"
- `title`: "FIRC96M Specification"
- `path`: "Chapter 5 Clock Specification / 5.3 FIRC96M Specification"
- `physical_page_start`: 30
- `physical_page_end`: 30
- `printed_page_start`: "30"
- `printed_page_end`: "30"
- `keywords`: ["FIRC96M", "96 MHz", "48 MHz", "trim"]
- `anchor`: "5.3 FIRC96M Specification"

### SEC-05-04

- `number`: "5.4"
- `title`: "SIRC12M Specification"
- `path`: "Chapter 5 Clock Specification / 5.4 SIRC12M Specification"
- `physical_page_start`: 30
- `physical_page_end`: 30
- `printed_page_start`: "30"
- `printed_page_end`: "30"
- `keywords`: ["SIRC12M", "12 MHz", "low power"]
- `anchor`: "5.4 SIRC12M Specification"

### SEC-05-05

- `number`: "5.5"
- `title`: "SIRC32k Specification"
- `path`: "Chapter 5 Clock Specification / 5.5 SIRC32k Specification"
- `physical_page_start`: 31
- `physical_page_end`: 31
- `printed_page_start`: "31"
- `printed_page_end`: "31"
- `keywords`: ["SIRC32k", "32 kHz", "low power wakeup"]
- `anchor`: "5.5 SIRC32k Specification"

### SEC-05-06

- `number`: "5.6"
- `title`: "PLL Specification"
- `path`: "Chapter 5 Clock Specification / 5.6 PLL Specification"
- `physical_page_start`: 31
- `physical_page_end`: 31
- `printed_page_start`: "31"
- `printed_page_end`: "31"
- `keywords`: ["PLL", "PLL0", "PLL1", "VCO", "lock time"]
- `anchor`: "5.6 PLL Specification"

### SEC-06

- `number`: "6"
- `title`: "Non-Volatile Memory (NVM)"
- `path`: "Chapter 6 Non-Volatile Memory (NVM)"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["NVM", "retention", "program erase", "read timing", "flash wait cycle"]
- `anchor`: "Chapter 6 Non-Volatile Memory (NVM)"

### SEC-06-01

- `number`: "6.1"
- `title`: "NVM Retention"
- `path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.1 NVM Retention"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["NVM retention", "P/E cycles", "data retention"]
- `anchor`: "6.1 NVM Retention"

### SEC-06-02

- `number`: "6.2"
- `title`: "NVM Program/Erase Time"
- `path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["program time", "erase time", "sector erase"]
- `anchor`: "6.2 NVM Program/Erase Time"

### SEC-06-03

- `number`: "6.3"
- `title`: "NVM Max Read Timing"
- `path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.3 NVM Max Read Timing"
- `physical_page_start`: 32
- `physical_page_end`: 32
- `printed_page_start`: "32"
- `printed_page_end`: "32"
- `keywords`: ["NVM read frequency", "wait cycle", "33.33 MHz"]
- `anchor`: "6.3 NVM Max Read Timing"

### SEC-07

- `number`: "7"
- `title`: "Analog"
- `path`: "Chapter 7 Analog"
- `physical_page_start`: 33
- `physical_page_end`: 39
- `printed_page_start`: "33"
- `printed_page_end`: "39"
- `keywords`: ["analog", "ADC", "SDADC", "CMP", "TMU", "HRPWM", "SSI", "HSADC"]
- `anchor`: "Chapter 7 Analog"

### SEC-07-01

- `number`: "7.1"
- `title`: "12-bit SAR ADC"
- `path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC"
- `physical_page_start`: 33
- `physical_page_end`: 34
- `printed_page_start`: "33"
- `printed_page_end`: "34"
- `keywords`: ["SAR ADC", "12-bit", "sampling circuit", "conversion"]
- `anchor`: "7.1 12-bit SAR ADC"

### SEC-07-01-01

- `number`: "7.1.1"
- `title`: "ADC Operation Specification"
- `path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"
- `physical_page_start`: 33
- `physical_page_end`: 33
- `printed_page_start`: "33"
- `printed_page_end`: "33"
- `keywords`: ["ADC operation", "TUE", "ENOB", "FADCK", "conversion rate"]
- `anchor`: "7.1.1 ADC Operation Specification"

### SEC-07-01-02

- `number`: "7.1.2"
- `title`: "ADC Sampling Circuit Specification"
- `path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification"
- `physical_page_start`: 34
- `physical_page_end`: 34
- `printed_page_start`: "34"
- `printed_page_end`: "34"
- `keywords`: ["ADC sampling", "CS", "RSA", "CP1", "CP2"]
- `anchor`: "7.1.2 ADC Sampling Circuit Specification"

### SEC-07-02

- `number`: "7.2"
- `title`: "SDADC Specification"
- `path`: "Chapter 7 Analog / 7.2 SDADC Specification"
- `physical_page_start`: 35
- `physical_page_end`: 35
- `printed_page_start`: "35"
- `printed_page_end`: "35"
- `keywords`: ["SDADC", "sigma-delta", "SNR", "gain", "resolver"]
- `anchor`: "7.2 SDADC Specification"

### SEC-07-03

- `number`: "7.3"
- `title`: "CMP Specification"
- `path`: "Chapter 7 Analog / 7.3 CMP Specification"
- `physical_page_start`: 36
- `physical_page_end`: 36
- `printed_page_start`: "36"
- `printed_page_end`: "36"
- `keywords`: ["CMP", "comparator", "DAC", "hysteresis"]
- `anchor`: "7.3 CMP Specification"

### SEC-07-04

- `number`: "7.4"
- `title`: "TMU Specification"
- `path`: "Chapter 7 Analog / 7.4 TMU Specification"
- `physical_page_start`: 36
- `physical_page_end`: 37
- `printed_page_start`: "36"
- `printed_page_end`: "37"
- `keywords`: ["TMU", "temperature voltage", "temperature flag", "TJ"]
- `anchor`: "7.4 TMU Specification"

### SEC-07-05

- `number`: "7.5"
- `title`: "HRPWM Specification"
- `path`: "Chapter 7 Analog / 7.5 HRPWM Specification"
- `physical_page_start`: 37
- `physical_page_end`: 37
- `printed_page_start`: "37"
- `printed_page_end`: "37"
- `keywords`: ["HRPWM", "high-resolution PWM", "resolution"]
- `anchor`: "7.5 HRPWM Specification"

### SEC-07-06

- `number`: "7.6"
- `title`: "SSI Specification"
- `path`: "Chapter 7 Analog / 7.6 SSI Specification"
- `physical_page_start`: 37
- `physical_page_end`: 38
- `printed_page_start`: "37"
- `printed_page_end`: "38"
- `keywords`: ["SSI", "speed sensor interface", "hysteresis", "propagation delay"]
- `anchor`: "7.6 SSI Specification"

### SEC-07-07

- `number`: "7.7"
- `title`: "HSADC Specification"
- `path`: "Chapter 7 Analog / 7.7 HSADC Specification"
- `physical_page_start`: 38
- `physical_page_end`: 39
- `printed_page_start`: "38"
- `printed_page_end`: "39"
- `keywords`: ["HSADC", "high-speed ADC", "sampling circuit", "fast compare"]
- `anchor`: "7.7 HSADC Specification"

### SEC-08

- `number`: "8"
- `title`: "Peripherals"
- `path`: "Chapter 8 Peripherals"
- `physical_page_start`: 40
- `physical_page_end`: 52
- `printed_page_start`: "40"
- `printed_page_end`: "52"
- `keywords`: ["peripherals", "FCSPI", "MSC", "ENET", "LU", "timing"]
- `anchor`: "Chapter 8 Peripherals"

### SEC-08-01

- `number`: "8.1"
- `title`: "FCSPI Specification"
- `path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `physical_page_start`: 40
- `physical_page_end`: 46
- `printed_page_start`: "40"
- `printed_page_end`: "46"
- `keywords`: ["FCSPI", "SPI timing", "CPHA", "CPOL", "master", "slave"]
- `anchor`: "8.1 FCSPI Specification"

### SEC-08-01-01

- `number`: "8.1.1"
- `title`: "FCSPI 3V Specification"
- `path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification"
- `physical_page_start`: 42
- `physical_page_end`: 43
- `printed_page_start`: "42"
- `printed_page_end`: "43"
- `keywords`: ["FCSPI 3V", "normal pad", "HS pad", "timing"]
- `anchor`: "8.1.1 FCSPI 3V Specification"

### SEC-08-01-02

- `number`: "8.1.2"
- `title`: "FCSPI 5V Specification"
- `path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"
- `physical_page_start`: 44
- `physical_page_end`: 45
- `printed_page_start`: "44"
- `printed_page_end`: "45"
- `keywords`: ["FCSPI 5V", "normal pad", "HS pad", "timing"]
- `anchor`: "8.1.2 FCSPI 5V Specification"

### SEC-08-01-03

- `number`: "8.1.3"
- `title`: "FCSPI Pin Options"
- `path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.3 FCSPI Pin Options"
- `physical_page_start`: 46
- `physical_page_end`: 46
- `printed_page_start`: "46"
- `printed_page_end`: "46"
- `keywords`: ["FCSPI pin options", "PCS", "SCK", "MISO", "MOSI"]
- `anchor`: "8.1.3 FCSPI Pin Options"

### SEC-08-02

- `number`: "8.2"
- `title`: "MSC Specification"
- `path`: "Chapter 8 Peripherals / 8.2 MSC Specification"
- `physical_page_start`: 47
- `physical_page_end`: 47
- `printed_page_start`: "47"
- `printed_page_end`: "47"
- `keywords`: ["MSC", "Micro Second Channel", "upstream", "downstream"]
- `anchor`: "8.2 MSC Specification"

### SEC-08-03

- `number`: "8.3"
- `title`: "ENET Specification"
- `path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `physical_page_start`: 48
- `physical_page_end`: 51
- `printed_page_start`: "48"
- `printed_page_end`: "51"
- `keywords`: ["ENET", "MII", "RMII", "RGMII", "MDIO", "Ethernet"]
- `anchor`: "8.3 ENET Specification"

### SEC-08-04

- `number`: "8.4"
- `title`: "LU Specification"
- `path`: "Chapter 8 Peripherals / 8.4 LU Specification"
- `physical_page_start`: 52
- `physical_page_end`: 52
- `printed_page_start`: "52"
- `printed_page_end`: "52"
- `keywords`: ["LU", "logic unit", "timing"]
- `anchor`: "8.4 LU Specification"

### SEC-09

- `number`: "9"
- `title`: "Debug Modules"
- `path`: "Chapter 9 Debug Modules"
- `physical_page_start`: 53
- `physical_page_end`: 55
- `printed_page_start`: "53"
- `printed_page_end`: "55"
- `keywords`: ["debug", "SWD", "Trace", "JTAG", "timing"]
- `anchor`: "Chapter 9 Debug Modules"

### SEC-09-01

- `number`: "9.1"
- `title`: "SWD Specification"
- `path`: "Chapter 9 Debug Modules / 9.1 SWD Specification"
- `physical_page_start`: 53
- `physical_page_end`: 53
- `printed_page_start`: "53"
- `printed_page_end`: "53"
- `keywords`: ["SWD", "clock timing", "data timing"]
- `anchor`: "9.1 SWD Specification"

### SEC-09-02

- `number`: "9.2"
- `title`: "Trace Block"
- `path`: "Chapter 9 Debug Modules / 9.2 Trace Block"
- `physical_page_start`: 54
- `physical_page_end`: 54
- `printed_page_start`: "54"
- `printed_page_end`: "54"
- `keywords`: ["trace block", "trace clock", "trace data"]
- `anchor`: "9.2 Trace Block"

### SEC-09-03

- `number`: "9.3"
- `title`: "JTAG Interface"
- `path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `physical_page_start`: 54
- `physical_page_end`: 55
- `printed_page_start`: "54"
- `printed_page_end`: "55"
- `keywords`: ["JTAG", "TAP", "boundary timing"]
- `anchor`: "9.3 JTAG Interface"

### SEC-10

- `number`: "10"
- `title`: "Package"
- `path`: "Chapter 10 Package"
- `physical_page_start`: 56
- `physical_page_end`: 56
- `printed_page_start`: "56"
- `printed_page_end`: "56"
- `keywords`: ["package", "thermal data", "320LFBGA", "dimensions"]
- `anchor`: "Chapter 10 Package"

### SEC-10-01

- `number`: "10.1"
- `title`: "Thermal Data"
- `path`: "Chapter 10 Package / 10.1 Thermal Data"
- `physical_page_start`: 56
- `physical_page_end`: 56
- `printed_page_start`: "56"
- `printed_page_end`: "56"
- `keywords`: ["thermal resistance", "RθJA", "airflow", "PCB type"]
- `anchor`: "10.1 Thermal Data"

### SEC-10-02

- `number`: "10.2"
- `title`: "Package Dimensions"
- `path`: "Chapter 10 Package / 10.2 Package Dimensions"
- `physical_page_start`: 56
- `physical_page_end`: 56
- `printed_page_start`: "56"
- `printed_page_end`: "56"
- `keywords`: ["package dimensions", "320LFBGA", "outline drawing"]
- `anchor`: "10.2 Package Dimensions"

### SEC-11

- `number`: "11"
- `title`: "Pinout"
- `path`: "Chapter 11 Pinout"
- `physical_page_start`: 57
- `physical_page_end`: 65
- `printed_page_start`: "57"
- `printed_page_end`: "65"
- `keywords`: ["pinout", "pin definitions", "320LFBGA", "VDD_HV_B", "exposed pads"]
- `anchor`: "Chapter 11 Pinout"

### SEC-11-01

- `number`: "11.1"
- `title`: "Pinout Diagrams"
- `path`: "Chapter 11 Pinout / 11.1 Pinout Diagrams"
- `physical_page_start`: 57
- `physical_page_end`: 57
- `printed_page_start`: "57"
- `printed_page_end`: "57"
- `keywords`: ["pinout diagram", "top view", "320LFBGA"]
- `anchor`: "11.1 Pinout Diagrams"

### SEC-11-02

- `number`: "11.2"
- `title`: "Pin Definitions"
- `path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `physical_page_start`: 57
- `physical_page_end`: 65
- `printed_page_start`: "57"
- `printed_page_end`: "65"
- `keywords`: ["pin definitions", "default function", "alternate functions", "pinout attachment"]
- `anchor`: "11.2 Pin Definitions"

### REV-HISTORY

- `number`: ""
- `title`: "Revision History"
- `path`: "Back Matter / Revision History"
- `physical_page_start`: 66
- `physical_page_end`: 68
- `printed_page_start`: "66"
- `printed_page_end`: "68"
- `keywords`: ["revision history", "changes", "Rev. 0.4", "technical changes"]
- `anchor`: "Revision History"

### LEGAL-NOTICE

- `number`: ""
- `title`: "Copyright and Confidentiality Notice"
- `path`: "Back Matter / Copyright and Confidentiality Notice"
- `physical_page_start`: 69
- `physical_page_end`: 69
- `printed_page_start`: "69"
- `printed_page_end`: "69"
- `keywords`: ["copyright", "confidential", "proprietary", "Flagchip"]
- `anchor`: "Copyright © 2026 Suzhou Flagchip Semiconductor Co., Ltd."

## 4. Page Locator Map
Every physical page has one `PAGE-*` entry. `physical_page` is 1-based and is the primary locator.

### PAGE-0001

- `physical_page`: 1
- `printed_page`: null
- `section_path`: "Front Matter / Cover"
- `content_types`: ["cover"]
- `text_length`: 40
- `image_objects`: 1
- `text_sha256_16`: `f102a92c2bc8e169`
- `anchor`: "Rev. 0.4"
- `quality_flags`: ["sparse_text"]

### PAGE-0002

- `physical_page`: 2
- `printed_page`: "2"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc"]
- `text_length`: 4721
- `image_objects`: 1
- `text_sha256_16`: `1044c8c18404c544`
- `anchor`: "Table of Contents"
- `quality_flags`: []

### PAGE-0003

- `physical_page`: 3
- `printed_page`: "3"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc"]
- `text_length`: 5033
- `image_objects`: 1
- `text_sha256_16`: `bc8b2ac6bc902450`
- `anchor`: "5.6"
- `quality_flags`: []

### PAGE-0004

- `physical_page`: 4
- `printed_page`: "4"
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc"]
- `text_length`: 794
- `image_objects`: 1
- `text_sha256_16`: `c8e5c70dc38db153`
- `anchor`: "Chapter 11 Pinout ............................................................................................................................................. "
- `quality_flags`: []

### PAGE-0005

- `physical_page`: 5
- `printed_page`: "5"
- `section_path`: "Front Matter / List of Figures"
- `content_types`: ["figure_list"]
- `text_length`: 4587
- `image_objects`: 1
- `text_sha256_16`: `6ec445cbf2804f39`
- `anchor`: "List of Figures"
- `quality_flags`: []

### PAGE-0006

- `physical_page`: 6
- `printed_page`: "6"
- `section_path`: "Front Matter / List of Tables"
- `content_types`: ["table_list"]
- `text_length`: 4793
- `image_objects`: 1
- `text_sha256_16`: `e8e705b0ae29dfe0`
- `anchor`: "List of Tables"
- `quality_flags`: []

### PAGE-0007

- `physical_page`: 7
- `printed_page`: "7"
- `section_path`: "Front Matter / List of Tables"
- `content_types`: ["table_list"]
- `text_length`: 3296
- `image_objects`: 1
- `text_sha256_16`: `c3990a39f3e8377c`
- `anchor`: "Table 29. CMP specification ...................................................................................................................................."
- `quality_flags`: []

### PAGE-0008

- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 1 Introduction / 1.1 Part Ordering / 1.1.1 Orderable Part Number"
- `content_types`: ["figure"]
- `text_length`: 840
- `image_objects`: 3
- `text_sha256_16`: `66b75858151b19ca`
- `anchor`: "Chapter 1 Introduction"
- `quality_flags`: []

### PAGE-0009

- `physical_page`: 9
- `printed_page`: "9"
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `text_length`: 1677
- `image_objects`: 1
- `text_sha256_16`: `690f701f8accde1f`
- `anchor`: "1.2"
- `quality_flags`: []

### PAGE-0010

- `physical_page`: 10
- `printed_page`: "10"
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `text_length`: 1657
- `image_objects`: 1
- `text_sha256_16`: `5e50346ced6598a4`
- `anchor`: "No."
- `quality_flags`: []

### PAGE-0011

- `physical_page`: 11
- `printed_page`: "11"
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `text_length`: 1655
- `image_objects`: 1
- `text_sha256_16`: `337ad329f5c7d881`
- `anchor`: "No."
- `quality_flags`: []

### PAGE-0012

- `physical_page`: 12
- `printed_page`: "12"
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `text_length`: 338
- `image_objects`: 1
- `text_sha256_16`: `fc4b465bd22b01b4`
- `anchor`: "No."
- `quality_flags`: []

### PAGE-0013

- `physical_page`: 13
- `printed_page`: "13"
- `section_path`: "Chapter 2 Features / 2.1 Block Diagram"
- `content_types`: ["figure"]
- `text_length`: 1508
- `image_objects`: 1
- `text_sha256_16`: `136254bd70be6090`
- `anchor`: "Chapter 2 Features"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0014

- `physical_page`: 14
- `printed_page`: "14"
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `text_length`: 2844
- `image_objects`: 1
- `text_sha256_16`: `2645ab0025bbd97a`
- `anchor`: "2.2"
- `quality_flags`: []

### PAGE-0015

- `physical_page`: 15
- `printed_page`: "15"
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `text_length`: 2647
- `image_objects`: 1
- `text_sha256_16`: `0c825ce04a869a5c`
- `anchor`: "Up to 384 KB data flash memory with Address and Data SECDED"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0016

- `physical_page`: 16
- `printed_page`: "16"
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `text_length`: 2750
- `image_objects`: 1
- `text_sha256_16`: `aba57278a26f317d`
- `anchor`: "EVITA full capability"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0017

- `physical_page`: 17
- `printed_page`: "17"
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `text_length`: 722
- `image_objects`: 1
- `text_sha256_16`: `e060a270ea12aa4f`
- `anchor`: "One Speed and Sensor Interface (SSI)."
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0018

- `physical_page`: 18
- `printed_page`: "18"
- `section_path`: "Chapter 3 General / 3.1 Absolute Maximum Ratings"
- `content_types`: ["table"]
- `text_length`: 2319
- `image_objects`: 1
- `text_sha256_16`: `3f70eb1bd5cf57c5`
- `anchor`: "Chapter 3 General"
- `quality_flags`: []

### PAGE-0019

- `physical_page`: 19
- `printed_page`: "19"
- `section_path`: "Chapter 3 General / 3.3 Thermal Operating Condition"
- `content_types`: ["table"]
- `text_length`: 2366
- `image_objects`: 1
- `text_sha256_16`: `2c0e613aa10ae71e`
- `anchor`: "Table 2. Operating requirements (continued)"
- `quality_flags`: []

### PAGE-0020

- `physical_page`: 20
- `printed_page`: "20"
- `section_path`: "Chapter 3 General / 3.4 Clock Operating Condition"
- `content_types`: ["table"]
- `text_length`: 1139
- `image_objects`: 1
- `text_sha256_16`: `b8a745168e6ec9dc`
- `anchor`: "Table 4. Max functional clock of modules (continued)"
- `quality_flags`: []

### PAGE-0021

- `physical_page`: 21
- `printed_page`: "21"
- `section_path`: "Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"
- `content_types`: ["table"]
- `text_length`: 1695
- `image_objects`: 1
- `text_sha256_16`: `7ff4ced2c5f3eab7`
- `anchor`: "Table 4. Max functional clock of modules (continued)"
- `quality_flags`: []

### PAGE-0022

- `physical_page`: 22
- `printed_page`: "22"
- `section_path`: "Chapter 3 General / 3.6 Power Mode Transition"
- `content_types`: ["table"]
- `text_length`: 1853
- `image_objects`: 1
- `text_sha256_16`: `c893722b336a9647`
- `anchor`: "Table 6. Power mode transition time"
- `quality_flags`: []

### PAGE-0023

- `physical_page`: 23
- `printed_page`: "23"
- `section_path`: "Chapter 3 General / 3.8 PMC Internal LDO"
- `content_types`: ["table"]
- `text_length`: 1702
- `image_objects`: 1
- `text_sha256_16`: `725f0ad5f3798d7f`
- `anchor`: "Table 9. Chip low power IDD"
- `quality_flags`: []

### PAGE-0024

- `physical_page`: 24
- `printed_page`: "24"
- `section_path`: "Chapter 3 General / 3.9 ESD Ratings"
- `content_types`: ["table"]
- `text_length`: 1059
- `image_objects`: 1
- `text_sha256_16`: `9059780051d17b88`
- `anchor`: "Table 12. ESD ratings"
- `quality_flags`: []

### PAGE-0025

- `physical_page`: 25
- `printed_page`: "25"
- `section_path`: "Chapter 4 I/O Parameter / 4.1 I/O Structure"
- `content_types`: ["table", "figure"]
- `text_length`: 1303
- `image_objects`: 1
- `text_sha256_16`: `8e430492906d16f0`
- `anchor`: "Chapter 4 I/O Parameter"
- `quality_flags`: []

### PAGE-0026

- `physical_page`: 26
- `printed_page`: "26"
- `section_path`: "Chapter 4 I/O Parameter / 4.2 IO DC Specification"
- `content_types`: ["table"]
- `text_length`: 1694
- `image_objects`: 1
- `text_sha256_16`: `5bc0178fef41efe9`
- `anchor`: "Table 13. 3V IO DC specification (continued)"
- `quality_flags`: []

### PAGE-0027

- `physical_page`: 27
- `printed_page`: "27"
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `content_types`: ["table"]
- `text_length`: 2076
- `image_objects`: 1
- `text_sha256_16`: `d08111cb635dc558`
- `anchor`: "Table 14. 5V IO DC specification (continued)"
- `quality_flags`: []

### PAGE-0028

- `physical_page`: 28
- `printed_page`: "28"
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `content_types`: ["table"]
- `text_length`: 2225
- `image_objects`: 1
- `text_sha256_16`: `004eb6129ddce49a`
- `anchor`: "Table 16. 3V IO AC specification (continued)"
- `quality_flags`: []

### PAGE-0029

- `physical_page`: 29
- `printed_page`: "29"
- `section_path`: "Chapter 5 Clock Specification / 5.1 FOSC Specification"
- `content_types`: ["table", "figure"]
- `text_length`: 1637
- `image_objects`: 1
- `text_sha256_16`: `904ba943f1cc19c8`
- `anchor`: "Chapter 5 Clock Specification"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0030

- `physical_page`: 30
- `printed_page`: "30"
- `section_path`: "Chapter 5 Clock Specification / 5.2 SOSC Specification"
- `content_types`: ["table"]
- `text_length`: 2601
- `image_objects`: 1
- `text_sha256_16`: `117340c2144a64e9`
- `anchor`: "Table 19. SOSC (32K) specification"
- `quality_flags`: []

### PAGE-0031

- `physical_page`: 31
- `printed_page`: "31"
- `section_path`: "Chapter 5 Clock Specification / 5.5 SIRC32k Specification"
- `content_types`: ["table"]
- `text_length`: 1684
- `image_objects`: 1
- `text_sha256_16`: `2bb30164fc59f33b`
- `anchor`: "Table 22. SIRC32k specification"
- `quality_flags`: []

### PAGE-0032

- `physical_page`: 32
- `printed_page`: "32"
- `section_path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time"
- `content_types`: ["table"]
- `text_length`: 1405
- `image_objects`: 1
- `text_sha256_16`: `ccc21df7c47f02c8`
- `anchor`: "Chapter 6 Non-Volatile Memory (NVM)"
- `quality_flags`: []

### PAGE-0033

- `physical_page`: 33
- `printed_page`: "33"
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"
- `content_types`: ["table"]
- `text_length`: 2093
- `image_objects`: 1
- `text_sha256_16`: `530a97f5ef7e3087`
- `anchor`: "Chapter 7 Analog"
- `quality_flags`: []

### PAGE-0034

- `physical_page`: 34
- `printed_page`: "34"
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification"
- `content_types`: ["table", "figure"]
- `text_length`: 1398
- `image_objects`: 3
- `text_sha256_16`: `4e0a5f936d532a48`
- `anchor`: "Table 27. ADC sampling circuit specification"
- `quality_flags`: []

### PAGE-0035

- `physical_page`: 35
- `printed_page`: "35"
- `section_path`: "Chapter 7 Analog / 7.2 SDADC Specification"
- `content_types`: ["table"]
- `text_length`: 2142
- `image_objects`: 1
- `text_sha256_16`: `10e8e51d9b26bd67`
- `anchor`: "Table 28. SDADC specification"
- `quality_flags`: []

### PAGE-0036

- `physical_page`: 36
- `printed_page`: "36"
- `section_path`: "Chapter 7 Analog / 7.3 CMP Specification"
- `content_types`: ["table"]
- `text_length`: 2201
- `image_objects`: 1
- `text_sha256_16`: `f7d5a1c38e102cce`
- `anchor`: "Table 29. CMP specification"
- `quality_flags`: []

### PAGE-0037

- `physical_page`: 37
- `printed_page`: "37"
- `section_path`: "Chapter 7 Analog / 7.5 HRPWM Specification"
- `content_types`: ["table"]
- `text_length`: 1955
- `image_objects`: 1
- `text_sha256_16`: `c002d9aa13a52495`
- `anchor`: "Table 30. TMU_TV specification (continued)"
- `quality_flags`: []

### PAGE-0038

- `physical_page`: 38
- `printed_page`: "38"
- `section_path`: "Chapter 7 Analog / 7.6 SSI Specification"
- `content_types`: ["table"]
- `text_length`: 2097
- `image_objects`: 1
- `text_sha256_16`: `f981801150362637`
- `anchor`: "Table 33. SSI specification (continued)"
- `quality_flags`: []

### PAGE-0039

- `physical_page`: 39
- `printed_page`: "39"
- `section_path`: "Chapter 7 Analog / 7.7 HSADC Specification"
- `content_types`: ["figure"]
- `text_length`: 696
- `image_objects`: 1
- `text_sha256_16`: `84efd9592b00f78d`
- `anchor`: "Figure 6. HSADC sampling circuit"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0040

- `physical_page`: 40
- `printed_page`: "40"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `content_types`: ["figure", "timing_diagram"]
- `text_length`: 804
- `image_objects`: 5
- `text_sha256_16`: `d7e04fea63b1843f`
- `anchor`: "Chapter 8 Peripherals"
- `quality_flags`: []

### PAGE-0041

- `physical_page`: 41
- `printed_page`: "41"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `content_types`: ["figure", "timing_diagram"]
- `text_length`: 226
- `image_objects`: 5
- `text_sha256_16`: `7237687d6e897933`
- `anchor`: "Figure 9. FCSPI slave mode timing (CPHA = 0)"
- `quality_flags`: []

### PAGE-0042

- `physical_page`: 42
- `printed_page`: "42"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification"
- `content_types`: ["table"]
- `text_length`: 1985
- `image_objects`: 1
- `text_sha256_16`: `85682393e8b8d9d6`
- `anchor`: "Table 35. FCSPI 3V specification"
- `quality_flags`: []

### PAGE-0043

- `physical_page`: 43
- `printed_page`: "43"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification"
- `content_types`: ["table"]
- `text_length`: 1867
- `image_objects`: 1
- `text_sha256_16`: `b61f4074c0a62923`
- `anchor`: "Table 35. FCSPI 3V specification (continued)"
- `quality_flags`: []

### PAGE-0044

- `physical_page`: 44
- `printed_page`: "44"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"
- `content_types`: ["table"]
- `text_length`: 1874
- `image_objects`: 1
- `text_sha256_16`: `afb11b7e34bb0e61`
- `anchor`: "Table 36. FCSPI 5V specification"
- `quality_flags`: []

### PAGE-0045

- `physical_page`: 45
- `printed_page`: "45"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"
- `content_types`: ["table"]
- `text_length`: 1763
- `image_objects`: 1
- `text_sha256_16`: `3ae2a2c5c04fdadf`
- `anchor`: "Table 36. FCSPI 5V specification (continued)"
- `quality_flags`: []

### PAGE-0046

- `physical_page`: 46
- `printed_page`: "46"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.3 FCSPI Pin Options"
- `content_types`: ["table"]
- `text_length`: 1767
- `image_objects`: 1
- `text_sha256_16`: `ac9e7cfc889374c6`
- `anchor`: "Table 37. FCSPI pin options"
- `quality_flags`: []

### PAGE-0047

- `physical_page`: 47
- `printed_page`: "47"
- `section_path`: "Chapter 8 Peripherals / 8.2 MSC Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `text_length`: 694
- `image_objects`: 1
- `text_sha256_16`: `02fb966a50fa5369`
- `anchor`: "Figure 11. MSC timing"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0048

- `physical_page`: 48
- `printed_page`: "48"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["figure", "timing_diagram"]
- `text_length`: 769
- `image_objects`: 64
- `text_sha256_16`: `a0711dad437606e1`
- `anchor`: "Figure 12. MII receive timing diagram"
- `quality_flags`: []

### PAGE-0049

- `physical_page`: 49
- `printed_page`: "49"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["figure", "timing_diagram"]
- `text_length`: 508
- `image_objects`: 47
- `text_sha256_16`: `cab79fba97570eb8`
- `anchor`: "Figure 15. RMII transmit timing diagram"
- `quality_flags`: []

### PAGE-0050

- `physical_page`: 50
- `printed_page`: "50"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["table"]
- `text_length`: 1457
- `image_objects`: 1
- `text_sha256_16`: `26690e7b408f5838`
- `anchor`: "Table 39. MII/RMII electrical specification"
- `quality_flags`: []

### PAGE-0051

- `physical_page`: 51
- `printed_page`: "51"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `text_length`: 757
- `image_objects`: 19
- `text_sha256_16`: `098aa91c3754b8a2`
- `anchor`: "Figure 18. MDIO timing diagram"
- `quality_flags`: []

### PAGE-0052

- `physical_page`: 52
- `printed_page`: "52"
- `section_path`: "Chapter 8 Peripherals / 8.4 LU Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `text_length`: 659
- `image_objects`: 1
- `text_sha256_16`: `d77961c6c1836879`
- `anchor`: "Figure 19. LU timing"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0053

- `physical_page`: 53
- `printed_page`: "53"
- `section_path`: "Chapter 9 Debug Modules / 9.1 SWD Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `text_length`: 1110
- `image_objects`: 35
- `text_sha256_16`: `52b74cb7c366c839`
- `anchor`: "Chapter 9 Debug Modules"
- `quality_flags`: []

### PAGE-0054

- `physical_page`: 54
- `printed_page`: "54"
- `section_path`: "Chapter 9 Debug Modules / 9.2 Trace Block"
- `content_types`: ["table", "figure", "timing_diagram"]
- `text_length`: 921
- `image_objects`: 35
- `text_sha256_16`: `1a0e745823971707`
- `anchor`: "Figure 22. Trace block timing diagram"
- `quality_flags`: []

### PAGE-0055

- `physical_page`: 55
- `printed_page`: "55"
- `section_path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `content_types`: ["table", "figure", "timing_diagram"]
- `text_length`: 1080
- `image_objects`: 21
- `text_sha256_16`: `8266cc8519797f7d`
- `anchor`: "Figure 25. JTAG TAP timing diagram"
- `quality_flags`: []

### PAGE-0056

- `physical_page`: 56
- `printed_page`: "56"
- `section_path`: "Chapter 10 Package / 10.1 Thermal Data"
- `content_types`: ["table", "figure"]
- `text_length`: 761
- `image_objects`: 3
- `text_sha256_16`: `5d43fd872c9fb8ff`
- `anchor`: "Chapter 10 Package"
- `quality_flags`: []

### PAGE-0057

- `physical_page`: 57
- `printed_page`: "57"
- `section_path`: "Chapter 11 Pinout / 11.1 Pinout Diagrams"
- `content_types`: ["figure", "pinout_diagram"]
- `text_length`: 751
- `image_objects`: 3
- `text_sha256_16`: `d48528484ce917d5`
- `anchor`: "Chapter 11 Pinout"
- `quality_flags`: []

### PAGE-0058

- `physical_page`: 58
- `printed_page`: "58"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1036
- `image_objects`: 1
- `text_sha256_16`: `e81700c828ca0cbe`
- `anchor`: "Table 47. FC7300F8MDQ pinout definition"
- `quality_flags`: []

### PAGE-0059

- `physical_page`: 59
- `printed_page`: "59"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1169
- `image_objects`: 1
- `text_sha256_16`: `171213866225cdea`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0060

- `physical_page`: 60
- `printed_page`: "60"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1045
- `image_objects`: 1
- `text_sha256_16`: `d7b69e3c8a6b9980`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0061

- `physical_page`: 61
- `printed_page`: "61"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1219
- `image_objects`: 1
- `text_sha256_16`: `9e118a09feada7a0`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0062

- `physical_page`: 62
- `printed_page`: "62"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1107
- `image_objects`: 1
- `text_sha256_16`: `5e6fdae396363bb0`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0063

- `physical_page`: 63
- `printed_page`: "63"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1098
- `image_objects`: 1
- `text_sha256_16`: `c6d1a115a431d933`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0064

- `physical_page`: 64
- `printed_page`: "64"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 1087
- `image_objects`: 1
- `text_sha256_16`: `60019a133e8b890b`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0065

- `physical_page`: 65
- `printed_page`: "65"
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `text_length`: 519
- `image_objects`: 1
- `text_sha256_16`: `d2f608583e4a38a1`
- `anchor`: "Table 46. FC7300F8MDQ pinout definition (continued)"
- `quality_flags`: []

### PAGE-0066

- `physical_page`: 66
- `printed_page`: "66"
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["table", "revision_history"]
- `text_length`: 2516
- `image_objects`: 1
- `text_sha256_16`: `27b3799812a27fa8`
- `anchor`: "Revision History"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0067

- `physical_page`: 67
- `printed_page`: "67"
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["table", "revision_history"]
- `text_length`: 2652
- `image_objects`: 1
- `text_sha256_16`: `b8783ad85dfc8c30`
- `anchor`: "7.1.1 ADC Operation Specification;"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0068

- `physical_page`: 68
- `printed_page`: "68"
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["table", "revision_history"]
- `text_length`: 1701
- `image_objects`: 1
- `text_sha256_16`: `6e0babb6408179ba`
- `anchor`: "Revision"
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### PAGE-0069

- `physical_page`: 69
- `printed_page`: "69"
- `section_path`: "Back Matter / Copyright and Confidentiality Notice"
- `content_types`: ["legal_notice"]
- `text_length`: 1140
- `image_objects`: 0
- `text_sha256_16`: `68c019576ccb5740`
- `anchor`: "Copyright © 2026 Suzhou Flagchip Semiconductor Co., Ltd. All rights reserved."
- `quality_flags`: []

## 5. Page Segment Index
Segments are one physical page each for exact coverage. This intentionally avoids 1-to-3-page ambiguity in this short data sheet.

### SEG-0001

- `physical_pages`: [1]
- `printed_pages`: [null]
- `section_path`: "Front Matter / Cover"
- `content_types`: ["cover"]
- `summary`: "Cover page identifying FC7300F8MDQ Data Sheet and revision 0.4."
- `keywords`: ["FC7300F8MDQ", "data sheet"]
- `anchors`: ["Rev. 0.4"]
- `quality_flags`: ["sparse_text"]

### SEG-0002

- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc"]
- `summary`: "Table of Contents page listing document chapters and section start pages."
- `keywords`: ["FC7300F8MDQ", "data sheet", "ordering", "part number", "abbreviations", "features", "block diagram", "FOSC", "SOSC", "FIRC96M", "SIRC12M", "SIRC32k"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction ....................................................................................................................................... 8", "Chapter 2 Features ........................................................................................................................................... 1", "Chapter 3 General ............................................................................................................................................. ", "Chapter 4 I/O Parameter ................................................................................................................................... 25"]
- `quality_flags`: []

### SEG-0003

- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc"]
- `summary`: "Table of Contents page listing document chapters and section start pages."
- `keywords`: ["FC7300F8MDQ", "data sheet", "PLL", "IO", "NVM", "ADC", "SAR ADC", "SDADC", "CMP", "TMU", "HRPWM", "SSI"]
- `anchors`: ["5.6", "Chapter 6 Non-Volatile Memory (NVM) ............................................................................................................. 32", "Chapter 7 Analog .............................................................................................................................................. ", "Chapter 8 Peripherals ....................................................................................................................................... 40", "Chapter 9 Debug Modules ................................................................................................................................. 53"]
- `quality_flags`: []

### SEG-0004

- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: "Front Matter / Table of Contents"
- `content_types`: ["toc"]
- `summary`: "Table of Contents page listing document chapters and section start pages."
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pinout", "pin definitions", "Revision History", "Y26M01"]
- `anchors`: ["Chapter 11 Pinout ............................................................................................................................................. ", "Revision History ..............................................................................................................................................."]
- `quality_flags`: []

### SEG-0005

- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: "Front Matter / List of Figures"
- `content_types`: ["figure_list"]
- `summary`: "List of Figures page enumerating all source figure captions and printed/physical pages."
- `keywords`: ["FC7300F8MDQ", "data sheet", "ordering", "block diagram", "IO", "I/O", "ADC", "HSADC", "FCSPI", "CPHA", "MSC", "MII"]
- `anchors`: ["List of Figures", "Figure 1. Ordering information .................................................................................................................................", "Figure 2. FC7300F8MDQ block diagram ........................................................................................................................ 13", "Figure 3. I/O structure ........................................................................................................................................", "Figure 4. Crystal connection diagram ..........................................................................................................................."]
- `quality_flags`: []

### SEG-0006

- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: "Front Matter / List of Tables"
- `content_types`: ["table_list"]
- `summary`: "List of Tables page enumerating all numbered source tables and printed/physical pages."
- `keywords`: ["FC7300F8MDQ", "data sheet", "FOSC", "SOSC", "FIRC96M", "SIRC12M", "SIRC32k", "PLL", "V11", "V25", "LVR", "LVD"]
- `anchors`: ["List of Tables", "Table 1. Absolute maximum ratings1 ............................................................................................................................ ", "Table 2. Operating requirements ................................................................................................................................", "Table 3. Thermal operating condition .......................................................................................................................... ", "Table 4. Max. functional clock of modules ................................................................................................................... 19"]
- `quality_flags`: []

### SEG-0007

- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Front Matter / List of Tables"
- `content_types`: ["table_list"]
- `summary`: "List of Tables page enumerating all numbered source tables and printed/physical pages."
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "ADC", "CMP", "TMU", "HRPWM", "SSI", "HSADC", "FCSPI", "MSC", "MII"]
- `anchors`: ["Table 29. CMP specification ....................................................................................................................................", "Table 30. TMU_TV specification .................................................................................................................................", "Table 31. TMU_TF specification .................................................................................................................................", "Table 32. HRPWM specification...................................................................................................................................", "Table 33. SSI specification....................................................................................................................................."]
- `quality_flags`: []

### SEG-0008

- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: "Chapter 1 Introduction / 1.1 Part Ordering / 1.1.1 Orderable Part Number"
- `content_types`: ["figure"]
- `summary`: "Page belongs to Chapter 1 Introduction / 1.1 Part Ordering / 1.1.1 Orderable Part Number. headings: Chapter 1 Introduction figures: Figure 1. Ordering information"
- `keywords`: ["FC7300F8MDQ", "MCU", "data sheet", "ordering", "part number", "IO", "Package", "pinout", "Y26M01", "NOTE"]
- `anchors`: ["Chapter 1 Introduction", "Figure 1. Ordering information"]
- `quality_flags`: []

### SEG-0009

- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 1 Introduction / 1.2 Abbreviations. content anchors: 1.2; Abbreviations"
- `keywords`: ["FC7300F8MDQ", "data sheet", "abbreviations", "EVITA", "POR", "ESD", "IO", "ADC", "SSI", "FCSPI", "CPHA", "CPOL"]
- `anchors`: ["1.2"]
- `quality_flags`: []

### SEG-0010

- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 1 Introduction / 1.2 Abbreviations. content anchors: No.; Abbreviation"
- `keywords`: ["FC7300F8MDQ", "data sheet", "HSM", "FOSC", "LVR", "LVD", "HVD", "LDO", "IO", "GPIO", "flash", "ADC"]
- `anchors`: ["No."]
- `quality_flags`: []

### SEG-0011

- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 1 Introduction / 1.2 Abbreviations. content anchors: No.; Abbreviation"
- `keywords`: ["FC7300F8MDQ", "data sheet", "SOSC", "PLL", "POR", "IO", "NVM", "ADC", "SDADC", "TMU", "SSI", "MSC"]
- `anchors`: ["No."]
- `quality_flags`: []

### SEG-0012

- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: "Chapter 1 Introduction / 1.2 Abbreviations"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 1 Introduction / 1.2 Abbreviations. content anchors: No.; Abbreviation"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "Y26M01", "TSTMP", "UART", "VCO", "WDOG", "WKU"]
- `anchors`: ["No."]
- `quality_flags`: []

### SEG-0013

- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: "Chapter 2 Features / 2.1 Block Diagram"
- `content_types`: ["figure"]
- `summary`: "Page belongs to Chapter 2 Features / 2.1 Block Diagram. headings: Chapter 2 Features figures: Figure 2. FC7300F8MDQ block diagram"
- `keywords`: ["FC7300F8MDQ", "data sheet", "features", "block diagram", "Cortex-M7", "ASIL-D", "EVITA", "secure boot", "HSM", "FOSC", "SOSC", "PLL"]
- `anchors`: ["Chapter 2 Features", "Figure 2. FC7300F8MDQ block diagram"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0014

- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 2 Features / 2.2 Feature Summary. content anchors: 2.2; Feature Summary"
- `keywords`: ["FC7300F8MDQ", "data sheet", "Cortex-M7", "HSM", "FOSC", "SOSC", "FIRC96M", "SIRC12M", "SIRC32k", "PLL", "POR", "IO"]
- `anchors`: ["2.2"]
- `quality_flags`: []

### SEG-0015

- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 2 Features / 2.2 Feature Summary. content anchors: Up to 384 KB data flash memory with Address and Data SECDED; Up to 896 KB SRAM and 576 KB TCM (total 1472 KB) with Address and Data SECDED"
- `keywords`: ["FC7300F8MDQ", "data sheet", "secure boot", "HSM", "POR", "IO", "GPIO", "flash", "ADC", "SDADC", "CMP", "SSI"]
- `anchors`: ["Up to 384 KB data flash memory with Address and Data SECDED"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0016

- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 2 Features / 2.2 Feature Summary. content anchors: EVITA full capability; Dedicated Secure Core with dedicated 48 KB RAM, and all 48 KB RAM with address and data ECC protection."
- `keywords`: ["FC7300F8MDQ", "data sheet", "EVITA", "secure boot", "LVR", "LVD", "HVD", "POR", "IO", "flash", "HRPWM", "SSI"]
- `anchors`: ["EVITA full capability"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0017

- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: "Chapter 2 Features / 2.2 Feature Summary"
- `content_types`: ["text"]
- `summary`: "Page belongs to Chapter 2 Features / 2.2 Feature Summary. content anchors: One Speed and Sensor Interface (SSI).; - Support up to four AK/PWM wheel sensor interfaces."
- `keywords`: ["FC7300F8MDQ", "data sheet", "POR", "SSI", "Package", "320LFBGA", "Y26M01", "PWM", "AONTIMER", "RTC", "TSTMP0", "TSTMP1"]
- `anchors`: ["One Speed and Sensor Interface (SSI)."]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0018

- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: "Chapter 3 General / 3.1 Absolute Maximum Ratings"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.1 Absolute Maximum Ratings. headings: Chapter 3 General; 3.0 V - 5.5 V input supply voltage; 3.0 V - 5.5 V input supply voltage tables: Table 1. Absolute maximum ratings1; Table 2. Operating requirements"
- `keywords`: ["FC7300F8MDQ", "MCU", "data sheet", "VDD_HV_A", "VDD_HV_B", "V11", "VDDA", "VREFH", "VREFL", "IO", "I/O", "pad"]
- `anchors`: ["Chapter 3 General", "Table 1. Absolute maximum ratings1", "3.0 V - 5.5 V input supply voltage", "3.0 V - 5.5 V input supply voltage", "3.3 V - 5.0 V high reference voltage"]
- `quality_flags`: []

### SEG-0019

- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: "Chapter 3 General / 3.3 Thermal Operating Condition"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.3 Thermal Operating Condition. tables: Table 2. Operating requirements; Table 3. Thermal operating condition; Table 4. Max. functional clock of modules"
- `keywords`: ["FC7300F8MDQ", "data sheet", "PLL", "VDD_HV_A", "V11", "V25", "VDDA", "VREFH", "VREFL", "IO", "I/O", "pad"]
- `anchors`: ["Table 2. Operating requirements (continued)", "Table 3. Thermal operating condition", "Table 4. Max. functional clock of modules"]
- `quality_flags`: []

### SEG-0020

- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: "Chapter 3 General / 3.4 Clock Operating Condition"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.4 Clock Operating Condition. tables: Table 4. Max. functional clock of modules"
- `keywords`: ["FC7300F8MDQ", "data sheet", "HSM", "IO", "FCSPI", "MSC", "ENET", "MII", "RMII", "RGMII", "Y26M01", "STA"]
- `anchors`: ["Table 4. Max functional clock of modules (continued)"]
- `quality_flags`: []

### SEG-0021

- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements. tables: Table 4. Max. functional clock of modules; Table 5. LVR/LVD/HVD and POR"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "V11", "LVR", "LVD", "HVD", "POR", "LDO", "IO", "GPIO", "pad"]
- `anchors`: ["Table 4. Max functional clock of modules (continued)", "Table 5. LVR/LVD/HVD and POR"]
- `quality_flags`: []

### SEG-0022

- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 General / 3.6 Power Mode Transition"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.6 Power Mode Transition. tables: Table 6. Power mode transition time; Table 7. Internally maximum power consumption; Table 8. Chip RUN IDD"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FOSC", "SIRC12M", "VDD_HV_A", "V11", "V25", "VDDA", "VREFH", "POR", "IDD", "LDO"]
- `anchors`: ["Table 6. Power mode transition time", "Table 7. Internally maximum power consumption", "Table 8. Chip RUN IDD"]
- `quality_flags`: []

### SEG-0023

- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 General / 3.8 PMC Internal LDO"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.8 PMC Internal LDO. tables: Table 9. Chip low power IDD; Table 10. V25 LDO specification; Table 11. V11 RPM LDO specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "SOSC", "SIRC12M", "VDD_HV_A", "V11", "V25", "POR", "IDD", "LDO", "IO", "Y26M01"]
- `anchors`: ["Table 9. Chip low power IDD", "Table 10. V25 LDO specification", "Table 11. V11 RPM LDO specification"]
- `quality_flags`: []

### SEG-0024

- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 General / 3.9 ESD Ratings"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 3 General / 3.9 ESD Ratings. tables: Table 12. ESD ratings"
- `keywords`: ["FC7300F8MDQ", "data sheet", "ESD", "IO", "LU", "Y26M01", "VHBM", "HBM", "VCDM", "CDM", "ILAT", "AEC"]
- `anchors`: ["Table 12. ESD ratings"]
- `quality_flags`: []

### SEG-0025

- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: "Chapter 4 I/O Parameter / 4.1 I/O Structure"
- `content_types`: ["table", "figure"]
- `summary`: "Page belongs to Chapter 4 I/O Parameter / 4.1 I/O Structure. headings: Chapter 4 I/O Parameter; 0.09 for normal pad figures: Figure 3. I/O structure tables: Table 13. 3V IO DC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "I/O", "pad", "DSE", "Y26M01", "VIH", "VDD_IO", "VIL", "VHYS"]
- `anchors`: ["Chapter 4 I/O Parameter", "Figure 3. I/O structure", "Table 13. 3V IO DC specification", "0.09 for normal pad"]
- `quality_flags`: []

### SEG-0026

- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: "Chapter 4 I/O Parameter / 4.2 IO DC Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 4 I/O Parameter / 4.2 IO DC Specification. headings: 0.09 for normal pad tables: Table 13. 3V IO DC specification; Table 14. 5V IO DC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "LDO", "IO", "I/O", "pad", "DSE", "LU", "Y26M01", "VDD_IO", "IPU", "VSS"]
- `anchors`: ["Table 13. 3V IO DC specification (continued)", "Table 14. 5V IO DC specification", "0.09 for normal pad"]
- `quality_flags`: []

### SEG-0027

- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 4 I/O Parameter / 4.3 IO AC Specification. tables: Table 14. 5V IO DC specification; Table 15. Maximum frequency of operation of pads; Table 16. 3V IO AC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "LDO", "IO", "I/O", "pad", "SRE", "DSE", "LU", "Y26M01", "VDD_IO", "IPU"]
- `anchors`: ["Table 14. 5V IO DC specification (continued)", "Table 15. Maximum frequency of operation of pads", "Table 16. 3V IO AC specification"]
- `quality_flags`: []

### SEG-0028

- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 4 I/O Parameter / 4.3 IO AC Specification. tables: Table 16. 3V IO AC specification; Table 17. 5V IO AC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "SRE", "DSE", "Y26M01"]
- `anchors`: ["Table 16. 3V IO AC specification (continued)", "Table 17. 5V IO AC specification"]
- `quality_flags`: []

### SEG-0029

- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: "Chapter 5 Clock Specification / 5.1 FOSC Specification"
- `content_types`: ["table", "figure"]
- `summary`: "Page belongs to Chapter 5 Clock Specification / 5.1 FOSC Specification. headings: Chapter 5 Clock Specification figures: Figure 4. Crystal connection diagram tables: Table 18. FOSC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FOSC", "POR", "IDD", "IO", "SSI", "Y26M01", "ESR", "NOTE", "GND2", "EXTAL"]
- `anchors`: ["Chapter 5 Clock Specification", "Figure 4. Crystal connection diagram", "Table 18. FOSC specification"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0030

- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: "Chapter 5 Clock Specification / 5.2 SOSC Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 5 Clock Specification / 5.2 SOSC Specification. tables: Table 19. SOSC (32K) specification; Table 20. FIRC96M specification; Table 21. SIRC12M specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FOSC", "SOSC", "FIRC96M", "SIRC12M", "PLL", "LVD", "POR", "IDD", "IO", "flash"]
- `anchors`: ["Table 19. SOSC (32K) specification", "Table 20. FIRC96M specification", "Table 21. SIRC12M specification"]
- `quality_flags`: []

### SEG-0031

- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: "Chapter 5 Clock Specification / 5.5 SIRC32k Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 5 Clock Specification / 5.5 SIRC32k Specification. tables: Table 22. SIRC32k specification; Table 23. PLL0 and PLL1 specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FOSC", "FIRC96M", "SIRC32k", "PLL", "POR", "IDD", "IO", "Y26M01", "PLL0", "PLL1"]
- `anchors`: ["Table 22. SIRC32k specification", "Table 23. PLL0 and PLL1 specification"]
- `quality_flags`: []

### SEG-0032

- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time. headings: Chapter 6 Non-Volatile Memory (NVM) tables: Table 24. NVM retention specification; Table 25. NVM program/erase time1"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "NVM", "flash", "LU", "Y26M01"]
- `anchors`: ["Chapter 6 Non-Volatile Memory (NVM)", "Table 24. NVM retention specification", "Table 25. NVM program/erase time1"]
- `quality_flags`: []

### SEG-0033

- `physical_pages`: [33]
- `printed_pages`: ["33"]
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification. headings: Chapter 7 Analog tables: Table 26. ADC operation specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDDA", "VREFH", "VREFL", "POR", "IDD", "IO", "ADC", "SAR ADC", "SSI", "LU"]
- `anchors`: ["Chapter 7 Analog", "Table 26. ADC operation specification"]
- `quality_flags`: []

### SEG-0034

- `physical_pages`: [34]
- `printed_pages`: ["34"]
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification"
- `content_types`: ["table", "figure"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification. figures: Figure 5. ADC sampling circuit tables: Table 27. ADC sampling circuit specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VREFH", "VREFL", "IO", "ADC", "LU", "Y26M01", "NOTE", "VSS", "PCB", "RSA"]
- `anchors`: ["Table 27. ADC sampling circuit specification", "Figure 5. ADC sampling circuit"]
- `quality_flags`: []

### SEG-0035

- `physical_pages`: [35]
- `printed_pages`: ["35"]
- `section_path`: "Chapter 7 Analog / 7.2 SDADC Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.2 SDADC Specification. tables: Table 28. SDADC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDDA", "VREFH", "IO", "ADC", "SDADC", "LU", "Y26M01", "AVDD", "SNR", "CIC3"]
- `anchors`: ["Table 28. SDADC specification"]
- `quality_flags`: []

### SEG-0036

- `physical_pages`: [36]
- `printed_pages`: ["36"]
- `section_path`: "Chapter 7 Analog / 7.3 CMP Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.3 CMP Specification. tables: Table 29. CMP specification; Table 30. TMU_TV specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDDA", "POR", "IDD", "IO", "ADC", "CMP", "TMU", "Y26M01", "VSSA", "VREF_EXT"]
- `anchors`: ["Table 29. CMP specification", "Table 30. TMU_TV specification"]
- `quality_flags`: []

### SEG-0037

- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: "Chapter 7 Analog / 7.5 HRPWM Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.5 HRPWM Specification. tables: Table 30. TMU_TV specification; Table 31. TMU_TF specification; Table 32. HRPWM specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IDD", "IO", "ADC", "CMP", "TMU", "HRPWM", "SSI", "LU", "TMU_TV", "Y26M01"]
- `anchors`: ["Table 30. TMU_TV specification (continued)", "Table 31. TMU_TF specification", "Table 32. HRPWM specification", "Table 33. SSI specification"]
- `quality_flags`: []

### SEG-0038

- `physical_pages`: [38]
- `printed_pages`: ["38"]
- `section_path`: "Chapter 7 Analog / 7.6 SSI Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.6 SSI Specification. tables: Table 33. SSI specification; Table 34. HSADC specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDDA", "VREFH", "VREFL", "IO", "pad", "ADC", "SSI", "HSADC", "LU", "Package"]
- `anchors`: ["Table 33. SSI specification (continued)", "Table 34. HSADC specification"]
- `quality_flags`: []

### SEG-0039

- `physical_pages`: [39]
- `printed_pages`: ["39"]
- `section_path`: "Chapter 7 Analog / 7.7 HSADC Specification"
- `content_types`: ["figure"]
- `summary`: "Page belongs to Chapter 7 Analog / 7.7 HSADC Specification. figures: Figure 6. HSADC sampling circuit"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "ADC", "HSADC", "LU", "Y26M01", "MUX"]
- `anchors`: ["Figure 6. HSADC sampling circuit"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0040

- `physical_pages`: [40]
- `printed_pages`: ["40"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `content_types`: ["figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification. headings: Chapter 8 Peripherals figures: Figure 7. FCSPI master mode timing (CPHA = 0); Figure 8. FCSPI master mode timing (CPHA = 1)"
- `keywords`: ["FC7300F8MDQ", "data sheet", "POR", "IO", "pad", "SRE", "DSE", "FCSPI", "CPHA", "ENET", "Y26M01", "VDD_HV"]
- `anchors`: ["Chapter 8 Peripherals", "Figure 7. FCSPI master mode timing (CPHA = 0)", "Figure 8. FCSPI master mode timing (CPHA = 1)"]
- `quality_flags`: []

### SEG-0041

- `physical_pages`: [41]
- `printed_pages`: ["41"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `content_types`: ["figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification. figures: Figure 9. FCSPI slave mode timing (CPHA = 0); Figure 10. FCSPI slave mode timing (CPHA = 1)"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FCSPI", "CPHA", "Y26M01"]
- `anchors`: ["Figure 9. FCSPI slave mode timing (CPHA = 0)", "Figure 10. FCSPI slave mode timing (CPHA = 1)"]
- `quality_flags`: []

### SEG-0042

- `physical_pages`: [42]
- `printed_pages`: ["42"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification. tables: Table 35. FCSPI 3V specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "FCSPI", "Y26M01", "SCK"]
- `anchors`: ["Table 35. FCSPI 3V specification"]
- `quality_flags`: []

### SEG-0043

- `physical_pages`: [43]
- `printed_pages`: ["43"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification. tables: Table 35. FCSPI 3V specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "SSI", "FCSPI", "Y26M01", "SCK", "MISO"]
- `anchors`: ["Table 35. FCSPI 3V specification (continued)"]
- `quality_flags`: []

### SEG-0044

- `physical_pages`: [44]
- `printed_pages`: ["44"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification. tables: Table 36. FCSPI 5V specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "FCSPI", "Y26M01", "SCK"]
- `anchors`: ["Table 36. FCSPI 5V specification"]
- `quality_flags`: []

### SEG-0045

- `physical_pages`: [45]
- `printed_pages`: ["45"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification. tables: Table 36. FCSPI 5V specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "SSI", "FCSPI", "Y26M01", "SCK", "MISO"]
- `anchors`: ["Table 36. FCSPI 5V specification (continued)"]
- `quality_flags`: []

### SEG-0046

- `physical_pages`: [46]
- `printed_pages`: ["46"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.3 FCSPI Pin Options"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.3 FCSPI Pin Options. tables: Table 37. FCSPI pin options"
- `keywords`: ["FC7300F8MDQ", "data sheet", "POR", "IO", "pad", "SSI", "FCSPI", "Y26M01", "FCSPI0", "FCSPI7", "SCK", "SIN"]
- `anchors`: ["Table 37. FCSPI pin options"]
- `quality_flags`: []

### SEG-0047

- `physical_pages`: [47]
- `printed_pages`: ["47"]
- `section_path`: "Chapter 8 Peripherals / 8.2 MSC Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.2 MSC Specification. headings: 1.3 V DD _ HV _ A; 1.9 V DD _ HV _ A; 1.6 V DD _ HV _ A figures: Figure 11. MSC timing tables: Table 38. MSC electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "MSC", "Y26M01", "FMSC", "FCLP", "SOP", "SDI"]
- `anchors`: ["Figure 11. MSC timing", "Table 38. MSC electrical specification", "1.3 V DD _ HV _ A", "1.9 V DD _ HV _ A", "1.6 V DD _ HV _ A"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0048

- `physical_pages`: [48]
- `printed_pages`: ["48"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.3 ENET Specification. figures: Figure 12. MII receive timing diagram; Figure 13. MII transmit timing diagram; Figure 14. RMII receive timing diagram"
- `keywords`: ["FC7300F8MDQ", "data sheet", "POR", "IO", "ENET", "MII", "RMII", "RGMII", "Y26M01", "MII2", "MII1", "MII3"]
- `anchors`: ["Figure 12. MII receive timing diagram", "Figure 13. MII transmit timing diagram", "Figure 14. RMII receive timing diagram"]
- `quality_flags`: []

### SEG-0049

- `physical_pages`: [49]
- `printed_pages`: ["49"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.3 ENET Specification. figures: Figure 15. RMII transmit timing diagram; Figure 16. RGMII receive timing diagram; Figure 17. RGMII transmit timing diagram"
- `keywords`: ["FC7300F8MDQ", "data sheet", "MII", "RMII", "RGMII", "Y26M01", "RMII8", "RMII7", "RMII6", "RMII5", "RMII_CLK", "TXD"]
- `anchors`: ["Figure 15. RMII transmit timing diagram", "Figure 16. RGMII receive timing diagram", "Figure 17. RGMII transmit timing diagram"]
- `quality_flags`: []

### SEG-0050

- `physical_pages`: [50]
- `printed_pages`: ["50"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["table"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.3 ENET Specification. tables: Table 39. MII/RMII electrical specification; Table 40. RGMII electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "MII", "RMII", "RGMII", "Y26M01", "MII1", "RXCLK", "MII2", "MII3", "RXD"]
- `anchors`: ["Table 39. MII/RMII electrical specification", "Table 40. RGMII electrical specification"]
- `quality_flags`: []

### SEG-0051

- `physical_pages`: [51]
- `printed_pages`: ["51"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.3 ENET Specification. figures: Figure 18. MDIO timing diagram tables: Table 41. MDIO electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "POR", "IO", "MDIO", "Y26M01", "MDC", "PHY", "MDC1", "MDC2", "MDC3", "MDC4"]
- `anchors`: ["Figure 18. MDIO timing diagram", "Table 41. MDIO electrical specification"]
- `quality_flags`: []

### SEG-0052

- `physical_pages`: [52]
- `printed_pages`: ["52"]
- `section_path`: "Chapter 8 Peripherals / 8.4 LU Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 8 Peripherals / 8.4 LU Specification. figures: Figure 19. LU timing tables: Table 42. LU electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "LU", "Y26M01", "SPI"]
- `anchors`: ["Figure 19. LU timing", "Table 42. LU electrical specification"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0053

- `physical_pages`: [53]
- `printed_pages`: ["53"]
- `section_path`: "Chapter 9 Debug Modules / 9.1 SWD Specification"
- `content_types`: ["table", "figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 9 Debug Modules / 9.1 SWD Specification. headings: Chapter 9 Debug Modules figures: Figure 20. SWD clock timing diagram; Figure 21. SWD data timing diagram tables: Table 43. SWD electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "POR", "IO", "SWD", "JTAG", "TPIU", "Y26M01", "SWD_CLK", "SCK", "SWD_DIO", "S10"]
- `anchors`: ["Chapter 9 Debug Modules", "Figure 20. SWD clock timing diagram", "Figure 21. SWD data timing diagram", "Table 43. SWD electrical specification"]
- `quality_flags`: []

### SEG-0054

- `physical_pages`: [54]
- `printed_pages`: ["54"]
- `section_path`: "Chapter 9 Debug Modules / 9.2 Trace Block"
- `content_types`: ["table", "figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 9 Debug Modules / 9.2 Trace Block. figures: Figure 22. Trace block timing diagram; Figure 23. JTAG clock timing diagram; Figure 24. Boundary timing diagram tables: Table 44. Trace block electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "pad", "JTAG", "Trace", "Y26M01", "TCLK"]
- `anchors`: ["Figure 22. Trace block timing diagram", "Table 44. Trace block electrical specification", "Figure 23. JTAG clock timing diagram", "Figure 24. Boundary timing diagram"]
- `quality_flags`: []

### SEG-0055

- `physical_pages`: [55]
- `printed_pages`: ["55"]
- `section_path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `content_types`: ["table", "figure", "timing_diagram"]
- `summary`: "Page belongs to Chapter 9 Debug Modules / 9.3 JTAG Interface. figures: Figure 25. JTAG TAP timing diagram tables: Table 45. JTAG electrical specification"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "JTAG", "Y26M01", "TAP", "TCLK", "J10", "TMS", "TDI", "J11", "J12"]
- `anchors`: ["Figure 25. JTAG TAP timing diagram", "Table 45. JTAG electrical specification"]
- `quality_flags`: []

### SEG-0056

- `physical_pages`: [56]
- `printed_pages`: ["56"]
- `section_path`: "Chapter 10 Package / 10.1 Thermal Data"
- `content_types`: ["table", "figure"]
- `summary`: "Page belongs to Chapter 10 Package / 10.1 Thermal Data. headings: Chapter 10 Package; 10.1 Thermal Data; 10.2 Package Dimensions figures: Figure 26. 320LFBGA package outline drawing tables: Table 46. Package thermal simulation data"
- `keywords`: ["FC7300F8MDQ", "data sheet", "IO", "LU", "Package", "320LFBGA", "thermal", "Y26M01", "PCB"]
- `anchors`: ["Chapter 10 Package", "10.1 Thermal Data", "Table 46. Package thermal simulation data", "10.2 Package Dimensions", "Figure 26. 320LFBGA package outline drawing"]
- `quality_flags`: []

### SEG-0057

- `physical_pages`: [57]
- `printed_pages`: ["57"]
- `section_path`: "Chapter 11 Pinout / 11.1 Pinout Diagrams"
- `content_types`: ["figure", "pinout_diagram"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.1 Pinout Diagrams. headings: Chapter 11 Pinout; 11.1 Pinout Diagrams; 11.2 Pin Definitions figures: Figure 27. 320LFBGA pinout (top view)"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_B", "IO", "pad", "LU", "Package", "320LFBGA", "pinout", "pin definitions", "Y26M01", "NOTE"]
- `anchors`: ["Chapter 11 Pinout", "11.1 Pinout Diagrams", "Figure 27. 320LFBGA pinout (top view)", "11.2 Pin Definitions"]
- `quality_flags`: []

### SEG-0058

- `physical_pages`: [58]
- `printed_pages`: ["58"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "V11", "V25", "VDDA", "VREFH", "VREFL", "IO", "ADC", "HSADC", "320LFBGA"]
- `anchors`: ["Table 47. FC7300F8MDQ pinout definition"]
- `quality_flags`: []

### SEG-0059

- `physical_pages`: [59]
- `printed_pages`: ["59"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "IO", "ADC", "CMP", "SSI", "320LFBGA", "pinout", "Y26M01", "PTI21", "ADC1_SE5"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0060

- `physical_pages`: [60]
- `printed_pages`: ["60"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "VDD_HV_B", "V11", "IO", "ADC", "320LFBGA", "pinout", "Y26M01", "PTB5", "DISABLED"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0061

- `physical_pages`: [61]
- `printed_pages`: ["61"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "VDDA", "VREFH", "VREFL", "IO", "ADC", "SDADC", "320LFBGA", "pinout", "Y26M01"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0062

- `physical_pages`: [62]
- `printed_pages`: ["62"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "V11", "IO", "ADC", "320LFBGA", "pinout", "Y26M01", "R19", "PTB25", "ADC3_SE7"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0063

- `physical_pages`: [63]
- `printed_pages`: ["63"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "IO", "ADC", "320LFBGA", "pinout", "Y26M01", "E20", "PTC25", "ADC3_SE19", "F19"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0064

- `physical_pages`: [64]
- `printed_pages`: ["64"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "V11", "IO", "ADC", "HSADC", "JTAG", "320LFBGA", "pinout", "Y26M01", "A14"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0065

- `physical_pages`: [65]
- `printed_pages`: ["65"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `content_types`: ["table", "pin_table"]
- `summary`: "Page belongs to Chapter 11 Pinout / 11.2 Pin Definitions. tables: Table 47. FC7300F8MDQ pinout definition"
- `keywords`: ["FC7300F8MDQ", "data sheet", "VDD_HV_A", "IO", "ADC", "HSADC", "SWD", "JTAG", "320LFBGA", "pinout", "Y26M01", "PTC5"]
- `anchors`: ["Table 46. FC7300F8MDQ pinout definition (continued)"]
- `quality_flags`: []

### SEG-0066

- `physical_pages`: [66]
- `printed_pages`: ["66"]
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["table", "revision_history"]
- `summary`: "Page belongs to Back Matter / Revision History. headings: Revision History; 3.2 Operation Condition tables: Internal table-like item: Revision History"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FOSC", "VDD_HV_A", "VDDA", "IO", "pad", "ADC", "SSI", "HSADC", "FCSPI", "LU"]
- `anchors`: ["Revision History", "3.2 Operation Condition"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0067

- `physical_pages`: [67]
- `printed_pages`: ["67"]
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["table", "revision_history"]
- `summary`: "Page belongs to Back Matter / Revision History. headings: 7.1.1 ADC Operation Specification; tables: Internal table-like item: Revision History"
- `keywords`: ["FC7300F8MDQ", "data sheet", "FIRC96M", "SIRC12M", "SIRC32k", "PLL", "V25", "LVR", "LVD", "HVD", "POR", "LDO"]
- `anchors`: ["7.1.1 ADC Operation Specification;", "Table 10. V25 LDO specification to Section 3.8 PMC Internal LDO."]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0068

- `physical_pages`: [68]
- `printed_pages`: ["68"]
- `section_path`: "Back Matter / Revision History"
- `content_types`: ["table", "revision_history"]
- `summary`: "Page belongs to Back Matter / Revision History. tables: Internal table-like item: Revision History"
- `keywords`: ["FC7300F8MDQ", "data sheet", "part number", "FOSC", "VDDA", "IO", "pad", "NVM", "ADC", "CMP", "HSADC", "FCSPI"]
- `anchors`: ["Revision"]
- `quality_flags`: ["private_use_glyphs_in_extracted_text"]

### SEG-0069

- `physical_pages`: [69]
- `printed_pages`: ["69"]
- `section_path`: "Back Matter / Copyright and Confidentiality Notice"
- `content_types`: ["legal_notice"]
- `summary`: "Copyright, confidentiality, trademark, and disclaimer notice."
- `keywords`: ["IO", "SSI", "Z104", "TEL", "ARM"]
- `anchors`: ["Copyright © 2026 Suzhou Flagchip Semiconductor Co., Ltd. All rights reserved."]
- `quality_flags`: []

## 6. Table Index
Numbered tables preserve source table numbers. Internal table-like items use generated stable IDs. `confidence` refers to caption/page localization, not full cell-grid reconstruction.

### TBL-0018-001

- `source_table_number`: "Table 1"
- `caption`: "Absolute maximum ratings1"
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: "Chapter 3 General / 3.1 Absolute Maximum Ratings"
- `caption_bbox_pdf`: [217.4, 185.8, 252.5, 211.5]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Max.", "Unit"]
- `summary`: "Lists absolute stress limits for chip supplies, input injection current, temperatures, and transient voltage."
- `anchor`: "Table 1. Absolute maximum ratings1"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0018-002

- `source_table_number`: "Table 2"
- `caption`: "Operating requirements"
- `physical_pages`: [18, 19]
- `printed_pages`: ["18", "19"]
- `section_path`: "Chapter 3 General / 3.2 Operation Condition"
- `caption_bbox_pdf`: [225.1, 610.1, 260.2, 635.8]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit"]
- `summary`: "Defines normal operating ranges and power sequencing requirements for supplies and references."
- `anchor`: "Table 2. Operating requirements"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0019-003

- `source_table_number`: "Table 3"
- `caption`: "Thermal operating condition"
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: "Chapter 3 General / 3.3 Thermal Operating Condition"
- `caption_bbox_pdf`: [215.0, 483.8, 250.1, 509.5]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists package thermal resistance simulation data for airflow and PCB conditions."
- `anchor`: "Table 3. Thermal operating condition"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0019-004

- `source_table_number`: "Table 4"
- `caption`: "Max. functional clock of modules"
- `physical_pages`: [19, 20, 21]
- `printed_pages`: ["19", "20", "21"]
- `section_path`: "Chapter 3 General / 3.4 Clock Operating Condition"
- `caption_bbox_pdf`: [206.0, 643.1, 241.1, 668.8]
- `page_region`: "bottom"
- `key_fields`: ["Module/Peripheral", "Max. Functional Clock (for STA)", "Notes"]
- `summary`: "Lists maximum functional clock rates for CPU/system, memory, clocking, safety, communication, timer, HMI, and analog modules."
- `anchor`: "Table 4. Max. functional clock of modules"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0021-005

- `source_table_number`: "Table 5"
- `caption`: "LVR/LVD/HVD and POR"
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"
- `caption_bbox_pdf`: [228.9, 532.7, 263.9, 558.4]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Defines power-on reset, low-voltage reset/detect, high-voltage detect, hysteresis, and bandgap thresholds."
- `anchor`: "Table 5. LVR/LVD/HVD and POR"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0022-006

- `source_table_number`: "Table 6"
- `caption`: "Power mode transition time"
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 General / 3.6 Power Mode Transition"
- `caption_bbox_pdf`: [216.6, 76.6, 251.7, 102.3]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit"]
- `summary`: "Indexes the source table captioned \"Power mode transition time\"."
- `anchor`: "Table 6. Power mode transition time"
- `confidence`: 0.93
- `quality_flags`: ["source_contains_TBD_values"]

### TBL-0022-007

- `source_table_number`: "Table 7"
- `caption`: "Internally maximum power consumption"
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 General / 3.7 Chip IDD"
- `caption_bbox_pdf`: [188.1, 379.4, 223.1, 405.1]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists current consumption entries; many values are marked TBD in the source document."
- `anchor`: "Table 7. Internally maximum power consumption"
- `confidence`: 0.93
- `quality_flags`: ["source_contains_TBD_values"]

### TBL-0022-008

- `source_table_number`: "Table 8"
- `caption`: "Chip RUN IDD"
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 General / 3.7 Chip IDD"
- `caption_bbox_pdf`: [249.0, 535.4, 284.1, 561.1]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists current consumption entries; many values are marked TBD in the source document."
- `anchor`: "Table 8. Chip RUN IDD"
- `confidence`: 0.93
- `quality_flags`: ["source_contains_TBD_values"]

### TBL-0023-009

- `source_table_number`: "Table 9"
- `caption`: "Chip low power IDD"
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 General / 3.7 Chip IDD"
- `caption_bbox_pdf`: [235.4, 32.9, 270.5, 58.6]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists current consumption entries; many values are marked TBD in the source document."
- `anchor`: "Table 9. Chip low power IDD"
- `confidence`: 0.93
- `quality_flags`: ["source_contains_TBD_values"]

### TBL-0023-010

- `source_table_number`: "Table 10"
- `caption`: "V25 LDO specification"
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 General / 3.8 PMC Internal LDO"
- `caption_bbox_pdf`: [228.3, 381.5, 268.6, 407.2]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"V25 LDO specification\"."
- `anchor`: "Table 10. V25 LDO specification"
- `confidence`: 0.93
- `quality_flags`: ["source_contains_TBD_values"]

### TBL-0023-011

- `source_table_number`: "Table 11"
- `caption`: "V11 RPM LDO specification"
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 General / 3.8 PMC Internal LDO"
- `caption_bbox_pdf`: [217.3, 504.3, 257.7, 530.0]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"V11 RPM LDO specification\"."
- `anchor`: "Table 11. V11 RPM LDO specification"
- `confidence`: 0.93
- `quality_flags`: ["source_contains_TBD_values"]

### TBL-0024-012

- `source_table_number`: "Table 12"
- `caption`: "ESD ratings"
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 General / 3.9 ESD Ratings"
- `caption_bbox_pdf`: [250.7, 76.6, 291.0, 102.3]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"ESD ratings\"."
- `anchor`: "Table 12. ESD ratings"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0025-013

- `source_table_number`: "Table 13"
- `caption`: "3V IO DC specification"
- `physical_pages`: [25, 26]
- `printed_pages`: ["25", "26"]
- `section_path`: "Chapter 4 I/O Parameter / 4.2 IO DC Specification"
- `caption_bbox_pdf`: [228.1, 437.5, 268.5, 463.1]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists IO pad electrical characteristics, drive strength, slew rate, pull currents, and/or timing."
- `anchor`: "Table 13. 3V IO DC specification"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0026-014

- `source_table_number`: "Table 14"
- `caption`: "5V IO DC specification"
- `physical_pages`: [26, 27]
- `printed_pages`: ["26", "27"]
- `section_path`: "Chapter 4 I/O Parameter / 4.2 IO DC Specification"
- `caption_bbox_pdf`: [228.1, 360.4, 268.5, 386.1]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists IO pad electrical characteristics, drive strength, slew rate, pull currents, and/or timing."
- `anchor`: "Table 14. 5V IO DC specification"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0027-015

- `source_table_number`: "Table 15"
- `caption`: "Maximum frequency of operation of pads"
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `caption_bbox_pdf`: [185.2, 437.9, 225.5, 463.6]
- `page_region`: "middle"
- `key_fields`: ["Pad Type", "Maximum Frequency of Operation"]
- `summary`: "Lists IO pad electrical characteristics, drive strength, slew rate, pull currents, and/or timing."
- `anchor`: "Table 15. Maximum frequency of operation of pads"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0027-016

- `source_table_number`: "Table 16"
- `caption`: "3V IO AC specification"
- `physical_pages`: [27, 28]
- `printed_pages`: ["27", "28"]
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `caption_bbox_pdf`: [228.4, 593.9, 268.7, 619.6]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "SRE", "DSE", "Rise time(ns)", "Fall time(ns)", "Delay_Fall", "Delay_Rise", "Capacitance (pF)"]
- `summary`: "Lists IO pad electrical characteristics, drive strength, slew rate, pull currents, and/or timing."
- `anchor`: "Table 16. 3V IO AC specification"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0028-017

- `source_table_number`: "Table 17"
- `caption`: "5V IO AC specification"
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: "Chapter 4 I/O Parameter / 4.3 IO AC Specification"
- `caption_bbox_pdf`: [228.4, 242.3, 268.7, 268.0]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "SRE", "DSE", "Rise time(ns)", "Fall time(ns)", "Delay_Fall", "Delay_Rise", "Capacitance (pF)"]
- `summary`: "Lists IO pad electrical characteristics, drive strength, slew rate, pull currents, and/or timing."
- `anchor`: "Table 17. 5V IO AC specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0029-018

- `source_table_number`: "Table 18"
- `caption`: "FOSC specification"
- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: "Chapter 5 Clock Specification / 5.1 FOSC Specification"
- `caption_bbox_pdf`: [234.9, 412.4, 275.2, 438.1]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists oscillator or PLL frequency, startup time, current consumption, lock/valid timing, and related notes."
- `anchor`: "Table 18. FOSC specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0030-019

- `source_table_number`: "Table 19"
- `caption`: "SOSC (32K) specification"
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: "Chapter 5 Clock Specification / 5.2 SOSC Specification"
- `caption_bbox_pdf`: [221.9, 93.5, 262.3, 119.2]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists oscillator or PLL frequency, startup time, current consumption, lock/valid timing, and related notes."
- `anchor`: "Table 19. SOSC (32K) specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0030-020

- `source_table_number`: "Table 20"
- `caption`: "FIRC96M specification"
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: "Chapter 5 Clock Specification / 5.3 FIRC96M Specification"
- `caption_bbox_pdf`: [227.4, 338.6, 267.8, 364.3]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists oscillator or PLL frequency, startup time, current consumption, lock/valid timing, and related notes."
- `anchor`: "Table 20. FIRC96M specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0030-021

- `source_table_number`: "Table 21"
- `caption`: "SIRC12M specification"
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: "Chapter 5 Clock Specification / 5.4 SIRC12M Specification"
- `caption_bbox_pdf`: [227.2, 602.0, 267.6, 627.7]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists oscillator or PLL frequency, startup time, current consumption, lock/valid timing, and related notes."
- `anchor`: "Table 21. SIRC12M specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0031-022

- `source_table_number`: "Table 22"
- `caption`: "SIRC32k specification"
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: "Chapter 5 Clock Specification / 5.5 SIRC32k Specification"
- `caption_bbox_pdf`: [228.4, 76.6, 268.7, 102.3]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists oscillator or PLL frequency, startup time, current consumption, lock/valid timing, and related notes."
- `anchor`: "Table 22. SIRC32k specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0031-023

- `source_table_number`: "Table 23"
- `caption`: "PLL0 and PLL1 specification"
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: "Chapter 5 Clock Specification / 5.6 PLL Specification"
- `caption_bbox_pdf`: [214.5, 339.7, 254.8, 365.3]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists oscillator or PLL frequency, startup time, current consumption, lock/valid timing, and related notes."
- `anchor`: "Table 23. PLL0 and PLL1 specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0032-024

- `source_table_number`: "Table 24"
- `caption`: "NVM retention specification"
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.1 NVM Retention"
- `caption_bbox_pdf`: [214.7, 112.1, 255.1, 137.8]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Condition", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists non-volatile memory endurance, retention, programming, erasing, or read timing information."
- `anchor`: "Table 24. NVM retention specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0032-025

- `source_table_number`: "Table 25"
- `caption`: "NVM program/erase time1"
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: "Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time"
- `caption_bbox_pdf`: [219.2, 340.1, 259.6, 365.8]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists non-volatile memory endurance, retention, programming, erasing, or read timing information."
- `anchor`: "Table 25. NVM program/erase time1"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0033-026

- `source_table_number`: "Table 26"
- `caption`: "ADC operation specification"
- `physical_pages`: [33]
- `printed_pages`: ["33"]
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"
- `caption_bbox_pdf`: [214.7, 185.8, 255.0, 211.5]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 26. ADC operation specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0034-027

- `source_table_number`: "Table 27"
- `caption`: "ADC sampling circuit specification"
- `physical_pages`: [34]
- `printed_pages`: ["34"]
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification"
- `caption_bbox_pdf`: [200.9, 254.8, 241.3, 280.5]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 27. ADC sampling circuit specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0035-028

- `source_table_number`: "Table 28"
- `caption`: "SDADC specification"
- `physical_pages`: [35]
- `printed_pages`: ["35"]
- `section_path`: "Chapter 7 Analog / 7.2 SDADC Specification"
- `caption_bbox_pdf`: [231.6, 93.5, 272.0, 119.2]
- `page_region`: "top"
- `key_fields`: ["Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 28. SDADC specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0036-029

- `source_table_number`: "Table 29"
- `caption`: "CMP specification"
- `physical_pages`: [36]
- `printed_pages`: ["36"]
- `section_path`: "Chapter 7 Analog / 7.3 CMP Specification"
- `caption_bbox_pdf`: [236.9, 76.6, 277.3, 102.3]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 29. CMP specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0036-030

- `source_table_number`: "Table 30"
- `caption`: "TMU_TV specification"
- `physical_pages`: [36, 37]
- `printed_pages`: ["36", "37"]
- `section_path`: "Chapter 7 Analog / 7.4 TMU Specification"
- `caption_bbox_pdf`: [228.5, 623.6, 268.9, 649.3]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 30. TMU_TV specification"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0037-031

- `source_table_number`: "Table 31"
- `caption`: "TMU_TF specification"
- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: "Chapter 7 Analog / 7.4 TMU Specification"
- `caption_bbox_pdf`: [228.6, 227.8, 269.0, 253.5]
- `page_region`: "middle"
- `key_fields`: ["Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 31. TMU_TF specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0037-032

- `source_table_number`: "Table 32"
- `caption`: "HRPWM specification"
- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: "Chapter 7 Analog / 7.5 HRPWM Specification"
- `caption_bbox_pdf`: [229.2, 456.9, 269.6, 482.6]
- `page_region`: "middle"
- `key_fields`: ["Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 32. HRPWM specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0037-033

- `source_table_number`: "Table 33"
- `caption`: "SSI specification"
- `physical_pages`: [37, 38]
- `printed_pages`: ["37", "38"]
- `section_path`: "Chapter 7 Analog / 7.6 SSI Specification"
- `caption_bbox_pdf`: [239.5, 668.6, 279.9, 694.3]
- `page_region`: "bottom"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 33. SSI specification"
- `confidence`: 0.93
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0038-034

- `source_table_number`: "Table 34"
- `caption`: "HSADC specification"
- `physical_pages`: [38]
- `printed_pages`: ["38"]
- `section_path`: "Chapter 7 Analog / 7.7 HSADC Specification"
- `caption_bbox_pdf`: [231.4, 250.0, 271.7, 275.7]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists analog or mixed-signal module electrical and timing characteristics."
- `anchor`: "Table 34. HSADC specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0042-035

- `source_table_number`: "Table 35"
- `caption`: "FCSPI 3V specification"
- `physical_pages`: [42, 43]
- `printed_pages`: ["42", "43"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification"
- `caption_bbox_pdf`: [227.3, 72.9, 267.6, 98.6]
- `page_region`: "top"
- `key_fields`: ["Number", "Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists FCSPI timing numbers for master/slave modes, pad types, voltage domains, and pin options."
- `anchor`: "Table 35. FCSPI 3V specification"
- `confidence`: 0.90
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0044-036

- `source_table_number`: "Table 36"
- `caption`: "FCSPI 5V specification"
- `physical_pages`: [44, 45]
- `printed_pages`: ["44", "45"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"
- `caption_bbox_pdf`: [227.3, 72.9, 267.6, 98.6]
- `page_region`: "top"
- `key_fields`: ["Number", "Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists FCSPI timing numbers for master/slave modes, pad types, voltage domains, and pin options."
- `anchor`: "Table 36. FCSPI 5V specification"
- `confidence`: 0.90
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0046-037

- `source_table_number`: "Table 37"
- `caption`: "FCSPI pin options"
- `physical_pages`: [46]
- `printed_pages`: ["46"]
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.3 FCSPI Pin Options"
- `caption_bbox_pdf`: [237.2, 163.6, 277.6, 189.3]
- `page_region`: "top"
- `key_fields`: ["Instance", "Function", "PCS", "SCK", "MISO", "MOSI"]
- `summary`: "Lists FCSPI timing numbers for master/slave modes, pad types, voltage domains, and pin options."
- `anchor`: "Table 37. FCSPI pin options"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0047-038

- `source_table_number`: "Table 38"
- `caption`: "MSC electrical specification"
- `physical_pages`: [47]
- `printed_pages`: ["47"]
- `section_path`: "Chapter 8 Peripherals / 8.2 MSC Specification"
- `caption_bbox_pdf`: [215.4, 380.8, 255.8, 406.5]
- `page_region`: "middle"
- `key_fields`: ["Number", "Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"MSC electrical specification\"."
- `anchor`: "Table 38. MSC electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0050-039

- `source_table_number`: "Table 39"
- `caption`: "MII/RMII electrical specification"
- `physical_pages`: [50]
- `printed_pages`: ["50"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [206.5, 32.9, 246.9, 58.6]
- `page_region`: "top"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists Ethernet interface timing or electrical specifications."
- `anchor`: "Table 39. MII/RMII electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0050-040

- `source_table_number`: "Table 40"
- `caption`: "RGMII electrical specification"
- `physical_pages`: [50]
- `printed_pages`: ["50"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [211.8, 423.2, 252.2, 448.9]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists Ethernet interface timing or electrical specifications."
- `anchor`: "Table 40. RGMII electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0051-041

- `source_table_number`: "Table 41"
- `caption`: "MDIO electrical specification"
- `physical_pages`: [51]
- `printed_pages`: ["51"]
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [213.0, 263.9, 253.4, 289.6]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Lists Ethernet interface timing or electrical specifications."
- `anchor`: "Table 41. MDIO electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0052-042

- `source_table_number`: "Table 42"
- `caption`: "LU electrical specification"
- `physical_pages`: [52]
- `printed_pages`: ["52"]
- `section_path`: "Chapter 8 Peripherals / 8.4 LU Specification"
- `caption_bbox_pdf`: [219.0, 296.1, 259.4, 321.8]
- `page_region`: "middle"
- `key_fields`: ["Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"LU electrical specification\"."
- `anchor`: "Table 42. LU electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0053-043

- `source_table_number`: "Table 43"
- `caption`: "SWD electrical specification"
- `physical_pages`: [53]
- `printed_pages`: ["53"]
- `section_path`: "Chapter 9 Debug Modules / 9.1 SWD Specification"
- `caption_bbox_pdf`: [214.8, 483.3, 255.2, 509.0]
- `page_region`: "middle"
- `key_fields`: ["Number", "Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"SWD electrical specification\"."
- `anchor`: "Table 43. SWD electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0054-044

- `source_table_number`: "Table 44"
- `caption`: "Trace block electrical specification"
- `physical_pages`: [54]
- `printed_pages`: ["54"]
- `section_path`: "Chapter 9 Debug Modules / 9.2 Trace Block"
- `caption_bbox_pdf`: [199.3, 195.7, 239.7, 221.3]
- `page_region`: "top"
- `key_fields`: ["Number", "Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"Trace block electrical specification\"."
- `anchor`: "Table 44. Trace block electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0055-045

- `source_table_number`: "Table 45"
- `caption`: "JTAG electrical specification"
- `physical_pages`: [55]
- `printed_pages`: ["55"]
- `section_path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `caption_bbox_pdf`: [213.5, 260.3, 253.9, 286.0]
- `page_region`: "middle"
- `key_fields`: ["Number", "Symbol", "Description", "Min.", "Typ.", "Max.", "Unit", "Notes"]
- `summary`: "Indexes the source table captioned \"JTAG electrical specification\"."
- `anchor`: "Table 45. JTAG electrical specification"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0056-046

- `source_table_number`: "Table 46"
- `caption`: "Package thermal simulation data"
- `physical_pages`: [56]
- `printed_pages`: ["56"]
- `section_path`: "Chapter 10 Package / 10.1 Thermal Data"
- `caption_bbox_pdf`: [202.7, 146.0, 243.1, 171.7]
- `page_region`: "top"
- `key_fields`: ["RθJA", "Airflow", "PCB Type", "Package", "Value", "Unit"]
- `summary`: "Lists package thermal resistance simulation data for airflow and PCB conditions."
- `anchor`: "Table 46. Package thermal simulation data"
- `confidence`: 0.93
- `quality_flags`: []

### TBL-0058-047

- `source_table_number`: "Table 47"
- `caption`: "FC7300F8MDQ pinout definition"
- `physical_pages`: [58, 59, 60, 61, 62, 63, 64, 65]
- `printed_pages`: ["58", "59", "60", "61", "62", "63", "64", "65"]
- `section_path`: "Chapter 11 Pinout / 11.2 Pin Definitions"
- `caption_bbox_pdf`: [205.7, 32.9, 246.1, 58.6]
- `page_region`: "top"
- `key_fields`: ["320LFBGA", "Pin Name", "Default Function"]
- `summary`: "Lists 320LFBGA pin names and default pin functions."
- `anchor`: "Table 47. FC7300F8MDQ pinout definition"
- `confidence`: 0.90
- `quality_flags`: ["table_spans_multiple_pages", "source_continuation_table_number_mismatch"]

### TBL-0066-REVHISTORY-001

- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0066-REVHISTORY-001"
- `caption`: "Revision History"
- `physical_pages`: [66, 67, 68]
- `printed_pages`: ["66", "67", "68"]
- `section_path`: "Back Matter / Revision History"
- `caption_bbox_pdf`: [212.3, 27.4, 382.9, 90.1]
- `page_region`: "top"
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Revision history table listing document revisions 0.1, 0.1.1, 0.1.2, 0.2, 0.3, and 0.4 with dates and technical/editorial changes."
- `anchor`: "Revision History"
- `confidence`: 0.91
- `quality_flags`: ["table_like_without_source_number", "revision_history_references_other_tables"]

## 7. Figure / Image Index
Only source-captioned figures are indexed here. Decorative, page-background, or non-captioned image objects are excluded. `confidence` refers to caption/page localization and semantic indexing.

### FIG-0008-001

- `source_figure_number`: "Figure 1"
- `caption`: "Ordering information"
- `physical_page`: 8
- `printed_page`: "8"
- `section_path`: "Chapter 1 Introduction / 1.1 Part Ordering"
- `caption_bbox_pdf`: [229.6, 221.6, 268.3, 247.3]
- `page_region`: "middle"
- `image_type`: "diagram"
- `semantic_description`: "Visual decoder for the FC7300F8MDQ part number fields, including branding, core type, core performance, memory type/size, functional safety level, package, pin count, temperature, and silicon revision."
- `keywords`: ["ordering"]
- `anchor`: "Figure 1. Ordering information"
- `confidence`: 0.92
- `quality_flags`: []

### FIG-0013-002

- `source_figure_number`: "Figure 2"
- `caption`: "FC7300F8MDQ block diagram"
- `physical_page`: 13
- `printed_page`: "13"
- `section_path`: "Chapter 2 Features / 2.1 Block Diagram"
- `caption_bbox_pdf`: [212.3, 196.7, 251.0, 222.4]
- `page_region`: "top"
- `image_type`: "diagram"
- `semantic_description`: "Product block diagram showing Cortex-M7 lockstep/split-lock cores, caches/TCM, PFlash/DFlash/SRAM, clocks, analog modules, communications, safety/security blocks, timers, GPIO/TRGSEL, package, and ASIL-D positioning."
- `keywords`: ["FC7300F8MDQ", "block diagram", "diagram"]
- `anchor`: "Figure 2. FC7300F8MDQ block diagram"
- `confidence`: 0.89
- `quality_flags`: ["diagram_internal_text_may_use_private_use_glyphs"]

### FIG-0025-003

- `source_figure_number`: "Figure 3"
- `caption`: "I/O structure"
- `physical_page`: 25
- `printed_page`: "25"
- `section_path`: "Chapter 4 I/O Parameter / 4.1 I/O Structure"
- `caption_bbox_pdf`: [248.8, 129.1, 287.5, 154.7]
- `page_region`: "top"
- `image_type`: "diagram"
- `semantic_description`: "Pad-level I/O structure diagram with output control, supply/ground rails, ESD/protection elements, and pad connection."
- `keywords`: ["I/O"]
- `anchor`: "Figure 3. I/O structure"
- `confidence`: 0.92
- `quality_flags`: []

### FIG-0029-004

- `source_figure_number`: "Figure 4"
- `caption`: "Crystal connection diagram"
- `physical_page`: 29
- `printed_page`: "29"
- `section_path`: "Chapter 5 Clock Specification / 5.1 FOSC Specification"
- `caption_bbox_pdf`: [215.9, 146.0, 254.6, 171.7]
- `page_region`: "top"
- `image_type`: "diagram"
- `semantic_description`: "External crystal/resonator connection for FOSC using EXTAL/XTAL, gain amplifier loop control, capacitors, ground nodes, and optional series resistor."
- `keywords`: ["crystal", "diagram"]
- `anchor`: "Figure 4. Crystal connection diagram"
- `confidence`: 0.89
- `quality_flags`: ["diagram_internal_text_may_use_private_use_glyphs"]

### FIG-0034-005

- `source_figure_number`: "Figure 5"
- `caption`: "ADC sampling circuit"
- `physical_page`: 34
- `printed_page`: "34"
- `section_path`: "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification"
- `caption_bbox_pdf`: [231.4, 428.7, 270.0, 454.4]
- `page_region`: "middle"
- `image_type`: "diagram"
- `semantic_description`: "ADC sampling equivalent circuit separating external source/filter network and internal ADC switch/capacitance network."
- `keywords`: ["ADC"]
- `anchor`: "Figure 5. ADC sampling circuit"
- `confidence`: 0.92
- `quality_flags`: []

### FIG-0039-006

- `source_figure_number`: "Figure 6"
- `caption`: "HSADC sampling circuit"
- `physical_page`: 39
- `printed_page`: "39"
- `section_path`: "Chapter 7 Analog / 7.7 HSADC Specification"
- `caption_bbox_pdf`: [225.1, 83.8, 263.8, 109.5]
- `page_region`: "top"
- `image_type`: "diagram"
- `semantic_description`: "HSADC sampling equivalent circuit including source impedance, filter resistance/capacitance, current limiter, channel selection, sampling switch, pin capacitance, and sampling capacitance."
- `keywords`: ["ADC", "HSADC"]
- `anchor`: "Figure 6. HSADC sampling circuit"
- `confidence`: 0.89
- `quality_flags`: ["diagram_internal_text_may_use_private_use_glyphs"]

### FIG-0040-007

- `source_figure_number`: "Figure 7"
- `caption`: "FCSPI master mode timing (CPHA = 0)"
- `physical_page`: 40
- `printed_page`: "40"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `caption_bbox_pdf`: [194.3, 196.7, 233.0, 222.4]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "SPI timing waveform for PCS, SCK, MISO, and MOSI signals under the specified master/slave and CPHA condition; numbered intervals map to FCSPI timing tables."
- `keywords`: ["FCSPI", "SPI", "CPHA", "timing"]
- `anchor`: "Figure 7. FCSPI master mode timing (CPHA = 0)"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0040-008

- `source_figure_number`: "Figure 8"
- `caption`: "FCSPI master mode timing (CPHA = 1)"
- `physical_page`: 40
- `printed_page`: "40"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `caption_bbox_pdf`: [194.3, 497.2, 233.0, 522.9]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "SPI timing waveform for PCS, SCK, MISO, and MOSI signals under the specified master/slave and CPHA condition; numbered intervals map to FCSPI timing tables."
- `keywords`: ["FCSPI", "SPI", "CPHA", "timing"]
- `anchor`: "Figure 8. FCSPI master mode timing (CPHA = 1)"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0041-009

- `source_figure_number`: "Figure 9"
- `caption`: "FCSPI slave mode timing (CPHA = 0)"
- `physical_page`: 41
- `printed_page`: "41"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `caption_bbox_pdf`: [198.4, 32.9, 237.1, 58.6]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "SPI timing waveform for PCS, SCK, MISO, and MOSI signals under the specified master/slave and CPHA condition; numbered intervals map to FCSPI timing tables."
- `keywords`: ["FCSPI", "SPI", "CPHA", "timing"]
- `anchor`: "Figure 9. FCSPI slave mode timing (CPHA = 0)"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0041-010

- `source_figure_number`: "Figure 10"
- `caption`: "FCSPI slave mode timing (CPHA = 1)"
- `physical_page`: 41
- `printed_page`: "41"
- `section_path`: "Chapter 8 Peripherals / 8.1 FCSPI Specification"
- `caption_bbox_pdf`: [195.7, 369.1, 239.7, 394.7]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "SPI timing waveform for PCS, SCK, MISO, and MOSI signals under the specified master/slave and CPHA condition; numbered intervals map to FCSPI timing tables."
- `keywords`: ["FCSPI", "SPI", "CPHA", "timing"]
- `anchor`: "Figure 10. FCSPI slave mode timing (CPHA = 1)"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0047-011

- `source_figure_number`: "Figure 11"
- `caption`: "MSC timing"
- `physical_page`: 47
- `printed_page`: "47"
- `section_path`: "Chapter 8 Peripherals / 8.2 MSC Specification"
- `caption_bbox_pdf`: [249.4, 76.6, 293.3, 102.3]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "MSC upstream/downstream timing waveform used by the MSC electrical specification table."
- `keywords`: ["MSC", "timing"]
- `anchor`: "Figure 11. MSC timing"
- `confidence`: 0.89
- `quality_flags`: ["diagram_internal_text_may_use_private_use_glyphs"]

### FIG-0048-012

- `source_figure_number`: "Figure 12"
- `caption`: "MII receive timing diagram"
- `physical_page`: 48
- `printed_page`: "48"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [215.4, 93.5, 259.4, 119.2]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MII", "timing", "diagram"]
- `anchor`: "Figure 12. MII receive timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0048-013

- `source_figure_number`: "Figure 13"
- `caption`: "MII transmit timing diagram"
- `physical_page`: 48
- `printed_page`: "48"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [212.3, 293.0, 256.3, 318.7]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MII", "timing", "diagram"]
- `anchor`: "Figure 13. MII transmit timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0048-014

- `source_figure_number`: "Figure 14"
- `caption`: "RMII receive timing diagram"
- `physical_page`: 48
- `printed_page`: "48"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [212.3, 487.4, 256.3, 513.1]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MII", "RMII", "timing", "diagram"]
- `anchor`: "Figure 14. RMII receive timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0049-015

- `source_figure_number`: "Figure 15"
- `caption`: "RMII transmit timing diagram"
- `physical_page`: 49
- `printed_page`: "49"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [209.2, 32.9, 253.1, 58.6]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MII", "RMII", "timing", "diagram"]
- `anchor`: "Figure 15. RMII transmit timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0049-016

- `source_figure_number`: "Figure 16"
- `caption`: "RGMII receive timing diagram"
- `physical_page`: 49
- `printed_page`: "49"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [209.1, 212.4, 253.0, 238.0]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MII", "RGMII", "timing", "diagram"]
- `anchor`: "Figure 16. RGMII receive timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0049-017

- `source_figure_number`: "Figure 17"
- `caption`: "RGMII transmit timing diagram"
- `physical_page`: 49
- `printed_page`: "49"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [206.0, 359.3, 250.0, 385.0]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MII", "RGMII", "timing", "diagram"]
- `anchor`: "Figure 17. RGMII transmit timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0051-018

- `source_figure_number`: "Figure 18"
- `caption`: "MDIO timing diagram"
- `physical_page`: 51
- `printed_page`: "51"
- `section_path`: "Chapter 8 Peripherals / 8.3 ENET Specification"
- `caption_bbox_pdf`: [227.3, 56.0, 271.3, 81.7]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Ethernet interface timing waveform showing clock/data/control timing for the named interface; used with ENET electrical specification tables."
- `keywords`: ["MDIO", "timing", "diagram"]
- `anchor`: "Figure 18. MDIO timing diagram"
- `confidence`: 0.92
- `quality_flags`: []

### FIG-0052-019

- `source_figure_number`: "Figure 19"
- `caption`: "LU timing"
- `physical_page`: 52
- `printed_page`: "52"
- `section_path`: "Chapter 8 Peripherals / 8.4 LU Specification"
- `caption_bbox_pdf`: [253.0, 76.6, 296.9, 102.3]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Logic Unit timing waveform used to define LU electrical timing parameters."
- `keywords`: ["LU", "timing"]
- `anchor`: "Figure 19. LU timing"
- `confidence`: 0.89
- `quality_flags`: ["diagram_internal_text_may_use_private_use_glyphs"]

### FIG-0053-020

- `source_figure_number`: "Figure 20"
- `caption`: "SWD clock timing diagram"
- `physical_page`: 53
- `printed_page`: "53"
- `section_path`: "Chapter 9 Debug Modules / 9.1 SWD Specification"
- `caption_bbox_pdf`: [216.5, 123.1, 260.5, 148.7]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Serial Wire Debug timing waveform for clock or data signals used by SWD electrical specification."
- `keywords`: ["SWD", "timing", "diagram"]
- `anchor`: "Figure 20. SWD clock timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0053-021

- `source_figure_number`: "Figure 21"
- `caption`: "SWD data timing diagram"
- `physical_page`: 53
- `printed_page`: "53"
- `section_path`: "Chapter 9 Debug Modules / 9.1 SWD Specification"
- `caption_bbox_pdf`: [218.1, 257.5, 262.0, 283.1]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "Serial Wire Debug timing waveform for clock or data signals used by SWD electrical specification."
- `keywords`: ["SWD", "timing", "diagram"]
- `anchor`: "Figure 21. SWD data timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0054-022

- `source_figure_number`: "Figure 22"
- `caption`: "Trace block timing diagram"
- `physical_page`: 54
- `printed_page`: "54"
- `section_path`: "Chapter 9 Debug Modules / 9.2 Trace Block"
- `caption_bbox_pdf`: [213.6, 53.7, 257.6, 79.4]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "Trace block timing waveform used by the trace electrical specification."
- `keywords`: ["Trace", "timing", "diagram"]
- `anchor`: "Figure 22. Trace block timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0054-023

- `source_figure_number`: "Figure 23"
- `caption`: "JTAG clock timing diagram"
- `physical_page`: 54
- `printed_page`: "54"
- `section_path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `caption_bbox_pdf`: [215.2, 440.2, 259.1, 465.9]
- `page_region`: "middle"
- `image_type`: "timing_diagram"
- `semantic_description`: "JTAG/TAP or boundary scan timing waveform used by JTAG electrical specification."
- `keywords`: ["JTAG", "timing", "diagram"]
- `anchor`: "Figure 23. JTAG clock timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0054-024

- `source_figure_number`: "Figure 24"
- `caption`: "Boundary timing diagram"
- `physical_page`: 54
- `printed_page`: "54"
- `section_path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `caption_bbox_pdf`: [217.6, 574.6, 261.5, 600.3]
- `page_region`: "bottom"
- `image_type`: "timing_diagram"
- `semantic_description`: "JTAG/TAP or boundary scan timing waveform used by JTAG electrical specification."
- `keywords`: ["timing", "diagram"]
- `anchor`: "Figure 24. Boundary timing diagram"
- `confidence`: 0.89
- `quality_flags`: ["multiple_figures_on_same_page"]

### FIG-0055-025

- `source_figure_number`: "Figure 25"
- `caption`: "JTAG TAP timing diagram"
- `physical_page`: 55
- `printed_page`: "55"
- `section_path`: "Chapter 9 Debug Modules / 9.3 JTAG Interface"
- `caption_bbox_pdf`: [218.2, 32.9, 262.1, 58.6]
- `page_region`: "top"
- `image_type`: "timing_diagram"
- `semantic_description`: "JTAG/TAP or boundary scan timing waveform used by JTAG electrical specification."
- `keywords`: ["JTAG", "TAP", "timing", "diagram"]
- `anchor`: "Figure 25. JTAG TAP timing diagram"
- `confidence`: 0.92
- `quality_flags`: []

### FIG-0056-026

- `source_figure_number`: "Figure 26"
- `caption`: "320LFBGA package outline drawing"
- `physical_page`: 56
- `printed_page`: "56"
- `section_path`: "Chapter 10 Package / 10.2 Package Dimensions"
- `caption_bbox_pdf`: [196.2, 305.7, 240.2, 331.4]
- `page_region`: "middle"
- `image_type`: "package_drawing"
- `semantic_description`: "Mechanical outline drawing of the 320LFBGA package, including package body, pitch, and dimensional callouts."
- `keywords`: ["package", "320LFBGA"]
- `anchor`: "Figure 26. 320LFBGA package outline drawing"
- `confidence`: 0.89
- `quality_flags`: ["large_visual_figure_bbox_approximate"]

### FIG-0057-027

- `source_figure_number`: "Figure 27"
- `caption`: "320LFBGA pinout (top view)"
- `physical_page`: 57
- `printed_page`: "57"
- `section_path`: "Chapter 11 Pinout / 11.1 Pinout Diagrams"
- `caption_bbox_pdf`: [212.9, 129.1, 256.9, 154.7]
- `page_region`: "top"
- `image_type`: "pinout_diagram"
- `semantic_description`: "Top-view 320LFBGA pinout map with pin grid coordinates, port pins, supply/reference pins, and highlighted IO/pad domains."
- `keywords`: ["320LFBGA", "pinout"]
- `anchor`: "Figure 27. 320LFBGA pinout (top view)"
- `confidence`: 0.89
- `quality_flags`: ["large_visual_figure_bbox_approximate"]

## 8. Term / API / Config / Requirement Index
This data sheet contains abbreviations and electrical/configuration-like parameters. No formal API declarations or SWS/REQ requirement IDs were detected.

### TERM-ADC

- `name`: "ADC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Analog-to-Digital Converter"
- `anchors`: [{"page": 9, "text": "ADC - Analog-to-Digital Converter"}]
- `aliases`: ["Analog-to-Digital Converter", "ADC"]

### TERM-AFCB

- `name`: "AFCB"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Advanced Flagchip Bus (APB Bridge)"
- `anchors`: [{"page": 9, "text": "AFCB - Advanced Flagchip Bus (APB Bridge)"}]
- `aliases`: ["Advanced Flagchip Bus (APB Bridge)", "AFCB"]

### TERM-AHB

- `name`: "AHB"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Advanced High-Performance Bus"
- `anchors`: [{"page": 9, "text": "AHB - Advanced High-Performance Bus"}]
- `aliases`: ["Advanced High-Performance Bus", "AHB"]

### TERM-AHBP

- `name`: "AHBP"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "AHB-Lite Peripheral"
- `anchors`: [{"page": 9, "text": "AHBP - AHB-Lite Peripheral"}]
- `aliases`: ["AHB-Lite Peripheral", "AHBP"]

### TERM-AHBS

- `name`: "AHBS"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "AHB-Lite Slave"
- `anchors`: [{"page": 9, "text": "AHBS - AHB-Lite Slave"}]
- `aliases`: ["AHB-Lite Slave", "AHBS"]

### TERM-AONTIMER

- `name`: "AONTIMER"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Always-on Timer"
- `anchors`: [{"page": 9, "text": "AONTIMER - Always-on Timer"}]
- `aliases`: ["Always-on Timer", "AONTIMER"]

### TERM-AP

- `name`: "AP"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Access Port"
- `anchors`: [{"page": 9, "text": "AP - Access Port"}]
- `aliases`: ["Access Port", "AP"]

### TERM-APB

- `name`: "APB"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Advanced Peripheral Bus"
- `anchors`: [{"page": 9, "text": "APB - Advanced Peripheral Bus"}]
- `aliases`: ["Advanced Peripheral Bus", "APB"]

### TERM-AXI

- `name`: "AXI"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Advanced eXtensible Interface"
- `anchors`: [{"page": 9, "text": "AXI - Advanced eXtensible Interface"}]
- `aliases`: ["Advanced eXtensible Interface", "AXI"]

### TERM-BGA

- `name`: "BGA"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Ball Grid Array"
- `anchors`: [{"page": 9, "text": "BGA - Ball Grid Array"}]
- `aliases`: ["Ball Grid Array", "BGA"]

### TERM-CGC

- `name`: "CGC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Clock Gating Control"
- `anchors`: [{"page": 9, "text": "CGC - Clock Gating Control"}]
- `aliases`: ["Clock Gating Control", "CGC"]

### TERM-CMU

- `name`: "CMU"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Clock Monitor Unit"
- `anchors`: [{"page": 9, "text": "CMU - Clock Monitor Unit"}]
- `aliases`: ["Clock Monitor Unit", "CMU"]

### TERM-CORDIC

- `name`: "CORDIC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Coordinate Rotation Digital Computer"
- `anchors`: [{"page": 9, "text": "CORDIC - Coordinate Rotation Digital Computer"}]
- `aliases`: ["Coordinate Rotation Digital Computer", "CORDIC"]

### TERM-CPOL

- `name`: "CPOL"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Clock Polarity"
- `anchors`: [{"page": 9, "text": "CPOL - Clock Polarity"}]
- `aliases`: ["Clock Polarity", "CPOL"]

### TERM-CPHA

- `name`: "CPHA"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Clock Phase"
- `anchors`: [{"page": 9, "text": "CPHA - Clock Phase"}]
- `aliases`: ["Clock Phase", "CPHA"]

### TERM-CRC

- `name`: "CRC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Cyclic Redundancy Check"
- `anchors`: [{"page": 9, "text": "CRC - Cyclic Redundancy Check"}]
- `aliases`: ["Cyclic Redundancy Check", "CRC"]

### TERM-CSC

- `name`: "CSC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "CPU System Control"
- `anchors`: [{"page": 9, "text": "CSC - CPU System Control"}]
- `aliases`: ["CPU System Control", "CSC"]

### TERM-CTI

- `name`: "CTI"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Cross Trigger Interface"
- `anchors`: [{"page": 9, "text": "CTI - Cross Trigger Interface"}]
- `aliases`: ["Cross Trigger Interface", "CTI"]

### TERM-CTR

- `name`: "CTR"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Counter"
- `anchors`: [{"page": 9, "text": "CTR - Counter"}]
- `aliases`: ["Counter", "CTR"]

### TERM-DAC

- `name`: "DAC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Digital-to-Analog Converter"
- `anchors`: [{"page": 9, "text": "DAC - Digital-to-Analog Converter"}]
- `aliases`: ["Digital-to-Analog Converter", "DAC"]

### TERM-DDR

- `name`: "DDR"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Double Data Rate"
- `anchors`: [{"page": 9, "text": "DDR - Double Data Rate"}]
- `aliases`: ["Double Data Rate", "DDR"]

### TERM-DMA

- `name`: "DMA"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Direct Memory Access"
- `anchors`: [{"page": 9, "text": "DMA - Direct Memory Access"}]
- `aliases`: ["Direct Memory Access", "DMA"]

### TERM-DP

- `name`: "DP"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Debug Port"
- `anchors`: [{"page": 9, "text": "DP - Debug Port"}]
- `aliases`: ["Debug Port", "DP"]

### TERM-DSP

- `name`: "DSP"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Digital Signal Processing"
- `anchors`: [{"page": 9, "text": "DSP - Digital Signal Processing"}]
- `aliases`: ["Digital Signal Processing", "DSP"]

### TERM-DTCM

- `name`: "DTCM"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Data Tightly-Coupled Memory"
- `anchors`: [{"page": 9, "text": "DTCM - Data Tightly-Coupled Memory"}]
- `aliases`: ["Data Tightly-Coupled Memory", "DTCM"]

### TERM-DWT

- `name`: "DWT"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Data Watchpoint and Trace"
- `anchors`: [{"page": 9, "text": "DWT - Data Watchpoint and Trace"}]
- `aliases`: ["Data Watchpoint and Trace", "DWT"]

### TERM-ECC

- `name`: "ECC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Error Correction Code"
- `anchors`: [{"page": 9, "text": "ECC - Error Correction Code"}]
- `aliases`: ["Error Correction Code", "ECC"]

### TERM-EFTU

- `name`: "eFTU"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Enhanced Flexible Timer Unit"
- `anchors`: [{"page": 9, "text": "eFTU - Enhanced Flexible Timer Unit"}]
- `aliases`: ["Enhanced Flexible Timer Unit", "eFTU"]

### TERM-EIM

- `name`: "EIM"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Error Injection Module"
- `anchors`: [{"page": 9, "text": "EIM - Error Injection Module"}]
- `aliases`: ["Error Injection Module", "EIM"]

### TERM-ERM

- `name`: "ERM"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Error Reporting Module"
- `anchors`: [{"page": 9, "text": "ERM - Error Reporting Module"}]
- `aliases`: ["Error Reporting Module", "ERM"]

### TERM-ESD

- `name`: "ESD"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Electrostatic Discharge"
- `anchors`: [{"page": 9, "text": "ESD - Electrostatic Discharge"}]
- `aliases`: ["Electrostatic Discharge", "ESD"]

### TERM-ETB

- `name`: "ETB"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Embedded Trace Buffer"
- `anchors`: [{"page": 9, "text": "ETB - Embedded Trace Buffer"}]
- `aliases`: ["Embedded Trace Buffer", "ETB"]

### TERM-ETM

- `name`: "ETM"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Embedded Trace Macro"
- `anchors`: [{"page": 9, "text": "ETM - Embedded Trace Macro"}]
- `aliases`: ["Embedded Trace Macro", "ETM"]

### TERM-EVITA

- `name`: "EVITA"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "E-safety Vehicle Intrusion Protected Applications"
- `anchors`: [{"page": 9, "text": "EVITA - E-safety Vehicle Intrusion Protected Applications"}]
- `aliases`: ["E-safety Vehicle Intrusion Protected Applications", "EVITA"]

### TERM-EVTG

- `name`: "EVTG"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Event Generator"
- `anchors`: [{"page": 9, "text": "EVTG - Event Generator"}]
- `aliases`: ["Event Generator", "EVTG"]

### TERM-FCIIC

- `name`: "FCIIC"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flagchip (FC) Inter-Integrated Circuit"
- `anchors`: [{"page": 9, "text": "FCIIC - Flagchip (FC) Inter-Integrated Circuit"}]
- `aliases`: ["Flagchip (FC) Inter-Integrated Circuit", "FCIIC"]

### TERM-FCPIT

- `name`: "FCPIT"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flagchip (FC) Programmable Interrupt Timer"
- `anchors`: [{"page": 9, "text": "FCPIT - Flagchip (FC) Programmable Interrupt Timer"}]
- `aliases`: ["Flagchip (FC) Programmable Interrupt Timer", "FCPIT"]

### TERM-FCSMU

- `name`: "FCSMU"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Fault Control and Safety Management Unit"
- `anchors`: [{"page": 9, "text": "FCSMU - Fault Control and Safety Management Unit"}]
- `aliases`: ["Fault Control and Safety Management Unit", "FCSMU"]

### TERM-FCSPI

- `name`: "FCSPI"
- `type`: "term"
- `primary_page`: 9
- `physical_pages`: [9]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flagchip (FC) Serial Peripheral Interface"
- `anchors`: [{"page": 9, "text": "FCSPI - Flagchip (FC) Serial Peripheral Interface"}]
- `aliases`: ["Flagchip (FC) Serial Peripheral Interface", "FCSPI"]

### TERM-FCUART

- `name`: "FCUART"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flagchip (FC) Universal Asynchronous Receiver/Transmitter"
- `anchors`: [{"page": 10, "text": "FCUART - Flagchip (FC) Universal Asynchronous Receiver/Transmitter"}]
- `aliases`: ["Flagchip (FC) Universal Asynchronous Receiver/Transmitter", "FCUART"]

### TERM-FF

- `name`: "FF"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flip-Flop"
- `anchors`: [{"page": 10, "text": "FF - Flip-Flop"}]
- `aliases`: ["Flip-Flop", "FF"]

### TERM-FIFO

- `name`: "FIFO"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "First In First Out"
- `anchors`: [{"page": 10, "text": "FIFO - First In First Out"}]
- `aliases`: ["First In First Out", "FIFO"]

### TERM-FIRC

- `name`: "FIRC"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Fast Internal Reference Clock"
- `anchors`: [{"page": 10, "text": "FIRC - Fast Internal Reference Clock"}]
- `aliases`: ["Fast Internal Reference Clock", "FIRC"]

### TERM-FLEXCAN

- `name`: "FLEXCAN"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "FLEX Controller Area Network"
- `anchors`: [{"page": 10, "text": "FLEXCAN - FLEX Controller Area Network"}]
- `aliases`: ["FLEX Controller Area Network", "FLEXCAN"]

### TERM-FMC

- `name`: "FMC"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flash Memory Controller"
- `anchors`: [{"page": 10, "text": "FMC - Flash Memory Controller"}]
- `aliases`: ["Flash Memory Controller", "FMC"]

### TERM-FOSC

- `name`: "FOSC"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Fast Oscillator"
- `anchors`: [{"page": 10, "text": "FOSC - Fast Oscillator"}]
- `aliases`: ["Fast Oscillator", "FOSC"]

### TERM-FPB

- `name`: "FPB"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flash Patch and Breakpoint"
- `anchors`: [{"page": 10, "text": "FPB - Flash Patch and Breakpoint"}]
- `aliases`: ["Flash Patch and Breakpoint", "FPB"]

### TERM-FPM

- `name`: "FPM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Full Performance Mode"
- `anchors`: [{"page": 10, "text": "FPM - Full Performance Mode"}]
- `aliases`: ["Full Performance Mode", "FPM"]

### TERM-FPU

- `name`: "FPU"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Floating Point Unit"
- `anchors`: [{"page": 10, "text": "FPU - Floating Point Unit"}]
- `aliases`: ["Floating Point Unit", "FPU"]

### TERM-FREQM

- `name`: "FREQM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Frequency Measurement"
- `anchors`: [{"page": 10, "text": "FREQM - Frequency Measurement"}]
- `aliases`: ["Frequency Measurement", "FREQM"]

### TERM-FSM

- `name`: "FSM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Finite State Machine"
- `anchors`: [{"page": 10, "text": "FSM - Finite State Machine"}]
- `aliases`: ["Finite State Machine", "FSM"]

### TERM-FTU

- `name`: "FTU"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Flexible Timer Unit"
- `anchors`: [{"page": 10, "text": "FTU - Flexible Timer Unit"}]
- `aliases`: ["Flexible Timer Unit", "FTU"]

### TERM-GPIO

- `name`: "GPIO"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "General-Purpose Input/Output"
- `anchors`: [{"page": 10, "text": "GPIO - General-Purpose Input/Output"}]
- `aliases`: ["General-Purpose Input/Output", "GPIO"]

### TERM-HMI

- `name`: "HMI"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Human-Machine Interface"
- `anchors`: [{"page": 10, "text": "HMI - Human-Machine Interface"}]
- `aliases`: ["Human-Machine Interface", "HMI"]

### TERM-HSADC

- `name`: "HSADC"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "High Speed Analog-to-Digital Converter"
- `anchors`: [{"page": 10, "text": "HSADC - High Speed Analog-to-Digital Converter"}]
- `aliases`: ["High Speed Analog-to-Digital Converter", "HSADC"]

### TERM-HSM

- `name`: "HSM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Hardware Secure Module"
- `anchors`: [{"page": 10, "text": "HSM - Hardware Secure Module"}]
- `aliases`: ["Hardware Secure Module", "HSM"]

### TERM-HRPWM

- `name`: "HRPWM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "High-resolution PWM"
- `anchors`: [{"page": 10, "text": "HRPWM - High-resolution PWM"}]
- `aliases`: ["High-resolution PWM", "HRPWM"]

### TERM-HVD

- `name`: "HVD"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "High-Voltage Detect"
- `anchors`: [{"page": 10, "text": "HVD - High-Voltage Detect"}]
- `aliases`: ["High-Voltage Detect", "HVD"]

### TERM-I2S

- `name`: "I2S"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Inter-IC Sound"
- `anchors`: [{"page": 10, "text": "I2S - Inter-IC Sound"}]
- `aliases`: ["Inter-IC Sound", "I2S"]

### TERM-IIC-I2C

- `name`: "IIC/I2C"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Inter-Integrated Circuit"
- `anchors`: [{"page": 10, "text": "IIC/I2C - Inter-Integrated Circuit"}]
- `aliases`: ["Inter-Integrated Circuit", "IIC or I2C"]

### TERM-INTM

- `name`: "INTM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Interrupt Monitor"
- `anchors`: [{"page": 10, "text": "INTM - Interrupt Monitor"}]
- `aliases`: ["Interrupt Monitor", "INTM"]

### TERM-IRC

- `name`: "IRC"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Internal Reference Cock"
- `anchors`: [{"page": 10, "text": "IRC - Internal Reference Cock"}]
- `aliases`: ["Internal Reference Cock", "IRC"]

### TERM-ISM

- `name`: "ISM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Interface Safety Monitor"
- `anchors`: [{"page": 10, "text": "ISM - Interface Safety Monitor"}]
- `aliases`: ["Interface Safety Monitor", "ISM"]

### TERM-ISP

- `name`: "ISP"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "In-System Program"
- `anchors`: [{"page": 10, "text": "ISP - In-System Program"}]
- `aliases`: ["In-System Program", "ISP"]

### TERM-ITCM

- `name`: "ITCM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Instruction Tightly-Coupled Memory"
- `anchors`: [{"page": 10, "text": "ITCM - Instruction Tightly-Coupled Memory"}]
- `aliases`: ["Instruction Tightly-Coupled Memory", "ITCM"]

### TERM-ITM

- `name`: "ITM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Instrumentation Trace Macrocell"
- `anchors`: [{"page": 10, "text": "ITM - Instrumentation Trace Macrocell"}]
- `aliases`: ["Instrumentation Trace Macrocell", "ITM"]

### TERM-LBIST

- `name`: "LBIST"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Logic Built-In Self-Test"
- `anchors`: [{"page": 10, "text": "LBIST - Logic Built-In Self-Test"}]
- `aliases`: ["Logic Built-In Self-Test", "LBIST"]

### TERM-LDO

- `name`: "LDO"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Low Dropout"
- `anchors`: [{"page": 10, "text": "LDO - Low Dropout"}]
- `aliases`: ["Low Dropout", "LDO"]

### TERM-LIN

- `name`: "LIN"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Local Interconnect Network"
- `anchors`: [{"page": 10, "text": "LIN - Local Interconnect Network"}]
- `aliases`: ["Local Interconnect Network", "LIN"]

### TERM-LQFP

- `name`: "LQFP"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Low-profile Quad Flat Package"
- `anchors`: [{"page": 10, "text": "LQFP - Low-profile Quad Flat Package"}]
- `aliases`: ["Low-profile Quad Flat Package", "LQFP"]

### TERM-LU

- `name`: "LU"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Logic Unit"
- `anchors`: [{"page": 10, "text": "LU - Logic Unit"}]
- `aliases`: ["Logic Unit", "LU"]

### TERM-LVD

- `name`: "LVD"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Low-Voltage Detect"
- `anchors`: [{"page": 10, "text": "LVD - Low-Voltage Detect"}]
- `aliases`: ["Low-Voltage Detect", "LVD"]

### TERM-LVR

- `name`: "LVR"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Low-Voltage Reset"
- `anchors`: [{"page": 10, "text": "LVR - Low-Voltage Reset"}]
- `aliases`: ["Low-Voltage Reset", "LVR"]

### TERM-MAM

- `name`: "MAM"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Matrix Access Monitor"
- `anchors`: [{"page": 10, "text": "MAM - Matrix Access Monitor"}]
- `aliases`: ["Matrix Access Monitor", "MAM"]

### TERM-MAP

- `name`: "MAP"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Memory Access Protection"
- `anchors`: [{"page": 10, "text": "MAP - Memory Access Protection"}]
- `aliases`: ["Memory Access Protection", "MAP"]

### TERM-MB

- `name`: "MB"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Mailbox"
- `anchors`: [{"page": 10, "text": "MB - Mailbox"}]
- `aliases`: ["Mailbox", "MB"]

### TERM-MBIST

- `name`: "MBIST"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Memory Built-In Self-Test"
- `anchors`: [{"page": 10, "text": "MBIST - Memory Built-In Self-Test"}]
- `aliases`: ["Memory Built-In Self-Test", "MBIST"]

### TERM-MDC

- `name`: "MDC"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Management Data Clock"
- `anchors`: [{"page": 10, "text": "MDC - Management Data Clock"}]
- `aliases`: ["Management Data Clock", "MDC"]

### TERM-MDIO

- `name`: "MDIO"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Management Data Input/Output"
- `anchors`: [{"page": 10, "text": "MDIO - Management Data Input/Output"}]
- `aliases`: ["Management Data Input/Output", "MDIO"]

### TERM-MII

- `name`: "MII"
- `type`: "term"
- `primary_page`: 10
- `physical_pages`: [10]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Media Independent Interface"
- `anchors`: [{"page": 10, "text": "MII - Media Independent Interface"}]
- `aliases`: ["Media Independent Interface", "MII"]

### TERM-MISO

- `name`: "MISO"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Master In Slave Out"
- `anchors`: [{"page": 11, "text": "MISO - Master In Slave Out"}]
- `aliases`: ["Master In Slave Out", "MISO"]

### TERM-MOSI

- `name`: "MOSI"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Master Out Slave In"
- `anchors`: [{"page": 11, "text": "MOSI - Master Out Slave In"}]
- `aliases`: ["Master Out Slave In", "MOSI"]

### TERM-MPU

- `name`: "MPU"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Memory Protection Unit"
- `anchors`: [{"page": 11, "text": "MPU - Memory Protection Unit"}]
- `aliases`: ["Memory Protection Unit", "MPU"]

### TERM-MSC

- `name`: "MSC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Micro Second Channel"
- `anchors`: [{"page": 11, "text": "MSC - Micro Second Channel"}]
- `aliases`: ["Micro Second Channel", "MSC"]

### TERM-NMI

- `name`: "NMI"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Non-maskable Interrupt"
- `anchors`: [{"page": 11, "text": "NMI - Non-maskable Interrupt"}]
- `aliases`: ["Non-maskable Interrupt", "NMI"]

### TERM-NVIC

- `name`: "NVIC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Nested Vectored Interrupt Controller"
- `anchors`: [{"page": 11, "text": "NVIC - Nested Vectored Interrupt Controller"}]
- `aliases`: ["Nested Vectored Interrupt Controller", "NVIC"]

### TERM-NVM

- `name`: "NVM"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Non-volatile Memory"
- `anchors`: [{"page": 11, "text": "NVM - Non-volatile Memory"}]
- `aliases`: ["Non-volatile Memory", "NVM"]

### TERM-OSC

- `name`: "OSC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Oscillator"
- `anchors`: [{"page": 11, "text": "OSC - Oscillator"}]
- `aliases`: ["Oscillator", "OSC"]

### TERM-PCC

- `name`: "PCC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Peripheral Configuration Controller"
- `anchors`: [{"page": 11, "text": "PCC - Peripheral Configuration Controller"}]
- `aliases`: ["Peripheral Configuration Controller", "PCC"]

### TERM-PLL

- `name`: "PLL"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Phase-Locked Loop"
- `anchors`: [{"page": 11, "text": "PLL - Phase-Locked Loop"}]
- `aliases`: ["Phase-Locked Loop", "PLL"]

### TERM-PMC

- `name`: "PMC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Power Management Controller"
- `anchors`: [{"page": 11, "text": "PMC - Power Management Controller"}]
- `aliases`: ["Power Management Controller", "PMC"]

### TERM-POR

- `name`: "POR"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Power-on Reset"
- `anchors`: [{"page": 11, "text": "POR - Power-on Reset"}]
- `aliases`: ["Power-on Reset", "POR"]

### TERM-PWM

- `name`: "PWM"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Pulse Width Modulation"
- `anchors`: [{"page": 11, "text": "PWM - Pulse Width Modulation"}]
- `aliases`: ["Pulse Width Modulation", "PWM"]

### TERM-QDT

- `name`: "QDT"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Quadrature Decode Timer"
- `anchors`: [{"page": 11, "text": "QDT - Quadrature Decode Timer"}]
- `aliases`: ["Quadrature Decode Timer", "QDT"]

### TERM-RGM

- `name`: "RGM"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Reset Generation Module"
- `anchors`: [{"page": 11, "text": "RGM - Reset Generation Module"}]
- `aliases`: ["Reset Generation Module", "RGM"]

### TERM-RMII

- `name`: "RMII"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Reduced Media Independent Interface"
- `anchors`: [{"page": 11, "text": "RMII - Reduced Media Independent Interface"}]
- `aliases`: ["Reduced Media Independent Interface", "RMII"]

### TERM-RPM

- `name`: "RPM"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Reduce Power Mode"
- `anchors`: [{"page": 11, "text": "RPM - Reduce Power Mode"}]
- `aliases`: ["Reduce Power Mode", "RPM"]

### TERM-RSA

- `name`: "RSA"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Rivest–Shamir–Adleman"
- `anchors`: [{"page": 11, "text": "RSA - Rivest–Shamir–Adleman"}]
- `aliases`: ["Rivest–Shamir–Adleman", "RSA"]

### TERM-RTC

- `name`: "RTC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Real-Time Clock"
- `anchors`: [{"page": 11, "text": "RTC - Real-Time Clock"}]
- `aliases`: ["Real-Time Clock", "RTC"]

### TERM-SAR

- `name`: "SAR"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Successive Approximation"
- `anchors`: [{"page": 11, "text": "SAR - Successive Approximation"}]
- `aliases`: ["Successive Approximation", "SAR"]

### TERM-SCG

- `name`: "SCG"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "System Clock Generator"
- `anchors`: [{"page": 11, "text": "SCG - System Clock Generator"}]
- `aliases`: ["System Clock Generator", "SCG"]

### TERM-SCM

- `name`: "SCM"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "System Control Module"
- `anchors`: [{"page": 11, "text": "SCM - System Control Module"}]
- `aliases`: ["System Control Module", "SCM"]

### TERM-SDADC

- `name`: "SDADC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Sigma Delta Analog-to-Digital Converter"
- `anchors`: [{"page": 11, "text": "SDADC - Sigma Delta Analog-to-Digital Converter"}]
- `aliases`: ["Sigma Delta Analog-to-Digital Converter", "SDADC"]

### TERM-SDR

- `name`: "SDR"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Single Data Rate"
- `anchors`: [{"page": 11, "text": "SDR - Single Data Rate"}]
- `aliases`: ["Single Data Rate", "SDR"]

### TERM-SEC

- `name`: "SEC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Security Controller"
- `anchors`: [{"page": 11, "text": "SEC - Security Controller"}]
- `aliases`: ["Security Controller", "SEC"]

### TERM-SECDED

- `name`: "SECDED"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Single-bit Error Correction and Double-bit Error Detection"
- `anchors`: [{"page": 11, "text": "SECDED - Single-bit Error Correction and Double-bit Error Detection"}]
- `aliases`: ["Single-bit Error Correction and Double-bit Error Detection", "SECDED"]

### TERM-SEMA

- `name`: "SEMA"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Semaphore"
- `anchors`: [{"page": 11, "text": "SEMA - Semaphore"}]
- `aliases`: ["Semaphore", "SEMA"]

### TERM-SENT

- `name`: "SENT"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Single Edge Nibble Transmission"
- `anchors`: [{"page": 11, "text": "SENT - Single Edge Nibble Transmission"}]
- `aliases`: ["Single Edge Nibble Transmission", "SENT"]

### TERM-SIRC

- `name`: "SIRC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Slow Internal Reference Clock"
- `anchors`: [{"page": 11, "text": "SIRC - Slow Internal Reference Clock"}]
- `aliases`: ["Slow Internal Reference Clock", "SIRC"]

### TERM-SMC

- `name`: "SMC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "System Mode Controller"
- `anchors`: [{"page": 11, "text": "SMC - System Mode Controller"}]
- `aliases`: ["System Mode Controller", "SMC"]

### TERM-SOSC

- `name`: "SOSC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Slow Oscillator"
- `anchors`: [{"page": 11, "text": "SOSC - Slow Oscillator"}]
- `aliases`: ["Slow Oscillator", "SOSC"]

### TERM-SPC

- `name`: "SPC"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Short PWM Code"
- `anchors`: [{"page": 11, "text": "SPC - Short PWM Code"}]
- `aliases`: ["Short PWM Code", "SPC"]

### TERM-SPI

- `name`: "SPI"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Serial Peripheral Interface"
- `anchors`: [{"page": 11, "text": "SPI - Serial Peripheral Interface"}]
- `aliases`: ["Serial Peripheral Interface", "SPI"]

### TERM-SSI

- `name`: "SSI"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Speed and Sensor Interface"
- `anchors`: [{"page": 11, "text": "SSI - Speed and Sensor Interface"}]
- `aliases`: ["Speed and Sensor Interface", "SSI"]

### TERM-STCU

- `name`: "STCU"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Safety Test and Control Unit"
- `anchors`: [{"page": 11, "text": "STCU - Safety Test and Control Unit"}]
- `aliases`: ["Safety Test and Control Unit", "STCU"]

### TERM-SWD

- `name`: "SWD"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Serial Wire Debug"
- `anchors`: [{"page": 11, "text": "SWD - Serial Wire Debug"}]
- `aliases`: ["Serial Wire Debug", "SWD"]

### TERM-TAP

- `name`: "TAP"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Test Access Port"
- `anchors`: [{"page": 11, "text": "TAP - Test Access Port"}]
- `aliases`: ["Test Access Port", "TAP"]

### TERM-TMU

- `name`: "TMU"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Temperature Monitor Unit"
- `anchors`: [{"page": 11, "text": "TMU - Temperature Monitor Unit"}]
- `aliases`: ["Temperature Monitor Unit", "TMU"]

### TERM-TPIU

- `name`: "TPIU"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Trace Port Interface Unit"
- `anchors`: [{"page": 11, "text": "TPIU - Trace Port Interface Unit"}]
- `aliases`: ["Trace Port Interface Unit", "TPIU"]

### TERM-TRGSEL

- `name`: "TRGSEL"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Trigger Select"
- `anchors`: [{"page": 11, "text": "TRGSEL - Trigger Select"}]
- `aliases`: ["Trigger Select", "TRGSEL"]

### TERM-TSN

- `name`: "TSN"
- `type`: "term"
- `primary_page`: 11
- `physical_pages`: [11]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Time-Sensitive Networking"
- `anchors`: [{"page": 11, "text": "TSN - Time-Sensitive Networking"}]
- `aliases`: ["Time-Sensitive Networking", "TSN"]

### TERM-TSTMP

- `name`: "TSTMP"
- `type`: "term"
- `primary_page`: 12
- `physical_pages`: [12]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Timer Stamp"
- `anchors`: [{"page": 12, "text": "TSTMP - Timer Stamp"}]
- `aliases`: ["Timer Stamp", "TSTMP"]

### TERM-UART

- `name`: "UART"
- `type`: "term"
- `primary_page`: 12
- `physical_pages`: [12]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Universal Asynchronous Receiver and Transmitter"
- `anchors`: [{"page": 12, "text": "UART - Universal Asynchronous Receiver and Transmitter"}]
- `aliases`: ["Universal Asynchronous Receiver and Transmitter", "UART"]

### TERM-VCO

- `name`: "VCO"
- `type`: "term"
- `primary_page`: 12
- `physical_pages`: [12]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Voltage-Controlled Oscillator"
- `anchors`: [{"page": 12, "text": "VCO - Voltage-Controlled Oscillator"}]
- `aliases`: ["Voltage-Controlled Oscillator", "VCO"]

### TERM-WDOG

- `name`: "WDOG"
- `type`: "term"
- `primary_page`: 12
- `physical_pages`: [12]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Watchdog"
- `anchors`: [{"page": 12, "text": "WDOG - Watchdog"}]
- `aliases`: ["Watchdog", "WDOG"]

### TERM-WKU

- `name`: "WKU"
- `type`: "term"
- `primary_page`: 12
- `physical_pages`: [12]
- `section_paths`: ["Chapter 1 Introduction / 1.2 Abbreviations"]
- `brief`: "Wake-up Unit"
- `anchors`: [{"page": 12, "text": "WKU - Wake-up Unit"}]
- `aliases`: ["Wake-up Unit", "WKU"]

### SYM-FC7300F8MDQ

- `name`: "FC7300F8MDQ"
- `type`: "device"
- `primary_page`: 1
- `physical_pages`: [1, 8, 13]
- `section_paths`: ["Chapter 1 Introduction / 1.1 Part Ordering / 1.1.1 Orderable Part Number", "Chapter 2 Features / 2.1 Block Diagram", "Front Matter / Cover"]
- `brief`: "Flagchip automotive microcontroller covered by this data sheet."
- `anchors`: [{"page": 1, "text": "FC7300F8MDQ"}, {"page": 8, "text": "FC7300F8MDQ"}, {"page": 13, "text": "FC7300F8MDQ"}]
- `aliases`: ["FC7300F8MDQ", "fc7300f8mdq"]

### SYM-DS-FC7300F8MDQ-V0-4-Y26M01

- `name`: "DS-FC7300F8MDQ-V0.4-Y26M01"
- `type`: "document_id"
- `primary_page`: 2
- `physical_pages`: [2]
- `section_paths`: ["Front Matter / Table of Contents"]
- `brief`: "Document identifier printed in the footer."
- `anchors`: [{"page": 2, "text": "DS-FC7300F8MDQ-V0.4-Y26M01"}]
- `aliases`: ["DS-FC7300F8MDQ-V0.4-Y26M01", "ds-fc7300f8mdq-v0.4-y26m01"]

### SYM-REV-0-4

- `name`: "Rev. 0.4"
- `type`: "document_revision"
- `primary_page`: 1
- `physical_pages`: [1, 66]
- `section_paths`: ["Back Matter / Revision History", "Front Matter / Cover"]
- `brief`: "Document revision shown on cover and revision history."
- `anchors`: [{"page": 1, "text": "Rev. 0.4"}, {"page": 66, "text": "Rev. 0.4"}]
- `aliases`: ["Rev. 0.4", "rev. 0.4"]

### SYM-VDD-HV-A

- `name`: "VDD_HV_A"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19, 21, 23, 57, 58]
- `section_paths`: ["Chapter 11 Pinout / 11.1 Pinout Diagrams", "Chapter 11 Pinout / 11.2 Pin Definitions", "Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements", "Chapter 3 General / 3.8 PMC Internal LDO"]
- `brief`: "3.0 V - 5.5 V input supply and high-voltage supply domain; appears in maximum/operating ratings and pinout."
- `anchors`: [{"page": 18, "text": "VDD_HV_A"}, {"page": 19, "text": "VDD_HV_A"}, {"page": 21, "text": "VDD_HV_A"}, {"page": 23, "text": "VDD_HV_A"}]
- `aliases`: ["VDD HV A", "vdd_hv_a"]

### SYM-VDD-HV-B

- `name`: "VDD_HV_B"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19, 57]
- `section_paths`: ["Chapter 11 Pinout / 11.1 Pinout Diagrams", "Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition"]
- `brief`: "3.0 V - 5.5 V input supply and independent IO domain noted in pinout."
- `anchors`: [{"page": 18, "text": "VDD_HV_B"}, {"page": 19, "text": "VDD_HV_B"}, {"page": 57, "text": "VDD_HV_B"}]
- `aliases`: ["VDD HV B", "vdd_hv_b"]

### SYM-VDDA

- `name`: "VDDA"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19, 33, 36, 38, 58]
- `section_paths`: ["Chapter 11 Pinout / 11.2 Pin Definitions", "Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification", "Chapter 7 Analog / 7.3 CMP Specification", "Chapter 7 Analog / 7.6 SSI Specification"]
- `brief`: "Analog supply voltage; tied to ADC/CMP/HSADC reference requirements."
- `anchors`: [{"page": 18, "text": "VDDA"}, {"page": 19, "text": "VDDA"}, {"page": 33, "text": "VDDA"}, {"page": 36, "text": "VDDA"}]
- `aliases`: ["VDDA", "vdda"]

### SYM-VREFH

- `name`: "VREFH"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19, 33, 38, 58]
- `section_paths`: ["Chapter 11 Pinout / 11.2 Pin Definitions", "Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification", "Chapter 7 Analog / 7.6 SSI Specification"]
- `brief`: "ADC/HSADC high reference voltage."
- `anchors`: [{"page": 18, "text": "VREFH"}, {"page": 19, "text": "VREFH"}, {"page": 33, "text": "VREFH"}, {"page": 38, "text": "VREFH"}]
- `aliases`: ["VREFH", "vrefh"]

### SYM-VREFL

- `name`: "VREFL"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19, 33, 38, 58]
- `section_paths`: ["Chapter 11 Pinout / 11.2 Pin Definitions", "Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification", "Chapter 7 Analog / 7.6 SSI Specification"]
- `brief`: "ADC/HSADC low reference voltage."
- `anchors`: [{"page": 18, "text": "VREFL"}, {"page": 19, "text": "VREFL"}, {"page": 33, "text": "VREFL"}, {"page": 38, "text": "VREFL"}]
- `aliases`: ["VREFL", "vrefl"]

### SYM-V11

- `name`: "V11"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19, 23, 57, 58]
- `section_paths`: ["Chapter 11 Pinout / 11.1 Pinout Diagrams", "Chapter 11 Pinout / 11.2 Pin Definitions", "Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 3 General / 3.8 PMC Internal LDO"]
- `brief`: "Core supply voltage / V11 domain; can be external supply or controller output."
- `anchors`: [{"page": 18, "text": "V11"}, {"page": 19, "text": "V11"}, {"page": 23, "text": "V11"}, {"page": 57, "text": "V11"}]
- `aliases`: ["V11", "v11"]

### SYM-V25

- `name`: "V25"
- `type`: "electrical_parameter"
- `primary_page`: 19
- `physical_pages`: [19, 23, 58]
- `section_paths`: ["Chapter 11 Pinout / 11.2 Pin Definitions", "Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 3 General / 3.8 PMC Internal LDO"]
- `brief`: "V25 regulator output/supply for PLL, OSC, FIRC, and Flash."
- `anchors`: [{"page": 19, "text": "V25"}, {"page": 23, "text": "V25"}, {"page": 58, "text": "V25"}]
- `aliases`: ["V25", "v25"]

### SYM-VPOR

- `name`: "VPOR"
- `type`: "electrical_parameter"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"]
- `brief`: "POR re-arm voltage threshold."
- `anchors`: [{"page": 21, "text": "VPOR"}]
- `aliases`: ["VPOR", "vpor"]

### SYM-VLVR-VDD-HV

- `name`: "VLVR_VDD_HV"
- `type`: "electrical_parameter"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"]
- `brief`: "Low-voltage reset threshold on VDD_HV_A/B."
- `anchors`: [{"page": 21, "text": "VLVR_VDD_HV"}]
- `aliases`: ["VLVR VDD HV", "vlvr_vdd_hv"]

### SYM-VHVD-VDD-HV

- `name`: "VHVD_VDD_HV"
- `type`: "electrical_parameter"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"]
- `brief`: "High-voltage detect threshold on VDD_HV_A/B."
- `anchors`: [{"page": 21, "text": "VHVD_VDD_HV"}]
- `aliases`: ["VHVD VDD HV", "vhvd_vdd_hv"]

### SYM-VLVD-VDD-HV

- `name`: "VLVD_VDD_HV"
- `type`: "electrical_parameter"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"]
- `brief`: "Low-voltage detect threshold on VDD_HV_A."
- `anchors`: [{"page": 21, "text": "VLVD_VDD_HV"}]
- `aliases`: ["VLVD VDD HV", "vlvd_vdd_hv"]

### SYM-VLVR-V11

- `name`: "VLVR_V11"
- `type`: "electrical_parameter"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"]
- `brief`: "Low-voltage reset threshold on V11 and V11 LDO."
- `anchors`: [{"page": 21, "text": "VLVR_V11"}]
- `aliases`: ["VLVR V11", "vlvr_v11"]

### SYM-VHVD-V11

- `name`: "VHVD_V11"
- `type`: "electrical_parameter"
- `primary_page`: 21
- `physical_pages`: [21]
- `section_paths`: ["Chapter 3 General / 3.5 LVR, LVD, HVD, and POR Operating Requirements"]
- `brief`: "High-voltage detect threshold on V11 and V11 LDO."
- `anchors`: [{"page": 21, "text": "VHVD_V11"}]
- `aliases`: ["VHVD V11", "vhvd_v11"]

### SYM-TA

- `name`: "TA"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18, 19]
- `section_paths`: ["Chapter 3 General / 3.1 Absolute Maximum Ratings", "Chapter 3 General / 3.3 Thermal Operating Condition"]
- `brief`: "Ambient temperature range."
- `anchors`: [{"page": 18, "text": "TA"}, {"page": 19, "text": "TA"}]
- `aliases`: ["TA", "ta"]

### SYM-TJ

- `name`: "TJ"
- `type`: "electrical_parameter"
- `primary_page`: 19
- `physical_pages`: [19, 36, 37]
- `section_paths`: ["Chapter 3 General / 3.3 Thermal Operating Condition", "Chapter 7 Analog / 7.3 CMP Specification", "Chapter 7 Analog / 7.5 HRPWM Specification"]
- `brief`: "Junction temperature range and TMU measurement target."
- `anchors`: [{"page": 19, "text": "TJ"}, {"page": 36, "text": "TJ"}, {"page": 37, "text": "TJ"}]
- `aliases`: ["TJ", "tj"]

### SYM-TSTG

- `name`: "TSTG"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18]
- `section_paths`: ["Chapter 3 General / 3.1 Absolute Maximum Ratings"]
- `brief`: "Storage temperature limit."
- `anchors`: [{"page": 18, "text": "TSTG"}]
- `aliases`: ["TSTG", "tstg"]

### SYM-IINJPAD-DC-ABS

- `name`: "IINJPAD_DC_ABS"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18]
- `section_paths`: ["Chapter 3 General / 3.1 Absolute Maximum Ratings"]
- `brief`: "Absolute continuous DC input injection current limit for one I/O pin."
- `anchors`: [{"page": 18, "text": "IINJPAD_DC_ABS"}]
- `aliases`: ["IINJPAD DC ABS", "iinjpad_dc_abs"]

### SYM-IINJSUM-DC-ABS

- `name`: "IINJSUM_DC_ABS"
- `type`: "electrical_parameter"
- `primary_page`: 18
- `physical_pages`: [18]
- `section_paths`: ["Chapter 3 General / 3.1 Absolute Maximum Ratings"]
- `brief`: "Absolute sum of injected currents across pins."
- `anchors`: [{"page": 18, "text": "IINJSUM_DC_ABS"}]
- `aliases`: ["IINJSUM DC ABS", "iinjsum_dc_abs"]

### SYM-IINJPAD-DC-OP

- `name`: "IINJPAD_DC_OP"
- `type`: "electrical_parameter"
- `primary_page`: 19
- `physical_pages`: [19]
- `section_paths`: ["Chapter 3 General / 3.3 Thermal Operating Condition"]
- `brief`: "Operating continuous DC input injection current for one I/O pin."
- `anchors`: [{"page": 19, "text": "IINJPAD_DC_OP"}]
- `aliases`: ["IINJPAD DC OP", "iinjpad_dc_op"]

### SYM-IINJSUM-DC-OP

- `name`: "IINJSUM_DC_OP"
- `type`: "electrical_parameter"
- `primary_page`: 19
- `physical_pages`: [19]
- `section_paths`: ["Chapter 3 General / 3.3 Thermal Operating Condition"]
- `brief`: "Operating total DC injection current across all I/O pins."
- `anchors`: [{"page": 19, "text": "IINJSUM_DC_OP"}]
- `aliases`: ["IINJSUM DC OP", "iinjsum_dc_op"]

### SYM-TPOR

- `name`: "tPOR"
- `type`: "timing_parameter"
- `primary_page`: 22
- `physical_pages`: [22]
- `section_paths`: ["Chapter 3 General / 3.6 Power Mode Transition"]
- `brief`: "Power-on reset to first instruction timing; marked TBD."
- `anchors`: [{"page": 22, "text": "tPOR"}]
- `aliases`: ["tPOR", "tpor"]

### SYM-TSTBTOR

- `name`: "tSTBtoR"
- `type`: "timing_parameter"
- `primary_page`: 22
- `physical_pages`: [22]
- `section_paths`: ["Chapter 3 General / 3.6 Power Mode Transition"]
- `brief`: "Standby-to-RUN transition timing; marked TBD."
- `anchors`: [{"page": 22, "text": "tSTBtoR"}]
- `aliases`: ["tSTBtoR", "tstbtor"]

### SYM-TSTTOR

- `name`: "tSTtoR"
- `type`: "timing_parameter"
- `primary_page`: 22
- `physical_pages`: [22]
- `section_paths`: ["Chapter 3 General / 3.6 Power Mode Transition"]
- `brief`: "STOP-to-RUN transition timing; marked TBD."
- `anchors`: [{"page": 22, "text": "tSTtoR"}]
- `aliases`: ["tSTtoR", "tsttor"]

### SYM-IDD-ACTIVE

- `name`: "Idd_active"
- `type`: "current_parameter"
- `primary_page`: 22
- `physical_pages`: [22]
- `section_paths`: ["Chapter 3 General / 3.6 Power Mode Transition"]
- `brief`: "RUN-mode active current; values marked TBD."
- `anchors`: [{"page": 22, "text": "Idd_active"}]
- `aliases`: ["Idd active", "idd_active"]

### SYM-IDD-STOP

- `name`: "Idd_stop"
- `type`: "current_parameter"
- `primary_page`: 23
- `physical_pages`: [23]
- `section_paths`: ["Chapter 3 General / 3.8 PMC Internal LDO"]
- `brief`: "STOP-mode current; values marked TBD."
- `anchors`: [{"page": 23, "text": "Idd_stop"}]
- `aliases`: ["Idd stop", "idd_stop"]

### SYM-IDD-STANDBY

- `name`: "Idd_standby"
- `type`: "current_parameter"
- `primary_page`: 23
- `physical_pages`: [23]
- `section_paths`: ["Chapter 3 General / 3.8 PMC Internal LDO"]
- `brief`: "Standby-mode current; values marked TBD."
- `anchors`: [{"page": 23, "text": "Idd_standby"}]
- `aliases`: ["Idd standby", "idd_standby"]

### SYM-FOSC

- `name`: "fosc"
- `type`: "clock_parameter"
- `primary_page`: 29
- `physical_pages`: [29]
- `section_paths`: ["Chapter 5 Clock Specification / 5.1 FOSC Specification"]
- `brief`: "FOSC crystal/resonator frequency parameter."
- `anchors`: [{"page": 29, "text": "fosc"}]
- `aliases`: ["fosc", "fosc"]

### SYM-GMCRIT

- `name`: "gmcrit"
- `type`: "clock_parameter"
- `primary_page`: 29
- `physical_pages`: [29]
- `section_paths`: ["Chapter 5 Clock Specification / 5.1 FOSC Specification"]
- `brief`: "Minimum transconductance needed to maintain oscillation in the FOSC loop."
- `anchors`: [{"page": 29, "text": "gmcrit"}]
- `aliases`: ["gmcrit", "gmcrit"]

### SYM-FOSC32K

- `name`: "fosc32k"
- `type`: "clock_parameter"
- `primary_page`: 30
- `physical_pages`: [30]
- `section_paths`: ["Chapter 5 Clock Specification / 5.2 SOSC Specification"]
- `brief`: "SOSC 32.768 kHz oscillator frequency parameter."
- `anchors`: [{"page": 30, "text": "fosc32k"}]
- `aliases`: ["fosc32k", "fosc32k"]

### SYM-FFIRC96M

- `name`: "ffirc96m"
- `type`: "clock_parameter"
- `primary_page`: 30
- `physical_pages`: [30]
- `section_paths`: ["Chapter 5 Clock Specification / 5.2 SOSC Specification"]
- `brief`: "FIRC96M clock frequency range parameter."
- `anchors`: [{"page": 30, "text": "ffirc96m"}]
- `aliases`: ["ffirc96m", "ffirc96m"]

### SYM-FSIRC12M

- `name`: "fsirc12m"
- `type`: "clock_parameter"
- `primary_page`: 30
- `physical_pages`: [30]
- `section_paths`: ["Chapter 5 Clock Specification / 5.2 SOSC Specification"]
- `brief`: "SIRC12M clock frequency parameter."
- `anchors`: [{"page": 30, "text": "fsirc12m"}]
- `aliases`: ["fsirc12m", "fsirc12m"]

### SYM-FSIRC32K

- `name`: "fsirc32k"
- `type`: "clock_parameter"
- `primary_page`: 31
- `physical_pages`: [31]
- `section_paths`: ["Chapter 5 Clock Specification / 5.5 SIRC32k Specification"]
- `brief`: "SIRC32k clock frequency parameter."
- `anchors`: [{"page": 31, "text": "fsirc32k"}]
- `aliases`: ["fsirc32k", "fsirc32k"]

### SYM-FPLL-REF

- `name`: "fpll_ref"
- `type`: "clock_parameter"
- `primary_page`: 31
- `physical_pages`: [31]
- `section_paths`: ["Chapter 5 Clock Specification / 5.5 SIRC32k Specification"]
- `brief`: "PLL reference frequency after pre-divider."
- `anchors`: [{"page": 31, "text": "fpll_ref"}]
- `aliases`: ["fpll ref", "fpll_ref"]

### SYM-FPLL-OUT

- `name`: "fpll_out"
- `type`: "clock_parameter"
- `primary_page`: 31
- `physical_pages`: [31]
- `section_paths`: ["Chapter 5 Clock Specification / 5.5 SIRC32k Specification"]
- `brief`: "PLL VCO output frequency."
- `anchors`: [{"page": 31, "text": "fpll_out"}]
- `aliases`: ["fpll out", "fpll_out"]

### SYM-TLOCK

- `name`: "Tlock"
- `type`: "clock_parameter"
- `primary_page`: 31
- `physical_pages`: [31]
- `section_paths`: ["Chapter 5 Clock Specification / 5.5 SIRC32k Specification"]
- `brief`: "PLL valid assertion time."
- `anchors`: [{"page": 31, "text": "Tlock"}]
- `aliases`: ["Tlock", "tlock"]

### SYM-P-E-CYCLES

- `name`: "P/E cycles"
- `type`: "nvm_parameter"
- `primary_page`: 32
- `physical_pages`: [32]
- `section_paths`: ["Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time"]
- `brief`: "Program/erase cycle endurance term in NVM retention table."
- `anchors`: [{"page": 32, "text": "P/E cycles"}]
- `aliases`: ["P/E cycles", "p/e cycles"]

### SYM-DATA-RETENTION

- `name`: "Data Retention"
- `type`: "nvm_parameter"
- `primary_page`: 32
- `physical_pages`: [32]
- `section_paths`: ["Chapter 6 Non-Volatile Memory (NVM) / 6.2 NVM Program/Erase Time"]
- `brief`: "NVM retention duration by P/E cycle condition."
- `anchors`: [{"page": 32, "text": "Data Retention"}]
- `aliases`: ["Data Retention", "data retention"]

### SYM-VHBM

- `name`: "VHBM"
- `type`: "esd_parameter"
- `primary_page`: 24
- `physical_pages`: [24]
- `section_paths`: ["Chapter 3 General / 3.9 ESD Ratings"]
- `brief`: "Human body model ESD voltage rating."
- `anchors`: [{"page": 24, "text": "VHBM"}]
- `aliases`: ["VHBM", "vhbm"]

### SYM-VCDM

- `name`: "VCDM"
- `type`: "esd_parameter"
- `primary_page`: 24
- `physical_pages`: [24]
- `section_paths`: ["Chapter 3 General / 3.9 ESD Ratings"]
- `brief`: "Charged-device model ESD voltage rating."
- `anchors`: [{"page": 24, "text": "VCDM"}]
- `aliases`: ["VCDM", "vcdm"]

### SYM-ILAT

- `name`: "ILAT"
- `type`: "esd_parameter"
- `primary_page`: 24
- `physical_pages`: [24]
- `section_paths`: ["Chapter 3 General / 3.9 ESD Ratings"]
- `brief`: "Latch-up current at 125 °C ambient."
- `anchors`: [{"page": 24, "text": "ILAT"}]
- `aliases`: ["ILAT", "ilat"]

### SYM-VIH

- `name`: "VIH"
- `type`: "io_parameter"
- `primary_page`: 25
- `physical_pages`: [25, 26]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.1 I/O Structure", "Chapter 4 I/O Parameter / 4.2 IO DC Specification"]
- `brief`: "Input high voltage threshold for 3V/5V IO."
- `anchors`: [{"page": 25, "text": "VIH"}, {"page": 26, "text": "VIH"}]
- `aliases`: ["VIH", "vih"]

### SYM-VIL

- `name`: "VIL"
- `type`: "io_parameter"
- `primary_page`: 25
- `physical_pages`: [25, 26]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.1 I/O Structure", "Chapter 4 I/O Parameter / 4.2 IO DC Specification"]
- `brief`: "Input low voltage threshold for 3V/5V IO."
- `anchors`: [{"page": 25, "text": "VIL"}, {"page": 26, "text": "VIL"}]
- `aliases`: ["VIL", "vil"]

### SYM-VHYS

- `name`: "VHYS"
- `type`: "io_parameter"
- `primary_page`: 25
- `physical_pages`: [25, 26]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.1 I/O Structure", "Chapter 4 I/O Parameter / 4.2 IO DC Specification"]
- `brief`: "Input hysteresis parameter."
- `anchors`: [{"page": 25, "text": "VHYS"}, {"page": 26, "text": "VHYS"}]
- `aliases`: ["VHYS", "vhys"]

### SYM-IPU

- `name`: "IPU"
- `type`: "io_parameter"
- `primary_page`: 26
- `physical_pages`: [26, 27]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.2 IO DC Specification", "Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Internal pullup current."
- `anchors`: [{"page": 26, "text": "IPU"}, {"page": 27, "text": "IPU"}]
- `aliases`: ["IPU", "ipu"]

### SYM-IPD

- `name`: "IPD"
- `type`: "io_parameter"
- `primary_page`: 26
- `physical_pages`: [26, 27]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.2 IO DC Specification", "Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Internal pulldown current."
- `anchors`: [{"page": 26, "text": "IPD"}, {"page": 27, "text": "IPD"}]
- `aliases`: ["IPD", "ipd"]

### SYM-SRE

- `name`: "SRE"
- `type`: "io_parameter"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Slew Rate Enable setting used in IO AC timing tables."
- `anchors`: [{"page": 27, "text": "SRE"}, {"page": 28, "text": "SRE"}]
- `aliases`: ["SRE", "sre"]

### SYM-DSE

- `name`: "DSE"
- `type`: "io_parameter"
- `primary_page`: 25
- `physical_pages`: [25, 27, 28]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.1 I/O Structure", "Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Driver Strength Enable setting used for IO and FCSPI pad timing."
- `anchors`: [{"page": 25, "text": "DSE"}, {"page": 27, "text": "DSE"}, {"page": 28, "text": "DSE"}]
- `aliases`: ["DSE", "dse"]

### SYM-TRFNORMAL

- `name`: "tRFnormal"
- `type`: "io_timing_parameter"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Normal pad rise/fall timing symbol."
- `anchors`: [{"page": 27, "text": "tRFnormal"}, {"page": 28, "text": "tRFnormal"}]
- `aliases`: ["tRFnormal", "trfnormal"]

### SYM-TRFFAST

- `name`: "tRFfast"
- `type`: "io_timing_parameter"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Fast pad rise/fall timing symbol."
- `anchors`: [{"page": 27, "text": "tRFfast"}, {"page": 28, "text": "tRFfast"}]
- `aliases`: ["tRFfast", "trffast"]

### SYM-TRFUFAST

- `name`: "tRFufast"
- `type`: "io_timing_parameter"
- `primary_page`: 28
- `physical_pages`: [28]
- `section_paths`: ["Chapter 4 I/O Parameter / 4.3 IO AC Specification"]
- `brief`: "Ultra-fast pad rise/fall timing symbol."
- `anchors`: [{"page": 28, "text": "tRFufast"}]
- `aliases`: ["tRFufast", "trfufast"]

### SYM-TUE

- `name`: "TUE"
- `type`: "adc_parameter"
- `primary_page`: 33
- `physical_pages`: [33, 38]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification", "Chapter 7 Analog / 7.6 SSI Specification"]
- `brief`: "Total unadjusted error in ADC/HSADC tables."
- `anchors`: [{"page": 33, "text": "TUE"}, {"page": 38, "text": "TUE"}]
- `aliases`: ["TUE", "tue"]

### SYM-ENOB

- `name`: "ENOB"
- `type`: "adc_parameter"
- `primary_page`: 33
- `physical_pages`: [33]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"]
- `brief`: "Effective number of bits for SAR ADC."
- `anchors`: [{"page": 33, "text": "ENOB"}]
- `aliases`: ["ENOB", "enob"]

### SYM-FADCK

- `name`: "FADCK"
- `type`: "adc_parameter"
- `primary_page`: 33
- `physical_pages`: [33]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"]
- `brief`: "ADC conversion clock frequency."
- `anchors`: [{"page": 33, "text": "FADCK"}]
- `aliases`: ["FADCK", "fadck"]

### SYM-TSMP

- `name`: "Tsmp"
- `type`: "adc_parameter"
- `primary_page`: 33
- `physical_pages`: [33]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"]
- `brief`: "ADC sample time."
- `anchors`: [{"page": 33, "text": "Tsmp"}]
- `aliases`: ["Tsmp", "tsmp"]

### SYM-CSMP

- `name`: "Csmp"
- `type`: "adc_parameter"
- `primary_page`: 33
- `physical_pages`: [33]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.1 ADC Operation Specification"]
- `brief`: "ADC sample cycles."
- `anchors`: [{"page": 33, "text": "Csmp"}]
- `aliases`: ["Csmp", "csmp"]

### SYM-CS

- `name`: "CS"
- `type`: "adc_parameter"
- `primary_page`: 34
- `physical_pages`: [34, 38]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification", "Chapter 7 Analog / 7.6 SSI Specification"]
- `brief`: "Sampling capacitance in ADC/HSADC sampling circuits."
- `anchors`: [{"page": 34, "text": "CS"}, {"page": 38, "text": "CS"}]
- `aliases`: ["CS", "cs"]

### SYM-RSA

- `name`: "RSA"
- `type`: "adc_parameter"
- `primary_page`: 34
- `physical_pages`: [34]
- `section_paths`: ["Chapter 7 Analog / 7.1 12-bit SAR ADC / 7.1.2 ADC Sampling Circuit Specification"]
- `brief`: "ADC sampling switch impedance."
- `anchors`: [{"page": 34, "text": "RSA"}]
- `aliases`: ["RSA", "rsa"]

### SYM-RSW

- `name`: "RSW"
- `type`: "hsadc_parameter"
- `primary_page`: 38
- `physical_pages`: [38, 39]
- `section_paths`: ["Chapter 7 Analog / 7.6 SSI Specification", "Chapter 7 Analog / 7.7 HSADC Specification"]
- `brief`: "HSADC channel selection switch impedance."
- `anchors`: [{"page": 38, "text": "RSW"}, {"page": 39, "text": "RSW"}]
- `aliases`: ["RSW", "rsw"]

### SYM-RAD

- `name`: "RAD"
- `type`: "hsadc_parameter"
- `primary_page`: 38
- `physical_pages`: [38, 39]
- `section_paths`: ["Chapter 7 Analog / 7.6 SSI Specification", "Chapter 7 Analog / 7.7 HSADC Specification"]
- `brief`: "HSADC sampling switch impedance."
- `anchors`: [{"page": 38, "text": "RAD"}, {"page": 39, "text": "RAD"}]
- `aliases`: ["RAD", "rad"]

### SYM-SNR

- `name`: "SNR"
- `type`: "analog_parameter"
- `primary_page`: 35
- `physical_pages`: [35, 38]
- `section_paths`: ["Chapter 7 Analog / 7.2 SDADC Specification", "Chapter 7 Analog / 7.6 SSI Specification"]
- `brief`: "Signal-to-noise ratio in SDADC/HSADC specifications."
- `anchors`: [{"page": 35, "text": "SNR"}, {"page": 38, "text": "SNR"}]
- `aliases`: ["SNR", "snr"]

### SYM-SFDR

- `name`: "SFDR"
- `type`: "analog_parameter"
- `primary_page`: 35
- `physical_pages`: [35]
- `section_paths`: ["Chapter 7 Analog / 7.2 SDADC Specification"]
- `brief`: "Spurious-free dynamic range parameter for SDADC."
- `anchors`: [{"page": 35, "text": "SFDR"}]
- `aliases`: ["SFDR", "sfdr"]

### SYM-TMU-TV-ACC1

- `name`: "TMU_TV_ACC1"
- `type`: "tmu_parameter"
- `primary_page`: 36
- `physical_pages`: [36]
- `section_paths`: ["Chapter 7 Analog / 7.3 CMP Specification"]
- `brief`: "TMU temperature voltage accuracy for 100 °C < TJ <= 150 °C."
- `anchors`: [{"page": 36, "text": "TMU_TV_ACC1"}]
- `aliases`: ["TMU TV ACC1", "tmu_tv_acc1"]

### SYM-TMU-TV-ACC2

- `name`: "TMU_TV_ACC2"
- `type`: "tmu_parameter"
- `primary_page`: 36
- `physical_pages`: [36]
- `section_paths`: ["Chapter 7 Analog / 7.3 CMP Specification"]
- `brief`: "TMU temperature voltage accuracy for -40 °C < TJ <= 100 °C."
- `anchors`: [{"page": 36, "text": "TMU_TV_ACC2"}]
- `aliases`: ["TMU TV ACC2", "tmu_tv_acc2"]

### SYM-TF-125

- `name`: "TF_125"
- `type`: "tmu_parameter"
- `primary_page`: 37
- `physical_pages`: [37]
- `section_paths`: ["Chapter 7 Analog / 7.5 HRPWM Specification"]
- `brief`: "TMU temperature flag threshold at 125 °C."
- `anchors`: [{"page": 37, "text": "TF_125"}]
- `aliases`: ["TF 125", "tf_125"]

### SYM-TF-150

- `name`: "TF_150"
- `type`: "tmu_parameter"
- `primary_page`: 37
- `physical_pages`: [37]
- `section_paths`: ["Chapter 7 Analog / 7.5 HRPWM Specification"]
- `brief`: "TMU temperature flag threshold at 150 °C."
- `anchors`: [{"page": 37, "text": "TF_150"}]
- `aliases`: ["TF 150", "tf_150"]

### SYM-FOP

- `name`: "fop"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI frequency of operation timing symbol."
- `anchors`: [{"page": 42, "text": "fop"}, {"page": 43, "text": "fop"}, {"page": 44, "text": "fop"}, {"page": 45, "text": "fop"}]
- `aliases`: ["fop", "fop"]

### SYM-TSCK

- `name`: "tsck"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI SCK period timing symbol."
- `anchors`: [{"page": 42, "text": "tsck"}, {"page": 43, "text": "tsck"}, {"page": 44, "text": "tsck"}, {"page": 45, "text": "tsck"}]
- `aliases`: ["tsck", "tsck"]

### SYM-TLEAD

- `name`: "tLead"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI enable lead time."
- `anchors`: [{"page": 42, "text": "tLead"}, {"page": 43, "text": "tLead"}, {"page": 44, "text": "tLead"}, {"page": 45, "text": "tLead"}]
- `aliases`: ["tLead", "tlead"]

### SYM-TLAG

- `name`: "tLag"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI enable lag time."
- `anchors`: [{"page": 42, "text": "tLag"}, {"page": 43, "text": "tLag"}, {"page": 44, "text": "tLag"}, {"page": 45, "text": "tLag"}]
- `aliases`: ["tLag", "tlag"]

### SYM-TSU

- `name`: "tSU"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI setup time symbol."
- `anchors`: [{"page": 42, "text": "tSU"}, {"page": 43, "text": "tSU"}, {"page": 44, "text": "tSU"}, {"page": 45, "text": "tSU"}]
- `aliases`: ["tSU", "tsu"]

### SYM-THI

- `name`: "tHI"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI hold time symbol."
- `anchors`: [{"page": 42, "text": "tHI"}, {"page": 43, "text": "tHI"}, {"page": 44, "text": "tHI"}, {"page": 45, "text": "tHI"}]
- `aliases`: ["tHI", "thi"]

### SYM-THO

- `name`: "tHO"
- `type`: "timing_parameter"
- `primary_page`: 42
- `physical_pages`: [42, 43, 44, 45]
- `section_paths`: ["Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.1 FCSPI 3V Specification", "Chapter 8 Peripherals / 8.1 FCSPI Specification / 8.1.2 FCSPI 5V Specification"]
- `brief`: "FCSPI output hold time symbol."
- `anchors`: [{"page": 42, "text": "tHO"}, {"page": 43, "text": "tHO"}, {"page": 44, "text": "tHO"}, {"page": 45, "text": "tHO"}]
- `aliases`: ["tHO", "tho"]

### SYM-R-JA

- `name`: "RθJA"
- `type`: "thermal_parameter"
- `primary_page`: 56
- `physical_pages`: [56]
- `section_paths`: ["Chapter 10 Package / 10.1 Thermal Data"]
- `brief`: "Junction-to-ambient thermal resistance parameter."
- `anchors`: [{"page": 56, "text": "RθJA"}]
- `aliases`: ["RθJA", "rθja"]

### SYM-320LFBGA

- `name`: "320LFBGA"
- `type`: "package"
- `primary_page`: 56
- `physical_pages`: [56, 57, 58]
- `section_paths`: ["Chapter 10 Package / 10.1 Thermal Data", "Chapter 11 Pinout / 11.1 Pinout Diagrams", "Chapter 11 Pinout / 11.2 Pin Definitions"]
- `brief`: "Package type used for package outline and pinout definition."
- `anchors`: [{"page": 56, "text": "320LFBGA"}, {"page": 57, "text": "320LFBGA"}, {"page": 58, "text": "320LFBGA"}]
- `aliases`: ["320LFBGA", "320lfbga"]

### NO-FORMAL-REQUIREMENT-IDS-DETECTED

- `name`: "NO_FORMAL_REQUIREMENT_IDS_DETECTED"
- `type`: "requirement_index_marker"
- `primary_page`: null
- `physical_pages`: []
- `brief`: "No formal SWS_*, REQ_*, or requirement identifier pattern was detected in this data sheet."
- `anchors`: []
- `aliases`: ["no formal requirements", "无正式需求编号"]

## 9. Search Aliases
### ALIAS-FC7300F8MDQ

- `canonical`: "FC7300F8MDQ"
- `aliases`: ["FC7300F8MDQ MCU", "Flagchip FC7300F8MDQ", "FC7300", "FC7300 data sheet", "FC7300F8MDQ 数据手册", "FC7300F8MDQ 芯片"]
- `related_ids`: ["SYM-FC7300F8MDQ"]

### ALIAS-DATASHEET

- `canonical`: "Data Sheet"
- `aliases`: ["datasheet", "data sheet", "DS", "electrical specification", "电气特性", "数据手册", "规格书"]
- `related_ids`: ["SYM-DS-FC7300F8MDQ-V0-4-Y26M01"]

### ALIAS-ORDERING

- `canonical`: "Ordering Information"
- `aliases`: ["part ordering", "orderable part number", "ordering code", "料号规则", "订购信息", "订购型号"]
- `related_ids`: ["FIG-0008-001", "SEC-01-01"]

### ALIAS-IO

- `canonical`: "I/O Parameter"
- `aliases`: ["IO parameter", "I/O parameter", "pad specification", "IO DC", "IO AC", "GPIO pad", "引脚电气", "IO电气特性", "PAD参数"]
- `related_ids`: ["SEC-04", "TBL-0025-013", "TBL-0026-014", "TBL-0027-015", "TBL-0027-016", "TBL-0028-017"]

### ALIAS-CLOCK

- `canonical`: "Clock Specification"
- `aliases`: ["clock spec", "oscillator spec", "FOSC", "SOSC", "FIRC", "SIRC", "PLL", "时钟规格", "振荡器", "锁相环"]
- `related_ids`: ["SEC-05", "TBL-0029-018", "TBL-0030-019", "TBL-0031-023"]

### ALIAS-POWER

- `canonical`: "Power and Operating Conditions"
- `aliases`: ["operating requirements", "absolute maximum ratings", "power sequencing", "LDO", "IDD", "LVR LVD HVD POR", "电源条件", "工作条件", "功耗"]
- `related_ids`: ["SEC-03", "TBL-0018-001", "TBL-0018-002", "TBL-0021-005", "TBL-0022-006", "TBL-0023-010"]

### ALIAS-ANALOG

- `canonical`: "Analog Specifications"
- `aliases`: ["ADC", "SAR ADC", "SDADC", "CMP", "TMU", "HSADC", "HRPWM", "SSI", "模拟模块", "模数转换器", "比较器", "温度监测"]
- `related_ids`: ["SEC-07", "TBL-0033-026", "TBL-0035-028", "TBL-0038-034"]

### ALIAS-FCSPI

- `canonical`: "FCSPI"
- `aliases`: ["FC Serial Peripheral Interface", "SPI", "FC SPI", "FCSPI timing", "CPHA", "CPOL", "串行外设接口"]
- `related_ids`: ["SEC-08-01", "TBL-0042-035", "TBL-0044-036", "TBL-0046-037"]

### ALIAS-ENET

- `canonical`: "ENET"
- `aliases`: ["Ethernet", "MII", "RMII", "RGMII", "MDIO", "ENET electrical", "以太网", "以太网时序"]
- `related_ids`: ["SEC-08-03", "TBL-0050-039", "TBL-0050-040", "TBL-0051-041"]

### ALIAS-DEBUG

- `canonical`: "Debug Modules"
- `aliases`: ["SWD", "JTAG", "Trace", "TPIU", "ETB", "ETM", "debug timing", "调试接口", "跟踪接口"]
- `related_ids`: ["SEC-09", "TBL-0053-043", "TBL-0054-044", "TBL-0055-045"]

### ALIAS-PACKAGE-PINOUT

- `canonical`: "Package and Pinout"
- `aliases`: ["320LFBGA", "package outline", "pinout", "pin definition", "ball map", "封装", "引脚定义", "BGA顶视图"]
- `related_ids`: ["SEC-10", "SEC-11", "FIG-0056-026", "FIG-0057-027", "TBL-0058-047"]

### ALIAS-REVISION

- `canonical`: "Revision History"
- `aliases`: ["rev history", "changes", "release history", "版本历史", "变更记录"]
- `related_ids`: ["REV-HISTORY", "TBL-0066-REVHISTORY-001"]

## 10. Quality Warnings
### WARN-DOC-OUTLINE-001

- `severity`: "medium"
- `category`: "structure"
- `physical_pages`: [1, 69]
- `affected_ids`: ["TOC"]
- `message`: "PDF has no internal outline/bookmarks; the section index was derived from the source Table of Contents and visible headings."
- `recommended_action`: "Use physical_page and section_path from this Manifest; do not rely on PDF bookmarks."

### WARN-OCR-001

- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69]
- `affected_ids`: ["ALL-PAGES"]
- `message`: "PDF has an extractable text layer; OCR was not executed. Visual diagrams and mechanical drawings remain indexed by caption and semantic description rather than OCR transcription."
- `recommended_action`: "For exact diagram-internal labels, verify against the rendered source PDF page."

### WARN-IMAGE-OBJECTS-001

- `severity`: "low"
- `category`: "image_extraction"
- `physical_pages`: [8, 34, 40, 41, 48, 49, 51, 53, 54, 55, 56, 57]
- `affected_ids`: ["FIGURE-INDEX"]
- `message`: "The PDF contains many page/background/image objects. Only source-captioned figures are indexed as semantic figures; decorative or whole-page image objects are not independently listed."
- `recommended_action`: "Use Figure Index for captioned figures and source PDF for exact visual inspection."

### WARN-TABLE-PINOUT-NUMBER-001

- `severity`: "medium"
- `category`: "table_numbering"
- `physical_pages`: [58, 59, 60, 61, 62, 63, 64, 65]
- `affected_ids`: ["TBL-0058-047"]
- `message`: "Source Table of Tables and page 58 identify the pinout definition as Table 47, but continuation captions on pages 59-65 read Table 46. The Manifest treats this as the continuation of Table 47 and preserves the mismatch warning."
- `recommended_action`: "When citing the pinout table, use physical_pages 58-65 and verify the caption on the source PDF."

### WARN-REVISION-REFERENCES-001

- `severity`: "info"
- `category`: "caption_reference_filtering"
- `physical_pages`: [66, 67, 68]
- `affected_ids`: ["TBL-0066-REVHISTORY-001"]
- `message`: "Revision History text references table and figure numbers from earlier sections. These references are not indexed as additional source tables or figures."
- `recommended_action`: "Use Revision History as a table-like back-matter item and source table/figure indexes for actual captions."

### WARN-PUA-GLYPHS-001

- `severity`: "medium"
- `category`: "text_extraction"
- `physical_pages`: [13, 15, 16, 17, 29, 39, 47, 52, 66, 67, 68]
- `affected_ids`: ["PAGE-INDEX", "FIGURE-INDEX"]
- `message`: "Some diagram or bullet text contains Private Use Area glyphs in the PDF text layer. The Manifest normalizes known PUA glyphs in anchors/keywords where safe but does not rewrite source captions."
- `recommended_action`: "Verify figure-internal numeric labels and bullets against the source PDF render."

### WARN-TBD-VALUES-001

- `severity`: "info"
- `category`: "source_content"
- `physical_pages`: [22, 23]
- `affected_ids`: ["TBL-0022-006", "TBL-0022-007", "TBL-0022-008", "TBL-0023-009"]
- `message`: "Several power transition and current-consumption values are marked TBD in the source document."
- `recommended_action`: "Do not treat TBD entries as resolved numeric specifications."

### WARN-REQUIREMENTS-001

- `severity`: "info"
- `category`: "requirements"
- `physical_pages`: []
- `affected_ids`: ["TERM-INDEX"]
- `message`: "No formal SWS_*, REQ_*, or requirement ID pattern was detected. Requirement-index entries are therefore limited to NO_FORMAL_REQUIREMENT_IDS_DETECTED marker."
- `recommended_action`: "Use source sections/tables for design constraints, not formal requirement IDs."

### WARN-SPARSE-TEXT-001

- `severity`: "low"
- `category`: "text_extraction"
- `physical_pages`: [1]
- `affected_ids`: ["PAGE-0001"]
- `message`: "Sparse text pages detected. In this file, sparse pages are expected for cover or image-heavy pages, not OCR failure."
- `recommended_action`: "Verify visually if a sparse-text page is relevant to an answer."

## 11. Self Check Report
### SELF-CHECK-PAGE-COVERAGE

- `pdf_page_count`: 69
- `indexed_physical_pages_count`: 69
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `coverage_status`: "pass"

### SELF-CHECK-SECTION-RANGES

- `invalid_ranges`: []
- `section_range_policy`: "Overlapping ranges are allowed for chapters and subsections; physical page coverage is verified by Page Segment Index."
- `sections_without_pages`: []
- `status`: "pass"

### SELF-CHECK-SOURCE-INTEGRITY

- `source_pdf_sha256`: `be9b872fdb6d82557e5dd7b215003e87834795a02b4707f36ccd3875d63be351`
- `manifest_source_pdf_sha256`: `be9b872fdb6d82557e5dd7b215003e87834795a02b4707f36ccd3875d63be351`
- `sha256_match`: true
- `status`: "pass"

### SELF-CHECK-INDEX-INTEGRITY

- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `invalid_ids`: []
- `status`: "pass"

### SELF-CHECK-TABLE-FIGURE-INTEGRITY

- `numbered_tables_indexed`: 47
- `generated_table_like_items_indexed`: 1
- `figures_indexed`: 27
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `tables_without_caption_or_anchor`: []
- `figures_without_caption_or_anchor`: []
- `status`: "pass"

### SELF-CHECK-OVERALL

- `overall_status`: "pass_with_warnings"
- `warning_count`: 9
- `staleness_rule`: "Manifest is stale if source_pdf_sha256 differs from the current source PDF."
- `source_verification_rule`: "Use physical_page + anchor to verify each important answer against the source PDF."

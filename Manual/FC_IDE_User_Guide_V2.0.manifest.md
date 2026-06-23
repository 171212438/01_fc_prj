---
manifest_schema_version: "1.1"
source_pdf: "FC_IDE_User_Guide_V2.0.pdf"
source_pdf_sha256: "d5b806e01ca4f3c48e6915a6ff6985c102610ff0c38fde7d9df6aad976084be9"
source_pdf_size_bytes: 3111729
pdf_page_count: 31
generated_at: "2026-06-11T07:29:46Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.4.0"
source_document_id: "IDEUG -V2.0-Y23M02"
source_document_revision: "Rev.2.0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
text_layer_search_supplement: "present"
text_layer_search_supplement_generated_at: "2026-06-20T11:56:14Z"
text_layer_search_supplement_terms: 66
text_layer_search_supplement_technical_terms: 1
text_layer_search_supplement_pages: 30
post_supplement_text_token_recall: "1.000"
post_supplement_technical_token_recall: "1.000"
overall_status: "pass_with_warnings"
---
# PDF Manifest: FC_IDE_User_Guide_V2.0.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Use `9A. Text-Layer Search Supplement` for exact keyword lookup gaps; verify exact wording, screenshots, tables, commands and diagrams against the PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `FC_IDE_User_Guide_V2.0.pdf`
- `source_pdf_sha256`: `d5b806e01ca4f3c48e6915a6ff6985c102610ff0c38fde7d9df6aad976084be9`
- `source_pdf_size_bytes`: `3111729`
- `pdf_page_count`: `31`
- `text_layer_search_supplement`: present
- `text_layer_search_supplement_generated_at`: 2026-06-20T11:56:14Z
- `text_layer_search_supplement_terms`: 66
- `text_layer_search_supplement_technical_terms`: 1
- `text_layer_search_supplement_pages`: 30
- `post_supplement_text_token_recall`: 1.000
- `post_supplement_technical_token_recall`: 1.000
- `source_document_id`: `IDEUG -V2.0-Y23M02`
- `source_document_revision`: `Rev.2.0`
- `visible_cover_title`: `FC_IDE User Guide`
- `visible_cover_revision`: `Rev.2.0`
- `revision_history_latest_row`: `2.0 / 2023/02/10`
- `generated_at`: `2026-06-11T07:29:46Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.4.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF 1.26.12`
- `image_extraction_policy`: `index meaningful screenshot image blocks with bbox; exclude tiny toolbar/icon artifacts unless they are contextually important`

## 2. Global Summary

- `topic`: FC_IDE operation guide for launching the IDE and managing embedded projects.
- `module_scope`: launch, workspace selection, new project creation, import project, header include paths, build/clean configurations, JLink debugging, project editing, and XML register definition file loading.
- `key_chapters`: Chapter 1 Introduction; Chapter 2 Launch; Chapter 3 Basic Functions; Appendix A How to Load Register Definition File.
- `key_terms`: FC_IDE, workspace, New Fc project, Device/Flash/Package, Debug_Flash, Debug_RAM, JLink, GDB SEGGER J-Link Debugging, .elf, Device Name, JTAG, Initial speed 4000 kHz, .project, EmbSys Registers.
- `summary`: The document is a 31-page Flagchip FC_IDE user guide. It provides procedural GUI steps and screenshots for running FC_IDE, creating/importing projects, adding include paths, building/cleaning, configuring JLink debugging, editing project files/folders, and loading XML register definitions into EmbSys Registers.
- `retrieval_note`: Most actionable details are UI paths, configuration names, and screenshots. Use Manifest anchors to reach the physical page, then verify visual details in the source PDF.

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: `Cover`
- `path`: `Cover`
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["FC_IDE", "Rev.2.0"]
- `anchor`: `FC_IDE User Guide`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Revision History", "V2.0", "2023/02/10"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Table of Contents", "internal links", "chapters"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["basic information", "import", "build", "clean", "debug", "edit"]
- `anchor`: `Chapter 1 Introduction`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Launch`
- `path`: `Chapter 2 Launch`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["extract ZIP", "run EXE", "pin"]
- `anchor`: `Chapter 2 Launch`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Basic Functions`
- `path`: `Chapter 3 Basic Functions`
- `physical_page_start`: `6`
- `physical_page_end`: `29`
- `printed_page_start`: `6`
- `printed_page_end`: `29`
- `keywords`: ["workspace", "new project", "import", "includes", "build", "clean", "debug", "edit"]
- `anchor`: `Chapter 3 Basic Functions`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Launch IDE for the First Time`
- `path`: `Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["workspace", "C:\Projects\test", "Browse", "Launch"]
- `anchor`: `Launch IDE for the First Time`

### SEC-003-002
- `source_number`: `3.2`
- `title`: `New Project`
- `path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `physical_page_start`: `6`
- `physical_page_end`: `9`
- `printed_page_start`: `6`
- `printed_page_end`: `9`
- `keywords`: ["File > New > Project", "FC Project", "device", "flash", "package", "toolchain"]
- `anchor`: `3.2 New Project`

### SEC-003-003
- `source_number`: `3.3`
- `title`: `Import Project`
- `path`: `Chapter 3 Basic Functions / 3.3 Import Project`
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["File > Import", "Existing Projects into Workspace", "warning", "device information"]
- `anchor`: `3.3 Import Project`

### SEC-003-004
- `source_number`: `3.4`
- `title`: `Add Header Files to Includes`
- `path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `physical_page_start`: `11`
- `physical_page_end`: `13`
- `printed_page_start`: `11`
- `printed_page_end`: `13`
- `keywords`: ["Includes", "header files", "C/C++ Build", "GNU Arm Cross C Compiler"]
- `anchor`: `3.4 Add Header Files to Includes`

### SEC-003-005
- `source_number`: `3.5`
- `title`: `Build/Clean Project`
- `path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project`
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["Debug_Flash", "Debug_RAM", "Build Project", "Clean Project", "Console"]
- `anchor`: `3.5 Build/Clean Project`

### SEC-003-005-A
- `source_number`: `3.4.1`
- `title`: `Build Project`
- `path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project`
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Build Project", "Debug_Flash", "Debug_RAM", "FC4150", "FC7300"]
- `anchor`: `3.4.1 Build Project`

### SEC-003-005-B
- `source_number`: `3.4.2`
- `title`: `Clean Project`
- `path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.2 Clean Project`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Clean Project", "Console"]
- `anchor`: `3.4.2 Clean Project`

### SEC-003-006
- `source_number`: `3.6`
- `title`: `Debug Project`
- `path`: `Chapter 3 Basic Functions / 3.6 Debug Project`
- `physical_page_start`: `15`
- `physical_page_end`: `24`
- `printed_page_start`: `15`
- `printed_page_end`: `24`
- `keywords`: ["JLink", "USB driver", "Debug", "GDB SEGGER J-Link", "Device Name", "JTAG", "4000 kHz"]
- `anchor`: `3.6 Debug Project`

### SEC-003-006-A
- `source_number`: `3.5.1`
- `title`: `Install JLink USB Driver`
- `path`: `Chapter 3 Basic Functions / 3.6 Debug Project / 3.5.1 Install JLink USB Driver`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["JLink", "USBDriver", "dpinst_xxx.exe"]
- `anchor`: `3.5.1 Install JLink USB Driver`

### SEC-003-006-B
- `source_number`: `3.5.2`
- `title`: `Debug`
- `path`: `Chapter 3 Basic Functions / 3.6 Debug Project / 3.5.2 Debug`
- `physical_page_start`: `17`
- `physical_page_end`: `24`
- `printed_page_start`: `17`
- `printed_page_end`: `24`
- `keywords`: [".elf", "Debug_RAM", "Debug Configurations", "GDB SEGGER J-Link Debugging", "Startup tab"]
- `anchor`: `3.5.2 Debug`

### SEC-003-007
- `source_number`: `3.7`
- `title`: `Edit Project`
- `path`: `Chapter 3 Basic Functions / 3.7 Edit Project`
- `physical_page_start`: `24`
- `physical_page_end`: `29`
- `printed_page_start`: `24`
- `printed_page_end`: `29`
- `keywords`: ["change project name", "new file", "new folder", "add file", "drag and drop"]
- `anchor`: `3.7 Edit Project`

### SEC-003-007-A
- `source_number`: `3.5.3`
- `title`: `Change Project Name`
- `path`: `Chapter 3 Basic Functions / 3.7 Edit Project / 3.5.3 Change Project Name`
- `physical_page_start`: `24`
- `physical_page_end`: `26`
- `printed_page_start`: `24`
- `printed_page_end`: `26`
- `keywords`: [".project", "<name>", "Rename Resource", "Delete", "Import Project"]
- `anchor`: `3.5.3 Change Project Name`

### SEC-003-007-B
- `source_number`: `3.5.4`
- `title`: `New File/Folder`
- `path`: `Chapter 3 Basic Functions / 3.7 Edit Project / 3.5.4 New File/Folder`
- `physical_page_start`: `26`
- `physical_page_end`: `28`
- `printed_page_start`: `26`
- `printed_page_end`: `28`
- `keywords`: ["New File", "New Folder", "System Explorer", "Refresh"]
- `anchor`: `3.5.4 New File/Folder`

### SEC-003-007-C
- `source_number`: `3.5.5`
- `title`: `Add File/Folder`
- `path`: `Chapter 3 Basic Functions / 3.7 Edit Project / 3.5.5 Add File/Folder`
- `physical_page_start`: `28`
- `physical_page_end`: `29`
- `printed_page_start`: `28`
- `printed_page_end`: `29`
- `keywords`: ["Add File", "Add Folder", "Copy to Directory", "Drag and Drop", "Link files and folders"]
- `anchor`: `3.5.5 Add File/Folder`

### SEC-APP-A
- `source_number`: `Appendix A`
- `title`: `How to Load Register Definition File`
- `path`: `Appendix A: How to Load Register Definition File`
- `physical_page_start`: `30`
- `physical_page_end`: `31`
- `printed_page_start`: `30`
- `printed_page_end`: `31`
- `keywords`: ["register definition file", "XML", "EmbSys Registers", "Vendor", "Chip", "Flagchip", "FC4150"]
- `anchor`: `Appendix A: How to Load Register Definition File`

## 4. Page Locator Map

| physical_page | printed_page | page_id | segment_id | section_path | content_types | primary_anchor |
|---:|---|---|---|---|---|---|
| 1 | cover | PAGE-0001 | SEG-0001 | Cover | cover, title | FC_IDE User Guide |
| 2 | 2 | PAGE-0002 | SEG-0002 | Revision History | revision_history, table | Revision History |
| 3 | 3 | PAGE-0003 | SEG-0003 | Table of Contents | toc, internal_links | Table of Contents |
| 4 | 4 | PAGE-0004 | SEG-0004 | Chapter 1 Introduction | text | Chapter 1 Introduction |
| 5 | 5 | PAGE-0005 | SEG-0005 | Chapter 2 Launch | procedure, screenshot | Chapter 2 Launch |
| 6 | 6 | PAGE-0006 | SEG-0006 | Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project | procedure, screenshot | 3.1 Launch IDE for the First Time |
| 7 | 7 | PAGE-0007 | SEG-0007 | Chapter 3 Basic Functions / 3.2 New Project | procedure, screenshot | FC Project dialog |
| 8 | 8 | PAGE-0008 | SEG-0008 | Chapter 3 Basic Functions / 3.2 New Project | procedure, screenshot | Select Configurations |
| 9 | 9 | PAGE-0009 | SEG-0009 | Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project | procedure, screenshot | Project Explorer |
| 10 | 10 | PAGE-0010 | SEG-0010 | Chapter 3 Basic Functions / 3.3 Import Project | procedure, screenshot, note | How to deal with warnings after importing an existing project |
| 11 | 11 | PAGE-0011 | SEG-0011 | Chapter 3 Basic Functions / 3.4 Add Header Files to Includes | procedure, screenshot | 3.4 Add Header Files to Includes |
| 12 | 12 | PAGE-0012 | SEG-0012 | Chapter 3 Basic Functions / 3.4 Add Header Files to Includes | procedure, screenshot | Add directory path dialog |
| 13 | 13 | PAGE-0013 | SEG-0013 | Chapter 3 Basic Functions / 3.4 Add Header Files to Includes | procedure, screenshot | After rebuilding |
| 14 | 14 | PAGE-0014 | SEG-0014 | Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project | procedure, screenshot, menu | 3.5 Build/Clean Project |
| 15 | 15 | PAGE-0015 | SEG-0015 | Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project | procedure, screenshot | 3.4.2 Clean Project |
| 16 | 16 | PAGE-0016 | SEG-0016 | Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver | procedure, screenshot | 3.5.1 Install JLink USB Driver |
| 17 | 17 | PAGE-0017 | SEG-0017 | Chapter 3 Basic Functions / 3.5.2 Debug | procedure, screenshot | 3.5.2 Debug |
| 18 | 18 | PAGE-0018 | SEG-0018 | Chapter 3 Basic Functions / 3.5.2 Debug | procedure, screenshot, note | C Local Application dialog |
| 19 | 19 | PAGE-0019 | SEG-0019 | Chapter 3 Basic Functions / 3.5.2 Debug | procedure, screenshot, note | GDB SEGGER J-Link Debugging |
| 20 | 20 | PAGE-0020 | SEG-0020 | Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting | procedure, screenshot | Right-click on the project, and select Refresh |
| 21 | 21 | PAGE-0021 | SEG-0021 | Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling | procedure, screenshot, note | select the configuration you saved |
| 22 | 22 | PAGE-0022 | SEG-0022 | Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch | procedure, screenshot | Device name |
| 23 | 23 | PAGE-0023 | SEG-0023 | Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab | procedure, screenshot | Interface (should be JTAG) |
| 24 | 24 | PAGE-0024 | SEG-0024 | Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name | procedure, screenshot, cross_reference | register information of FC4150/FC7300 is also provided in XML format |
| 25 | 25 | PAGE-0025 | SEG-0025 | Chapter 3 Basic Functions / 3.5.3 Change Project Name | procedure, screenshot, cross_reference | Open the .project file |
| 26 | 26 | PAGE-0026 | SEG-0026 | Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder | procedure, screenshot, note | Rename Resource dialog |
| 27 | 27 | PAGE-0027 | SEG-0027 | Chapter 3 Basic Functions / 3.5.4 New File/Folder | procedure, screenshot | Click Finish |
| 28 | 28 | PAGE-0028 | SEG-0028 | Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder | procedure, screenshot | Right-click the project name and select Refresh |
| 29 | 29 | PAGE-0029 | SEG-0029 | Chapter 3 Basic Functions / 3.5.5 Add File/Folder | procedure, screenshot, note | Method 2 - Drag and Drop |
| 30 | 30 | PAGE-0030 | SEG-0030 | Appendix A: How to Load Register Definition File | procedure, screenshot, appendix | Appendix A |
| 31 | 31 | PAGE-0031 | SEG-0031 | Appendix A: How to Load Register Definition File | procedure, screenshot, appendix | Click Apply and Close |

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover", "title"]
- `summary`: Cover page identifying the document as FC_IDE User Guide, Rev.2.0.
- `keywords`: ["FC_IDE", "User Guide", "Rev.2.0"]
- `anchors`:
  - `p1`: `FC_IDE User Guide`
  - `p1`: `Rev.2.0`

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table"]
- `summary`: Revision history from 1.0 to 2.0, including FC7300 additions, new project creation section, debug-step updates, and Appendix A movement for loading register definition files.
- `keywords`: ["Revision History", "IDEUG", "V2.0", "FC7300", "Appendix A", "Easy IDE"]
- `anchors`:
  - `p2`: `Revision History`
  - `p2`: `Change the name of "Easy IDE" to "FC_IDE"`
  - `p2`: `Added a new section New Project`

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc", "internal_links"]
- `summary`: Table of contents for Revision History, Chapters 1-3, Basic Functions subsections, and Appendix A.
- `keywords`: ["Table of Contents", "Launch", "Basic Functions", "Debug Project", "Appendix A"]
- `anchors`:
  - `p3`: `Table of Contents`
  - `p3`: `Chapter 3 Basic Functions`
  - `p3`: `Appendix A: How to Load Register Definition File`

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Chapter 1 Introduction`
- `content_types`: ["text"]
- `summary`: States that the guide explains how to start FC_IDE and how to import, build, clean, debug, and edit IDE projects.
- `keywords`: ["Introduction", "start up", "import", "build", "clean", "debug", "edit"]
- `anchors`:
  - `p4`: `Chapter 1 Introduction`
  - `p4`: `import, build, clean, debug and edit projects`

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 2 Launch`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Launch procedure: extract the FC_IDE ZIP, run the EXE, and optionally pin the executable for quick access.
- `keywords`: ["Launch", "FC_IDE ZIP", "EXE", "Pin to Start", "taskbar"]
- `anchors`:
  - `p5`: `Chapter 2 Launch`
  - `p5`: `Extract the FC_IDE ZIP file`
  - `p5`: `double-click the EXE file`

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Introduces Basic Functions; shows first-time workspace selection and starts the New Project flow using File > New > Project and Flagchip > New Fc project.
- `keywords`: ["workspace", "C:\Projects\test", "Launch", "File > New > Project", "New Fc project"]
- `anchors`:
  - `p6`: `3.1 Launch IDE for the First Time`
  - `p6`: `workspace in C:\Projects\test`
  - `p6`: `Flagchip > New Fc project`

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `content_types`: ["procedure", "screenshot"]
- `summary`: New project wizard continues: enter Project name and select Device, Flash, and Package from drop-down lists.
- `keywords`: ["FC Project", "Project name", "Device", "Flash", "Package", "C7xxx"]
- `anchors`:
  - `p7`: `FC Project dialog`
  - `p7`: `Project name text box`
  - `p7`: `Device, Flash and Package`

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `content_types`: ["procedure", "screenshot"]
- `summary`: New project wizard continues through Select Configurations and GNU Arm Cross Tool Chain pages, keeping defaults and finishing the wizard.
- `keywords`: ["Select Configurations", "GNU Arm Cross Tool Chain", "Finish", "Toolchains"]
- `anchors`:
  - `p8`: `Select Configurations`
  - `p8`: `GNU Arm Cross Tool Chain`
  - `p8`: `click Finish`

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Shows created project in Project Explorer and begins Import Project procedure using File > Import and Existing Projects into Workspace.
- `keywords`: ["Project Explorer", "Import Project", "Existing Projects into Workspace", "Select root directory"]
- `anchors`:
  - `p9`: `Project Explorer`
  - `p9`: `3.3 Import Project`
  - `p9`: `Existing Projects into Workspace`

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 3 Basic Functions / 3.3 Import Project`
- `content_types`: ["procedure", "screenshot", "note"]
- `summary`: Completes project import and explains the warning shown when imported projects have no device information; select Device, Flash, and Package then click OK.
- `keywords`: ["Finish", "Warning", "device information", "Device", "Flash", "Package", "OK"]
- `anchors`:
  - `p10`: `How to deal with warnings after importing an existing project`
  - `p10`: `no device information configured`
  - `p10`: `select the device specification`

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Starts include-path setup: open project Properties, select C/C++ Build > Settings, then GNU Arm Cross C Compiler > Includes.
- `keywords`: ["Add Header Files", "Includes", "Properties", "C/C++ Build", "Settings", "GNU Arm Cross C Compiler"]
- `anchors`:
  - `p11`: `3.4 Add Header Files to Includes`
  - `p11`: `C/C++ Build > Settings`
  - `p11`: `GNU Arm Cross C Compiler > Includes`

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Adds a header directory path through the Add directory path dialog and applies changes, triggering a rebuild prompt.
- `keywords`: ["Add directory path", "Directory", "Apply and Close", "rebuild", "header file path"]
- `anchors`:
  - `p12`: `Add directory path dialog`
  - `p12`: `Directory text box`
  - `p12`: `Apply and Close`

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Shows rebuild confirmation and the resulting header files under the Includes folder.
- `keywords`: ["rebuild", "Includes folder", "headers", "Project Explorer"]
- `anchors`:
  - `p13`: `After rebuilding`
  - `p13`: `header files will be displayed`
  - `p13`: `Includes folder`

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project`
- `content_types`: ["procedure", "screenshot", "menu"]
- `summary`: Explains Debug_Flash and Debug_RAM build configurations, FC4150-specific 512K/1M/2M variants, FC7300 Debug_Flash/Debug_RAM choices, and Build Project command.
- `keywords`: ["Build Project", "Debug_Flash", "Debug_RAM", "FC4150", "FC7300", "Console"]
- `anchors`:
  - `p14`: `3.5 Build/Clean Project`
  - `p14`: `3.4.1 Build Project`
  - `p14`: `Debug_Flash and Debug_RAM`
  - `p14`: `Build Project`

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Shows Clean Project and console output; starts Debug Project section and states that only JLink debug is currently supported.
- `keywords`: ["Clean Project", "Console", "Debug Project", "JLink", "USB driver"]
- `anchors`:
  - `p15`: `3.4.2 Clean Project`
  - `p15`: `3.6 Debug Project`
  - `p15`: `Only JLink debug is supported currently`

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver`
- `content_types`: ["procedure", "screenshot"]
- `summary`: JLink USB driver installation flow: open JLink\USBDriver, run dpinst_xxx.exe, click Next, and finish the installation.
- `keywords`: ["JLink", "USBDriver", "dpinst_xxx.exe", "installation wizard", "Finish"]
- `anchors`:
  - `p16`: `3.5.1 Install JLink USB Driver`
  - `p16`: `JLink\USBDriver`
  - `p16`: `dpinst_xxx.exe`

### SEG-0017
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Starts first debug flow: refresh project so an .elf appears under Debug_RAM, then create configuration and debug using Method 1 Debug As > FC Application.
- `keywords`: ["Debug", "Refresh", ".elf", "Debug_RAM", "Debug As", "FC Application"]
- `anchors`:
  - `p17`: `3.5.2 Debug`
  - `p17`: `an ".elf" file will be shown`
  - `p17`: `Debug As > FC Application`

### SEG-0018
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `content_types`: ["procedure", "screenshot", "note"]
- `summary`: Method 1 uses C Local Application to select an .elf; Method 2 starts from Debug Configurations.
- `keywords`: ["C Local Application", ".elf", "Debug Configurations", "Method 1", "Method 2"]
- `anchors`:
  - `p18`: `C Local Application dialog`
  - `p18`: `there will be no pop-up dialog`
  - `p18`: `Debug Configurations`

### SEG-0019
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `content_types`: ["procedure", "screenshot", "note"]
- `summary`: Creates a GDB SEGGER J-Link Debugging configuration, clicks Debug, and introduces the no-.elf troubleshooting note.
- `keywords`: ["GDB SEGGER J-Link Debugging", "Debug", "C/C++ Application", ".elf", "troubleshooting"]
- `anchors`:
  - `p19`: `GDB SEGGER J-Link Debugging`
  - `p19`: `Click Debug`
  - `p19`: `What to do if there is no .elf file`

### SEG-0020
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting`
- `content_types`: ["procedure", "screenshot"]
- `summary`: No-.elf troubleshooting: refresh the project and use Search Project, select the project in Program Selection, then click OK.
- `keywords`: ["Refresh", "Search Project", "Program Selection", "OK", ".elf"]
- `anchors`:
  - `p20`: `Right-click on the project, and select Refresh`
  - `p20`: `Click Search Project`
  - `p20`: `Program Selection dialog`

### SEG-0021
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling`
- `content_types`: ["procedure", "screenshot", "note"]
- `summary`: Subsequent debug runs can reuse saved configuration; debug problem handling begins by checking Device Name and Interface in the Debugger tab.
- `keywords`: ["saved configuration", "Debug drop-down list", "Debugger tab", "Device Name", "Interface"]
- `anchors`:
  - `p21`: `select the configuration you saved`
  - `p21`: `How to deal with debugging problems`
  - `p21`: `Device Name and Interface`

### SEG-0022
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Device-name mismatch guidance: FC4150 and FC7300 device names must match selected build configuration; use project Properties and select Configuration, Flash Size, and Package.
- `keywords`: ["Device name", "FC4150F512B", "FC4150F1MB", "FC4150F2MB", "FC7300F8MD_CORE0", "FC7300F8MD_CORE1", "FC7300F8MD_CORE2", "Configuration", "Flash Size", "Package"]
- `anchors`:
  - `p22`: `Device name`
  - `p22`: `FC7300F8MD_CORE0`
  - `p22`: `must be matched with the build configuration`
  - `p22`: `Configuration, Flash Size, and Package`

### SEG-0023
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Select device name from Debugger tab, ensure Interface is JTAG, initial speed is fixed 4000 kHz, and Startup tab reset options are unchecked.
- `keywords`: ["Device name", "JTAG", "4000 kHz", "Startup tab", "Initial Reset and Halt", "Pre-run/Restart reset"]
- `anchors`:
  - `p23`: `Interface (should be JTAG)`
  - `p23`: `Initial speed`
  - `p23`: `4000 kHz`
  - `p23`: `Initial Reset and Halt`

### SEG-0024
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name`
- `content_types`: ["procedure", "screenshot", "cross_reference"]
- `summary`: Mentions XML register information and Appendix A; starts Edit Project and Change Project Name by editing the .project file through Show In > System Explorer.
- `keywords`: ["XML", "register information", "Appendix A", "Edit Project", ".project", "Show In", "System Explorer"]
- `anchors`:
  - `p24`: `register information of FC4150/FC7300 is also provided in XML format`
  - `p24`: `3.7 Edit Project`
  - `p24`: `Show In > System Explorer`

### SEG-0025
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name`
- `content_types`: ["procedure", "screenshot", "cross_reference"]
- `summary`: Rename by editing .project <name>, deleting the project, re-importing it, or using the right-click Rename method.
- `keywords`: [".project", "<name>", "Delete", "Import Project", "Rename", "Rename Resource"]
- `anchors`:
  - `p25`: `Open the .project file`
  - `p25`: `<name> and </name>`
  - `p25`: `Import the project again`
  - `p25`: `Method 2 - Right-clicking the Project`

### SEG-0026
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder`
- `content_types`: ["procedure", "screenshot", "note"]
- `summary`: Completes Rename Resource flow, warns that Method 2 is not recommended, and starts New File/Folder creation through New > File.
- `keywords`: ["Rename Resource", "New name", "not recommended", "New File/Folder", "New > File", "Create New File"]
- `anchors`:
  - `p26`: `Rename Resource dialog`
  - `p26`: `NOT recommended to rename the project`
  - `p26`: `3.5.4 New File/Folder`
  - `p26`: `New > File`

### SEG-0027
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Finishes new file creation and describes creating a local folder through System Explorer, then creating the folder in the desired location.
- `keywords`: ["Create New File", "Finish", "System Explorer", "local folder", "new folder"]
- `anchors`:
  - `p27`: `Click Finish`
  - `p27`: `new file will be displayed`
  - `p27`: `Creating a Local File/Folder`
  - `p27`: `Show In > System Explorer`

### SEG-0028
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder`
- `content_types`: ["procedure", "screenshot"]
- `summary`: Refreshes project to show local folder; starts Add File/Folder using copy-to-directory flow and Refresh to display copied file.
- `keywords`: ["Refresh", "Add File/Folder", "Copy to the Directory", "System Explorer", "copied file"]
- `anchors`:
  - `p28`: `Right-click the project name and select Refresh`
  - `p28`: `3.5.5 Add File/Folder`
  - `p28`: `Copy to the Directory`

### SEG-0029
- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: `Chapter 3 Basic Functions / 3.5.5 Add File/Folder`
- `content_types`: ["procedure", "screenshot", "note"]
- `summary`: Add File/Folder by drag and drop; in File and Folder Operation dialog select Link files and folders, then note that header folders can be added to Includes.
- `keywords`: ["Drag and Drop", "File and Folder Operation", "Link files and folders", "Includes", "header files"]
- `anchors`:
  - `p29`: `Method 2 - Drag and Drop`
  - `p29`: `Link files and folders`
  - `p29`: `Chapter 3.3 Add Header File to Includes`

### SEG-0030
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: `Appendix A: How to Load Register Definition File`
- `content_types`: ["procedure", "screenshot", "appendix"]
- `summary`: Loads XML register definition file into FC_IDE: Window > Show View > Other, select EmbSys Registers, move the tab, then open Preferences and select Vendor and Chip.
- `keywords`: ["Appendix A", "register definition file", "XML", "Window > Show View > Other", "EmbSys Registers", "Preferences", "Flagchip", "FC4150"]
- `anchors`:
  - `p30`: `Appendix A`
  - `p30`: `How to Load Register Definition File`
  - `p30`: `EmbSys Registers`
  - `p30`: `Vendor dropdown list`
  - `p30`: `Chip dropdown list`

### SEG-0031
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: `Appendix A: How to Load Register Definition File`
- `content_types`: ["procedure", "screenshot", "appendix"]
- `summary`: Applies register definition preferences and shows the register tree populated under EmbSys Registers.
- `keywords`: ["Apply and Close", "EmbSys Registers", "register information", "ADC", "AFCB", "FLEXCAN"]
- `anchors`:
  - `p31`: `Click Apply and Close`
  - `p31`: `register information will be displayed`
  - `p31`: `EmbSys Registers`

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `null`
- `generated_table_number`: `Internal Table TBL-0002-001`
- `caption_or_title`: `Revision History`
- `physical_pages`: `2`
- `section_path`: `Revision History`
- `bbox`: `full-page table region`
- `key_fields`: ["Revision", "Author", "Date", "Changes"]
- `summary`: Revision rows for 1.0, 1.1.0, 1.1.1, 1.1.2, 1.2, and 2.0; changes include FC7300 information, new project creation, debug-step updates, and Appendix A.
- `anchor`: `Revision History`
- `confidence`: `0.93`
- `quality_flags`: ["no_source_table_number", "formal_visible_table"]

### TBL-0003-001
- `source_table_number`: `null`
- `generated_table_number`: `Internal Table TBL-0003-001`
- `caption_or_title`: `Table of Contents`
- `physical_pages`: `3`
- `section_path`: `Table of Contents`
- `bbox`: `full-page TOC region`
- `key_fields`: ["section title", "printed page"]
- `summary`: TOC entries from Revision History through Appendix A with internal PDF link annotations.
- `anchor`: `Table of Contents`
- `confidence`: `0.91`
- `quality_flags`: ["no_source_table_number", "toc_table_like", "contains_link_annotations"]

### TBL-0014-001
- `source_table_number`: `null`
- `generated_table_number`: `Internal Table TBL-0014-001`
- `caption_or_title`: `Build configuration option lists`
- `physical_pages`: `14`
- `section_path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project`
- `bbox`: `visual menu screenshots and surrounding bullet list`
- `key_fields`: ["device family", "configuration name", "load location"]
- `summary`: Build configuration choices: FC4150 has 512K/1M/2M Debug_Flash and Debug_RAM variants; FC7300 has Debug_Flash and Debug_RAM.
- `anchor`: `Debug_Flash and Debug_RAM`
- `confidence`: `0.74`
- `quality_flags`: ["table_like_list", "derived_from_text_and_screenshot", "verify_visual_menu_for_order"]

### TBL-0022-001
- `source_table_number`: `null`
- `generated_table_number`: `Internal Table TBL-0022-001`
- `caption_or_title`: `Debugger device-name compatibility list`
- `physical_pages`: `22-23`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab`
- `bbox`: `inline list and Debugger tab screenshots`
- `key_fields`: ["family", "device name", "configuration", "flash size", "package", "interface", "initial speed"]
- `summary`: Lists FC4150 and FC7300 device names and notes that Debugger-tab device name must match the selected build configuration; interface should be JTAG and initial speed fixed at 4000 kHz.
- `anchor`: `Device name (For FC4150`
- `confidence`: `0.77`
- `quality_flags`: ["table_like_list", "cross_page_context", "verify_against_screenshot"]

### TBL-0031-001
- `source_table_number`: `null`
- `generated_table_number`: `Internal Table TBL-0031-001`
- `caption_or_title`: `EmbSys Registers populated register tree`
- `physical_pages`: `31`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: `lower screenshot register tree`
- `key_fields`: ["Register", "Hex", "Bin", "Reset", "Access", "Address", "Description"]
- `summary`: EmbSys Registers view shows register-tree categories such as ADC, AFCB, AONTIMER, CCU, CMP, CLOCK, CRC, DMA, DMAMUX, ERM, EIM, FCIIC, FCPIT, FCSPI, FCUART, FLEXCAN, FMC, FTU, FWM, GPIO, I2S, INTM, and ISM.
- `anchor`: `register information will be displayed`
- `confidence`: `0.70`
- `quality_flags`: ["screenshot_table_like", "visual_text_not_fully_extracted", "verify_visual_tree"]

## 7. Figure / Image Index

### FIG-0005-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0005-001`
- `caption_or_title`: `FC_IDE extracted directory and executable`
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 2 Launch`
- `bbox`: [127.4, 227.7, 467.5, 434.1]
- `image_type`: `screenshot`
- `semantic_description`: Windows file explorer screenshot highlights the FC_IDE executable after ZIP extraction; supports launch procedure.
- `keywords`: ["launch", "EXE", "ZIP", "Pin to Start"]
- `anchor`: `double-click the EXE file`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0006-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0006-001`
- `caption_or_title`: `Workspace Launcher dialog`
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project`
- `bbox`: [155.9, 202.5, 439.3, 345.3]
- `image_type`: `screenshot`
- `semantic_description`: Workspace Launcher prompts for workspace path, defaulting to C:\Projects\test, with Browse and Launch controls.
- `keywords`: ["workspace", "Workspace Launcher", "C:\Projects\test"]
- `anchor`: `workspace in C:\Projects\test`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0006-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0006-002`
- `caption_or_title`: `File > New > Project menu`
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project`
- `bbox`: [98.9, 440.8, 495.7, 701.9]
- `image_type`: `screenshot`
- `semantic_description`: FC_IDE menu path File > New > Project is highlighted to begin project creation.
- `keywords`: ["File > New > Project", "New Project"]
- `anchor`: `Select File > New > Project`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0007-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0007-001`
- `caption_or_title`: `New Project wizard - Flagchip > New Fc project`
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `bbox`: [127.4, 36.9, 467.5, 281.7]
- `image_type`: `screenshot`
- `semantic_description`: New Project dialog shows the Flagchip category and New Fc project selection before clicking Next.
- `keywords`: ["New Project", "Flagchip", "New Fc project"]
- `anchor`: `Flagchip > New Fc project`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0007-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0007-002`
- `caption_or_title`: `FC Project dialog - project/device/flash/package`
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `bbox`: [127.4, 344.5, 467.5, 590.0]
- `image_type`: `screenshot`
- `semantic_description`: FC Project wizard page shows Project name plus Device, Flash, and Package drop-down lists.
- `keywords`: ["FC Project", "Project name", "Device", "Flash", "Package"]
- `anchor`: `Device, Flash and Package`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0008-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0008-001`
- `caption_or_title`: `Select Configurations wizard page`
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `bbox`: [127.4, 53.8, 467.5, 321.3]
- `image_type`: `screenshot`
- `semantic_description`: Wizard keeps default Debug/Release configuration settings before continuing.
- `keywords`: ["Select Configurations", "Debug", "Release"]
- `anchor`: `Select Configurations`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0008-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0008-002`
- `caption_or_title`: `GNU Arm Cross Tool Chain wizard page`
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project`
- `bbox`: [127.4, 355.2, 467.5, 622.3]
- `image_type`: `screenshot`
- `semantic_description`: Wizard shows GNU Arm Cross Toolchain path and Finish button.
- `keywords`: ["GNU Arm Cross Tool Chain", "toolchain", "Finish"]
- `anchor`: `GNU Arm Cross Tool Chain`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0009-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0009-001`
- `caption_or_title`: `Created project in Project Explorer`
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project`
- `bbox`: [127.4, 53.8, 467.5, 236.6]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer displays the newly created project and sample source pane.
- `keywords`: ["Project Explorer", "created project"]
- `anchor`: `Project Explorer`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0009-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0009-002`
- `caption_or_title`: `Import dialog - Existing Projects into Workspace`
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project`
- `bbox`: [155.9, 343.3, 439.3, 542.8]
- `image_type`: `screenshot`
- `semantic_description`: Import dialog highlights General > Existing Projects into Workspace before Next.
- `keywords`: ["Import", "Existing Projects into Workspace"]
- `anchor`: `Existing Projects into Workspace`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0010-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0010-001`
- `caption_or_title`: `Import Projects root directory selection`
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 3 Basic Functions / 3.3 Import Project`
- `bbox`: [155.9, 36.9, 439.3, 400.4]
- `image_type`: `screenshot`
- `semantic_description`: Import Projects dialog shows Select root directory, project list, and Finish button.
- `keywords`: ["Import Projects", "Select root directory", "Finish"]
- `anchor`: `Select root directory`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0010-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0010-002`
- `caption_or_title`: `Imported project in Project Explorer`
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 3 Basic Functions / 3.3 Import Project`
- `bbox`: [155.9, 434.3, 439.1, 556.8]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer displays imported project folders such as Binaries, Include, Device, Driver, Sources, and Startup.
- `keywords`: ["imported project", "Project Explorer"]
- `anchor`: `project will be shown`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0011-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0011-001`
- `caption_or_title`: `Device information warning dialog`
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [155.6, 36.9, 457.1, 164.4]
- `image_type`: `screenshot`
- `semantic_description`: Warning dialog says Flagchip info is empty and provides Device, Flash, and Package choices for a project.
- `keywords`: ["Warning", "Device", "Flash", "Package"]
- `anchor`: `Flagchip info is empty`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0011-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0011-002`
- `caption_or_title`: `Project context menu - Properties`
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [180.6, 276.8, 414.3, 663.7]
- `image_type`: `screenshot`
- `semantic_description`: Right-click Project Explorer context menu highlights Properties.
- `keywords`: ["Properties", "Project Explorer", "context menu"]
- `anchor`: `select Properties`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0012-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0012-001`
- `caption_or_title`: `Project properties Settings Includes page`
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [98.9, 36.9, 495.7, 272.3]
- `image_type`: `screenshot`
- `semantic_description`: C/C++ Build Settings dialog highlights GNU Arm Cross C Compiler > Includes and include path controls.
- `keywords`: ["C/C++ Build", "Settings", "Includes", "GNU Arm Cross C Compiler"]
- `anchor`: `GNU Arm Cross C Compiler > Includes`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0012-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0012-002`
- `caption_or_title`: `Add directory path dialog`
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [98.9, 329.2, 495.7, 468.8]
- `image_type`: `screenshot`
- `semantic_description`: Add directory path dialog highlights the Directory field for the header path.
- `keywords`: ["Add directory path", "Directory", "header path"]
- `anchor`: `Directory text box`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0013-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0013-001`
- `caption_or_title`: `Settings dialog Apply and Close`
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [98.9, 36.9, 495.7, 364.6]
- `image_type`: `screenshot`
- `semantic_description`: Settings dialog shows include file paths and Apply and Close action.
- `keywords`: ["Apply and Close", "include file paths"]
- `anchor`: `Apply and Close`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0013-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0013-002`
- `caption_or_title`: `Rebuild confirmation dialog`
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [155.9, 382.3, 439.2, 474.6]
- `image_type`: `screenshot`
- `semantic_description`: Settings dialog asks whether to rebuild after include path changes.
- `keywords`: ["rebuild", "Settings dialog"]
- `anchor`: `rebuild the project immediately`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0013-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0013-003`
- `caption_or_title`: `Includes folder after rebuild`
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 3 Basic Functions / 3.4 Add Header Files to Includes`
- `bbox`: [155.9, 515.2, 439.3, 744.1]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer shows header files visible under the Includes folder after rebuild.
- `keywords`: ["Includes folder", "header files", "Project Explorer"]
- `anchor`: `header files will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0014-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0014-001`
- `caption_or_title`: `FC4150 build configuration menu`
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project`
- `bbox`: [222.6, 257.0, 372.6, 368.0]
- `image_type`: `screenshot`
- `semantic_description`: Toolbar build configuration menu shows 1M/2M/512K Debug_Flash and Debug_RAM variants for FC4150.
- `keywords`: ["FC4150", "512K Debug_RAM", "Debug_Flash"]
- `anchor`: `For FC4150`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0014-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0014-002`
- `caption_or_title`: `FC7300 build configuration menu`
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project`
- `bbox`: [236.9, 397.5, 358.3, 446.0]
- `image_type`: `screenshot`
- `semantic_description`: Toolbar build configuration menu shows Debug_Flash and Debug_RAM choices for FC7300.
- `keywords`: ["FC7300", "Debug_Flash", "Debug_RAM"]
- `anchor`: `For FC7300`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0014-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0014-003`
- `caption_or_title`: `Project context menu - Build Project`
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project`
- `bbox`: [155.9, 492.3, 439.3, 753.4]
- `image_type`: `screenshot`
- `semantic_description`: Right-click project context menu highlights Build Project.
- `keywords`: ["Build Project", "Project Explorer", "context menu"]
- `anchor`: `select Build Project`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0015-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0015-001`
- `caption_or_title`: `Build result in Console tab`
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project`
- `bbox`: [155.9, 36.9, 439.3, 170.2]
- `image_type`: `screenshot`
- `semantic_description`: Console tab shows a build result line after building.
- `keywords`: ["Console", "Build Finished", "build result"]
- `anchor`: `build result will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0015-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0015-002`
- `caption_or_title`: `Project context menu - Clean Project`
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project`
- `bbox`: [155.9, 256.1, 439.3, 518.2]
- `image_type`: `screenshot`
- `semantic_description`: Project context menu highlights Clean Project.
- `keywords`: ["Clean Project", "Project Explorer"]
- `anchor`: `select Clean Project`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0015-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0015-003`
- `caption_or_title`: `Clean result in Console tab`
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project`
- `bbox`: [155.9, 558.5, 439.3, 691.0]
- `image_type`: `screenshot`
- `semantic_description`: Console tab shows clean operation result.
- `keywords`: ["Console", "clean result"]
- `anchor`: `clean result will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0016-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0016-001`
- `caption_or_title`: `JLink USBDriver folder`
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver`
- `bbox`: [155.9, 110.6, 439.3, 240.1]
- `image_type`: `screenshot`
- `semantic_description`: File explorer opens FC_IDE JLink\USBDriver and shows operating-system-specific folders.
- `keywords`: ["JLink", "USBDriver", "operating system"]
- `anchor`: `JLink\USBDriver`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0016-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0016-002`
- `caption_or_title`: `dpinst executable selection`
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver`
- `bbox`: [155.9, 274.0, 439.3, 442.0]
- `image_type`: `screenshot`
- `semantic_description`: File explorer highlights dpinst_xxx.exe used to launch the driver installer.
- `keywords`: ["dpinst_xxx.exe", "USB driver"]
- `anchor`: `dpinst_xxx.exe`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0016-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0016-003`
- `caption_or_title`: `JLink driver installation wizard Next`
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver`
- `bbox`: [155.9, 481.8, 439.3, 699.8]
- `image_type`: `screenshot`
- `semantic_description`: Installation wizard screenshot highlights the Next button.
- `keywords`: ["installation wizard", "Next"]
- `anchor`: `Click Next`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0017-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0017-001`
- `caption_or_title`: `JLink driver installation wizard Finish`
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `bbox`: [155.9, 36.9, 439.0, 255.0]
- `image_type`: `screenshot`
- `semantic_description`: Installation wizard screenshot shows successful driver components and Finish button.
- `keywords`: ["installation wizard", "Finish"]
- `anchor`: `Click Finish`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0017-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0017-002`
- `caption_or_title`: `Project Explorer with .elf under Debug_RAM`
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `bbox`: [184.3, 363.7, 411.0, 624.2]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer shows .elf output file under Debug_RAM after Refresh.
- `keywords`: [".elf", "Debug_RAM", "Refresh"]
- `anchor`: `an ".elf" file will be shown`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0018-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0018-001`
- `caption_or_title`: `Debug As > FC Application menu`
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `bbox`: [71.4, 36.9, 524.9, 176.5]
- `image_type`: `screenshot`
- `semantic_description`: Debug dropdown menu highlights Debug As > FC Application.
- `keywords`: ["Debug As", "FC Application"]
- `anchor`: `Debug As > FC Application`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0018-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0018-002`
- `caption_or_title`: `C Local Application .elf chooser`
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `bbox`: [212.6, 210.4, 439.4, 580.6]
- `image_type`: `screenshot`
- `semantic_description`: C Local Application dialog lists Flash and RAM .elf choices and OK button.
- `keywords`: ["C Local Application", ".elf", "Debug_Flash", "Debug_RAM"]
- `anchor`: `C Local Application dialog`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0019-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0019-001`
- `caption_or_title`: `Debug Configurations menu item`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `bbox`: [127.4, 36.9, 467.5, 175.5]
- `image_type`: `screenshot`
- `semantic_description`: Debug dropdown menu highlights Debug Configurations.
- `keywords`: ["Debug Configurations", "Debug menu"]
- `anchor`: `select Debug Configurations`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0019-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0019-002`
- `caption_or_title`: `GDB SEGGER J-Link Debugging configuration`
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug`
- `bbox`: [98.9, 244.3, 495.7, 505.3]
- `image_type`: `screenshot`
- `semantic_description`: Debug Configurations dialog shows GDB SEGGER J-Link Debugging configuration and C/C++ Application field.
- `keywords`: ["GDB SEGGER J-Link Debugging", "C/C++ Application"]
- `anchor`: `GDB SEGGER J-Link Debugging`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0020-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0020-001`
- `caption_or_title`: `Debug Configurations C/C++ Application no-elf context`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting`
- `bbox`: [137.9, 36.9, 478.0, 267.8]
- `image_type`: `screenshot`
- `semantic_description`: Debug Configurations screenshot highlights C/C++ Application field and Search Project button for no-.elf handling.
- `keywords`: ["C/C++ Application", "Search Project", ".elf"]
- `anchor`: `no .elf file`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0020-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0020-002`
- `caption_or_title`: `Project context menu - Refresh`
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting`
- `bbox`: [166.4, 319.8, 449.8, 651.7]
- `image_type`: `screenshot`
- `semantic_description`: Right-click project context menu highlights Refresh.
- `keywords`: ["Refresh", "Project Explorer"]
- `anchor`: `select Refresh`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0021-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0021-001`
- `caption_or_title`: `Program Selection dialog after Search Project`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling`
- `bbox`: [109.4, 36.9, 506.2, 296.5]
- `image_type`: `screenshot`
- `semantic_description`: Program Selection dialog shows project selection and OK button used when .elf is missing.
- `keywords`: ["Search Project", "Program Selection", "OK"]
- `anchor`: `Program Selection dialog`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0021-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0021-002`
- `caption_or_title`: `Debug saved configuration dropdown`
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling`
- `bbox`: [99.3, 365.4, 495.9, 484.2]
- `image_type`: `screenshot`
- `semantic_description`: Debug dropdown list shows saved debug configuration for subsequent debugging.
- `keywords`: ["saved configuration", "Debug drop-down list"]
- `anchor`: `select the configuration you saved`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0022-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0022-001`
- `caption_or_title`: `Debugger tab with device and interface fields`
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch`
- `bbox`: [111.0, 36.9, 507.8, 289.9]
- `image_type`: `screenshot`
- `semantic_description`: Debug Configurations Debugger tab shows Device name, Interface, and Initial speed fields to verify.
- `keywords`: ["Debugger tab", "Device name", "Interface", "Initial speed"]
- `anchor`: `Device Name and Interface`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0023-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0023-001`
- `caption_or_title`: `Project Properties device information`
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab`
- `bbox`: [129.0, 36.9, 545.5, 443.9]
- `image_type`: `screenshot`
- `semantic_description`: Project Properties dialog shows Configuration, Flash Size, and Package fields for fixing device-name mismatch.
- `keywords`: ["Properties", "Configuration", "Flash Size", "Package"]
- `anchor`: `Configuration, Flash Size, and Package`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0024-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0024-001`
- `caption_or_title`: `Startup tab reset options`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name`
- `bbox`: [98.9, 36.9, 495.7, 402.7]
- `image_type`: `screenshot`
- `semantic_description`: Debug Configurations Startup tab shows Initial Reset and Halt and Pre-run/Restart reset options to leave unchecked.
- `keywords`: ["Startup tab", "Initial Reset and Halt", "Pre-run/Restart reset"]
- `anchor`: `Startup tab`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0024-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0024-002`
- `caption_or_title`: `Project context menu - Show In > System Explorer`
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: `Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name`
- `bbox`: [127.4, 623.0, 467.5, 779.2]
- `image_type`: `screenshot`
- `semantic_description`: Right-click project context menu highlights Show In > System Explorer for locating the .project file.
- `keywords`: ["Show In", "System Explorer", ".project"]
- `anchor`: `Show In > System Explorer`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0025-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0025-001`
- `caption_or_title`: `.project file in editor`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name`
- `bbox`: [127.4, 76.8, 467.4, 172.1]
- `image_type`: `screenshot`
- `semantic_description`: Editor screenshot shows project metadata XML where project name can be changed.
- `keywords`: [".project", "editor", "XML"]
- `anchor`: `Open the .project file`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0025-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0025-002`
- `caption_or_title`: `Project name inside <name> tag`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name`
- `bbox`: [155.9, 218.6, 439.1, 309.3]
- `image_type`: `screenshot`
- `semantic_description`: XML snippet highlights project name enclosed by <name> and </name>.
- `keywords`: ["<name>", "project name", "XML"]
- `anchor`: `<name> and </name>`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0025-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0025-003`
- `caption_or_title`: `Project context menu - Delete`
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name`
- `bbox`: [155.9, 400.0, 439.3, 566.1]
- `image_type`: `screenshot`
- `semantic_description`: Project context menu highlights Delete before re-importing renamed project.
- `keywords`: ["Delete", "Import Project", "Project Explorer"]
- `anchor`: `select Delete`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0026-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0026-001`
- `caption_or_title`: `Project context menu - Rename`
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder`
- `bbox`: [155.9, 36.9, 439.2, 200.4]
- `image_type`: `screenshot`
- `semantic_description`: Project context menu highlights Rename for Method 2.
- `keywords`: ["Rename", "Project Explorer"]
- `anchor`: `select Rename`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0026-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0026-002`
- `caption_or_title`: `Rename Resource dialog`
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder`
- `bbox`: [155.9, 234.3, 439.3, 351.5]
- `image_type`: `screenshot`
- `semantic_description`: Rename Resource dialog shows New name field and OK button.
- `keywords`: ["Rename Resource", "New name", "OK"]
- `anchor`: `Rename Resource dialog`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0026-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0026-003`
- `caption_or_title`: `Folder context menu - New > File`
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: `Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder`
- `bbox`: [155.9, 391.4, 439.3, 557.4]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer context menu shows New > File for new file creation.
- `keywords`: ["New File", "New > File", "Create New File"]
- `anchor`: `New > File`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0027-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0027-001`
- `caption_or_title`: `Create New File dialog`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder`
- `bbox`: [155.9, 36.9, 439.3, 303.8]
- `image_type`: `screenshot`
- `semantic_description`: Create New File dialog shows File name field and Finish button.
- `keywords`: ["Create New File", "File name", "Finish"]
- `anchor`: `Create New File dialog`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0027-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0027-002`
- `caption_or_title`: `New file displayed in Project Explorer`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder`
- `bbox`: [164.9, 337.8, 448.3, 558.8]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer shows newly created file under the selected folder.
- `keywords`: ["new file", "Project Explorer"]
- `anchor`: `new file will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0027-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0027-003`
- `caption_or_title`: `System Explorer for local folder creation`
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder`
- `bbox`: [155.9, 678.4, 439.2, 757.2]
- `image_type`: `screenshot`
- `semantic_description`: Windows Explorer shows project folder location for creating a local folder.
- `keywords`: ["System Explorer", "local folder"]
- `anchor`: `Creating a Local File/Folder`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0028-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0028-001`
- `caption_or_title`: `Project Explorer after local folder refresh`
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder`
- `bbox`: [155.9, 59.8, 439.3, 275.0]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer shows the newly created folder after Refresh.
- `keywords`: ["Refresh", "new folder", "Project Explorer"]
- `anchor`: `folder you created will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0028-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0028-002`
- `caption_or_title`: `System Explorer for copy-to-directory add flow`
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder`
- `bbox`: [155.9, 429.6, 439.3, 603.8]
- `image_type`: `screenshot`
- `semantic_description`: System Explorer shows target directory for copying an existing file.
- `keywords`: ["Copy to the Directory", "System Explorer"]
- `anchor`: `Copy the file`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0028-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0028-003`
- `caption_or_title`: `Project Explorer after copied file refresh`
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: `Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder`
- `bbox`: [155.9, 649.6, 439.2, 730.0]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer shows copied file displayed after Refresh.
- `keywords`: ["copied file", "Refresh", "Project Explorer"]
- `anchor`: `file you copied will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0029-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0029-001`
- `caption_or_title`: `Project Explorer with added test item`
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: `Chapter 3 Basic Functions / 3.5.5 Add File/Folder`
- `bbox`: [155.9, 36.9, 439.3, 255.5]
- `image_type`: `screenshot`
- `semantic_description`: Project Explorer shows the dropped/linked folder or item displayed in the project tree.
- `keywords`: ["Drag and Drop", "Project Explorer", "test"]
- `anchor`: `folder you dragged and dropped`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0029-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0029-002`
- `caption_or_title`: `File and Folder Operation dialog`
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: `Chapter 3 Basic Functions / 3.5.5 Add File/Folder`
- `bbox`: [155.9, 364.6, 439.3, 523.6]
- `image_type`: `screenshot`
- `semantic_description`: Dialog shows import choices including Link files and folders and OK button.
- `keywords`: ["File and Folder Operation", "Link files and folders", "OK"]
- `anchor`: `Link files and folders`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0030-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0030-001`
- `caption_or_title`: `Window > Show View > Other menu`
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: [89.9, 187.1, 505.2, 355.2]
- `image_type`: `screenshot`
- `semantic_description`: FC_IDE menu screenshot highlights Window > Show View > Other.
- `keywords`: ["Window", "Show View", "Other"]
- `anchor`: `Window > Show View > Other`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0030-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0030-002`
- `caption_or_title`: `Show View dialog - EmbSys Registers`
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: [212.6, 401.0, 382.7, 576.9]
- `image_type`: `screenshot`
- `semantic_description`: Show View dialog under Debug highlights EmbSys Registers and Open button.
- `keywords`: ["Show View", "EmbSys Registers", "Open"]
- `anchor`: `select EmbSys Registers`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0030-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0030-003`
- `caption_or_title`: `EmbSys Registers tab and preferences icon`
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: [89.9, 639.7, 505.2, 715.1]
- `image_type`: `screenshot`
- `semantic_description`: EmbSys Registers tab is shown with register columns and the preferences/configuration icon.
- `keywords`: ["EmbSys Registers", "Preferences", "Register", "Hex", "Bin"]
- `anchor`: `EmbSys Registers tab`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0031-001
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0031-001`
- `caption_or_title`: `EmbSys Registers toolbar/preferences icon context`
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: [127.4, 36.9, 467.2, 106.8]
- `image_type`: `screenshot`
- `semantic_description`: Top screenshot shows Project Explorer and the EmbSys Registers tab, with the preferences/configuration icon highlighted before opening Preferences.
- `keywords`: ["EmbSys Registers", "Project Explorer", "preferences icon", "toolbar"]
- `anchor`: `Click the icon under the tab`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0031-002
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0031-002`
- `caption_or_title`: `Preferences dialog - EmbSysRegView`
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: [127.4, 153.3, 467.5, 389.4]
- `image_type`: `screenshot`
- `semantic_description`: Preferences dialog shows Architecture SVD(CMSIS), Vendor Flagchip, Chip FC4150, and Apply and Close.
- `keywords`: ["Preferences", "SVD(CMSIS)", "Flagchip", "FC4150"]
- `anchor`: `Vendor dropdown list`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

### FIG-0031-003
- `source_figure_number`: `null`
- `generated_figure_number`: `Internal Figure FIG-0031-003`
- `caption_or_title`: `EmbSys Registers populated register list`
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: `Appendix A: How to Load Register Definition File`
- `bbox`: [127.4, 423.2, 467.5, 656.9]
- `image_type`: `screenshot`
- `semantic_description`: Lower screenshot shows the EmbSys Registers view populated with module categories and columns such as Register, Hex, Bin, Reset, Access, Address, and Description.
- `keywords`: ["EmbSys Registers", "ADC", "AFCB", "FLEXCAN", "register tree"]
- `anchor`: `register information will be displayed`
- `confidence`: `0.86`
- `quality_flags`: ["generated_internal_id", "no_source_figure_number", "no_source_caption", "bbox_from_pdf_image_block"]

## 8. Term / API / Config / Requirement Index

### TERM-FC-IDE
- `name`: `FC_IDE`
- `type`: `tool`
- `primary_page`: `1`
- `physical_pages`: `1-2, 4-5, 24, 30`
- `section_paths`: ["Appendix A: How to Load Register Definition File", "Chapter 1 Introduction", "Chapter 2 Launch", "Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Cover", "Revision History"]
- `brief`: Flagchip Eclipse-style IDE covered by this user guide.
- `anchors`:
  - `FC_IDE User Guide`
  - `Change the name of "Easy IDE" to "FC_IDE"`
- `aliases`: ["FC IDE", "Flagchip IDE", "Easy IDE", "Flagchip development environment", "飞旗 IDE"]

### DOC-IDEUG-V2-0-Y23M02
- `name`: `IDEUG -V2.0-Y23M02`
- `type`: `document_id`
- `primary_page`: `2`
- `physical_pages`: `2-3, 31`
- `section_paths`: ["Appendix A: How to Load Register Definition File", "Revision History", "Table of Contents"]
- `brief`: Visible footer document identifier.
- `anchors`:
  - `IDEUG -V2.0-Y23M02`
- `aliases`: ["FC_IDE User Guide V2.0", "IDEUG V2.0"]

### TERM-WORKSPACE
- `name`: `workspace`
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project"]
- `brief`: Directory selected at first IDE launch for preferences and project artifacts.
- `anchors`:
  - `workspace in C:\Projects\test`
- `aliases`: ["工作区", "workspace directory", "C:\Projects\test"]

### GUI-FILE-NEW-PROJECT
- `name`: `File > New > Project`
- `type`: `gui_action`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project"]
- `brief`: Menu path for creating a new project.
- `anchors`:
  - `Select File > New > Project`
- `aliases`: ["新建工程", "new project menu", "File New Project"]

### GUI-FLAGCHIP-NEW-FC-PROJECT
- `name`: `Flagchip > New Fc project`
- `type`: `gui_action`
- `primary_page`: `6`
- `physical_pages`: `6-7`
- `section_paths`: ["Chapter 3 Basic Functions / 3.1 Launch IDE for the First Time / 3.2 New Project", "Chapter 3 Basic Functions / 3.2 New Project"]
- `brief`: Wizard selection used to create a Flagchip FC project.
- `anchors`:
  - `Flagchip > New Fc project`
- `aliases`: ["New Fc project", "Flagchip new project", "新建 FC 工程"]

### CFG-PROJECT-NAME
- `name`: `Project name`
- `type`: `config_item`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project"]
- `brief`: Text field in FC Project dialog for project name.
- `anchors`:
  - `Project name text box`
- `aliases`: ["工程名", "项目名称", "project name text box"]

### CFG-DEVICE-FLASH-PACKAGE
- `name`: `Device / Flash / Package`
- `type`: `config_item`
- `primary_page`: `7`
- `physical_pages`: `7, 10, 22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project", "Chapter 3 Basic Functions / 3.3 Import Project", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: Drop-down selections for device specification, flash size, and package.
- `anchors`:
  - `Device, Flash and Package drop-down list`
- `aliases`: ["器件/Flash/封装", "device specification", "Flash Size", "Package"]

### CFG-SELECT-CONFIGURATIONS
- `name`: `Select Configurations`
- `type`: `config_item`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project"]
- `brief`: Wizard configuration page where default configuration is kept.
- `anchors`:
  - `Select Configurations`
- `aliases`: ["Debug/Release configuration", "选择配置"]

### TOOL-GNU-ARM-CROSS-TOOL-CHAIN
- `name`: `GNU Arm Cross Tool Chain`
- `type`: `toolchain`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project"]
- `brief`: Toolchain configuration wizard page; the guide says to keep defaults and click Finish.
- `anchors`:
  - `GNU Arm Cross Tool Chain`
- `aliases`: ["GNU Arm toolchain", "交叉工具链", "Toolchains path"]

### GUI-PROJECT-EXPLORER
- `name`: `Project Explorer`
- `type`: `gui_view`
- `primary_page`: `9`
- `physical_pages`: `9-10, 13-15, 17, 25, 29, 31`
- `section_paths`: ["Appendix A: How to Load Register Definition File", "Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project", "Chapter 3 Basic Functions / 3.3 Import Project", "Chapter 3 Basic Functions / 3.4 Add Header Files to Includes", "Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project", "Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project", "Chapter 3 Basic Functions / 3.5.2 Debug", "Chapter 3 Basic Functions / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.5 Add File/Folder"]
- `brief`: Left-pane project tree used to view, refresh, build, clean, rename, and inspect project files.
- `anchors`:
  - `Project Explorer`
- `aliases`: ["工程树", "项目浏览器", "left pane"]

### GUI-FILE-IMPORT
- `name`: `File > Import`
- `type`: `gui_action`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project"]
- `brief`: Menu path for importing an existing project.
- `anchors`:
  - `Select File > Import`
- `aliases`: ["导入工程", "Import Project", "existing project import"]

### GUI-EXISTING-PROJECTS-INTO-WORKSPACE
- `name`: `Existing Projects into Workspace`
- `type`: `gui_action`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project"]
- `brief`: Import wizard target for importing existing Eclipse/FC_IDE projects.
- `anchors`:
  - `Existing Projects into Workspace`
- `aliases`: ["Existing Project into Workspace", "导入已有工程"]

### GUI-SELECT-ROOT-DIRECTORY
- `name`: `Select root directory`
- `type`: `gui_field`
- `primary_page`: `9`
- `physical_pages`: `9-10`
- `section_paths`: ["Chapter 3 Basic Functions / 3.2 New Project / 3.3 Import Project", "Chapter 3 Basic Functions / 3.3 Import Project"]
- `brief`: Import Projects dialog field where project path is entered or selected with Browse.
- `anchors`:
  - `Select root directory text box`
- `aliases`: ["root directory", "项目路径", "Browse"]

### WARN-DEVICE-INFO-EMPTY-DIALOG
- `name`: `Flagchip info is empty warning`
- `type`: `warning_dialog`
- `primary_page`: `10`
- `physical_pages`: `10-11`
- `section_paths`: ["Chapter 3 Basic Functions / 3.3 Import Project", "Chapter 3 Basic Functions / 3.4 Add Header Files to Includes"]
- `brief`: Warning when imported project lacks configured device information.
- `anchors`:
  - `Flagchip info is empty`
- `aliases`: ["device information warning", "设备信息为空", "Warning dialog"]

### GUI-PROPERTIES
- `name`: `Properties`
- `type`: `gui_action`
- `primary_page`: `11`
- `physical_pages`: `11, 22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4 Add Header Files to Includes", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: Project context-menu item used to configure project settings and device information.
- `anchors`:
  - `select Properties`
- `aliases`: ["项目属性", "Properties dialog"]

### GUI-C-CXX-BUILD-SETTINGS
- `name`: `C/C++ Build > Settings`
- `type`: `gui_path`
- `primary_page`: `11`
- `physical_pages`: `11-12`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4 Add Header Files to Includes"]
- `brief`: Properties path used to reach compiler include settings.
- `anchors`:
  - `C/C++ Build > Settings`
- `aliases`: ["C/C++ Build Settings", "构建设置"]

### GUI-GNU-ARM-CROSS-C-COMPILER-INCLUDES
- `name`: `GNU Arm Cross C Compiler > Includes`
- `type`: `gui_path`
- `primary_page`: `11`
- `physical_pages`: `11-12`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4 Add Header Files to Includes"]
- `brief`: Compiler settings node where header include paths are added.
- `anchors`:
  - `GNU Arm Cross C Compiler > Includes`
- `aliases`: ["Includes", "include path", "头文件路径"]

### GUI-ADD-DIRECTORY-PATH
- `name`: `Add directory path`
- `type`: `gui_dialog`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4 Add Header Files to Includes"]
- `brief`: Dialog for adding a header directory path.
- `anchors`:
  - `Add directory path dialog`
- `aliases`: ["Directory text box", "添加目录路径"]

### GUI-APPLY-AND-CLOSE
- `name`: `Apply and Close`
- `type`: `gui_action`
- `primary_page`: `12`
- `physical_pages`: `12-13, 31`
- `section_paths`: ["Appendix A: How to Load Register Definition File", "Chapter 3 Basic Functions / 3.4 Add Header Files to Includes"]
- `brief`: Button used to save settings, including include paths and EmbSysRegView preferences.
- `anchors`:
  - `Apply and Close`
- `aliases`: ["应用并关闭", "save settings"]

### CFG-DEBUG-FLASH
- `name`: `Debug_Flash`
- `type`: `build_configuration`
- `primary_page`: `14`
- `physical_pages`: `14-15`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project", "Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project"]
- `brief`: Build configuration that loads program data to flash.
- `anchors`:
  - `Debug_Flash is selected, the data will be loaded to the flash`
- `aliases`: ["Flash debug", "flash load", "Debug Flash"]

### CFG-DEBUG-RAM
- `name`: `Debug_RAM`
- `type`: `build_configuration`
- `primary_page`: `14`
- `physical_pages`: `14-15, 17-18`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project", "Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project", "Chapter 3 Basic Functions / 3.5.2 Debug"]
- `brief`: Build configuration that loads program data to RAM and produces .elf under Debug_RAM.
- `anchors`:
  - `Debug_RAM is selected, the data will be loaded to the RAM`
- `aliases`: ["RAM debug", "ram load", "Debug RAM"]

### DEV-FC4150F512K
- `name`: `FC4150F512K`
- `type`: `device`
- `primary_page`: `14`
- `physical_pages`: `14, 22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: FC4150 variant associated with 512K Debug_Flash and 512K Debug_RAM.
- `anchors`:
  - `512K Debug_Flash and 512K Debug_RAM are for FC4150F512K`
- `aliases`: ["FC4150F512B", "512K FC4150"]

### DEV-FC4150F1M
- `name`: `FC4150F1M`
- `type`: `device`
- `primary_page`: `14`
- `physical_pages`: `14, 22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: FC4150 variant associated with 1M Debug_Flash and 1M Debug_RAM.
- `anchors`:
  - `1M Debug_Flash and 1M Debug_RAM for FC4150F1M`
- `aliases`: ["FC4150F1MB", "1M FC4150"]

### DEV-FC4150F2M
- `name`: `FC4150F2M`
- `type`: `device`
- `primary_page`: `14`
- `physical_pages`: `14, 22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: FC4150 variant associated with 2M Debug_Flash and 2M Debug_RAM.
- `anchors`:
  - `2M Debug_Flash and 2M Debug_RAM for FC4150F2M`
- `aliases`: ["FC4150F2MB", "2M FC4150"]

### DEV-FC7300
- `name`: `FC7300`
- `type`: `device_family`
- `primary_page`: `2`
- `physical_pages`: `2, 14, 22, 24`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project", "Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch", "Revision History"]
- `brief`: FC7300 family added in revision 1.2 and used for build/debug device naming.
- `anchors`:
  - `Added information for FC7300`
  - `For FC7300, the configurations are as follows`
- `aliases`: ["FC7300 family", "FC7300F8MD", "FC7300F8MDQ"]

### GUI-BUILD-PROJECT
- `name`: `Build Project`
- `type`: `gui_action`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project"]
- `brief`: Project context-menu command to build selected project.
- `anchors`:
  - `select Build Project`
- `aliases`: ["编译工程", "build command"]

### GUI-CLEAN-PROJECT
- `name`: `Clean Project`
- `type`: `gui_action`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project"]
- `brief`: Project context-menu command to clean project build output.
- `anchors`:
  - `select Clean Project`
- `aliases`: ["清理工程", "clean command"]

### GUI-CONSOLE
- `name`: `Console tab`
- `type`: `gui_view`
- `primary_page`: `14`
- `physical_pages`: `14-15`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project", "Chapter 3 Basic Functions / 3.5 Build/Clean Project / 3.4.1 Build Project"]
- `brief`: Lower-window Console tab displays build and clean results.
- `anchors`:
  - `Console tab`
- `aliases`: ["控制台", "build result", "clean result"]

### TOOL-JLINK
- `name`: `JLink`
- `type`: `debug_tool`
- `primary_page`: `15`
- `physical_pages`: `15-16`
- `section_paths`: ["Chapter 3 Basic Functions / 3.4.2 Clean Project / 3.6 Debug Project", "Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver"]
- `brief`: Debug tool/driver required because only JLink debug is supported.
- `anchors`:
  - `Only JLink debug is supported currently`
- `aliases`: ["J-Link", "SEGGER J-Link", "JLink debug"]

### PATH-JLINK-USBDRIVER
- `name`: `JLink\USBDriver`
- `type`: `path`
- `primary_page`: `16`
- `physical_pages`: `16`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver"]
- `brief`: Folder inside extracted FC_IDE package that contains USB driver installers.
- `anchors`:
  - `Open JLink\USBDriver`
- `aliases`: ["JLink USBDriver", "USB driver folder"]

### EXE-DPINST-XXX
- `name`: `dpinst_xxx.exe`
- `type`: `executable`
- `primary_page`: `16`
- `physical_pages`: `16`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.1 Install JLink USB Driver"]
- `brief`: USB driver installation executable launched from the OS-specific JLink USBDriver folder.
- `anchors`:
  - `dpinst_xxx.exe`
- `aliases`: ["dpinst", "driver installer"]

### FILE-ELF
- `name`: `.elf file`
- `type`: `file`
- `primary_page`: `17`
- `physical_pages`: `17-20`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug", "Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting"]
- `brief`: Build output selected for debugging from Debug_RAM/Debug_Flash configurations.
- `anchors`:
  - `an ".elf" file will be shown`
- `aliases`: ["ELF", "C/C++ Application", "debug output"]

### GUI-DEBUG-AS-FC-APPLICATION
- `name`: `Debug As > FC Application`
- `type`: `gui_action`
- `primary_page`: `17`
- `physical_pages`: `17-18`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug"]
- `brief`: Debug menu flow for creating/running an FC application debug launch.
- `anchors`:
  - `Debug As > FC Application`
- `aliases`: ["FC Application", "debug as", "调试 FC 应用"]

### GUI-C-LOCAL-APPLICATION
- `name`: `C Local Application`
- `type`: `gui_dialog`
- `primary_page`: `18`
- `physical_pages`: `18`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug"]
- `brief`: Dialog that lists available .elf files for debugging.
- `anchors`:
  - `C Local Application dialog`
- `aliases`: ["local application", "Choose local application"]

### GUI-DEBUG-CONFIGURATIONS
- `name`: `Debug Configurations`
- `type`: `gui_action`
- `primary_page`: `18`
- `physical_pages`: `18-19, 21-23`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug", "Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling", "Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: Dialog used to create and edit GDB SEGGER J-Link debug configurations.
- `anchors`:
  - `Debug Configurations`
- `aliases`: ["调试配置", "debug configuration dialog"]

### TOOL-GDB-SEGGER-JLINK-DEBUGGING
- `name`: `GDB SEGGER J-Link Debugging`
- `type`: `debug_configuration_type`
- `primary_page`: `19`
- `physical_pages`: `19, 21-22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug", "Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: Debug configuration type double-clicked to create a new J-Link debugging configuration.
- `anchors`:
  - `GDB SEGGER J-Link Debugging`
- `aliases`: ["SEGGER J-Link", "GDB J-Link", "J-Link Debugging"]

### GUI-SEARCH-PROJECT
- `name`: `Search Project`
- `type`: `gui_action`
- `primary_page`: `20`
- `physical_pages`: `20-21`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling", "Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting"]
- `brief`: Button used when .elf is not found in the C/C++ Application field.
- `anchors`:
  - `Click Search Project`
- `aliases`: ["Program Selection", "search project button"]

### CFG-DEVICE-NAME
- `name`: `Device Name`
- `type`: `debug_config_item`
- `primary_page`: `21`
- `physical_pages`: `21-23`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / debug problem handling", "Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab", "Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: Debugger-tab device selection that must match selected build configuration.
- `anchors`:
  - `Device Name and Interface`
- `aliases`: ["Device name", "设备名称"]

### DEV-FC7300F8MD-CORE0
- `name`: `FC7300F8MD_CORE0`
- `type`: `device`
- `primary_page`: `22`
- `physical_pages`: `22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: FC7300 device name option for debug configuration.
- `anchors`:
  - `FC7300F8MD_CORE0`
- `aliases`: ["CORE0", "FC7300 core0"]

### DEV-FC7300F8MD-CORE1
- `name`: `FC7300F8MD_CORE1`
- `type`: `device`
- `primary_page`: `22`
- `physical_pages`: `22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: FC7300 device name option for debug configuration.
- `anchors`:
  - `FC7300F8MD_CORE1`
- `aliases`: ["CORE1", "FC7300 core1"]

### DEV-FC7300F8MD-CORE2
- `name`: `FC7300F8MD_CORE2`
- `type`: `device`
- `primary_page`: `22`
- `physical_pages`: `22`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / device name mismatch"]
- `brief`: FC7300 device name option for debug configuration.
- `anchors`:
  - `FC7300F8MD_CORE2`
- `aliases`: ["CORE2", "FC7300 core2"]

### CFG-INTERFACE-JTAG
- `name`: `Interface = JTAG`
- `type`: `debug_config_item`
- `primary_page`: `23`
- `physical_pages`: `23`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab"]
- `brief`: Debugger-tab interface should be set to JTAG.
- `anchors`:
  - `Interface (should be JTAG)`
- `aliases`: ["JTAG interface", "调试接口 JTAG"]

### CFG-INITIAL-SPEED-4000KHZ
- `name`: `Initial speed = fixed 4000 kHz`
- `type`: `debug_config_item`
- `primary_page`: `23`
- `physical_pages`: `23`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab"]
- `brief`: Debugger-tab initial speed should be fixed 4000 kHz.
- `anchors`:
  - `Initial speed (Should be set as fixed 4000 kHz)`
- `aliases`: ["4000 kHz", "initial speed", "调试速率"]

### GUI-STARTUP-TAB
- `name`: `Startup tab`
- `type`: `gui_tab`
- `primary_page`: `23`
- `physical_pages`: `23-24`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab"]
- `brief`: Debug Configurations tab containing Initial Reset and Halt and Pre-run/Restart reset options.
- `anchors`:
  - `In the Startup tab`
- `aliases`: ["启动选项", "Startup"]

### CFG-INITIAL-RESET-AND-HALT
- `name`: `Initial Reset and Halt`
- `type`: `debug_config_item`
- `primary_page`: `23`
- `physical_pages`: `23-24`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab"]
- `brief`: Startup-tab option that should be unchecked.
- `anchors`:
  - `Initial Reset and Halt`
- `aliases`: ["reset and halt", "初始复位并暂停"]

### CFG-PRERUN-RESTART-RESET
- `name`: `Pre-run/Restart reset`
- `type`: `debug_config_item`
- `primary_page`: `23`
- `physical_pages`: `23-24`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.2 Debug / debugger tab and startup tab"]
- `brief`: Startup-tab option that should be unchecked.
- `anchors`:
  - `Pre-run/Restart reset`
- `aliases`: ["pre-run reset", "restart reset"]

### FILE-REGISTER-DEFINITION-XML
- `name`: `Register definition file (XML)`
- `type`: `file`
- `primary_page`: `24`
- `physical_pages`: `24, 30-31`
- `section_paths`: ["Appendix A: How to Load Register Definition File", "Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name"]
- `brief`: XML register definition files for FC4150/FC7300 debugging loaded through EmbSys Registers.
- `anchors`:
  - `register information of FC4150/FC7300 is also provided in XML format`
- `aliases`: ["XML register file", "寄存器定义文件", "register XML", "SVD"]

### GUI-WINDOW-SHOW-VIEW-OTHER
- `name`: `Window > Show View > Other`
- `type`: `gui_action`
- `primary_page`: `30`
- `physical_pages`: `30`
- `section_paths`: ["Appendix A: How to Load Register Definition File"]
- `brief`: Menu path used to open Show View dialog for EmbSys Registers.
- `anchors`:
  - `Window > Show View > Other`
- `aliases`: ["Show View Other", "窗口 显示视图 其他"]

### GUI-EMBSYS-REGISTERS
- `name`: `EmbSys Registers`
- `type`: `gui_view`
- `primary_page`: `30`
- `physical_pages`: `30-31`
- `section_paths`: ["Appendix A: How to Load Register Definition File"]
- `brief`: View used to display loaded peripheral register definitions.
- `anchors`:
  - `EmbSys Registers`
- `aliases`: ["EmbSysRegView", "寄存器视图", "register view"]

### GUI-PREFERENCES
- `name`: `Preferences`
- `type`: `gui_dialog`
- `primary_page`: `30`
- `physical_pages`: `30-31`
- `section_paths`: ["Appendix A: How to Load Register Definition File"]
- `brief`: Preferences dialog used to configure EmbSysRegView vendor and chip.
- `anchors`:
  - `Preferences dialog`
- `aliases`: ["偏好设置", "settings"]

### CFG-VENDOR-FLAGCHIP
- `name`: `Vendor = Flagchip`
- `type`: `config_item`
- `primary_page`: `30`
- `physical_pages`: `30-31`
- `section_paths`: ["Appendix A: How to Load Register Definition File"]
- `brief`: EmbSysRegView vendor selection.
- `anchors`:
  - `select Flagchip from the Vendor dropdown list`
- `aliases`: ["Flagchip vendor", "厂商 Flagchip"]

### CFG-CHIP-FC4150
- `name`: `Chip = FC4150`
- `type`: `config_item`
- `primary_page`: `30`
- `physical_pages`: `30-31`
- `section_paths`: ["Appendix A: How to Load Register Definition File"]
- `brief`: EmbSysRegView chip selection shown in Appendix A.
- `anchors`:
  - `select FC4150 from the Chip dropdown list`
- `aliases`: ["FC4150 chip", "芯片 FC4150"]

### FILE-PROJECT
- `name`: `.project`
- `type`: `file`
- `primary_page`: `24`
- `physical_pages`: `24-25`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.3 Change Project Name"]
- `brief`: Eclipse project metadata file edited to change project name.
- `anchors`:
  - `Open the .project file`
- `aliases`: ["project metadata", "工程配置文件"]

### XML-NAME-ELEMENT
- `name`: `<name>...</name>`
- `type`: `xml_element`
- `primary_page`: `25`
- `physical_pages`: `25`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.3 Change Project Name"]
- `brief`: XML element inside .project that contains project name.
- `anchors`:
  - `<name> and </name>`
- `aliases`: ["name tag", "项目名称标签"]

### GUI-SHOW-IN-SYSTEM-EXPLORER
- `name`: `Show In > System Explorer`
- `type`: `gui_action`
- `primary_page`: `24`
- `physical_pages`: `24, 27-28`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug / 3.7 Edit Project / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.4 New File/Folder", "Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder"]
- `brief`: Context menu path to open project directory in Windows Explorer.
- `anchors`:
  - `Show In > System Explorer`
- `aliases`: ["打开系统资源管理器", "System Explorer"]

### GUI-RENAME-RESOURCE
- `name`: `Rename Resource`
- `type`: `gui_dialog`
- `primary_page`: `25`
- `physical_pages`: `25-26`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.3 Change Project Name", "Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder"]
- `brief`: Dialog opened by context-menu Rename; guide warns this method is not recommended.
- `anchors`:
  - `Rename Resource dialog`
- `aliases`: ["Rename", "重命名资源"]

### GUI-NEW-FILE
- `name`: `New > File`
- `type`: `gui_action`
- `primary_page`: `26`
- `physical_pages`: `26-27`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder", "Chapter 3 Basic Functions / 3.5.4 New File/Folder"]
- `brief`: Context menu path for creating a new file in a selected folder.
- `anchors`:
  - `New > File`
- `aliases`: ["Create New File", "新建文件"]

### GUI-NEW-FOLDER
- `name`: `New File/Folder`
- `type`: `gui_action`
- `primary_page`: `26`
- `physical_pages`: `26-28`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.3 Change Project Name / 3.5.4 New File/Folder", "Chapter 3 Basic Functions / 3.5.4 New File/Folder", "Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder"]
- `brief`: Procedure for creating new files or folders inside project or local directory.
- `anchors`:
  - `3.5.4 New File/Folder`
- `aliases`: ["new folder", "新建文件夹"]

### GUI-FILE-FOLDER-OPERATION
- `name`: `File and Folder Operation`
- `type`: `gui_dialog`
- `primary_page`: `29`
- `physical_pages`: `29`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.5 Add File/Folder"]
- `brief`: Drag-and-drop dialog for choosing how files/folders are imported.
- `anchors`:
  - `File and Folder Operation dialog`
- `aliases`: ["文件夹操作", "drag and drop dialog"]

### GUI-LINK-FILES-AND-FOLDERS
- `name`: `Link files and folders`
- `type`: `gui_option`
- `primary_page`: `29`
- `physical_pages`: `29`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.5 Add File/Folder"]
- `brief`: Option selected in File and Folder Operation dialog for drag-and-drop folder add.
- `anchors`:
  - `Link files and folders`
- `aliases`: ["link to files and folders", "链接文件和文件夹"]

### GUI-REFRESH
- `name`: `Refresh`
- `type`: `gui_action`
- `primary_page`: `17`
- `physical_pages`: `17, 20, 28`
- `section_paths`: ["Chapter 3 Basic Functions / 3.5.2 Debug", "Chapter 3 Basic Functions / 3.5.2 Debug / no .elf troubleshooting", "Chapter 3 Basic Functions / 3.5.4 New File/Folder / 3.5.5 Add File/Folder"]
- `brief`: Context-menu action used to refresh project output, reveal .elf files, or show new/copied files.
- `anchors`:
  - `select Refresh`
- `aliases`: ["刷新", "F5"]

### REQ-NO-FORMAL-IDS-DETECTED
- `name`: `NO_FORMAL_REQUIREMENT_IDS_DETECTED`
- `type`: `quality_marker`
- `primary_page`: `1`
- `physical_pages`: `1`
- `section_paths`: ["Cover"]
- `brief`: This PDF does not contain formal SWS_*/REQ_* requirements; internal Manifest IDs are navigation IDs only.
- `anchors`:
  - `FC_IDE User Guide Rev.2.0`
- `aliases`: ["no requirements", "无正式需求编号"]

## 9. Search Aliases

### ALIAS-FC-IDE
- `canonical`: `FC_IDE`
- `aliases`: ["FC IDE", "Flagchip IDE", "Easy IDE", "FC_IDE User Guide", "飞旗 IDE", "Flagchip 开发环境"]
- `related_ids`: ["TERM-FC-IDE"]

### ALIAS-WORKSPACE
- `canonical`: `workspace`
- `aliases`: ["工作区", "workspace path", "workspace directory", "C:\Projects\test"]
- `related_ids`: ["TERM-WORKSPACE"]

### ALIAS-NEW-PROJECT
- `canonical`: `New Project`
- `aliases`: ["新建工程", "create project", "File > New > Project", "Flagchip > New Fc project", "New Fc project"]
- `related_ids`: ["GUI-FILE-NEW-PROJECT", "GUI-FLAGCHIP-NEW-FC-PROJECT"]

### ALIAS-IMPORT-PROJECT
- `canonical`: `Import Project`
- `aliases`: ["导入工程", "File > Import", "Existing Projects into Workspace", "Select root directory", "import existing project"]
- `related_ids`: ["GUI-FILE-IMPORT", "GUI-EXISTING-PROJECTS-INTO-WORKSPACE"]

### ALIAS-INCLUDES
- `canonical`: `Includes`
- `aliases`: ["头文件路径", "Add Header Files", "include path", "GNU Arm Cross C Compiler > Includes", "header directory"]
- `related_ids`: ["GUI-GNU-ARM-CROSS-C-COMPILER-INCLUDES", "GUI-ADD-DIRECTORY-PATH"]

### ALIAS-BUILD
- `canonical`: `Build Project`
- `aliases`: ["编译工程", "构建工程", "Debug_Flash", "Debug_RAM", "Build Configuration", "Console build result"]
- `related_ids`: ["GUI-BUILD-PROJECT", "CFG-DEBUG-FLASH", "CFG-DEBUG-RAM"]

### ALIAS-CLEAN
- `canonical`: `Clean Project`
- `aliases`: ["清理工程", "clean build", "clean result", "Console clean result"]
- `related_ids`: ["GUI-CLEAN-PROJECT", "GUI-CONSOLE"]

### ALIAS-JLINK
- `canonical`: `JLink`
- `aliases`: ["J-Link", "SEGGER J-Link", "JLink USB Driver", "JLink\USBDriver", "dpinst_xxx.exe"]
- `related_ids`: ["TOOL-JLINK", "PATH-JLINK-USBDRIVER", "EXE-DPINST-XXX"]

### ALIAS-DEBUG
- `canonical`: `Debug Project`
- `aliases`: ["调试工程", "Debug As > FC Application", "Debug Configurations", "GDB SEGGER J-Link Debugging", "C Local Application", ".elf"]
- `related_ids`: ["GUI-DEBUG-AS-FC-APPLICATION", "GUI-DEBUG-CONFIGURATIONS", "TOOL-GDB-SEGGER-JLINK-DEBUGGING", "FILE-ELF"]

### ALIAS-ELF
- `canonical`: `.elf file`
- `aliases`: ["ELF", "C/C++ Application", "Debug_RAM output", "Debug_Flash output", "no elf file"]
- `related_ids`: ["FILE-ELF", "GUI-SEARCH-PROJECT"]

### ALIAS-DEVICE-NAME
- `canonical`: `Device Name`
- `aliases`: ["设备名称", "Debugger tab device", "FC4150F512B", "FC4150F1MB", "FC4150F2MB", "FC7300F8MD_CORE0", "FC7300F8MD_CORE1", "FC7300F8MD_CORE2"]
- `related_ids`: ["CFG-DEVICE-NAME", "DEV-FC7300F8MD-CORE0", "DEV-FC7300F8MD-CORE1", "DEV-FC7300F8MD-CORE2"]

### ALIAS-JTAG
- `canonical`: `Interface = JTAG`
- `aliases`: ["JTAG", "debug interface", "调试接口", "SWD note", "switch from JTAG to SWD"]
- `related_ids`: ["CFG-INTERFACE-JTAG"]

### ALIAS-DEBUG-SPEED
- `canonical`: `Initial speed = fixed 4000 kHz`
- `aliases`: ["4000 kHz", "initial speed", "J-Link speed", "调试速度"]
- `related_ids`: ["CFG-INITIAL-SPEED-4000KHZ"]

### ALIAS-STARTUP-RESET
- `canonical`: `Startup tab reset options`
- `aliases`: ["Initial Reset and Halt", "Pre-run/Restart reset", "startup reset unchecked", "启动复位选项"]
- `related_ids`: ["GUI-STARTUP-TAB", "CFG-INITIAL-RESET-AND-HALT", "CFG-PRERUN-RESTART-RESET"]

### ALIAS-REGISTER-XML
- `canonical`: `Register definition file (XML)`
- `aliases`: ["XML register file", "寄存器定义文件", "SVD(CMSIS)", "EmbSys Registers", "EmbSysRegView", "register information"]
- `related_ids`: ["FILE-REGISTER-DEFINITION-XML", "GUI-EMBSYS-REGISTERS"]

### ALIAS-EMBSYS
- `canonical`: `EmbSys Registers`
- `aliases`: ["EmbSysRegView", "register view", "寄存器视图", "Window > Show View > Other", "Preferences"]
- `related_ids`: ["GUI-EMBSYS-REGISTERS", "GUI-WINDOW-SHOW-VIEW-OTHER", "GUI-PREFERENCES"]

### ALIAS-PROJECT-RENAME
- `canonical`: `Change Project Name`
- `aliases`: ["重命名工程", ".project", "<name>", "Rename Resource", "Delete and re-import"]
- `related_ids`: ["FILE-PROJECT", "XML-NAME-ELEMENT", "GUI-RENAME-RESOURCE"]

### ALIAS-NEW-FILE-FOLDER
- `canonical`: `New File/Folder`
- `aliases`: ["新建文件", "新建文件夹", "New > File", "Create New File", "System Explorer", "local folder"]
- `related_ids`: ["GUI-NEW-FILE", "GUI-NEW-FOLDER", "GUI-SHOW-IN-SYSTEM-EXPLORER"]

### ALIAS-ADD-FILE-FOLDER
- `canonical`: `Add File/Folder`
- `aliases`: ["添加文件", "添加文件夹", "Copy to the Directory", "Drag and Drop", "File and Folder Operation", "Link files and folders"]
- `related_ids`: ["GUI-FILE-FOLDER-OPERATION", "GUI-LINK-FILES-AND-FOLDERS"]

### ALIAS-FC7300
- `canonical`: `FC7300`
- `aliases`: ["FC7300F8MD", "FC7300F8MD_CORE0", "FC7300F8MD_CORE1", "FC7300F8MD_CORE2", "FC7300 build configuration"]
- `related_ids`: ["DEV-FC7300", "DEV-FC7300F8MD-CORE0", "DEV-FC7300F8MD-CORE1", "DEV-FC7300F8MD-CORE2"]

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: "Close keyword lookup gaps between FC_IDE_User_Guide_V2.0.pdf extractable text and this Manifest without copying full PDF prose."
- `source`: `local pypdf text extraction from FC_IDE_User_Guide_V2.0.pdf`
- `source_pdf_sha256`: `d5b806e01ca4f3c48e6915a6ff6985c102610ff0c38fde7d9df6aad976084be9`
- `source_pdf_size_bytes`: `3111729`
- `pdf_page_count`: `31`
- `generated_at`: `2026-06-20T11:56:14Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals, dotted section/version values, register fields, instruction/API symbols, GUI/menu tokens and numeric unit tokens with length >= 3.`
- `normalization`: `Ligatures, soft hyphen variants, Unicode dash variants and known Private Use Area digit glyphs are normalized before token comparison.`
- `scope`: `Text-layer token supplement only; source PDF remains authoritative for FC IDE GUI workflows, screenshots, project settings and table content.`
- `unique_missing_terms_added`: `66`
- `technical_missing_terms_added`: `1`
- `pages_with_added_terms`: `30`
- `supplemented_page_term_entries`: `188`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact FC IDE menu names, GUI workflow steps, screenshots, project settings and tables in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "about"
  - "Confidential"
  - "Editorial"
  - "moved"
  - "Proprietary"
  - "typo"
  - "Updated"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "computer"
  - "Confidential"
  - "following"
  - "Proprietary"
  - "take"
  - "want"
  - "your"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "another"
  - "Confidential"
  - "following"
  - "frequently"
  - "prompted"
  - "Proprietary"
  - "puts"
  - "software"
  - "specify"
  - "store"
  - "take"
  - "want"
  - "your"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "corresponding"
  - "Proprietary"
  - "your"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "following"
  - "Proprietary"
  - "taking"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "case"
  - "Confidential"
  - "corresponding"
  - "Proprietary"
  - "usual"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "following"
  - "need"
  - "Proprietary"
  - "taking"
  - "them"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "corner"
  - "Proprietary"
  - "YES"
  - "your"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "another"
  - "between"
  - "Confidential"
  - "difference"
  - "example"
  - "following"
  - "kinds"
  - "major"
  - "Proprietary"
  - "starting"
  - "Taking"
  - "three"
  - "triangle"
  - "two"
  - "upside-down"
  - "your"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "already"
  - "Confidential"
  - "following"
  - "haven"
  - "installed"
  - "jump"
  - "Proprietary"
  - "take"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "computer"
  - "Confidential"
  - "corresponding"
  - "following"
  - "Proprietary"
  - "take"
  - "your"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "following"
  - "Proprietary"
  - "take"
  - "triangle"
  - "two"
  - "upside-down"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "need"
  - "Proprietary"
  - "triangle"
  - "upside-down"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "following"
  - "Proprietary"
  - "take"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "correctly"
  - "encountered"
  - "need"
  - "Proprietary"
  - "want"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "following"
  - "Proprietary"
  - "take"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "any"
  - "Confidential"
  - "iii"
  - "make"
  - "Proprietary"
  - "Return"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "changing"
  - "Confidential"
  - "convenient"
  - "located"
  - "methods"
  - "Proprietary"
  - "two"
  - "your"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "following"
  - "located"
  - "Notepad"
  - "Proprietary"
  - "specified"
  - "updated"
  - "want"
  - "within"
  - "your"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "certain"
  - "Confidential"
  - "errors"
  - "example"
  - "methods"
  - "Proprietary"
  - "shares"
  - "similar"
  - "Taking"
  - "two"
  - "updated"
  - "want"
  - "which"
  - "your"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "example"
  - "located"
  - "Proprietary"
  - "Taking"
  - "want"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "example"
  - "following"
  - "located"
  - "Proprietary"
  - "take"
  - "Taking"
  - "want"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "example"
  - "need"
  - "Proprietary"
  - "Take"
  - "them"
  - "want"
  - "which"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "better"
  - "bottom"
  - "Confidential"
  - "following"
  - "press"
  - "Proprietary"
  - "take"
  - "upper"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0003-001
- `severity`: `medium`
- `category`: `navigation_structure`
- `physical_pages`: `3`
- `affected_ids`: ["SEC-0003-TOC"]
- `message`: PDF contains no outline/bookmarks; TOC is visible on page 3 and includes internal link annotations. Manifest TOC hierarchy is generated from visible text and links.
- `recommended_action`: Use physical_page as primary locator and verify section headings in source PDF.

### WARN-0014-001
- `severity`: `medium`
- `category`: `source_section_numbering`
- `physical_pages`: `14-17, 24, 26, 28`
- `affected_ids`: ["SEC-003-005", "SEC-003-006", "SEC-003-007"]
- `message`: Source document numbering is internally inconsistent: 3.5 Build/Clean contains 3.4.1/3.4.2; 3.6 Debug contains 3.5.1/3.5.2; 3.7 Edit Project contains 3.5.3/3.5.4/3.5.5.
- `recommended_action`: Manifest preserves source numbering and adds stable SEC-* IDs; search by title or SEC ID if source numbers are confusing.

### WARN-0025-001
- `severity`: `low`
- `category`: `source_cross_reference`
- `physical_pages`: `25`
- `affected_ids`: ["SEC-003-007-A"]
- `message`: Source text says to follow Chapter 3.2 Import Project, but Import Project is labeled 3.3 in the TOC/body.
- `recommended_action`: Use section title and physical pages 9-10 for Import Project.

### WARN-0029-001
- `severity`: `low`
- `category`: `source_cross_reference`
- `physical_pages`: `29`
- `affected_ids`: ["SEC-003-007-C", "SEC-003-004"]
- `message`: Source note refers to Chapter 3.3 Add Header File to Includes, but the Add Header Files to Includes section is labeled 3.4.
- `recommended_action`: Use SEC-003-004 and physical pages 11-13.

### WARN-IMG-0001
- `severity`: `medium`
- `category`: `image_extraction`
- `physical_pages`: `5-31`
- `affected_ids`: ["FIG-0005-001", "FIG-0006-001", "FIG-0006-002", "FIG-0007-001", "FIG-0007-002"]
- `message`: Most procedural details are presented as screenshots without formal figure captions. Image index uses generated FIG-* IDs, semantic descriptions, and PDF image-block bounding boxes.
- `recommended_action`: For GUI visual details, open the source PDF at the listed physical_page and inspect the screenshot.

### WARN-TBL-0001
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `2-3, 14, 22-23, 31`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0014-001", "TBL-0022-001", "TBL-0031-001"]
- `message`: Manifest indexes tables/table-like lists for navigation but does not reproduce full table cell grids. Screenshot table-like content can be partially absent from text extraction.
- `recommended_action`: Verify exact cells and visual menu order against the source PDF.

### WARN-OCR-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1-31`
- `affected_ids`: []
- `message`: PDF has a usable text layer; OCR was not executed. Screenshots may contain visual text not represented in the PDF text layer.
- `recommended_action`: Use source PDF render/screenshot for visual GUI strings not found by text search.

### WARN-REQ-0001
- `severity`: `info`
- `category`: `requirement_id`
- `physical_pages`: `1`
- `affected_ids`: ["REQ-NO-FORMAL-IDS-DETECTED"]
- `message`: No formal SWS_*, REQ_*, or API declaration identifiers were detected. Internal Manifest IDs are navigation IDs only.
- `recommended_action`: Do not treat SEC-*, FIG-*, TBL-*, GUI-*, CFG-* as source requirement IDs.

### WARN-PAGE-0001
- `severity`: `low`
- `category`: `printed_page`
- `physical_pages`: `1`
- `affected_ids`: ["PAGE-0001"]
- `message`: Cover page has no visible printed page number; printed_page is recorded as cover while physical_page remains 1.
- `recommended_action`: Use physical_page for retrieval.

## 11. Self Check Report

- `pdf_page_count`: `31`
- `indexed_physical_pages_count`: `31`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `page_coverage_status`: `pass`
- `page_numbering_policy_status`: `pass_physical_page_1_based`
- `printed_page_policy`: `printed_page is auxiliary; cover has printed_page=cover`
- `toc_index_entries`: `21`
- `page_segment_entries`: `31`
- `table_index_entries`: `5`
- `figure_index_entries`: `61`
- `term_index_entries`: `62`
- `search_alias_entries`: `20`
- `quality_warning_entries`: `9`
- `source_pdf_sha256`: `d5b806e01ca4f3c48e6915a6ff6985c102610ff0c38fde7d9df6aad976084be9`
- `manifest_source_pdf_sha256`: `d5b806e01ca4f3c48e6915a6ff6985c102610ff0c38fde7d9df6aad976084be9`
- `sha256_match_at_generation`: `true`
- `text_layer_search_supplement`: {"status": "pass", "generated_at": "2026-06-20T11:56:14Z", "unique_missing_terms_added": 66, "technical_missing_terms_added": 1, "pages_with_added_terms": 30, "supplemented_page_term_entries": 188, "post_supplement_text_token_recall": "1.000", "post_supplement_technical_token_recall": "1.000"}
- `duplicate_ids`: []
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `formal_requirement_ids_detected`: `false`
- `formal_api_declarations_detected`: `false`
- `ocr_required`: `false`
- `ocr_status`: `not_run_text_layer_available`
- `overall_status`: `pass_with_warnings`

## 12. Manifest Freshness Rule

- `stale_if_source_pdf_sha256_differs_from`: `d5b806e01ca4f3c48e6915a6ff6985c102610ff0c38fde7d9df6aad976084be9`
- `regenerate_required_when`: source PDF bytes change; source PDF page count changes; source PDF visible revision changes; generator schema changes materially.
- `source_pdf_pairing`: place this Manifest in the same directory as `FC_IDE_User_Guide_V2.0.pdf` and import both files together into ChatGPT Project Source or Codex.

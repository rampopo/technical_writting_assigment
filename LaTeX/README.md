# LaTeX Documentation


A practical guide to LaTeX covering document creation, formatting, mathematical expressions, tables, figures, references, and more.

## Table of Contents

1. [Introduction & Setup](#1-introduction--setup)
2. [Document Structure, Classes & Packages](#2-document-structure-classes--packages)
3. [Text Formatting & Organization](#3-text-formatting--organization)
4. [Lists](#4-lists)
5. [Mathematical Expressions](#5-mathematical-expressions)
6. [Tables & Figures](#6-tables--figures)
7. [References & Citations](#7-references--citations)
8. [Page Formatting](#8-page-formatting)
9. [Compilation, Troubleshooting & Resources](#9-compilation-troubleshooting--resources)

---

## 1. Introduction & Setup

### 1.1 What is LaTeX?

LaTeX (pronounced *Lay-tech* or *Lah-tech*) is a document preparation system built on top of TeX. It is widely used to create professionally formatted documents, especially those containing mathematical equations, scientific notation, tables, and references.

Unlike traditional word processors, LaTeX uses markup commands to define the structure and formatting of a document.

### 1.2 Why use LaTeX?

- **Professional Formatting:** Produces clean and consistent documents.
- **Mathematical Typesetting:** Supports complex mathematical expressions.
- **Automatic Numbering:** Numbers sections, figures, tables, and equations.
- **References:** Supports citations and cross-referencing.
- **Consistency:** Maintains uniform formatting throughout documents.
- **Scalability:** Suitable for research papers, reports, and books.

### 1.3 Where is LaTeX used?

- Research papers and academic publications.
- Project reports and assignments.
- Scientific and technical documentation.
- Books and articles.
- Resumes and CVs.
- Mathematical and engineering documents.
- Presentations using Beamer.

### 1.4 Installation and Setup

LaTeX can be used through online editors or local installations.

**Overleaf (Online Editor)**

[Overleaf](https://www.overleaf.com/) is an online LaTeX editor that requires no local installation.

Steps:
1. Visit Overleaf and create an account.
2. Select New Project → Blank Project.
3. Open the `main.tex` file.
4. Write your LaTeX code.
5. Click Recompile to generate the PDF.

**Local Installation**

A local LaTeX setup generally requires a LaTeX distribution and a text editor.

| Tool | Purpose |
|---|---|
| MiKTeX | LaTeX distribution, commonly used on Windows. |
| TeX Live | Comprehensive LaTeX distribution for Windows, Linux, and macOS. |
| VS Code | Code editor for writing LaTeX documents. |
| LaTeX Workshop | VS Code extension for compiling and previewing LaTeX. |

Official websites:

- [MiKTeX](https://miktex.org/)
- [TeX Live](https://www.tug.org/texlive/)
- [Visual Studio Code](https://code.visualstudio.com/)
- [LaTeX Workshop](https://marketplace.visualstudio.com/items?itemName=James-Yu.latex-workshop)

To verify a local installation, run:

```bash
pdflatex --version
```

---

## 2. Document Structure, Classes & Packages

### 2.1 Basic Document Structure

Every LaTeX document consists of two main parts:

- **Preamble:** Contains document settings, packages, and configurations.
- **Document Body:** Contains the actual content of the document.

**Basic Syntax:**

```latex
\documentclass{article}

% Preamble
\usepackage{graphicx}

\begin{document}

% Document Body
Hello, World!

\end{document}
```

### 2.2 Important Commands

| Command | Description |
|---|---|
| `\documentclass{}` | Specifies the document class. |
| `\usepackage{}` | Imports a package. |
| `\begin{document}` | Starts the document body. |
| `\end{document}` | Ends the document body. |
| `%` | Starts a comment. |

### 2.3 Document Classes

Document classes determine the overall structure and formatting of a document.

| Class | Purpose |
|---|---|
| `article` | Articles, assignments, and short reports. |
| `report` | Academic and technical reports. |
| `book` | Books and lengthy documents. |
| `letter` | Formal letters. |
| `beamer` | Presentations. |

**Example:**

```latex
\documentclass[12pt,a4paper]{article}
```

Common class options:

| Option | Description |
|---|---|
| `10pt`, `11pt`, `12pt` | Base font size. |
| `a4paper` | A4 paper size. |
| `letterpaper` | Letter paper size. |
| `twocolumn` | Two-column layout. |
| `twoside` | Two-sided page layout. |
| `oneside` | One-sided page layout. |

### 2.4 Packages

Packages extend LaTeX functionality and are imported in the preamble.

**Syntax:**

```latex
\usepackage[options]{package_name}
```

**Commonly Used Packages:**

| Package | Purpose |
|---|---|
| `amsmath` | Advanced mathematical formatting. |
| `amssymb` | Additional mathematical symbols. |
| `graphicx` | Inserting and resizing images. |
| `geometry` | Adjusting page margins. |
| `hyperref` | Creating clickable links and references. |
| `xcolor` | Adding colors. |
| `booktabs` | Professional table formatting. |
| `float` | Additional control over figure and table placement. |
| `array` | Advanced table column formatting. |
| `enumitem` | Customizing lists. |
| `fancyhdr` | Customizing headers and footers. |
| `listings` | Displaying source code. |
| `pdflscape` | Landscape pages in PDF documents. |

**Example:**

```latex
\documentclass{article}

\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{geometry}
\usepackage{xcolor}
\usepackage{hyperref}

\geometry{margin=1in}

\begin{document}

Hello, LaTeX!

\end{document}
```

### 2.5 Installing Packages

In Overleaf, commonly used packages are generally available automatically.

For local installations:

- **MiKTeX:** Install packages through MiKTeX Console or enable automatic package installation.
- **TeX Live:** Use the package manager from the terminal.

```bash
tlmgr install package_name
```

### 2.6 Custom Commands

Custom commands allow frequently used expressions to be reused.

**Syntax:**

```latex
\newcommand{\commandname}{replacement_text}
```

**Example:**

```latex
\newcommand{\college}{MNIT Jaipur}

\begin{document}

I study at \college.

\end{document}
```

Custom commands can also accept arguments:

```latex
\newcommand{\greet}[1]{Hello, #1!}

\greet{World}
```

Other useful commands:

- `\renewcommand`: Redefines an existing command.
- `\providecommand`: Defines a command only if it does not already exist.

---

## 3. Text Formatting & Organization

### 3.1 Basic Text Formatting

| Command | Description |
|---|---|
| `\textbf{Text}` | Bold text. |
| `\textit{Text}` | Italic text. |
| `\underline{Text}` | Underlined text. |
| `\texttt{Text}` | Monospaced text. |
| `\emph{Text}` | Emphasized text. |

**Example:**

```latex
\textbf{Bold Text}

\textit{Italic Text}

\underline{Underlined Text}

\texttt{Monospaced Text}
```

### 3.2 Font Sizes

| Command | Description |
|---|---|
| `\tiny` | Extremely small. |
| `\scriptsize` | Very small. |
| `\footnotesize` | Small. |
| `\small` | Smaller than normal. |
| `\normalsize` | Normal size. |
| `\large`, `\Large` | Large. |
| `\LARGE`, `\huge` | Very large. |
| `\Huge` | Largest predefined size. |

Example:

```latex
{\small Small Text}

{\Large Large Text}

{\Huge Huge Text}
```

Braces restrict the size change to the enclosed text.

### 3.3 Font Families

| Command | Font Style |
|---|---|
| `\textrm{Text}` | Roman (serif). |
| `\textsf{Text}` | Sans-serif. |
| `\texttt{Text}` | Monospaced. |

### 3.4 Text Alignment

LaTeX provides three commonly used alignment environments.

```latex
\begin{center}
Centered Text
\end{center}

\begin{flushleft}
Left-Aligned Text
\end{flushleft}

\begin{flushright}
Right-Aligned Text
\end{flushright}
```

### 3.5 Text Colors

The `xcolor` package is used to add colors.

```latex
\usepackage{xcolor}
```

**Syntax:**

```latex
\textcolor{red}{Red Text}
```

Custom colors can also be defined:

```latex
\definecolor{mycolor}{RGB}{100,150,200}

\textcolor{mycolor}{Custom Colored Text}
```

### 3.6 Sections and Subsections

LaTeX provides commands to organize documents.

| Command | Purpose |
|---|---|
| `\part{}` | Divides a document into major parts. |
| `\chapter{}` | Creates a chapter in supported classes. |
| `\section{}` | Creates a section. |
| `\subsection{}` | Creates a subsection. |
| `\subsubsection{}` | Creates a smaller subsection. |
| `\paragraph{}` | Creates a paragraph heading. |

**Example:**

```latex
\section{Introduction}

This is the introduction.

\subsection{Background}

Background information goes here.
```

To create an unnumbered section:

```latex
\section*{Acknowledgement}
```

Unnumbered sections can be added to the table of contents using:

```latex
\addcontentsline{toc}{section}{Acknowledgement}
```

### 3.7 Paragraphs and Line Breaks

| Command | Purpose |
|---|---|
| Blank line | Starts a new paragraph. |
| `\\` | Inserts a line break. |
| `\newline` | Starts a new line. |
| `\newpage` | Starts a new page. |
| `\par` | Ends the current paragraph. |

### 3.8 Special Characters

Some characters have special meanings in LaTeX and must be escaped when used as ordinary text.

| Character | Syntax |
|---|---|
| `#` | `\#` |
| `$` | `\$` |
| `%` | `\%` |
| `&` | `\&` |
| `_` | `\_` |
| `{` | `\{` |
| `}` | `\}` |
| `~` | `\textasciitilde{}` |
| `^` | `\textasciicircum{}` |
| `\` | `\textbackslash{}` |

---

## 4. Lists

LaTeX supports different types of lists to organize information.

### 4.1 Unordered Lists

The `itemize` environment creates bullet-point lists.

```latex
\begin{itemize}
    \item First item
    \item Second item
    \item Third item
\end{itemize}
```

### 4.2 Ordered Lists

The `enumerate` environment creates numbered lists.

```latex
\begin{enumerate}
    \item First item
    \item Second item
    \item Third item
\end{enumerate}
```

### 4.3 Description Lists

The `description` environment creates lists with labels.

```latex
\begin{description}
    \item[LaTeX] Document preparation system.
    \item[Beamer] Presentation package.
    \item[Doxygen] Documentation generator.
\end{description}
```

### 4.4 Nested Lists

Lists can be placed inside other lists.

```latex
\begin{itemize}
    \item Programming Languages
    \begin{itemize}
        \item C++
        \item Python
    \end{itemize}

    \item Documentation Tools
    \begin{itemize}
        \item LaTeX
        \item Doxygen
    \end{itemize}
\end{itemize}
```

---

## 5. Mathematical Expressions

LaTeX is widely used for mathematical and scientific documents because it provides powerful mathematical typesetting.

The `amsmath` package provides additional mathematical environments.

```latex
\usepackage{amsmath}
```

### 5.1 Inline and Display Math

**Inline Math:** Displays equations within a line of text.

```latex
The equation is $a^2+b^2=c^2$.
```

**Display Math:** Displays equations separately.

```latex
\[
a^2+b^2=c^2
\]
```

### 5.2 Superscripts and Subscripts

| Syntax | Meaning |
|---|---|
| `x^2` | Superscript. |
| `x_i` | Subscript. |
| `x^{10}` | Multi-character superscript. |
| `a_{ij}` | Multi-character subscript. |

### 5.3 Fractions and Roots

```latex
\[
\frac{a}{b}
\]

\[
\sqrt{x}
\]

\[
\sqrt[n]{x}
\]
```

### 5.4 Common Mathematical Symbols

| Symbol | LaTeX Command |
|---|---|
| \(\alpha\) | `\alpha` |
| \(\beta\) | `\beta` |
| \(\pi\) | `\pi` |
| \(\theta\) | `\theta` |
| \(\infty\) | `\infty` |
| \(\sum\) | `\sum` |
| \(\int\) | `\int` |
| \(\leq\) | `\leq` |
| \(\geq\) | `\geq` |
| \(\neq\) | `\neq` |
| \(\times\) | `\times` |
| \(\div\) | `\div` |

### 5.5 Equations

The `equation` environment creates a numbered equation.

```latex
\begin{equation}
E = mc^2
\end{equation}
```

Use `equation*` for an unnumbered equation (provided by `amsmath`).

### 5.6 Multiple Equations

The `align` environment aligns equations at a specified point using `&`.

```latex
\begin{align}
a+b &= c \\
x+y &= z
\end{align}
```

Use `align*` to remove equation numbering.

### 5.7 Matrices

Matrices can be created using the `matrix` environments.

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

Common matrix environments:

- `matrix`: No surrounding brackets.
- `pmatrix`: Round brackets.
- `bmatrix`: Square brackets.
- `vmatrix`: Vertical bars.

---

## 6. Tables & Figures

LaTeX provides environments for inserting tables and images.

### 6.1 Tables

The `tabular` environment creates tables.

**Syntax:**

```latex
\begin{tabular}{column_specification}
    Content
\end{tabular}
```

Common column specifications:

| Symbol | Meaning |
|---|---|
| `l` | Left aligned. |
| `c` | Center aligned. |
| `r` | Right aligned. |
| `|` | Vertical line. |
| `p{width}` | Fixed-width paragraph column. |

**Example:**

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Aman & 90 \\
Riya & 85 \\
\hline
\end{tabular}
```

### 6.2 Professional Tables

The `booktabs` package provides cleaner horizontal rules.

```latex
\usepackage{booktabs}
```

Example:

```latex
\begin{tabular}{lc}
\toprule
Name & Marks \\
\midrule
Aman & 90 \\
Riya & 85 \\
\bottomrule
\end{tabular}
```

### 6.3 Inserting Images

The `graphicx` package is used to insert images.

```latex
\usepackage{graphicx}
```

**Syntax:**

```latex
\includegraphics[width=0.5\textwidth]{image.png}
```

### 6.4 Figures and Captions

The `figure` environment allows images to have captions and labels.

```latex
\begin{figure}[htbp]
    \centering
    \includegraphics[width=0.6\textwidth]{image.png}
    \caption{Sample Image}
    \label{fig:sample}
\end{figure}
```

Common placement options:

| Option | Meaning |
|---|---|
| `h` | Approximately here. |
| `t` | Top of a page. |
| `b` | Bottom of a page. |
| `p` | Dedicated float page. |
| `!` | Relaxes some float-placement restrictions. |

These are placement preferences, not absolute positioning commands.

---

## 7. References & Citations

LaTeX supports automatic numbering and cross-referencing, making it easier to manage large documents.

### 7.1 Labels and References

The `\label{}` command assigns an identifier to an element, while `\ref{}` refers to its number.

**Example:**

```latex
\section{Introduction}
\label{sec:introduction}

Refer to Section \ref{sec:introduction}.
```

For equations:

```latex
\begin{equation}
E = mc^2
\label{eq:energy}
\end{equation}

Equation \ref{eq:energy} represents mass-energy equivalence.
```

### 7.2 Table of Contents

LaTeX can automatically generate a table of contents.

```latex
\tableofcontents
```

Other useful commands:

```latex
\listoffigures
\listoftables
```

These generate lists of figures and tables.

### 7.3 Bibliography

A simple bibliography can be created using the `thebibliography` environment.

```latex
\begin{thebibliography}{9}

\bibitem{latex}
Leslie Lamport,
\textit{LaTeX: A Document Preparation System}.

\end{thebibliography}
```

Cite the reference using:

```latex
\cite{latex}
```

### 7.4 BibTeX

BibTeX helps manage references using a separate `.bib` file.

Example `references.bib`:

```bibtex
@book{lamport,
    author = {Leslie Lamport},
    title = {LaTeX: A Document Preparation System},
    year = {1994},
    publisher = {Addison-Wesley}
}
```

In the LaTeX document:

```latex
\cite{lamport}

\bibliographystyle{plain}
\bibliography{references}
```

The `.bib` file should be included in the project.

---

## 8. Page Formatting

LaTeX provides several commands and packages to control page layout and appearance.

### 8.1 Page Margins

The `geometry` package is used to customize page margins.

```latex
\usepackage[a4paper,margin=1in]{geometry}
```

Individual margins can also be specified:

```latex
\usepackage[
    top=1in,
    bottom=1in,
    left=1.25in,
    right=1in
]{geometry}
```

### 8.2 Page Orientation

The `pdflscape` package allows landscape pages in PDF documents.

```latex
\usepackage{pdflscape}
```

Example:

```latex
\begin{landscape}

This page is in landscape orientation.

\end{landscape}
```

### 8.3 Page Numbering

The `\pagenumbering{}` command controls page numbering style.

| Command | Numbering Style |
|---|---|
| `arabic` | 1, 2, 3 |
| `roman` | i, ii, iii |
| `Roman` | I, II, III |
| `alph` | a, b, c |
| `Alph` | A, B, C |

Example:

```latex
\pagenumbering{roman}
```

To hide page numbers:

```latex
\pagestyle{empty}
```

### 8.4 Headers and Footers

The `fancyhdr` package provides customization of headers and footers.

```latex
\usepackage{fancyhdr}

\pagestyle{fancy}
\fancyhf{}

\lhead{LaTeX Documentation}
\rhead{Chapter 1}
\cfoot{\thepage}
```

Here:

- `\lhead{}` sets the left header.
- `\rhead{}` sets the right header.
- `\cfoot{}` sets the centered footer.
- `\fancyhf{}` clears existing header and footer fields.

---

## 9. Compilation, Troubleshooting & Resources

### 9.1 Compilation

Compilation converts LaTeX source code (`.tex`) into a formatted output, commonly PDF.

Common LaTeX compilers:

| Compiler | Description |
|---|---|
| pdfLaTeX | Produces PDF output directly. |
| XeLaTeX | Supports Unicode and system fonts. |
| LuaLaTeX | Supports Unicode, OpenType fonts, and Lua scripting. |

### 9.2 Compilation Commands

Compile using pdfLaTeX:

```bash
pdflatex main.tex
```

Compile using XeLaTeX:

```bash
xelatex main.tex
```

Compile using LuaLaTeX:

```bash
lualatex main.tex
```

Some documents require multiple compilation runs to update references, numbering, and the table of contents.

### 9.3 Common Errors and Solutions

| Error | Possible Solution |
|---|---|
| Undefined control sequence | Check command spelling and package imports. |
| Missing `$` inserted | Check mathematical mode delimiters. |
| Missing } inserted | Check opening and closing braces. |
| File not found | Verify the filename and file path. |
| Environment ended by another environment | Match every `\begin{}` with the correct `\end{}`. |
| Undefined references | Recompile the document. |
| Missing package | Install the required package. |

### 9.4 Useful Resources

- [Overleaf Documentation](https://www.overleaf.com/learn)
- [LaTeX Project](https://www.latex-project.org/)
- [CTAN – Comprehensive TeX Archive Network](https://ctan.org/)
- [TeX Live](https://www.tug.org/texlive/)
- [MiKTeX](https://miktex.org/)

---

**End of LaTeX Documentation**


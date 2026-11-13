# BEAMER Documentation

A practical guide to creating professional presentations using LaTeX Beamer, covering frames, themes, formatting, animations, and presentation design.

## Table of Contents

1. [Introduction & Setup](#1-introduction--setup)
2. [Basic Presentation Structure](#2-basic-presentation-structure)
3. [Frames, Titles & Sections](#3-frames-titles--sections)
4. [Text Formatting, Lists & Columns](#4-text-formatting-lists--columns)
5. [Themes, Colors & Fonts](#5-themes-colors--fonts)
6. [Images, Tables & Mathematical Equations](#6-images-tables--mathematical-equations)
7. [Overlays, Animations & Transitions](#7-overlays-animations--transitions)
8. [Compilation, Troubleshooting & Resources](#8-compilation-troubleshooting--resources)

---

## 1. Introduction & Setup

### 1.1 What is Beamer?

Beamer is a LaTeX document class used to create presentations and slides.

It allows users to create structured, professional presentations using LaTeX commands instead of traditional graphical slide editors.

Beamer is particularly useful for academic presentations, technical talks, lectures, and research presentations.

### 1.2 Why use Beamer?

- **Professional Formatting:** Creates consistent and structured slides.
- **Mathematical Support:** Easily includes complex equations and mathematical symbols.
- **Themes:** Provides built-in themes and customization options.
- **Automatic Numbering:** Supports automatic numbering of frames and sections.
- **Code-Based Editing:** Makes presentations easy to maintain and version-control.
- **Integration:** Supports images, tables, references, and other LaTeX features.

### 1.3 Where is Beamer used?

- Academic and research presentations.
- College seminars and lectures.
- Project presentations.
- Technical talks and conferences.
- Mathematical and scientific presentations.

### 1.4 Requirements and Setup

Beamer is included in major LaTeX distributions such as MiKTeX and TeX Live.

You can create Beamer presentations using:

| Tool | Purpose |
|---|---|
| Overleaf | Online LaTeX editor. |
| MiKTeX | LaTeX distribution for Windows. |
| TeX Live | LaTeX distribution for Windows, Linux, and macOS. |
| VS Code | Code editor with LaTeX Workshop extension. |

Useful links:

- [Overleaf](https://www.overleaf.com/)
- [MiKTeX](https://miktex.org/)
- [TeX Live](https://www.tug.org/texlive/)
- [VS Code](https://code.visualstudio.com/)
- [LaTeX Workshop](https://marketplace.visualstudio.com/items?itemName=James-Yu.latex-workshop)

### 1.5 Creating a Beamer Presentation

To create a presentation, use the `beamer` document class.

**Basic Example:**

```latex
\documentclass{beamer}

\begin{document}

\begin{frame}
    \frametitle{My First Presentation}
    Hello, Beamer!
\end{frame}

\end{document}
```

Compile the document to generate a PDF presentation.

**Note:** Beamer uses the same LaTeX syntax and package system as regular LaTeX documents, with additional commands and environments designed specifically for presentations.

## 2. Basic Presentation Structure

A Beamer presentation consists of a preamble and a document body. The preamble defines presentation settings, while the document body contains individual slides called frames.

### 2.1 Basic Syntax

```latex
\documentclass{beamer}

% Preamble
\title{My Presentation}
\author{Your Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

% Title Slide
\begin{frame}
    \titlepage
\end{frame}

% Content Slide
\begin{frame}{Introduction}
    Welcome to my presentation!
\end{frame}

\end{document}
```

### 2.2 Understanding the Commands

| Command | Description |
|---|---|
| `\documentclass{beamer}` | Specifies Beamer as the document class. |
| `\title{}` | Defines the presentation title. |
| `\author{}` | Specifies the author. |
| `\institute{}` | Specifies the institution or organization. |
| `\date{}` | Defines the presentation date. |
| `\begin{document}` | Starts the presentation. |
| `\end{document}` | Ends the presentation. |
| `\titlepage` | Generates the title slide. |

### 2.3 Creating the Title Slide

The `\titlepage` command automatically generates a title slide using the metadata defined in the preamble.

**Example:**

```latex
\documentclass{beamer}

\title{Introduction to Artificial Intelligence}
\subtitle{Fundamentals and Applications}
\author{Your Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\end{document}
```

The title slide displays the title, subtitle, author, institution, and date.

### 2.4 Presentation Metadata

Additional metadata can be defined using:

```latex
\title[Short Title]{Full Presentation Title}

\author[Short Name]{Full Author Name}

\institute[MNIT]{Malaviya National Institute of Technology Jaipur}

\date[\today]{November 2026}
```

The optional arguments in square brackets provide shorter versions that can be used in presentation elements such as headers and footers.

### 2.5 Adding a Table of Contents

The `\tableofcontents` command generates a table of contents based on the sections and subsections defined in the presentation.

**Example:**

```latex
\begin{frame}{Table of Contents}
    \tableofcontents
\end{frame}
```

To display the table of contents for a particular section:

```latex
\begin{frame}{Contents}
    \tableofcontents[currentsection]
\end{frame}
```

### 2.6 Comments in Beamer

Comments work in the same way as regular LaTeX.

Use `%` to write comments that are ignored during compilation.

```latex
% This is a comment

\begin{frame}{Introduction}
    Welcome to Beamer!
\end{frame}
```

## 3. Frames, Titles & Sections

Frames are the basic building blocks of a Beamer presentation. Each frame contains the content displayed on a slide.

### 3.1 Creating a Frame

The `frame` environment is used to create slides.

**Syntax:**

```latex
\begin{frame}{Frame Title}

    Slide content goes here.

\end{frame}
```

**Example:**

```latex
\begin{frame}{Introduction}

    Beamer is used to create presentations using LaTeX.

\end{frame}
```

### 3.2 Adding a Frame Title and Subtitle

The frame title can be specified directly in the `frame` environment.

```latex
\begin{frame}{Introduction}
    This is the slide content.
\end{frame}
```

Alternatively, use:

```latex
\begin{frame}
    \frametitle{Introduction}
    This is the slide content.
\end{frame}
```

A subtitle can be added using `\framesubtitle{}`.

```latex
\begin{frame}{Introduction}
    \framesubtitle{Overview}

    Welcome to the presentation.
\end{frame}
```

### 3.3 Creating Sections and Subsections

Sections and subsections organize slides into logical groups.

| Command | Purpose |
|---|---|
| `\section{}` | Creates a main section. |
| `\subsection{}` | Creates a subsection. |
| `\subsubsection{}` | Creates a lower-level subsection. |

**Example:**

```latex
\section{Introduction}

\begin{frame}{Overview}
    Introduction to the topic.
\end{frame}

\subsection{Background}

\begin{frame}{Background}
    Background information.
\end{frame}

\section{Applications}

\begin{frame}{Applications}
    Practical applications.
\end{frame}
```

Sections can also be displayed in the table of contents using:

```latex
\begin{frame}{Contents}
    \tableofcontents
\end{frame}
```

### 3.4 Unnumbered Sections

Use `\section*{}` and `\subsection*{}` to create unnumbered sections.

```latex
\section*{Acknowledgement}

\begin{frame}{Acknowledgement}
    Thank you to everyone who contributed.
\end{frame}
```

### 3.5 Creating a Frame Without a Navigation Header

The `plain` option creates a frame without the usual headline, footline, and navigation symbols.

It is useful for title slides and full-screen content.

```latex
\begin{frame}[plain]
    \centering
    \Huge Thank You!
\end{frame}
```

### 3.6 Creating a Section Divider Slide

A section divider slide can be generated automatically using `\AtBeginSection`.

```latex
\AtBeginSection[]
{
    \begin{frame}{Contents}
        \tableofcontents[currentsection]
    \end{frame}
}
```

This inserts a table-of-contents slide whenever a new section begins.

---
## 4. Text Formatting, Lists & Columns

Beamer supports LaTeX text formatting commands and provides environments to organize slide content using lists and columns.

### 4.1 Text Formatting

Common text formatting commands:

| Command | Description |
|---|---|
| `\textbf{Text}` | Bold text. |
| `\textit{Text}` | Italic text. |
| `\underline{Text}` | Underlined text. |
| `\texttt{Text}` | Monospaced text. |
| `\emph{Text}` | Emphasized text. |

**Example:**

```latex id="nj0a4x"
\begin{frame}{Text Formatting}

    \textbf{Bold Text}

    \textit{Italic Text}

    \underline{Underlined Text}

    \texttt{Monospaced Text}

\end{frame}
```

### 4.2 Font Sizes

Beamer supports standard LaTeX font-size commands.

| Command | Description |
|---|---|
| `\tiny` | Extremely small. |
| `\scriptsize` | Very small. |
| `\footnotesize` | Small. |
| `\small` | Smaller than normal. |
| `\normalsize` | Normal size. |
| `\large` | Large. |
| `\Large` | Larger. |
| `\LARGE` | Very large. |
| `\huge` | Huge. |
| `\Huge` | Largest predefined size. |

**Example:**

```latex id="q4y8g1"
\begin{frame}{Font Sizes}

    {\small Small Text}

    {\Large Large Text}

    {\Huge Huge Text}

\end{frame}
```

### 4.3 Unordered Lists

The `itemize` environment creates bullet-point lists.

```latex id="kq1k41"
\begin{frame}{Features of Beamer}

    \begin{itemize}
        \item Professional presentations
        \item Mathematical support
        \item Customizable themes
    \end{itemize}

\end{frame}
```

### 4.4 Ordered Lists

The `enumerate` environment creates numbered lists.

```latex id="u42k4g"
\begin{frame}{Presentation Steps}

    \begin{enumerate}
        \item Choose a theme.
        \item Add presentation content.
        \item Compile the document.
    \end{enumerate}

\end{frame}
```

### 4.5 Nested Lists

Lists can contain other lists to organize related information.

```latex id="8k9z6w"
\begin{frame}{Topics}

    \begin{itemize}
        \item Programming
        \begin{itemize}
            \item C++
            \item Python
        \end{itemize}

        \item Documentation
        \begin{itemize}
            \item LaTeX
            \item Beamer
        \end{itemize}
    \end{itemize}

\end{frame}
```

### 4.6 Columns

The `columns` environment divides a frame into multiple columns.

It is useful for displaying text and images side by side.

**Example:**

```latex id="l2d4cs"
\begin{frame}{Two Columns}

    \begin{columns}

        \begin{column}{0.48\textwidth}
            \textbf{Column 1}

            This is the first column.
        \end{column}

        \begin{column}{0.48\textwidth}
            \textbf{Column 2}

            This is the second column.
        \end{column}

    \end{columns}

\end{frame}
```

The column widths should fit within the available slide width, leaving room for spacing between columns.

### 4.7 Text Alignment

Beamer supports standard LaTeX alignment environments.

```latex id="4a8v1q"
\begin{frame}{Text Alignment}

    \begin{center}
        Centered Text
    \end{center}

    \begin{flushleft}
        Left-Aligned Text
    \end{flushleft}

    \begin{flushright}
        Right-Aligned Text
    \end{flushright}

\end{frame}
```

## 5. Themes, Colors & Fonts

Beamer provides built-in themes and customization options to control the appearance of presentations.

### 5.1 Presentation Themes

Themes define the overall visual style of a presentation, including colors, navigation bars, headers, and footers.

Use `\usetheme{}` to select a theme.

**Syntax:**

```latex
\usetheme{theme_name}
```

**Common Beamer Themes:**

| Theme | Description |
|---|---|
| `default` | Basic Beamer appearance. |
| `Madrid` | Structured layout with header and footer elements. |
| `Berlin` | Includes navigation elements. |
| `CambridgeUS` | Traditional academic appearance. |
| `Boadilla` | Clean and minimal layout. |
| `Warsaw` | Includes navigation bars. |
| `AnnArbor` | Distinctive header and footer styling. |
| `Singapore` | Simple presentation style. |
| `metropolis` | Modern presentation theme (requires a separate theme package). |

**Example:**

```latex
\documentclass{beamer}

\usetheme{Madrid}

\begin{document}

\begin{frame}{Introduction}
    Welcome to my presentation!
\end{frame}

\end{document}
```

### 5.2 Color Themes

Color themes control the color scheme of presentation elements.

Use `\usecolortheme{}` to select a color theme.

**Common Color Themes:**

- `default`
- `beaver`
- `seahorse`
- `dolphin`
- `orchid`
- `whale`

**Example:**

```latex
\usetheme{Madrid}
\usecolortheme{seahorse}
```

### 5.3 Custom Colors

The `xcolor` package allows users to define custom colors.

**Example:**

```latex
\usepackage{xcolor}

\definecolor{myblue}{RGB}{30,80,150}

\setbeamercolor{structure}{fg=myblue}
```

Here, `fg` specifies the foreground color.

Other useful Beamer color settings:

```latex
\setbeamercolor{background canvas}{bg=white}

\setbeamercolor{frametitle}{fg=white,bg=blue}

\setbeamercolor{title}{fg=blue}
```

### 5.4 Font Themes

Font themes control the typography of a presentation.

Use `\usefonttheme{}` to select a font theme.

**Common Font Themes:**

| Theme | Description |
|---|---|
| `default` | Standard Beamer typography. |
| `serif` | Uses serif fonts. |
| `professionalfonts` | Uses externally configured fonts. |
| `structurebold` | Makes structural elements bold. |
| `structureitalicserif` | Uses italic serif styling for structural elements. |

**Example:**

```latex
\usefonttheme{serif}
```

### 5.5 Customizing Presentation Fonts

Individual presentation elements can be customized using `\setbeamerfont{}`.

**Syntax:**

```latex
\setbeamerfont{element}{options}
```

**Example:**

```latex
\setbeamerfont{frametitle}{size=\Large,series=\bfseries}

\setbeamerfont{title}{size=\huge,series=\bfseries}
```

### 5.6 Removing Navigation Symbols

Beamer displays navigation symbols by default in many themes.

To remove them:

```latex
\setbeamertemplate{navigation symbols}{}
```

This creates a cleaner presentation appearance.

---

## 6. Images, Tables & Mathematical Equations

Beamer supports images, tables, and mathematical expressions using standard LaTeX commands and packages.

### 6.1 Inserting Images

The `graphicx` package is used to insert and resize images.

```latex
\usepackage{graphicx}
```

**Example:**

```latex
\begin{frame}{Adding Images}

    \centering
    \includegraphics[width=0.6\textwidth]{image.png}

\end{frame}
```

### 6.2 Image Positioning

Images can be positioned using alignment commands and columns.

```latex
\begin{frame}{Image and Text}

    \begin{columns}

        \begin{column}{0.5\textwidth}
            This is the description of the image.
        \end{column}

        \begin{column}{0.5\textwidth}
            \includegraphics[width=\textwidth]{image.png}
        \end{column}

    \end{columns}

\end{frame}
```

### 6.3 Tables

The `tabular` environment is used to create tables.

**Example:**

```latex
\begin{frame}{Student Details}

    \begin{tabular}{|c|c|}
        \hline
        Name & Marks \\
        \hline
        Aman & 90 \\
        Riya & 85 \\
        \hline
    \end{tabular}

\end{frame}
```

Common column specifications:

| Symbol | Meaning |
|---|---|
| `l` | Left aligned. |
| `c` | Center aligned. |
| `r` | Right aligned. |
| `|` | Vertical line. |

### 6.4 Mathematical Equations

Beamer supports mathematical expressions using standard LaTeX math syntax.

Inline mathematics:

```latex
The equation is $a^2+b^2=c^2$.
```

Display mathematics:

```latex
\[
a^2+b^2=c^2
\]
```

### 6.5 Numbered Equations

The `equation` environment creates numbered equations.

```latex
\begin{frame}{Equation}

    \begin{equation}
        E = mc^2
    \end{equation}

\end{frame}
```

### 6.6 Multiple Equations

The `align` environment, provided by `amsmath`, aligns multiple equations.

```latex
\begin{frame}{Multiple Equations}

    \begin{align*}
        a+b &= c \\
        x+y &= z
    \end{align*}

\end{frame}
```

### 6.7 Mathematical Symbols

Some commonly used mathematical commands:

| Symbol | Command |
|---|---|
| \(\alpha\) | `\alpha` |
| \(\beta\) | `\beta` |
| \(\pi\) | `\pi` |
| \(\sum\) | `\sum` |
| \(\int\) | `\int` |
| \(\infty\) | `\infty` |
| \(\leq\) | `\leq` |
| \(\geq\) | `\geq` |

---
## 7. Compilation, Troubleshooting & Resources

### 7.1 Compilation

Compilation converts Beamer source code (`.tex`) into a PDF presentation.

Common LaTeX compilers:

| Compiler | Description |
|---|---|
| pdfLaTeX | Compiles LaTeX documents directly into PDF. |
| XeLaTeX | Supports Unicode and system fonts. |
| LuaLaTeX | Supports Unicode, OpenType fonts, and Lua scripting. |

### 7.2 Compilation Commands

Compile using pdfLaTeX:

```bash
pdflatex presentation.tex
```

Compile using XeLaTeX:

```bash
xelatex presentation.tex
```

Compile using LuaLaTeX:

```bash
lualatex presentation.tex
```

In Overleaf, select the compiler from the project settings and click **Recompile**.

### 7.3 Common Errors and Solutions

| Error | Possible Solution |
|---|---|
| Undefined control sequence | Check command spelling and required packages. |
| Missing `$` inserted | Check mathematical mode delimiters. |
| Missing } inserted | Check opening and closing braces. |
| File not found | Verify image filenames and file paths. |
| Environment ended by another environment | Match every `\begin{}` with its corresponding `\end{}`. |
| Missing package | Install the required package. |
| Slides overflowing | Reduce content or font size, or split the content across frames. |

### 7.4 Useful Resources

- [Overleaf Beamer Documentation](https://www.overleaf.com/learn/latex/Beamer)
- [CTAN – Beamer Package](https://ctan.org/pkg/beamer)
- [LaTeX Project](https://www.latex-project.org/)
- [TeX Live](https://www.tug.org/texlive/)
- [MiKTeX](https://miktex.org/)

---

**End of Beamer Documentation**

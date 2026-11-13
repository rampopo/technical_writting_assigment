# DOXYGEN Documentation


## Table of Contents

1. [Introduction & Installation](#1-introduction--installation)
2. [Basic Doxygen Syntax & Comments](#2-basic-doxygen-syntax--comments)
3. [Documenting Files, Classes & Functions](#3-documenting-files-classes--functions)
4. [Documentation Commands & Tags](#4-documentation-commands--tags)
5. [Configuration File (Doxyfile)](#5-configuration-file-doxyfile)
6. [Generating HTML & PDF Documentation](#6-generating-html--pdf-documentation)
7. [Diagrams, Graphs & Customization](#7-diagrams-graphs--customization)
8. [Troubleshooting & Resources](#8-troubleshooting--resources)

---

## 1. Introduction & Installation

### 1.1 What is Doxygen?

Doxygen is an open-source documentation generator used to create documentation directly from source code.

It reads specially formatted comments in the code and generates documentation in formats such as HTML and LaTeX.

It is commonly used in C and C++ projects to document classes, functions, variables, and files.

### 1.2 Why Use Doxygen?

- Generates documentation automatically from source code.
- Makes code easier to understand and maintain.
- Documents classes, functions, variables, and files.
- Supports HTML and LaTeX output.
- Helps developers understand large codebases.

### 1.3 Installation

**Windows:**
1. Visit the [official Doxygen website](https://www.doxygen.nl/).
2. Open the download section.
3. Download the Windows installer.
4. Run the installer and follow the setup instructions.

**Linux (Ubuntu/Debian):**

```bash
sudo apt update
sudo apt install doxygen
```

**macOS (Homebrew):**

```bash
brew install doxygen
```

### 1.4 Verify Installation

Open a terminal or command prompt and run:

```bash
doxygen --version
```

If Doxygen is installed correctly, the command displays its installed version.

### 1.5 Graphviz Installation

Graphviz is an optional tool that Doxygen can use to generate diagrams, such as class and collaboration graphs.

Install Graphviz separately if you need these diagrams.

Official website: https://graphviz.org/

---
## 2. Basic Doxygen Syntax & Comments

Doxygen generates documentation by identifying specially formatted comments in source code. These comments explain the purpose and functionality of different code elements.

### 2.1 Doxygen Comment Styles

Doxygen supports multiple comment styles.

**1. C-style comment**

```cpp
/**
 * This is a Doxygen comment.
 * It describes the code below it.
 */
```

**2. C++ single-line comment**

```cpp
/// This is a Doxygen comment.
```

**3. C-style single-line comment**

```cpp
//! This is also a Doxygen comment.
```

These comments are commonly placed immediately before the function, class, or variable they describe.

### 2.2 Documenting a Function

Example:

```cpp
/**
 * Adds two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Sum of the two integers
 */
int add(int a, int b) {
    return a + b;
}
```

Doxygen uses the comments to generate documentation for the function, including its parameters and return value.

### 2.3 Documenting a Class

Example:

```cpp
/**
 * Represents a student.
 * Stores basic student information.
 */
class Student {
public:
    string name;
    int rollNumber;
};
```

### 2.4 Documenting Variables

Example:

```cpp
/** Stores the total number of students. */
int studentCount = 0;
```

You can also use a trailing comment:

```cpp
int studentCount = 0;  /**< Total number of students. */
```

### 2.5 Important Doxygen Commands

| Command | Purpose |
|---|---|
| `@brief` | Provides a short description |
| `@details` | Provides a detailed description |
| `@param` | Describes a function parameter |
| `@return` | Describes the return value |
| `@note` | Adds an important note |
| `@warning` | Highlights a warning |
| `@see` | References related documentation |

Example:

```cpp
/**
 * @brief Calculates the square of a number.
 * @param n The input number.
 * @return The square of the input.
 * @note The function works with integers.
 */
int square(int n) {
    return n * n;
}
```

### 2.6 Best Practices

- Write clear and meaningful descriptions.
- Use `@brief` for short summaries.
- Document function parameters and return values.
- Keep comments updated when the code changes.
- Avoid unnecessary comments that simply repeat the code.

---
## 3. Documenting Files, Classes & Functions

Doxygen allows developers to document individual source files, classes, member functions, and other code elements.

### 3.1 Documenting Files

Use the `@file` command to provide documentation for a source or header file.

Example:

```cpp
/**
 * @file calculator.cpp
 * @brief Contains basic mathematical operations.
 * @author Developer
 */
```

This description appears in the generated documentation for the file.

### 3.2 Documenting Classes

Use `@class` to explicitly document a class.

Example:

```cpp
/**
 * @class Calculator
 * @brief Performs basic mathematical operations.
 *
 * This class provides methods for addition and subtraction.
 */
class Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
};
```

Doxygen can also associate a documentation comment placed directly before a class with that class, without requiring `@class`.

### 3.3 Documenting Member Functions

Use `@brief`, `@param`, and `@return` to describe class methods.

Example:

```cpp
/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Sum of the two numbers.
 */
int add(int a, int b) {
    return a + b;
}
```

### 3.4 Documenting Constructors

Constructors can be documented like regular member functions.

Example:

```cpp
/**
 * @brief Creates a Student object.
 * @param studentName Name of the student.
 */
Student(string studentName) {
    name = studentName;
}
```

### 3.5 Documenting Enumerations

Use `@enum` to describe an enumeration and `@var` to describe its values.

Example:

```cpp
/**
 * @enum Status
 * @brief Represents the current status.
 */
enum Status {
    Pending,   /**< Task is waiting. */
    Completed, /**< Task is finished. */
    Failed     /**< Task was unsuccessful. */
};
```

### 3.6 Complete Example

```cpp
/**
 * @file student.h
 * @brief Defines the Student class.
 */

/**
 * @class Student
 * @brief Stores student information.
 */
class Student {
public:
    /**
     * @brief Displays student details.
     * @param name Name of the student.
     */
    void display(string name);
};
```

### 3.7 Best Practices

- Add file-level comments to important source and header files.
- Document public classes and their important methods.
- Explain parameters and return values clearly.
- Use consistent naming and formatting.
- Keep documentation close to the code it describes.

---
## 4. Documentation Commands & Tags

Doxygen provides special commands, also called tags, to organize and improve generated documentation. These commands begin with either `@` or `\`.

### 4.1 Description Commands

| Command | Purpose |
|---|---|
| `@brief` | Adds a short description |
| `@details` | Adds a detailed explanation |
| `@author` | Specifies the author |
| `@version` | Specifies the version |
| `@date` | Specifies the date |
| `@copyright` | Adds copyright information |

Example:

```cpp
/**
 * @brief Manages student records.
 * @details Provides operations to add and display student details.
 * @author Development Team
 * @version 1.0
 */
```

### 4.2 Parameter and Return Commands

| Command | Purpose |
|---|---|
| `@param` | Describes a function parameter |
| `@return` | Describes the return value |
| `@retval` | Describes a specific return value |
| `@throws` | Documents an exception |

Example:

```cpp
/**
 * @brief Divides two numbers.
 * @param a Numerator.
 * @param b Denominator.
 * @return Result of division.
 * @throws invalid_argument If the denominator is zero.
 */
double divide(double a, double b);
```

### 4.3 Warning and Information Commands

| Command | Purpose |
|---|---|
| `@note` | Adds additional information |
| `@warning` | Highlights a potential problem |
| `@attention` | Highlights important information |
| `@todo` | Marks unfinished work |
| `@deprecated` | Marks an outdated feature |

Example:

```cpp
/**
 * @brief Connects to the database.
 * @note Requires a valid database configuration.
 * @warning Do not call before initialization.
 * @todo Add connection retry support.
 */
void connectDatabase();
```

### 4.4 Grouping Commands

Doxygen can organize related functions and classes into logical groups.

Important commands:

- `@defgroup`: Defines a documentation group.
- `@ingroup`: Adds an element to an existing group.
- `@{` and `@}`: Mark the beginning and end of a group.

Example:

```cpp
/**
 * @defgroup MathOperations Mathematical Operations
 * @{
 */

/** Adds two numbers. */
int add(int a, int b);

/** Subtracts two numbers. */
int subtract(int a, int b);

/** @} */
```

Both functions will appear under the **Mathematical Operations** group.

### 4.5 Linking Commands

| Command | Purpose |
|---|---|
| `@see` | Refers to related documentation |
| `@ref` | Creates a reference to another documented element |
| `@link` | Starts a link to another documented element |
| `@endlink` | Ends a link |

Example:

```cpp
/**
 * @brief Calculates the total price.
 * @see calculateTax()
 */
double calculateTotal();
```

### 4.6 Important Notes

- Doxygen commands can use either `@` or `\`.
- Commands should be spelled correctly.
- Use tags only when they add useful information.
- Refer to the official Doxygen documentation for the complete command list.

---
## 5. Configuration File (`Doxyfile`)

A `Doxyfile` is the configuration file used by Doxygen to control how documentation is generated. It specifies the source files, output directory, documentation format, and other settings.

### 5.1 Creating a Doxyfile

Run the following command in your project directory:

```bash
doxygen -g
```

This generates a default configuration file named `Doxyfile`.

To specify a different filename:

```bash
doxygen -g my_config
```

### 5.2 Important Configuration Options

| Setting | Purpose |
|---|---|
| `PROJECT_NAME` | Sets the project name |
| `PROJECT_NUMBER` | Specifies the project version |
| `INPUT` | Specifies source files or directories |
| `FILE_PATTERNS` | Specifies file extensions to process |
| `RECURSIVE` | Searches input directories recursively |
| `OUTPUT_DIRECTORY` | Sets the output directory |
| `GENERATE_HTML` | Enables HTML documentation |
| `GENERATE_LATEX` | Enables LaTeX documentation |
| `EXTRACT_ALL` | Includes all documented and undocumented entities |
| `HAVE_DOT` | Enables Graphviz integration |

### 5.3 Editing the Doxyfile

Open the generated `Doxyfile` in a text editor and modify the required settings.

Example configuration:

```ini
PROJECT_NAME = "Student Management System"
PROJECT_NUMBER = 1.0

INPUT = ./src ./include
FILE_PATTERNS = *.cpp *.h
RECURSIVE = YES

OUTPUT_DIRECTORY = ./docs

GENERATE_HTML = YES
GENERATE_LATEX = NO

EXTRACT_ALL = YES
```

This configuration tells Doxygen to:
- Read C++ source and header files from `src` and `include`.
- Search subdirectories recursively.
- Generate HTML documentation inside the `docs` directory.
- Include undocumented code elements.

### 5.4 Useful Configuration Options

**Extracting documentation:**

```ini
EXTRACT_ALL = YES
EXTRACT_PRIVATE = NO
EXTRACT_STATIC = NO
```

**Generating a class hierarchy:**

```ini
HAVE_DOT = YES
CLASS_DIAGRAMS = YES
```

Graphviz must be installed and available for Doxygen to generate supported diagrams.

### 5.5 Running Doxygen with a Configuration File

After editing the configuration file, run:

```bash
doxygen Doxyfile
```

Doxygen reads the configuration and generates documentation according to the specified settings.

### 5.6 Best Practices

- Keep the `Doxyfile` in the project root directory.
- Specify only the required source directories.
- Use `RECURSIVE = YES` for projects with nested folders.
- Enable only the output formats you need.
- Keep configuration settings consistent across project updates.

---
## 6. Generating HTML & PDF Documentation

Doxygen can generate documentation in multiple formats. HTML is commonly used for browsing documentation, while PDF can be created through its LaTeX output.

### 6.1 Generating HTML Documentation

**Step 1:** Open the terminal in your project directory.

**Step 2:** Run:

```bash
doxygen Doxyfile
```

**Step 3:** Open the generated HTML documentation.

By default, the HTML output is stored in:

```text
html/index.html
```

If `OUTPUT_DIRECTORY = ./docs` is configured, the path becomes:

```text
docs/html/index.html
```

Open `index.html` in a web browser to view the documentation.

### 6.2 Generating LaTeX Documentation

To generate LaTeX output, enable the following option in the `Doxyfile`:

```ini
GENERATE_LATEX = YES
```

Then run:

```bash
doxygen Doxyfile
```

Doxygen generates LaTeX files inside the `latex` output directory.

### 6.3 Converting LaTeX Output to PDF

To create a PDF, you need a LaTeX distribution such as MiKTeX or TeX Live.

Navigate to the generated LaTeX directory:

```bash
cd docs/latex
```

Compile the main LaTeX file:

```bash
pdflatex refman.tex
```

The generated PDF is generally named:

```text
refman.pdf
```

Depending on the documentation features and references, additional compilation runs may be required.

### 6.4 Generating Documentation in Specific Formats

You can enable or disable output formats in the `Doxyfile`.

```ini
GENERATE_HTML = YES
GENERATE_LATEX = YES
```

To generate only HTML documentation:

```ini
GENERATE_HTML = YES
GENERATE_LATEX = NO
```

### 6.5 Output Directory Structure

A typical generated directory structure looks like this:

```text
docs/
├── html/
│   ├── index.html
│   ├── classes.html
│   └── files.html
│
└── latex/
    ├── refman.tex
    └── Makefile
```

The exact files and folders depend on your configuration and project.

### 6.6 Best Practices

- Generate HTML documentation for easy browsing.
- Use LaTeX output when a printable PDF is required.
- Keep generated documentation separate from source code.
- Regenerate documentation whenever important code or comments change.
- Check the generated output for missing descriptions and broken references.

---
## 7. Troubleshooting & Resources

### 7.1 Common Problems and Solutions

| Problem | Possible Solution |
|---|---|
| `doxygen` command not found | Check whether Doxygen is installed and added to PATH. |
| No documentation generated | Verify the `INPUT` path in the Doxyfile. |
| Source files are not detected | Check `FILE_PATTERNS` and file extensions. |
| Comments are missing | Use valid Doxygen comment syntax. |
| Undocumented members are missing | Set `EXTRACT_ALL = YES`. |
| Diagrams are not generated | Install Graphviz and enable `HAVE_DOT = YES`. |
| HTML output is missing | Check that `GENERATE_HTML = YES`. |
| PDF generation fails | Check your LaTeX installation and compile the generated LaTeX files. |

### 7.2 Useful Commands

| Command | Purpose |
|---|---|
| `doxygen --version` | Displays the installed version |
| `doxygen -g` | Generates a default Doxyfile |
| `doxygen Doxyfile` | Generates documentation using the configuration |
| `doxygen -u Doxyfile` | Updates an existing Doxyfile with new default settings |
| `doxygen -s -g` | Generates a Doxyfile without detailed comments |

### 7.3 Documentation Resources

- [Official Doxygen Website](https://www.doxygen.nl/)
- [Doxygen Manual](https://www.doxygen.nl/manual/)
- [Doxygen Commands](https://www.doxygen.nl/manual/commands.html)
- [Doxygen Configuration](https://www.doxygen.nl/manual/config.html)
- [Graphviz Official Website](https://graphviz.org/)

### 7.4 Final Notes

- Write meaningful documentation comments alongside your code.
- Maintain the Doxyfile as your project evolves.
- Regenerate documentation after significant code changes.
- Review the generated output to ensure accuracy and completeness.

---

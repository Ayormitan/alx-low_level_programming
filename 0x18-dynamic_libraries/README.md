# C - Dynamic Libraries

## #Introduction
This project involves creating dynamic libraries in C on Linux and executing various tasks related to them. The tasks include creating dynamic libraries, generating a script to create a library from multiple C files, and interfacing with Python using a dynamic library.

## #DifferenceBetweenDynamicAndStaticLibraries
Dynamic libraries are linked during runtime, allowing for flexibility and modularity, while static libraries are linked during compilation, resulting in larger executable files.

## #CreatingDynamicLibrariesOnLinux
### #Requirements
- C
- Editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Files ending with a newline
- Betty style usage
- No global variables
- No standard library functions, except for _putchar
- Maximum of 5 functions per file

### #CodingGuidelines
#### #C
- Use Betty style (checked with betty-style.pl and betty-doc.pl)
- Prototypes of functions and _putchar in main.h

#### #Bash
- Scripts tested on Ubuntu 20.04 LTS
- Files ending with a newline
- First line: `#!/bin/bash`
- README.md describing each script
- All scripts must be executable

## #Task1: Create the Dynamic Library libdynamic.so
Implement the functions listed in the task and compile them into a dynamic library called libdynamic.so.

## #Task2: Create a Script for liball.so
Develop a script that creates a dynamic library named liball.so from all the .c files in the current directory.

## #Task3: Create a Dynamic Library for Python
Build a dynamic library with C functions that can be called from Python. Refer to the example for details.

## #Task4: Giga Millions Jackpot
### #DownloadTheProgram
Download the Giga Millions program from the provided link.

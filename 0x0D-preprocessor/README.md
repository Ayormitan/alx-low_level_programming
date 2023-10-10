# C - Preprocessor

## Resources

- [Understanding C program Compilation Process](#understanding-c-program-compilation-process)
- [Object-like Macros](#object-like-macros)
- [Macro Arguments](#macro-arguments)
- [Pre Processor Directives in C](#pre-processor-directives-in-c)
- [The C Preprocessor](#the-c-preprocessor)
- [Standard Predefined Macros](#standard-predefined-macros)
- [Include Guard](#include-guard)
- [Common Predefined Macros](#common-predefined-macros)

## General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden
- You are allowed to use `_putchar`
- You dont have to push `_putchar.c`, we will use our file. If you do it wont be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- All your header files should be include guarded

## Tasks

### Task 1

- Create a header file that defines a macro named SIZE as an abbreviation for the token 1024

### Task 2

- Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359

### Task 3

- Write a program that prints the name of the file it was compiled from, followed by a new line.

### Task 4

- Write a function-like macro ABS(x) that computes the absolute value of a number x.

### Task 5

- Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y


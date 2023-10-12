# C - Variadic Functions

## Table of Contents
- [Resources](#resources)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 1: `sum_them_all`](#task-1-sum_them_all)
  - [Task 2: `print_numbers`](#task-2-print_numbers)
  - [Task 3: `print_strings`](#task-3-print_strings)
  - [Task 4: `print_all`](#task-4-print_all)

## Resources
- [stdarg.h](https://en.cppreference.com/w/c/header/stdarg.h)
- [Variadic Functions](https://en.wikipedia.org/wiki/Variadic_function)

## Requirements
- **General**
  - Allowed editors: vi, vim, emacs
  - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
  - All your files should end with a new line
  - A README.md file, at the root of the folder of the project is mandatory
  - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
  - You are not allowed to use global variables
  - No more than 5 functions per file
  - The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden
  - You are allowed to use the following macros: va_start, va_arg, and va_end
  - You are allowed to use _putchar
  - You dont have to push _putchar.c; we will use our file. If you do, it wont be taken into account
  - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do, we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
  - Dont forget to push your header file

## Tasks

### Task 1: `sum_them_all`
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return 0

### Task 2: `print_numbers`
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- where separator is the string to be printed between numbers
- and n is the number of integers passed to the function
- You are allowed to use printf
- If separator is NULL, dont print it
- Print a new line at the end of your function

### Task 3: `print_strings`
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- where separator is the string to be printed between the strings
- and n is the number of strings passed to the function
- You are allowed to use printf
- If separator is NULL, dont print it
- If one of the strings is NULL, print (nil) instead
- Print a new line at the end of your function

### Task 4: `print_all`
- Prototype: `void print_all(const char * const format, ...);`
- where format is a list of types of arguments passed to the function
- c: char
- i: integer
- f: float
- s: char * (if the string is NULL, print (nil) instead)
- any other char should be ignored
- You are not allowed to use for, goto, ternary operator, else, do ... while
- You can use a maximum of
  - 2 while loops
  - 2 if statements
- You can declare a maximum of 9 variables
- You are allowed to use printf
- Print a new line at the end of your function


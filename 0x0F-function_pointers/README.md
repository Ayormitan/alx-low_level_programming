# C - Function Pointers

## Resources
- [Function Pointer in C](#function-pointer-in-c)
- [Pointers to Functions](#pointers-to-functions)
- [Function Pointers in C / C++](#function-pointers-in-c-c)
- [Why Pointers to Functions?](#why-pointers-to-functions)
- [Everything You Need to Know About Pointers in C](#everything-you-need-to-know-about-pointers-in-c)

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden
- You are allowed to use _putchar
- You dont have to push _putchar.c, we will use our file. If you do it wont be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
- Dont forget to push your header file

## Sections

### 1. Write a function that prints a name.
- Prototype: void print_name(char *name, void (*f)(char *))

### 2. Write a function that executes a function given as a parameter on each element of an array.
- Prototype: void array_iterator(int *array, size_t size, void (*action)(int))
- where size is the size of the array
- and action is a pointer to the function you need to use

### 3. Write a function that searches for an integer.
- Prototype: int int_index(int *array, int size, int (*cmp)(int))
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

### 4. Write a program that performs simple operations.
- You are allowed to use the standard library
- Usage: calc num1 operator num2
- You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
- operator is one of the following:
  - +: addition
  - -: subtraction
  - *: multiplication
  - /: division
  - %: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- If the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- If the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- If the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

## File Structure

### 3-calc.h
- This file should contain all the function prototypes and data structures used by the program.

### 3-op_functions.c
- This file should contain the 5 following functions (not more):
  - op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
  - op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
  - op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
  - op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
  - op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

### 3-get_op_func.c
- This file should contain the function that selects the correct function to perform the operation asked by the user. Youre not allowed to declare any other function.
  - Prototype: int (*get_op_func(char *s))(int, int);
  - where s is the operator passed as an argument to the program
  - This function returns a pointer to the function that corresponds to the operator given as a parameter.
  - Example: get_op_func("+") should return a pointer to the function op_add
  - You are not allowed to use switch statements
  - You are not allowed to use for or do ... while loops
  - You are not allowed to use goto
  - You are not allowed to use else
  - You are not allowed to use more than one if statement in your code
  - You are not allowed to use more than one while loop in your code
  - If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL

### 3-main.c
- This file should contain your main function only.
- You are not allowed to code any other function than main in this file
- You are not allowed to directly call op_add, op_sub, op_mul, op_div, or op_mod from the main function
- You have to use atoi to convert arguments to int
- You are not allowed to use any kind of loop
- You are allowed to use a maximum of 3 if statements


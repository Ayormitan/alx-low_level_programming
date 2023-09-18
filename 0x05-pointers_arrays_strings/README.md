# C - Pointers, Arrays, and Strings

This repository contains a collection of C programs that focus on working with pointers, arrays, and strings. It covers various concepts related to data structures and provides practical examples to help you understand these fundamental topics in C programming.

## Concepts

- **Pointers and arrays**: Learn how pointers and arrays are closely related and how to work with them effectively.
- **Data Structures**: Explore the basics of data structures in C, including arrays and strings.

## Resources

- [C - Arrays](Resources/C-Arrays.md)
- [C - Pointers](Resources/C-Pointers.md)
- [C - Strings](Resources/C-Strings.md)
- [Memory Layout](Resources/Memory-Layout.md)

## Requirements

### General

- **Allowed editors**: vi, vim, emacs
- **Compiler**: GCC (GNU Compiler Collection)
- **Operating System**: Ubuntu 20.04 LTS

### Code Style

- code should adhere to the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`.
- Avoid global variables.
- Each source file should contain no more than 5 functions.
- You are not allowed to use the standard library functions like `printf`, `puts`, etc., except for `_putchar`.

### Files and Headers

- Include a `README.md` file at the root of the project folder (like this one).
- All your C source files should end with a new line.
- Define prototypes for all functions in a header file called `main.h`.

## Project Tasks

### Task 1: Reset to 98

Write a function that takes a pointer to an int as a parameter and updates the value it points to 98.

```c
Prototype: void reset_to_98(int *n);
2. **Task 2: Swap Integers**
   - Write a function that swaps the values of two integers.
   - Prototype: `void swap_int(int *a, int *b);`

3. **Task 3: String Length**
   - Write a function that returns the length of a string.
   - Prototype: `int _strlen(char *s);`

4. **Task 4: Print a String**
   - Write a function that prints a string, followed by a new line, to stdout.
   - Prototype: `void _puts(char *str);`

5. **Task 5: Print Reverse**
   - Write a function that prints a string in reverse, followed by a new line.
   - Prototype: `void print_rev(char *s);`

6. **Task 6: Reverse a String**
   - Write a function that reverses a string.
   - Prototype: `void rev_string(char *s);`

7. **Task 7: Print Every Other Character**
   - Write a function that prints every other character of a string, starting with the first character, followed by a new line.
   - Prototype: `void puts2(char *str);`

8. **Task 8: Print Half of a String**
   - Write a function that prints half of a string, followed by a new line.
   - Prototype: `void puts_half(char *str);`
   - Note: The function should print the second half of the string. If the number of characters is odd, it should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.

9. **Task 9: Print Array**
   - Write a function that prints n elements of an array of integers, followed by a new line.
   - Prototype: `void print_array(int *a, int n);`

10. **Task 10: Copy a String**
    - Write a function that copies a string from `src` to `dest` and returns `dest`.
    - Prototype: `char *_strcpy(char *dest, char *src);`

11. **Task 11: Convert String to Integer**
    - Write a function that converts a string to an integer.
    - Prototype: `int _atoi(char *s);`

12. **Task 12: Generate Passwords**
    - Create a program that generates random valid passwords for the program 101-crackme.
    - You are allowed to use the standard library.
    - You don't have to pass the betty-style tests (you still need to pass the betty-doc tests).
    - Reference: `man srand`, `rand`, `time`
    - Useful tools: `gdb` and `objdump`

## Usage

Feel free to explore each task's directory for detailed implementations and example code. You can also use the provided examples for testing your functions.

## Contact

If you have any questions or suggestions, please feel free to contact me at ayomiotanomotayo@gmail.com].


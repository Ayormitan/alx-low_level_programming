# C - More Pointers, Arrays, and Strings

## Description
This repository contains C programs that demonstrate various string and array manipulation functions.

## Requirements
- All code is compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files end with a new line.
- A `README.md` file, located at the root of the project folder, is mandatory.
- Code must adhere to the Betty coding style.
- No global variables are allowed.
- Each file contains no more than 5 functions.
- Standard library functions such as `printf`, `puts`, etc., are forbidden; only `_putchar` can be used.
- The `main.h` header file contain prototypes for all functions, including `_putchar`.

## Functions

### 1. `_strcat`
- Prototype: `char *_strcat(char *dest, char *src)`
- Description: This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`'\0'`) at the end of `dest`, and then adds a terminating null byte.
- Returns: A pointer to the resulting string `dest`.

### 2. `_strncat`
- Prototype: `char *_strncat(char *dest, char *src, int n)`
- Description: The `_strncat` function is similar to `_strcat`, but it uses at most `n` bytes from `src`, and `src` does not need to be null-terminated if it contains `n` or more bytes.
- Returns: A pointer to the resulting string `dest`.

### 3. `_strncpy`
- Prototype: `char *_strncpy(char *dest, char *src, int n)`
- Description: This function copies a string from `src` to `dest`, working exactly like `strncpy`.
- Returns: A pointer to `dest`.

### 4. `_strcmp`
- Prototype: `int _strcmp(char *s1, char *s2)`
- Description: This function compares two strings, working exactly like `strcmp`.
- Returns: An integer representing the comparison result.

### 5. `reverse_array`
- Prototype: `void reverse_array(int *a, int n)`
- Description: This function reverses the content of an array of integers.
- Parameters:
  - `a`: Pointer to the array of integers.
  - `n`: Number of elements in the array.

### 6. `string_toupper`
- Prototype: `char *string_toupper(char *)`
- Description: This function changes all lowercase letters of a string to uppercase.
- Returns: A pointer to the modified string.

### 7. `cap_string`
- Prototype: `char *cap_string(char *)`
- Description: This function capitalizes all words of a string based on specified separators.
- Returns: A pointer to the modified string.

### 8. `leet`
- Prototype: `char *leet(char *)`
- Description: This function encodes a string into "1337" format by replacing specific letters with numbers.
- Returns: A pointer to the modified string.

### 9. `rot13`
- Prototype: `char *rot13(char *)`
- Description: This function encodes a string using the ROT13 cipher.
- Returns: A pointer to the modified string.

### 10. `print_number`
- Prototype: `void print_number(int n)`
- Description: This function prints an integer using `_putchar` without using long, arrays, or pointers.
- Parameters:
  - `n`: The integer to be printed.

### 11. Add one line to this code
- Description: Add one line to a given code snippet to print a specific value, following certain restrictions.

### 12. `infinite_add`
- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r)`
- Description: This function adds two positive numbers represented as strings and stores the result in a buffer.
- Parameters:
  - `n1` and `n2`: The two numbers to be added.
  - `r`: The buffer used to store the result.
  - `size_r`: The size of the buffer.
- Returns: A pointer to the result, or `0` if the result cannot be stored in `r`.

### 13. `print_buffer`
- Prototype: `void print_buffer(char *b, int size)`
- Description: This function prints the content of a buffer in a specific format.
- Parameters:
  - `b`: Pointer to the buffer.
  - `size`: The number of bytes to print.
- Output: The content of the buffer displayed in a formatted manner.

## Usage
Each function's prototype and description are provided. You can include these functions in your C programs for various string and array manipulation tasks.

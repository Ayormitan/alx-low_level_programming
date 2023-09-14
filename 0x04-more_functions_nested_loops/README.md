# C - More functions, more nested loops

This repository contains C programs that demonstrate the use of functions and nested loops. The programs are part of a coding project with specific requirements and restrictions.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- The code should follow the Betty style, and it will be checked using betty-style.pl and betty-doc.pl
- Global variables are not allowed
- Each file should contain no more than 5 functions
- The standard library functions such as printf, puts, etc. are forbidden
- The program is only allowed to use the _putchar function
- The _putchar.c file is not required to be pushed to the repository
- The prototypes of all functions, including _putchar, should be included in the main.h header file
- The main.h header file must be pushed to the repository

## Functions

1. **int _isupper(int c)**
   - Prototype: int _isupper(int c)
   - Returns 1 if the character 'c' is an uppercase letter
   - Returns 0 otherwise

2. **int _isdigit(int c)**
   - Prototype: int _isdigit(int c)
   - Returns 1 if the character 'c' is a digit (0-9)
   - Returns 0 otherwise

3. **int mul(int a, int b)**
   - Prototype: int mul(int a, int b)
   - Returns the result of multiplying the integers 'a' and 'b'

4. **void print_numbers(void)**
   - Prototype: void print_numbers(void)
   - Prints the numbers from 0 to 9, followed by a new line
   - Uses the _putchar function exactly twice

5. **void print_most_numbers(void)**
   - Prototype: void print_most_numbers(void)
   - Prints the numbers from 0 to 9, excluding 2 and 4, followed by a new line
   - Uses the _putchar function exactly twice

6. **void more_numbers(void)**
   - Prototype: void more_numbers(void)
   - Prints the numbers from 0 to 14 ten times, followed by a new line
   - Uses the _putchar function exactly three times

7. **void print_line(int n)**
   - Prototype: void print_line(int n)
   - Prints a straight line of length 'n' using the character '_'
   - The line is terminated with a new line character '\n'
   - If 'n' is 0 or less, only a new line is printed
   - Uses the _putchar function to print

8. **void print_diagonal(int n)**
   - Prototype: void print_diagonal(int n)
   - Prints a diagonal line of length 'n' using the character '\'
   - The diagonal line is terminated with a new line character '\n'
   - If 'n' is 0 or less, only a new line is printed
   - Uses the _putchar function to print

9. **void print_square(int size)**
   - Prototype: void print_square(int size)
   - Prints a square of size 'size' using the character '#'
   - The square is terminated with a new line character '\n'
   - If 'size' is 0 or less, only a new line is printed
   - Uses the _putchar function to print

10. **void fizzbuzz(void)**
    - Prototype: void fizzbuzz(void)
    - Prints the numbers from 1 to 100, replacing multiples of 3 with "Fizz", multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz"
    - Each number or word is separated by a space
    - Uses the standard library functions

11. **void print_triangle(int size)**
    - Prototype: void print_triangle(int size)
    - Prints a right-angled triangle of size 'size' using the character '#'
    - The triangle is terminated with a new line character '\n'
    - If 'size' is 0 or less, only a new line is printed
    - Uses the _putchar function to print

12. **void print_largest_prime_factor(void)**
    - Prototype: void print_largest_prime_factor(void)
    - Finds and prints the largest prime factor of the number 612852475143, followed by a new line
    - Uses the standard library function
    - The program will be compiled with the command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm

13. **void print_number(int n)**
    - Prototype: void print_number(int n)
    - Prints an integer number 'n'
    - Uses only the _putchar function to print the number
    - Does not use long, arrays, or pointers
    - Does not hard-code special values



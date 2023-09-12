C - Functions and Nested Loops
This project consists of several tasks involving functions and nested loops. Each task has specific requirements and prototypes that need to be implemented.

Resources
Nested while loops
C - Functions
Learning to Program in C (Part 06) (stop at 14:00)
What is the purpose of a function prototype?
C - Header Files (stop before the "Once-Only Headers" paragraph)
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the project folder, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc. is forbidden
You are allowed to use _putchar
You don't have to include _putchar.c in your submission. We will use our own file. If you include it, it won't be taken into account
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don't forget to push your header file
Task 1: Print _putchar
Write a program that prints _putchar, followed by a new line.
The program should return 0.
Task 2: Print the Alphabet
Write a function print_alphabet that prints the alphabet in lowercase, followed by a new line.
You can only use _putchar twice in your code.
Task 3: Print the Alphabet x10
Write a function print_alphabet_x10 that prints the alphabet in lowercase 10 times, followed by a new line.
You can only use _putchar twice in your code.
Task 4: Check for Lowercase Character
Write a function _islower that checks if a character is lowercase.
Prototype: int _islower(int c)
Returns 1 if c is lowercase, otherwise returns 0.
Task 5: Check for Alphabetic Character
Write a function _isalpha that checks if a character is alphabetic.
Prototype: int _isalpha(int c)
Returns 1 if c is a letter (lowercase or uppercase), otherwise returns 0.
Task 6: Print the Sign of a Number
Write a function print_sign that prints the sign of a number and returns a value based on the sign.
Prototype: int print_sign(int n)
Returns 1 and prints + if n is greater than zero.
Returns 0 and prints 0 if n is zero.
Returns -1 and prints - if n is less than zero.
Task 7: Compute the Absolute Value of an Integer
Write a function _abs that computes the absolute value of an integer.
Prototype: int _abs(int n)
Task 8: Print the Last Digit of a Number
Write a function print_last_digit that prints the last digit of a number and returns its value.
Prototype: int print_last_digit(int n)
Task 9: Print Every Minute of the Day
Write a function jack_bauer that prints every minute of the day in the format HH:MM, from 00:00 to 23:59.
Task 10: Print the 9 Times Table
Write a function times_table that prints the 9 times table, starting with 0, in a specific format.
Prototype: void times_table(void)
Format: see example in the task description
Task 11: Add Two Integers
Write a function add that adds two integers and returns the result.
Prototype: int add(int a, int b)
Task 12: Print Numbers from n to 98
Write a function print_to_98 that prints all natural numbers from n to `98I

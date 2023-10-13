# C - Structures, Typedef
This repository contains C programs that work with structures and typedef. 

## Resources
- [0x0d. Structures.pdf](0x0d.%20Structures.pdf)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- Documentation: [structures](documentation_link)
- [0x0d. Typedef and structures.pdf](0x0d.%20Typedef%20and%20structures.pdf)
- [Programming in C by Stephen Kochan - Chapter 8, Working with Structures](https://example.com/programming-in-c)
- The Lost Art of C Structure Packing (Advanced - not mandatory)

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Your code should use the Betty style and will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are printf, malloc, free, and exit
- Don't forget to push your header file
- All your header files should be include guarded

## Task 1
### Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

## Task 2
### Write a function that initializes a variable of type `struct dog`.
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## Task 3
### Write a function that prints a struct `dog`.
- Prototype: `void print_dog(struct dog *d);`
- Format: see example below
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL`, print nothing.

## Task 4
### Define a new type `dog_t` as a new name for the type `struct dog`.

## Task 5
### Write a function that creates a new `dog`.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails

## Task 6
### Write a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`


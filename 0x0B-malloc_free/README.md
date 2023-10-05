
# C-MALOC FREE

## Description

This project consists of implementing various functions for dynamic memory allocation and string manipulation in C. The tasks involve creating, copying, concatenating, and manipulating strings, as well as working with 2-dimensional arrays.

## Table of Contents

- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 1: create_array](#task-1-create_array)
A
B
  - [Task 2: _strdup](#task-2-_strdup)
  - [Task 3: str_concat](#task-3-str_concat)
  - [Task 4: alloc_grid](#task-4-alloc_grid)
  - [Task 5: free_grid](#task-5-free_grid)
  - [Task 6: argstostr](#task-6-argstostr)
  - [Task 7: strtow](#task-7-strtow)

## Requirements

### General
A

- **Allowed editors:** vi, vim, emacs
- **Compilation Environment:** Ubuntu 20.04 LTS using gcc
B
- **Compiler Options:** -Wall -Werror -Wextra -pedantic -std=gnu89
A
- All source files must end with a newline character.
- A `README.md` file at the root of the project folder is mandatory.
- Code style must follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`.
- No global variables are allowed.
- Each source file should contain no more than 5 functions.
- Only the `malloc` and `free` functions from the C standard library are allowed.
- You can use `_putchar`, but don't push `_putchar.c`.
- Prototypes for all functions, including `_putchar`, should be included in a header file called `main.h`.

## Tasks
A

### Task 1: create_array

**Prototype:** `char *create_array(unsigned int size, char c);`
A

- Returns `NULL` if `size` is 0.
- Returns a pointer to the array or `NULL` if it fails.

### Task 2: _strdup

B
**Prototype:** `char *_strdup(char *str);`

- Returns `NULL` if `str` is `NULL` or if there is insufficient memory.
B
- Returns a pointer to a new string that is a duplicate of `str`.
A

### Task 3: str_concat

**Prototype:** `char *str_concat(char *s1, char *s2);`
A

- Returns `NULL` on failure.
- Returns a pointer to a newly allocated space in memory that contains the contents of `s1` followed by the contents of `s2`, with a null-terminator.
- If `s1` or `s2` is `NULL`, treat it as an empty string.

### Task 4: alloc_grid

**Prototype:** `int **alloc_grid(int width, int height);`

- Initializes each element of the grid to 0.
A
- Returns `NULL` on failure.
- Returns a pointer to a 2-dimensional array of integers.

### Task 5: free_grid

**Prototype:** `void free_grid(int **grid, int height);`

- Frees a 2-dimensional grid previously created by `alloc_grid`.

### Task 6: argstostr
B

**Prototype:** `char *argstostr(int ac, char **av);`

- Returns `NULL` if `ac` is 0 or `av` is `NULL`.
- Returns a pointer to a new string containing concatenated arguments followed by '\n' characters.

### Task 7: strtow

**Prototype:** `char **strtow(char *str);`

- Returns `NULL` if `str` is `NULL` or an empty string.
- Returns an array of strings (words), where each element is null-terminated.
- The last element of the array is `NULL`.
- Words are separated by spaces.

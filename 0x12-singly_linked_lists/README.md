 Singly Linked Lists

## Resources

- [Data Structures](#data-structure)
- [Linked Lists](#linked-lists)

## Requirements

Before you start working on the tasks, please make sure to meet the following requirements:

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- You dont have to push `_putchar.c; we will use our file. If you do, it wont be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do, we wont take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Dont forget to push your header file
- All your header files should be include guarded

## Tasks

### Task 1

Write a function that prints all the elements of a `list_t` list.

- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- Format: see example
- If `str` is NULL, print `[0] (nil)`
- You are allowed to use `printf`

### Task 2

Write a function that returns the number of elements in a `list_t` list.

- Prototype: `size_t list_len(const list_t *h);`

### Task 3

Write a function that adds a new node at the beginning of a `list_t` list.

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

### Task 4

Write a function that adds a new node at the end of a `list_t` list.

- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

### Task 5

Write a function that frees a `list_t` list.

- Prototype: `void free_list(list_t *head);`

### Task 6

Write a function that prints:


before the main function is executed.

- You are allowed to use the `printf` function

### Task 7

Write a 64-bit program in assembly that prints:



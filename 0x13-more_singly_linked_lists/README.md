 - More Singly Linked Lists

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc is forbidden
- You are allowed to use `_putchar`
- You dont have to push `_putchar.c`, we will use our file. If you do, it wont be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do, we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Dont forget to push your header file
- All your header files should be include guarded

## Tasks

- **Task 1: Print List**
  - **Prototype:**
    ```c
    size_t print_listint(const listint_t *h);
    ```
  - **Return:**
    The number of nodes
  - **Format:**
    See example
  - **Allowed:**
    You are allowed to use `printf`

- **Task 2: List Length**
  - **Prototype:**
    ```c
    size_t listint_len(const listint_t *h);
    ```

- **Task 3: Add Node at the Beginning**
  - **Prototype:**
    ```c
    listint_t *add_nodeint(listint_t **head, const int n);
    ```
  - **Return:**
    The address of the new element, or NULL if it failed

- **Task 4: Add Node at the End**
  - **Prototype:**
    ```c
    listint_t *add_nodeint_end(listint_t **head, const int n);
    ```
  - **Return:**
    The address of the new element, or NULL if it failed

- **Task 5: Free List**
  - **Prototype:**
    ```c
    void free_listint(listint_t *head);
    ```

- **Task 6: Free List (2)**
  - **Prototype:**
    ```c
    void free_listint2(listint_t **head);
    ```
  - **Note:**
    The function sets the head to NULL

- **Task 7: Delete Head Node**
  - **Prototype:**
    ```c
    int pop_listint(listint_t **head);
    ```
  - **Note:**
    If the linked list is empty, return 0

- **Task 8: Get Nth Node**
  - **Prototype:**
    ```c
    listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
    ```
  - **Note:**
    Where index is the index of the node, starting at 0. If the node does not exist, return NULL

- **Task 9: Insert Node at a Given Position**
  - **Prototype:**
    ```c
    listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
    ```
  - **Note:**
    Where idx is the index of the list where the new node should be added. Index starts at 0. Returns: the address of the new node, or NULL if it failed. If it is not possible to add the new node at index idx, do not add the new node and return NULL

- **Task 10: Delete Node at Index**
  - **Prototype:**
    ```c
    int delete_nodeint_at_index(listint_t **head, unsigned int index);
    ```
  - **Note:**
    Where index is the index of the node that should be deleted. Index starts at 0. Returns: 1 if it succeeded, -1 if it failed

- **Task 11: Reverse List**
  - **Prototype:**
    ```c
    listint_t *reverse_listint(listint_t **head);
    ```
  - **Note:**
    Returns: a pointer to the first node of the reversed list. You are not allowed to use more than 1 loop. You are not allowed to use malloc, free, or arrays. You can only declare a maximum of two variables in your function

- **Task 12: Print List Safely**
  - **Prototype:**
    ```c
    size_t print_listint_safe(const listint_t *head);
    ```
  - **Note:**
    Returns: the number of nodes in the list. This function can print lists with a loop. You should go through the list only once. If the function fails, exit the program with status 98. Output format: see example

- **Task 13: Free List Safely**
  - **Prototype:**
    ```c
    size_t free_listint_safe(listint_t **h);
    ```
  - **Note:**
    This function can free lists with a loop. You should go through the list only once. Returns: the size of the list that was freed. The function sets the head to NULL

- **Task 14: Find Loop in a Linked List**
  - **Prototype:**
    ```c
    listint_t *find_listint_loop(listint_t *head);
    ```
  - **Note:**
    Returns: The address of the node where the loop starts, or NULL if there is no loop. You are not allowed to use malloc, free, or arrays. You can only declare a maximum of two variables in your function
# 0x13. C - More Singly Linked Lists

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc is forbidden
- You are allowed to use `_putchar`
- You dont have to push `_putchar.c`, we will use our file. If you do, it wont be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do, we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Dont forget to push your header file
- All your header files should be include guarded

## Tasks

- **Task 1: Print List**
  - **Prototype:**
    ```c
    size_t print_listint(const listint_t *h);
    ```
  - **Return:**
    The number of nodes
  - **Format:**
    See example
  - **Allowed:**
    You are allowed to use `printf`

- **Task 2: List Length**
  - **Prototype:**
    ```c
    size_t listint_len(const listint_t *h);
    ```

- **Task 3: Add Node at the Beginning**
  - **Prototype:**
    ```c
    listint_t *add_nodeint(listint_t **head, const int n);
    ```
  - **Return:**
    The address of the new element, or NULL if it failed

- **Task 4: Add Node at the End**
  - **Prototype:**
    ```c
    listint_t *add_nodeint_end(listint_t **head, const int n);
    ```
  - **Return:**
    The address of the new element, or NULL if it failed

- **Task 5: Free List**
  - **Prototype:**
    ```c
    void free_listint(listint_t *head);
    ```

- **Task 6: Free List (2)**
  - **Prototype:**
    ```c
    void free_listint2(listint_t **head);
    ```
  - **Note:**
    The function sets the head to NULL

- **Task 7: Delete Head Node**
  - **Prototype:**
    ```c
    int pop_listint(listint_t **head);
    ```
  - **Note:**
    If the linked list is empty, return 0

- **Task 8: Get Nth Node**
  - **Prototype:**
    ```c
    listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
    ```
  - **Note:**
    Where index is the index of the node, starting at 0. If the node does not exist, return NULL

- **Task 9: Insert Node at a Given Position**
  - **Prototype:**
    ```c
    listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
    ```
  - **Note:**
    Where idx is the index of the list where the new node should be added. Index starts at 0. Returns: the address of the new node, or NULL if it failed. If it is not possible to add the new node at index idx, do not add the new node and return NULL

- **Task 10: Delete Node at Index**
  - **Prototype:**
    ```c
    int delete_nodeint_at_index(listint_t **head, unsigned int index);
    ```
  - **Note:**
    Where index is the index of the node that should be deleted. Index starts at 0. Returns: 1 if it succeeded, -1 if it failed

- **Task 11: Reverse List**
  - **Prototype:**
    ```c
    listint_t *reverse_listint(listint_t **head);
    ```
  - **Note:**
    Returns: a pointer to the first node of the reversed list. You are not allowed to use more than 1 loop. You are not allowed to use malloc, free, or arrays. You can only declare a maximum of two variables in your function

- **Task 12: Print List Safely**
  - **Prototype:**
    ```c
    size_t print_listint_safe(const listint_t *head);
    ```
  - **Note:**
    Returns: the number of nodes in the list. This function can print lists with a loop. You should go through the list only once. If the function fails, exit the program with status 98. Output format: see example

- **Task 13: Free List Safely**
  - **Prototype:**
    ```c
    size_t free_listint_safe(listint_t **h);
    ```
  - **Note:**
    This function can free lists with a loop. You should go through the list only once. Returns: the size of the list that was freed. The function sets the head to NULL

- **Task 14: Find Loop in a Linked List**
  - **Prototype:**
    ```c
    listint_t *find_listint_loop(listint_t *head);
    ```
  - **Note:**
    Returns: The address of the node where the loop starts, or NULL if there is no loop. You are not allowed to use malloc, free, or arrays. You can only declare a maximum of two variables in your function


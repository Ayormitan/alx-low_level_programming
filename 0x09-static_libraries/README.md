# C - Static Libraries

## Resources

- [What Is A “C” Library? What Is It Good For?](#what-is-a-c-library-what-is-it-good-for)
- [Creating A Static “C” Library Using “ar” and “ranlib”](#creating-a-static-c-library-using-ar-and-ranlib)
- [Using A “C” Library In A Program](#using-a-c-library-in-a-program)
- [What is the difference between Dynamic and Static library (Static and Dynamic linking)](#difference-between-dynamic-and-static-library)
  
## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called main.h

## Tasks

### Task 1: Create the static library libmy.a

Create a static library called `libmy.a` containing all the functions listed below:

### Task 2: Create a script called create_static_lib.sh

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.


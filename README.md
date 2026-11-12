*This project has been created as part of the 42 curriculum by ral-saye.*

# Libft

## Description

Libft is a project from the 42 curriculum. The goal is to create a personal C library containing reimplementations of several standard C library functions, along with additional utility functions.

The project helps develop a better understanding of C programming, memory management, pointers, strings, and linked lists.

The library can be reused in future C projects instead of rewriting these functions each time.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

### Makefile commands

- `make`: Compiles the library.
- `make clean`: Removes the object files.
- `make fclean`: Removes the object files and the library.
- `make re`: Recompiles the library from scratch.

### Using the library

Include `libft.h` in your C source file:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc your_test_file.c -L. -lft -o program
```

Then run it:

```bash
./program
```

## Library Description

The library contains the following functions:

### Part 1: Libc Functions

Reimplementations of standard C library functions:

- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- Other functions: `ft_atoi`, `ft_calloc`.

### Part 2: Additional Functions

These functions provide additional string and memory utilities:

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Joins two strings into a new string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string using a specified delimiter.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Applies a function to each character of a string and creates a new string.
- `ft_striteri`: Applies a function to each character of a string.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

*This project has been created as part of the 42 curriculum by <your_42_login>.*

# Libft

## Description

Libft is a project from the 42 curriculum. The goal is to create a personal C library containing reimplementations of several standard C library functions, along with additional utility functions.

The project helps develop a better understanding of C programming, memory management, pointers, strings, and linked lists.

The library can be reused in future C projects instead of rewriting these functions each time.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

### Makefile commands

- `make`: Compiles the library.
- `make clean`: Removes the object files.
- `make fclean`: Removes the object files and the library.
- `make re`: Recompiles the library from scratch.

### Using the library

Include `libft.h` in your C source file:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c -L. -lft -o program
```

Then run it:

```bash
./program
```

## Library Description

The library contains the following functions:

### Part 1: Libc Functions

Reimplementations of standard C library functions:

- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- Other functions: `ft_atoi`, `ft_calloc`.

### Part 2: Additional Functions

These functions provide additional string and memory utilities:

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Joins two strings into a new string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string using a specified delimiter.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Applies a function to each character of a string and creates a new string.
- `ft_striteri`: Applies a function to each character of a string.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### Bonus: Linked List Functions

The bonus part introduces linked lists and functions to create, modify, traverse, and delete nodes.

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstsize`: Counts the nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstdelone`: Deletes a node and frees its content.
- `ft_lstclear`: Deletes and frees an entire list.
- `ft_lstiter`: Applies a function to each node's content.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

## Resources

The following resources were used while working on this project:

- [42 Libft Subject](https://cdn.intra.42.fr/pdf/pdf/960/libft.en.pdf)
- [C Standard Library Documentation](https://en.cppreference.com/w/c.html)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)

AI tools were used as a learning aid throughout the project. They helped clarify function behavior, review implementations, identify potential errors, and understand memory management and linked lists. They were also used for guidance with the Makefile.

The implementations were tested and reviewed during development to better understand how each function works.
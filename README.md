# ft_printf

This project implements a custom version of the `printf` function from the C standard library, enhanced with additional functionalities. It includes various utility functions to support its operations.

## Files

- **ft_fonction_base.c**: Core functions for parsing and processing format specifiers.
- **ft_hexa.c**: Implementation for hexadecimal formatting.
- **ft_printf.c**: Main implementation of the `printf` function and format string handling.
- **ft_printf.h**: Header file defining function prototypes and necessary macros.
- **ft_putnbr.c**: Utility function for printing numbers.
- **Makefile**: Makefile for compiling the project.

## Compilation

To compile the project, use the provided Makefile. In the terminal, run:

```sh
make
```
This command will generate the libftprintf.a static library.

## Usage

To use the ft_printf function in your projects, include ft_printf.h in your source files and compile your project with libftprintf.a:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
## Contributors
[pschemit](https://github.com/Monkey42Github)


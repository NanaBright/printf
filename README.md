# _printf project
A project by ALX on _printf from Okpala Chibuike Emmanuel and Bright Yanchirah

# Environment & Requirements
1. Language: C
2. OS: Ubuntu 20.04 LTS
3. Compiler: gcc 4.8.4 (-Wall -Werror -Wextra -pedantic -std=gnu89)
4. Coding style; Betty Style

# Prototypes
Recreation of function printf from the C standard library

```c
int _printf(const char *format, ...);
```

# Description
Writes output stdout, then prints the total number of character printed to the stdout (execpt a null terminator if it is a string) after a succesful execution.

For an output error, it prints a negative value of -1.

# Installation
Clone the repository from github, this will contain all the necessary files
```c
git clone https://github.com/NanaBright/printf.git
```
After cloning, you will have a file called `printf` 
in there, all the necessary files that allows the function to work are present.

# Usage
1. Include `main.h`
2. Call the function `_printf` and pass in a string with optional arguments
3. Use the required format specifier.

# Format Specifiers

| Format Specifier | Description |
| ------ | ------ |
| %c | prints a character to stdout. |
| %i, %d | prints an integer to stdout. |
| %u | prints an unsigned integer. |
| %s | prints a string to stdout. |
| %r | reverses a string. |
| %b | converts a number to binary. |
| %o | converts a number to octal base. |
| %x %X | converts a number to hexadecimal. |
| %p | prints the memory address of an argument. |


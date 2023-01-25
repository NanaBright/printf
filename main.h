#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);


/**
 * struct func - struct for specifier to printer
 * @t: char to compare
 * @f: func to handle printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int _putchar(char *c);
int _strlen(char *s);
int printarg(char *c);
int print_char(va_list);
int print_str(va_list);
int print_pc(va_list args __attribute__((unused)));
int print_int(va_list);
int print_deci(va_list);

#endif

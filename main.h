#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int *check_specifier(int i, char *copyfmt, va_list args);


/**
 * struct func - struct for specifier to printer
 * @t: char to compare
 * @f: func to handle printing
 */

typedef struct fn
{
	char *ob;
	int (*type)(va_list var);
} fn_t;

int _putchar(char *c);
int _strlen(char *s);
char *_strcpy(char *dest, const char *str);
int printarg(char *c);
int print_char(va_list);
int print_str(va_list);
int print_pc(va_list args __attribute__((unused)));
int print_int(va_list);
char *change_base(unsigned int num, int base);

#endif

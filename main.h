#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int *check_specifier(int i, char *copyfmt, va_list args);


/**
 * struct fn - struct for specifier to printer
 * @ob: char to compare
 * @type: func to handle printing
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
int print_bin(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_low(va_list args);
int print_hex_upper(va_list args);
char *change_hex_low(unsigned int num, int base);
int print_str_esp(va_list args);
char *replace_str(char *s);
int print_add(va_list args);
int print_reversed(va_list ags);
char *rot13(char *n);
int print_rot13(va_list args);


#endif

#include "main.h"

/**
 * print_pc - prints character % to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_pc(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}

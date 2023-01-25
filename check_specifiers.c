#include "main.h"
/**
 * check_specifier - compares and prints according to the struct
 * @i:. iterator
 * @copyfmt: format
 * @args: arguments to print
 * Return: number of characters printed.
*/
int *check_specifier(int i, char *copyfmt, va_list args)
{
	fn_t fmt[] = {
			{"c", print_char},
			{"s", print_str},
			{"%", print_pc},
			{"i", print_int},
			{"d", print_deci},
			{NULL, NULL}
			};
	int j = 0, k = 1, *count2;
	int ctbuffer2[2];

	i++;
	count2 = &ctbuffer2[0];
	count2[0] = 0;
	count2[1] = 0;
	while (fmt[j].ob != NULL)
	{
		if (copyfmt[i] == *fmt[j].ob)
		{ count2[1] = fmt[j].type(args);
			break; }
		j++;
	}
	if (fmt[j].ob == NULL && copyfmt[i] != '\0')
	{ _putchar("%");
	_putchar(&copyfmt[i]);
	count2[1] += 2; }
	if (fmt[j].ob == NULL && copyfmt[i] == '\0')
	{ count2[1] = -1; }
	count2[0] = k;
return (count2);
}

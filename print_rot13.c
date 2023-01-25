#include "main.h"

/**
 * print_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */

int print_rot13(va_list args)
{
	char *s;
	char *aux;
	int i = 6;

	s = va_arg(args, char*);
	if (s)
	{
	aux = rot13(s);
	i = printarg(aux);
	}
	else
	printarg("(null)");
	return (i);
}

/**
  * rot13 - encodes a string into rot13
  * @str: string
  * Return: string encoded
 **/

char *rot13(char *str)
{
	int i, j;
	char *aux;
	char buffer[10000];
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	aux = _strcpy(buffer, str);
	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (input[i] == str[j])
			{
				aux[j] = output[i];
				break;
			}
		}
	}
	aux[j] = '\0';
	return (aux);
}

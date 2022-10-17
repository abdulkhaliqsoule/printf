#include "main.h"
#include <stdarg.h>
/**
 * print_s - print string
 * @a: list to print
 * Return: length of string
 */
int print_s(va_list a)
{
	char *s;
	int i;

	s = va_arg(a, char *);
	if (s != NULL)
	{
		for (i = 0; *s != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}


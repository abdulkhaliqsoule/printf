#include "main.h"
/**
 * _printf - prints depends of the arguments.
 * @format: s for string, c for char, d for decimals, i for integers,
 *
 * Return: new string.
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, x = -1;
	int (*f)(va_list, char *s, int *m);
	int *index;
	char *s;
	va_list ap;

	va_start(ap, format);
	s = malloc(1024);
	index = &j;
	if (!s)
		return (-1);
	if (format)
	{
		x = 0;
		for (; format[i] != '\0'; i++, x++)
		{
			if (format[i] != '%')
				set_buffer(s, format[i], index);
			else if (format[i] == '%' && format[i + 1] == '\0')
			{
				return (-1);
			}
			else if (format[i] == '%' && format[i + 1] != '\0')
			{
				f = get_function(format[i + 1]);
				if (f)
				{
					x = (x + f(ap, s, index)) - 1;
					i++;
				}
				else
					set_buffer(s, format[i], index);
			}
		}
	}
	if (*index != 1024)
		write(1, s, *index);
	free(s);
	va_end(ap);
	return (x);
}

#include "main.h"
/**
 * get_function - gets the right function according to the specifier
 * @c: character to find corresponding to the specifier
 *
 * Return: return a function pointer or NULL
 */
int(*get_function(char c))(va_list a, char *s, int *index)
{
	int i;
	choose ph[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_integer},
		{'d', print_integer},
		{'%', print_percent},
		{'\0', NULL}
	};
	for (i = 0; ph[i].c != '\0'; i++)
	{
		if (c == ph[i].c)
		{
			return (ph[i].f);
		}
	}
	return (NULL);
}

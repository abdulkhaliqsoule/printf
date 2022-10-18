#include "main.h"
/**
 * print_string - print strings
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of characters of element called
*/
int print_string(va_list a, char *s, int *index)
{
	char *c;
	int i = 0;
	int j = 0;

	c = va_arg(a, char *);
	if (!c)
		c = "(null)";
	while (c[j])
	{
		set_buffer(s, c[j], index);
		j++;
		i++;
	}
	return (i);
}

/**
 * print_char - print characters
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
*/
int print_char(va_list a, char *s, int *index)
{
	int n;

	n = va_arg(a, int);
	set_buffer(s, n, index);
	return (1);
}

/**
 * print_integer - print numbers in base 10 (integers)
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
*/
int print_integer(va_list a, char *s, int *index)
{
	unsigned int j, count = 1;
	unsigned int var1, num, var2, var3 = 1;
	int x, y = 0;

	x = va_arg(a, int);
	var2 = x;
	if (x < 0)
	{
		set_buffer(s, '-', index);
		var2 = x * (-1);
		y++;
	}
	num = var2;
	while (num > 9)
	{
		num = num / 10;
		count++;
		var3 = var3 * 10;
	}
	for (j = 1; j <= count; j++)
	{
		var1 = var2 / var3;
		var2 = var2 % var3;
		var3 = var3 / 10;
		y++;
		set_buffer(s, ('0' + var1), index);
	}
	return (y);
}

/**
 * print_percent - print character %
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
*/
int print_percent(va_list a, char *s, int *index)
{
	(void)a;
	set_buffer(s, '%', index);
	return (1);
}

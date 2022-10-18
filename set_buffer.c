#include "main.h"
/**
 * set_buffer - defines a local buffer of 1024 chars
 * @s: buffer
 * @x: char to be printed
 * @index: actual position on buffer
 * Return: nothing
 */
void set_buffer(char *s, char x, int *index)
{
	s[*index] = x;
	*index = *index + 1;
	if (*index == 1024)
	{
		write(1, s, *index);
		*index = 0;
	}
}


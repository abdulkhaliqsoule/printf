#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * _printf - produces output according to a format.
 * @format: is a character string
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...);
int print_c(va_list a);
int print_s(va_list a);
int print_d(va_list a);
int print_i(va_list a);
/**
 * struct place_holder - struct for place holders
 * @c: character to check
 * @f: function to point to.
 */
typedef struct place_holder
{
	char *c;
	int (*f)(va_list a);
} ph;

#endif


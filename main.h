#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct a - this structure is going to give us the format
 * @c: the character that is going to give us the respective function
 * @f: function pointer with va_list argument
 */
typedef struct a
{
	    char c;
	    int (*f)(va_list list, char *s, int *index);
} choose;
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
int _putchar(char c);
void set_buffer(char *s, char x, int *index);
int (*get_function(char c))(va_list a, char *s, int *index);
int print_char(va_list a, char *s, int *index);
int print_string(va_list a, char *s, int *index);
int print_percent(va_list a, char *s, int *index);
int print_integer(va_list a, char *s, int *index);

#endif


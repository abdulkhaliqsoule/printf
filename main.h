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

void set_buffer(char *s, char x, int *index);
int (*get_function(char c))(va_list a, char *s, int *index);

/**
 * print_char - print characters
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
*/
int print_char(va_list a, char *s, int *index);

/**
 * print_string - print strings
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of characters of element called
*/
int print_string(va_list a, char *s, int *index);

/**
 * print_percent - print character %
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
*/
int print_percent(va_list a, char *s, int *index);

/**
 * print_integer - print numbers in base 10 (integers)
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
*/
int print_integer(va_list a, char *s, int *index);

#endif


#include "main.h"

unsigned int _print_char(va_list args);
unsigned int _print_str(va_list args);
unsigned int _print_int(va_list args);

/**
 *_print_char - prints a character to standard output
 *@args: argument to be printed
 *
 *Return: number of characters printed
 */
unsigned int _print_char(va_list args)
{
	unsigned int n = 0;
	char c = va_arg(args, int);

	_putchar(c);
	return (n);
}

/**
 *_print_str - prints a string to standard output
 *@args: argument to be printed
 *
 *Return: number of characters printed
 */
unsigned int _print_str(va_list args)
{
	unsigned int k = 0, counter = 0;
	char *str = va_arg(args, char *);

	k = 0;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		counter++;
		k++;
	}
	return (counter);
}

/**
 *_print_int - prints an integer to standard output
 *@args: argument to be printed
 *
 *Return: number of characters printed
 */
unsigned 

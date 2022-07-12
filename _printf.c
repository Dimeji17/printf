#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *_printf - writes to standard output
 *@format: character string
 *@...: variable numbee of arguments
 *
 *Return: the number of characters printed excluding the EOF.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char *str;
	va_list args;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			
		}
		i++;
	}
}

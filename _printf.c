#include "main.h"

/**
 *_printf - writes to standard output
 *@format: character string
 *@...: variable numbee of arguments
 *
 *Return: the number of characters printed excluding the EOF.
 */

int _printf(const char *format, ...)
{
	int i = 0, n_displayed = 0;
	char *str = NULL;
	va_list args;
	unsigned int (*fmt)(va_list); 

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_disp++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				n_disp++;
			}
			else
			{
				fmt = _get_func(format[i+1])(args);
				if (fmt != NULL)
				{
					n_disp += fmt(args);
					i++;
				}
			}
		}
		i++;
	}
	va_end(args);

	return (n_disp);
}

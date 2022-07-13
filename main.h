#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct converter_s - A new type defining a converter struct.
 * @specifier: A character representing a conversion specifier.
 * @func: A pointer to a conversion function corresponding to specifier.
 */
typedef struct converter_s
{
	unsigned char specifier;
	unsigned int (*func)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
unsigned int _print_char(va_list args);
unsigned int _print_str(va_list args);
unsigned int _print_int(va_list args);

#endif

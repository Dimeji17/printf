#include "main.h"

unsigned int (*_get_func(char *c))(va_list)
{
	specifier_t spec[] = {
		{'c', _print_char},
		{'s', _print_str},
		{NULL, NULL},
	};
	int i = 0;

	while ((spec[i].specifier != NULL) && (*c != *(spec[i].specifier)))
		i++;

	return (spec[i].func);
}

#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	int i, j, vlen;
	va_list argp;
	v_types valid_types[] = {
		{"c", found_char},
		{"s", found_string},
		{"d", found_int},
		{"i", found_float},
		{"%", found_percent}
	};

	for (vlen = 0; valid_types[vlen].valid; vlen++)
		;
	i = j = 0;
	va_start(argp, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; j < vlen; j++)
			{
				if (format[i + 1] == *valid_types[j].valid)
				{
					printf("%c", *valid_types[j].valid);
					valid_types[j].f(argp);
					i++;
				}
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(argp);
	_putchar('\n');
	return (0);
}

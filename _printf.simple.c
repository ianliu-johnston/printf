#include "holberton.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...)
{
	int i, j;
	char *strings;
	va_list ap;

	i = j = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(ap, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			strings = va_arg(ap, char *);
			for (j = 0; strings[j] != '\0'; j++)
				_putchar(strings[j]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}

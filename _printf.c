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
		if (format[i] == '%')
		{
			switch(format[i + 1]){
			case 'c':
				_putchar(va_arg(ap, int));
				i++;
				break;
			case 's':
				strings = va_arg(ap, char *);
				for (j = 0; strings[j] != '\0'; j++)
					_putchar(strings[j]);
				i++;
				break;
			case '%':
				_putchar('%');
				i++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}

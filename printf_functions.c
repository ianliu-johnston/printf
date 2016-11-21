#include <stdarg.h>
#include "holberton.h"
void found_char(va_list c)
{
	_putchar(va_arg(c, int));
}
void found_string(va_list *s)
{
	char *string;
	int j;

	string = va_arg(s, char *);
	if (string)
		for (j = 0; string[j] != '\0'; j++)
			_putchar(string[j]);
}
void found_int(va_list i)
{
       	_putchar(va_arg(i, int));
}
void found_float(va_list flo)
{
	_putchar(va_arg(flo, double));
}

#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - Build out the printf function
 * @format: string passed with possible format specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, blen, hlen;
	double totalBuffer;
	double *passTotal;
	va_list argp;
	char buffer[BUFSIZE], *holder;
	char *(*pointer_get_valid)(va_list);

	totalBuffer = 0;
	passTotal = &totalBuffer;
	va_start(argp, format);
	for (i = blen = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			pointer_get_valid = get_valid_type(format[i + 1]);
			holder = (pointer_get_valid == NULL) ?
				found_nothing(format[i + 1]) :
				pointer_get_valid(argp);
			hlen = _strlen(holder);
			blen = alloc_buffer(holder, hlen, buffer, blen, passTotal);
			i++;
		}
		else
		{
			holder = ctos(format[i]);
			blen = alloc_buffer(holder, 1, buffer, blen, passTotal);
		}
	}
	va_end(argp);
	_puts(buffer, blen);
	return (totalBuffer + blen);
}

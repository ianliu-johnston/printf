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
	va_list argp;
	char *buffer, *holder;
	char *(*chosenone)(va_list);

	totalBuffer = 0;
	buffer = malloc(BUFSIZE * sizeof(char));
	va_start(argp, format);
	for (i = blen = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			chosenone = get_valid_type(format[i + 1]);
			holder = chosenone(argp);
			hlen = _strlen(holder);
			blen = alloc_buffer(holder, hlen, buffer, blen);
			i++;
		}
		else
			blen = alloc_buffer(format[i], 1, buffer, blen);
	}
	va_end(argp);
	_puts(buffer, blen);
	return (totalBuffer + blen);
}

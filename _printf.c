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
	va_list argp;
	char *buffer, *holder;
	char *(*chosenone)();

	buffer = malloc(BUFSIZE * sizeof(char));
	va_start(argp, format);
	for (i = blen = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			chosenone = get_valid_type(format[i + 1]);
			holder = chosenone(argp);
			hlen = _strlen(holder);

			if (hlen + blen > BUFSIZE)
			{
				_puts(buffer, blen);
				_memcpy(buffer, holder, hlen, 0);
				blen = hlen;
			}
			else
				_memcpy(buffer, holder, hlen, blen), blen += hlen;
			i++;
		}
		else
		{
			buffer[blen] = format[i];
			blen++;
		}
	}
	va_end(argp);
	_puts(buffer, blen);
	_putchar('\n');
	return (blen);
}

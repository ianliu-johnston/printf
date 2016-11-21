#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	/*Declarations*/
	int i, j, vlen, blen, hlen;
	char *holder;
	va_list argp;
	char *buffer, *startbuffer;
	v_types valid_types[] = {
		{"c", found_char},
		{"s", found_string},
		{NULL, NULL}
	};

	/*Initializations*/
	for (vlen = 0; valid_types[vlen].valid; vlen++)
		;
	i = j = blen = 0;
	holder = "";
	buffer = malloc(1025);
	startbuffer = buffer;
	/* Variable arguments loops */
	va_start(argp, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; j < vlen; j++)
			{
				if (format[i + 1] == *valid_types[j].valid)
				{
					holder = valid_types[j].f(argp);
					hlen = _strlen(holder);
					if (hlen + blen > 1024)
					{
						_puts(buffer, blen);
						buffer = startbuffer;
						_memcpy(buffer, holder, hlen, 0);
						blen = hlen;
					}
					else
					{
						_memcpy(buffer, holder, hlen, blen);
						blen += hlen;
					}

					i++;
				}
			}
		}
		else
		{
			buffer[blen] = format[i];
			blen++;
		}
		i++;
	}
	va_end(argp);
	_puts(buffer, blen);
	_putchar('\n');
	return (vlen);
}

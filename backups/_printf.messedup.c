#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
char *format_checker(char tocheck, v_types *valid_types, va_list argp, int *iteratorpointer)
{
	int i;
	char *holder;
	holder = "";

	for (i = 0; valid_types[i].valid; i++)
		if (tocheck == *valid_types[i].valid)
		{
			holder = valid_types[i].f(argp);
			*iteratorpointer += 1;
		}
	return (holder);
}
int _printf(const char *format, ...)
{
	int i, blen, hlen;
	char *holder;
	int *iteratorpointer;
	va_list argp;
	char *buffer;
	v_types *passP;
	v_types valid_types[] = {
		{"c", found_char},
		{"s", found_string},
		{NULL, NULL}
	};

	iteratorpointer = &i;
	passP = valid_types;
	holder = "";
	buffer = malloc(BUFSIZE * sizeof(char));
	va_start(argp, format);
	for (i = blen = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			holder = format_checker(format[i + 1], passP, argp, iteratorpointer);
			hlen = _strlen(holder);
		}
		else if (blen + 1 > BUFSIZE || blen + hlen > BUFSIZE)
		{
				_puts(buffer, blen);
				if (holder)
				{
					_memcpy(buffer, holder, hlen, 0);
					blen = hlen;
				}
				else
					blen = 0;
		}
		else if (holder)
		{
			_memcpy(buffer, holder, hlen, blen);
			blen += hlen;
			holder = NULL;
			hlen = 0;
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
	return (0);
}

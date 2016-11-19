#include "holberton.h"

int _printf(const char *format, ...)
{
	int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}
	return (0);
}

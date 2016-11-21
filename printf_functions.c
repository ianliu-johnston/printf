#include <stdarg.h>
#include "holberton.h"
char *found_char(va_list c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = va_arg(c, int);
	string[1] = '\0';
	return (p);
}
char *found_string(va_list *s)
{
	char *string;

	string = va_arg(s, char *);
	return (string);
}

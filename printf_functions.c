#include <stdarg.h>
#include "holberton.h"
char *found_char(va_list c)
{
	char *string;

	string = (va_arg(c, int));
	return (string);
}
char *found_string(va_list *s)
{
	char *string;

	string = va_arg(s, char *);
	return (string);
}
char *found_int(va_list i)
{
	char *string;

	string = (va_arg(i, int));
	return (string);
}
char *found_float(va_list flo)
{
	char *string;

	string = (va_arg(flo, double));
	return (string);
}
char *found_percent(va_list percentsign)
{
	char *string;

	string = (va_arg(percentsign, double));
	return (string);
}

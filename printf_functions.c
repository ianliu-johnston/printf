#include <stdarg.h>
#include "holberton.h"
char *found_char(va_list c)
{
	return (va_arg(c, int));
}
char *found_string(va_list *s)
{
	char *string;

	string = va_arg(s, char *);
	return (string);
}
char *found_int(va_list i)
{
	int toint;
	int n;

	toint = va_arg(i, char *);
	for (n = 0; n < ; n /= 10)
		_putchar(toint);

}
char *found_float(va_list flo)
{
	_putchar(va_arg(flo, double));
}
char *found_percent(va_list percentsign)
{
	_putchar(va_arg(percentsign, int));
}

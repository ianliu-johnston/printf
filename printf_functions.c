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
	return (va_arg(i, int));

}
char *found_float(va_list flo)
{
	return (va_arg(flo, int));
}
char *found_percent(va_list percentsign)
{
	return (va_arg(percentsign, int));
}

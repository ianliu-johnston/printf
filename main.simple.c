#include "holberton.h"

int main(void)
{
	char c;
	int len;
	char *s;

	c = 'Z';
	s = "Hello";
	len = _printf("%s, %c, %c%c%c %s, %%, %d\n", s, c,c,c,c, s, 5);
	_printf("%d\n", len);
	return (0);
}

#include "holberton.h"

int main(void)
{
	char c;
	int len;
	char *s;

	c = 'Z';
	s = "Hello";
	len = _printf("%c, %s, %d\n", c, s, 5);
	_printf("%d\n", len);
	return (0);
}

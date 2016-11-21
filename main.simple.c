#include "holberton.h"

int main(void)
{
	char c;
	char *s;

	c = 'Z';
	s = "Hello";
	_printf("%s, %c, %c%c%c %s, %%", s, c,c,c,c, s);
	return (0);
}

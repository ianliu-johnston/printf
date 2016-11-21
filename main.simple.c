#include "holberton.h"

int main(void)
{
	char c;
	char *s;

	c = 'Z';
	s = "Hello";
	_printf("%s, %c, %c%c%c %s, %d", s, c,c,c,c, s, 5);
	return (0);
}

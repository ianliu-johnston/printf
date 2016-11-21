#include "holberton.h"

int main(void)
{
	char c;
	int len;
	char *s;

	c = 'Z';
	s = "Hello";
	len = _printf("%c, %s\n", c, s, 5);
	return (0);
}

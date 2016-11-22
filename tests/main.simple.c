#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
  * main - entry point
  * Return: 0 on success
  */
int main(void)
{
	char c;
	char *s;

	c = 'Z';
	s = "Hello";
	_printf("asdf: %%, %c, %d, %i, HELLO%s\n", c, INT_MIN, -5111, s);
	return (0);
}

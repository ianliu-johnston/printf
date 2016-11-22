#include "holberton.h"
#include <stdio.h>
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
	_printf("asdf: %%, %c, %s\n", c, s);
	return (0);
}

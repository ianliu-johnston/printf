#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * found_octal - converts decimal numbers to octal
  * @oct: octal number to print
  * Return: pointer to string
  */
char *found_octal(va_list n)
{
	unsigned int pos, temp, result, oct, i;
	char *string;

	oct = va_arg(n, unsigned int);
	result = i = 0;
	pos = 1;
	while (oct)
	{
		result += (oct % 8) * pos;
		oct /= 8;
		pos *= 10;
		i++;
	}
	temp = i;
	pos /= 10;
	string = malloc(temp * sizeof(char) + 1);
	for ( i = 0 ; i < temp; i++)
	{
		string[i] = ((result / pos) % 10) + '0';
		pos /= 10;
	}
	string[i] = '\0';
	return (string);
}

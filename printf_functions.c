#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
  * found_char - converts a char to a string
  * @c: char to convert
  * Return: 2 byte string
  */
char *found_char(va_list c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = va_arg(c, int);
	string[1] = '\0';
	return (p);
}
/**
  * found_string - passes a string through
  * @s: string to pass through
  * Return: unmodified string
  */
char *found_string(va_list *s)
{
	char *string;

	string = va_arg(s, char *);
	return (string);
}
/**
  * found_percent - passes a % sign through
  * Return: percent sign as a character string
  */
char *found_percent(void)
{
	char *string;

	string = "%";
	return (string);
}
/**
  * found_int - converts integers into character arrays
  * @npoint: integer to convert from va_args
  * Return: pointer to string
  */
char *found_int(va_list npoint)
{
	int n;
	int i, res, temp, expo, count;
	char *string;

	n = va_arg(npoint, int);
	count = i = 0;
	expo = 1;
	n >= 0 ? (res = n * -1) : (res = n, count++);
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	string = malloc(count * sizeof(char));
	if (n < 0)
		string[i++] = '-';
	while (expo >= 1)
	{
		string[i++] = (((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
	return (string);
}

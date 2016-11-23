#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_valid_type - ID the type specifier passed by printf with a valid_type
 * @s: Type to check given as char
 * Return: pointer function of char type, valid_type matched
 */
char *(*get_valid_type(char s))(va_list)
{
	int i;
	v_types valid_types[] = {
		{"c", found_char},
		{"s", found_string},
		{"%", found_percent},
		{"d", found_int},
		{"i", found_int},
		{"u", found_unsigned},
		{"o", found_octal},
		{"x", found_hex},
		{"X", found_HEX},
		{"r", found_reverse},
		{"R", found_rot13},
		{NULL, NULL}
	};

	for (i = 0; valid_types[i].valid; i++)
	{

		if (s == *valid_types[i].valid)
		{
			return (valid_types[i].f);
		}
	}

	return (NULL);
}

/**
 * alloc_buffer - allocates characters to buffer, handling overflows
 * @holder: string to allocate into buffer
 * @hlen: holder length
 * @buffer: buffer char array
 * @blen: pointer to end of buffer
 * @total: pointer to total character counter
 * Return: buffer length
 */
int alloc_buffer(char *holder, int hlen, char *buffer, int blen, double *total)
{
	int sizecpy;

	if (hlen + blen > BUFSIZE)
	{
		sizecpy = BUFSIZE - blen;
		_memcpy(buffer, holder, sizecpy, blen);
		_puts(buffer, BUFSIZE);
		holder += sizecpy;
		_memcpy(buffer, holder, hlen - sizecpy, 0);
		blen = hlen - sizecpy;
		*passTotal += BUFSIZE;
	}
	else
	{
		_memcpy(buffer, holder, hlen, blen);
		blen += hlen;
	}

	return (blen);
}
/**
  * ctos - converts a character to a string
  * @c: character to convert
  * Return: pointer to string
  */
char *ctos(char c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = c;
	string[1] = '\0';
	return (p);
}

/**
 * found_nothing - no matches found but % passed
 * @c: character unmatched to return and store
 * Return: string with percent and character.
 */
char *found_nothing(char c)
{
	char string[3];
	char *p;

	p = string;
	string[0] = '%';
	string[1] = c;
	string[2] = '\0';
	return (p);
}

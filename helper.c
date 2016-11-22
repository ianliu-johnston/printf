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
		{NULL, NULL}
	};

	for (i = 0; valid_types[i].valid; i++)
	{

		if (s == *valid_types[i].valid)
		{
			return (valid_types[i].f);
		}
	}

	/* handle NULL case */
	return (NULL);
}

/**
 * alloc_buffer - allocates characters to buffer, handling overflows
 * @holder: string to allocate into buffer
 * @hlen: holder length
 * @buffer: buffer char array
 * @blen: pointer to end of buffer
 * Return: buffer length
 */
int alloc_buffer(char *holder, int hlen, char *buffer, int blen)
{
	int sizecpy;

	if (hlen + blen > BUFSIZE)
	{
		sizecpy = BUFSIZE - blen;
		_memcpy(buffer, holder, sizecpy, blen);
		_puts(buffer, BUFSIZE);
		*holder += (hlen - sizecpy);
		_memcpy(buffer, holder, hlen - sizecpy, 0);
		blen = sizecpy;
	}
	else
	{
		_memcpy(buffer, holder, hlen, blen);
		blen += hlen;
	}

	return (blen);
}

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

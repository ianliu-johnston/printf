#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
char *(*helper(char s))()
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
			return valid_types[i].f;
		}
	}

	/* handle NULL case */
	return NULL;
}

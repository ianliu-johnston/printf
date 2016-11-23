#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * found_reverse - reverses a string
 * @s: string to reverse
 * Return: pointer to string
 */
char *found_reverse(va_list s)
{
	char *rstring, *hold;
	int i, j, len;

	hold = va_arg(s, char *);
	len = _strlen(hold);
	rstring = malloc((len + 1) * sizeof(char));
	for (i = 0, j = len - 1; i < len; i++, j--)
		rstring[i] = hold[j];

	return (rstring);
}

/**
 * found_rot13 - rotate 13 characters per character in the string
 * @s: string to rot13
 * Return: string after conversion
 */
char *found_rot13(va_list s)
{
	int i;
	char *hold;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	hold = va_arg(s, char *);

	for (i = 0; hold[i] != '\0'; i++)
	{
		if ((hold[i] > 64 && hold[i] < 91) ||
		    (hold[i] > 96 && hold[i] < 123))
		{
			hold[i] = (hold[i] - 65 > 25) ?
				storel[hold[i] - 97] : storeh[hold[i] - 65];
		}
	}
	return (hold);
}

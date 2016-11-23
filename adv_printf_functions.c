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
	int i, size;
	char *arg;
	char *hold;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	arg = va_arg(s, char *);
	size = _strlen(arg);
	hold = malloc((size + 1) * sizeof(char));

	printf("hold: %s\n", hold);
	hold[0] = 'Z';
	printf("hold: %s\n", hold);
	for (i = 0; arg[i] != '\0'; i++)
	{
		if ((arg[i] >= 'A' && arg[i] <= 'Z') ||
		    (arg[i] >= 'a' && arg[i] <= 'z'))
		{
			hold[i] = (arg[i] - 'A' > 25) ?
				storel[arg[i] - 'a'] : storeh[arg[i] - 'A'];
		}
	}
	return (hold);
}

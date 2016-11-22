#include "holberton.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	long len;
/* basic functionality */
	len = _printf("Just printing out a string with no other options\n");
	_printf("Length of the previous string: %d\n", len);
	_printf("starting NULL check:");
	_printf(NULL);
	_printf("Null Check Ended\n");
/* strings */
	_printf("Strings:\n\n");
	_printf("%s\n", "This is a string");
	_printf("%s%s\n", "This is another string.", "Third string");
	_printf("This is a null String\n %s\n", NULL);
/* chars */
	_printf("Characters: \n\n");
	_printf("A character: %c\n", 'A')
	_printf("A null terminator: %c", '\0');
/* numbers */
	_printf("Escape a percent sign: %%\n", 'H');
	_printf("integer max (i flag): %i, integer max (d flag): %d\n", INT_MAX, INT_MAX);
	_printf("Zero (i flag): %i, Zero (d flag): %d\n", 0, 0);
	_printf("integer min (i flag): %i, interger min (d flag): %d\n", INT_MIN, INT_MIN);
/* unsigned ints */
	_printf("unsigned int test negative: %u\n", -2);
	_printf("unsigned int max: %u, unsigned int min: %u\n", UINT_MAX + 1, 0);

/* PRINTF */

/* basic functionality */
	len = printf("Just printing out a string with no other options\n");
	printf("Length of the previous string: %d\n", len);
	printf("starting NULL check:");
	printf(NULL);
	printf("Null Check Ended\n");
/* strings */
	printf("Strings:\n\n");
	printf("%s\n", "This is a string");
	printf("%s%s\n", "This is another string.", "Third string");
	printf("This is a null String\n %s\n", NULL);
/* chars */
	printf("Characters: \n\n");
	printf("A character: %c\n", 'A')
	printf("A null terminator: %c", '\0');
/* numbers */
	printf("Escape a percent sign: %%\n", 'H');
	printf("integer max (i flag): %i, integer max (d flag): %d\n", INT_MAX, INT_MAX);
	printf("Zero (i flag): %i, Zero (d flag): %d\n", 0, 0);
	printf("integer min (i flag): %i, interger min (d flag): %d\n", INT_MIN, INT_MIN);
/* unsigned ints */
	printf("unsigned int test negative: %u\n", -2);
	printf("unsigned int max: %u, unsigned int min: %u\n", UINT_MAX + 1, 0);

	return (0);
}

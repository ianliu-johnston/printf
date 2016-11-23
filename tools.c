#include <unistd.h>
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * @bufferlen: current number of bytes taken by buffer
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i + bufferlen] = src[i];
	return (dest);
}
/**
 * _strlen - gets length of the string
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}
/**
  * _putchar - prints a character.
  * @c: character to print
  * Return: call to printed character
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print a buffer.
 * @buffer: buffer passed
 * @size: number of bytes to print
 */
void _puts(char *buffer, int size)
{
	write(1, buffer, size);
}

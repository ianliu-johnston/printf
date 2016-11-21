/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)
{
	short boolean;
	int i, minus, result;

	result = boolean = 0;
	minus = -1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
	}
	return (result * minus);
}
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n, bufferlen)
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

	for (i = 0; *s; i++)
		;
	return (i);
}
/**
  * _putchar - prints a character.
  * @c: character to print
  * Return: call to printed character
  */
int _putchar(char c);
{
	return (write(1, &c, 1));
}

/**
 * _puts - print a buffer.
 * @s: buffer passed
 */
void _puts(char *buffer, int size)
{
	write(1, buffer, size);
}

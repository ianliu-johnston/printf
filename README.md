# Re-creation of the printf function

List of files:

holberton.h: Header file contains, <stdarg.h> and struct valid types. All tools tools.c and all functions in printf_functions. 

_printf.c: Main printf function.

printf_functions.c: Main helper file. Contains found_char, found_string, found_int, found_float, found_percent

tools.c: Secondary helper file. Contains _atoi, _memcpy, _strlen, and _putchar

TO DO / BUGS:

1. Check for NULL strings with %s and %c functions.
2. Check for NULL format string
3. Checks for NULL type strings
4. Betty Documentation for *(*get_valid_type(char s))(va_list)
5. Make sure the buffer resets when it is full
6. Man Page
7. %u, %o, %x, %X
8. %b = convert to binary, %p = pointer addr, %r = reverse, %R = ROT13
1-7 are probably going to be implimented
8+ may be restricted by time

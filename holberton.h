#ifndef HOLB_H
#define HOLB_H

#define BUFSIZE 1024
#include <stdarg.h>

typedef struct validTypes
{
	char *valid;
	char *(*f)();
} v_types;

int _putchar(char c);
int _printf(const char *format, ...);
char *(*get_valid_type(char s))(va_list);

/* printf_functions */
char *found_char(va_list c);
char *found_string(va_list *s);
char *found_percent();
char *found_int(va_list n);
/* tools */
int _atoi(char *s);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int _strlen(char *s);
void _puts(char *buffer, int size);
#endif

#ifndef HOLB_H
#define HOLB_H

#define BUFSIZE 1025
#include <stdarg.h>

/**
  * struct validTypes - structure to lookup functions for valid types
  * @valid: flags are preceded by a '%' character.
  * @f: pointer to function
  */
typedef struct validTypes
{
	char *valid;
	char *(*f)();
} v_types;

int _printf(const char *format, ...);
char *(*get_valid_type(char s))(va_list);
char *found_char(va_list c);
char *found_string(va_list *s);
char *found_percent();
char *found_int(va_list n);
char *found_unsigned(va_list usign);
char *found_nothing(char);
char *found_reverse(va_list s);
char *found_rot13(va_list s);
char *found_octal(va_list n);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int _strlen(char *s);
void _puts(char *buffer, int size);
int alloc_buffer(char *hold, int hlen, char *buffer, int blen, double *total);
char *ctos(char c);

#endif

#ifndef HOLB_H
#define HOLB_H

#include <stdarg.h>
typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;

int _putchar(char c);
int _printf(const char *format, ...);

/* printf_functions */
char *found_char(va_list c);
char *found_string(va_list *s);
char *found_int(va_list i);
char *found_float(va_list f);
char *found_percent(va_list percentsign);
/* tools */
int _atoi(char *s);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int _strlen(char *s);
#endif

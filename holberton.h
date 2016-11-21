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
void found_char(va_list c);
void found_string(va_list *s);
void found_int(va_list i);
void found_float(va_list f);
void found_percent(va_list percentsign);
/* tools */
int _atoi(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);
#endif

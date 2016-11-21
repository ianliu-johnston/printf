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

void found_char(va_list c);
void found_string(va_list *s);
void found_int(va_list i);
void found_float(va_list f);

#endif

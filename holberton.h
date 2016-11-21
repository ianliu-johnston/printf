#ifndef HOLB_H
#define HOLB_H

typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;

int _putchar(char c);
int _printf(const char *format, ...);

char found_char(int c);
char found_string(char *s);
int found_int(int i);
float found_float(double f);
#endif

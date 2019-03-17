#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct types - parameters to check
 * @c: type
 * @f: the function to send it to
 */
typedef struct types
{
	char *c;
	int (*f)(va_list list);
} types_t;
int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list list);
int p_str(va_list list);
int p_int(va_list list);
char *convert(unsigned int num, int base);
#endif


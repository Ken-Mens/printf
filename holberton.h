#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>
/**
 * struct types - parameters to check
 * @c: type
 * @f: the function to send it to
 */
typedef struct types
{
	char *c;
	int (*f)(va_list, list);
} types_t;
int _putchar(char c);
int _printf(const char *format, ...);
#endif
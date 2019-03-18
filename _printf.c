#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: the output we need to produce
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int x = 0;
	int counter = 0;
	int (*p)(va_list list);

	va_start(list, format);

	if (!format[x])
		return (0);
	for (; format[x]; x++)
	{
		if (format[x] == '%')
		{
			p = type_check(format[x + 1]);
			counter += (*p)(list);
			x++;
		}
		else
		{
			_putchar(format[x]);
			counter++;
		}
	}
	va_end(list);
	return (counter);
}

#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: the output we need to produce
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	types_t check[] = {

		{"c", p_char},
		{"s", p_str},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL},
	};

	va_list list;
	int x = 0;
	int y;
	int counter = 0;

	va_start(list, format);

	if (!format[x])
		return (0);
	for (; format[x]; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; check[y].c; y++)
			{
				if (*check[y].c == format[x + 1])
				{
					counter += check[y].f(list);
					x++;
				}
			}
		}
		else
		{
			_putchar(format[x]);
			counter++;
		}
	}
	va_end(list);
	return(counter);
}

#include "holberton.h"
/**
 * p_reverse - function that prints the reverse string.
 * @x: va_list argument.
 * Return: Either 0 or counter, come back to that later
 */
int p_reverse(va_list x)
{
	char *y;
	int i = 0, counting = 0;

	y = va_arg(x, char *);
	while (y[i])
	{
	i++;
	counting++;
	}
	i--;
	for ( ; i >= 0; i--)
	{
	_putchar(y[i]);
	}
	return (counting);
}

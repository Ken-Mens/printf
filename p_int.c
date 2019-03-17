#include "holberton.h"
int p_int(va_list list)
{
	int x, i;
	char *str;

	x = va_arg(list, int);
	str = convert(x, 10);
	for (i = 0; str[i]; i++);
	{
		_putchar(str[i]);
	}
	return (i);
}  

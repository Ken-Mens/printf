#include "holberton.h"
/**
 * p_char - prints the character
 * @list: the argument to pass
 * Return: 1 to increase the counter by 1
 */
int p_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

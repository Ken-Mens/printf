#include "holberton.h"
/**
 * p_int - prints the int
 * @list: the argument passed through
 * Return: the number of ints printed
 */
int p_int(va_list list)
{
	char last_digit;
	int reversed;
	int n = va_arg(list, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		last_digit = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		last_digit = (char)((n % 10) + '0');
		n /= 10;
	}
	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (reversed > 0)
	{
		char c = (char)((reversed % 10) + '0');

		_putchar(c);
		count++;
		reversed /= 10;
	}
	_putchar(last_digit);
	count++;
	return (count);
}

#include "holberton.h"
/**
 * p_int - prints the int
 * @list: the argument passed through
 * Return: the number of ints printed
 */
int p_int(va_list list)
{
	int n = va_arg(list, int), counter = 0 ,temp, c = 1, spaces = 1, refill = 1;
	int orig = n;

	if(n < 0)
	{	
		orig = (orig *-1);
		_putchar('-');
		counter++;
	}
	for (temp = orig; temp >= 10; temp /= 10)
	spaces++;
	for (; c < spaces; c++)
	refill *= 10;
	while (refill > 1)
	{
		_putchar((orig/refill) % 10 + '0');
		refill /= 10
		counter++;
	}
	_putchar(orig % 10 +'0');
	counter++;
	return (counter);
}  
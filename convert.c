#include "holberton.h"
/**
 * convert - converts number to a different base number)
 * @num: the number to convert
 * @base: the base to convert @num to
 * Return: a pointer to the array that stores the new number
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

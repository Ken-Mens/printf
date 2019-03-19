#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @list: va_list parameter
 * Return: number of characters.
 */

int rot13(va_list list)
{
	char *s = va_arg(list, char *);
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int counter = 0;

	if (s == NULL)
		s = "(ahyy)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(n[j]);
				counter++;
				break;
			}
		}
		if (!a[j])
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}

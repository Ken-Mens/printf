#include "holberton.h"
/**
 * type_check - checks for each format cases
 * @c: pointer to checker.
 * Return: Nothing.
 */
int (*type_check(char c))(va_list list)
{
	types_t check[] = {

		{"c", p_char},
		{"s", p_str},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL},
	};
	int i = 0;

	while (check[i].c)
	{
		if (c == *check[i].c)
		{
			return (check[i].f);
		}
		i++;
	}
	return (NULL);
}

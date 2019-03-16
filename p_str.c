int p_str(va_list list)
{
	int length = 0;

	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		return (0);
	}
	for (length = 0; s[length]; length++)
	{
		_putchar(s[length]);
	}
	return (length);
}

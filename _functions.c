#include "holberton.h"

/**
 * p_char - print char.
 * @valist: argument
 * Return: Void
 */
int p_char(va_list valist)
{
	_putchar (va_arg(valist, int));

	return (1);
}
/**
 * p_string - print string.
 * @valist: argument
 * Return: Void
 */
int p_string(va_list valist)
{
	char *s;
	int i;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar (s[i]);
	}
	return (i);
}

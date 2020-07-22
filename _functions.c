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

/**
 * count_num - print string.
 * @n: argument
 * Return: Void
 */
int count_num(unsigned int n)
{
	int count = 0;
	unsigned int x, z;

	if (n != 0)
	{
		z = (n / 10);
		x = (n % 10);
		count += count_num(z);
		count++;
		_putchar(x + '0');
		return (count);
	}
	return (0);
}
/**
 * p_int - print integer.
 * @valist: argument
 * Return: Void
 */
int p_int(va_list valist)
{
	int a, b = 0;
	unsigned int x;

	a = va_arg(valist, int);

	if (a < 0)
	{
		_putchar('-');
		b = 1;
		x = a * (-1);
	}
	else
	{
		x = a;
	}
	if (x > 9)
	{
		return (b + count_num(x));
	}
	_putchar (x + '0');
	return (1 + b);
}

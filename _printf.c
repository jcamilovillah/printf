#include "holberton.h"
/**
 * _printf - function.
 * @format: lista de argumentos pasados
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list valist;
	unsigned int i = 0, j = 0;

	va_start(valist, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i++;
			}
			else if (_typefor(format, i + 1) != NULL)
			{
				j += _typefor(format, i + 1)(valist);
				i++;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(valist);
	return (j);
}

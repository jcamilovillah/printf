#include "holberton.h"

/**
* print_R - prints the reversed string
* @valist: is a parameter
* Return: length of string
*/
int print_R(va_list valist)
{
		return (p_rot13(va_arg(valist, char *)));
}
/**
 * p_binary - convert decimal number to binary number.
 * @valist: arguments
 * Return: number of characters printed
*/
int p_binary(va_list valist)
{
	int i, j;
	int num = 0;
	unsigned int n;
	unsigned int arr[30];

	n = va_arg(valist, unsigned int);
	if (n < 2)
		num += _putchar(n + '0');
	else
	{
		for (j = 0; n > 0; j++)
		{
			arr[j] = n % 2;
			n = n / 2;
		}
		for (i = j - 1; i >= 0; i--)
			num += _putchar(arr[i] + '0');
	}
	return (num);
}

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

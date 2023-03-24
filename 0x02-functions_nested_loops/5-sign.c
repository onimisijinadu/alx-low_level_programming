#include "main.h"

/**
 * print_sign - function to print sign
 *
 * @n: input number
 * Return: 1 if int n is +, and 0 if int n is 0, otherwise -1 if int n is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}

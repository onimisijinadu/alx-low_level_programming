#include "main.h"

/**
 * print_last_digit - function for checking last digit of a number
 *
 * @i: function for last digit
 *
 * Return: return value of last digit
 */

int print_last_digit(int i)
{
	int n;

	n = (i % 10);
	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}

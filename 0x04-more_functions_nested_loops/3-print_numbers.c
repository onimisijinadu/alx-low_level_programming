#include "main.h"

/**
 * print_numbers - function for printing numbers
 * c: input
 * Return: always 0
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

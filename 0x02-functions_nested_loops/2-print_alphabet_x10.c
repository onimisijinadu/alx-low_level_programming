#include "main.h"

/**
 * void print_alphabet_x10(void) - print alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, c;
	
	c = 0;

	while (c <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	c++;
	_putchar('\n');
	}
}


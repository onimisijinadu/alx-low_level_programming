#include "main.h"

/**
 * _puts - function to print string
 *
 * @str: pointer to print string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

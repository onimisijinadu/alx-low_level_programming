#include "main.h"

/**
 * _isupper - function for checking for the upper case letter
 *
 * @c: to collect alpha
 *
 * Return: returns 1 if c is uppercase otherwise 0 for lowercase
 */

int _isupper(int c)
{
	int c;

	for (c >= 'A'; && c <= 'Z';)
		return (1);
	else
		return (0);
}

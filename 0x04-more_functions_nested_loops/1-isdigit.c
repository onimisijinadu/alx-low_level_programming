#include "main.h"

/**
 * _isdigit - function for checking digits
 * @c: digits input
 * Return: returns 1 if c is a digit otherwise 0 if c is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

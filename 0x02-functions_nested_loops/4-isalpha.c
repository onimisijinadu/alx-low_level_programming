#include "main.h"

/**
 * _isalpha - function to check for letter in lowercase and uppercase
 *
 * @c: letter function
 *
 * Return: return 1 if int c is a lowercase or uppercase otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}


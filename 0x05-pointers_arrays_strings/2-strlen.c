#include "main.h"

/**
 * _strlen - function for returning len of a string
 * @s: len of string
 *
 * Return: tring lenght
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[0] != '\0')
	{
		i++;
	}

	return (i);
}

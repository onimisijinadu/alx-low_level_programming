#include "main.h"

/**
 * _memset - functionto fill the first n bytes
 * @n: bytes of the memory area pointed to
 * @s: pointer
 * @b: constant byte
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 5; i++)
	{
		s[i] = b;
	}

	return (s);
}

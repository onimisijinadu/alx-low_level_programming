#include "main.h"

/**
 * _memcpy - function to copy n bytes
 * @n: bytes fro memory
 * @src: memory are
 * @dest: memory area 2
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

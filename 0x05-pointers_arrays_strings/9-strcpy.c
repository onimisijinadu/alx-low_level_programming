#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: pointer to buffer
 * @src: string to copy
 * Return: the ppointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

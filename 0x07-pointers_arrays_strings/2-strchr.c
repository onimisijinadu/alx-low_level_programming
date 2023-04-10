#include "main.h"
#include <stddef.h>
/**
 * _strchr - function to locate character
 * @c: first occurence of character
 * @s: string
 * Return: "NULL" if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return(s);
	}
	if (c == '\0')
		return(s);

	return (NULL);
}

#include"main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @needle: the substring to locate
 *
 * Return: a pointer to the begining of the located substinrg, or NULL if no
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

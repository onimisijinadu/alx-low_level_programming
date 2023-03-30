#include "main.h"

/**
 * rev_string - funtion to print reverse string
 * @s: pointer to print string
 */

void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

}

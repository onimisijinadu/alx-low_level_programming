#include <stdio.h>
#include <conio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("\n Size of a char: %zu byte(s)", (unsigned long)sizeof(a));
	printf("\n Size of an int: %zu byte(s)", (unsigned long)sizeof(b));
	printf("\n Size of a long int: %zu byte(s)", (unsigned long)sizeof(c));
	printf("\n Size of a long long int: %zu byte(s)", (unsigned long)sizeof(d));
	printf("\n Size of a float: %zu byte(s)", (unsigned long)sizeof(e));

	return (0);
}


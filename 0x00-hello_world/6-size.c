#include <stdio.h>
#include <conio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long ll;
	float f;

	printf("\n Size of a char: %zu", (unsigned long)sizeof(c));
	printf("\n Size of an int: %zu", (unsigned long)sizeof(i));
	printf("\n Size of a long int: %zu", (unsigned long)sizeof(li));
	printf("\n Size of a long long int: %zu", (unsigned long)sizeof(ll));
	printf("\n Size of a float: %zu", (unsigned long)sizeof(f));

	return (0);
}


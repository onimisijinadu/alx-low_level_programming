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

	printf("\n Size of a char: %.2zu", sizeof(c));
	printf("\n Size of an int: %.2zu", sizeof(i));
	printf("\n Size of a long int: %.2zu", sizeof(li));
	printf("\n Size of a long long int: %.2zu", sizeof(ll));
	printf("\n Size of a float: %.2zu", sizeof(f));

	return (0);
}


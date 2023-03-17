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

	printf("\n Size of a char: %.2c", sizeof(c)"\n");
	printf("\n Size of an int: %.2d", sizeof(i)"\n");
	printf("\n Size of a long int: %.2zu", sizeof(li)"\n");
	printf("\n Size of a long long int: %.2zu", sizeof(ll)"\n");
	printf("\n Size of a float: %.2f", sizeof(f)"\n");

	return (0);
}


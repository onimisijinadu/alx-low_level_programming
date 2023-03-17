#include <stdio.h>

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

	printf("\n Size of a char: %c", sizeof(c)"\n");
	printf("\n Size of an int: %d", sizeof(i)"\n");
	printf("\n Size of a long int: %zu", sizeof(li)"\n");
	printf("\n Size of a long long int: %zu", sizeof(ll)"\n");
	printf("\n Size of a float: %f", sizeof(f)"\n");

	return (0);
}


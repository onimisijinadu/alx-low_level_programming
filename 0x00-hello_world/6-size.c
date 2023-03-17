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

	printf("Size of a char: %zu", sizeof(c)"\n");
	printf("Size of an int: %zu", sizeof(i)"\n");
	printf("Size of a long int: %zu", sizeof(li)"\n");
	printf("Size of a long long int: %zu", sizeof(ll)"\n");
	printf("Size of a float: %zu", sizeof(f)"\n");

	return (0);
}


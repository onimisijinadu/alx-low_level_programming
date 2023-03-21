#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int d, n;
	n = d % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", d, n);
	}
	else if (n ==0)
	{
		printf("Last digit of %d is %d and is zero", d, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero", d, n);
	}

	/* your code goes there */
	return (0);
}

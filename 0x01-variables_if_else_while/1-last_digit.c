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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5",n,n % 10);
	}
	
	else if ((n % 10) < 6 != 0)
	{
		printf("Last digit of %d is %d and is less that 6 and not 0",n,n % 10);
	}

	else {
		printf("Last digit of %d is %d and is zero" n, n % 10);
	}

	/* your code goes there */
	return (0);
}

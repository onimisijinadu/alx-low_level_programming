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

	if (n > 5)
	{
		printf("Last digit of %d is n and is greater than 5",n);
	}
	
	else if (n == 0)
	{
		printf("Last digit of %d is n and is 0",n);
	}

	else{
		printf("Last digit of %d is n and is less that 6 and not 0", n);
	}

	/* your code goes there */
	return (0);
}

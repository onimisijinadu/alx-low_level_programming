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

	char v;
	
	if (v > 5)
	{
		printf("Last digit of %d is %c and is greater than 5",n,v);
	}
	
	else if (v == 0)
	{
		printf("Last digit of %d is %c and is 0",n,v);
	}

	else{
		printf("Last digit of %d is %c and is less that 6 and not 0",n,v);
	}

	/* your code goes there */
	return (0);
}

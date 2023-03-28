#include "main.h"

/**
 * swap_int - function for swappingpointer
 * @a: ingral input
 * @b: integral input
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

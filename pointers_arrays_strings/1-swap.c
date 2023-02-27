#include "main.h"

/**
 * swap_int -  Swap a and b
 * @a: swap to b
 * @b: swap to a
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}

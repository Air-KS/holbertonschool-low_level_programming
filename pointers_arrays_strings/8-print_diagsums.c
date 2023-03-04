#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Array
 * @size: Size
 *
 */

void print_diagsums(int *a, int size)
{
	int index, diagonal1 = 0, diagonal2 = 0;

	for (index = 0; index < size; index++)
	{
		diagonal1 += a[(size + 1) * index];
		diagonal2 += a[(size - 1) * (index + 1)];
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}

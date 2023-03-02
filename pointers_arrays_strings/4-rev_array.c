#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer
 * @n: variable
 *
 */

void reverse_array(int *a, int n)
{
	int index;
	int temporary;

	for (index = n - 1; index >= n / 2; index--)
	{
		temporary = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temporary;
	}
}

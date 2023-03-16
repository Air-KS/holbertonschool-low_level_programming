#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: Taille minimum
 * @max: Taille Maximum
 *
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int lenght;
	int index;

	if (min > max)
		return (NULL);

	lenght = max - min + 1;

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < lenght; index++)
		arr[index] = min++;

	return (arr);
}

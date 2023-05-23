#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search algos
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	/* Vérifie si la tableau existe */
	if (array == NULL)
		return (-1);

	/* Parcours le tableau */
	for (; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		/* Vérifie si la valeur à été trouvée */
		if (array[index] == value)
		{
			return (index);
		}

	}

	/* La valeur n'a pas été trouvée, return -1 */
	return (-1);
}

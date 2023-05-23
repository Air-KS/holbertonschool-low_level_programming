#include "search_algos.h"

/**
 * binary_search - Perform binary search on an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, mid, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printArray(array, left, right);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * printArray - Print to search, calls function
 * @array: Array to be printed
 * @startIndex: left-most element in array
 * @endIndex: right-most element in array
 */
void printArray(int *array, size_t startIndex, size_t endIndex)
{
	size_t index;

	printf("Searching in array: ");
	for (index = startIndex; index < endIndex; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("%d\n", array[index]);
}

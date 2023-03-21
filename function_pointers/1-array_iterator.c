#include "function_pointers.h"

/**
* array_iterator - function that searches for an integer
* @array: Pointeur vers le premier élément du tableau
* @size: la taille du tableau
* @action: Pointeur qui sera exécutée sur chaque élément du tableau
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}

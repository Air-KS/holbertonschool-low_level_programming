#include "function_pointers.h"

/**
* int_index - Ecrire une fonction qui recherche un entrer
* @array: Un pointeur vers le premier élément du tableau
* @size: la taille du tableau
* @cmp: un pointeur vers la fonction de comparaison qui sera utilisée
* pour chaque élément du tableau
*
* Return: -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}

#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of the matrix
* @height: height of the matrix
*
* Return: tab
*/

int **alloc_grid(int width, int height)
{
	int **tab;
	int index;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);

	if (tab == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		tab[index] = malloc(sizeof(int) * width);
		if (tab[index] == NULL)
		{
			for (index = 0; index < height; index++)
				free(tab[index]);

			free(tab);
			return (NULL);
		}
	}
	return (tab);
}

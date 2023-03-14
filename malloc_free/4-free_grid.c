#include "main.h"

/**
* free_grid - Free a 2 dimensional array of integers.
* @grid: grid to free
* @height: height of the grid
*
*Return: grid
*/

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height == 0)
		return;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

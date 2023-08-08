#include "main.h"
#include "stdlib.h"

/**
 * free_grid - function that frees a 2d grid prev created by alloc_grid func
 *
 * @grid: the grid to be freed
 * @height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

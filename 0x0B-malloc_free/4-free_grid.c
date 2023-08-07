#include <stdlib.h>

/**
 * free_grid - Frees memory of a 2D grid.
 * @grid: 2D grid to be freed.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


# include <stdlib.h>
/**
 * free_grid - frees 2d grid
 * @grid:  a double p
 * @height: the height
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


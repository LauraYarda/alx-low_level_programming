#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
	free(grid[a]);
	}
	free(grid);
}

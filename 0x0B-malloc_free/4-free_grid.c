#include "main.h"

/**
 * free_grid -frees a 2d grid
 * @grid: memory block to befreed
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

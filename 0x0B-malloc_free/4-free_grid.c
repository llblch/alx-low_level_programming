#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: height of matrix
 * Return: returns nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

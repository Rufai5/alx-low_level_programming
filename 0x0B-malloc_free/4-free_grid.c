#include "main.h"

/**
 * free_grid - frees a 2d array
 * @grid: Memory block to be freed
 * @height: height fo the array
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

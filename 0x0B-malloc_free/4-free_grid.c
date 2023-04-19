#include "main.h"

/**
 * free_grid - it is a function that frees a 2 dimensional grid
 *	previously created by your alloc_grid function
 *
 * @grid: grid to be freed
 * @height: it is the height of the grid (integer)
 *
 * Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int f = 0;

	for (; f < height; f++)
		free(grid[f]);
	free(grid);
}

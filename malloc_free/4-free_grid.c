#include <stdlib.h>

/**
 * free_grid - a function
 * @grid: pointer to 2 dimemsion array
 * @height: height of array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

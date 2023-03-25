#include "main.h"
#include "stdlib.h"

/**
*free_grid - freeing an allocated memory area
*@grid: a pointer
*@@height: an integer
*/

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

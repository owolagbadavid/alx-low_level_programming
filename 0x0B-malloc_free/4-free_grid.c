#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_grid - dups a string
*
* @grid: arr
* @height: int
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

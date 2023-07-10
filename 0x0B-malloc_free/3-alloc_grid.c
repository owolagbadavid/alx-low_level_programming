#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* alloc_grid - dups a string
*
* @height: int
* @width: int
* Return: int
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **) malloc(height * sizeof(int *));
	if (!arr)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);

}

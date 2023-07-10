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

	arr = (int **) malloc(height * sizeof(int **));
	if (!arr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		{
			if (!arr[i])
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
	}
	return (arr);

}

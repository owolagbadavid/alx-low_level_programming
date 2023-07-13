#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: in
 * @max: int
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int wind, i;

	wind = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * wind);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < wind; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

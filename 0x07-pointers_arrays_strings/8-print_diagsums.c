#include "main.h"
#include <stdio.h>
/**
*  print_diagsums - stuff
*
* @a: array
* @size: int
* @:
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, first, second;

	for (i = 0; i < size; i++)
	{

		first += a[(size * i) + i];
		second += a[(size * i) + (size - 1) - i];
	}



	printf("%d, ", first);
	printf("%d\n", second);

}

#include "main.h"

/**
* print_array - stuff
*
* @a: pointer
* @n: int
* Return: int
*/
void print_array(int *a, int n)
{


	int counter = 0;

	while (counter < n)
	{
		printf("%d", a[counter]);
		if (counter < (n - 1))
		{
			printf(", ");
		}
		counter++;
	}
	_putchar('\n');
}


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
		_putchar(a[counter]);
		if (counter < (n - 1))
		{
			_putchar(',');
		}
		counter++;
	}
	_putchar('\n');
}


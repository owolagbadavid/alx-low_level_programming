#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: int array
 * @size: size_t
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

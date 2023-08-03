#include "main.h"

/**
 * get_bit - func
 * @n: int
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(n) * 8))
		return (-1);
	bit = (n >> index);
	return (bit & 1);
}

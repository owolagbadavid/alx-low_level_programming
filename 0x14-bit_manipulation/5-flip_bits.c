#include "main.h"

/**
 * flip_bits - func
 * @n: comp
 * @m: comp
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t i, count = 0;
	unsigned long int j = (sizeof(unsigned long int) * 8);

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			count += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}

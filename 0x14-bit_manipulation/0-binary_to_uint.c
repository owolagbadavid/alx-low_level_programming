#include "main.h"

/**
 * binary_to_uint - converts binary
 * @b: binary
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	int i = -1;
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (b[++i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}

#include "main.h"

/**
 * print_binary - func
 * @n: decimal
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long val = n;

	if (val > 1)
	{
		print_binary(val >> 1);
	}
	_putchar((val & 1) + '0');
}

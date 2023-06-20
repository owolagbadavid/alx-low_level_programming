#include "main.h"
/**
* print_times_table - prints n times table
*
* @n: the integer to print
*
* Return: void
*/
void print_times_table(int n)
{
	int row = 0, col = 0, prod = 0;

	while (row <= n)
	{
		while (col <= n)
		{
			prod = row * col;
			_print_int(prod);
			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
			col++;
		}
		col = 0;
		row++;	
	}
}



/**
* _print_int - prints an integer using putchar
*
* @n: the integer to print
*
* Return: void
*/
void _print_int(int n)
{
	int d; /* digit variable */

	if (n < 0) /* if negative number */
	{
		_putchar('-'); /* print a minus sign */
		n = -n; /* make n positive */
	}
	d = n % 10; /* get the last digit */
	if (n / 10 > 0) /* if there are more digits */
	{
		_print_int(n / 10); /* print the remaining digits recursively */
	}
	_putchar(d + '0'); /* print the last digit */
}

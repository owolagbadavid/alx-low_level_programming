#include "main.h"
/**
* print_number - prints an integer using putchar
*
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
	int d; /* digit variable */

	if (n < 0) /* if negative number */
	{
		_putchar('0' - 3); /* print a minus sign */
		n = -n; /* make n positive */
	}
	d = n % 10; /* get the last digit */
	if (n / 10 > 0) /* if there are more digits */
	{
		print_number(n / 10); /* print the remaining digits recursively */
	}
	_putchar(d + '0'); /* print the last digit */
}

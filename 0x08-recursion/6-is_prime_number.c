#include "main.h"

/**
* is_prime_number - stuff
*
* @n: int
* @:
* @:
* Return: int
*/
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}

/**
 * divisors - stuff
 * @n: int
 * @m: int
 * Return: int
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

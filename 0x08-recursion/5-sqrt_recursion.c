#include "main.h"

/**
* _sqrt_recursion - stuff
*
* @n: int
* @:
* Return: int
*/
int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));

}

/**
 * _sqrt - helper
 * @n: int
 * @i: int tester
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

#include "main.h"
/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_pal(s, 0, len - 1));
}


/**
* is_pal - stuff
*
* @s: string
* @start: int
* @end: int
* Return: int
*/
int is_pal(char *s, int start, int end)
{

	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_pal(s, start + 1, end - 1));
	}
	else
		return (0);
}

/**
* _strlen_recursion - stuff
*
* @s: string
* @:
* @:
* Return: int
*/
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}

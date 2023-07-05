#include "main.h"

/**
* _puts_recursion - stuff
*
* @s: string
* @:
* @:
* Return: nothing
*/
void _puts_recursion(char *s)
{

	_putchar(*s++);
	if (*s != '\0')
		_puts_recursion(s);

	else
		_putchar('\n');

}

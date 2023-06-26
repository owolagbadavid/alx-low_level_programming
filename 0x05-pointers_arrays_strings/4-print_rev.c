#include "main.h"

/**
* print_rev - stuff
*
* @s: pointer
* Return: void
*/
void print_rev(char *s)
{


	int counter = _strlen(s);
	
	if ( counter == 0 )
	{
		_putchar('');
		_putchar('\n');
		return;
	}

	while (counter > 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar(s[counter]);
	_putchar('\n');
}
/**
* _strlen - stuff
*
* @s: pointer
* Return: int
*/
int _strlen(char *s)
{


	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

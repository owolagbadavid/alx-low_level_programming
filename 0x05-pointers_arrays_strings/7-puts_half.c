#include "main.h"

/**
* puts_half - stuff
*
* @str: pointer
* Return: int
*/
void puts_half(char *str)
{


	int counter = _strlen(str);

	counter = ((counter - 1) / 2 + 1);
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
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

#include "main.h"

/**
* puts2 - stuff
*
* @str: pointer
* Return: int
*/
void puts2(char *str)
{


	int counter = 0;

	while (str[counter] != '\0')
	{
		if ( counter % 2 == 0) 
			_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}


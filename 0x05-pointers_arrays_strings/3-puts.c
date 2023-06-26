#include "main.h"

/**
* _puts - stuff
*
* @str: pointer
* Return: int
*/
void _puts(char *str)
{


	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
}


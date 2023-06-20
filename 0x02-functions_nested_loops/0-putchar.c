#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
* main - Entry point
*
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{

	int i = 0;

	while ("_putchar"[i] != '\0')
	{
		_putchar("_putchar"[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

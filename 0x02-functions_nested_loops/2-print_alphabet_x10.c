#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		i++;
		if (i != 10)
			_putchar('\n');
	}
	_putchar('\n');
}

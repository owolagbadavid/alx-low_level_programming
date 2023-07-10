#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* create_array - prints an integer using putchar
*
* @size: size
* @c: char
* Return: *char
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}

	p = (char *) malloc(size);
	if (!p)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);

}

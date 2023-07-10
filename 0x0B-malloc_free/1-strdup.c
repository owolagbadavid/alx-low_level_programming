#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _strdup - dups a string
*
* @str: str
* Return: *char
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (!str)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p = (char *) malloc(i + 1);
	if (!p)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);

}

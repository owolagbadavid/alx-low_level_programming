#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - dups a string
*
* @s1: str
* @s2: str
* Return: *char
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, size1 = 0, size = 0;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
		size += i;
		size1 = i;
	}
	else
		*s1 = '';
	if (s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
		}
		size += i;
	}
	else
		*s2 = '';
	p = (char *) malloc(size + 1);
	if (!p)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
		p[i + size1] = s2[i];
	p[i + size1] = '\0';
	return (p);

}

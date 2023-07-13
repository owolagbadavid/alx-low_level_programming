#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* string_nconcat - dups a string
*
* @s1: str
* @s2: str
* @n: int
* Return: *char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
		s1 = "";
	if (s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
		}
		size += n;
	}
	else
		s2 = "";
	p = (char *) malloc(size + 1);
	if (!p)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0' && i < n; i++)
		p[i + size1] = s2[i];
	p[i + size1] = '\0';
	return (p);

}

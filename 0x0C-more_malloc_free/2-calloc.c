#include "main.h"
#include <stdlib.h>

/**
 * _calloc - stuff
 * @nmemb: int
 * @size: int
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;
	return ((void *) p);
}

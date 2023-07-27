#include "lists.h"

/**
 * list_len - stuff
 * @h: pointer to node
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

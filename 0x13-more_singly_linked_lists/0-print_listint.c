#include "lists.h"

/**
 * print_listint - fun
 * @h: pointer
 *
 * Return: int +
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

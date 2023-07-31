#include "lists.h"

/**
 * get_nodeint_at_index - func
 * @head: pointer
 * @index:index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}

	return (NULL);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: nth node of list, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t num_nodes = 0;

	while (head)
	{
		if (num_nodes == index)
			return (head);
		num_nodes++;
		head = head->next;
	}
	return (NULL);
}

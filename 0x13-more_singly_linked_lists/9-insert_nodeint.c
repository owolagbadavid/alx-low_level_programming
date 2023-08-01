#include "lists.h"

/**
 * insert_nodeint_at_index - func
 * @head: pointer double
 * @idx: index
 * @n: nodeval
 *
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
		}
		i++;
		temp = temp->next;
	}
	if (idx > i)
		return (NULL);
	return (new);

}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;

	if (!head)
		return (-1);
	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	current = *head;
	while (index > 1)
	{
		if (!current)
			return (-1);
		current = current->next;
		index--;
	}
	if (!current->next)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	if (temp->next)
		temp->next->prev = current;
	free(temp);
	return (1);
}

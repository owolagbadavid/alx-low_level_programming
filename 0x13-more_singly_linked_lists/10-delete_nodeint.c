#include "lists.h"

/**
 * delete_nodeint_at_index - func
 * @head: pointer double
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	size_t i = 0;

	temp1 = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	do {
		if (temp1->next == NULL)
			return (-1);
		i++;
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
	while (i < index - 1)
	temp1->next = temp2->next;
	free(temp2);

	return (1);
}

#include "lists.h"

/**
 * pop_listint - func
 * @head: pointer double
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	val = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (val);
}

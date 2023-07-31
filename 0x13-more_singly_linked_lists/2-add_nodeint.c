#include "lists.h"

/**
 * add_nodeint - func
 * @head: double pointer
 * @n: nodeval
 *
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}

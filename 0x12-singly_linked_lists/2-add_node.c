#include "lists.h"

/**
 * add_node - stuff
 * @head: pointer to p to node
 * @str: string
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}

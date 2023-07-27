#include "lists.h"

/**
 * add_node_end - stuff
 * @head: pointer to p to node
 * @str: string
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *temp1, *temp2;

	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);

	if (str)
	{
		temp1->str = _strdup(str);
		while (str[i] != '\0')
			i++;
		temp1->len = i;
	}
	else
	{
		temp1->str = NULL;
		temp1->len = 0;
	}
	temp1->next = NULL;
	if (*head)
	{
	temp2 = *head;
	while (temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp1;
	}
	else
		*head = temp1;
	return (*head);
}

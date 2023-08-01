#include "lists.h"

/**
 * find_listint_loop - fun
 * @head: pointer
 *
 * Return: pointer
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1 = head;
	listint_t *temp2 = head;

	if (head == NULL)
		return (NULL);

	while (temp1 && temp2 && temp2->next)
	{
		temp2 = temp2->next->next;
		temp1 = temp1->next;
		if (temp2 == temp1)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (temp2);
		}
	}

	return (NULL);
}

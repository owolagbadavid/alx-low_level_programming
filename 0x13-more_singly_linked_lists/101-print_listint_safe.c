#include "lists.h"

/**
 * print_listint_safe - func
 * @head: header
 *
 * Return: size
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
	}

	return (count);
}

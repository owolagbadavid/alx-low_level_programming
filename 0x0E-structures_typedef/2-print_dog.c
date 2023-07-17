#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function
 * @d: dog_t
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: ");
		if (d->age)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

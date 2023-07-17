#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - new dog 
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = _strdup(name);
	if (!new_d->name)
	{
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	new_d->owner = _strdup(owner);
	if (!new_d->owner)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	return (new_d);

}

/**
* _strdup - dups a string
*
* @str: str
* Return: *char
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (!str)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p = (char *) malloc(i + 1);
	if (!p)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);

}

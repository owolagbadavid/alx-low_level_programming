#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concats
 * @ac: num of args
 * @av: args
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len = len + _strlen(av[i]);

	len += 1 + ac;

	str = malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
	}
	return (k);
}

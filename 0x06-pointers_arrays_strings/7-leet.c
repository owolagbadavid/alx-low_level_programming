#include "main.h"
/**
 * leet - stuff
 * @s: pointer
 * Return: string
 */
char *leet(char *s)
{
	int i, j, k;
	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}

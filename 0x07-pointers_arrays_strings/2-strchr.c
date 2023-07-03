#include "main.h"
#include <stddef.h>
/**
* *_strchr - stuff
*
* @c: char
* @s: pointer
* Return: char
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);

}

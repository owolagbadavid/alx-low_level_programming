#include "main.h"

/**
* string_toupper - stuff
*
* @s: pointer
* Return: char
*/
char *string_toupper(char *s)
{


	int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= 97 && s[length] <= 122)
		{
			s[length] = s[length] - 32;
		}
		length++;
	}

	return (s);
}

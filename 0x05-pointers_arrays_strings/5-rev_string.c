#include "main.h"

/**
* rev_string - stuff
*
* @s: pointer
* Return: void
*/
void rev_string(char *s)
{
	int i;
	char temp;
	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}


}

/**
* _strlen - stuff
*
* @s: pointer
* Return: int
*/
int _strlen(char *s)
{


	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

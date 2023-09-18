#include "main.h"

/**
* *_strncpy - stuff
*
* @src: pointer
* @dest: pointer
* @n: int
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{


	int counter = 0;


	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

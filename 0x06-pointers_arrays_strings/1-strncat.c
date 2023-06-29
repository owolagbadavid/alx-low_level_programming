#include "main.h"

/**
* *_strncat - stuff
*
* @src: pointer
* @dest: pointer
* @n: inte
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{


	int counter = 0, length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (counter < n && src[counter] != '\0')
	{
		dest[length + counter] = src[counter];
		counter++;
	}
	dest[length + counter] = '\0';
	return (dest);
}

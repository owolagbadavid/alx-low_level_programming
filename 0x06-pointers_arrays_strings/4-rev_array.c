#include "main.h"

/**
* rev_array - stuff
*
* @a: pointer
* @n: length
* Return: void
*/
void rev_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}


}

#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	long double i = 1, j = 1, temp;
	int l;

	for (l = 0; l < 98; l++)
	{
		if (l != 97)
			printf("%.0Lf, ", j);
		else
			printf("%.0Lf\n", j);
		temp = i;
		i = j;
		j = temp + i;
	}



	return (0);
}

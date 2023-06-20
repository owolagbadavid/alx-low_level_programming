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
	double i = 1, j = 1, temp, sum = 0;

	while (j < 4000000)
	{
		sum += j;
		temp = i;
		i = j;
		j = temp + i;
	}
	printf("%.0f\n", sum);


	return (0);
}

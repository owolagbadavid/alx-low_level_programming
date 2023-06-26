#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)
{
	int target = 2772, i = 0, j = 0, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (target > 126)
	{
		random = rand() % 126;
		password[i] = random;
		target -= random;
		i++;
	}
	if (target > 0)
		password[i] = target;
	else
	{
		i--;
	}


	while (j <= i)
	{
		printf("%c", password[j]);
		j++;
	}

	return (0);
}

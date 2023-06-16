#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	string output = "Last digit of %d is %d ";
	int last = n % 10;

	if (last > 5)
	{
		output = output + "and is greater than 5\n";
	}
	else if (last == 0)
	{
		output = output + "and is 0\n";
	}
	else
	{
		output = output + "and is less than 6 and not 0\n";
	}

	return (0);
}

#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{

	int n, j, k;

	for (n = 0; n < 10; n++)
	{
		for (j = n + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{

				putchar(n + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (n == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

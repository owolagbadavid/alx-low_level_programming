#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{

	int n, j;

	for (n = 0; n < 10; n++)
	{
		for (j = n + 1; j < 10; j++)
		{
			putchar(n + '0');
			putchar(j + '0');
			if (j == 9 && n == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{

	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

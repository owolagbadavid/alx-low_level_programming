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
		putchar(n + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}

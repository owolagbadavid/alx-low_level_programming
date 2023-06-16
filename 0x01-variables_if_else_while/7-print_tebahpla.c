#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{

	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}

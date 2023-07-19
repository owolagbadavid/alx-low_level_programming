#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: int of args
 * @argv: args
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (count < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + count));
		count++;
		if (atoi(argv[1]) > count)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}

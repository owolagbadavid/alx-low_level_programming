#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	char key[7];
	int i, len, sum;

	if (argc != 2)
	{
		return (1);
	}
	len = strlen(argv[1]);
	key[0] = argv[1][0];
	sum = argv[1][0];
	for (i = 1; i < len; i++)
		sum += argv[1][i];
	key[1] = sum ^ 0x3b;
	sum = 1;
	for (i = 0; i < len; i++)
		sum *= argv[1][i];
	key[2] = sum ^ 0x4f;
	sum = argv[1][0];
	for (i = 1; i < len; i++)
		if (argv[1][i] > sum)
			sum = argv[1][i];
	srand(sum ^ 0xe);
	key[3] = rand();
	sum = 0;
	for (i = 0; i < len; i++)
		sum += argv[1][i] * argv[1][i];
	key[4] = sum ^ 0xef;
	for (i = 0, sum = 0; i < argv[1][0]; i++)
		sum = rand();
	key[5] = sum ^ 0xe5;
	key[6] = '\0';
	printf("%s", key);
	return (0);
}

#include "variadic_functions.h"

/**
 * print_numbers - sums all
 * @separator: char
 * @n: int
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	if (n)
	{
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
	}
}

#include "variadic_functions.h"

/**
 * print_strings - sums all
 * @separator: char
 * @n: int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (ptr != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

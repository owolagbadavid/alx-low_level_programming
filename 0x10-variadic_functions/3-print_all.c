#include "variadic_functions.h"

/**
 * print_all - sums all
 * @format: char
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *seprt;
	va_list args;

	va_start(args, format);
	while (format[j] && format)
	{
		seprt = "";
		if (format[j + 1])
			seprt = ", ";
		switch (format[j])
		{

		case 'c':
			printf("%c%s", va_arg(args, int), seprt);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), seprt);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), seprt);
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, seprt);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}

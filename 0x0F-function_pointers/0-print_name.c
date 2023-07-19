#include "function_pointers.h"
/**
 * print_name - function print name
 * @name: the name
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

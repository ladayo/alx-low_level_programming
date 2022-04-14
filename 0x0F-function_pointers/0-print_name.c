#include "function_pointers.h"

/**
 * print_name - pointer func to print name
 *
 * @name: name to print
 * @f: func pointer
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

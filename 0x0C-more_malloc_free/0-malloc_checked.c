#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc
 *
 * @b: int var
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

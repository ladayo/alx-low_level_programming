#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array from a char
 *
 * @size: space allocation
 * @c: charcter
 *
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr =  malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min value of range
 * @max: max value of range
 *
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int n, i;

	if (min > max)
		return (NULL);
	n = max - min + 1;

	ptr = calloc(n, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		if (min <= max)
		{
			ptr[i] = min;
			min++;
		}
	}
	return (ptr);
}

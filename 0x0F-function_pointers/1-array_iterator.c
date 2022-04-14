#include "function_pointers.h"

/**
 * array_iterator - executes a func with parameters
 * @array: list of array elements
 * @size: size of array
 * @action: fucntion pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

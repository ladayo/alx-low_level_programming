#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: list of array elements
 * @size: size of array
 * @cmp: fucntion pointer
 *
 * Return: integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result_index;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			result_index = i;
			break;
		}
		else
		{
			result_index = -1;
		}
	}
	return (result_index);
}

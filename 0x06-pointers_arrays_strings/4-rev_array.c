#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - reverse an array
 *
 * @a: the given array
 * @n: number of array elements
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int last_element = n - 1;
	int temp;

	i = 0;
	while (i < last_element)
	{
		temp = a[i];
		a[i] = a[last_element];
		a[last_element] = temp;
		i++;
		last_element--;
	}
}

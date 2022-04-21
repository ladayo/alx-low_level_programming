#include "lists.h"

/**
 * list_len - number of element in linked list
 * @h: pointer to the list
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

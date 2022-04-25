#include "lists.h"

/**
 * listint_len - return number of elements in link list
 * @h: head to first element
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n)
			count++;
		h = h->next;
	}
	return (count);
}

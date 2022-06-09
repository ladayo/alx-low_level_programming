#include "lists.h"

/**
 * dlistint_len - get the number of elements in a list
 *
 * @h: pointer to head of list
 *
 * Return: number of elements in doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}

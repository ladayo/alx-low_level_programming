#include "lists.h"

/**
 * print_listint - print elements and return number of nodes in link
 * @h: head to first element
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

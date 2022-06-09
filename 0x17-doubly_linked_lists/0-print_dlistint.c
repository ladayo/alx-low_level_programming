#include "lists.h"

/**
 * print_dlistint - prints the number of elements in doubly linked list
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num = 0;
	
	while (h)
	{
		node_num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_num);
}

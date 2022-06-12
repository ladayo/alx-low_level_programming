#include "lists.h"

/**
 * add_dnode - add a node to D list
 * head: adderess of node to add
 * n: element in node
 *
 * Return: adderess of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_head = malloc(sizeof(dlistint_t));
	if (n_head == NULL)
	{
		return NULL;
	}
	n_head->prev = NULL;
	n_head->next = *head;
	n_head->n = n;
	*head = n_head;
	return n_head;
}

#include "lists.h"

/**
 * add_dnodeint_end - add node to end of D list
 * @head: head of D list
 * @n: element in head node of D list
 *
 * Return: adderess of new element
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c_node, *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;

	if (!(*head))
	{
		*head = n_node;
		return (n_node);
	}
	c_node = *head;
	if (!c_node->next)
	{
		c_node->next = n_node;
		n_node->prev = c_node;
		return (n_node);
	}
	while (c_node->next)
		c_node = c_node->next;

	c_node->next = n_node;
	n_node->prev = c_node;
	return (n_node);
}

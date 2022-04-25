#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of linked list
 * @head: head of linked list
 * @n: value of elemnt in new node
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	if (*head)
		return (*head);
	else
		return (NULL);
}

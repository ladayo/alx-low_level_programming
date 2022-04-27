#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in a given index
 * @head: address of pointer to head
 * @idx : given index
 * @n: value to be added
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *forward, *new_node;
	unsigned int count = 0;

	new_node = (struct listint_s *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	ptr = *head;
	if (idx - 1)
	{
		while (count < (idx - 1))
		{
			ptr = ptr->next;
			count++;
		}
		forward = ptr->next;
		ptr->next = new_node;
		new_node->next = forward;
		return (new_node);
	}
	else
	{
		return (NULL);
	}
}

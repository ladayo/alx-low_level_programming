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
	unsigned int i;
	listint_t *current_node, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx)
	{
		current_node = *head;
		for (i = 0; i < idx - 1 && current_node != NULL; i++)
		{
			current_node = current_node->next;
		}

		if (current_node == NULL)
			return (NULL);
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}

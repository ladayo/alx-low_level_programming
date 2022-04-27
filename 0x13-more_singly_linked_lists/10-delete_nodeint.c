#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: pointer to the first node
 * @index: index of node to be deleted
 * Return: 1 on successs and -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
	}

	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);
	return (1);
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a givin index
 * @head: pointer to head
 * @index: given node position
 *
 * Return: node of type listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0 && head != NULL)
		return (head);
	while (count < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}

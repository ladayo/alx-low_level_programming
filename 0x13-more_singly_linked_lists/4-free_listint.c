#include "lists.h"

/**
 * free_listint - free type of listint list
 * @head: pointer to first node in link
 *
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
	free(head);
	free(ptr);
}

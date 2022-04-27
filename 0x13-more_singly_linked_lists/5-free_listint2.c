#include "lists.h"

/**
 * free_listint2 - free list and set head to NULL
 * @head: adderess of head pointer
 *
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}

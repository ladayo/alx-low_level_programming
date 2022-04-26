#include "lists.h"

/**
 * free_listint - free type of listint list
 * @head: pointer to first node in link
 *
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *clear;

	ptr = head;
	while (ptr->next != NULL)
	{
		clear = ptr;
		ptr = ptr->next;
		free(clear);
	}
	free(ptr);
}

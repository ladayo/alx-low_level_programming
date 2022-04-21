#include "lists.h"

/**
 * free_list - free memory assigned to the list
 * @head: head of the list
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

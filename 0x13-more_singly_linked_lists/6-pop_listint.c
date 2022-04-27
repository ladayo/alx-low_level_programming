#include "lists.h"

/**
 * pop_listint - delete head of list
 * @head: address of head pointer
 *
 * Return: head node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	num = ptr->n;
	free(ptr);
	return (num);
}

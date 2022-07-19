#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - remove node
 * @head: A pointer input
 * Return: Null or otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *zoneof_buffer;
	int index;

	if (*head == NULL)
		return (0);

	zoneof_buffer = *head;
	index = (*head)->n;
	*head = (*head)->next;

	free(zoneof_buffer);

	return (index);
}

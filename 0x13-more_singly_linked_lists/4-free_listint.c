#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees the place for lists
 * @head: A pointer input
 */
void free_listint(listint_t *head)
{
	listint_t *zoneof_buffer;

	while (head)
	{
		zoneof_buffer = head->next;
		free(head);
		head = zoneof_buffer;
	}
}

#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees the place
 * @head: A pointer input
 * Description: head to NULL placer
 */
void free_listint2(listint_t **head)
{
	listint_t *zoneof_buffer;

	if (head == NULL)
		return;
	while (*head)
	{
		zoneof_buffer = (*head)->next;
		free(*head);
		*head = zoneof_buffer;
	}

	head = NULL;
}

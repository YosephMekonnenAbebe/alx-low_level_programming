#include "lists.h"

/**
 * reverse_listint - Revers
 * @head: A pointer
 * Return: A pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forwarding, *backwarding;

	if (head == NULL || *head == NULL)
		return (NULL);

	backwarding = NULL;

	while ((*head)->next != NULL)
	{
		forwarding = (*head)->next;
		(*head)->next = backwarding;
		backwarding = *head;
		*head = forwarding;
	}

	(*head)->next = backwarding;

	return (*head);
}

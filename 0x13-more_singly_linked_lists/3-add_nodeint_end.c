#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds node to terminating point
 * @head: A pointer input
 * @n: integer for the node
 * Return: Null or otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *initial_node, *eventual_node;

	initial_node = malloc(sizeof(listint_t));
	if (initial_node == NULL)
		return (NULL);

	initial_node->n = n;
	initial_node->next = NULL;

	if (*head == NULL)
	{
		*head = initial_node;
	}
	else
	{
		eventual_node = *head;
		while (eventual_node->next != NULL)
			eventual_node = eventual_node->next;
		eventual_node->next = initial_node;
	}

	return (*head);
}


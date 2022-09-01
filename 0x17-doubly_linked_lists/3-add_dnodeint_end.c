#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: integer value of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *yosephnew_node = malloc(sizeof(dlistint_t)), *yosephtemp_node = *head;

	if (!head || !yosephnew_node)
	{
		return (NULL);
	}
	yosephnew_node->n = n;
	yosephnew_node->next = NULL;
	if (!*head)
	{
		yosephnew_node->prev = NULL;
		*head = yosephnew_node;
		return (*head);
	}
	while (yosephtemp_node->next)
	{
		yosephtemp_node = yosephtemp_node->next;
	}
	yosephtemp_node->next = yosephnew_node;
	yosephnew_node->prev = yosephtemp_node;
	return (yosephnew_node);
}

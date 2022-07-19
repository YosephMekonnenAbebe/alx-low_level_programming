#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds new node of the given list
 * @head: A pointer input to the head
 * @n: The parameter for new node
 * Return: Null or otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *thenode_new;

	thenode_new = malloc(sizeof(listint_t));
	if (thenode_new == NULL)
		return (NULL);

	thenode_new->n = n;
	thenode_new->next = *head;

	*head = thenode_new;

	return (thenode_new);
}

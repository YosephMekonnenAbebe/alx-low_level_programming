#include "lists.h"

/**
 * free_dlistint -  a function that free a dlistint_t list
 * @head: head of the linkedlist
 * Return: Nothing!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *yosephtemp_node;

	while (head)
	{
		yosephtemp_node = head;
		head = head->next;
		free(yosephtemp_node);
	}
	head = NULL;
}

#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints lists
 * @h: input
 * Return: Nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list_node = h;
	size_t incr = 0;

	while (list_node)
	{
		printf("%i\n", list_node->n);
		incr++;
		list_node = list_node->next;
	}

	return (incr);
}

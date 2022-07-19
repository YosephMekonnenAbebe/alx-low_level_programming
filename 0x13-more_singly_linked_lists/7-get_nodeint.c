#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Locates a node
 * @head: A pointer
 * @index: The nodes index
 * Return: Null or otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int traversable_node = 0;

	while (traversable_node < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		traversable_node++;
	}
	return (head);
}

#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - Insert
 * @head: A pointer
 * @idx: The index
 * @n: The intege
 *
 * Return: Null pr otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy_node = *head;
	unsigned int inode;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{	new_node->next = copy_node;
		*head = new_node;
		return (new_node);
	}

	for (inode = 0; inode < (idx - 1); inode++)
	{
		if (copy_node == NULL || copy_node->next == NULL)
			return (NULL);

		copy_node = copy_node->next;
	}

	new_node->next = copy_node->next;
	copy_node->next = new_node;

	return (new_node);
}

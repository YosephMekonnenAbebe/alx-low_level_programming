#include "lists.h"

/**
 * delete_nodeint_at_index - Deletess
 * @head: A pointerd
 * @index: The index
 * Return: On success on failiure -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *buff, *copy_node = *head;
	unsigned int inode;

	if (copy_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy_node);
		return (1);
	}

	for (inode = 0; inode < (index - 1); inode++)
	{
		if (copy_node->next == NULL)
			return (-1);

		copy_node = copy_node->next;
	}

	buff = copy_node->next;
	copy_node->next = buff->next;
	free(buff);
	return (1);
}

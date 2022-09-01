#include "lists.h"

/**
* dlistint_len - get the length of nodes in a double linked list
* @h: header of double linked list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t yosephi = 0;
	int yosephiniprint = 0;

	for (yosephi = 0; h != NULL; yosephi++)
	{
		if (h->prev != NULL && yosephiniprint == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			yosephiniprint = 1;
			yosephi = 0;
		}
		h = h->next;
	}
	return (yosephi);
}

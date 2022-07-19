#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Displays the elements in the list
 * @h: Pointer input
 *
 * Return: lists
 */
size_t listint_len(const listint_t *h)
{
	size_t listed_nodenum = 0;

	while (h)
	{
		listed_nodenum++;
		h = h->next;
	}

	return (listed_nodenum);
}

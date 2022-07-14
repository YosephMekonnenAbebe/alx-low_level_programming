#include "lists.h"

/**
 * print_list - to display all the elements
 * @h: the pointer which points
 *
 * Return:  nodes count and returned
 */
size_t print_list(const list_t *h)
{
unsigned int idiaa = 0;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	idiaa++;
}
return (idiaa);
}

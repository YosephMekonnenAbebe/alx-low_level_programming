#include "lists.h"

/**
 * print_list - to display all the elements
 * @h: the pointer which points
 *
 * Return:  nodes count and returned
 */
size_t print_list(const list_t *h)
{
const list_t *emper;
unsigned int idiaa = 0;

emper = h;
while (emper)
{
printf("[%u] %s\n", emper->len, emper->str);
emper = emper->next;
idiaa++;
}
return (idiaa);
}

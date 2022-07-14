#include "lists.h"

/**
 * list_len - element finder
 * @h: the starter of the linked list pointer
 *
 * Return: counted elements
 */
size_t list_len(const list_t *h)
{
const list_t *emper;
unsigned int idia = 0;

emper = h;
while (emper)
{
emper = emper->next;
idia++;
}
return (idia);
}
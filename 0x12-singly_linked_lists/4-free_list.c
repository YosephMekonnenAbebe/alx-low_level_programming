#include "lists.h"

/**
 * free_list - frees the lists needed
 * @head: pointer used for the struct
 */
void free_list(list_t *head)
{
list_t *buffering, *next;

buffering = head;
while (buffering != NULL)
{
next = buffering->next;
free(buffering->str);
free(buffering);
buffering = next;
}
}

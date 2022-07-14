#include "lists.h"

/**
 * free_list - frees the lists needed
 * @head: pointer used for the struct
 */
void free_list(list_t *head)
{
list_t *buffering;

while (head != NULL)
{
buffering = head;
head = head->next;
free(buffering->str);
free(buffering);
}
}

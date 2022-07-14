#include "lists.h"

/**
 * free_list - frees the lists needed
 * @head: pointer used for the struct
 */
void free_list(list_t *head)
{
list_t *buf_buf;

while (head != NULL)
{
buf_buf = head;
head = head->next;
free(buf_buf->str);
free(buf_buf);
}
}

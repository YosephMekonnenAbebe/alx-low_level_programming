#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - a linked list which is singly
 * @str: string - structure input
 * @len: for the length
 * @next: the comming node pointer
 *
 * Description: Linked list
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
int _putchar(char c);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */

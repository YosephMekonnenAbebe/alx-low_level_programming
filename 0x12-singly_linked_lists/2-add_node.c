#include "lists.h"
#include <string.h>
/**
 * _strlen - displays the length of a string
 * @s: input 1
 *
 * Return: the value needed
 */
int _strlen(const char *s)
{
	int imax
		for (imax = 0 s[imax] != 0; imax++)
			;
	return (imax);
}
/**
 * add_node - at the begining of the list new node adder
 * @head: pointer
 * @str: pointer for string
 *
 * Return: each elements addres
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = (list_t *) malloc(sizeof(list_t));

	if (newhead == NULL)
		return (NULL);
	newhead->str = strdup(str);
	newhead->len = _strlen(str);
	newhead->next = (*head);
	(*head) = newhead;
	return (newhead);
}

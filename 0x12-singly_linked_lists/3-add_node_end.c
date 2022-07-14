#include "lists.h"
#include <string.h>
/**
 * _strlen - lenghth of the string finder
 * @s: input 1;
 *
 * Return: the value
 */
int _strlen(const char *s)
{
	int ideaa = 0;

	while (s[ideaa] != 0)
	{
		;
		ideaa++;
	}
	return (ideaa);
}
/**
 * add_node_end - node adder at the end of a given list
 * @head: pointer taker
 * @str: pointer of a string
 *
 * Return: the addres has to be returned
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addis = (list_t *) malloc(sizeof(list_t));
	list_t *end = *head;

	if (addis == NULL)
		return (NULL);
	addis->str = strdup(str);
	addis->len = _strlen(str);
	addis->next = NULL;
	if (*head == NULL)
		(*head) = addis;
	else
	{
		while (end->next != NULL)
			end = end->next;
	}
	if (end)
		end->next = addis;
	return (addis);
}

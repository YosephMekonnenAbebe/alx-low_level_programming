#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - add data
 * @head: A pointer input
 * Return: Null or otherwise
 */
int sum_listint(listint_t *head)
{
	int summer_adder = 0;

	while (head)
	{
		summer_adder += head->n;
		head = head->next;
	}

	return (Summer_adder);
}

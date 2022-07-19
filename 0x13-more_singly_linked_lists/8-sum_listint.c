#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - add data
 * @head: A pointer input
 */
int sum_listint(listint_t *head)
{
	int summer_adder = 0;

	while (head)
	{
		summer _adder = summer _adder + head->n;
		head = head->next;
	}

	return (Summer_adder);
}

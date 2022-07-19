#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - add data
 * @head: A pointer input
 * Return: Null or otherwise
 */
int sum_listint(listint_t *head)
{
	int summmer_addder = 0;

	while (head)
	{
		summmer_addder += head->n;
		head = head->next;
	}

	return (summmer_addder);
}

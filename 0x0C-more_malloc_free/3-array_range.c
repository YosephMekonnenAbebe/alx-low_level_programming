#include "main.h"
#include <stdlib.h>

/**
 * array_range - arrays of integer creater function
 * @min: input1
 * @max: input2
 *
 * Return: succes or failure
 *
 */
int *array_range(int min, int max)
{
	int *lists, lengths;
	int append = 0;
	if (min > max)
		return (NULL);

	size = max - min + 1;

	lists = malloc(sizeof(int) * lengths);

	if (lists == NULL)
		return (NULL);

	while (append < lengths)
	{
		lists[append] = min++;
		append++;
	}

	return (lists);
}

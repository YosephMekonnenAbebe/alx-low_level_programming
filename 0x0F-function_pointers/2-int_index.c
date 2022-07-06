#include "function_pointers.h"

/**
 * int_index -a function that displays the inter value
 * @array: pointer to an intiger of arrays
 * @size: elements of the array
 * @cmp: it is the pointer to a function for comparision
 *
 * Return: index to be returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);
		while (m < size)
		{
			if (cmp(array[m]))
				break;
			if (!cmp(array[size - 1]))
				return (-1);
		}
		return (m);
		m++;
	}
	return (-1);
}

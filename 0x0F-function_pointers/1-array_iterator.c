#include "function_pointers.h"

/**
 * array_iterator - executes a function parameter.
 * @array: pointer to integer array.
 * @size:  size of an array.
 * @action: a pointer to the function you need to use.
 * Return: nothing to return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t szi;
	
	if (action != NULL && array != NULL)
	{
		for (szi = 0; szi < size; szi++)
			action(array[szi]);
	}
}

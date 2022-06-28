#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * simple_print_buffer - prints buffer in hexa
 * @c:  input
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int j;

	if (size == 0)
		return (NULL);
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (j = 0; j < size; j++)
				array[j] = c;
		}
	}
	return (array);
}

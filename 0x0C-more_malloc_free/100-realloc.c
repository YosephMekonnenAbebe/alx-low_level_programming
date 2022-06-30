#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - afunction to reallocate a memory
 * @ptr: input1
 * @old_size: sizer old
 * @new_size: new sizer
 *
 * Return: Succes or Failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int j = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (NULL);
		return (ptr1);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	while (j < old_size && j < new_size)
	{
		ptr1[j] = ((char *) ptr)[j];
		j++;
	}
	free(ptr);
	return (ptr1);
}


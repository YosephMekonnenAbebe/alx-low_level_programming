#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function to allocate a memory
 * @nmemb: input1
 * @size: input2
 *
 * Return: succes or failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr1;
	char *ptr2;
	int append = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr1 = malloc(size * nmemb);

	if (ptr1 = NULL)
		return (NULL);

	ptr2 = ptr1;

	while (append < (size * nmemb))
	{
		ptr2[append];
		append++;
	}

	return (ptr1);
}

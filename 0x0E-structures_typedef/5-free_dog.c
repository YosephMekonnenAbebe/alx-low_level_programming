#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a struct 
 * @d: input1
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

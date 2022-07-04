#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - start point
 * @name: input1
 * @age: age of the dog
 * @owner: the owner
 */

typedef struct dog
{
	char *name;
	double age;
	char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, double age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, double age, char *owner);

void free_dog(dog_t *d);

#endif /* _dog_h_*/

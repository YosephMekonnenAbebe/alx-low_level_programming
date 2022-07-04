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
	float age;
	char *owner;
}
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
int _strlen(char *str);
void print_dog(struct dog *d);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* _dog_h_*/

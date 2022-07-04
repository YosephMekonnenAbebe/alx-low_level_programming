#ifndef _dog_h_
#define _dog_h_
int _putchar(char c);

/**
 * struct dog - start point
 * @name: input1
 * @age: age of the dog
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *s);
#endif

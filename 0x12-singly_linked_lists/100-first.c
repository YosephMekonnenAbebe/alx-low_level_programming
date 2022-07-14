#include <stdio.h>

void at_the_begining(void) __attribute__ ((constructor));

/**
 * at_the_begining - prints sentence before main begins
 *
 * Return: has nothing to return
 */
void at_the_begining(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

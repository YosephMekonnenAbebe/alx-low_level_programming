#include "main.h"
#include <unistd.h>

/**
 * _putchar - used to put a character
 * @c: input
 *
 * Return: succes or failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

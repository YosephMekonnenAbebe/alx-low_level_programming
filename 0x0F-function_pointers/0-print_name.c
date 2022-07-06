#include "function_pointers.h"

/**
 * print_name - a function that displays name
 * @name: pointer input
 * @f: function pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func-selecting fun
 * @s:Operation input
 * @s:First input
 *
 * Return: Pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k;

	k = 0;
	while (k < 5)
	{
		if (*s == *(ops[k]).op)
		{
			return (*(ops[k]).f);
		}
		k++;
	}
	return (NULL);
}

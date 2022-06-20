#include "main.h"
/**
 * _memcpy - function starting point
 * dest: pointer
 * @src: pointer 2
 * @n: intigerinput
 *
 * Return: The pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}

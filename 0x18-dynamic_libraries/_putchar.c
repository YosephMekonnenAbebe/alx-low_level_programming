#include <unistd.h>

/**
 * _putchar -starting point
 * @c: To be printed
 *
 * Return: succes means 1
 * on error, -1 should
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

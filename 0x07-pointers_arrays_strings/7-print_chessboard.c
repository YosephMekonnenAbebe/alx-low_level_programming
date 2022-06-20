#include "main.h"
/**
 * print_chessboard - print
 * @a: The character
 *
 * Return: nothing
 */
void print_chessboard(char(*a)[8])
{
	int x = 0;
	int y = 0;

	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		x++;
	_putchar('\n');
	}
}
